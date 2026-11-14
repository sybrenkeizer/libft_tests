#include "libft.h"
#include "test.h"


void	test_ft_lstlast(void)
{
	printf("\n\n\n");
	printf("# =============================================================\n");
	printf("# ft_lstlast ==================================================\n");
	printf("# =============================================================\n");
	
	// Test 1: Compare last node with ft_lstlast

	t_list		*root;

	root = malloc(sizeof(t_list));
	root->next = malloc(sizeof(t_list));
	root->next->next = malloc(sizeof(t_list));
	root->next->next->next = NULL;

	assert(ft_lstlast(root) == root->next->next);
	printf("\nTest 1 passed: Return last node\n");


	// Test 2: Catch invalid argument
	
	assert(ft_lstlast(NULL) ==  NULL);
	printf("\nTest 2 passed: Invalid argument correctly caught\n");

	t_list	*tmp;
	while (root)
	{
		tmp = root;
		root = root->next;
		free(tmp);
	}
}
