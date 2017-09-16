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

int fib_help(int a, int b, int max, int ret){
  if (b<=max) {
    if (b%2==0)
      ret+=b;
    a+=b;
    return fib_help(b,a,max,ret);
  }
  else
    return ret;
}



int main() {
  int problem1=multiples_of_3_and_5();
  printf("Problem 1: %d\n",problem1);
  int problem6=sum_square_diff();
  printf("Problem 6: %d\n",problem6);
  int problem2=fib_help(0,1,4000000,0);
  printf("Problem 2: %d\n",problem2);
  return 0;
}
