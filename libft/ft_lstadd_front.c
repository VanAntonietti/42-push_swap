/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 01:05:33 by vantonie          #+#    #+#             */
/*   Updated: 2022/03/14 16:53:44 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new_one)
{
	t_list	*tmp;

	if (*lst == NULL)
	{
		*lst = new_one;
	}
	else
	{
		tmp = new_one;
		tmp->next = *lst;
		*lst = tmp;
	}
}
