#include <stdio.h>
#include <string.h>

int main()
{
    char str[100][100], temp[100], longest[100];
    int n, i, j;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter strings:\n");
    for(i = 0; i < n; i++)
        scanf("%s", str[i]);

    /* Sorting in descending order */
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(strcmp(str[i], str[j]) < 0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    printf("\nStrings in descending order:\n");
    for(i = 0; i < n; i++)
        printf("%s\n", str[i]);

    /* Find longest string */
    strcpy(longest, str[0]);

    for(i = 1; i < n; i++)
    {
        if(strlen(str[i]) > strlen(longest))
            strcpy(longest, str[i]);
    }

    printf("\nLongest string = %s", longest);
    printf("\nLength = %lu", strlen(longest));

    return 0;
}
