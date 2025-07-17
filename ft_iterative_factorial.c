/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaen-de <rjaen-de@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 16:27:59 by rjaen-de          #+#    #+#             */
/*   Updated: 2025/07/01 10:00:37 by rjaen-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	aux;
	int	fact;

	if (nb < 0)
		return (0);
	aux = 2;
	fact = 1;
	while (aux <= nb)
	{
		fact *= aux;
		aux++;
	}
	return (fact);
}
