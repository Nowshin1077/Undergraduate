#include<stdio.h>
#include<conio.h>
#include<math.h>
#define z 3*x-cos*x - 1

float functionValue(float x)
{
    float z;
    z= 3*x-cos*x - 1;
    return z;
}

void main()
{
    int count=1,n;
    float x1,x2,x0;
    ///clrscr();
    printf("ENTER THE INTERVALS A and B :- ");
    ///xyz:
    scanf("%f%f",&x1,&x2);
    printf("No.of Iteration:");
    scanf("%d",&n);
    if(f(x1)*f(x2)<0);
    {
        x0= (x1+x2)/2;
        while(count<=n)
        {
            if(f(x1)*f(x0)<0)
            {
                x2= x0;
            }
            else
            {
                x1= x0;
            }
            count++;
            x0 =(x1+x2)/2;
        }
        printf("Answer is : %f",x0);
    }

    getch();
}
