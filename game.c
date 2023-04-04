#include <stdio.h>
#include <stdio.h>
#include <math.h>
#include <sys/stat.h>
#include <time.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "global.h"
int system(const char *command);
void clear() {
	 system("clear"); 
	 }
void loadingx(const char *str,int sec,int ch) {
  int i;
  for (i = 0; str[i] != '\0'; i++) {
    putchar(str[i]);
    fflush(stdout);
    float sec1 = (float) sec / ch;
    int sec2 = sec1 * 1000000;
    int sec3 = sec2;
    usleep(sec3);
  }
}
void typeuid(int num) {
    char buffer[10];
    sprintf(buffer, "%d", num);
    int i = 0;
    while (buffer[i] != '\0') {
        printf("%c", buffer[i]);
        fflush(stdout);
        usleep(50000);  // Wait 50 milliseconds
        i++;
    }
}
int main()
{
  clear();
  six("WELCOME TO LAST TRY\n");
  printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
  six("Enter Username : ");
  char namex[16];
    scanf("%s", namex);
    FILE *fp;
    fp = fopen("database/name.txt", "wb");
    fwrite(&namex, sizeof(int), 1, fp);
    fclose(fp);
    printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    six("Your Name Successcessfully Set As ");
    name();
    printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━\n"); 
 srand(time(0));
  int uid = rand() % 90000 + 100000;
  loadingx("GENERATING YOUR ID : ", 1, 24);
loadingx("XXXXX", 1, 12);
  loadingx("\b\b\b\b\b", 1, 12);
 loadingx("xxxxx", 1, 12);
 loadingx("\b\b\b\b\b", 1, 12);
 loadingx("XXXXX", 1, 12);
  loadingx("\b\b\b\b\b", 1, 12);
 loadingx("xxxxx", 1, 12);
 loadingx("\b\b\b\b\b", 1, 12);
  typeuid(uid);
  FILE *file = fopen("database/uid.txt", "wb");
  fwrite(&uid, sizeof(int), 1, file);
  fclose(file);
  printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━");
  printf("\n STARING.");
  sleep(1);
  system("gcc main.c global.c config.c minedata.c -o main");
  sleep(1);
  system("./main");	
	}
