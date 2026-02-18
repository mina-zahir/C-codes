/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzahirjo <mzahirjo@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 11:20:51 by mzahirjo          #+#    #+#             */
/*   Updated: 2026/02/02 17:52:47 by mzahirjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int main(void)
{
	char mystr[] = "gggiiiiiiiig";
	printf("\nIt is string: %s \n",mystr );
	ft_strncpy(mystr, "bbbb", 4);
	printf("\nIt is string: %s \n",mystr );
	return (0);
}


