#include<stdio.h>
struct Student{
    char id[10];
    char name[15];
    int s1,s2,s3;
    int total;
}student[11];

int main()
{
    int n;
    scanf("%d",&n);
    struct Student temp;
    
    for (int i = 0; i < n; i++)
    {
        scanf("%s %s",student[i].id,student[i].name);
        scanf("%d %d %d",&student[i].s1,&student[i].s2,&student[i].s3);
        student[i].total = student[i].s1+student[i].s2+student[i].s3;
    }
    
    temp = student[0];
    for (int i = 1; i < n; i++)
    {
        if (temp.total<student[i].total)
        {
            temp = student[i];
        }
        
    }
    
    printf("%s %s %d",temp.name,temp.id,temp.total);
    
    return 0;
    
}