#include<stdio.h>
#include<math.h>
int main()
{
    double principal, rate, time, emi, totalAmount, si;
    int interestType;
    printf("Enter Loan Amount:");
    scanf("%lf", &principal);
    printf("Enter Time (in years):");
    scanf("%lf", &time);
    printf("Enter Interest Type:\n 1 for Simple\n 2 for Compound\n");
    scanf("%d", &interestType);
    printf("Enter Annual Interest Rate (in %%):");
    scanf("%lf", &rate);
    if (interestType==1)
	{
      si=(principal*rate*time)/100.0;
        totalAmount=principal+si;
        emi=totalAmount/(time*12);
        printf("Simple Interest EMI= %.2lf\n", emi);
    }
	else if(interestType==2) 
	{
        totalAmount=principal*pow((1+rate/100.0),time);
        emi=totalAmount/(time*12);
        printf("Compound Interest EMI = %.2lf\n", emi);
    }
	else
	{
        printf("Invalid Interest Type selected!\n");
    }
    return 0;
}

