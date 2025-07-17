/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaen-de <rjaen-de@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 17:36:40 by rjaen-de          #+#    #+#             */
/*   Updated: 2025/06/26 18:34:04 by rjaen-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	aux;
	int	count;

	aux = 2;
	count = 1;
	if (nb <= 1)
		return (0);
	while (aux <= nb)
	{
		if (nb % aux == 0)
			count++;
		aux++;
	}
	if (count > 2)
		return (0);
	return (1);
}
