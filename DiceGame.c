#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
  
  srand((unsigned int)time(NULL));

  int i, num, total;
  char name[20];
  total = 0;

  printf("What is your name?\n");
  scanf("%s", name );
  printf("Hello, %s!\n", name );

  printf("Rolling the dice...\n");
  for( i = 0 ; i < 3 ; i++ ){
    num = rand() % 6 + 1;
    printf("Die %d: %d\n", i + 1 , num );
    total += num;
  }

  printf("Total value: %d\n", total );
  
  if( total > 7 ) printf("%s won!\n", name );
  else printf("%s lost!\n", name );
 
  return 0;
}
