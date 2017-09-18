#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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

//0=prime, 1=not prime
int is_prime(int a) {
  if (a==2)
    return 0;
  else if (a%2==0)
    return 1;
  else {
    int i=3;
    while (i<=sqrt(a)) {
      if (a%i==0){
	return 1;
      }
      else 
	i+=2;
    }
    return 0;
  }
}

long sum_prime() {
  long ret=0;
  int i;
  for (i=2;i<2000000;i+=1) {
    if (is_prime(i)==0)
      ret+=i;
  }
  return ret;
}

int thousand_one_prime() {
  int prime=2;
  int count=0;
  while (count<10001) {
    if (is_prime(prime)==0)
      count+=1;
    prime+=1;
  }
  prime-=1;
  return prime;
}

int main() {
  int problem1=multiples_of_3_and_5();
  printf("Problem 1: %d\n",problem1);
  int problem6=sum_square_diff();
  printf("Problem 6: %d\n",problem6);
  int problem2=fib_help(0,1,4000000,0);
  printf("Problem 2: %d\n",problem2);
  long problem10=sum_prime();
  printf("Problem 10: %ld\n",problem10);
  int problem7=thousand_one_prime();
  printf("problem 7: %d\n",problem7);
  return 0;
}
