#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;

    // Write 5 feedbacks about C
    fp = fopen("feedback.txt", "w");

    if (fp == NULL)
    {
        printf("File cannot be opened!");
        return 1;
    }

    fprintf(fp, "1. C is an easy programming language.\n");
    fprintf(fp, "2. C improves logical thinking.\n");
    fprintf(fp, "3. C is useful for beginners.\n");
    fprintf(fp, "4. C teaches programming basics.\n");
    fprintf(fp, "5. C is a powerful language.\n");

    fclose(fp);

    // Append 5 feedbacks about C Sir
    fp = fopen("feedback.txt", "a");

    if (fp == NULL)
    {
        printf("File cannot be opened!");
        return 1;
    }

    fprintf(fp, "\nFeedback about C Sir:\n");
    fprintf(fp, "1. Sir explains concepts clearly.\n");
    fprintf(fp, "2. Sir is very helpful.\n");
    fprintf(fp, "3. Sir teaches with simple examples.\n");
    fprintf(fp, "4. Sir clears our doubts.\n");
    fprintf(fp, "5. Sir makes learning C interesting.\n");

    fclose(fp);

    // Read and print the file
    fp = fopen("feedback.txt", "r");

    if (fp == NULL)
    {
        printf("File cannot be opened!");
        return 1;
    }

    printf("\nALL FEEDBACK:\n\n");

    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}
