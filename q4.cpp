#include<stdio.h>
int main()
{
    int category, item;
    printf("Select Category:\n1. Fast Food\n2. Drinks\n");
    scanf("%d", &category);
    switch(category)
	{
        case 1:
            printf("Fast Food Menu:\n1. Pasta\n2. Steak\n3. Fries\n");
            scanf("%d", &item);
            switch(item)
			{
                case 1: 
				printf("You ordered Pasta\n"); 
				break;
                case 2: 
				printf("You ordered Steak\n");
				 break;
                case 3: 
				printf("You ordered Fries\n");
				 break;
                default: 
				printf("Invalid choice\n");
            }
            break;
        case 2:
            printf("Drinks Menu:\n1. Pepsi\n2. Limca\n3. Water\n");
            scanf("%d", &item);
            switch(item) 
			{
                case 1: 
				printf("You ordered Pepsi\n");
				 break;
                case 2:
				printf("You ordered Limca\n"); 
				break;
                case 3: 
				printf("You ordered Water\n"); 
				break;
                default: 
				printf("Invalid choice\n");
            }
            break;
        default:
            printf("Invalid category.\n");
    }
    return 0;
}
