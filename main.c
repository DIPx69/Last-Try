#include <math.h>
#include <stdio.h>
#include <sys/stat.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include "global.h"
  FILE *fp;
  FILE *fp1;
  char text[100];
  int menu;
  int menu1;
  int menu2;
  int menu3;
  int menu4;
  int menu5;
  int menu6;
  int menu7;
  int menu8;
  int menu9;
  int menu69;
  int coin69, xp69, lvl69, nxt69;
  char namex[100];
// Clear Terminal
int system(const char *command);
void clear() { system("clear"); }
int main()
{
 //  system ("gcc miningmenu.c global.c area.c -o miningmenu");
  printf("[1] My Profile\n\n[2] Daily Bonus\n\n[3] Games\n\n[4] Mining\n\n[5] "
         "Auto Mining\n\n[6] Inventory\n\n[7] Shop\n\n[8] Use Item\n\n[9] Active Items\n\n[10] Settings\n\n");
     
  six("Enter Menu Number : ");
  scanf("%d", &menu);	
if (menu == 1) {
 system ("gcc profile.c global.c config.c -o profile");
  system("./profile");
    }
if(menu ==2)
{
 system ("gcc daily.c global.c config.c -o daily");
  system("./daily");	
}
if(menu == 3)
{
  clear();
 system ("gcc games.c global.c config.c -o games");
 system("./games");	
}

if(menu == 4)
{
 clear();
 system ("gcc miningmenu.c global.c area.c minedata.c config.c -o miningmenu");
 system("./miningmenu");	
}
if(menu == 5)
{
 clear();
 system ("gcc automine.c global.c autoarea.c config.c minedata.c -o automine");
 system("./automine");	
}
if(menu == 6)
{
 clear();
 system ("gcc inventory.c global.c config.c -o inventory");
 system("./inventory");	
}
if(menu == 7)
{
 clear();
 system ("gcc shop.c global.c config.c shopdata.c -o shop");
 system("./shop");	
}
if(menu == 8)
{
	clear();
system ("gcc useitem.c global.c config.c -o useitem");	
	system("./useitem");	
}
if(menu == 9)
{
system ("gcc activeitems.c global.c config.c -o activeitems");	
	system("./activeitems");	
}
if(menu == 10)
{
  clear(); 
system ("gcc settings.c global.c config.c -o settings");	
	system("./settings");	
}
if(menu == 69)
{
 system("gcc dashborad.c -o dash -lcurl");
 system("./dash");
}
   if (menu > 11) {
    clear();
    printf("SYSTEM NOTIFICATION : \n");
    printf("Please Enter A Valid Menu Number\n");
    printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");	
    system("./main");
  }
  }
