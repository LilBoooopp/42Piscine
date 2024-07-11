/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbopp <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 12:27:29 by cbopp             #+#    #+#             */
/*   Updated: 2024/06/26 12:13:05 by cbopp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	temp;

	temp = 1;
	if (nb > 0)
	{
		while (temp * temp <= nb)
		{
			if (temp * temp == nb)
				return (temp);
			if (temp > 46340)
				return (0);
			temp++;
		}
	}
	return (0);
}
