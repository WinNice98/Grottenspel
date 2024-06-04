void add_log(char string[100]){
	FILE *logfile = fopen("logs.log", "a");
	fputs(string, logfile);
	fputs("\n", logfile);
}

typedef struct str{
	char str[100];
} string;

typedef struct pos{
	int damage;
	int armour;
}POSSOBILITY;

typedef struct enemy{
	int id;
	int level;
	int health;
	int health_max;
	int damage;
	int armour;
	string name;
} ENEMY;

typedef struct stats{
	int days;
	int killed_mobs;
	int drunk;
	int dungeons;
	int spent_money;
	int earned_money;
	long long ingame_time;
} STATS;

typedef struct health{
	int health;
	int stamina;
	int xp;
	int sleep;
} STATUS;

typedef struct inventory{
	int id1;
	int id2;
	int id3;
	int id4;
	int id5;
	int dur;
	int num;
	int choose;
} INV;

typedef struct player{
	char name[80];
	int level;
	int money;
	long long logging_time;
	STATS ststictics;
	STATUS status;
	INV item[51];
	POSSOBILITY pos;
} SAVE;

typedef struct wtf {
	SAVE player;
	ENEMY enemy;
	int choice;
} SPECIAL;

INV home_chest[201];
int money;

SAVE new_save(){
	add_log("[INFO] Начато создание нового профиля");
	SAVE player_data;
	printf("Введите имя для профиля: \n");
	gets(player_data.name);
	player_data.level = 1;
	player_data.money = 200;
	player_data.status.health = 100;
	player_data.status.sleep = 100;
	player_data.status.stamina = 100;
	player_data.status.xp = 100;
	player_data.ststictics.days = 0;
	player_data.ststictics.drunk = 0;
	player_data.ststictics.dungeons = 0;
	player_data.logging_time = time(NULL);
	player_data.ststictics.earned_money = 200;
	player_data.ststictics.ingame_time = 0;
	player_data.ststictics.killed_mobs = 0;
	player_data.ststictics.spent_money = 0;
	player_data.pos.armour = 0;
	player_data.pos.damage = 1;
	int j = 0;
	while(j < 200){
		home_chest[j].dur = 0;
		home_chest[j].id1 = 0;
		home_chest[j].id2 = 0;
		home_chest[j].id3 = 0;
		home_chest[j].id4 = 0;
		home_chest[j].id5 = 0;
		home_chest[j].num = 0;
		j++;
	}
	int i = 0;
	for(; i < 50; i++){
		player_data.item[i].dur = 0;
		player_data.item[i].id1 = 0;
		player_data.item[i].id2 = 0;
		player_data.item[i].id3 = 0;
		player_data.item[i].id4 = 0;
		player_data.item[i].id5 = 0;
		player_data.item[i].num = 0;
		player_data.item[i].choose = 0;
	}
	add_log("[INFO] Окночено создание нового профиля");
	return player_data;
}

SAVE load_save(int choice){
	add_log("[INFO] Чтение данных игрока начато");
	SAVE player_data;
	FILE *saving, *chest;
	switch(choice){
		case 1:{
			if ((saving = fopen("saves/save1.txt", "r")) == NULL){
				add_log("[ERROR] Ошибка при чтении! Файл повреждён или его не существует.");
			}
			if ((chest = fopen("saves/save_chest1.txt", "r")) == NULL){
				add_log("[ERROR] Ошибка при чтении! Файл повреждён или его не существует.");
			}
			break;
		}
		case 2:{
			if ((saving = fopen("saves/save2.txt", "r")) == NULL){
				add_log("[ERROR] Ошибка при чтении! Файл повреждён или его не существует.");
			}
			if ((chest = fopen("saves/save_chest2.txt", "r")) == NULL){
				add_log("[ERROR] Ошибка при чтении! Файл повреждён или его не существует.");
			}
			break;
		}
		case 3:{
			if ((saving = fopen("saves/save3.txt", "r")) == NULL){
				add_log("[ERROR] Ошибка при чтении! Файл повреждён или его не существует.");
			}
			if ((chest = fopen("saves/save_chest3.txt", "r")) == NULL){
				add_log("[ERROR] Ошибка при чтении! Файл повреждён или его не существует.");
			}
			break;
		}
		case 4:{
			if ((saving = fopen("saves/save4.txt", "r")) == NULL){
				add_log("[ERROR] Ошибка при чтении! Файл повреждён или его не существует.");
			}
			if ((chest = fopen("saves/save_chest4.txt", "r")) == NULL){
				add_log("[ERROR] Ошибка при чтении! Файл повреждён или его не существует.");
			}
			break;
		}
		case 5:{
			if ((saving = fopen("saves/save5.txt", "r")) == NULL){
				add_log("[ERROR] Ошибка при чтении! Файл повреждён или его не существует.");
			}
			if ((chest = fopen("saves/save_chest5.txt", "r")) == NULL){
				add_log("[ERROR] Ошибка при чтении! Файл повреждён или его не существует.");
			}
			break;
		}
		default:{
			add_log("[ERROR] Ошибка выбора!");
			break;
		}
	}
	fgets(player_data.name, 80, saving);
	fscanf(saving, "%d", &player_data.level);
	fscanf(saving, "%d", &player_data.money);
	fscanf(saving, "%d %d %d %d\n", &player_data.status.health, &player_data.status.sleep, &player_data.status.stamina, &player_data.status.xp);
	player_data.logging_time = time(NULL);
	fscanf(saving, "%d %d %d %d %d %d %d\n", &player_data.ststictics.days, &player_data.ststictics.drunk, &player_data.ststictics.dungeons, &player_data.ststictics.earned_money, &player_data.ststictics.ingame_time, &player_data.ststictics.killed_mobs, &player_data.ststictics.spent_money);
	int i = 0;
	for(; i < 50; i++){
		fscanf(saving, "%d:%d:%d:%d:%d %d %d %d\n", &player_data.item[i].id1, &player_data.item[i].id2, &player_data.item[i].id3, &player_data.item[i].id4, &player_data.item[i].id5, &player_data.item[i].dur, &player_data.item[i].num, &player_data.item[i].choose);
	}
	int j = 0;
	for(; j < 200; j++){
		fscanf(chest, "%d:%d:%d:%d:%d %d %d %d\n", &home_chest[j].id1, &home_chest[j].id2, &home_chest[j].id3, &home_chest[j].id4, &home_chest[j].id5, &home_chest[j].dur, &home_chest[j].num, &home_chest[j].choose);
	}
	fclose(saving);
	fclose(chest);
	add_log("[INFO] Чтение данных игрока окончено");
	return player_data;
}

