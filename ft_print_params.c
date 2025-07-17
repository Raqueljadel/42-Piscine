/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaen-de <rjaen-de@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 12:31:56 by rjaen-de          #+#    #+#             */
/*   Updated: 2025/07/01 10:10:49 by rjaen-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	aux;

	aux = 0;
	while (*str)
	{
		aux++;
		str++;
	}
	return (aux);
}

int	main(int argc, char **argv)
{
	int	argum;

	argum = 1;
	if (argc > 0)
	{
		while (argv[argum])
		{
			write(1, argv[argum], ft_strlen(argv[argum]));
			write(1, "\n", 1);
			argum++;
		}
	}
}
