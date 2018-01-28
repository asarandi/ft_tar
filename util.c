/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asarandi <asarandi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 17:38:04 by asarandi          #+#    #+#             */
/*   Updated: 2018/01/28 20:22:05 by asarandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tar.h"

extern t_tar_options	g_tar_options;

int		count_digits(size_t n)
{
	int i;

	if (n == 0)
		return (1);
	i = 0;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

void	log_file(char *file)
{
	if (g_tar_options.verbose)
		fprintf(stderr, "a %s\n", file);
}
