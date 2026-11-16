#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc,char*argv[])
{
	int m1,m2,m3,m4,m5,total;
	float average;
	char name[100];

	if(argc!=7)
	{
		printf("invalid marks\n");
	}

	strcpy(name,argv[1]);
	m1 = atoi (argv[2]);
	m2 = atoi (argv[3]);
	m3 = atoi (argv[4]);
	m4 = atoi (argv[5]);
	m5 = atoi (argv[6]);

	total = m1+m2+m3+m4+m5;
	average = total/5.0;

	printf("----student Report-----");
	printf("Student Name:  %s\n",name);
	printf("Mark 1      :  %d\n",m1);
	printf("Mark 2      :  %d\n",m2);
	printf("Mark 3      :  %d\n",m3);
	printf("Mark 4      :  %d\n",m4);
	printf("Mark 5      :  %d\n",m5);
	printf("Total       :  %d\n",total);
	printf("Average     :  %.2f\n",average);

	if(total>=450)
	{
		printf("Grade 'A'");
	}
	else if(total>=350)
	{
		printf("Grade B");
	}
	else if(total>=300)
	{
		printf("Grade C");
	}
	else if(total>=200)
	{
		printf("Grade D");
	}
	else
	{
		printf("FAIL");
	}
	return 0;
}
