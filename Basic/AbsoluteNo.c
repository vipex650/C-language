#include<stdio.h>
int main()
{
    float gs,bs,da,hra;
    printf("Enter the basic salary of Ramesh's");
    sacnf("%f",&bs);
    da = bs*0.4;
    hra = bs*0.2;
    gs = bs+da+hra;
    printf("%f is the Gross Salary of Ramesh's",gs);
    return 0;
}