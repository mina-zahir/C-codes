#include "ft_stock_str.h"

int	main(int argc, char **argv)
{
	struct s_stock_str	*struct_array;
	struct_array = ft_strs_to_tab(argc, argv);
	if (!struct_array)
		return (1);
	ft_show_tab(struct_array);
	return (0);
}
