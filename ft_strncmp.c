/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorfs <mtorfs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 18:45:49 by mtorfs          #+#    #+#             */
/*   Updated: 2026/10/26 18:45:49 by mtorfs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (s2[i] && i < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}

// #include <stdio.h>
// #include <stddef.h>

// int	ft_strncmp(const char *s1, const char *s2, size_t n);

// static void	test(char *name, const char *s1, const char *s2,
// 		size_t n, int expected_sign)
// {
// 	int	result;
// 	int	sign;

// 	result = ft_strncmp(s1, s2, n);
// 	sign = (result > 0) - (result < 0);

// 	if (sign == expected_sign)
// 		printf("OK   : %s\n", name);
// 	else
// 		printf("FAIL : %s (result = %d)\n", name, result);
// }

// int	main(void)
// {
// 	char	high1[] = {(char)0xFF, '\0'};
// 	char	high2[] = {(char)0x01, '\0'};
// 	char	high3[] = {(char)0x80, '\0'};
// 	char	high4[] = {(char)0x7F, '\0'};
// 	char	zero1[] = {'a', '\0', 'b', '\0'};
// 	char	zero2[] = {'a', '\0', 'c', '\0'};

// 	/* n = 0 */
// 	test("n is zero, different strings", "abc", "xyz", 0, 0);
// 	test("n is zero, empty strings", "", "", 0, 0);

// 	/* Empty strings */
// 	test("both strings empty", "", "", 10, 0);
// 	test("first string empty", "", "abc", 10, -1);
// 	test("second string empty", "abc", "", 10, 1);

// 	/* Null terminator boundaries */
// 	test("equal strings", "abc", "abc", 3, 0);
// 	test("equal strings, n exceeds length", "abc", "abc", 10, 0);
// 	test("first string ends first", "ab", "abc", 3, -1);
// 	test("second string ends first", "abc", "ab", 3, 1);
// 	test("difference after n", "abc", "abd", 2, 0);
// 	test("difference exactly at n", "abc", "abd", 3, -1);
// 	test("difference at first byte", "abc", "xbc", 3, -1);
// 	test("difference at last compared byte", "abcd", "abce", 4, -1);

// 	/* Prefixes */
// 	test("shorter first string", "a", "abcd", 4, -1);
// 	test("shorter second string", "abcd", "a", 4, 1);
// 	test("prefix with exact n", "abc", "abcdef", 3, 0);
// 	test("prefix with n plus one", "abc", "abcdef", 4, -1);

// 	/* Same characters, different lengths */
// 	test("same single character", "a", "a", 1, 0);
// 	test("same long string", "abcdefgh", "abcdefgh", 8, 0);

// 	/* Case sensitivity */
// 	test("lowercase vs uppercase", "a", "A", 1, 1);
// 	test("uppercase vs lowercase", "A", "a", 1, -1);

// 	/* High-bit bytes: compare as unsigned char */
// 	test("0xFF > 0x01", high1, high2, 1, 1);
// 	test("0x01 < 0xFF", high2, high1, 1, -1);
// 	test("0x80 > 0x7F", high3, high4, 1, 1);
// 	test("0x7F < 0x80", high4, high3, 1, -1);

// 	/* Embedded null bytes */
// 	test("same prefix before null", zero1, zero2, 2, 0);
// 	test("embedded null ends comparison", zero1, zero2, 3, 0);

// 	/* Larger n */
// 	test("large n, equal strings", "hello", "hello", 1000, 0);
// 	test("large n, different strings", "hello", "world", 1000, -1);

// 	printf("\nEdge-case tests completed.\n");
// 	return (0);
// }
