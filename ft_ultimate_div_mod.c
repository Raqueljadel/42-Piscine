/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaen-de <rjaen-de@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 13:05:43 by rjaen-de          #+#    #+#             */
/*   Updated: 2025/06/15 15:49:24 by rjaen-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	dividend;
	int	divisor;

	dividend = *a;
	divisor = *b;
	*a = dividend / divisor;
	*b = dividend % divisor;
}
