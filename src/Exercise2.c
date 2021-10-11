/*
2. Write a function to calculate the factorial with given integer n,
which satisfies the following:
	if n is odd, factorial = 1 * 3 * 5 * … * n
	if n is even, factorial = 2 * 4 * 6 * … * n
Ex:
______________________________________
| Input: 11                          |
| Output: 10395                      |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	int num;
	printf("Enter number: ");
	scanf("%d", &num);
	int factorial = 1;
	if (num %2 == 0) {
		for (int i = 2; i <= num; i+=2) {
			factorial *= i;
		}
	}
	else {
		for (int i = 1; i <= num; i+=2) {
			factorial *= i;
		}
	}				

	
	printf("%d", factorial);
	return 0;
}
