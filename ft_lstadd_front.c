/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorfs <mtorfs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 18:45:49 by mtorfs          #+#    #+#             */
/*   Updated: 2026/10/26 18:45:49 by mtorfs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*a;
// 	t_list	*b;
// 	t_list	*c;

// 	/* Test 1: Add to an empty list */
// 	lst = NULL;
// 	a = ft_lstnew("A");
// 	ft_lstadd_front(&lst, a);

// 	if (lst == a && lst->next == NULL)
// 		printf("PASS: add to empty list\n");
// 	else
// 		printf("FAIL: add to empty list\n");

// 	/* Test 2: Add another node to the front */
// 	b = ft_lstnew("B");
// 	ft_lstadd_front(&lst, b);

// 	if (lst == b && lst->next == a && a->next == NULL)
// 		printf("PASS: add to non-empty list\n");
// 	else
// 		printf("FAIL: add to non-empty list\n");

// 	/* Test 3: Add a third node */
// 	c = ft_lstnew("C");
// 	ft_lstadd_front(&lst, c);

// 	if (lst == c && lst->next == b && b->next == a)
// 		printf("PASS: preserve existing links\n");
// 	else
// 		printf("FAIL: preserve existing links\n");

// 	/* Test 4: Check the complete list */
// 	while (lst)
// 	{
// 		printf("%s -> ", (char *)lst->content);
// 		lst = lst->next;
// 	}
// 	printf("NULL\n");

// 	/* Free the allocated nodes */
// 	free(c);
// 	free(b);
// 	free(a);

// 	return (0);
// }
