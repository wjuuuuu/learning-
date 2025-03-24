#include<stdio.h>

int weight[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};//权重

char M[11] = {'1','0','X','9','8','7','6','5','4','3','2' };

char jiaquan(char *id)//加权求和
{
    int total = 0;
    for (int i = 0; i < 17; i++)
    {
        total = (id[i] - '0') * weight[i];
    }
    
    int z = total % 11;
    return M[z];
}
int main(){ 

    int num,count = 0;
    char id[101][20];
    
    scanf("%d",&num);
    
    for (int i = 0; i < num; i++)
    {
        scanf("%s",id[i]);
    }
    
    for (int i = 0; i < num; i++)
    {
        if (jiaquan(id[i]) != id[i][17]) 
        {
            printf("%s\n",id[i]);
            count++;
        }
    }
    if (count == 0)
    {
      printf("All passed\n");
    }
    
    return 0;
    
}
    