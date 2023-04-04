#include <math.h>
#include <stdio.h>
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
int main()
{
	int menu1;
    printf("               ");
    six("Settings\n\n");
    printf("[1] Change Username\n\n[2] Reset Mining Data\n\n[3] Back\n\n");
    six("Enter Menu Number : ");
    scanf("%d", &menu1);
   if (menu1 == 1) {
    clear();
    char namex[10];
    printf("               ");
    six("Change Username\n\n");
    six("Enter New Username : ");
    scanf("%s", namex);
    FILE *fp;
    fp = fopen("database/name.txt", "wb");
    fwrite(&namex, sizeof(int), 1, fp);
    fclose(fp);
    printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    six("Your Name Successcessfully Set As ");
    name();
    printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    int back16;
    printf("Type 69 To Return Home : ");
    scanf("%d", &back16);
    if (back16 == 69 || back16 != 69) {
      clear();
      system("./main");
    }
  }
  if (menu1 == 2) {
    int back30;
    printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━");
    printf("\nType 69 To Confirm : ");
    scanf("%d", &back30);
    if (back30 != 69) {
      clear();
      system("./main");
    }
    if (back30 == 69) {
      clear();
      resetmine();
      int back31;
      printf("Type 69 To Return Home : ");
      scanf("%d", &back31);
      if (back31 == 69 || back31 != 69) {
        clear();
        system("./main");
      }
    }
  }
  if (menu1 == 3) {
    clear();
    system("./main");
  } 
   if (menu1 > 3) {
    clear();
    printf("SYSTEM NOTIFICATION : \n");
    printf("Please Enter A Valid Menu Number\n");
    printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");	
    system("./settings");
  } 
}
