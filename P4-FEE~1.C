#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;

	fp = fopen("feedback.txt", "w");

	if (fp == NULL)
	{
		printf("File cannot be opened!");
		return 0;
	}

	fprintf(fp,"\nAbout C Program : \n\n");
	fprintf(fp, "1. C is developed by DENNIS RITCHIE in 1972 at bell laboratories.\n");
	fprintf(fp, "2. C is a structured language.\n");
	fprintf(fp, "3. C is a simple and fast execution program.\n");
	fprintf(fp, "4. C is a portable language.\n");
	fprintf(fp, "5. C is basic for all programming language.\n");

	fclose(fp);

	fp = fopen("feedback.txt", "a");

	if (fp == NULL)
	{
		printf("File cannot be opened!");
		return 0;
	}

	fprintf(fp, "\nFeedback about C Sir:\n\n");
	fprintf(fp, "1. Sir explains every topic clearly and effectively.\n");
	fprintf(fp, "2. Sir makes C program easy to understand.\n");
	fprintf(fp, "3. Sir clears all our doubts patiently.\n");
	fprintf(fp, "4. Sir is very supportive and friendly with students.\n");
	fprintf(fp, "5. Sir makes learning C interesting.\n");

	fclose(fp);

	fp = fopen("feedback.txt", "r");

	if (fp == NULL)
	{
		printf("File cannot be opened!");
		return 0;
	}

	printf("\n\t\t==========FEEDBACK==========\n");

	while ((ch = fgetc(fp)) != EOF)
	{
		printf("%c", ch);
	}

	fclose(fp);

	return 0;
}
