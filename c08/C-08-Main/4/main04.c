#include "ft_stock_str.h"
#include <stdio.h> 

void ft_show_tab(struct s_stock_str *par); 

int main(int argc, char **argv)
{
    struct s_stock_str *result;
    int i;

    result = ft_strs_to_tab(argc, argv);

    if (!result)
    {
        printf("Memory allocation failed\n");
        return (1);
    }
    i = 0;
    while (result[i].str != 0)
    {
        printf("Struct index [%d]:\n", i);
        printf("  Size: %d\n", result[i].size);
        printf("  Original Str: %s (Address: %p)\n", result[i].str, result[i].str);
        printf("  Copy Str:     %s (Address: %p)\n", result[i].copy, result[i].copy);
        printf("---------------------------\n");
        free(result[i].copy);
        i++;
    }
    free(result);
    return (0);
}
