/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzahirjo <mzahirjo@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 11:20:51 by mzahirjo          #+#    #+#             */
/*   Updated: 2026/02/02 18:44:12 by mzahirjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int main(void)
{
	char mystr[] = "1";
	printf("\nIt is string: %s \n",mystr );
	printf("\nresult 1 for aphabet and 0 for others: %d \n",ft_str_is_numeric(mystr));
	return (0);
}


