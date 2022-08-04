/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seheo <seheo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 17:39:54 by seheo             #+#    #+#             */
/*   Updated: 2022/08/04 12:21:52 by seheo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include	"../lib/libft.h"
# include	<unistd.h>
# include	<stdlib.h>

typedef struct s_stack_node
{
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
	int					data;
}	t_node;

typedef struct s_dlinked_list_stack
{
	struct s_stack_node	*top;
	struct s_stack_node	*bottom;
	int					size;
	int					type;
}	t_stack;

enum e_stack_type
{
	A = 0,
	B,
	R,
	S,
	NO_PRINT
};

enum e_pivot_type
{
	SMALL = 0,
	BIG
};

t_stack	*ft_stack_create(int type);
t_node	*ft_node_init(int num);
t_node	*ft_top(t_stack *stack);
void	ft_push(t_stack *stack, int num);
void	ft_pop(t_stack *stack);
int		ft_is_empty(t_stack *stack);
int		stack_init(char **num, t_stack *stack);

int		ft_atoi(const char *s);

void	top_swap(t_stack *top_node);
void	double_swap(t_stack *stack_a, t_stack *stack_b);
void	stack_change(t_stack *out_stack, t_stack *in_stack);
void	double_rotate(t_stack *stack_a, t_stack *stack_b);
void	stack_rotate(t_stack *stack);
void	stack_rotate_rev(t_stack *stack);
void	double_rotate_rev(t_stack *stack_a, t_stack *stack_b);

int		*stack_sort(t_stack *stack, int *data);
int		check_stack_sort(t_stack *stack, int *num);
void	quick_sort(int *data, int start, int end);
void	sort_2(t_stack **stack_a);
void	sort_2_desc(t_stack **stack_a);
void	sort_3(t_stack **stack_a);
void	sort_5(t_stack **stack_a, t_stack **stack_b);
void	sort_n(t_stack **stack_a, t_stack **stack_b);

void	stack_split_3(t_stack *stack_a, t_stack *stack_b, int *num);
void	control_point_init(t_stack *stack_a, t_stack *stack_b, int *ctrl_point);
int		ft_get_bigger(int *ctrl_p, int *temp_p);
void	n_double_rotate(t_stack *stack_a, t_stack *stack_b, int *ctrl_p);
void	n_rotate(t_stack *stack, int ctrl_p);
int		get_min_ctrl_point(t_stack *stack_a, int b_top);

void	ft_error(char *str);
void	print_message(char *s, int type);
char	**check_stdin(int argc, char **argv);

#endif
