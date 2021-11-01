/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omazoz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 19:49:39 by omazoz            #+#    #+#             */
/*   Updated: 2021/08/14 11:09:23 by omazoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_uppercase(char	*str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (str [i] != '\0')
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
			j = 1;
		else
		{
			j = 0;
			break ;
		}
		i++;
	}
	return (j);
}
