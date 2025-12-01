/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkaracan <hkaracan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 21:37:00 by hkaracan          #+#    #+#             */
/*   Updated: 2025/12/01 21:37:01 by hkaracan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	atemp;
	int	btemp;

	atemp = *a;
	btemp = *b;
	*a = atemp / btemp;
	*b = atemp % btemp;
}
/*
int	main()
{
	int	a;
	int	b;

	a = 5;
	b = 2;
	printf("AVANT: a = %d, b = %d", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("APRES: a = %d, b = %d", a, b);
	return (0);

}*/
