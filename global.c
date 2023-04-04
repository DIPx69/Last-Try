#include <stdio.h>
#include <unistd.h>
#include <time.h>
void six(const char *str) {
  int i;
  for (i = 0; str[i] != '\0'; i++) {
    putchar(str[i]);
    fflush(stdout);
    usleep(5000);
  }
}
// coin add
void addcoin(int data) {
  FILE *file1 = fopen("database/coin.bin", "rb");
  int num1;
  fread(&num1, sizeof(int), 1, file1);
  int num2;
  num2 = num1 + data;
  FILE *fp = fopen("database/coin.bin", "wb");
  fwrite(&num2, sizeof(int), 1, fp);
  fclose(fp);
}
// Converta To 0
void con() {
  int num;
  FILE *file = fopen("database/coin.bin", "rb");
  fread(&num, sizeof(int), 1, file);
  fclose(file);
  if (num < 0) {
    addcoin(-1 * num);
  }
}
// Adding Total Mining
void mineadd(int data) {
  FILE *file1 = fopen("database/Mining/total.bin", "rb");
  int mine1;
  fread(&mine1, sizeof(int), 1, file1);
  int mine2 = data;
  int mine3 = mine1 + mine2;
  fclose(file1);
  FILE *file = fopen("database/Mining/total.bin", "wb");
  fwrite(&mine3, sizeof(int), 1, file);
  fclose(file);
}
// coin show
void show()
	{
	  int coin;	
    FILE *fp = fopen("database/coin.bin", "rb");
    fread(&coin, sizeof(int), 1, fp);
    fclose(fp);
    printf("%d",coin);
		 }
		 // Total Mining
void total()
	{
	  int total;	
    FILE *fp = fopen("database/Mining/total.bin", "rb");
    fread(&total, sizeof(int), 1, fp);
    fclose(fp);
    printf("%d",total);
		 }
		 // Level Show
void lvlshow()
	{
	  int lvl;	
    FILE *fp = fopen("database/Mining/Level/lvl.bin", "rb");
    fread(&lvl, sizeof(int), 1, fp);
    fclose(fp);
    printf("%d",lvl);
		 }
		 // XP Show
void xpshow()
	{
	  int xpshow;	
    FILE *fp = fopen("database/Mining/Level/xp.bin", "rb");
    fread(&xpshow, sizeof(int), 1, fp);
    fclose(fp);
    printf("%d",xpshow);
		 }
		 // Next Level XP Show
void nxtxpshow()
	{
	  int nxtxp;	
    FILE *fp = fopen("database/Mining/Level/nextlvlxp.bin", "rb");
    fread(&nxtxp, sizeof(int), 1, fp);
    fclose(fp);
    printf("%d",nxtxp);
		 }
		// Name Show		 	
void name() {
  FILE *fp;
  char text[100];
  fp = fopen("database/name.txt", "r");
  while (fgets(text, 100, fp) != NULL) {
    printf("%s", text);
  }
  fclose(fp);
}

// Saveing Time in bin File
void t() {
  time_t current_time;
  current_time = time(NULL);
  FILE *file = fopen("database/time.bin", "wb");
  fwrite(&current_time, sizeof(int), 1, file);
  fclose(file);
}
void y() {
  time_t current_time;
  current_time = time(NULL);
  FILE *file = fopen("database/squixtime.bin", "wb");
  fwrite(&current_time, sizeof(int), 1, file);
  fclose(file);
}
// Info Show About Item
void ironshow() {
	int num;
  FILE *file = fopen("database/Mining/iron.bin", "rb");
  fread(&num, sizeof(int), 1, file);
  fclose(file);
  printf("%d", num);
}
void coalshow() {
	int num;
  FILE *file = fopen("database/Mining/coal.bin", "rb");
  fread(&num, sizeof(int), 1, file);
  fclose(file);
  printf("%d", num);
}
void silvershow() {
	int num;
  FILE *file = fopen("database/Mining/silver.bin", "rb");
  fread(&num, sizeof(int), 1, file);
  fclose(file);
  printf("%d", num);
}

void crimshow() {
	int num;
  FILE *file = fopen("database/Mining/crimsteel.bin", "rb");
  fread(&num, sizeof(int), 1, file);
  fclose(file);
  printf("%d", num);
}
void goldshow() {
	int num;
  FILE *file = fopen("database/Mining/gold.bin", "rb");
  fread(&num, sizeof(int), 1, file);
  fclose(file);
  printf("%d", num);
}

