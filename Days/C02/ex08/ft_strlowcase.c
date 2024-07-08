/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 18:57:36 by habenydi          #+#    #+#             */
/*   Updated: 2024/07/02 18:59:59 by habenydi         ###   ########.fr       */
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

int	ft_char_is_uppercase(char str)
{
	if (str < 'A' || 'Z' < str)
		return (0);
	return (1);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_char_is_alpha(str[i]))
		{
			if (ft_char_is_uppercase(*(str + i)))
			{
				str[i] += 32;
			}
		}
		i++;
	}
	return (str);
}
