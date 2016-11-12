/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabbah <nsabbah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 16:45:50 by nsabbah           #+#    #+#             */
/*   Updated: 2016/11/12 16:49:51 by nsabbah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
  t_list *tmp;

  if (lst == NULL || f == NULL)
    return ;
  while(lst)
  {
    tmp = lst->next;
    f(lst);
    lst = tmp;
  }
}
