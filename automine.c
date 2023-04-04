#include <math.h>
#include <stdio.h>
#include <sys/stat.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include "autoarea.h"
#include "global.h"
#include "config.h"
void xpboost()
{
    time_t current;
    current = time(NULL);
        FILE *file69 = fopen("database/ItemExp/xpboostexp.bin", "rb");
    int num69;
        fread(&num69, sizeof(int), 1, file69);
    fclose(file69);
    num69 = current - num69;
    int delay69 = xpboostcool; // Xp Boost Exp
    int xpbo = (num69 - delay69) * -1;
    int xpx;
    if (0 < xpbo)
    {
  printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
  printf("NOTIFICATION ALERT : \nYOU WILL RECEIVE AN ADDITIONAL 2X BOOST\nSINCE YOU HAVE AN ACTIVE XP BOOST\n"); 
  six("━━━━━━━━━━━━━━━━━━━━━━━━━━━━"); 
    }
	}
int menu7;	 
int main()
{
FILE *file = fopen("database/ItemExp/minexexp.bin", "rb");
    int num;
    fread(&num, sizeof(int), 1, file);
    fclose(file);
    time_t current;
    current = time(NULL);
    num = current - num;
    int delay = minexcool; // MineX xp Time
    int xp = (num - delay) * -1;
    if (0 < xp) {
      printf("               ");
      six("Auto Mining\n");
    printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");	
    printf("NOTE :\nType CTRL + Z To Stop Auto Mining\n");
    printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");	
      printf("[1] Iron Area \n\n[2] Coal Area\n\n[3] Silver Area\n\n[4] "
             "Crimsteel Area\n\n[5] Gold Area\n\n[6] Mythan Area\n\n[7] Magic "
             "Area\n\n[8] Back\n\n");
      six("Enter Menu Number : ");
      scanf("%d", &menu7);
    } else {
     
     int system(const char *command); 
    system("clear");
      printf("SYSTEM NOTIFICATION : \n");
      printf("Please Active Minex.\nBefore Using Auto Mining Feature\n");
     printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");	
        system("./main");
    }
    
  if(menu7 == 1)
  {
      int system(const char *command); 
    system("clear");
    printf("               ");
    six("Auto Mining\n");
    xpboost();
  autoironarea();
  }
    if(menu7 == 2)
  {
      int system(const char *command); 
    system("clear");
    printf("               ");
    six("Auto Mining\n");
    xpboost();
  autocoalarea();
  }
  if(menu7 == 2)
  {
    int system(const char *command); 
    system("clear");
    printf("               ");
    six("Auto Mining\n");
    xpboost();
  autocoalarea();
  }
  if (menu7 == 3) {
  FILE *file = fopen("database/Mining/Level/lvl.bin", "rb");
  int level1;
   fread(&level1, sizeof(int), 1, file);
  fclose(file);
    int minlevel = silverlvl;
    if (level1 >= minlevel) // Minimum Level
    {
    int system(const char *command); 
    system("clear");
    printf("               ");
    six("Auto Mining\n");
    xpboost();
     autosilverarea();
    } else {
     int system(const char *command); 
    system("clear");
    printf("SYSTEM NOTIFICATION : \n");
      printf("You Need %d Mining Level To Access This Area", minlevel);
      printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    int system(const char *command);
    system("./automine");
    }
  }
  if (menu7 == 4) {
  FILE *file = fopen("database/Mining/Level/lvl.bin", "rb");
  int level1;
   fread(&level1, sizeof(int), 1, file);
  fclose(file);
    int minlevel = crimlvl;
    if (level1 >= minlevel) // Minimum Level
    {
    int system(const char *command); 
    system("clear");
    printf("               ");
    six("Auto Mining\n");
    xpboost();
    autocrimsteelarea();
    } else {
     int system(const char *command); 
    system("clear");
    printf("SYSTEM NOTIFICATION : \n");
      printf("You Need %d Mining Level To Access This Area", minlevel);
      printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    int system(const char *command);
    system("./automine");
    }
  }
  if (menu7 == 5) {
  FILE *file = fopen("database/Mining/Level/lvl.bin", "rb");
  int level1;
   fread(&level1, sizeof(int), 1, file);
  fclose(file);
    int minlevel = goldlvl;
    if (level1 >= minlevel) // Minimum Level
    {
    int system(const char *command); 
    system("clear");
    printf("               ");
    six("Auto Mining\n");
    xpboost();
    autogoldarea();
    } else {
    int system(const char *command); 
    system("clear"); 
    printf("SYSTEM NOTIFICATION : \n");
      printf("You Need %d Mining Level To Access This Area", minlevel);
      printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    int system(const char *command);
    system("./automine");
    }
  }
if (menu7 == 6) {
  FILE *file = fopen("database/Mining/Level/lvl.bin", "rb");
  int level1;
   fread(&level1, sizeof(int), 1, file);
  fclose(file);
    int minlevel = mythanlvl;
    if (level1 >= minlevel) // Minimum Level
    {
    int system(const char *command); 
    system("clear");
    printf("               ");
    six("Auto Mining\n");
    xpboost();
    automythanarea();
    } else {
    int system(const char *command); 
    system("clear"); 
    printf("SYSTEM NOTIFICATION : \n");
      printf("You Need %d Mining Level To Access This Area", minlevel);
      printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    int system(const char *command);
    system("./automine");
    }
  }
 if (menu7 == 7) {
  FILE *file = fopen("database/Mining/Level/lvl.bin", "rb");
  int level1;
   fread(&level1, sizeof(int), 1, file);
  fclose(file);
    int minlevel = magiclvl;
    if (level1 >= minlevel) // Minimum Level
    {
    int system(const char *command); 
    system("clear");
    printf("               ");
    six("Auto Mining\n");
    xpboost();
    automagicarea();
    } else {
    int system(const char *command); 
    system("clear"); 
    printf("SYSTEM NOTIFICATION : \n");
      printf("You Need %d Mining Level To Access This Area", minlevel);
      printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    int system(const char *command);
    system("./automine");
    }
  }
if(menu7 ==8)
{
    int system(const char *command); 
    system("clear");
    system("./main");
}
if (menu7 > 8) {
    int system(const char *command); 
    system("clear");
    printf("SYSTEM NOTIFICATION : \n");
    printf("Please Enter A Valid Menu Number\n");
    printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");	
    system("./automine");
  }
}
