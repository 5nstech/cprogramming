#include<stdio.h>
int prime(int n, int i)
{
    if(i == 1)
        return 1;   
    else
    {
        if(n%i == 0)
            return 0;
        else
            prime(n, i-1);   
    }  
}
int main()
{
    int num;
    num=456;
    int sum;
    
    sum=prime(num,num/2);
    if(sum==1)
    {
        printf("It is prime");
    }
    else
    {
        printf("It is not prime number");
    }
}
