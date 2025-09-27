#include<stdio.h>
#include<math.h>
int main()
{
    double a, b, c, dscrmt, r1, r2, rp, ip;
    printf("Enter coefficients a, b and c:");
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a==0)
	{
        printf("Not a quadratic equation\n");
    }
	else
	{
        dscrmt=(b*b)-(4*a*c);
        if(dscrmt>0)
		{
            r1=(-b+sqrt(dscrmt))/(2*a);
            r2=(-b-sqrt(dscrmt))/(2*a);
            printf("Roots are real and distinct\n");
            printf("Root1 = %.2lf and Root2 = %.2lf\n", r1, r2);
        }
		else
		{
            if(dscrmt==0)
			{
                r1=-b/(2*a);
                printf("Roots are real and equal.\n");
                printf("Root1 = Root2 = %.2lf\n", r1);
            }
			else
			{
                rp=-b/(2*a);
                ip=sqrt(-dscrmt)/(2*a);
                printf("Roots are imaginary.\n");
                printf("Root1 = %.2lf + %.2lfi and Root2 = %.2lf - %.2lfi\n", rp, ip, rp, ip);
            }
        }
    }
    return 0;
}

