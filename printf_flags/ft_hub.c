/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hub.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gubusque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 20:45:48 by gubusque          #+#    #+#             */
/*   Updated: 2025/06/24 20:45:51 by gubusque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./header/ft_printf.h"

/* redirects to the proper function according to the char given */

void	ft_hub(t_flags flags, va_list args, t_tot *tot)
{
	if (flags.param == 'c' || flags.param == '%')
		ft_c_setup(flags, args, tot);
	else if (flags.param == 's')
		ft_s_setup(flags, args, tot);
	else if (flags.param == 'x' || flags.param == 'X')
		ft_x_setup(flags, args, tot);
	else if (flags.param == 'u')
		ft_u_setup(flags, args, tot);
	else if (flags.param == 'p')
		ft_p_setup(flags, args, tot);
	else if (flags.param == 'd' || flags.param == 'i')
		ft_di_setup(flags, args, tot);
}
