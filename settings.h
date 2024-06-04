#include <locale.h>
#include <Windows.h>
#define UP 72
#define DOWN 80
#define ENTER 13

void display_Settings_Menu(int current) {
    system("cls");
    setlocale(LC_ALL, "Rus");
    printf("Настройки:\n");
    printf("%s Изменить тему на 'Тёмная'\n", current == 0 ? "=>" : " ");
    printf("%s Изменить тему на 'Светлая'\n", current == 1 ? "=>" : " ");
    printf("%s Изменить тему на 'Терминал'\n", current == 2 ? "=>" : " ");
    printf("%s Изменить тему на 'Океан'\n", current == 3 ? "=>" : " ");
    printf("%s Вернуться назад\n", current == 4 ? "=>" : " ");
}

void Settings(){
	add_log("[INFO] Открыты настройки");
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
                        add_log("[INFO] Изменёна цветовая тема на Тёмная");
                        break;
                    case 1:
                    	SetConsoleTextAttribute(hConsole, 0);
                        SetConsoleTextAttribute(hConsole, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE);
                        add_log("[INFO] Изменёна цветовая тема на Светлая");
                        break;
                    case 2:
                        SetConsoleTextAttribute(hConsole, 0);
                        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
                        add_log("[INFO] Изменёна цветовая тема на Терминал");
                        break;
                    case 3:
                        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | BACKGROUND_BLUE);
                        add_log("[INFO] Изменёна цветовая тема на Океан");
                        break;
                    case 4:
                        printf("Назад...\n");
                        break;
                }
                break;
        }
    } while (key != ENTER || choice != 4);
    add_log("[INFO] Настройки закрыты");
}
