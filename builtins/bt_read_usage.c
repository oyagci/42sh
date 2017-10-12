/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bt_read_usage.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyagci <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 11:14:07 by oyagci            #+#    #+#             */
/*   Updated: 2017/09/26 11:14:08 by oyagci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sh42.h"

void	read_usage(void)
{
	ft_dprintf(2, "Usage: -s -r -e [-p arg] [-d arg] [-t arg] [-u arg] \
[-n arg]\n");
}
