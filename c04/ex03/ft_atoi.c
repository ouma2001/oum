/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omazoz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 09:55:50 by omazoz            #+#    #+#             */
/*   Updated: 2021/08/18 18:23:48 by omazoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_atoi(char *str)
{
	int	i;
	int	N;
	int	signe;

	i = 0;
	signe = 1;
	N = 0;
	while ((str[i] <= 13 && str[i] >= 9) || str[i] == ' ')
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			signe *= -1 ;
		}
		i++;
	}
	while (str[i] && str[i] >= 48 && str[i] <= 57 )
	{
		N = N * 10 + str[i] - 48;
		i++;
	}
	return (N * signe);
}
