/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorfs <mtorfs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 18:45:49 by mtorfs          #+#    #+#             */
/*   Updated: 2026/10/26 18:45:49 by mtorfs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*last_node;

	last_node = malloc(sizeof(t_list));
	if (!last_node)
		return (NULL);
	(last_node)->content = content;
	(last_node)->next = NULL;
	return (last_node);
}

// #include <stdio.h>
// int main(void)
// {
// 	t_list *node;
// 	int number;

// 	number = 42;
// 	node = ft_lstnew(&number);

// 	/* Test 1: Allocation succeeded */
// 	if (node == NULL)
// 		printf("FAIL: allocation returned NULL\n");
// 	else
// 		printf("PASS: allocation succeeded\n");

// 	if (node != NULL)
// 	{
// 		/* Test 2: Content pointer is preserved */
// 		if (node->content == &number)
// 			printf("PASS: content pointer is correct\n");
// 		else
// 			printf("FAIL: content pointer is incorrect\n");

// 		/* Test 3: Content can be accessed */
// 		if (*(int *)node->content == 42)
// 			printf("PASS: content value is correct\n");
// 		else
// 			printf("FAIL: content value is incorrect\n");

// 		/* Test 4: Next pointer starts as NULL */
// 		if (node->next == NULL)
// 			printf("PASS: next is NULL\n");
// 		else
// 			printf("FAIL: next is not NULL\n");

// 		free(node);
// 	}

// 	/* Test 5: NULL content */
// 	node = ft_lstnew(NULL);
// 	if (node != NULL && node->content == NULL && node->next == NULL)
// 		printf("PASS: NULL content handled correctly\n");
// 	else
// 		printf("FAIL: NULL content test\n");
// 	free(node);

// 	return (0);
// }
