#include "libft.h"
#include "test.h"

static void  f(void *ptr);

void	test_ft_lstiter(void)
{
	printf("\n\n\n");
	printf("# =============================================================\n");
	printf("# test_ft_lstiter =============================================\n");
	printf("# =============================================================\n");

	// Test 1: Mutate nodes with function f

	t_list	*root, *tmp;

	int *con1 = malloc(sizeof(int));
	int *con2 = malloc(sizeof(int));
	int *con3 = malloc(sizeof(int));

	*con1 = 1;
	*con2 = 2;
	*con3 = 3;

	root = ft_lstnew((void *)con1);
	root->next = ft_lstnew((void *)con2);
	root->next->next = ft_lstnew((void *)con3);
	root->next->next->next = NULL;

	printf("\nNodes with original content\n");

	tmp = root;

	while (root)
	{
		printf("node: %p - content: %i\n", root, *(int *)root->content);
		root = root->next;
	}

	root = tmp;
	ft_lstiter(root, f);

	assert(*(int *)root->content == 1);
	assert(*(int *)root->next->content == 4);
	assert(*(int *)root->next->next->content == 9);

	printf("\nTest 1 passed: All nodes mutated with f\n");

	printf("\nNodes with updated f content\n");

	while (root)
	{
		printf("node: %p - content: %i\n", root, *(int *)root->content);
		tmp = root;
		root = root->next;
		free(tmp);
	}

	// Test 2: Run with NULL pointers
	
	t_list		*node;
	int			con4 = 10;

	node = ft_lstnew(&con4);
	ft_lstiter(NULL, f);
	ft_lstiter(node, NULL);
	free(node);

	printf("\nTest 2 passed: Handles NULL pointers\n");

	free(con1);
	free(con2);
	free(con3);
}

static void  f(void *content)
{
  *(int *)content = (*(int *)content) * (*(int *)content);
}
