/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtorfs <mtorfs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 18:45:49 by mtorfs          #+#    #+#             */
/*   Updated: 2026/10/26 18:45:49 by mtorfs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (i + j < len && big [i + j] == little[j] && little[j])
			j++;
		if (little[j] == '\0')
			return ((char *) &big[i]);
		i++;
	}
	return (NULL);
}

/*
    #include <stdio.h>
    int main()
    {
        char myStr[] = "Hello World";
        char *myPtr;

        myPtr = ft_strnstr(myStr, "W", sizeof(myStr));     
        if (myPtr != NULL)
            printf("Found: %s\n", myPtr);
        else
            printf("Not found\n");

        myPtr = ft_strnstr(myStr, "World", sizeof(myStr));
        if (myPtr != NULL) 
            printf("Found: %s\n", myPtr); 
        else 
            printf("Not found\n");        

        myPtr = ft_strnstr(myStr, "xyz", sizeof(myStr)); 
        if (myPtr != NULL)
            printf("Found: %s\n", myPtr);
        else
            printf("Not found\n");

        myPtr = ft_strnstr(myStr, "Hello", 5); 
        if (myPtr != NULL) printf("Found: %s\n", myPtr); 
        else
            printf("Not found\n");

        myPtr = ft_strnstr(myStr, "World", 5); 
        if (myPtr != NULL) printf("Found: %s\n", myPtr); 
        else
            printf("Not found\n");

        myPtr = ft_strnstr(myStr, "", 5); 
        if (myPtr != NULL) printf("Found: %s\n", myPtr); 
        else
            printf("Not found\n");

        return (0);
    }
*/
