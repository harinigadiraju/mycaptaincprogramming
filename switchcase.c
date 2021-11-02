 # include <stdio.h>
 void main()
 {
 	int n;
 	printf("Enter a random number between 1-5");
 	scanf("%d", &n);
 	switch(n)
 	{
 		case 1 :
 			printf("Food Item :- Pasta \n Price :- Rs 179 ");
 			break;
 		case 2 :
 			printf("Food Item :- Burger \n Price :- Rs 129 ");
 			break;
 		case 3 :
 			printf("Food Item :- Pizza \n Price :- Rs 239 ");
 			break;
		case 4 :
 			printf("Food Item :- French Fries \n Price :- Rs 99 ");
 			break;
 		case 5 :
 			printf("Food Item :- Sandwich \n Price :- Rs 149 ");
 			break;
		case default :
 			printf("INVALID INPUT ");
 			break;
	 }
 }
