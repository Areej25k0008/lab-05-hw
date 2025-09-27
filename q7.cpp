#include<stdio.h>
#include<string.h>
int main()
{
    char un[20], pw[20];
    printf("Enter username: ");
    scanf("%s",&un);
    printf("Enter password: ");
    scanf("%s",&pw);
    if (strcmp(un,"admin")==0)
	{
        if (strcmp(pw,"1234")==0)
		{
            printf("Login Successful\n");
        }
		else
		{
            printf("Incorrect Password\n");
        }
    }
	else
	{
        printf("Invalid Username");
    }

    return 0;
}

