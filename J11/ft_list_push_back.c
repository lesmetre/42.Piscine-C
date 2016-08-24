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

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*list;

	list = *begin_list;
	if (list)
	{
		while (list->next)
			list = list->next;
		list = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
