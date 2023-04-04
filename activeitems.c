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
int main()
{
	FILE *file = fopen("database/ItemExp/minexexp.bin", "rb");
    int num;
    fread(&num, sizeof(int), 1, file);
    fclose(file);
    FILE *file1 = fopen("database/ItemExp/xpboostexp.bin", "rb");
    int num1;
    fread(&num1, sizeof(int), 1, file);
    fclose(file);
    time_t current;
    current = time(NULL);
    num = current - num;
    num1 = current - num1;
    int minexcooldown = minexcool; // Minex Exp Time
    int xpboostcooldown = xpboostcool; // Xp Boost Exp Time
    clear();
    printf("               ");
    int xp = (num - minexcooldown) * -1;
    int xpbo = (num1 - xpboostcooldown) * -1;
    six("Active Items");
    printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    printf("MineX\n");
    if (0 < xp) {
      printf("      Expiring In %d Seconds", xp);
    } else {
      printf("       Use MineX First");
    }
    printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    printf("XP Boost\n");
    if (0 < xpbo) {
      printf("      Expiring In %d Seconds", xpbo);
    } else {
      printf("       Use XP Boost First");
    }
    printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    int back16;
    printf("Type 69 To Return Home : ");
    scanf("%d", &back16);
    if (back16 == 69 || back16 != 69) {
      clear();
      system("./main");
    }
}
