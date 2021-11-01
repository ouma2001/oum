/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omazoz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 10:42:55 by omazoz            #+#    #+#             */
/*   Updated: 2021/08/14 10:53:39 by omazoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_numeric(char	*str)
{
	int	i;
	int	j;

	j = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= '9' && str [i] >= '0')
		{
			 j = 1;
		}
		else
		{
			 j = 0;
			 break ;
		}
		i++;
	}
	return (j);
}
