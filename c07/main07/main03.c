#include <stdio.h>

int main(void)
{
    char *strs[] = {"Hello", "world", "this", "is", "42"};
    char *separator = " - ";
    char *result;

    printf("Test 1 : ");
    result = ft_strjoin(5, strs, separator);
    if (result)
    {
        printf("%s\n", result);
        free(result);
    }

    printf("Test 2 size =1 : ");
    result = ft_strjoin(1, strs, separator);
    if (result)
    {
        printf("%s\n", result);
        free(result);
    }

    printf("Test 3 (Size 0): ");
    result = ft_strjoin(0, strs, separator);
    if (result)
    {
        printf("Empty string pointer: %p | Content: '%s'\n", result, result);
        free(result);
    }
	 return (0);
}

