#include<stdio.h>
#include<conio.h>
#include<string.h>
struct students {
	char fname[20];
	float avg_mark;
	char grade[5];
};
void main()
{
	struct students name[40];
	int number, i;
	
	printf("How many students do you want to work with? ");
	scanf("%d", &number);

	system("cls");
	
	for(i=0; i<=number; i++)
	{
		printf("Enter the name of the student: ");
		scanf("%s",&name[i].fname);
		printf("Enter the average mark: ");
		scanf("%f",&name[i].avg_mark);
		printf("\n\n");
	}
	for(i=0; i<=number; i++)
	{
	  if(name[i].avg_mark>=80)
	    strcpy(name[i].grade,"A");
	  else if(name[i].avg_mark>=60)
	    strcpy(name[i].grade,"B");
	  else if(name[i].avg_mark>=50)
	    strcpy(name[i].grade,"C");
	  else if(name[i].avg_mark>=40)
	    strcpy(name[i].grade,"D");
	  else
	    strcpy(name[i].grade,"E");
	}
	 for(i=0; i<=number; i++)
	  printf("\n%s has obtained grade %s ",name[i].fname,name[i].grade);
	 getch();
	
}

