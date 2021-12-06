/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoukhart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 11:25:42 by aoukhart          #+#    #+#             */
/*   Updated: 2021/09/29 09:51:34 by aoukhart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		if (!('a' <= str[i] && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}
