/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 03:21:16 by vantonie          #+#    #+#             */
/*   Updated: 2022/03/14 16:53:14 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new_one)
{
	t_list	*tmp;

	if (new_one == NULL)
	{
		return ;
	}
	if (*lst == NULL)
	{
		*lst = new_one;
	}
	else
	{
		tmp = ft_lstlast(*lst);
		tmp->next = new_one;
	}
}
