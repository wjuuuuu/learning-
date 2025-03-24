#include<stdio.h>
#include<math.h>

void printfComplex(double real, double image){
    if (fabs(real) < 0.05 && fabs(image) < 0.05)
    {
        printf(" = 0.0\n");
    }else if (fabs(real) < 0.05 )
    {
        printf(" = %.1f\n", image);
    }else if (fabs(image) < 0.05 )
    {
        printf(" = %.1f\n", real);
    }else
    {
        printf(" = %.1f%+.1fi\n",real, image);
    }
    
}

int main()
{
    double a1=0.0,a2=0.0,b1=0.0,b2=0.0;
    scanf("%lf%lf%lf%lf",&a1,&b1,&a2,&b2);
    char ch[10] = {'+','-','*','/'};
    double real[10],image[10];

    real[1] = a1 + a2;
    real[2] = a1 - a2;
    real[3] = a1 * a2 - b1 * b2;
    real[4] = (a1 * a2 + b1 * b2) / (pow(a2, 2) + pow(b2, 2));

    image[1] = b1 + b2;
    image[2] = b1 - b2;
    image[3] = a1 * b2 + b1 * a2;
    image[4] = (a1 * a2 - b1 * b2) / (pow(a2, 2) + pow(b2, 2));
    
    for (int i = 1; i < 5; i++)
    {   
        printf("(%.1f%+.1f) %c (%.1f%+.1f)", a1, b1, ch[i], a2, b2);
        printfComplex(real[i], image[i]);
    }
    
    
    return 0;
}