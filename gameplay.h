int effector(int choice) {
    add_log("[INFO] �������� ��������.");
    switch (choice) {
        case 1: {
            return 10;
            break;
        }
        case 2: {
            return 20;
            break;
        }
        case 3: {
            return 30;
            break;
        }
        case 4: {
            return 40;
            break;
        }
        case 5: {
            return 50;
            break;
        }
        case 6: {
            return 60;
            break;
        }
        case 7: {
            return 70;
            break;
        }
        default: {
            return 0;
            break;
        }
    }
}

INV random_item(int level) {
    INV item;
    srand(time(NULL));
    int fortune = rand() % 101;
    item.id1 = rand() % 9;
    if (level >= 0) {
        if (level >= 10) {
            if (level >= 20) {
                if (level >= 30) {
                    if (level >= 40) {
                        if (level >= 50) {
                            if (fortune <= 60) {
                                item.id2 = 6;
                            }
                            if (fortune > 60 && fortune <= 70) {
                                item.id2 = 5;
                            }
                            if (fortune > 70 && fortune <= 80) {
                                item.id2 = 4;
                            }
                            if (fortune > 80 && fortune <= 90) {
                                item.id2 = 3;
                            }
                            if (fortune > 90 && fortune <= 95) {
                                item.id2 = 2;
                            }
                            if (fortune > 95 && fortune <= 100) {
                                item.id2 = 1;
                            }
                        }else {
                            if (fortune <= 60) {
                                item.id2 = 5;
                            }
                            if (fortune > 60 && fortune <= 70) {
                                item.id2 = 4;
                            }
                            if (fortune > 70 && fortune <= 80) {
                                item.id2 = 3;
                            }
                            if (fortune > 80 && fortune <= 90) {
                                item.id2 = 2;
                            }
                            if (fortune > 90 && fortune <= 95) {
                                item.id2 = 1;
                            }
                            if (fortune > 95 && fortune <= 100) {
                                item.id2 = 6;
                            }
                        }
                    } else {
                        if (fortune <= 60) {
                            item.id2 = 4;
                        }
                        if (fortune > 60 && fortune <= 70) {
                            item.id2 = 3;
                        }
                        if (fortune > 70 && fortune <= 80) {
                            item.id2 = 2;
                        }
                        if (fortune > 80 && fortune <= 90) {
                            item.id2 = 1;
                        }
                        if (fortune > 90 && fortune <= 95) {
                            item.id2 = 5;
                        }
                        if (fortune > 95 && fortune <= 100) {
                            item.id2 = 6;
                        }
                    }
                } else {
                    if (fortune <= 60) {
                        item.id2 = 3;
                    }
                    if (fortune > 60 && fortune <= 70) {
                        item.id2 = 2;
                    }
                    if (fortune > 70 && fortune <= 80) {
                        item.id2 = 1;
                    }
                    if (fortune > 80 && fortune <= 90) {
                        item.id2 = 4;
                    }
                    if (fortune > 90 && fortune <= 95) {
                        item.id2 = 5;
                    }
                    if (fortune > 95 && fortune <= 100) {
                        item.id2 = 6;
                    }
                }
            } else {
                if (fortune <= 60) {
                    item.id2 = 3;
                }
                if (fortune > 60 && fortune <= 70) {
                    item.id2 = 2;
                }
                if (fortune > 70 && fortune <= 80) {
                    item.id2 = 1;
                }
                if (fortune > 80 && fortune <= 90) {
                    item.id2 = 4;
                }
                if (fortune > 90 && fortune <= 95) {
                    item.id2 = 5;
                }
                if (fortune > 95 && fortune <= 100) {
                    item.id2 = 6;
                }
            }
        } else {
            if (fortune <= 60) {
                item.id2 = 1;
            }
            if (fortune > 60 && fortune <= 70) {
                item.id2 = 2;
            }
            if (fortune > 70 && fortune <= 80) {
                item.id2 = 3;
            }
            if (fortune > 80 && fortune <= 90) {
                item.id2 = 4;
            }
            if (fortune > 90 && fortune <= 95) {
                item.id2 = 5;
            }
            if (fortune > 95 && fortune <= 100) {
                item.id2 = 6;
            }
        }
    }
    srand(time(NULL) + 58);
    fortune = rand() % 41;
    if (fortune >= 5) {
        if (fortune >= 10) {
            if (fortune >= 15) {
                if (fortune >= 20) {
                    if (fortune >= 25) {
                        if (fortune >= 30) {
                            if (fortune >= 35) {
                                item.id3 = 7;
                            } else {
                                item.id3 = 6;
                            }
                        } else {
                            item.id3 = 5;
                        }
                    } else {
                        item.id3 = 4;
                    }
                } else {
                    item.id3 = 3;
                }
            } else {
                item.id3 = 2;
            }
        } else {
            item.id3 = 1;
        }
    } else {
        item.id3 = 0;
    }
    srand(time(NULL) + 1488);
    fortune = rand() % 101;
    if (fortune >= 20) {
        if (fortune >= 40) {
            if (fortune >= 60) {
                if (fortune >= 80) {
                    item.id4 = 4;
                } else {
                    item.id4 = 3;
                }
            } else {
                item.id4 = 2;
            }
        } else {
            item.id4 = 1;
        }
    } else {
        item.id4 = 0;
    }
    if(item.id1 != 4) {
        item.num = 1;
    } else {
        item.num = rand() % 31;
    }
    FILE *dur;
    if ((dur = fopen("tex/id.txt", "r")) == NULL) {
        char logs[100];
        strcpy(logs, "[ERROR] ������ ������ �����");
        add_log(logs);
    } else {
        int i = 0;
        int id1, id2, id3, id4, id5;
        if (item.id1 == 4) {
            item.id5 = 1;
        } else {
            while (1) {
            fscanf(dur, "%d:%d:%d:%d:%d", &id1, &id2, &id3, &id4, &id5);
            string a;
            fgets(a.str, 100, dur);
            if (id1 == item.id1 && id2 == item.id2 && item.id1 < 9 && item.id1 != 4) {
                item.id5 = (id5 * (100 + effector(item.id3))) / 100;
                break;
            }
        }
        }

        fclose(dur);
    }
    item.dur = 0;
    if (item.id1 == 4) {
        srand(time(NULL) - 911);
        item.num = rand() % 31;
    }
    item.choose = 0;
    add_log("[INFO] ������ ��������� �������.");
    return item;
}

