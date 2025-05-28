/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:28:34 by joklein           #+#    #+#             */
/*   Updated: 2025/05/28 12:39:57 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

//Copies a memory block to another location.
void	*ft_memcpy(void *dst, const void *src, size_t num)
{
	size_t		i;

	if (dst == 0 && src == 0)
		return (NULL);
	i = 0;
	while (i < num)
	{
		((unsigned char *) dst)[i] = ((unsigned char *) src)[i];
		i++;
	}
	return (dst);
}
