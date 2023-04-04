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
int main()
{
	clear();
    printf("               ");
    six("Inventory");
    printf("\n━━━━━━━━━━━━━━━━\n");
    printf("Iron : ");
    ironshow();
    printf("\n━━━━━━━━━━━━━━━━\n");
    printf("Coal : ");
   coalshow();
    printf("\n━━━━━━━━━━━━━━━━\n");
    printf("Silver : ");
   silvershow();
    printf("\n━━━━━━━━━━━━━━━━\n");
    printf("Crimsteel : ");
    crimshow();
    printf("\n━━━━━━━━━━━━━━━━\n");
    printf("Gold : ");
   goldshow();
    printf("\n━━━━━━━━━━━━━━━━\n");
    printf("Mythan : ");
   mythanshow();
    printf("\n━━━━━━━━━━━━━━━━\n");
    printf("Magic : ");
   magicshow();
    printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    printf("| Usable Item |");
    printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    printf("MineX : ");
    minexshow();
    printf("\n━━━━━━━━━━━━━━━━\n");
    printf("XP Boost : ");
    xpboostshow();
    printf("\n━━━━━━━━━━━━━━━━\n");
    int back16;
    printf("Type 69 To Return Home : ");
    scanf("%d", &back16);
    if (back16 == 69 || back16 != 69) {
      clear();
      system("./main");
    }
  }