int find_tasks() {
    srand(time(NULL));
    int level;
    level = rand() % 101;
    add_log("[INFO] ������� ����������.");
    while (1) {
        char key;
        printf(
            "�������� �����:\n\n(��� ���������� ������ ������� -> | ��� ������ ������� ENTER | ��� ������ ������� ESC)\n\n\n\t\t�������:");
        printf("%d", level);
        key = getch();
        switch (key) {
            case 77: {
                level = rand() % 101;
                break;
            }
            case 13: {
                system("cls");
                return level;
                break;
            }
            case 27: {
                return -1;
                break;
            }
            default: {
                break;
            }
        }
        system("cls");
    }
}

int taverna(int show, int mon) {
    add_log("[INFO] ����� ����� � �������.");
    if (show) {
        text("taverna.txt", 50, 10);
        printf("����� ���������� � �������, ����� ��� ����� ��������� ����� ������� ��� ��� ����� ���� ������\n");
        system("PAUSE");
    }
    string choice[4];
    strcpy(choice[1].str, "����� �������");
    strcpy(choice[2].str, "��������� (+10 � �������, -20 �����)");
    strcpy(choice[3].str, "����� �� �������");
    switch (menu(3, choice)) {
        case 1: {
            int level = find_tasks();
            if (level == -1) {
                taverna(0, mon);
            } else {
                return level;
            }
            break;
        }
        case 2: {
            if (mon < 20) {
                printf("������������ �����! \n");
                system("PAUSE");
                taverna(0, mon);
            } else {
                printf("�� ������ �������� � ������, +10 � �������\n");
                system("PAUSE");
                return 2;
            }
            break;
        }
        case 3: {
            return 0;
            break;
        }
    }
}

string show_name(INV item) {
    FILE *open;
    if ((open = fopen("tex/id.txt", "r")) == NULL) {
        add_log("[ERROR] ������ ������ ����� � ����������");
    } else {
        string name_in_file;
        string name;
        int id1, id2, id3, id4, id5;
        while (1) {
            fscanf(open, "%d:%d:%d:%d:%d ", &id1, &id2, &id3, &id4, &id5);
            fgets(name_in_file.str, 100, open);
            if (id1 == item.id1 && item.id2 == id2) {
                switch (item.id3) {
                    case 1: {
                        strcpy(name.str, "������� ");
                        break;
                    }
                    case 2: {
                        strcpy(name.str, "������������ ");
                        break;
                    }
                    case 3: {
                        strcpy(name.str, "������������ ");
                        break;
                    }
                    case 4: {
                        strcpy(name.str, "����������� ");
                        break;
                    }
                    case 5: {
                        strcpy(name.str, "�������������� ");
                        break;
                    }
                    case 6: {
                        strcpy(name.str, "��������� ");
                        break;
                    }
                    case 7: {
                        strcpy(name.str, "�������������� ");
                        break;
                    }
                    case 0: {
                        strcpy(name.str, "");
                        break;
                    }
                }
                switch (item.id4) {
                    case 1: {
                        strcat(name.str, "�������� ");
                        break;
                    }
                    case 2: {
                        strcat(name.str, "������� ");
                        break;
                    }
                    case 3: {
                        strcat(name.str, "�������� ");
                        break;
                    }
                    case 4: {
                        strcat(name.str, "��������� ");
                        break;
                    }
                    case 5: {
                        strcat(name.str, "��� ");
                        break;
                    }
                    case 6: {
                        strcat(name.str, "��� ");
                        break;
                    }
                    case 0: {
                        strcat(name.str, "");
                        break;
                    }
                }
                strcat(name.str, name_in_file.str);
                fclose(open);
                name.str[strcspn(name.str, "\n")] = '\0';
                add_log("[INFO] ��������� �������� ��������.");
                return name;
            }
        }
    }
}

