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

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	//Your codes here
	int arr[20] = {2, 3, 5, 7, 11, 13, 19, 23, 29, 31, 37, 41, 43, 47, 53, 57, 59, 61, 69};
	int i = 0;
	while ((testcase != 1) && (i <= 19)){
		while(testcase % arr[i] == 0){
			if (testcase / arr[i] != 1) printf("%d * ", arr[i]);
			else printf("%d", arr[i]);
			testcase /= arr[i];
		}
	i++;
	}
	
	return 0;
}

