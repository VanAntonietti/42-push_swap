/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vantonie <vantonie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 21:31:29 by vantonie          #+#    #+#             */
/*   Updated: 2022/03/22 00:54:49 by vantonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	add_on_top (t_stack *stack_one, t_stack *stack_two)
{
	// t_stack	*tmp_local;
	
	// tmp_local = (t_stack *)malloc(sizeof(t_stack));

	stack_one->next->prev = stack_one->prev;
	stack_one->prev->next = stack_one->next;
	stack_two->n = stack_one->n;
	stack_two->next = stack_two;
	stack_two->prev = stack_two;
	stack_one = stack_one->next;

}

// arrumar o print criando uma variável que vai armazenar o tamanho de cada lista
// arrumar o código para retirar o primeiro número da lista a

void	print_stack(t_ps *ps, t_stack *stack)
{
	int	i;

	i = 1;
	while (i <= (ps->t_argc - 1))
	{
		ft_printf("%d: %d\n", i, stack->n);
		stack = stack->next;
		i++;
	}
}