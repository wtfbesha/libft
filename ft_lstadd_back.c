/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorfs <mtorfs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 18:45:49 by mtorfs          #+#    #+#             */
/*   Updated: 2026/10/26 18:45:49 by mtorfs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	temp = *lst;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
}

// #include "libft.h"
// #include <assert.h>
// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     t_list *lst;
//     t_list *n1;
//     t_list *n2;
//     t_list *n3;
//     t_list *n4;
//     int a = 2;
//     int b = 5;
//     int c = 9;
//     int d = 12;

//     lst = NULL;

//     n1 = ft_lstnew(&a);
//     n2 = ft_lstnew(&b);
//     n3 = ft_lstnew(&c);
//     n4 = ft_lstnew(&d);

//     assert(n1 && n2 && n3 && n4);
//     printf("Allocation: PASS\n");

//     // Test 1: Add to an empty list
//     ft_lstadd_back(&lst, n1);
//     assert(lst == n1);
//     assert(lst->next == NULL);
//     printf("Empty list: PASS\n");

//     // Test 2: Append to a one-node list
//     ft_lstadd_back(&lst, n2);
//     assert(lst->next == n2);
//     assert(n2->next == NULL);
//     printf("One-node list: PASS\n");

//     // Test 3: Append to a multi-node list
//     ft_lstadd_back(&lst, n3);
//     assert(lst->next->next == n3);
//     assert(n3->next == NULL);
//     printf("Multi-node list: PASS\n");

//     // Test 4: Check the order and contents
//     assert(*(int *)lst->content == 2);
//     assert(*(int *)lst->next->content == 5);
//     assert(*(int *)lst->next->next->content == 9);
//     printf("Order and content: PASS\n");

//     // Test 5: NULL new (defensive behavior)
//     ft_lstadd_back(&lst, NULL);
//     assert(lst->next->next == n3);
//     assert(n3->next == NULL);
//     printf("NULL new: PASS\n");

//     // Test 6: NULL lst pointer (defensive behavior)
//     ft_lstadd_back(NULL, n4);
//     assert(lst->next->next == n3);
//     assert(n3->next == NULL);
//     printf("NULL lst pointer: PASS\n");

//     // Test 7: Append to another empty list
//     {
//         t_list *empty;

//         empty = NULL;
//         ft_lstadd_back(&empty, n4);
//         assert(empty == n4);
//         assert(n4->next == NULL);
//         printf("Second empty list: PASS\n");
//     }

//     // Free nodes only; their contents point to stack variables
//     free(n1);
//     free(n2);
//     free(n3);
//     free(n4);

//     printf("\nAll tests passed!\n");
//     return (0);
// }
