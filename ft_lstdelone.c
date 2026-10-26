/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorfs <mtorfs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 18:45:49 by mtorfs          #+#    #+#             */
/*   Updated: 2026/10/26 18:45:49 by mtorfs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

// static void	del(void *lst)
// {
// 	free(lst);
// }

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}

// #include <assert.h>
// #include <stdio.h>

// int main(void)
// {
//     t_list *a;
//     t_list *b;
//     t_list *c;
//     int *value;

//     // TEST 1: NULL node
//     ft_lstdelone(NULL, del);
//     printf("Test 1 - NULL node: PASS\n");

//     // TEST 2: Delete a single node
//     value = malloc(sizeof(int));
//     assert(value != NULL);
//     *value = 42;

//     a = ft_lstnew(value);
//     assert(a != NULL);
//     assert(*(int *)a->content == 42);

//     ft_lstdelone(a, del);
//     printf("Test 2 - Single node deleted: PASS\n");

//     // TEST 3: Delete the middle node
//     a = ft_lstnew(NULL);
//     value = malloc(sizeof(int));
//     assert(value != NULL);
//     *value = 99;
//     b = ft_lstnew(value);
//     c = ft_lstnew(NULL);

//     assert(a && b && c);

//     a->next = b;
//     b->next = c;

//     ft_lstdelone(b, del);

//     // C must still exist and remain allocated.
//     assert(c->next == NULL);
//     printf("Test 3 - Next node untouched: PASS\n");

//     // Clean up remaining nodes.
//     free(a);
//     free(c);

//     // TEST 4: Node with NULL content
//     a = ft_lstnew(NULL);
//     assert(a != NULL);

//     ft_lstdelone(a, del);
//     printf("Test 4 - NULL content: PASS\n");

//     printf("\nAll tests completed!\n");
//     return (0);
// }
