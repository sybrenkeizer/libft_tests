// #include "libft.h"
#include "test.h"


void	test_ft_lstsize(void)
{
	printf("\n\n\n");
	printf("# =============================================================\n");
	printf("# ft_lstsize ==================================================\n");
	printf("# =============================================================\n");

	// Test 1: Count list of 3 nodes

	t_list		*root;

	root = malloc(sizeof(t_list));
	root->next = malloc(sizeof(t_list));
	root->next->next = malloc(sizeof(t_list));
	root->next->next->next = NULL;

	assert(ft_lstsize(root) == 3);
	printf("\nTest 1 passed: Correct number of nodes counted\n");


	// Test 2: Catch invalid argument
	
	assert(ft_lstsize(NULL) == 0);
	printf("\nTest 2 passed: Invalid argument correctly caught\n");

	t_list	*tmp;
	while (root)
	{
		tmp = root;
		root = root->next;
		free(tmp);
	}
}
