#include<stdio.h>
 main()
{
	int num;
	printf("enter number\n");
	scanf("%d",&num);
	switch(num)
	{
		case 1:{
			printf("Food Item-Sandwich\n");
			printf("Price- Rs.149");
		}
		break;
		case 2:{
			printf("Food Item-Pizza\n");
			printf("Price- Rs.239");
		}
		break;
		case 3:{
			printf("Food Item-French Fries\n");
			printf("Price- Rs.99");
		}
		break;
		case 4:{
			printf("Food Item-Burger\n");
			printf("Price- Rs.129");
		}
		break;
		case 5:{
			printf("Food Item-Pasta\n");
			printf("Price- Rs.179");
		}
		break;
		default:printf("Wrong Choice");
	}
	return 0;
}