SAVE chest(SAVE player) {
    add_log("[INFO] ����� ������ ������.");
    string doing[4];
    strcpy(doing[1].str, "�������� � ������");
    strcpy(doing[2].str, "������� �� �������");
    strcpy(doing[3].str, "�����");
    switch (menu(3, doing)) {
        case 1: {
            int i = 1;
            string names[51];
            while (i <= 50) {
                string numfun = show_name(player.item[i - 1]);
                strcpy(names[i].str, numfun.str);
                i++;
            }
            printf("�������� �������, ������� �� ������ �������� � ������\n");
            int choice = menu(50, names);
            int j = 0;
            while (home_chest[j].id1 != 0) {
                j++;
            }
            home_chest[j] = player.item[choice - 1];
            home_chest[j].choose = 0;
            player.item[choice - 1].id1 = 0;
            player.item[choice - 1].id2 = 0;
            player.item[choice - 1].id3 = 0;
            player.item[choice - 1].id4 = 0;
            player.item[choice - 1].id5 = 0;
            player.item[choice - 1].dur = 0;
            player.item[choice - 1].num = 0;
            chest(player);
            break;
        }
        case 2: {
            int i = 1;
            string names[201];
            while (i <= 200) {
                string namefun = show_name(home_chest[i - 1]);
                strcpy(names[i].str, namefun.str);
                i++;
            }
            printf("�������� �������, ������� �� ������ �������� � ���������\n");
            int choice = menu(200, names) - 1;
            int j = 0;
            while (player.item[j].id1 != 0) {
                j++;
            }
            if (j == 0 && player.item[0].id1 != 0) {
                printf("��������� ��������\n");
                system("PAUSE");
            } else {
                player.item[choice] = home_chest[j];
                home_chest[j].id1 = 0;
                home_chest[j].id2 = 0;
                home_chest[j].id3 = 0;
                home_chest[j].id4 = 0;
                home_chest[j].id5 = 0;
                home_chest[j].dur = 0;
                home_chest[j].num = 0;
            }
            chest(player);
            break;
        }
        case 3: {
            return player;
            break;
        }
    }
}

int pig(int mon) {
    add_log("[INFO] ����� ������ �������.");
    string kop[4];
    strcpy(kop[1].str, "������� �� �������");
    strcpy(kop[2].str, "�������� � �������");
    strcpy(kop[3].str, "���������");
    switch (menu(3, kop)) {
        case 1: {
            printf("� �������: %d\t �� �����: %d\n������� ������� �� �������: ", money, mon);
            int temp;
            scanf("%d", &temp);
            if (temp > money) {
                printf("� ������� ��� ������� �����(");
                system("PAUSE");
                system("cls");
                pig(mon);
            } else {
                mon = mon + temp;
                money = money - temp;
                pig(mon);
            }
            break;
        }
        case 2: {
            printf("� �������: %d\t �� �����: %d\n������� �������� � �������: ", money, mon);
            int temp;
            scanf("%d", &temp);
            if (temp > money) {
                printf("�� ����� ��� ������� �����(");
                system("PAUSE");
                system("cls");
                pig(mon);
            } else {
                mon = mon - temp;
                money = money + temp;
                pig(mon);
            }
            break;
        }
        case 3: {
            system("cls");
            return mon;
            break;
        }
    }
}

int hp_from_level(int level) {
    int hp = 0;
    if (level >= 1) {
        hp = 100;
        if (level >= 4) {
            hp = hp + 100;
            if (level >= 7) {
                hp = hp + 100;
                if (level >= 10) {
                    hp = hp + 100;
                    if (level >= 13) {
                        hp = hp + ((level - 10) / 3) * 150;
                    }
                }
            }
        }
    }
    add_log("[INFO] ��������� ������������ ���-�� �������� � ������������� � �������.");
    return hp;
}

int price_of_item(INV item) {
    int price;
    item.dur = rand() % item.id5;
    price = (100000 * item.id2) * (item.id3 + 1) * (item.id4 + 1) / (100 + (item.dur * 100) / item.id5);
    add_log("[INFO] ��������� ��������� ��������.");
    return price;
}

