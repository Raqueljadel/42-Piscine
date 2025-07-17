/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaen-de <rjaen-de@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 13:48:39 by rjaen-de          #+#    #+#             */
/*   Updated: 2025/06/24 09:54:03 by rjaen-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	pos_dest;
	int	pos_src;

	pos_dest = 0;
	pos_src = 0;
	while (dest[pos_dest] != '\0')
		pos_dest++;
	while (src[pos_src] != '\0')
	{
		dest[pos_dest] = src[pos_src];
		pos_dest++;
		pos_src++;
	}
	dest[pos_dest] = '\0';
	return (dest);
}
