/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaen-de <rjaen-de@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 12:11:40 by rjaen-de          #+#    #+#             */
/*   Updated: 2025/06/23 11:44:57 by rjaen-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*ptr;
	int		pos;

	ptr = str;
	pos = 0;
	while (str[pos])
	{
		if ((str[pos] >= 97) && (str[pos] <= 122))
			str[pos] = str[pos] - 32;
		else if ((str[pos] >= 65) && (str[pos] <= 90))
			str[pos] = str[pos];
		pos++;
	}
	return (ptr);
}
