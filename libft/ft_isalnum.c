/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnqabash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 10:43:38 by lnqabash          #+#    #+#             */
/*   Updated: 2018/06/07 10:13:34 by lnqabash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(int c)
{
	return ((unsigned char)((c >= 48 && c <= 57) ||
			(c >= 65 && c <= 90) || (c >= 97 && c <= 122)));
}