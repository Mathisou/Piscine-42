#include "ft.h"
#include <stdlib.h>
t_list *ft_create_elem(void *data)
{
	t_list *elem1;

	elem1 = malloc(sizeof(t_list));
	if (elem1 == NULL)
		return (NULL);
	elem1->data = data;
	//elem1->next = NULL;
	//while (elem1)
	//{
	//	printf("%s\n", elem1->data);
	//	elem1 = elem1->next;
	//}
	return (elem1);
}
