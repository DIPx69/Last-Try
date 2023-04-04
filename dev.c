#include <stdio.h>
#include <math.h>
#include <sys/stat.h>
#include <time.h>
#include <unistd.h>
#include "global.h"

// Clear Terminal
int system(const char *command);
void clear() {
	 system("clear"); 
	 }
int menu69;
int menu9;
int main()
{
    clear();
    printf("               ");
    six("Dev Mode\n\n");
    printf("[1] Add Coin\n\n[2] Add Level\n\n[3] Add XP\n\n[4] Add Next Level "
           "XP\n\n[5] Add Item\n\n[6] Back\n\n");
    six("Enter Menu Number : ");
    scanf("%d", &menu69);
 if (menu69 == 1) {
    clear();
  FILE *file = fopen("database/coin.bin", "rb");
  int num;
  fread(&num, sizeof(int), 1, file);
  fclose(file);
    printf("               ");
    six("Add Coin\n\n");
  	printf("NOTE: Type 69 To Reset\n");
  	printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    printf("Current Coin : ");
    con();
    show();
  int coin69;
    six("\nEnter Coin Amount : ");
    scanf("%d", &coin69);
    printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
  	if(coin69 == 69)
   {
   	int coin68 = num*-1;
   	addcoin(coin68);
   printf("Your Coin Has Been Reset\n");
   	}
  else {
    addcoin(coin69);
    printf("%d Coin Add To Your Account\n", coin69);
  	}
    printf("Current Coin : ");
    con();
    show();
    printf("\n");
    int back16;
    printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━");
    printf("\nType 69 To Dev Mode : ");
    scanf("%d", &back16);
    if (back16 == 69 || back16 != 69) {
      clear();
      system("./dev");
    }
  }
  if (menu69 == 2) {
    clear();
  FILE *file = fopen("database/Mining/Level/lvl.bin", "rb");
  int num;
  fread(&num, sizeof(int), 1, file);
  fclose(file);
    printf("               ");
    six("Add Level\n\n");
    printf("NOTE: Type 69 To Reset\n");
  	printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    printf("Current Level : ");
    lvlshow();
  	int lvl69;
    six("\nEnter Level : ");
    scanf("%d", &lvl69);
    printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
 if(lvl69 == 69)
 {
 	int lvl68 = num*-1;
 	lvlstore(lvl68+1);
 printf("Your Level Has Been Reset\n");	
 }
 else {
    lvlstore(lvl69);
    printf("%d Level Add To Your Account\n", lvl69);
    }
    printf("Current Level : ");
    lvlshow();
    printf("\n");
    int back16;
    printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━");
    printf("\nType 69 To Dev Mode : ");
    scanf("%d", &back16);
    if (back16 == 69 || back16 != 69) {
      clear();
      system("./dev");
    }
  }
  if (menu69 == 3) {
    clear();
    printf("               ");
    FILE *file = fopen("database/Mining/Level/xp.bin", "rb");
  int num;
  fread(&num, sizeof(int), 1, file);
  fclose(file);
    six("Add XP\n\n");
    printf("NOTE: Type 69 To Reset\n");
  printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    printf("Current XP : ");
    xpshow();
    printf("/");
    nxtxpshow();
    six("\nEnter XP Amount : ");
  	int xp69;
    scanf("%d", &xp69);
    printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
  if(xp69 == 69)
  {
  	int xp68 = num*-1;
  	xpstore(xp68+1);
 printf("Your XP Has Been Reset\n"); 	
  }  
  else {
  	xpstore(xp69);
    printf("%d XP Add To Your Account\n", xp69);
    }
    printf("Current XP : ");
    xpshow();
    printf("/");
    nxtxpshow();
    printf("\n");
    int back16;
    printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━");
    printf("\nType 69 To Dev Mode : ");
    scanf("%d", &back16);
    if (back16 == 69 || back16 != 69) {
      clear();
      system("./dev");
    }
  }
  if (menu69 == 4) {
    clear();
    printf("               ");
   FILE *file = fopen("database/Mining/Level/nextlvlxp.bin", "rb");
  int num;
  fread(&num, sizeof(int), 1, file);
  fclose(file);
  six("Add Next Level XP\n\n");
  printf("NOTE: Type 69 To Reset\n");
  printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    printf("Current Next Level XP : ");
    nxtxpshow();
    printf("\n");
    six("Enter Next Level XP : ");
  	int nxt69;
    scanf("%d", &nxt69);
    printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
if(nxt69 == 69)
{
  int nxt68 = num*-1;
  nxtxp(nxt68+100);
  printf("Your Next Level XP Has Been Reset\n");
} else {
    nxtxp(nxt69);
    printf("%d Next Level XP Add To Your Account\n", nxt69);
    }
    printf("Current Next Level XP : ");
    nxtxpshow();
    printf("\n");
    int back16;
    printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━");
    printf("\nType 69 To Dev Mode : ");
    scanf("%d", &back16);
    if (back16 == 69 || back16 != 69) {
      clear();
      system("./dev");
    }
  }
  
  if(menu69 == 5)
  {
    clear();
    FILE *file = fopen("database/item/minex.bin", "rb");
    int amm;
    fread(&amm, sizeof(int), 1, file);
    fclose(file);
    FILE *file1 = fopen("database/item/xpboost.bin", "rb");
    int ammxp;
    fread(&ammxp, sizeof(int), 1, file);
    fclose(file1);
    printf("               ");
    six("Add Item\n\n");
    printf("[1] MineX [%d]\n\n", amm);
    printf("[2] XP Boost [%d]\n\n", ammxp);
    printf("[3] Back To Dev Mode\n\n");
    six("Enter Menu Number : ");
    scanf("%d", &menu9);
    }
if(menu9 == 1)
{
	clear();
    printf("               ");
  FILE *file = fopen("database/item/minex.bin", "rb");
  int num;
  fread(&num, sizeof(int), 1, file);
  fclose(file);
    six("Add MineX\n\n");
    printf("NOTE: Type 69 To Reset\n");
  	printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    printf("Current MineX : ");
    minexshow();
   printf("\nEnter Amount : ");
   int amm;
   scanf("%d",&amm);
printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
  if(amm == 69)
  {
  int minexamm = num*-1;
  	minexadd(minexamm);
  printf("Your MineX Has Been Reset\n");		
  }
  else{
  	minexadd(amm);
  	printf("%d MineX Add To Your Account\n", amm);
  	}
  	printf("Current MineX : ");
  minexshow();
   printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━");
   int back16;
    printf("\nType 69 To Dev Mode : ");
    scanf("%d", &back16);
    if (back16 == 69 || back16 != 69) {
      clear();
      system("./dev");
}
}
if(menu9 == 2)
{
	clear();
    printf("               ");
  FILE *file = fopen("database/item/xpboost.bin", "rb");
  int num;
  fread(&num, sizeof(int), 1, file);
  fclose(file);
    six("Add XP Boost\n\n");
    printf("NOTE: Type 69 To Reset\n");
  	printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    printf("Current XP Boost : ");
    xpboostshow();
   printf("\nEnter Amount : ");
   int amm;
   scanf("%d",&amm);
printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
   if(amm == 69)
   {
   	int xpboostamm = num*-1;
   	xpboostadd(xpboostamm);
   	printf("Your XP Boost Has Been Reset\n"); 
   	}
   	else
   	{
   xpboostadd(amm);
printf("%d XP Boost Add To Your Account\n", amm);
   	}
   printf("Current XP Boost : ");
  xpboostshow();
   printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━");
   int back16;
    printf("\nType 69 To Dev Mode : ");
    scanf("%d", &back16);
    if (back16 == 69 || back16 != 69) {
      clear();
      system("./dev"); 
      }
      }
if(menu9 == 3)
{
      clear();
      system("./dev"); 	
}
if(menu69 == 6)
{
clear();
system("./main");	
}
      }
