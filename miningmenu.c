#include <stdio.h>
#include <math.h>
#include <sys/stat.h>
#include <time.h>
#include <unistd.h>
#include "config.h"
#include "global.h"
#include "area.h"
int menu2;
int main()
{
	printf("               ");
    printf("Mining\n\n");
    printf("[1] Iron Area \n\n[2] Coal Area\n\n[3] Silver Area\n\n[4] "
           "Crimsteel Area\n\n[5] Gold Area\n\n[6] Mythan Area\n\n[7] Magic "
           "Area\n\n[8] Back\n\n");
    six("Enter Menu Number : ");
    int menu2;
    scanf("%d", &menu2);
    if(menu2 == 1)
    {
    ironarea();
    }
    if(menu2 == 2)
    {
    coalarea();
    }
    if (menu2 == 3) {
  FILE *file = fopen("database/Mining/Level/lvl.bin", "rb");
  int level1;
   fread(&level1, sizeof(int), 1, file);
  fclose(file);
    int minlevel = silverlvl;
    if (level1 >= minlevel) // Minimum Level
    {
      silverarea();
    } else {
  
    int system(const char *command); 
    system("clear"); 
    printf("SYSTEM NOTIFICATION : \n");
      printf("You Need %d Mining Level To Access This Area", minlevel);
      printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    	
    int system(const char *command);
    system("./miningmenu");
    }
  }
   if (menu2 == 4) {
  FILE *file = fopen("database/Mining/Level/lvl.bin", "rb");
  int level1;
   fread(&level1, sizeof(int), 1, file);
  fclose(file);
    int minlevel = crimlvl;
    if (level1 >= minlevel) // Minimum Level
    {
      crimsteelarea();
    } else {
  
    int system(const char *command); 
    system("clear"); 
    printf("SYSTEM NOTIFICATION : \n");
      printf("You Need %d Mining Level To Access This Area", minlevel);
      printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    	
    int system(const char *command);
    system("./miningmenu");
    }
  }
     if (menu2 == 5) {
  FILE *file = fopen("database/Mining/Level/lvl.bin", "rb");
  int level1;
   fread(&level1, sizeof(int), 1, file);
  fclose(file);
    int minlevel = goldlvl;
    if (level1 >= minlevel) // Minimum Level
    {
     goldarea();
    } else {
  
    int system(const char *command); 
    system("clear"); 
    printf("SYSTEM NOTIFICATION : \n");
      printf("You Need %d Mining Level To Access This Area", minlevel);
      printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    	
    int system(const char *command);
    system("./miningmenu");
    }
  }
     if (menu2 == 6) {
  FILE *file = fopen("database/Mining/Level/lvl.bin", "rb");
  int level1;
   fread(&level1, sizeof(int), 1, file);
  fclose(file);
    int minlevel = mythanlvl;
    if (level1 >= minlevel) // Minimum Level
    {
      mythanarea();
    } else {
  
    int system(const char *command); 
    system("clear"); 
    printf("SYSTEM NOTIFICATION : \n");
      printf("You Need %d Mining Level To Access This Area", minlevel);
      printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    	
    int system(const char *command);
    system("./miningmenu");
    }
  }
     if (menu2 == 7) {
  FILE *file = fopen("database/Mining/Level/lvl.bin", "rb");
  int level1;
   fread(&level1, sizeof(int), 1, file);
  fclose(file);
    int minlevel = magiclvl;
    if (level1 >= minlevel) // Minimum Level
    {
      magicarea();
    } else {
  
    int system(const char *command); 
    system("clear"); 
    printf("SYSTEM NOTIFICATION : \n");
      printf("You Need %d Mining Level To Access This Area", minlevel);
      printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    	
    int system(const char *command);
    system("./miningmenu");
    }
  }
  if(menu2 == 8)
  {
      int system(const char *command); 
    system("clear");
   system("./main");
  }
  if (menu2 > 8) {
     int system(const char *command); 
    system("clear");
    printf("SYSTEM NOTIFICATION : \n");
    printf("Please Enter A Valid Menu Number\n");
    printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");	
    system("./miningmenu");
  }
	}
