#include<stdio.h>

int main(){

  int num,temp,factor=1;

  num=1234;

  temp=num;

  while(temp){

      temp=temp/10;

      factor = factor*10;

  }

 int sum=0;
  while(factor>1){

      factor = factor/10;
      sum+=num/factor;
  
      num = num % factor;

  }
  printf("%d",sum);

  return 0;

}
