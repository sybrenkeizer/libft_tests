#include "libft.h"
#include "test.h"

static size_t	n_node_deleted = 0;
static void  del(void *content);

void	test_ft_lstclear(void)
{
	printf("\n\n\n");
	printf("# =============================================================\n");
	printf("# ft_lstclear =================================================\n");
	printf("# =============================================================\n");

	// Test list clearance with 3 nodes
	t_list  *list, *print;
	 
	list = malloc(sizeof(t_list));
	list->next = malloc(sizeof(t_list));
	list->next->next = malloc(sizeof(t_list));
	list->next->next->next = NULL;

	list->content = strdup("node 1");
	list->next->content = strdup("node 2");
	list->next->next->content = strdup("node 3");

	print = list;	
	printf("\nList before application ft_lstclear\n");
	while (print)
	{
	  printf("node: %p - content: %s\n", (void *)print, (char *)print->content);
	  print = print->next;
	}

	n_node_deleted = 0;
	ft_lstclear(&list, del);

	assert(n_node_deleted == 3);
	printf("\nTest 1 passed: Cleared all 3 nodes\n");
	printf("\nList after application ft_lstclear\n");
	printf("node: %p\n", (void *)list);

	assert(list == NULL);
	printf("\nTest 2 passed: Pointer to first node is NULL\n");
}

static void	del(void *content)
{
	n_node_deleted++;
	free(content);
}
