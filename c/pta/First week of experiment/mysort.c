#include <stdio.h>
void mysort(int a[],int n);//void mysort(int &a,int n);  这两种声明方式在语义上是完全相同的，都是表示a是一个指向int的指针。

void swap(int* p,int* q);

int main()
{
    int a[2005];
    int i,n;
    scanf("%d",&n);
    for(i = 0;i < n;i++)
        scanf("%d",&a[i]);
    //排序
    mysort(a,n);//在C语言中，数组名a在大多数情况下会被自动转换为其首地址（即&a[0]）
    printf("%d",a[0]);
    for(i = 1;i < n;i++)
        printf(" %d",a[i]);
    return 0;
}

void mysort(int a[],int n)
{
    for (int  i = 1; i < n ; i++)
    {
        for (int  j = 0; j < n - i; j++)
        {
            if (a[j] > a[j+1])
            {
                swap(a+j,a+j+1);
            }
         }
    }
}

void swap(int* p,int* q)
{
    int t;
    t = *p;
    *p = *q;
    *q = t;
}