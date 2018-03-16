#include <stdio.h>
#include <string.h>
int main()
{
    char spk[200];
    int count = 0, i;
 
    printf("enter a string\n");
    scanf("%[^\n]s", spk);
    for (i = 0;spk[i] != '\0';i++)
    {
        if (spk[i] == ' ')
            count++;    
    }
    printf("number of words in given string are: %d\n", count + 1);
    return 0;
}
