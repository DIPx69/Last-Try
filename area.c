#include <stdio.h>
#include <math.h>
#include <sys/stat.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include "global.h"
#include "area.h"
#include "config.h"
#include "minedata.h"
// Clear Terminal
int system(const char *command);
void clear() {
	 system("clear"); 
	 }

void loading(const char *str,int sec) {
  int i;
  for (i = 0; str[i] != '\0'; i++) {
    putchar(str[i]);
    fflush(stdout);
    float sec1 = (float) sec / 28;
    int sec2 = sec1 * 1000000;
    int sec3 = sec2;
    usleep(sec3);
  }
}
void ironarea()
{
  clear();
  srand(time(NULL));
  int ironamm = rand() % maxiron + 1;
  int randxp = rand() % maxxpiron + 1;
  printf("                ");
  six("Iron Area\n");
  FILE *file = fopen("database/Mining/Level/nextlvlxp.bin", "rb");
  int nxxp;
  fread(&nxxp, sizeof(int), 1, file);
  fclose(file);
  FILE *file1 = fopen("database/Mining/Level/xp.bin", "rb");
  int nowxp;
  fread(&nowxp, sizeof(int), 1, file1);
  fclose(file1);
  if (nowxp > nxxp) {
    reset(nowxp);
    lvlstore(1);
    nxtxp(50);
    printf("\nNOTIFICATION ALERT :\nYou Have Level Up To ");
    lvlshow();
    printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    sleep(5);
  }
  iron(ironamm);
  mineadd(1);
  xpstore(randxp);
  printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
  printf("You Mined %d Iron", ironamm);
  printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
  printf("You Have Received %d XP", randxp);
  printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
  printf("Total Iron : ");
  ironshow();
  printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
  loading("____________________________", ironcooldown-1);
    loading("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b", 1);
  int back17;
  printf("\n\nType 69 To Continue (96 = Home) : ");
  scanf("%d", &back17);
  if (back17 == 96) {
    clear();
    system("./main");
  }
  if (back17 == 69) {
    clear();
    ironarea();
  }
  }
