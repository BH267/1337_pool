/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 20:45:18 by habenydi          #+#    #+#             */
/*   Updated: 2024/07/11 08:53:13 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	r;

	r = 1;
	r *= nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (r * ft_recursive_power(nb, power - 1));
}
