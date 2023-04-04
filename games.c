#include <stdio.h>
#include <math.h>
#include <sys/stat.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include "global.h"

// Clear Terminal
int system(const char *command);
void clear() {
	 system("clear"); 
	 }
// Games Void
void coinflip() {
  int g;
  int num = rand() % 2 + 1;
  clear();
  printf("                 ");
  six("Head Or Tail\n\n");
  six("        1 = Head * 2 = Tail * 69 = Home\n");
  printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
  six("Enter Number : ");
  scanf("%d", &g);
  printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━");
  if (g == 69) {
    clear();
    system("./main");
  }
  if (num == 1) {
    six("\nDip Flipped The Coin And It Was Head\n");
  }
  if (num == 2) {
    six("\nDip Flipped The Coin And It Was Tail\n");
  }
  six("Your Choice : ");
  if (g == 1) {
    six("Head");
  }
  if (g == 2) {
    six("Tail");
  }

  if (g == num) {
    printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━");
    addcoin(1000);
    six("\n1000 Coin Add To Your Account");
    six("\nCurrent Coin : ");
    con();
    show();
    printf("\n");
    int back5;
    printf("\nType 69 To Restart : ");
    scanf("%d", &back5);
    if (back5 == 69 || back5 != 69) {
      coinflip();
    }
  }
  if (g != num) {
    printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    six("            *You Fucked Up*");
    six("\n2000 Coin Removed From Your Account\n");
    addcoin(-2000);
    six("\nCurrent Coin : ");
    con();
    show();
    printf("\n");
    printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    int back5;
    printf("\nType 69 To Restart : ");
    scanf("%d", &back5);
    if (back5 == 69 || back5 != 69) {
      coinflip();
    }
  }
}
// Squid X
void xp() {
  int g;
  int floor1, floor2;
  srand(time(0));
  floor1 = rand() % 2 + 1;
  do {
    floor2 = rand() % 2 + 1;
  } while (floor1 == floor2);
  clear();
  printf("                 ");
  six("Squidx(BETA)\n");
  six("\n             Choice Any Floor\n");
 printf("\n      |-------------|    |-------------|  \n      |             |    "
      "|             |\n      |      1      |    |      2      |\n      |      "
      "       |    |             |\n      |-------------|    "
      "|-------------|\n\n\n");
  six("Enter Floor Number : ");
  scanf("%d", &g);
  if (g == 1) {
    if (floor1 != g) {
      clear();
      printf("                 ");
      six("Squidx(BETA)\n");
      six("\n\n            *You Fucked Up*");
      six("\n2000 Coin Removed From Your Account");
      printf("\nCurrent Coin : ");
      addcoin(-2000);
      con();
      show();
      y();
      printf("\n\n*You Can't Play For 120 Second");
      printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
      int back6;
      printf("\nType 69 To Return Home : ");
      scanf("%d", &back6);
      if (back6 == 69 || back6 != 69) {
        clear();
        system("./main");
      }
    }
    if (floor1 == g) {
      clear();
      printf("                 ");
      six("Squidx(BETA)\n");
      six("\n        Nice Now Jump To Next Floor\n");
      six("\n1000 Coin Add To Your Account");
      printf("\n\nCurrent Coin : ");
      addcoin(1000);
      con();
      show();
      printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
      int back7;
      printf("\nType 69 To Continue  : ");
      scanf("%d", &back7);
      if (back7 == 69 || back7 != 69) {
        clear();
        xp();
      }
    }
  }

  if (g == 2) {
    if (floor2 != g) {

      clear();
      printf("                 ");
      six("Squidx(BETA)\n");
      six("\n\n            *You Fucked Up*");
      six("\n2000 Coin Removed From Your Account");
      printf("\nCurrent Coin : ");
      addcoin(-2000);
      con();
      show();
      y();
      printf("\n\n*You Can't Play For 120 Second");
      printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
      int back10;
      printf("\nType 69 To Return Home : ");
      scanf("%d", &back10);
      if (back10 == 69 || back10 != 69) {
        clear();
        system("./main");
      }
    }
  }
  if (floor2 == g) {
    clear();

    printf("                 ");
    six("Squidx(BETA)\n");
    six("\n       Nice Now Jump To Next Floor\n");
    six("\n1000 Coin Add To You Account");
    printf("\n\nCurrent Coin : ");
    addcoin(1000);
    con();
    show();
    printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    int back8;
    printf("\nType 69 To Continue  : ");
    scanf("%d", &back8);
    if (back8 == 69 || back8 != 69) {
      clear();
      xp();
    }
  }
}
int menu3;
int main()
{
    
    printf("                ");
    six("Games\n\n");
    printf("[1] Coin Flip\n\n[2] Squidx(BETA)\n\n[3] Back\n\n");
    six("Enter Menu Number : ");
    scanf("%d", &menu3);
  
if (menu3 == 1) {
   coinflip();
  }

  if (menu3 == 2) {
    FILE *file = fopen("database/squixtime.bin", "rb");
    int num;
    fread(&num, sizeof(int), 1, file);
    fclose(file);
    time_t current;
    current = time(NULL);
    num = current - num;
    int delay = 120;
    if (num > delay) {
      xp();
    } else {
      clear();
      printf("SYSTEM NOTIFICATION : \n");
      six("You Need To Wait ");
      int cooldown = num - delay;
      printf("%d",cooldown*-1);
      six(" Second For Next Game");
      printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
      system("./games");
    }
  }

  if (menu3 == 3) {
    clear();
    system("./main");
  }
  if (menu3 > 3) {
    clear();
    printf("SYSTEM NOTIFICATION : \n");
    printf("Please Enter A Valid Menu Number\n");
    printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");	
    system("./games");
  }
}
