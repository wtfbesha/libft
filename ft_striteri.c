/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorfs <mtorfs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 18:45:49 by mtorfs          #+#    #+#             */
/*   Updated: 2026/10/26 18:45:49 by mtorfs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
#include <stdio.h>
void f(unsigned int i, char *c)
{
	(void)i;
	*c = (char)ft_toupper((unsigned char)*c);
}

void f_index(unsigned int i, char *c)
{
	*c = *c + i;
}

void f_no_change(unsigned int i, char *c)
{
	(void)i;
	(void)c;
}

void f_to_null(unsigned int i, char *c)
{
	(void)i;
	if (i == 1)
		*c = '\0';
}

void f_to_zero(unsigned int i, char *c)
{
	(void)i;
	*c = '0';
}
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
int main(void)
{
	char str1[] = "";
	char str2[] = "a";
	char str3[] = "hello";
	char str4[] = "a B!z?";
	char str5[] = "abcd";
	char str6[] = "12345";
	char str7[] = "   ";
	char str8[] = "AaZz";
	char str9[] = "hello world!";
	char str10[] = "42";
	char str11[] = "x";
	char str12[] = "aaaa";
	char str13[] = "abc";
	char str14[] = "Hello";
	char str15[] = "";

	printf("\n--- TEST 1: Empty string ---\n");
	ft_striteri(str1, f);
	printf("Result: [%s]\n", str1);

	printf("\n--- TEST 2: One character ---\n");
	ft_striteri(str2, f);
	printf("Result: [%s]\n", str2);

	printf("\n--- TEST 3: Normal string ---\n");
	ft_striteri(str3, f);
	printf("Result: [%s]\n", str3);

	printf("\n--- TEST 4: Spaces and punctuation ---\n");
	ft_striteri(str4, f);
	printf("Result: [%s]\n", str4);

	printf("\n--- TEST 5: Callback uses index ---\n");
	ft_striteri(str5, f_index);
	printf("Result: [%s]\n", str5);

	printf("\n--- TEST 6: Numbers ---\n");
	ft_striteri(str6, f);
	printf("Result: [%s]\n", str6);

	printf("\n--- TEST 7: Only spaces ---\n");
	ft_striteri(str7, f);
	printf("Result: [%s]\n", str7);

	printf("\n--- TEST 8: Uppercase and lowercase ---\n");
	ft_striteri(str8, f);
	printf("Result: [%s]\n", str8);

	printf("\n--- TEST 9: Long string ---\n");
	ft_striteri(str9, f);
	printf("Result: [%s]\n", str9);

	printf("\n--- TEST 10: NULL string ---\n");
	ft_striteri(NULL, f);
	printf("NULL string handled\n");

	printf("\n--- TEST 11: NULL callback ---\n");
	ft_striteri(str10, NULL);
	printf("Result: [%s]\n", str10);

	printf("\n--- TEST 12: Callback prints only ---\n");
	ft_striteri(str11, f);
	printf("Result: [%s]\n", str11);

	printf("\n--- TEST 13: Repeated characters ---\n");
	ft_striteri(str12, f_index);
	printf("Result: [%s]\n", str12);

	printf("\n--- TEST 14: Index-based modification ---\n");
	ft_striteri(str13, f_index);
	printf("Result: [%s]\n", str13);

	printf("\n--- TEST 15: String modified by callback ---\n");
	ft_striteri(str14, f);
	printf("Result: [%s]\n", str14);

	printf("\n--- TEST 16: Empty string + NULL callback ---\n");
	ft_striteri(str15, NULL);
	printf("Result: [%s]\n", str15);
	char str17[] = "hello";
	char str18[] = "abcd";
	char str19[] = "test";

	printf("\n--- TEST 17: Callback changes nothing ---\n");
	ft_striteri(str17, f_no_change);
	printf("Result: [%s]\n", str17);

	printf("\n--- TEST 18: Callback inserts null terminator ---\n");
	ft_striteri(str18, f_to_null);
	printf("Result: [%s]\n", str18);

	printf("\n--- TEST 19: Callback changes every char to zero ---\n");
	ft_striteri(str19, f_to_zero);
	printf("Result: [%s]\n", str19);

	printf("\n--- ALL TESTS FINISHED ---\n");
	return (0);
}
*/