void shop(SAVE player, int show) {
    add_log("[INFO] ����� ����� � �������.");
    if (show) {
        text("magazin.txt", 53, 10);
        printf("����� ���������� � �������, ����� ��� �� ������ �������� ��� ��������� ����\n");
        system("PAUSE");
        system("cls");
    }
    string shop_choice[4];
    strcpy(shop_choice[1].str, "������� �������");
    strcpy(shop_choice[2].str, "������ �������");
    strcpy(shop_choice[3].str, "���������");
    switch (menu(3, shop_choice)) {
        case 1: {
            string item_names[50];
            int i = 0;
            while (i < 50) {
                item_names[i + 1] = show_name(player.item[i]);
                i++;
            }
            break;
            i = 0;
            int prices[51];
            while (i <= 50) {
                prices[i + 1] = price_of_item(player.item[i]);
                strcat(item_names[i].str, " - ");
                string price_c;
                sprintf(price_c.str, "%d", prices[i + 1]);
                strcat(item_names[i].str, price_c.str);
                i++;
            }
            int choice = menu(50, item_names);
            player.item[choice].id1 = 0;
            player.item[choice].id2 = 0;
            player.item[choice].id3 = 0;
            player.item[choice].id4 = 0;
            player.item[choice].id5 = 0;
            player.item[choice].dur = 0;
            player.item[choice].num = 0;
            player.item[choice].choose = 0;
            player.money = player.money + prices[choice];
            printf("������� ������� ������! �������, ��� ��������������� ������ ��������, ��� ��� ����� :)\n");
            system("PAUSE");
            shop(player, 0);
        }
        case 2: {
            INV items[21];
            int i = 1;
            srand(time(NULL));
            while (i <= 20) {
                items[i] = random_item(rand() % 100);
                i++;
            }
            string item_names[20];
            i = 0;
            while (i < 20) {
                item_names[i + 1] = show_name(items[i]);
                i++;
            }
            i = 0;
            int prices[21];
            while (i <= 20) {
                prices[i + 1] = price_of_item(items[i]);
                strcat(item_names[i].str, " - ");
                string price_c;
                sprintf(price_c.str, "%d", prices[i]);
                strcat(item_names[i].str, price_c.str);
                i++;
            }
            int choice = menu(20, item_names);
            if (prices[choice] > player.money) {
                printf("������������ �����(\n");
                system("PAUSE");
                system("cls");
                shop(player, 0);
            } else {
                i = 0;
                while (player.item[i].id1 != 0) {
                    i++;
                }
                if (i == 0 && player.item[0].id1 != 0) {
                    printf("� ��������� ��� �����\n");
                } else {
                    player.item[i] = items[choice - 1];
                    player.money - prices[choice];
                    printf("������� ������� ������. ������� �� �������, ��� ��� ����� :) \n");
                    system("PAUSE");
                    system("cls");
                    shop(player, 0);
                }
            }
            break;
        }
        case 3: {
            places(player);
            break;
        }
    }
}

SAVE check(SAVE player) {
    add_log("[INFO] ������ �������� ������� ������.");
    player.pos.armour = 0;
    player.pos.damage = 0;
    int i;
    FILE *fight;
    if ((fight = fopen("tex/fight.txt", "r")) == NULL) {
        add_log("[ERROR] ������ ������ ����� � ���������������� ���������");
    } else {
        i = 0;
        int damage = 0, armour = 0, id1, id2, id3, id4;
        while (i < 50) {
            if (player.item[i].choose == 1) {
                if (player.item[i].id1 == 1 || player.item[i].id1 == 3 || player.item[i].id1 == 4) {
                    int h = 0;
                    while (player.item[i].id1 != id1 && player.item[i].id2 == id2 && h <= 40) {
                        fscanf(fight, "%d:%d:%d:%d:%d", &id1, &id2, &id3, &id4, &damage);
                    }
                    player.pos.damage = player.pos.damage + ((damage * (100 + effector(player.item[i].id3))) / 100);
                    add_log("[INFO] ����� ����� ������ ���� ���������.");
                } else {
                    int h = 0;
                    while (player.item[i].id1 != id1 && player.item[i].id2 == id2 && h <= 40) {
                        fscanf(fight, "%d:%d:%d:%d:%d", &id1, &id2, &id3, &id4, &armour);
                    }
                    player.pos.armour = player.pos.armour + ((armour * (100 + effector(player.item[i].id3))) / 100);
                    add_log("[INFO] ����� ������ ������ ���� ���������.");
                }
            }
            i++;
        }
        player.pos.armour = armour;
        player.pos.damage = damage;
    }
    if (player.status.health <= 0) {
        text("game_over.txt", 66, 10);
        printf("�� ������. ���� ��� ������. �������� � ��������� ��� ��� ������ �����\n");
        system("PAUSE");
        printf(
            "����� ��������� ������������ �� ��� �������� � ���� �������� ������ ���������\n (P.S. ��� ��� ������ ���� ������ ����� ������� ��� ������������ ������� ��� �������� � ����, ��� �����, ��� ��� ������� ������ ����)\n");
        system("PAUSE");
        add_log("[INFO] ����� ����.");
        player = new_save();
        main_menu(player);
    }
    if (player.status.health != hp_from_level(player.level)) {
        player.status.health = player.status.health + player.level;
    }
    if (player.status.xp <= 0) {
        text("new_level.txt", 66, 10);
        printf("����������� �� �������� ������ %d ������\n", player.level);
        player.level++;
        player.status.xp = hp_from_level(player.level) - abs(player.status.xp);
        player.status.health = hp_from_level(player.level);
        player.status.sleep = 100;
        player.status.stamina = 100;
        printf("�� ������ ������ ��� �������� ������ %d ����� �����\n���� ��������, ������� � ��� �������������\n",
               player.status.xp);
        add_log("[INFO] ����� ������ ������ ������.");
        system("PAUSE");
    }
    if (player.status.sleep == 0) {
        printf("���� ���� ��� �����������, ������� ��������� ��� ������ ��� ���� �������� ����� ����������� �� 1 \n");
        player.status.health--;
        system("PAUSE");
    }
    if (player.status.stamina == 0) {
        printf("���� ������� �����������, ������� ��� ������ ��� ���� �������� ����� ����������� �� 1 \n");
        player.status.health--;
        system("PAUSE");
    }
    i = 0;
    while (i < 50) {
        if (player.item[i].id5 <= player.item[i].dur && player.item[i].id1 != 4 && player.item[i].id1 != 0 && i < 50) {
            printf("��� ������� %s ��������. ������� ���� �������\n", show_name(player.item[i]).str);
            system("PAUSE");
            player.item[i].choose = 0;
            player.item[i].dur = 0;
            player.item[i].id1 = 0;
            player.item[i].id2 = 0;
            player.item[i].id3 = 0;
            player.item[i].id4 = 0;
            player.item[i].id5 = 0;
            player.item[i].num = 0;
        }
        i++;
    }
    i = 0;
    while (i < 50) {
        if (player.item[i].id1 == 4 && player.item[i].num <= 0 && i < 50) {
            printf("��� ������� %s �����������. ������� ���� �������\n", show_name(player.item[i]).str);
            system("PAUSE");
            player.item[i].choose = 0;
            player.item[i].dur = 0;
            player.item[i].id1 = 0;
            player.item[i].id2 = 0;
            player.item[i].id3 = 0;
            player.item[i].id4 = 0;
            player.item[i].id5 = 0;
            player.item[i].num = 0;
        }
        i++;
    }
    return player;
}

