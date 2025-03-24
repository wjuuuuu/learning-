#include <stdio.h>
//时间结构体定义
struct tm{
    int h,m;  //小时和分钟
};
//根据开始时间s和用时d，计算结束时间
struct tm tmAdd(struct tm s,struct tm d);
// 这并不是用struct定义函数，而是函数声明。这里的struct tm是函数的返回类型，表示函数tmAdd会返回一个struct tm类型的值。
int main()
{
    struct tm t1,t2,t3;
    //输入开始时间和结束时间 
    scanf("%d:%d %d:%d",&t1.h,&t1.m,&t2.h,&t2.m);
    //计算结束时间 
    t3 = tmAdd(t1,t2);
    printf("%d:%02d",t3.h,t3.m); 
    return 0;
}

struct tm tmAdd(struct tm s,struct tm d)
{
    int m = s.h * 60 + s.m + d.h*60 + d.m;
    
    struct tm x;
    x.h = m / 60 % 24;
    x.m = m %60;
    return x;
}