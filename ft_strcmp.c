/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaen-de <rjaen-de@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 17:52:11 by rjaen-de          #+#    #+#             */
/*   Updated: 2025/06/24 11:15:45 by rjaen-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	pos;

	pos = 0;
	if (s1[pos] == '\0')
		return (0 - s2[pos]);
	else if (s2[pos] == '\0')
		return (s1[pos]);
	while (s1[pos] || s2[pos])
	{
		if (s1[pos] == '\0')
			return (0 - s2[pos]);
		else if (s2[pos] == '\0')
			return (s1[pos]);
		else if (s1[pos] != s2[pos])
			return (s1[pos] - s2[pos]);
		pos++;
	}
	return (0);
}
