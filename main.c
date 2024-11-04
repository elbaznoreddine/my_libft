/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noel-baz <noel-baz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:14:57 by noel-baz          #+#    #+#             */
/*   Updated: 2024/11/03 21:04:31 by noel-baz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char    addone(unsigned    int i, char c)
// {
//     if (i%2 == 1 && ft_isalpha(c))
//     {
//         if (c == 'z')
//             c = 'a';
//         else if (c == 'Z')
//             c = 'A';
//         else
//             c += 1;
//     }
//     return (c);
// }
// int	main(void)
// {
//     char    s[] = "noreddine";
//     ft_striteri(s, addone);
//     printf("%s\n", s);
    
// }
void	del(void *content)
{
	free(content);
}

void    *f(void  *content)
{
    int c;
    
    c = *(int *) content;
    if (c >= 0 && c <= 9)
        c += 1; 
   *(int *)content = c;
    return(content);
}
int	main(void)
{
    t_list  *aff;
    t_list  *aff1;
    t_list  *aff2;
    t_list  *aff3;
    int value;
    int value1;
    int value2;
    
    value = 1;
    value1 = 2;
    value2 = 3;
    aff = ft_lstnew(malloc(sizeof(int)));
    aff1 = ft_lstnew(malloc(sizeof(int)));
    aff2 = ft_lstnew(malloc(sizeof(int)));
    *(int*)(aff->content) = value;
    *(int*)(aff1->content) = value1;
    *(int*)(aff2->content) = value2;
    aff->next = aff1;
    aff1->next = aff2;
    aff2 ->next = NULL;
   //ft_lstadd_front(&aff, aff2);
//    ft_lstadd_back(&aff, aff2);
//    printf("%d\n", ft_lstsize(aff));
    // ft_lstdelone(aff2, del);
    //aff2 = NULL;
    // if (aff2->content == NULL)
    //     printf("%d\n", *(int *)aff2->content);
    // aff1 ->next = NULL;
    
    
    // aff3 = ft_lstlast(aff);
    // printf("%d\n", *(int *)aff3->content);
    //55837
    // int i = 0;
    // char *s = (char *)&i;
    // memset(s, 13 ,1);
    // memset(s + 1, 48 ,1);
    // memset(s + 2, 1 ,1);
    // printf("%d\n", i);
    //  ft_lstclear(&aff, del);
    // while (aff)
    // {
    //     printf("%d\n", *(int *)aff->content);
    //     aff = aff->next;
    // }
    // if (aff == NULL)
    //     printf("%s\n", "Deleting sucsessful");
    // ft_lstiter(aff, f);
    // printf("%d\n", *(int *)aff1->content);
    // while (aff)
    // {
    //     printf("%d\n", *(int *)aff->content);
    //     aff = aff->next;
    // }
    aff3 = ft_lstmap(aff, f, del);
    
    while (aff3)
    {
        printf("%d\n", *(int *)aff3->content);
        aff3 = aff3->next;
    }
    // printf("%d\n", *(int *)aff3->next->content);

// hamza -> mehdi
    // int i = 10; // ====> 1337
    
    // memset(&i, 0, 4);
    // memset(&i, 57, 1);
    // memset((char*)&i+1, 5, 1);
    
    // char  dest[6] = "hamza";
    // long i = 452656129389;
    // int j= 109;
    
    
    // memset(&i, 5, 2);
    // memcpy(str, 'm', 1);
    // memset(&i, 57, 1);
    // memset(&i, 57, 1);
    // memset(&i, 57, 1);
    // memset(&i, 57, 1);
    
    // 1337 ==  00000000 0000000000000101  00111001
    // 0000 0000 00101010
    // printf("%s\n", ft_memchr(dest, j, 5));
}