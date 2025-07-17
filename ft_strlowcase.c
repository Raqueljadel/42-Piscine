/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaen-de <rjaen-de@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 13:14:17 by rjaen-de          #+#    #+#             */
/*   Updated: 2025/06/23 11:45:56 by rjaen-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*ptr;
	int		pos;

	ptr = str;
	pos = 0;
	while (str[pos])
	{
		if ((str[pos] >= 65) && (str[pos] <= 90))
			str[pos] = str[pos] + 32;
		else if ((str[pos] >= 97) && (str[pos] <= 122))
			str[pos] = str[pos];
		pos++;
	}
	return (ptr);
}
