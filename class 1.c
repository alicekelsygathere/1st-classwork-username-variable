#include <stdio.h>
int main()
{
    //variables
    double area;
    const double pi=3.142;
    double r;


    //request radius
    printf("Please enter radius\n");
    scanf("%lf",&r);
    area=pi*r*r;
    printf("The area is %lf\n", area);


    return 0;
}

