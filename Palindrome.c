#include<stdio.h>
int main()
{
    int N,t,sum=0,remainder;
    scanf("%d",&N);
    t=N;
    while(N>0)
    {
        remainder=N%10;
        sum=sum*10+remainder;
        N=N/10;
    }
    if(t==sum)
    printf("True");
    else
    printf("False");
    return 0;
}