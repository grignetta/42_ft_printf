/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpadenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:31:26 by dpadenko          #+#    #+#             */
/*   Updated: 2023/10/03 20:29:17 by dpadenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_digit(int n)
{
	int		count;
	char	*num;

	count = 0;
	num = ft_itoa(n);
	count = ft_print_str(num);
	free(num);
	return (count);
}
