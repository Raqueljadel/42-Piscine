/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaen-de <rjaen-de@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 12:26:04 by rjaen-de          #+#    #+#             */
/*   Updated: 2025/07/01 10:09:23 by rjaen-de         ###   ########.fr       */
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
	if (argc)
	{
		write(1, argv[0], ft_strlen(argv[0]));
		write(1, "\n", 1);
	}
}