void mythanshow() {
	int num;
  FILE *file = fopen("database/Mining/mythan.bin", "rb");
  fread(&num, sizeof(int), 1, file);
  fclose(file);
  printf("%d", num);
}
void magicshow() {
	int num;
  FILE *file = fopen("database/Mining/magic.bin", "rb");
  fread(&num, sizeof(int), 1, file);
  fclose(file);
  printf("%d", num);
}

void minexshow() {
	int num;
  FILE *file = fopen("database/item/minex.bin", "rb");
  fread(&num, sizeof(int), 1, file);
  fclose(file);
  printf("%d", num);
}

void xpboostshow() {
	int num;
  FILE *file = fopen("database/item/xpboost.bin", "rb");
  fread(&num, sizeof(int), 1, file);
  fclose(file);
  printf("%d", num);
}
// Item Add Void
    // coal add
void coal(int data) {
	int mine1;
  FILE *file1 = fopen("database/Mining/coal.bin", "rb");
  fread(&mine1, sizeof(int), 1, file1);
  int mine2 = data;
  int mine3 = mine1 + mine2;
  fclose(file1);
  FILE *file = fopen("database/Mining/coal.bin", "wb");
  fwrite(&mine3, sizeof(int), 1, file);
  fclose(file);
}
  // Iron Add
  void iron(int data) {
	int mine1;
  FILE *file1 = fopen("database/Mining/iron.bin", "rb");
  fread(&mine1, sizeof(int), 1, file1);
  int mine2 = data;
  int mine3 = mine1 + mine2;
  fclose(file1);
  FILE *file = fopen("database/Mining/iron.bin", "wb");
  fwrite(&mine3, sizeof(int), 1, file);
  fclose(file);
}
 // Silver
 void silver(int data) {
	int mine1;
  FILE *file1 = fopen("database/Mining/silver.bin", "rb");
  fread(&mine1, sizeof(int), 1, file1);
  int mine2 = data;
  int mine3 = mine1 + mine2;
  fclose(file1);
  FILE *file = fopen("database/Mining/silver.bin", "wb");
  fwrite(&mine3, sizeof(int), 1, file);
  fclose(file);
}
 // crimsteel Add
 void crim(int data) {
	int mine1;
  FILE *file1 = fopen("database/Mining/crimsteel.bin", "rb");
  fread(&mine1, sizeof(int), 1, file1);
  int mine2 = data;
  int mine3 = mine1 + mine2;
  fclose(file1);
  FILE *file = fopen("database/Mining/crimsteel.bin", "wb");
  fwrite(&mine3, sizeof(int), 1, file);
  fclose(file);
}
 // Gold Add
