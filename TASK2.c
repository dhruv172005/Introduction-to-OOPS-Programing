#include<stdio.h>

char tasks[5][100];
int status [5]={0,0,0,0,0};

void marktaskdone(int index)
{
	status[index]=1;
}

int main()
{
	int i;
	int index;
	
		printf("ENTER 5 TASKS:-\n ");

		for(i=0; i<5; i++)
		{
			printf("ENTER TASK %d:- ",i+1);
			fgets(tasks[i],100,stdin);
		}
		
		printf("\nYOUR TASK LIST:-\n");
		
		for(i=0; i<5; i++)
		{
			printf("%d.%s",i+1,tasks[i]);
			printf(" -PENDING\n");
		}
		
		printf("ENTER A TASK NUMBER TO MARK DONE(1-5):- ");
		scanf("%d",&index);
		
		if(index>=1 && index<=5)
		{
			marktaskdone(index-1);
		}
		
		else
		{
			printf("INVALID TASK NUMBER:- \n");
		}
		
		printf("\nUPDATED TASK LIST:- \n");
		
		for(i=0;i<5;i++)
		{
			printf("%d.%s",i+1,tasks[i]);
	
			if (status[i]==1)
			{
				printf("DONE\n");
			}
			
			else
			{
				printf("PENDING\n");
			}
		}

} 		
