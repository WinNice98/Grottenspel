#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>
#include <time.h>
#include <math.h>

#include "item.h"
#include "settings.h"
#include "menu.h"
#include "gameplay.h"

int main(){
    system("rm logs.log");
    setlocale(LC_ALL, "Rus");
    text("gamename.txt", 68, 30);
    system("PAUSE");
    SAVE player;
    main_menu(player);
    return 0;
}
