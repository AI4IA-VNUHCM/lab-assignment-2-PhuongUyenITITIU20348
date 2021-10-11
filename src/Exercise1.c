/*
1. Write a Taxi meter program to calculate the taxi fare for a given mileage.
	a. The 1st 2km is 15,000 VND
	b. The next 250m will cost 2000 VND
	c. If the travel distance is larger than 30km then each extra km will cost only 5000VND
Receive the travel distance in Km and print the amount of money to be paid
______________________________________
| Input: 32.5                        |
| Output: 251500                     |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    int main () {

	
	 float distance, money;
	 printf("Enter the travel distance in km: ");
	 scanf("%f", &distance);
	 if (distance <= 2){
		 money = 15000;
	 }
	 if (2 <= distance && distance < 30){
		 money = (distance - 2)* 8000 + 15000;
	 }	
	 else {
		 money = ((distance - 30)* 5000) + 15000 + (28 * 8000);
	 }
	 printf("Amount of money is %f", money);
	


 
	return 0;
	}
	
		

				

