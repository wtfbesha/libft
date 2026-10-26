/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorfs <mtorfs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 18:45:49 by mtorfs          #+#    #+#             */
/*   Updated: 2026/10/26 18:45:49 by mtorfs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

// #include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	t_list	*a;
// 	t_list	*b;
// 	t_list	*c;
// 	t_list	*d;

// 	/* Test 1: Empty list */
// 	if (ft_lstsize(NULL) == 0)
// 		printf("PASS: empty list\n");
// 	else
// 		printf("FAIL: empty list\n");

// 	/* Test 2: One node */
// 	a = ft_lstnew("A");
// 	if (ft_lstsize(a) == 1)
// 		printf("PASS: one node\n");
// 	else
// 		printf("FAIL: one node\n");

// 	/* Test 3: Three nodes */
// 	b = ft_lstnew("B");
// 	c = ft_lstnew("C");
// 	a->next = NULL;
// 	b->next = NULL;

// 	if (ft_lstsize(a) == 3)
// 		printf("PASS: three nodes\n");
// 	else
// 		printf("FAIL: three nodes\n");

// 	/* Test 4: Add a fourth node */
// 	d = ft_lstnew("D");
// 	c->next = NULL;

// 	if (ft_lstsize(a) == 4)
// 		printf("PASS: four nodes\n");
// 	else
// 		printf("FAIL: four nodes\n");

// 	/* Test 5: Check that content values don't affect size */
// 	if (ft_lstsize(a) == 4)
// 		printf("PASS: counts nodes, not content\n");
// 	else
// 		printf("FAIL: counts nodes, not content\n");

// 	/* Free allocated nodes */
// 	free(a);
// 	free(b);
// 	free(c);
// 	free(d);

// 	return (0);
// }
