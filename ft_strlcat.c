/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <soulang.dev@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:55:02 by yloutfi           #+#    #+#             */
/*   Updated: 2022/10/08 15:59:26 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t	i;
	size_t	lenght;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	lenght = ft_strlen(dst);
	if (dstsize == 0 || dstsize <= lenght)
		return (len + dstsize);
	while (src[i] != '\0' && i < dstsize - lenght - 1)
	{
		dst[lenght + i] = src[i];
		i++;
	}
	dst[lenght + i] = '\0';
	return (lenght + len);
}