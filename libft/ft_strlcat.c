/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tukaraca <tukaraca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:04:23 by tukaraca          #+#    #+#             */
/*   Updated: 2024/10/24 20:55:25 by tukaraca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dlen;
	unsigned int	slen;

	i = 0;
	j = 0;
	while (dst[j] != '\0')
	{
		j++;
	}
	dlen = j;
	slen = ft_strlen(src);
	if (dstsize == 0 || dstsize <= dlen)
		return (slen + dstsize);
	while (src [i] != '\0' && i < dstsize - dlen - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (dlen + slen);
}

//int main()
//{
//	char dst[25] = "yunus";
//	char *src = "emre";
	//ft_strlcat(dst, src, 4);
//	printf("%zu\n",ft_strlcat(dst, src, 15));
//	printf("%zu",strlcat(dst, src, 15));
//}
