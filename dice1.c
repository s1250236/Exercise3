#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
int main() {
  int i,ran1,ran2;
  char name[20];
  printf("What is your name?\n>");
  scanf("%s",name);
  printf("Hello,%s!\n",name);
  printf("Rolling the dice...\n");
  srand(time(NULL));
  ran1 = (rand() % 6) + 1;
  sleep(1);
  srand(time(NULL));
  ran2 = (rand() % 6) + 1;
  printf("Die 1:%d\n",ran1);
  printf("Die 2:%d\n",ran2);
  printf("Total value:%d\n",ran1+ran2);
  if(ran1+ran2>7) printf("%s won\n",name);
  else printf("%s lost\n",name);
  return 0;
}
