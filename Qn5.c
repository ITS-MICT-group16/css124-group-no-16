 
#include <math.h>
#include <stdio.h>

int MAX(int array[]);
int MIN(int array[]);
float SD(int array[]);
int AVE(int array[]);
int main() {
    int i, max, min,N,Ave;
    int array[10]={3,4,5};
    float Sd;
     
    
    printf("The elements entered are : \n",10);
     for (i = 0; i < 10; ++i){
        printf(" \n\t %d ", array[i]);
    }
    
    max = MAX(array);
    min = MIN(array); 
    Ave = AVE(array);
    Sd = SD(array);
    
    printf("\nMinimum element in array: %d\n", min);
    printf("Maximum element in array: %d\n", max);
    printf("The average of element in array: %d\n",Ave);
    printf("\nStandard Deviation = %.2f", Sd);
    
   
    return 0;
}

float SD(int array[]){

    int sum = 0.0, mean ;
    int i;
    float SD=0.0;
    for (i = 0; i < 10; i++) {
        sum += array[i];
    }
    mean = sum / 10;
    for (i = 0; i < 10; i++) {
        SD += pow(array[i] - mean, 2);
    }
    return sqrt(SD / 10);
}

int AVE(int array[]) {
    float sum = 0.0, Average =0.0;
    int i;
    for (i = 0; i < 10; i++) {
        sum += array[i];
    }
    Average = sum/10;
   return Average;
}

int MAX(int array[])
{
    int i,max=array[0];
    for (i = 0; i < 10; ++i) {
		    if(array[i] > max)
		    {
		       max=array[i];
		    }
   }
        return max;
}
 
int MIN(int array[])
{
    int i,min=array[0];
    for (i = 0; i < 10; ++i) {
		    if(array[i]< min)
		    {
		       min=array[i];
		    }
   }
        return min;
}
