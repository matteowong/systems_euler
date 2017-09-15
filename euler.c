#include <stdio.h>
#include <stdlib.h>

int multiples_of_3_and_5() {
  int ret=0;
  int i;
  for (i=0;i<1000;i+=3) {
    ret+=i;
  }
  for (i=0;i<1000;i+=5) {
    if (i%3!=0)
      ret+=i;
  }
  return ret;
}

int sum_square_diff() {
  int i;
  int sumsquare=0;
  int squaresum=0;
  for (i=1;i<=100;i++) {
    sumsquare+=i*i;
    squaresum+=i;
  }
  return squaresum*squaresum-sumsquare;
}



int main() {
  int problem1=multiples_of_3_and_5();
  printf("Problem 1: %d\n",problem1);
  int problem6=sum_square_diff();
  printf("Problem 6: %d\n",problem6);
  return 0;
}
