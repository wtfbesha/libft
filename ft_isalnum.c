/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorfs <mtorfs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 18:45:49 by mtorfs          #+#    #+#               */
/*   Updated: 2026/10/26 18:45:49 by mtorfs          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int a)
{
	if (a >= 'A' && a <= 'Z')
		return (1);
	else if (a >= 'a' && a <= 'z')
		return (1);
	else if (a >= '0' && a <= '9')
		return (1);
	else
		return (0);
}

/*
#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(int a);

static void	test(int c)
{
	int	result;

	result = ft_isalnum(c);
	printf("Input: %4d ('%c') -> %d\n",
		c, (c >= 32 && c <= 126) ? c : '.', result);
}

int	main(void)
{
	int	i;

	printf("=== Uppercase ===\n");
	test('A');
	test('Z');
	test('M');

	printf("\n=== Lowercase ===\n");
	test('a');
	test('z');
	test('m');

	printf("\n=== Digits ===\n");
	test('0');
	test('9');
	test('5');

	printf("\n=== Punctuation ===\n");
	test('!');
	test('@');
	test('/');
	test(':');
	test('[');
	test('`');
	test('{');

	printf("\n=== Whitespace ===\n");
	test(' ');
	test('\t');
	test('\n');
	test('\r');

	printf("\n=== ASCII boundaries ===\n");
	test(0);
	test(1);
	test(31);
	test(32);
	test(48);
	test(57);
	test(65);
	test(90);
	test(97);
	test(122);
	test(127);

	printf("\n=== Negative and high values ===\n");
	test(-1);
	test(128);
	test(255);

	printf("\n=== All byte values: mismatch check ===\n");
	i = 0;
	while (i <= 127)
	{
		if (!!ft_isalnum(i) != !!isalnum(i))
			printf("Mismatch at ASCII %d\n", i);
		i++;
	}
	printf("Comparison finished.\n");
	return (0);
*/
