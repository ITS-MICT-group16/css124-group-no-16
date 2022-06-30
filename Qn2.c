#include<stdio.h>
int comparison(int *j, int *k);
int comparison(int *j, int *k){
	int i, true, false;
	for(i=0; i<10; i++)
	{
		if(*j == *k)
		{
			return true;
		}
		else
		return false;
	}
}
int main(){
	int i, ret;
	int A[10] = {2, 3, 7, 2, 8, 0, 3, 7, 3, 7};
	int B[10] = {3, 3, 6, 4, 8, 1, 4, 7, 5, 7};
	
	//print the elements of array:
	printf("The elements of Array A and B respectively are:");
	for(i=0; i<10; i++)
	{
		printf("\nA[%d] : %d corresponding to B[%d] : %d", i, A[i], i, B[i]);
	}
	printf("\n");
	
	ret = comparison(&A[i], &B[i]);
	for(i=0; i<10; i++)
	{
		printf("%d",ret);
	}
	return 0;
}
