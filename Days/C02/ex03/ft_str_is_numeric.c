/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 11:31:10 by habenydi          #+#    #+#             */
/*   Updated: 2024/07/02 10:18:04 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
	{
		if (*(str + i) < '0' || '9' < *(str + i))
			return (0);
		i++;
	}
	return (1);
}
