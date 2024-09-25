#include "../libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{

	t_list	*tmp;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		tmp = *lst;
		*lst = (*lst) -> next;
		del(tmp->content);
		free(tmp);
	}
}
