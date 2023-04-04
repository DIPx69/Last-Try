#include <stdio.h>
#include <math.h>
#include <sys/stat.h>
#include <time.h>
#include <unistd.h>
#include <curl/curl.h>
#include "global.h"
// Clear Terminal
int system(const char *command);
void clear() {
	 system("clear"); 
	 }
int main()
{
	CURL *curl;
    FILE *fp;
    CURLcode res;
    char *url = "https://last-try-db.dipdey.repl.co/serveruid.txt";
    char outfilename[FILENAME_MAX] = "database/serveruid.txt";
    curl = curl_easy_init();
    if (curl)
    {
        fp = fopen(outfilename,"wb");
        curl_easy_setopt(curl, CURLOPT_URL, url);
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, NULL);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);
        fclose(fp);
    }
	int uid;	
    FILE *fp1 = fopen("database/uid.txt", "rb");
    fread(&uid, sizeof(int), 1, fp1);
    fclose(fp1);
    printf("%d \n",uid);
    FILE *fp2 = fopen("database/serveruid.txt", "rb");
    char uid2[1024];
    fread(&uid2, sizeof(int), 2, fp1);
    fclose(fp1);
    int uid3 = atoi(uid2);
    printf("%d \n",uid3);
   if(uid == uid3)
   {
   	clear();
system ("gcc dev.c global.c config.c -o dev");	
	system("./dev");
   } 
   else
{
  
      clear();
      printf("SYSTEM NOTIFICATION : \n");
      printf("YOU DON'T HAVE PERMISSION TO USE DEV MODE \n");
    printf("━━━━━━━━━━━━━━━━━━━━━━━━━━━\n");
      system("./main");
}
}
