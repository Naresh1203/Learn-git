#include <stdio.h>
int main()
{
    float salary,hra,da,it,pt;
    printf("Basic salary of employs=");
    scanf("%f",&salary);
    printf("\nhra = %f",salary/10);
    printf("\nda = %f",salary*0.15);
    printf("\nit =%f",salary/50);
    printf("\npt =%f",salary-200);
    //netsalary = bsal+hra+da-it-pt
    printf("\nnet salary of employe = %f",salary+(salary/10)+(salary*0.15)-(salary/50)-(salary-200));
    return 0;

}