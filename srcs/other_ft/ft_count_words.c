/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <ymanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 22:29:29 by ymanilow          #+#    #+#             */
/*   Updated: 2020/03/07 15:32:53 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "other_ft.h"

size_t					ft_count_words(const char *str, char c)
{
	register size_t		count;

	count = 0;
	while (*str)
	{
		if (*str != c && (*(str + 1) == c || !*(str + 1)))
			++count;
		++str;
	}
	return (count);
}