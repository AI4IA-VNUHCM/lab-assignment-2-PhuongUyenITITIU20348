/*
3. Write a function to represent a given integer as product of prime numbers
Ex:
______________________________________
| Input: 24                          |
| Output: 2 * 2 * 2 * 3              |
|____________________________________|
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	int n;
	int a = 0;
	printf("n: ");
	scanf("%d", &n);
	if (n == 0 || n == 1) {
		printf("%d", n);
	}
	else {
		for (int i = 2; i <= n; i++) {
			while (n % i == 0) {
				printf("%d", i);
				n /= i;
			}
		}
	}				
 
	
	
	
	return 0;
}
