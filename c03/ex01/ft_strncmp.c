/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omazoz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 09:35:43 by omazoz            #+#    #+#             */
/*   Updated: 2021/08/16 17:41:46 by omazoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char	*s1, char	*s2, unsigned	int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') && i < n - 1)
	{
		i++;
	}
	if (n == 0)
		return (0);
	else
		return (s1[i] - s2[i]);
}
