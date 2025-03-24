#include<stdio.h>
//判断一个数是否为素数
int isPrime(int n);

int main()
{
       int m,i,k;
       while(scanf("%d",&m)==1){
                if(isPrime(m)){
                    printf("prime\n");
                }
                else{
                    printf("not prime\n");
                }
        }
       return 0;
}

int isPrime(int n){
    if (n<2)
    {
        return 0;
    }
    for (int  i = 2; i < n/i; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
        
    }
        return 1;
    
}