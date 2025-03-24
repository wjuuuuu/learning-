#include <stdio.h>

void dectobin( int n );

int main()
{
    int n;
    
    scanf("%d", &n);
    dectobin(n);
    
    return 0;
}

void dectobin( int n )
{
    if (n < 2)//n < 1就会导致二进制数开头只会是0
    {   
        printf("%d",n);
        return ;//retrun 加0就会返回值，该void函数会报错
    }
    dectobin(n/2);
    printf("%d",n%2);
    
}