/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main08.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzahirjo <mzahirjo@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 11:20:51 by mzahirjo          #+#    #+#             */
/*   Updated: 2026/02/02 19:46:32 by mzahirjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int main(void)
{
	char mystr[] ="D jUitI";
	printf("\nIt is string: %s \n",mystr );
	ft_strlowcase(mystr);
	printf("\nreturn lowercase: %s \n",mystr);
	return (0);
}


