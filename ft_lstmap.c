/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorfs <mtorfs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 18:45:49 by mtorfs          #+#    #+#             */
/*   Updated: 2026/10/26 18:45:49 by mtorfs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

// void *f(void *content)
// {
//     return ft_strdup((char *)content);
// }

// void del(void *node)
// {
//     free(node);
// }

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*tmp;

	ret = 0;
	while (lst)
	{
		tmp = ft_lstnew(f(lst->content));
		if (!tmp)
		{
			ft_lstclear(&ret, del);
			return (0);
		}
		ft_lstadd_back(&ret, tmp);
		lst = lst->next;
	}
	return (ret);
}

// #include <stdio.h>
// int main(void)
// {
//     t_list *lst;
//     t_list *new_lst;
//     t_list *current;

//     lst = NULL;
//     ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Hello")));
//     ft_lstadd_back(&lst, ft_lstnew(ft_strdup("World")));
//     ft_lstadd_back(&lst, ft_lstnew(ft_strdup("42")));

//     new_lst = ft_lstmap(lst, f, del);

//     current = new_lst;
//     while (current)
//     {
//         printf("%s\n", (char *)current->content);
//         current = current->next;
//     }

//     ft_lstclear(&lst, del);
//     ft_lstclear(&new_lst, del);

//     new_lst = ft_lstmap(NULL, f, del);
//     if (new_lst == NULL)
//         printf("PASS: empty list\n");
//     else
//     {
//         printf("FAIL: empty list\n");
//         ft_lstclear(&new_lst, del);
//     }
//     return (0);
// }
