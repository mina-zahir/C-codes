/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzahirjo <mzahirjo@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 11:20:51 by mzahirjo          #+#    #+#             */
/*   Updated: 2026/02/02 18:32:35 by mzahirjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int main(void)
{
	char mystr[] = "gggiiiiiiiig-";
	printf("\nIt is string: %s \n",mystr );
	printf("\nresult 1 for aphabet and 0 for others: %d \n",ft_str_is_alpha(mystr));
	return (0);
}


