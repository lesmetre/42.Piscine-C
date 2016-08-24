
#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*list_last;

	list_last = begin_list;
	while (list_last->next)
		list_last = list_last->next;
	return (list_last);
}
