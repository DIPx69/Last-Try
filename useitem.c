#include <math.h>
#include <stdio.h>
#include <sys/stat.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include "global.h"
#include "config.h"
// Clear Terminal
int system(const char *command);
void clear() {
	 system("clear"); 
	 }
int menu8;
int main()
{	 
    FILE *file = fopen("database/item/minex.bin", "rb");
    int amm;
    fread(&amm, sizeof(int), 1, file);
    fclose(file);
    FILE *file1 = fopen("database/item/xpboost.bin", "rb");
    int ammxp;
    fread(&ammxp, sizeof(int), 1, file1);
    fclose(file1);
    printf("               ");
    printf("Use Item\n\n");
    printf("[1] MineX [%d]\n\n", amm);
    printf("[2] XP Boost [%d]\n\n", ammxp);
    printf("[3] Back\n\n");
   six("Enter Menu Number : ");
    scanf("%d", &menu8);
  
if (menu8 == 1) {
	  clear();
	printf("               ");
    six("Use MineX\n");
if(amm > 0)
    {
    clear();	
    printf("               ");
    printf("Use MineX\n");
    printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    printf("You Have Used A MineX\n");
    x();
    printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    printf("Current MineX : ");
    minexadd(-1);
    minexshow();
    printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    printf("Expiring In %d Seconds",minexcool);
    printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    	}
    	    else
    {
    printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    printf("You Currently Don't Have This Item");
    printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");	
    }
    int back16;
    printf("Type 69 To Return Home : ");
    scanf("%d", &back16);
    clear();
    system("./main");
    }
    if(menu8 == 2)
{
    clear();
    printf("               ");
    six("Use XP Boost\n");
if(ammxp > 0)
   { printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    printf("You Have Used A XP Boost\n");
    d();
    printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    printf("Current XP Boost : ");
    xpboostadd(-1);
    xpboostshow();
    printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    printf("Expiring In %d Seconds",xpboostcool);
    printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    }
    else
    {
    printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    printf("You Currently Don't Have This Item");
    printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");	
    }
    int back16;
    printf("Type 69 To Return Home : ");
    scanf("%d", &back16);
      clear();
      system("./main");
  }
 if(menu8 == 3)
 {
 clear();
 system("./main"); 	
 }
    if (menu8 > 3) {
    clear();
    printf("SYSTEM NOTIFICATION : \n");
    printf("Please Enter A Valid Menu Number\n");
    printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");	
  system("./useitem");
  }
}
