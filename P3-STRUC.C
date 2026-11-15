#include<stdio.h>
#include<stdlib.h>
struct student
{
	char name[30];
	int rollno;
	int mark;
	char city[20];
	char dream[25];
};
void readstudent(struct student s[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("enter student name:");
		scanf("%s",s[i].name);
		printf("enter student rollnumber:");
		scanf("%d",&s[i].rollno);
		printf("enter student mark:");
		scanf("%d",&s[i].mark);
		printf("enter student city:");
		scanf("%s",s[i].city);
		printf("enter student dream:");
		scanf("%s",s[i].dream);
		printf("\n");
	}
}
void writestudent(struct student s[],int n)
{
	int i;
	printf("\n--------STUDENT DETAILS--------\n");
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("name: %s\n",s[i].name);
		printf("rollnumber: %d\n",s[i].rollno);
		printf("mark: %d\n",s[i].mark);
		printf("city; %s\n",s[i].city);
		printf("dream: %s\n",s[i].dream);
		printf("\n");
	}
}
int main()
{
	int n;
	struct student s[100];
	clrscr();
	printf("\n enter the number of students:");
	scanf("%d",&n);
	printf("\n");
	if(n<1&&n>100)
	{
		printf("invalid input");
	}
	else
	{
		readstudent(s,n);
		writestudent(s,n);
	}
	return 0;
}


