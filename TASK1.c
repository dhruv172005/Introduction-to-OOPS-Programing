#include<stdio.h>

char tasks[5][100];

int main()
{
	int i;
	
	for (i=0;i<5;i++)
	{
		printf("ENTER TASK %d:- ",i+1);
		
		fgets(tasks[i],100, stdin);
	}
	
	printf("\nYOUR TASK LIST:- \n");
	
	for(i=0;i<5;i++)
	{
		printf("%s",tasks[i]);
	}
}
