#include "../libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *tmp;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
    {
        *lst = new;
        return;
    }
	tmp = *lst;
	while (tmp -> next != NULL)
	{
		tmp = tmp-> next;
	}
	tmp -> next = new;
}