void coalarea() {
  clear();
  srand(time(NULL));
  int coalamm = rand() % maxcoal + 1;
  int randxp = rand() % maxxpcoal + 1;
  printf("                ");
  six("Coal Area\n");
  FILE *file = fopen("database/Mining/Level/nextlvlxp.bin", "rb");
  int nxxp;
  fread(&nxxp, sizeof(int), 1, file);
  fclose(file);
  FILE *file1 = fopen("database/Mining/Level/xp.bin", "rb");
  int nowxp;
  fread(&nowxp, sizeof(int), 1, file);
  fclose(file1);
  if (nowxp > nxxp) {
    reset(nowxp);
    lvlstore(1);
    nxtxp(50);
    printf("\nNOTIFICATION ALERT :\nYou Have Level Up To ");
    lvlshow();
    printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    sleep(5);
  }
  coal(coalamm);
  mineadd(1);
  xpstore(randxp);
  printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
  printf("You Mined %d Coal", coalamm);
  printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
  printf("You Have Received %d XP", randxp);
  printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
  printf("Total Coal : ");
  coalshow();
  printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
  loading("____________________________", coalcooldown-1);
    loading("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b", 1);
  int back17;
  printf("\n\nType 69 To Continue (96 = Home) : ");
  scanf("%d", &back17);
  if (back17 == 96) {
    clear();
    system("./main");
  }
  if (back17 == 69) {
    clear();
    coalarea();
  }
}
void silverarea() {
  clear();
  srand(time(NULL));
  int silveramm = rand() % maxsilver + 1;
  int randxp = rand() % maxxpsilver + 1;
  printf("                ");
  six("Silver Area\n");
  FILE *file = fopen("database/Mining/Level/nextlvlxp.bin", "rb");
  int nxxp;
    fread(&nxxp, sizeof(int), 1, file);
  fclose(file);
  FILE *file1 = fopen("database/Mining/Level/xp.bin", "rb");
  int nowxp;
  fread(&nowxp, sizeof(int), 1, file);
  fclose(file1);
  if (nowxp > nxxp) {
    reset(nowxp);
    lvlstore(1);
    nxtxp(50);
    printf("\nNOTIFICATION ALERT :\nYou Have Level Up To ");
    lvlshow();
    printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    sleep(5);
  }
  silver(silveramm);
  mineadd(1);
  xpstore(randxp);
  printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
  printf("You Mined %d Silver", silveramm);
  printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
  printf("You Have Received %d XP", randxp);
  printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
  printf("Total Silver : ");
  silvershow();
  printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
  loading("____________________________", silvercooldown-1);
    loading("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b", 1);
  int back17;
  printf("\n\nType 69 To Continue (96 = Home) : ");
  scanf("%d", &back17);
  if (back17 == 96) {
    clear();
    system("./main");
  }
  if (back17 == 69) {
    clear();
    silverarea();
  }
}
void crimsteelarea() {
  clear();
  srand(time(NULL));
  int crimsteelamm = rand() % maxcrimsteel + 1;
  int randxp = rand() % maxxpcrimsteel + 1;
  printf("                ");
  six("Crimsteel Area\n");
  FILE *file = fopen("database/Mining/Level/nextlvlxp.bin", "rb");
  int nxxp;
   fread(&nxxp, sizeof(int), 1, file);
  fclose(file);
  FILE *file1 = fopen("database/Mining/Level/xp.bin", "rb");
  int nowxp;
  fread(&nowxp, sizeof(int), 1, file1);
  fclose(file1);
  if (nowxp > nxxp) {
    reset(nowxp);
    lvlstore(1);
    nxtxp(50);
    printf("\nNOTIFICATION ALERT :\nYou Have Level Up To ");
    lvlshow();
    printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    sleep(5);
  }
  crim(crimsteelamm);
  mineadd(1);
  xpstore(randxp);
  printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
  printf("You Mined %d Crimsteel", crimsteelamm);
  printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
  printf("You Have Received %d XP", randxp);
  printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
  printf("Total Crimsteel : ");
  crimshow();
  printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
  loading("____________________________", crimsteelcooldown-1);
    loading("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b", 1);
  int back17;
  printf("\n\nType 69 To Continue (96 = Home) : ");
  scanf("%d", &back17);
  if (back17 == 96) {
    clear();
    system("./main");
  }
  if (back17 == 69) {
    clear();
    crimsteelarea();
  }
}
void goldarea() {
  clear();
  srand(time(NULL));
  int goldamm = rand() % maxgold + 1;
  int randxp = rand() % maxxpgold + 1;
  printf("                ");
  six("Gold Area\n\n");
  FILE *file = fopen("database/Mining/Level/nextlvlxp.bin", "rb");
  int nxxp;
  fread(&nxxp, sizeof(int), 1, file);
  fclose(file);
  FILE *file1 = fopen("database/Mining/Level/xp.bin", "rb");
  int nowxp;
 fread(&nowxp, sizeof(int), 1, file);
  fclose(file1);
  if (nowxp > nxxp) {
    reset(nowxp);
    lvlstore(1);
    nxtxp(50);
    printf("\nNOTIFICATION ALERT :\n You Have Level Up To ");
    lvlshow();
    printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    sleep(5);
  }
  gold(goldamm);
  mineadd(1);
  xpstore(randxp);
  printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
  printf("You Mined %d Gold", goldamm);
  printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
  printf("You Have Received %d XP", randxp);
  printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
  printf("Total Gold : ");
  goldshow();
  printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    loading("____________________________", goldcooldown-1);
    loading("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b", 1);
  int back17;
  printf("\n\nType 69 To Continue (96 = Home) : ");
  scanf("%d", &back17);
  if (back17 == 96) {
    clear();
    system("./main");
  }
  if (back17 == 69) {
    clear();
    goldarea();
  }
}
void mythanarea() {
  clear();
  srand(time(NULL));
  int mythanamm = rand() % maxmythan + 1;
  int randxp = rand() % maxxpmythan + 1;
  printf("                ");
  six("Mythan Area\n");
  FILE *file = fopen("database/Mining/Level/nextlvlxp.bin", "rb");
  int nxxp;
    fread(&nxxp, sizeof(int), 1, file);
  fclose(file);
  FILE *file1 = fopen("database/Mining/Level/xp.bin", "rb");
  int nowxp;
 fread(&nowxp, sizeof(int), 1, file);
  fclose(file1);
  if (nowxp > nxxp) {
    reset(nowxp);
    lvlstore(1);
    nxtxp(50);
    printf("\nNOTIFICATION ALERT :\n You Have Level Up To\n ");
    lvlshow();
    printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    sleep(5);
  }
  mythan(mythanamm);
  mineadd(1);
  xpstore(randxp);
  printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
  printf("You Mined %d Mythan", mythanamm);
  printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
  printf("You Have Received %d XP", randxp);
  printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
  printf("Total Mythan : ");
  mythanshow();
  printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
   loading("____________________________", goldcooldown-1);
    loading("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b", 1);
  int back17;
  printf("\n\nType 69 To Continue (96 = Home) : ");
  scanf("%d", &back17);
  if (back17 == 96) {
    clear();
    system("./main");
  }
  if (back17 == 69) {
    clear();
    mythanarea();
  }
}
void magicarea() {
  clear();
  srand(time(NULL));
  int magicamm = rand() % maxmagic + 1;
  int randxp = rand() % maxxpmagic + 1;
  printf("                ");
  six("Magic Area\n");
  FILE *file = fopen("database/Mining/Level/nextlvlxp.bin", "rb");
  int nxxp;
    fread(&nxxp, sizeof(int), 1, file);
  fclose(file);
  FILE *file1 = fopen("database/Mining/Level/xp.bin", "rb");
  int nowxp;
    fread(&nowxp, sizeof(int), 1, file);
  fclose(file1);
  if (nowxp > nxxp) {
    reset(nowxp);
    lvlstore(1);
    nxtxp(50);
    printf("\nNOTIFICATION ALERT :\n You Have Level Up To\n ");
    lvlshow();
    printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    sleep(5);
  }
  magic(magicamm);
  mineadd(1);
  xpstore(randxp);
  printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
  printf("You Mined %d Magic", magicamm);
  printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
  printf("You Have Received %d XP", randxp);
  printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
  printf("Total Magic : ");
  magicshow();
  printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    loading("____________________________", magiccooldown-1);
    loading("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b", 1);
  int back17;
  printf("\n\nType 69 To Continue (96 = Home) : ");
  scanf("%d", &back17);
  if (back17 == 96) {
    clear();
    system("./main");
  }
  if (back17 == 69) {
    clear();
    magicarea();
  }
}
