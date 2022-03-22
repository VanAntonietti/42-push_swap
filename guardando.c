// void	print_stack(t_ps *ps)
// {	
// 	int	i;

// 	i = 1;
// 	while (i <= (ps->t_argc - 1))
// 	{
// 		ft_printf("%d: %d\n", i, ps->a->n);
// 		ps->a = ps->a->next;
// 		i++;
// 	}
// }

// void	link_list(t_ps *ps, t_stack *first, t_stack *last)
// {
// 	int	i;
// 	t_stack	*tmp_next;

// 	i = 2;
// 	while (i <= (ps->t_argc - 1))
// 	{
// 		tmp_next = malloc(sizeof(t_stack));
// 		tmp_next->n = ft_atoi(ps->t_argv[i]);
// 		tmp_next->next = first;
// 		tmp_next->next = tmp_next;
// 		last = ps->a;
// 		ps->a = ps->a->next;
// 		ps->a->prev = last;
// 		i++;
// 	}
// }

// void	init_list(t_ps *ps)
// {
// 	t_stack	*first;
// 	t_stack	*last;

// 	last = malloc(sizeof(t_stack));
// 	first = malloc(sizeof(t_stack));
// 	ps->a->n = ft_atoi(ps->t_argv[1]);
// 	ps->a->prev = ps->a;
// 	ps->a->next = ps->a;
// 	first = ps->a;
// 	link_list(ps, first, last);
// 	last = ps->a;
// 	ps->a = ps->a->next;
// 	ps->a->prev = last;
	
// 	print_stack(ps);
// 	ft_free_ptr((void **)first);
// 	ft_free_ptr((void **)last);
// }

// void	init_struct(t_ps *ps)	
// {
// 	ps->a = malloc(sizeof(t_stack));
// 	ps->b = malloc(sizeof(t_stack));
// 	init_list(ps);
// }