void gold(int data) {
	int mine1;
  FILE *file1 = fopen("database/Mining/gold.bin", "rb");
  fread(&mine1, sizeof(int), 1, file1);
  int mine2 = data;
  int mine3 = mine1 + mine2;
  fclose(file1);
  FILE *file = fopen("database/Mining/gold.bin", "wb");
  fwrite(&mine3, sizeof(int), 1, file);
  fclose(file);
} 
 void mythan(int data) {
	int mine1;
  FILE *file1 = fopen("database/Mining/mythan.bin", "rb");
  fread(&mine1, sizeof(int), 1, file1);
  int mine2 = data;
  int mine3 = mine1 + mine2;
  fclose(file1);
  FILE *file = fopen("database/Mining/mythan.bin", "wb");
  fwrite(&mine3, sizeof(int), 1, file);
  fclose(file);
}
// Magic Add
void magic(int data) {
	int mine1;
  FILE *file1 = fopen("database/Mining/magic.bin", "rb");
  fread(&mine1, sizeof(int), 1, file1);
  int mine2 = data;
  int mine3 = mine1 + mine2;
  fclose(file1);
  FILE *file = fopen("database/Mining/magic.bin", "wb");
  fwrite(&mine3, sizeof(int), 1, file);
  fclose(file);
}
// Item Adding
void minexadd(int data) {
	int mine1;
  FILE *file1 = fopen("database/item/minex.bin", "rb");
  fread(&mine1, sizeof(int), 1, file1);
  int mine2 = data;
  int mine3 = mine1 + mine2;
  fclose(file1);
  FILE *file = fopen("database/item/minex.bin", "wb");
  fwrite(&mine3, sizeof(int), 1, file);
  fclose(file);
}
void xpboostadd(int data) {
	int mine1;
  FILE *file1 = fopen("database/item/xpboost.bin", "rb");
  fread(&mine1, sizeof(int), 1, file1);
  int mine2 = data;
  int mine3 = mine1 + mine2;
  fclose(file1);
  FILE *file = fopen("database/item/xpboost.bin", "wb");
  fwrite(&mine3, sizeof(int), 1, file);
  fclose(file);
}
void reset(int data) {
  FILE *file1 = fopen("database/Mining/Level/xp.bin", "rb");
  int xp1;
  fread(&xp1, sizeof(int), 1, file1);
  int xp2 = data;
  int xp3 = xp1 - xp2;
  fclose(file1);
  FILE *file = fopen("database/Mining/Level/xp.bin", "wb");
  fwrite(&xp3, sizeof(int), 1, file);
  fclose(file);
}
void lvlstore(int data) {
  FILE *file1 = fopen("database/Mining/Level/lvl.bin", "rb");
  int xp1;
  fread(&xp1, sizeof(int), 1, file1);
  int xp2 = data;
  int xp3 = xp1 + xp2;
  fclose(file1);
  FILE *file = fopen("database/Mining/Level/lvl.bin", "wb");
  fwrite(&xp3, sizeof(int), 1, file);
  fclose(file);
}
void nxtxp(int data) {
  FILE *file1 = fopen("database/Mining/Level/nextlvlxp.bin", "rb");
  int xp1;
  fread(&xp1, sizeof(int), 1, file1);
  int xp2 = data;
  int xp3 = xp1 + xp2;
  fclose(file1);
  FILE *file = fopen("database/Mining/Level/nextlvlxp.bin", "wb");
  fwrite(&xp3, sizeof(int), 1, file);
  fclose(file);
}
// Xp Storeing
void xpstore(int data) {
  FILE *file1 = fopen("database/Mining/Level/xp.bin", "rb");
  int xp1;
  fread(&xp1, sizeof(int), 1, file1);
  int xp2 = data;
  int xp3 = xp1 + xp2;
  fclose(file1);
  FILE *file = fopen("database/Mining/Level/xp.bin", "wb");
  fwrite(&xp3, sizeof(int), 1, file);
  fclose(file);
}
// Saveing MineX Exp Time In Bin
void x() {
  time_t current_time;
  current_time = time(NULL);
  FILE *file = fopen("database/ItemExp/minexexp.bin", "wb");
  fwrite(&current_time, sizeof(int), 1, file);
  fclose(file);
}
// Saveing xp boost time
void d() {
  time_t current_time;
  current_time = time(NULL);
  FILE *file = fopen("database/ItemExp/xpboostexp.bin", "wb");
   fwrite(&current_time, sizeof(int), 1, file);
  fclose(file);
}
void resetmine() {
  // LVL Reset
  FILE *file = fopen("database/Mining/Level/lvl.bin", "rb");
  int num;
  fread(&num, sizeof(int), 1, file);
  fclose(file);
  int lvlx = num;
  // Next Level Xp Reset
  FILE *file1 = fopen("database/Mining/Level/nextlvlxp.bin", "rb");
  int num1;
  fread(&num1, sizeof(int), 1, file1);
  fclose(file1);
  int lvlx1 = num1;
  // Xp Reset
  FILE *file2 = fopen("database/Mining/Level/xp.bin", "rb");
  int num2;
  fread(&num2, sizeof(int), 1, file2);
  fclose(file2);
  int lvlx2 = num2;
  // Total Mining Reset
  FILE *file3 = fopen("database/Mining/total.bin", "rb");
  int num3;
  fread(&num3, sizeof(int), 1, file3);
  fclose(file3);
  int lvlx3 = num3;
  lvlstore(lvlx - lvlx - lvlx + 1);
  mineadd(lvlx3 - lvlx3 - lvlx3);
  nxtxp(lvlx1 - lvlx1 - lvlx1 + 100);
  xpstore(lvlx2 - lvlx2 - lvlx2 + 1);
  printf("               ");
  six("Reset Mining Data\n\n");
  printf("Level,XP Reset,Total Mining Successful\n\n");
  six("New Mining Stats");
  printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
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
}
