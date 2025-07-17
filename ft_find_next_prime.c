/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaen-de <rjaen-de@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 17:58:29 by rjaen-de          #+#    #+#             */
/*   Updated: 2025/06/26 19:10:08 by rjaen-de         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int	found;

	if (nb <= 1)
		return (2);
	found = 0;
	while (!found)
	{
		nb++;
		if (ft_is_prime(nb))
			found = 1;
	}
	return (nb);
}
