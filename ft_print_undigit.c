/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_undigit.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpadenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:34:41 by dpadenko          #+#    #+#             */
/*   Updated: 2023/10/03 20:39:10 by dpadenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static long int	ft_unsigned_count(unsigned int n)
{
	int	count;

	count = 0;
	while ((n / 10) > 0)
	{
		count++;
		n = n / 10;
	}
	return (count + 1);
}

static char	*ft_uni_to_a(unsigned int n, char *s, int *i)
{
	if (n / 10 != 0)
		ft_uni_to_a(n / 10, s, i);
	s[(*i)++] = (n % 10) + '0';
	s[*i] = '\0';
	return (s);
}

char	*ft_unitoa(unsigned int n)
{
	char	*i_str;
	int		i;

	i = 0;
	i_str = malloc(ft_unsigned_count(n) + 1);
	if (i_str == NULL)
		return (NULL);
	return (ft_uni_to_a(n, i_str, &i));
}

int	ft_print_undigit(unsigned int n)
{
	int		count;
	char	*str;

	str = ft_unitoa(n);
	count = ft_print_str(str);
	free(str);
	return (count);
}
