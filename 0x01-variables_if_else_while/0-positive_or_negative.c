#include <stdlib.h>
#include <time.h>
/* main - main block
 * Description: Generate a random number,
 * 		check if the number is positive or negative.
 * Return: 0
*/

int main(void)
{
	int n

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if( n > 0){
		printf("is positive\n")
}	else if( n = 0){
		printf("is zero\n")
}	else{
		printf("is negatve\n")
}
	return (0);
}
