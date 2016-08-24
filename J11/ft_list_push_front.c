#include "ft_list.h"

t_list	ft_create_elem(void *data)
{
	t_list	*elem;

	elem = NULL;
	elem = (t_list*)malloc(sizeof(*elem));
	if (elem)
	{
		elem->data = data;
		elem->next = NULL;
	}
	return (elem);
}

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*list;
	t_list	*elem;

	list = *begin_list;
	elem = NULL;
	if (list)
	{
		elem = (t_list*)malloc(sizeof(*elem));
		if (elem)
		{
			elem->data = data;
			elem->next = list;
			list = elem;
		}
	}
	else
		*begin_list = ft_create_elem(data);
}
