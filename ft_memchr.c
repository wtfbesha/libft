/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorfs <mtorfs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 18:45:49 by mtorfs          #+#    #+#             */
/*   Updated: 2026/10/26 18:45:49 by mtorfs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*s_conv;

	s_conv = (const unsigned char *)s;
	while (n > 0)
	{
		if (*s_conv == (unsigned char)c)
		{
			return ((void *)s_conv);
		}
		s_conv++;
		n--;
	}
	return (NULL);
}

// #include <stdio.h>
// int main() {
//     /*
//         char *s =  NULL;
//         char *ptr = ft_memchr(s, 'w', sizeof(s));
//         if (ptr != NULL) {
//             printf("%s", ptr);
//         }
//         else
//         {
//             printf ("search character not found\n");
//         }
//         return 0;
//     */

//     /*
//         const char str[] = "Tutorialsp.oint";
//         const char ch = '.';
//         char *ret;
//         ret = ft_memchr(str, ch, strlen(str));
//         printf("String after |%c| is - |%s|\n", ch, ret);
//         return(0);
//     */
// }
