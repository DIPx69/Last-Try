#include <stdio.h>
#include <math.h>
#include <sys/stat.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include "global.h"
#include "autoarea.h"
#include "minedata.h"
#include "config.h"
// Clear Terminal
int system(const char *command);
void clear() {
	 system("clear"); 
	 }

void loading(const char *str,int sec) {
  int i;
  for (i = 0; str[i] != '\0'; i++) {
    putchar(str[i]);
    fflush(stdout);
    float sec1 = (float) sec / 28;
    int sec2 = sec1 * 1000000;
    int sec3 = sec2;
    usleep(sec3);
  }
}
// Auto Mining Area
void autoironarea()
	 {
	 	 srand(time(NULL));
  for (int i = 0; i < i + 1; i++) {
    int ironamm = rand() % maxiron + 1;
    int randxp = rand() % maxxpiron + 1;
    FILE *file = fopen("database/Mining/Level/nextlvlxp.bin", "rb");
    int nxxp;
        fread(&nxxp, sizeof(int), 1, file);
    fclose(file);
    FILE *file1 = fopen("database/Mining/Level/xp.bin", "rb");
    int nowxp;
        fread(&nowxp, sizeof(int), 1, file1);
    fclose(file1);
    FILE *file3 = fopen("database/ItemExp/minexexp.bin", "rb");
    int num;
       fread(&num, sizeof(int), 1, file3);
    fclose(file3);
    time_t current;
    current = time(NULL);
    num = current - num;
    int delay = minexcool; // Exp Time
    int xp = (num - delay) * -1;
    if (nowxp > nxxp) {
      reset(nowxp);
      lvlstore(1);
      nxtxp(50);
      printf("\nNOTIFICATION ALERT :\n You Have Level Up To ");
      lvlshow();
      printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
      sleep(5);
    }
    iron(ironamm);
    mineadd(1);
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
   xpx = 2;   
    }
    else
    {
   xpx = 1;
    }
if(-5 < xpbo && 0 > xpbo)
{
	clear();
      printf("NOTIFICATION ALERT :\nXP Boost Expired. Use XP Boost Again To Get 2X XP Boost");
      six("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
	sleep(2);	
}
    int randxpx = randxp*xpx;
    xpstore(randxpx);
    printf("\n\nTotal Mining ");
    total();
    printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    printf("Mined %d Iron \n", ironamm);
   if(xpx == 1)
    {
    printf("Received XP : %d", randxp);	
    	}
   if(xpx == 2)
    	{
    printf("Received XP : %d(2X XP) || Normal XP : %d",randxpx,randxp);
    	}
     printf("\nTotal Iron : ");
    ironshow();
    printf("\nMineX Expiring In %d Seconds", xp);
   if(xpboostalert > xpbo && 0 < xpbo)
   {
   printf("\nXP Boost Expiring In %d Seconds", xpbo);	
   }
    printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
loading("____________________________", ironcooldown-1);
    loading("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b", 1);

    if (ironcooldown > xp) {
      clear();
      printf("\nNOTIFICATION ALERT :\nMineX Expired. Use MineX Again To "
             "Continue");
      six("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
      sleep(1);
      system("./main");
    } else {
      autoironarea();
    }
  }
  }
void autocoalarea()
	 {
	 	 srand(time(NULL));
  for (int i = 0; i < i + 1; i++) {
    int coalamm = rand() % maxcoal + 1;
    int randxp = rand() % maxxpcoal + 1;
    FILE *file = fopen("database/Mining/Level/nextlvlxp.bin", "rb");
    int nxxp;
        fread(&nxxp, sizeof(int), 1, file);
    fclose(file);
    FILE *file1 = fopen("database/Mining/Level/xp.bin", "rb");
    int nowxp;
        fread(&nowxp, sizeof(int), 1, file1);
    fclose(file1);
    FILE *file3 = fopen("database/ItemExp/minexexp.bin", "rb");
    int num;
       fread(&num, sizeof(int), 1, file3);
    fclose(file3);
    time_t current;
    current = time(NULL);
    num = current - num;
    int delay = minexcool; // Exp Time
    int xp = (num - delay) * -1;
    if (nowxp > nxxp) {
      reset(nowxp);
      lvlstore(1);
      nxtxp(50);
      printf("\nNOTIFICATION ALERT :\n You Have Level Up To ");
      lvlshow();
      printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
      sleep(5);
    }
    coal(coalamm);
    mineadd(1);
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
   xpx = 2;   
    }
    else
    {
   xpx = 1;
    }
if(-5 < xpbo && 0 > xpbo)
{
	clear();
      printf("NOTIFICATION ALERT :\nXP Boost Expired. Use XP Boost Again To Get 2X XP Boost");
      six("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
	sleep(2);	
}
    int randxpx = randxp*xpx;
    xpstore(randxpx);
    printf("\n\nTotal Mining ");
    total();
    printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    printf("Mined %d Coal \n", coalamm);
   if(xpx == 1)
    {
    printf("Received XP : %d", randxp);	
    	}
   if(xpx == 2)
    	{
    printf("Received XP : %d(2X XP) || Normal XP : %d",randxpx,randxp);
    	}
     printf("\nTotal Coal : ");
   coalshow();
    printf("\nMineX Expiring In %d Seconds", xp);
   if(xpboostalert > xpbo && 0 < xpbo)
   {
   printf("\nXP Boost Expiring In %d Seconds", xpbo);	
   }
    printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
loading("____________________________", coalcooldown-1);
    loading("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b", 1);

    if (coalcooldown > xp) {
      clear();
      printf("\nNOTIFICATION ALERT :\nMineX Expired. Use MineX Again To "
             "Continue");
      six("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
      sleep(1);
      system("./main");
    } else {
      autocoalarea();
    }
  }
  }
void autosilverarea()
	 {
	 	 srand(time(NULL));
  for (int i = 0; i < i + 1; i++) {
    int silveramm = rand() % maxsilver + 1;
    int randxp = rand() % maxxpsilver + 1;
    FILE *file = fopen("database/Mining/Level/nextlvlxp.bin", "rb");
    int nxxp;
        fread(&nxxp, sizeof(int), 1, file);
    fclose(file);
    FILE *file1 = fopen("database/Mining/Level/xp.bin", "rb");
    int nowxp;
        fread(&nowxp, sizeof(int), 1, file1);
    fclose(file1);
    FILE *file3 = fopen("database/ItemExp/minexexp.bin", "rb");
    int num;
       fread(&num, sizeof(int), 1, file3);
    fclose(file3);
    time_t current;
    current = time(NULL);
    num = current - num;
    int delay = minexcool; // Exp Time
    int xp = (num - delay) * -1;
    if (nowxp > nxxp) {
      reset(nowxp);
      lvlstore(1);
      nxtxp(50);
      printf("\nNOTIFICATION ALERT :\n You Have Level Up To ");
      lvlshow();
      printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
      sleep(5);
    }
    silver(silveramm);
    mineadd(1);
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
   xpx = 2;   
    }
    else
    {
   xpx = 1;
    }
if(-5 < xpbo && 0 > xpbo)
{
	clear();
      printf("NOTIFICATION ALERT :\nXP Boost Expired. Use XP Boost Again To Get 2X XP Boost");
      six("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
	sleep(2);	
}
    int randxpx = randxp*xpx;
    xpstore(randxpx);
    printf("\n\nTotal Mining ");
    total();
    printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    printf("Mined %d Silver \n", silveramm);
   if(xpx == 1)
    {
    printf("Received XP : %d", randxp);	
    	}
   if(xpx == 2)
    	{
    printf("Received XP : %d(2X XP) || Normal XP : %d",randxpx,randxp);
    	}
     printf("\nTotal Silver : ");
    silvershow();
    printf("\nMineX Expiring In %d Seconds", xp);
   if(xpboostalert > xpbo && 0 < xpbo)
   {
   printf("\nXP Boost Expiring In %d Seconds", xpbo);	
   }
    printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
loading("____________________________", silvercooldown-1);
    loading("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b", 1);

    if (silvercooldown > xp) {
      clear();
      printf("\nNOTIFICATION ALERT :\nMineX Expired. Use MineX Again To "
             "Continue");
      six("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
      sleep(1);
      system("./main");
    } else {
      autosilverarea();
    }
  }
  }
void autocrimsteelarea()
	 {
	 	 srand(time(NULL));
  for (int i = 0; i < i + 1; i++) {
    int crimamm = rand() % maxcrimsteel + 1;
    int randxp = rand() % maxxpcrimsteel + 1;
    FILE *file = fopen("database/Mining/Level/nextlvlxp.bin", "rb");
    int nxxp;
        fread(&nxxp, sizeof(int), 1, file);
    fclose(file);
    FILE *file1 = fopen("database/Mining/Level/xp.bin", "rb");
    int nowxp;
        fread(&nowxp, sizeof(int), 1, file1);
    fclose(file1);
    FILE *file3 = fopen("database/ItemExp/minexexp.bin", "rb");
    int num;
       fread(&num, sizeof(int), 1, file3);
    fclose(file3);
    time_t current;
    current = time(NULL);
    num = current - num;
    int delay = minexcool; // Exp Time
    int xp = (num - delay) * -1;
    if (nowxp > nxxp) {
      reset(nowxp);
      lvlstore(1);
      nxtxp(50);
      printf("\nNOTIFICATION ALERT :\n You Have Level Up To ");
      lvlshow();
      printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
      sleep(5);
    }
    crim(crimamm);
    mineadd(1);
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
   xpx = 2;   
    }
    else
    {
   xpx = 1;
    }
if(-5 < xpbo && 0 > xpbo)
{
	clear();
      printf("NOTIFICATION ALERT :\nXP Boost Expired. Use XP Boost Again To Get 2X XP Boost");
      six("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
	sleep(2);	
}
    int randxpx = randxp*xpx;
    xpstore(randxpx);
    printf("\n\nTotal Mining ");
    total();
    printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    printf("Mined %d Crimsteel \n", crimamm);
   if(xpx == 1)
    {
    printf("Received XP : %d", randxp);	
    	}
   if(xpx == 2)
    	{
    printf("Received XP : %d(2X XP) || Normal XP : %d",randxpx,randxp);
    	}
     printf("\nTotal Crimsteel : ");
    crimshow();
    printf("\nMineX Expiring In %d Seconds", xp);
   if(xpboostalert > xpbo && 0 < xpbo)
   {
   printf("\nXP Boost Expiring In %d Seconds", xpbo);	
   }
    printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
loading("____________________________", crimsteelcooldown-1);
    loading("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b", 1);

    if (crimsteelcooldown > xp) {
      clear();
      printf("\nNOTIFICATION ALERT :\nMineX Expired. Use MineX Again To "
             "Continue");
      six("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
      sleep(1);
      system("./main");
    } else {
      autocrimsteelarea();
    }
  }
  }
void autogoldarea()
	 {
	 	 srand(time(NULL));
  for (int i = 0; i < i + 1; i++) {
    int goldamm = rand() % maxgold + 1;
    int randxp = rand() % maxxpgold + 1;
    FILE *file = fopen("database/Mining/Level/nextlvlxp.bin", "rb");
    int nxxp;
        fread(&nxxp, sizeof(int), 1, file);
    fclose(file);
    FILE *file1 = fopen("database/Mining/Level/xp.bin", "rb");
    int nowxp;
        fread(&nowxp, sizeof(int), 1, file1);
    fclose(file1);
    FILE *file3 = fopen("database/ItemExp/minexexp.bin", "rb");
    int num;
       fread(&num, sizeof(int), 1, file3);
    fclose(file3);
    time_t current;
    current = time(NULL);
    num = current - num;
    int delay = minexcool; // Exp Time
    int xp = (num - delay) * -1;
    if (nowxp > nxxp) {
      reset(nowxp);
      lvlstore(1);
      nxtxp(50);
      printf("\nNOTIFICATION ALERT :\n You Have Level Up To ");
      lvlshow();
      printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
      sleep(5);
    }
    gold(goldamm);
    mineadd(1);
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
   xpx = 2;   
    }
    else
    {
   xpx = 1;
    }
if(-5 < xpbo && 0 > xpbo)
{
	clear();
      printf("NOTIFICATION ALERT :\nXP Boost Expired. Use XP Boost Again To Get 2X XP Boost");
      six("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
	sleep(2);	
}
    int randxpx = randxp*xpx;
    xpstore(randxpx);
    printf("\n\nTotal Mining ");
    total();
    printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    printf("Mined %d Gold \n", goldamm);
   if(xpx == 1)
    {
    printf("Received XP : %d", randxp);	
    	}
   if(xpx == 2)
    	{
    printf("Received XP : %d(2X XP) || Normal XP : %d",randxpx,randxp);
    	}
     printf("\nTotal Gold : ");
    goldshow();
    printf("\nMineX Expiring In %d Seconds", xp);
   if(xpboostalert > xpbo && 0 < xpbo)
   {
   printf("\nXP Boost Expiring In %d Seconds", xpbo);	
   }
    printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
loading("____________________________", goldcooldown-1);
    loading("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b", 1);

    if (goldcooldown > xp) {
      clear();
      printf("\nNOTIFICATION ALERT :\nMineX Expired. Use MineX Again To "
             "Continue");
      six("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
      sleep(1);
      system("./main");
    } else {
      autogoldarea();
    }
  }
  }
void automythanarea()
	 {
	 	 srand(time(NULL));
  for (int i = 0; i < i + 1; i++) {
    int mythanamm = rand() % maxmythan + 1;
    int randxp = rand() % maxxpmythan + 1;
    FILE *file = fopen("database/Mining/Level/nextlvlxp.bin", "rb");
    int nxxp;
        fread(&nxxp, sizeof(int), 1, file);
    fclose(file);
    FILE *file1 = fopen("database/Mining/Level/xp.bin", "rb");
    int nowxp;
        fread(&nowxp, sizeof(int), 1, file1);
    fclose(file1);
    FILE *file3 = fopen("database/ItemExp/minexexp.bin", "rb");
    int num;
       fread(&num, sizeof(int), 1, file3);
    fclose(file3);
    time_t current;
    current = time(NULL);
    num = current - num;
    int delay = minexcool; // Exp Time
    int xp = (num - delay) * -1;
    if (nowxp > nxxp) {
      reset(nowxp);
      lvlstore(1);
      nxtxp(50);
      printf("\nNOTIFICATION ALERT :\n You Have Level Up To ");
      lvlshow();
      printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
      sleep(5);
    }
    mythan(mythanamm);
    mineadd(1);
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
   xpx = 2;   
    }
    else
    {
   xpx = 1;
    }
if(-5 < xpbo && 0 > xpbo)
{
	clear();
      printf("NOTIFICATION ALERT :\nXP Boost Expired. Use XP Boost Again To Get 2X XP Boost");
      six("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
	sleep(2);	
}
    int randxpx = randxp*xpx;
    xpstore(randxpx);
    printf("\n\nTotal Mining ");
    total();
    printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    printf("Mined %d Mythan \n", mythanamm);
   if(xpx == 1)
    {
    printf("Received XP : %d", randxp);	
    	}
   if(xpx == 2)
    	{
    printf("Received XP : %d(2X XP) || Normal XP : %d",randxpx,randxp);
    	}
     printf("\nTotal Mythan : ");
    mythanshow();
    printf("\nMineX Expiring In %d Seconds", xp);
   if(xpboostalert > xpbo && 0 < xpbo)
   {
   printf("\nXP Boost Expiring In %d Seconds", xpbo);	
   }
    printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
loading("____________________________", mythancooldown-1);
    loading("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b", 1);

    if (mythancooldown > xp) {
      clear();
      printf("\nNOTIFICATION ALERT :\nMineX Expired. Use MineX Again To "
             "Continue");
      six("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
      sleep(1);
      system("./main");
    } else {
      automythanarea();
    }
  }
  }
void automagicarea()
	 {
	 	 srand(time(NULL));
  for (int i = 0; i < i + 1; i++) {
    int magicamm = rand() % maxmagic + 1;
    int randxp = rand() % maxxpmagic + 1;
    FILE *file = fopen("database/Mining/Level/nextlvlxp.bin", "rb");
    int nxxp;
        fread(&nxxp, sizeof(int), 1, file);
    fclose(file);
    FILE *file1 = fopen("database/Mining/Level/xp.bin", "rb");
    int nowxp;
        fread(&nowxp, sizeof(int), 1, file1);
    fclose(file1);
    FILE *file3 = fopen("database/ItemExp/minexexp.bin", "rb");
    int num;
       fread(&num, sizeof(int), 1, file3);
    fclose(file3);
    time_t current;
    current = time(NULL);
    num = current - num;
    int delay = minexcool; // Exp Time
    int xp = (num - delay) * -1;
    if (nowxp > nxxp) {
      reset(nowxp);
      lvlstore(1);
      nxtxp(50);
      printf("\nNOTIFICATION ALERT :\n You Have Level Up To ");
      lvlshow();
      printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
      sleep(5);
    }
    magic(magicamm);
    mineadd(1);
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
   xpx = 2;   
    }
    else
    {
   xpx = 1;
    }
if(-5 < xpbo && 0 > xpbo)
{
	clear();
      printf("NOTIFICATION ALERT :\nXP Boost Expired. Use XP Boost Again To Get 2X XP Boost");
      six("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
	sleep(2);	
}
    int randxpx = randxp*xpx;
    xpstore(randxpx);
    printf("\n\nTotal Mining ");
    total();
    printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    printf("Mined %d Magic \n", magicamm);
   if(xpx == 1)
    {
    printf("Received XP : %d", randxp);	
    	}
   if(xpx == 2)
    	{
    printf("Received XP : %d(2X XP) || Normal XP : %d",randxpx,randxp);
    	}
     printf("\nTotal Magic : ");
    magicshow();
    printf("\nMineX Expiring In %d Seconds", xp);
   if(xpboostalert > xpbo && 0 < xpbo)
   {
   printf("\nXP Boost Expiring In %d Seconds", xpbo);	
   }
    printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
loading("____________________________", magiccooldown-1);
    loading("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b", 1);

    if (magiccooldown > xp) {
      clear();
      printf("\nNOTIFICATION ALERT :\nMineX Expired. Use MineX Again To "
             "Continue");
      six("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
      sleep(1);
      system("./main");
    } else {
      automagicarea();
    }
  }
  }
