/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaen-de <rjaen-de@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 12:39:15 by rjaen-de          #+#    #+#             */
/*   Updated: 2025/07/01 10:11:57 by rjaen-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str)
	{
		counter++;
		str++;
	}
	return (counter);
}

int	main(int argc, char **argv)
{
	int	arg;

	arg = argc - 1;
	while (arg > 0)
	{
		write(1, argv[arg], ft_strlen(argv[arg]));
		write(1, "\n", 1);
		arg--;
	}
	return (0);
}