ENEMY create_enemy(int level, int out) {
    FILE *enemy_name_file;
    ENEMY enemy;
    if ((enemy_name_file = fopen("tex/enemies.txt", "r")) == NULL) {
        add_log("[ERROR] ������ ��� ������ ����� � ���������� ��������");
    } else {
        srand(time(NULL) - 420);
        int fortune = rand() % 101, id;
        if (fortune >= 1) {
            if (fortune >= 20) {
                if (fortune >= 40) {
                    if (fortune >= 60) {
                        if (fortune >= 80) {
                            if (out == 1) {
                                if (fortune % 2 == 1) {
                                    id = 6;
                                } else {
                                    id = 5;
                                }
                            } else {
                                id = 5;
                            }
                        } else {
                            id = 4;
                        }
                    } else {
                        id = 3;
                    }
                } else {
                    id = 2;
                }
            } else {
                id = 1;
            }
        }
        while (enemy.id != id) {
            fscanf(enemy_name_file, "%d %d %d %d", &enemy.id, &enemy.health, &enemy.damage, &enemy.armour);
            fgets(enemy.name.str, 100, enemy_name_file);
        }
        enemy.damage = enemy.damage * level;
        enemy.health = enemy.health * level;
        enemy.level = level;
        enemy.health_max = enemy.health;
        enemy.name.str[strcspn(enemy.name.str, "\n")] = '\0';
        add_log("[INFO] ������ ����.");
        return enemy;
    }
}

string add_selection(string input) {
    string output;
    strcpy(output.str, ">>");
    strcat(output.str, input.str);
    strcat(output.str, "<<");
    return output;
}

SPECIAL menu_for_fight(SAVE player, ENEMY enemy) {
    string up, down, left, right;
    strcpy(up.str, "���������");
    strcpy(down.str, "�������");
    strcpy(left.str, "��������������� ���������");
    strcpy(right.str, "������� ��� �����");
    int key = 1, prevkey;
    SPECIAL wtf;
    while (key != 13) {
        printf("���� ��������: %d / %d\t\t�������� �����: %d / %d\n���� ������: %d%\t\t\t������ �����: %d%\n��� ����: %d\t\t\t���� �����: %d\n\n\n",
        player.status.health, hp_from_level(player.level), enemy.health, enemy.health_max, player.pos.armour,
        enemy.armour, player.pos.damage, enemy.damage);
        printf("---------------------------------------------------------------------\n");
        switch (key) {
            case 72: {
                prevkey = key;
                printf("\t\t\t\t%s\t\t\n", add_selection(up).str);
                printf("%s\t\t\t%s\n", left.str, right.str);
                printf("\t\t\t\t%s\n", down.str);
                break;
            }
            case 80: {
                prevkey = key;
                printf("\t\t\t\t%s\t\t\n", up.str);
                printf("%s\t\t\t%s\n", left.str, right.str);
                printf("\t\t\t\t%s\n", add_selection(down).str);
                break;
            }
            case 75: {
                prevkey = key;
                printf("\t\t\t\t%s\t\t\n", up.str);
                printf("%s\t\t\t%s\n", add_selection(left).str, right.str);
                printf("\t\t\t\t%s\n", down.str);
                break;
            }
            case 77: {
                prevkey = key;
                printf("\t\t\t\t%s\t\t\n", up.str);
                printf("%s\t\t\t%s\n", left.str, add_selection(right).str);
                printf("\t\t\t\t%s\n", down.str);
                break;
            }
            default: {
                prevkey = key;
                printf("\t\t\t\t%s\t\t\n", up.str);
                printf("%s\t\t\t%s\n", left.str, right.str);
                printf("\t\t\t\t%s\n", down.str);
                break;
            }
        }
        printf("---------------------------------------------------------------------\n");
        printf("(���������� �����������, ����� - ENTER)\n");
        key = getch();
        system("cls");
    }
    switch (prevkey) {
        case 72: {
            system("cls");
            wtf.player = player;
            wtf.enemy = enemy;
            wtf.choice = 1;
            return wtf;
            break;
        }
        case 80: {
            system("cls");
            wtf.player = player;
            wtf.enemy = enemy;
            wtf.choice = 2;
            return wtf;
            break;
        }
        case 75: {
            system("cls");
            wtf.player = player;
            wtf.enemy = enemy;
            wtf.choice = 3;
            return wtf;
            break;
        }
        case 77: {
            system("cls");
            wtf.player = player;
            wtf.enemy = enemy;
            wtf.choice = 4;
            return wtf;
            break;
        }
    }
}

