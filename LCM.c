#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int LCM=(a>b)?a:b;
    while(1)
    {
        if(LCM%a==0&&LCM%b==0)
        break;
        LCM++;
    }
    printf("%d",LCM);
    return 0;
}