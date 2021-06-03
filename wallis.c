#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float wallis_pi(int);
int main(void){
  int a;
  a=get_int("Enter the value of looping constraint: ");
  wallis_pi(a);
}
float wallis_pi(int a) {
  float pi =1;
  for(int i=1;i<=a;i++)
    pi *= 4*pow(i,2)/(4*pow(i,2)-1)  ;
  printf('"value of pi is %f",pi);
}
  