SAVE save_save(int choice, SAVE player_data){
	add_log("[INFO] Сохранение данных игрока начато");
	FILE *saving, *chest;
	switch(choice){
		case 1:{
			if ((saving = fopen("saves/save1.txt", "w")) == NULL){
				add_log("[ERROR] Ошибка при записи!");
			}
			if ((chest = fopen("saves/save_chest1.txt", "w")) == NULL){
				add_log("[ERROR] Ошибка при записи!");
			}
			break;
		}
		case 2:{
			if ((saving = fopen("saves/save2.txt", "w")) == NULL){
				add_log("[ERROR] Ошибка при записи!");
			} 
			if ((chest = fopen("saves/save_chest2.txt", "w")) == NULL){
				add_log("[ERROR] Ошибка при записи!");
			}
			break;
		}
		case 3:{
			if ((saving = fopen("saves/save3.txt", "w")) == NULL){
				add_log("[ERROR] Ошибка при записи!");
			} 
			if ((chest = fopen("saves/save_chest3.txt", "w")) == NULL){
				add_log("[ERROR] Ошибка при записи!");
			}
			break;
		}
		case 4:{
			if ((saving = fopen("saves/save4.txt", "w")) == NULL){
				add_log("[ERROR] Ошибка при записи!");
			} 
			if ((chest = fopen("saves/save_chest4.txt", "w")) == NULL){
				add_log("[ERROR] Ошибка при записи!");
			}
			break;
		}
		case 5:{
			if ((saving = fopen("saves/save5.txt", "w")) == NULL){
				add_log("[ERROR] Ошибка при записи!");
			}
			if ((chest = fopen("saves/save_chest5.txt", "w")) == NULL){
				add_log("[ERROR] Ошибка при записи!");
			}
			break;
		}
		default:{
			add_log("[ERROR] Ошибка выбора!");
			break;
		}
	}
	fputs(player_data.name, saving);
	fprintf(saving,"\n");
	fprintf(saving, "%d \n", player_data.level);
	fprintf(saving, "%d \n", player_data.money);
	fprintf(saving, "%d %d %d %d\n", player_data.status.health, player_data.status.sleep, player_data.status.stamina, player_data.status.xp);
	player_data.ststictics.ingame_time = player_data.ststictics.ingame_time - player_data.logging_time + time(NULL);
	fprintf(saving, "%d %d %d %d %lld %d %d\n", player_data.ststictics.days, player_data.ststictics.drunk, player_data.ststictics.dungeons, player_data.ststictics.earned_money, player_data.ststictics.ingame_time, player_data.ststictics.killed_mobs, player_data.ststictics.spent_money);
	int i = 0;
	for(; i < 50; i++){
		fprintf(saving, "%d:%d:%d:%d:%d %d %d %d\n", player_data.item[i].id1, player_data.item[i].id2, player_data.item[i].id3, player_data.item[i].id4, player_data.item[i].id5, player_data.item[i].dur, player_data.item[i].num, player_data.item[i].choose);
	}
	int j = 0;
	for(; j < 200; j++){
		fprintf(chest, "%d:%d:%d:%d:%d %d %d \n", home_chest[j].id1, home_chest[j].id2, home_chest[j].id3, home_chest[j].id4, home_chest[j].id5, home_chest[j].dur, home_chest[j].num, home_chest[j].choose);
	}
	add_log("[INFO] Сохранение данных игрока окончено");
	fclose(chest);
	fclose(saving);
	return player_data;
}
