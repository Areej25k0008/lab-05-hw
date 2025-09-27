#include<stdio.h>
int main()
{
    int age, movie, ticketType;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age<12)
    {
        ticketType=1;
    }
    else if(age<=60)
    {
        ticketType=2;
    }
    else
    {
        ticketType=3;
    }
    printf("\nTicket Type: ");
    if (ticketType==1)
    {
        printf("Child Ticket\n");
    }
    else if (ticketType==2)
    {
        printf("Adult Ticket\n");
    }
    else
    {
        printf("Senior Citizen Ticket\n");
    }
    printf("\nSelect a Movie:\n1. Action\n2. Comedy\n3. Horror\n");
    scanf("%d", &movie);
    switch(movie)
    {
        case 1:
            printf("\nYou booked this ticket for Action Movie\n");
            break;
        case 2:
            printf("\nYou booked this ticket for Comedy Movie\n");
            break;
        case 3:
            printf("\nYou booked this ticket for Horror Movie\n");
            break;
        default:
            printf("\nInvalid Movie Selection!\n");
    }
    return 0;
}

