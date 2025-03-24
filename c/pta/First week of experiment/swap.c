#include<stdio.h>
void swap(int* p,int* q);

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    swap(&x,&y);//调用时传递变量的地址
    printf("x=%d,y=%d\n",x,y);
    return 0;
}

void swap(int* p,int* q)//指针作为函数的形参
{
    int t;
    t = *p;
    *p = *q;
    *q = t;
}