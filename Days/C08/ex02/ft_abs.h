/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habenydi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 20:03:17 by habenydi          #+#    #+#             */
/*   Updated: 2024/07/17 11:21:16 by habenydi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_ABS_H
# define FT_ABS_H
# define ABS(Value) (Value * ((Value < 0) * (-1) + (Value > 0)))
#endif
