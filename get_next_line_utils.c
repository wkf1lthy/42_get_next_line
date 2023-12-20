/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouchel <hbouchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 16:47:26 by hbouchel          #+#    #+#             */
/*   Updated: 2023/12/20 18:14:28 by hbouchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_check(char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
			return (0);
	while (s[i])
	{
		if (s[i] == '\n')
				return (1);
		i++;
	}
	return (0);

}

void	ft_buf_cut(char *buffer)
{
	int	i;
	int	j;
	int	indice;

	j = 0;
	i = 0;
	indice = 0;
	while (buffer[i] != '\n' && buffer[i])
			i++;
	if (buffer[i] == '\n')
			i++;
	while (buffer[j])
			j++;
	while (indice < j - i)
	{
		buffer[indice] = buffer[indice + i];
		indice++;
	}
	buffer[indice] = '\0';

}

int	ft_len(char *s, int j)
{
	int	i;
	char	c;

	i = 0;
	c = '\0';
	if(j == 1);
			c = '\n';
	while (s && s[i] && s[i] != c)
			i++;
	if (c == '\n' && s && s[i] && s[i] == '\n')
			i++;
	return (i);
}