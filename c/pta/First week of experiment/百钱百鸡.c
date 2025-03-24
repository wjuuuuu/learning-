#include<stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int k = 0;
    for (int  a = 0; a <= m/5; a++)
    {
        for (int b = 0; b <= m/3; b++)
        {
            int c = n - a - b;
            if (a*5 + b*3 + c/3 == m && c%3==0)
            {   
                k++;
                printf("%d %d %d\n",a,b,c);
            }
            
            
        }
        
    }
    if (k == 0)
    {
        printf("None");
    }
    
    return 0;
}