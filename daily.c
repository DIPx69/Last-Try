#include <stdio.h>
#include <math.h>
#include <sys/stat.h>
#include <time.h>
#include <unistd.h>
#include "global.h"
#include "config.h"
// Clear Terminal
int system(const char *command);
void clear() {
	 system("clear"); 
	 }
int main()
{
	FILE *file = fopen("database/time.bin", "rb");
    int num;
    fread(&num, sizeof(int), 1, file);
    fclose(file);
    time_t current;
    current = time(NULL);
    num = current - num;
    int delay = dailycooldown;
    if (num > delay) {
      clear();
      printf("               Daily Bonus\n\n");
      printf("%d",dailycoin);
      six(" Coin Add To Your Account");
      printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
      printf("Preveous Coin : ");
      show();
      printf("\n━━━━━━━━━━━━━━");
      printf("\nCurrent Coin : ");
      addcoin(dailycoin);
      show();
      printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
      printf("Wait %d Second For Next Claim", delay);
      printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
      t();
      int back2;
      printf("Type 69 To Return Home : ");
      scanf("%d", &back2);
      if (back2 == 69 || back2 != 69) {
        clear();
        system("./main");
      }
    } 
    else    {
      clear();
      printf("SYSTEM NOTIFICATION : \n");
      six("Wait ");
      int cooldown = num - delay;
      printf("%d",cooldown*-1);
      six(" Second For Next Claim");
      printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
     system("./main");
    }
}
