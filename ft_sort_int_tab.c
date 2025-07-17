/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaen-de <rjaen-de@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 17:58:16 by rjaen-de          #+#    #+#             */
/*   Updated: 2025/06/16 17:36:57 by rjaen-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	f_digit;
	int	s_digit;

	f_digit = 0;
	s_digit = f_digit + 1;
	if (size == 1)
		return ;
	while (s_digit < size)
	{
		if (tab[f_digit] > tab[s_digit])
			ft_swap(&tab[f_digit], &tab[s_digit]);
		f_digit++;
		s_digit++;
	}
	ft_sort_int_tab(tab, size - 1);
}
