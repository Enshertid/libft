/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymanilow <ymanilow@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 20:08:29 by dbendu            #+#    #+#             */
/*   Updated: 2020/03/06 14:34:37 by ymanilow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_error(const char *error_msg, int error_code)
{
	write(1, error_msg, ft_strlen(error_msg));
	write(1, "\n", 1);
	exit(error_code);
}
