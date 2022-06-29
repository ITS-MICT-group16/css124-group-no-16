#include<stdio.h>
void exchange(int *p, int *q);
void exchange(int *p, int *q){

	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
}
int main(){
	int x = 6, y = 9;
	printf("The values before swapping are %d and %d", x, y);
	
	exchange(&x, &y);
	printf("\nThe values after swapping are %d and %d",x, y);
	return 0;
}
