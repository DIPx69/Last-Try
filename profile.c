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
		 // id show
void idshow()
	{
	  int uid;	
    FILE *fp = fopen("database/uid.txt", "rb");
    fread(&uid, sizeof(int), 1, fp);
    fclose(fp);
    printf("%d",uid);
		 }
 int main() 
 { 
 	clear();
    printf("                ");
    printf("My Profile\n\n");
    printf("Username: ");
    name();
    printf("\n\nTotal Coin : ");
    show(); 
    printf("\n\nID : ");
    idshow(); 
  printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    printf("Mining Stats|\n");
 printf("━━━━━━━━━━━━\n"); 
    printf("Total Mining : ");
  total();
    printf("\n");
    printf("Level : ");
   lvlshow();
    printf("\n");
    printf("XP BAR : ");
  xpshow();
    printf("/");
  nxtxpshow();
  printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    int back1;
    six("Type 69 To Return Home : ");
    scanf("%d", &back1);
    if (back1 == 69 || back1 != 69) {
 clear();
      system("./main");
      }
      }
