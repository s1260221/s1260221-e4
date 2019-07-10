#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
  
  srand((unsigned int)time(NULL));

  int i, num, total;
  total = 0;

  printf("Rolling the dice...\n");
  for( i = 0 ; i < 2 ; i++ ){
    num = rand() % 6 + 1;
    printf("Die %d: %d\n", i + 1 , num );
    total += num;
  }

  printf("Total value: %d\n", total );

  return 0;
}
