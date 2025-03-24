#include<stdio.h>
int main()
{
    int a,b,x,y;
    scanf("%d %d",&a,&b);
    for (int  i = a; i > 0; i--)
    {
        if(a % i == 0 && b % i == 0){
            x = i;
            break;
        }
    }
    y = a / x * b;
    printf("%d %d",x,y);
}