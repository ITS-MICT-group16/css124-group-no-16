#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Dictionary
{
	char Eng[40];
	char Sw[40];
};
int main()
{
	int size,i, choice, terminator;
	char search[20];
	printf("Enter the size of words to use\n\n");
	printf("Weka ukubwa wa maneno utumiayo\n");
	scanf("%d", &size);
	struct Dictionary Array[size];
	
	printf("\n\nWelcome to dictionary with %d Words\n\n", size);
	
	for(i=0; i<size; i++)
	{
		printf("Enter the %d English word\n", i+1);
		scanf("%s", &Array[i].Eng);
		printf("Enter the %d coresponding meaning\n", i+1);
		scanf("%s", &Array[i].Sw);
	}
	printf("\n\n");
	
	while(1){
	printf("\n\n");
	printf("Enter the choice of dictionary you want\n");
	printf(" Weka chaguzi la kamusi unayotaka kutumia\n");
	printf("press 1. for English to Swahili\n");
	printf("bonyeza 2. Swahili kwenda English\n");
	printf("press 3. for displaying words\n");
	printf("press 4. to Quit the program\n");
	scanf("%d", &choice);
	printf("\n\n");
	
	switch(choice)
	{
		case 1: printf("Welcome to English dictionary\n\n");
		        printf("Enter the word to search\n");
		        scanf("%s", &search);
		        terminator = 0;
		        for(i=0; i<size; i++)
		        {
		        	if(strcmpi(search, Array[i].Eng) == 0)//difference of characters 
		        	//if you enter HEN and you search HON diff. ==1, the word will not be found.
		        	{
		        		terminator++;
		        		printf("The meaning is: \t%s\n", Array[i].Sw);
					}
				}
				if(terminator == 0)
				{
					printf("The word is not found in the dictionary\n");
				}
				break;
				
	    case 2: printf("Karibu kwenye Kamusi ya Kiswahili\n\n");
		        printf("Ingiza neno la kutafuta\n");
		        scanf("%s", &search);
		        terminator = 0;
		        for(i=0; i<size; i++)
		        {
		        	if(strcmpi(search, Array[i].Sw) == 0)
		        	{
		        		terminator++;
		        		printf("Maana yake ni: \t%s\n", Array[i].Eng);
					}
				}
				if(terminator == 0)
				{
					printf("Neno unalolitafuta halipo kwenye kamusi\n");
				}
				break;	
			
		case 3:	printf("The available words in my dictionary are: %d \n", size);
  			
			    printf("the available word are:\n\n\n");
				printf("\tEnglish ---------- Swahili\n");
						for(i=0; i<size; i++)
				{
					printf("\t%s----------- : %s\n", Array[i].Eng, Array[i].Sw);
				}
				break;
		case 4: exit(1);
		        break;
				
	    default : printf("Invalid choice\n");							
	}
}
}

