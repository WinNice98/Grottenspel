#include <locale.h>
#include <Windows.h>
#define UP 72
#define DOWN 80
#define ENTER 13

void display_Settings_Menu(int current) {
    system("cls");
    setlocale(LC_ALL, "Rus");
    printf("���������:\n");
    printf("%s �������� ���� �� 'Ҹ����'\n", current == 0 ? "=>" : " ");
    printf("%s �������� ���� �� '�������'\n", current == 1 ? "=>" : " ");
    printf("%s �������� ���� �� '��������'\n", current == 2 ? "=>" : " ");
    printf("%s �������� ���� �� '�����'\n", current == 3 ? "=>" : " ");
    printf("%s ��������� �����\n", current == 4 ? "=>" : " ");
}

void Settings(){
	add_log("[INFO] ������� ���������");
	int choice = 0;
    int key;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    do {
        display_Settings_Menu(choice);
        key = getch();
        switch (key) {
            case UP:
                choice = (choice - 1 + 5) % 5;
                break;
            case DOWN:
                choice = (choice + 1) % 5;
                break;
            case ENTER:
                switch (choice) {
                    case 0:
                        SetConsoleTextAttribute(hConsole, 0);
                        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
                        add_log("[INFO] ������� �������� ���� �� Ҹ����");
                        break;
                    case 1:
                    	SetConsoleTextAttribute(hConsole, 0);
                        SetConsoleTextAttribute(hConsole, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE);
                        add_log("[INFO] ������� �������� ���� �� �������");
                        break;
                    case 2:
                        SetConsoleTextAttribute(hConsole, 0);
                        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
                        add_log("[INFO] ������� �������� ���� �� ��������");
                        break;
                    case 3:
                        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | BACKGROUND_BLUE);
                        add_log("[INFO] ������� �������� ���� �� �����");
                        break;
                    case 4:
                        printf("�����...\n");
                        break;
                }
                break;
        }
    } while (key != ENTER || choice != 4);
    add_log("[INFO] ��������� �������");
}
