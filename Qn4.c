#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float list[20];
void create (void);
void insert (void);
void Delete (void);
void display (void);
int length ();
float average ();
float variance ();
float SD ();
float min ();
float max ();
void update ();

int len,n;
float avg;
int main (){	
	 	int choice;
	 	
	while(1){

				printf("\n\tCHOOSE ANY OF THE FOLLOWING OPERATION TO YOUR STATISTICS\n\n");
		printf("1. CREATE A LIST\n");
		printf("2. INSERT INTO A LIST\n");
		printf("3. DELETE ANY ELEMENT\n");
		printf("4. DISPLAY THE LIST\n");
		printf("5. LENGTH OF A LIST\n");
		printf("6. AVERAGE OF STATISTICAL DATA\n");
		printf("7. VARIANCE\n");
		printf("8. STANDARD DERVIATION\n");
		printf("9. MAX AND MIN\n");
		printf("10. UPDATE DATA\n");
		printf("11. QUIT\n\n");
		
		printf("ENTER YOU CHOICE HERE\n");
		scanf("%d", &choice);
			switch(choice){
				case 1: create ();
					break;
				case 2: insert ();
					break;
				case 3: Delete ();
					break;
				case 4: display ();
					break;
				case 5: len = length ();
					printf("LENGTH  :  %d\n", len);
					break;
				case 6: avg = average ();
					printf("THE MEAN IS :  %.3f\n", avg);
					break;
				case 7: variance ();
					printf("VARIANCE = %.2f",variance());
					break;
				case 8: SD ();
					printf("STANDARD DERVIATION = %.2f\n",SD());
					break;
				case 9: min() && max();
					printf("MIN AND MAX NUMBERS ARE : %.2f and %.2f\n",min(),max());
					break;
				case 10: update ();
					break;
				case 11: exit (1);
				default : printf("YOU MADE WRONG CHOICE MY DEAR\n");		 	
			}
	}
	return 0;
	}
	void create (void)
	{
 		/*printf("THE FOLDER HAS BEING CREATED GO TO INSERT OPTION BELLOW\n");
 		printf("++++++++++++++++++++++++++++++++++++++++\n");*/
		 int i;
		printf("NOW ENTER THE TOTAL COUNT OF DATA YOU WANT : ");
		scanf("%d", &n);
		printf("\nENTER THE DATA HERE  : ");
		for(i=0; i<n ;i++){
		scanf("%f", &list[i]);
	}
}
	void insert(void)
	{
	int i,pos;
	float data;
	int j=n;
	printf("\nENTER THE DATA TO BE INSERTED  :  ");
		scanf("%f",&data);
	printf("\nENTER POSITION  :  ");
		scanf("%d",&pos);
		
		n=n+1;
	while(pos<=j){
		list[j+1]=list[j];
		j=j-1;
	}	
	
	list[pos]=data;
	}

	
	void Delete (void){
		int i,pos;

		printf("\nENTER THE POSITION TO DELETE : ");
		scanf("%d", &pos);
		printf("\nTHE DATA DELETED IS : %.1f",list[pos-1]);

		while(pos<n){
			list[pos-1] = list[pos];
			pos = pos+1;
		}
			n = n-1;
}
void display (){
	int i;
	printf("THE SD DATA ARE\n");
	for(i=0; i<n; i++){
		printf("\t\t %.1f\n",list[i]);
	}
}
int length (){
	int count=0,i;
	for(i=0; i<n; i++){
		count=count+1;
	}
	return count;
}
float average (){
	float sum=0.0;
	int i;
	for(i=0; i<n; i++){
		sum=sum+list[i];
	}
	
	return (sum/n);
}
float variance (){
	float var=0.0;
	int i;
	for(i=0; i<n; i++){
		var=var+pow(list[i]-avg,2);
	}
	return (var/n);
}
float SD (){
	return sqrt(variance());
}
float min(){
	float min;
	int i;
	min=list[0];
	for(i=0; i<n; i++){
		if(min>list[i]){
			min=list[i];
		}

	}
	return min;
}
float max(){
	float max;
	int i;
	max=list[0];
	for(i=0; i<n; i++){
		if(max<list[i]){
			max=list[i];
		}
	}
	return max;
}

void update (){
	int pos;
	float updt;
	printf("\nENTER POSITION TO UPDATE  :   ");
	scanf("%d",&pos);
	printf("\nENTER DATA INSTEEAD OF %.f   :   ", list[pos-1]);
	scanf("%f",&updt);
	list[pos-1]=updt;
}