SAVE inventory(SAVE player) {
    add_log("[INFO] ����� ������ ���������.");
    string choice_menu[5];
    strcpy(choice_menu[1].str, "������������ �������");
    strcpy(choice_menu[2].str, "��������� �������");
    strcpy(choice_menu[3].str, "���������� �������������� ��������");
    strcpy(choice_menu[4].str, "�����");
    switch (menu(4, choice_menu)) {
        case 1: {
            int i = 1;
            string names[51];
            while (i <= 50) {
                string name;
                name = show_name(player.item[i - 1]);
                strcpy(names[i].str, name.str);
                if (player.item[i - 1].choose == 1) {
                    strcpy(names[i].str, " ������� ");
                }
                i++;
            }
            int choice = menu(50, names) - 1;
            if (player.item[choice].choose == 1) {
                player.item[choice].choose = 0;
                player = check(player);
            } else {
                player.item[choice].choose = 1;
                player = check(player);
            }
            inventory(player);
            break;
        }
        case 2: {
            int i = 1;
            string names[51];
            while (i <= 50) {
                string name;
                name = show_name(player.item[i - 1]);
                strcpy(names[i].str, name.str);
                i++;
            }
            int choice = menu(50, names) - 1;
            player.item[choice].id1 = 0;
            player.item[choice].id2 = 0;
            player.item[choice].id3 = 0;
            player.item[choice].id4 = 0;
            player.item[choice].id5 = 0;
            player.item[choice].choose = 0;
            player.item[choice].dur = 0;
            player.item[choice].num = 0;
            inventory(player);
            break;
        }
        case 3: {
            int i = 1;
            string names[51];
            while (i <= 50) {
                string name;
                name = show_name(player.item[i - 1]);
                strcpy(names[i].str, name.str);
                i++;
            }
            int choice = menu(50, names) - 1;
            FILE *fight;
            if ((fight = fopen("tex/fight.txt", "r")) == NULL) {
                add_log("[ERROR] ������ ������ ����� � ���������������� ���������");
            } else {
                i = 0;
                int damage = 0, armour = 0, id1, id2, id3, id4;
                if (player.item[i].id1 == 1 || player.item[i].id1 == 3 || player.item[i].id1 == 4) {
                    while (player.item[choice].id1 != id1 && player.item[choice].id2 == id2) {
                        fscanf(fight, "%d:%d:%d:%d:%d", &id1, &id2, &id3, &id4, &damage);
                    }
                    player.pos.damage = player.pos.damage + ((damage * (100 + effector(player.item[i].id3))) / 100);
                    add_log("[INFO] ��������� ����� ����� ��������.");
                } else {
                    while (player.item[choice].id1 != id1 && player.item[choice].id2 == id2) {
                        fscanf(fight, "%d:%d:%d:%d:%d", &id1, &id2, &id3, &id4, &armour);
                    }
                    player.pos.armour = player.pos.armour + ((armour * (100 + effector(player.item[i].id3))) / 100);
                    add_log("[INFO] ��������� ����� ������ ��������.");
                }
                printf("��������: %s\n����: %d\n������: %d\n���������: %d / %d\n����������: %d\n",
                names[choice + 1].str, damage, armour, player.item[choice].id5 - player.item[choice].dur,
                player.item[choice].id5, player.item[choice].num);
                system("PAUSE");
                system("cls");
            }
            break;
        }
        case 4: {
            return player;
            break;
        }
    }
}

