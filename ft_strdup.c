/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaen-de <rjaen-de@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 12:33:41 by rjaen-de          #+#    #+#             */
/*   Updated: 2025/07/01 13:39:42 by rjaen-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		pos;
	char	*dest;

	pos = 0;
	while (src[pos])
		pos++;
	dest = malloc(pos + 1);
	if (!dest)
		return (NULL);
	pos = 0;
	while (src[pos])
	{
		dest[pos] = src[pos];
		pos++;
	}
	dest[pos] = '\0';
	return (dest);
}

int	main(void)
{
	char	source[] = "Hola";
	char	*target = ft_strdup(source);

	printf("%s", target);
	if (target)
		free(target);
	return (0);
}
