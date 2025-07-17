/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaen-de <rjaen-de@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 17:07:04 by rjaen-de          #+#    #+#             */
/*   Updated: 2025/06/24 09:55:17 by rjaen-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	pos_dest;
	unsigned int	pos_src;

	pos_dest = 0;
	pos_src = 0;
	while (dest[pos_dest] != '\0')
		pos_dest++;
	while ((pos_src < nb) && src[pos_src] != '\0')
	{
		dest[pos_dest] = src[pos_src];
		pos_dest++;
		pos_src++;
	}
	dest[pos_dest] = '\0';
	return (dest);
}