SAVE fight(SAVE player, int level, int out) {
    ENEMY enemy;
    srand(time(NULL) + 420);
    enemy = create_enemy(rand() % level, 0);
    printf("�� ����� ����� (%s, ��. %d)\n", enemy.name.str, enemy.level);
    system("PAUSE");
    system("cls");
    SPECIAL wtf;
    while (enemy.health > 0) {
        wtf = menu_for_fight(player, enemy);
        player = wtf.player;
        enemy = wtf.enemy;
        switch (wtf.choice) {
            case 1: {
                int fortune = rand() % 101;
                if (fortune >= 90) {
                    if (fortune >= 95) {
                        printf("�� ������� ����������� ����! \n");
                        system("PAUSE");
                        system("cls");
                        player.status.health = player.status.health - (enemy.damage * (100 - player.pos.armour)) / 100;
                        enemy.health = enemy.health - ((player.pos.damage * (100 - enemy.armour)) / 100) * 5;
                    } else {
                        printf("��� ������� ����������� ����! \n");
                        system("PAUSE");
                        system("cls");
                        player.status.health = player.status.health - ((enemy.damage * (100 - player.pos.armour)) / 100)
                                               * 5;
                        enemy.health = enemy.health - (player.pos.damage * (100 - enemy.armour)) / 100;
                    }
                } else {
                    player.status.health = player.status.health - (enemy.damage * (100 - player.pos.armour)) / 100;
                    enemy.health = enemy.health - (player.pos.damage * (100 - enemy.armour)) / 100;
                }
                break;
            }
            case 2: {
                int fortune = rand() % 101;
                if (fortune >= 70) {
                    printf("��� �� ������� �������!\n");
                    player.status.health = player.status.health - (enemy.damage * (100 - player.pos.armour)) / 100;
                } else {
                    return player;
                }
                break;
            }
            case 3: {
                player = inventory(player);
                break;
            }
            case 4: {
                break;
            }
        }
        player = check(player);
    }
    printf("���� ��������, �� �������! \n");
    system("PAUSE");
    system("cls");
    return player;
}

SAVE go_outside(SAVE player) {
    add_log("[INFO] ����� ����� � �������� �������.");
    int key;
    while (1) {
        player = check(player);
        key = getch();
        if (key == 27) {
            places(player);
        } else {
            player = fight(player, rand() % 101, 1);
        }
    }
    return player;
}

void play(SAVE player, int level, int out) {
    add_log("[INFO] ����� ������.");
    srand(time(NULL) - 1337);
    if (out == -1) {
        player = go_outside(player);
        places(player);
    } else {
        int len = 10 + rand() % (level + 10);
        int i = 1;
        while (i <= len) {
            int fortune = rand() % 100;
            if (fortune >= 0) {
                if (fortune >= 10) {
                    if (fortune >= 40) {
                        if (fortune >= 70) {
                            	player = fight(player, level - 6, out);
                        } else {
                            INV item = random_item(level);
                            printf("�� ����� �������� (%s)\n", show_name(item).str);
                            int j = 0;
                            while (player.item[j].id1 != 0) {
                                j++;
                            }
                            if (j == 0 && player.item[j].id1 != 0) {
                                printf("��������� ����������. ������� ������� ���������� \n");
                            } else {
                                player.item[j] = item;
                            }
                            system("PAUSE");
                        }
                    } else {
                        printf("�����. ��� ������...\n");
                        system("PAUSE");
                    }
                } else {
                    printf("�� �������� �� ������� ������������ ��������� ��� ����������� (-5 ��������)\n");
                    player.status.health = player.status.health - 5;
                    system("PAUSE");
                }
            }
            i++;
            system("cls");
            player = check(player);
        }
        printf("�� ��������� ����������\n");
        system("PAUSE");
    }
    places(player);
}

