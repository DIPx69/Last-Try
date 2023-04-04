#include <stdio.h>
#include <stdio.h>
#include <math.h>
#include <sys/stat.h>
#include <time.h>
#include <unistd.h>
#include "global.h"
int system(const char *command);
int main()
{
 system("gcc game.c global.c -o main");
 system("./main");
}
