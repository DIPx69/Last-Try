#include <stdio.h>
#include <math.h>
#include <sys/stat.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include "global.h"
#include "shopdata.h"
int system(const char *command);
void clear() { system("clear"); }
int menu4;
int menu5;
int menu6;
void menux()
{
	 printf("               ");
    printf("Shop\n\n");
    printf("[1] Buy\n\n[2] Sell\n\n[3] Back\n\n");
    six("Enter Menu Number : ");
    scanf("%d", &menu4);
    }
int main()
{
    menux();
    if (menu4 == 1) {
    clear();
    printf("               ");
    printf("BUY\n\n");
    printf("[1] Buy MineX [%d Coin]\n\n[2] Buy XP Boost [%d Coin]\n\n[3] Back\n\n",minexprice,xpboostprice);
    six("Enter Menu Number : ");
    scanf("%d", &menu5);
  }
  // MineX
  if (menu5 == 1) {
    clear();
    FILE *file = fopen("database/coin.bin", "rb");
    int coin;
    fread(&coin, sizeof(int), 1, file);
    fclose(file);
    printf("         ");
    printf("BUY MineX [%d Coin]\n\n",minexprice);
    int minex;
    int amount;
    six("Current Coin : ");
    con();
    show();
    printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    printf("Enter Amount : ");
    scanf("%d", &amount);
    printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━");
    six("\nType 69 To Buy : ");
    scanf("%d", &minex);
    int price = minexprice * -1;
    int totalcoin = price * amount;
    if (minex == 69) {

      if (totalcoin * -1 <= coin) {
        printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
        minexadd(amount);
        addcoin(totalcoin);
        printf("You Have Purchased %d MineX\n", amount);
        six("━━━━━━━━━━━━━━━━━━━━\n");
        printf("%d Coin Removed From Your Account\n", totalcoin * -1);
        six("Current Coin : ");
        con();
        show();
        printf("\n");
        int back16;
        printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
        printf("Type 69 To Return Home : ");
        scanf("%d",&back16);
        clear();
        system("./main");
      } else {
        printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
        printf("You Don't Have Enough Coin To Buy");
        six("\n━━━━━━━━━━━━━━━━━\n");
        printf("You Need More %d Coin\n", (totalcoin * -1) - coin);
        printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
        int back16;
          printf("Type 69 To Return Home : ");
        scanf("%d",&back16);
        clear();
        system("./main");
      }
    }
  }
    if (menu5 == 2) {
    clear();
    FILE *file = fopen("database/coin.bin", "rb");
    int coin;
    fread(&coin, sizeof(int), 1, file);
    fclose(file);
    printf("         ");
    printf("Buy XP Boost [%d Coin]\n\n",xpboostprice);
    int minex;
    int amount;
    six("Current Coin : ");
    con();
    show();
    printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    printf("Enter Amount : ");
    scanf("%d", &amount);
    printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━");
    six("\nType 69 To Buy : ");
    scanf("%d", &minex);
    int price1 = xpboostprice * -1;
    int totalcoin = price1 * amount;
    if (minex == 69) {

      if (totalcoin * -1 <= coin) {
        printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
        minexadd(amount);
        addcoin(totalcoin);
        printf("You Have Purchased %d XP Boost\n", amount);
        six("━━━━━━━━━━━━━━━━━━━━\n");
        printf("%d Coin Removed From Your Account\n", totalcoin * -1);
        six("Current Coin : ");
        con();
        show();
        printf("\n");
        int back16;
        printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
        printf("Type 69 To Return Home : ");
        scanf("%d",&back16);
        clear();
        system("./main");
      } else {
        printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
        printf("You Don't Have Enough Coin To Buy");
        six("\n━━━━━━━━━━━━━━━━━\n");
        printf("You Need More %d Coin\n", (totalcoin * -1) - coin);
        printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
        int back16;
        printf("Type 69 To Return Home : ");
        scanf("%d",&back16);
        clear();
        system("./main");
      }
    }
  }
   if (menu4 == 2) {
    clear();
    printf("               ");
    printf("SELL\n\n");
    printf("[1] Iron [%d Coin] [",ironprice);
    ironshow();
    printf(" Owned]\n\n");
    printf("[2] Coal [%d Coin] [",coalprice);
    coalshow();
    printf(" Owned]\n\n");
    printf("[3] Silver [%d Coin] [",silverprice);
    silvershow();
    printf(" Owned]\n\n");
    printf("[4] Crimsteel [%d Coin] [",crimsteelprice);
    crimshow();
    printf(" Owned]\n\n");
    printf("[5] Gold [%d Coin] [",goldprice);
    goldshow();
    printf(" Owned]\n\n");
    printf("[6] Mythan [%d Coin] [",mythanprice);
    mythanshow();
    printf(" Owned]\n\n");
    printf("[7] Magic [%d Coin] [",magicprice);
    magicshow();
    printf(" Owned]\n\n");
    printf("[8] Back\n\n");
    six("Enter Menu Number : ");
    scanf("%d", &menu6);
  }
  if (menu6 == 1) // Iron Sell Section
  {
    clear();
    FILE *file = fopen("database/Mining/iron.bin", "rb");
    int ammx;
    fread(&ammx, sizeof(int), 1, file);
    fclose(file);
    clear();
    printf("           ");
    six("SELL Iron\n");
    printf("\nPrice : %d Coin\n",ironprice);
    printf("Current Iron : ");
    ironshow();
    int confirm;
    int amount;
printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    printf("Enter Amount : ");
    scanf("%d", &amount);
printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━");
    printf("\nType 69 To Sell : ");
    scanf("%d", &confirm);
    int totaliron = ironprice * amount; // iron price
    if (confirm == 69) {

      if (amount <= ammx) {
        printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
        iron(amount * -1);
        addcoin(totaliron);
        printf("You Have Sold %d Iron\n", amount);
        printf("━━━━━━━━━━━━━━━━━\n");
        printf("%d Coin Add To Your Account\n", totaliron);
        six("Current Coin : ");
        con();
        show();
        printf("\n");
        int back16;
        printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
        printf("Type 69 To Return Home : ");
        scanf("%d",&back16);
        clear();
        system("./main");
      } else {
        printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
        printf("You Don't Have Enough Iron To Sell");
        six("\n━━━━━━━━━━━━━━━━━\n");
        printf("You Need More %d Iron\n", amount - ammx);
        printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
        int back16;
        six("Type 69 To Return Home : ");
        scanf("%d",&back16);
        clear();
        system("./main");
      }
    }
  }

  if (menu6 == 2) // coal Sell Section
  {
    clear();
    FILE *file = fopen("database/Mining/coal.bin", "rb");
    int ammx;
    fread(&ammx, sizeof(int), 1, file);
    fclose(file);
    clear();
    printf("           ");
    six("SELL Coal\n");
    printf("\nPrice : %d Coin\n",coalprice);
    printf("Current Coal : ");
    coalshow();
    int confirm;
    int amount;
printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    printf("Enter Amount : ");
    scanf("%d", &amount);
printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━");
    printf("\nType 69 To Sell : ");
    scanf("%d", &confirm);
    int totalcoal = coalprice * amount; // coal price
    if (confirm == 69) {

      if (amount <= ammx) {
        printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
        coal(amount * -1);
        addcoin(totalcoal);
        printf("You Have Sold %d Coal\n", amount);
        six("━━━━━━━━━━━━━━━━━\n");
        printf("%d Coin Add To Your Account\n", totalcoal);
        six("Current Coin : ");
        con();
        show();
        printf("\n");
        int back16;
        printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
        printf("Type 69 To Return Home : ");
        scanf("%d",&back16);
        clear();
        system("./main");
      } else {
        printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
        printf("You Don't Have Enough Coal To Sell");
        six("\n━━━━━━━━━━━━━━━━━\n");
        printf("You Need More %d Coal\n", amount - ammx);
        printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
        int back16;
        six("Type 69 To Return Home : ");
        scanf("%d",&back16);
        clear();
        system("./main");
      }
    }
  }
  
  if (menu6 == 3) // silver Sell Section
  {
    clear();
    FILE *file = fopen("database/Mining/silver.bin", "rb");
    int ammx;
    fread(&ammx, sizeof(int), 1, file);
    fclose(file);
    clear();
    printf("           ");
    six("SELL Silver\n");
    printf("\nPrice : %d Coin\n",silverprice);
    printf("Current Silver : ");
    silvershow();
    int confirm;
    int amount;
printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    printf("Enter Amount : ");
    scanf("%d", &amount);
printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━");
    printf("\nType 69 To Sell : ");
    scanf("%d", &confirm);
    int totalsilver = silverprice * amount; // silver price
    if (confirm == 69) {

      if (amount <= ammx) {
        printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
        silver(amount * -1);
        addcoin(totalsilver);
        printf("You Have Sold %d Silver\n", amount);
        six("━━━━━━━━━━━━━━━━━\n");
        printf("%d Coin Add To Your Account\n", totalsilver);
        six("Current Coin : ");
        con();
        show();
        printf("\n");
        int back16;
        printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
        printf("Type 69 To Return Home : ");
        scanf("%d",&back16);
        clear();
        system("./main");
      } else {
        printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
        printf("You Don't Have Enough Silver To Sell");
        six("\n━━━━━━━━━━━━━━━━━\n");
        printf("You Need More %d Silver\n", amount - ammx);
        printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
        int back16;
        six("Type 69 To Return Home : ");
        scanf("%d",&back16);
        clear();
        system("./main");
      }
    }
  }

  if (menu6 == 4) // crim Sell Section
  {
    clear();
    FILE *file = fopen("database/Mining/crimsteel.bin", "rb");
    int ammx;
    fread(&ammx, sizeof(int), 1, file);
    fclose(file);
    clear();
    printf("           ");
    six("SELL Crimsteel\n");
    printf("\nPrice : %d Coin\n",crimsteelprice);
    printf("Current Crimsteel : ");
    crimshow();
    int confirm;
    int amount;
printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    printf("Enter Amount : ");
    scanf("%d", &amount);
printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━");
    printf("\nType 69 To Sell : ");
    scanf("%d", &confirm);
    int totalcrim = crimsteelprice * amount; // crim price
    if (confirm == 69) {

      if (amount <= ammx) {
        printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
        crim(amount * -1);
        addcoin(totalcrim);
        printf("You Have Sold %d Crimsteel\n", amount);
        six("━━━━━━━━━━━━━━━━━\n");
        printf("%d Coin Add To Your Account\n", totalcrim);
        six("Current Coin : ");
        con();
        show();
        printf("\n");
        int back16;
        printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
        printf("Type 69 To Return Home : ");
        scanf("%d",&back16);
        clear();
        system("./main");
      } else {
        printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
        printf("You Don't Have Enough Crimsteel To Sell");
        six("\n━━━━━━━━━━━━━━━━━\n");
        printf("You Need More %d Crimsteel\n", amount - ammx);
        printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
        int back16;
        six("Type 69 To Return Home : ");
        scanf("%d",&back16);
        clear();
        system("./main");
      }
    }
  }

  if (menu6 == 5) // gold Sell Section
  {
    clear();
    FILE *file = fopen("database/Mining/gold.bin", "rb");
    int ammx;
    fread(&ammx, sizeof(int), 1, file);
    fclose(file);
    clear();
    printf("           ");
    six("SELL Gold\n");
    printf("\nPrice : %d Coin\n",goldprice);
    printf("Current Gold : ");
    goldshow();
    int confirm;
    int amount;
printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    printf("Enter Amount : ");
    scanf("%d", &amount);
printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━");
    printf("\nType 69 To Sell : ");
    scanf("%d", &confirm);
    int totalgold = goldprice * amount; // gold price
    if (confirm == 69) {

      if (amount <= ammx) {
        printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
        gold(amount * -1);
        addcoin(totalgold);
        printf("You Have Sold %d Gold\n", amount);
        six("━━━━━━━━━━━━━━━━━\n");
        printf("%d Coin Add To Your Account\n", totalgold);
        six("Current Coin : ");
        con();
        show();
        printf("\n");
        int back16;
        printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
        printf("Type 69 To Return Home : ");
        scanf("%d",&back16);
        clear();
        system("./main");
      } else {
        printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
        printf("You Don't Have Enough Gold To Sell");
        six("\n━━━━━━━━━━━━━━━━━\n");
        printf("You Need More %d Gold\n", amount - ammx);
        printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
        int back16;
        six("Type 69 To Return Home : ");
        scanf("%d",&back16);
        clear();
        system("./main");
      }
    }
  }

  if (menu6 == 6) // mythan Sell Section
  {
    clear();
    FILE *file = fopen("database/Mining/mythan.bin", "rb");
    int ammx;
    fread(&ammx, sizeof(int), 1, file);
    fclose(file);
    clear();
    printf("           ");
    six("SELL Mythan\n");
    printf("\nPrice : %d Coin\n",mythanprice);
    printf("Current Mythan : ");
    mythanshow();
    int confirm;
    int amount;
printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    printf("Enter Amount : ");
    scanf("%d", &amount);
printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━");
    printf("\nType 69 To Sell : ");
    scanf("%d", &confirm);
    int totalmythan = mythanprice * amount; // mythan price
    if (confirm == 69) {

      if (amount <= ammx) {
        printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
        mythan(amount * -1);
        addcoin(totalmythan);
        printf("You Have Sold %d Mythan\n", amount);
        six("━━━━━━━━━━━━━━━━━\n");
        printf("%d Coin Add To Your Account\n", totalmythan);
        six("Current Coin : ");
        con();
        show();
        printf("\n");
        int back16;
        printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
        printf("Type 69 To Return Home : ");
        scanf("%d",&back16);
        clear();
        system("./main");
      } else {
        printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
        printf("You Don't Have Enough Mythan To Sell");
        six("\n━━━━━━━━━━━━━━━━━\n");
        printf("You Need More %d Mythan\n", amount - ammx);
        printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
        int back16;
        six("Type 69 To Return Home : ");
        scanf("%d",&back16);
        clear();
        system("./main");
      }
    }
  }

  if (menu6 == 7) // magic Sell Section
  {
    clear();
    FILE *file = fopen("database/Mining/magic.bin", "rb");
    int ammx;
    fread(&ammx, sizeof(int), 1, file);
    fclose(file);
    clear();
    printf("           ");
    six("SELL Magic\n");
    printf("\nPrice : %d Coin\n",magicprice);
    printf("Current Magic : ");
    magicshow();
    int confirm;
    int amount;
printf("\n━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
    printf("Enter Amount : ");
    scanf("%d", &amount);
printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━");
    printf("\nType 69 To Sell : ");
    scanf("%d", &confirm);
    int totalmagic = magicprice * amount; // magic price
    if (confirm == 69) {

      if (amount <= ammx) {
        printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
        magic(amount * -1);
        addcoin(totalmagic);
        printf("You Have Sold %d Magic\n", amount);
        six("━━━━━━━━━━━━━━━━━\n");
        printf("%d Coin Add To Your Account\n", totalmagic);
        six("Current Coin : ");
        con();
        show();
        printf("\n");
        int back16;
        printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
        printf("Type 69 To Return Home : ");
        scanf("%d",&back16);
        clear();
        system("./main");
      } else {
        printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
        printf("You Don't Have Enough Magic To Sell");
        six("\n━━━━━━━━━━━━━━━━━\n");
        printf("You Need More %d Magic\n", amount - ammx);
        printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
        int back16;
        six("Type 69 To Return Home : ");
        scanf("%d",&back16);
        clear();
        system("./main");
      }
    }
  }

  if(menu5 == 3 || menu6 == 8)
  {
  clear();
  system("./shop");	
  }
 if(menu4 == 3)
 {
 clear();
 	system("./main");	
 }

   if (menu4 > 3) {
    clear();
    printf("SYSTEM NOTIFICATION : \n");
    printf("Please Enter A Valid Menu Number\n");
    printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");	
  system("./shop");
  }
}