void places(SAVE player) {
    add_log("[INFO] ����� ������ ������� ���� ������ ����.");
    if (player.ststictics.ingame_time == 0) {
        printf(
            "�� ������� � ������������� �����, �� �������� ����� ������ ���� ������������\n���� �������� ��������� ��� �������� ������� � ���� �����������\n� ���������, ���� �������� �� ������ � ������ ���� ��� ���� 200 �����\n� ����� ������� �� ������ ������������ ���� �� ����, �� �� ������ ��������� ���� ��������� ��������� �� �������\n�������� ������� �� ������ � �������\n\n\n����� ��� � ����� ����������!\n");
        system("PAUSE");
        system("cls");
        player.ststictics.ingame_time++;
    }
    string place[7];
    strcpy(place[1].str, "�������");
    strcpy(place[2].str, "���");
    strcpy(place[3].str, "����� �� ������");
    strcpy(place[4].str, "���������");
    strcpy(place[5].str, "�������");
    strcpy(place[6].str, "����� � ������ ����");
    switch (menu(6, place)) {
        case 1: {
            int coice = taverna(1, player.money);
            switch (coice) {
                case 2: {
                    if (player.status.stamina < 90) {
                        player.status.stamina = player.status.stamina + 10;
                    } else {
                        player.status.stamina = 100;
                    }
                    player.ststictics.drunk++;
                    player.money = player.money - 20;

                    break;
                }
                case 0: {
                    places(player);
                    break;
                }
                default: {
                    play(player, coice, 0);
                    break;
                }
            }
            break;
        }
        case 2: {
            text("dom.txt", 26, 10);
            printf("����� ����������� �����, ����� ��� �� ������ ��������� � ������� ���� ���� ��� ������.\n");
            system("PAUSE");
        home_: {
                add_log("[INFO] ����� ����� �����.");
                string home[4];
                strcpy(home[1].str, "��������� (��������� �������� � ������������ ������� � ���)");
                strcpy(home[2].str, "������");
                strcpy(home[3].str, "������-�������");
                strcpy(home[4].str, "����� �� ����");
                switch (menu(4, home)) {
                    case 1: {
                        srand(time(NULL));
                        if (rand() % 2 == 1) {
                            printf("�� ������ ��������� � ���� ������� � ��� ������������� \n");
                            player.status.sleep = 100;
                            player.status.stamina = 100;
                        } else {
                            printf("��� ������� ������� � �� �� ������ ������ ��������� \n");
                            player.status.sleep = 60;
                        }
                        player.ststictics.days++;
                        system("PAUSE");
                        goto home_;
                        break;
                    }
                    case 2: {
                        player = chest(player);
                        goto home_;
                        break;
                    }
                    case 3: {
                        player.money = pig(player.money);
                        goto home_;
                        break;
                    }
                    case 4: {
                        places(player);
                        break;
                    }
                }
            }
        }
        case 3: {
            play(player, -1, 1);
            break;
        }
        case 4: {
            add_log("[INFO] ����� ����� � ���������.");
            text("lechebnica.txt", 64, 12);
            printf("����� ���������� � ���������, ����� ��� �� ������ ������������ ���� �����\n");
            system("PAUSE");
            system("cls");
            printf("���� �������� %d/%d \n", player.status.health, hp_from_level(player.level));
            if (player.status.health == hp_from_level(player.level)) {
                printf("���� �������� �����������. ������� ��� ������ � ��� :)\n");
                system("PAUSE");
                places(player);
            } else {
                int k = player.level / 10;
                if (k == 0) {
                    k = 1;
                }
                printf("������� �������� ��� � %d �����.\n��������? (y, n) \n",
                       (hp_from_level(player.level) - player.status.health) * k);
                char heal;
                heal = getch();
                if (heal == 'y') {
                    if (player.money >= (hp_from_level(player.level) - player.status.health) * k) {
                        player.money = player.money - ((hp_from_level(player.level) - player.status.health) * k);
                        player.status.health = hp_from_level(player.level);
                        printf("���� �������� �����������. ������� ��� ������ � ��� :)\n");
                        system("PAUSE");
                        places(player);
                    } else {
                        printf("��������, �� � ��� ������������ �����(\n");
                        system("PAUSE");
                        places(player);
                    }
                } else {
                }
            }
            break;
        }
        case 5: {
            shop(player, 1);
            break;
        }
        default: {
            main_menu(player);
            break;
        }
    }
}

int main_menu(SAVE player) {
    char logs[100];
    strcpy(logs, "[INFO] �������� ������� ����");
    add_log(logs);
    string names[10];
    strcpy(names[1].str, "����� ����");
    strcpy(names[2].str, "��������� ����");
    strcpy(names[3].str, "��������� ����");
    strcpy(names[4].str, "������ ����");
    strcpy(names[5].str, "������� ��������");
    strcpy(names[6].str, "���������");
    strcpy(names[7].str, "����� �� ����");
    switch (menu(7, names)) {
        case 1: {
            system("cls");
            player = new_save();
            main_menu(player);
            break;
        }
        case 2: {
            string file_names[6];
            strcpy(file_names[1].str, "���������� 1");
            strcpy(file_names[2].str, "���������� 2");
            strcpy(file_names[3].str, "���������� 3");
            strcpy(file_names[4].str, "���������� 4");
            strcpy(file_names[5].str, "���������� 5");
            player = load_save(menu(5, file_names));
            main_menu(player);
            break;
        }
        case 3: {
            string file_names[6];
            strcpy(file_names[1].str, "���������� 1");
            strcpy(file_names[2].str, "���������� 2");
            strcpy(file_names[3].str, "���������� 3");
            strcpy(file_names[4].str, "���������� 4");
            strcpy(file_names[5].str, "���������� 5");
            save_save(menu(5, file_names), player);
            main_menu(player);
            break;
        }
        case 4: {
            places(player);
            break;
        }
        case 5: {
            system("cls");
            text("gamename.txt", 68, 30);
            system("PAUSE");
            main_menu(player);
            break;
        }
        case 6: {
            Settings();
            main_menu(player);
            break;
        }
        case 7: {
            puts("�� �������? ��� ������������ ������ ����� �������. (y/n) ");
            char exit;
            exit = getch();
            if (exit == 'y') {
                return 0;
            } else {
                main_menu(player);
            }
            break;
        }
        case 8: {
            break;
        }
    }
}
