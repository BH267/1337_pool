/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 15:55:54 by habenydi          #+#    #+#             */
/*   Updated: 2024/07/02 18:33:33 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_alpha(char str)
{
	int	i;

	i = 0;
	if (str < 'a' && str > 'z' && str < 'A' && 'Z' < str)
		return (0);
	return (1);
}

int	ft_char_is_lowercase(char str)
{
	if (str < 'a' || 'z' < str)
		return (0);
	return (1);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_char_is_alpha(str[i]))
		{
			if (ft_char_is_lowercase(*(str + i)))
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}
