/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorfs <mtorfs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 18:45:49 by mtorfs          #+#    #+#             */
/*   Updated: 2026/10/26 18:45:49 by mtorfs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1_;
	const unsigned char	*s2_;

	if (s1 == s2 || n == 0)
		return (0);
	s1_ = (const unsigned char *)s1;
	s2_ = (const unsigned char *)s2;
	while (n > 0)
	{
		if (*s1_ != *s2_)
			return (*s1_ - *s2_);
		s1_++;
		s2_++;
		n--;
	}
	return (0);
}

// #include <stdio.h>
// int main()
// {
//     /*
//         // Check Arrays are Equal or Not
//         int s1[] = {10, 20, 35, 40};
//         int s2[] = {10, 20, 35, 40};
//         int res = ft_memcmp(s1, s2, sizeof(s1));
//         if (res == 0)
//             printf("Arrays are identical");
//         else
//             printf("Arrays differ");
//     */

//     /*
//         int v1[] = { 'a', 'b', 'c' };
//         int v2[sizeof(v1)] = { 'd', 'e', 'f' };
//         int res1 = ft_memcmp(v1, v2, 0);
//         if (res1 == 0)
//             printf("Arrays are identical");
//         else
//             printf("Arrays differ");
//     */

//     /*
//         char myStr1[] = "AB";
//         char myStr2[] = "Q";
//         int cmp = memcmp(myStr1, myStr2, 2);
//         if (cmp > 0) {
//             printf("%s is greater than %s\n", myStr1, myStr2);
//         } else if (cmp < 0) {
//             printf("%s is greater than %s\n", myStr2, myStr1);
//         } else {
//             printf("%s is equal to %s\n", myStr1, myStr2);
//         }
//     */
// }
