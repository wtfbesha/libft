/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorfs <mtorfs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 18:45:49 by mtorfs          #+#    #+#             */
/*   Updated: 2026/10/26 18:45:49 by mtorfs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last_node;

	last_node = lst;
	if (last_node == NULL)
		return (NULL);
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	return (last_node);
}

/*
#include <stdio.h>

int main(void)
{
    t_list *head;
    t_list *node2;
    t_list *node3;
    t_list *result;

    int number1;
    int number2;
    int number3;

    number1 = 42;
    number2 = 20;
    number3 = 30;
    // Test 1: Empty list
    head = NULL;
    result = ft_lstlast(head);
    printf("Test 1 - Empty list: %s\n",
           result == NULL ? "PASS" : "FAIL");

    // Test 2: One-node list
    head = ft_lstnew(&number1);
    result = ft_lstlast(head);
    printf("Test 2 - One node: %s\n",
           result == head ? "PASS" : "FAIL");

    // Test 3: Multiple-node list
    node2 = ft_lstnew(&number2);
    node3 = ft_lstnew(&number3);

    if (!head || !node2 || !node3)
    {
        printf("Memory allocation failed\n");
        return (1);
    }

    head->next = node2;
    node2->next = node3;

    result = ft_lstlast(head);
    printf("Test 3 - Multiple nodes: %s\n",
           result == node3 ? "PASS" : "FAIL");

    // Test 4: Last node contains zero
    node3->content = NULL;
    result = ft_lstlast(head);
    printf("Test 4 - Last content is NULL: %s\n",
           result == node3 ? "PASS" : "FAIL");

    // Free allocated nodes
    free(node3);
    free(node2);
    free(head);

    return (0);
}
*/
