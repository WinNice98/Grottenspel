void print(string* c, int i, int max){
	int j = 1;
	system("cls");
	while (j <= max){
		if(i == j){
			printf("%d. %s << \n", j, c[j].str);
			j++;
		} else {
			printf("%d. %s \n", j, c[j].str);
			j++;
		}
	}
}

int menu(int max, string* c){
	int key;
	int i = 1;
	while(1){
		print(c, i, max);
		key = getch();
		switch(key){
			case 13:{
				system("cls");
				return i;
			}
			case 72:{
				if (i <= 1){
					i = max;
				} else {
					i--;
				}
				break;
			}
			case 80:{
				if (i >= max){
					i = 1;
				} else {
					i++;
				}
				break;
			}
			case 224:{
				break;
			}
			default:{
				char logs[100];
				strcpy(logs, "[ERROR] Ошибка при выборе в меню");
				add_log(logs);
				break;
			}
		}
	}
	
}

void text(char filename[20], int num, int num2){
	FILE *name;
	string file_route;
	strcpy(file_route.str, "tex/");
	strcat(file_route.str, filename);
	if( (name = fopen(file_route.str, "r")) == NULL){
		char logs[100];
		strcpy(logs, "[ERROR] Ошибка чтения файла с названием игры");
		add_log(logs);
	} else{
		char a[num];
		int i = 1;
		while (i <= num2){
			fgets(a, num, name);
			printf("%s", a);
			i++;
		}
	}
}

