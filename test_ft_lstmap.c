#include "libft.h"
#include "test.h"

static void	*f(void *content);
static void	del(void *content);
static int	is_del_used = 0;

void	test_ft_lstmap(void)
{
	printf("\n\n\n");
	printf("# =============================================================\n");
	printf("# test_ft_lstmap ==============================================\n");
	printf("# =============================================================\n");

	// Test 1: Copy nodes with application of f

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
	tmp = ft_lstmap(root, f, del);
	free(root->next->next);
	free(root->next);
	free(root);
	root = tmp;

	assert(*(int *)root->content == 1);
	assert(*(int *)root->next->content == 4);
	assert(*(int *)root->next->next->content == 9);

	printf("\nTest 1 passed: Nodes copied with application of f\n");

	printf("\nNew list with updated f content\n");

	while (root)
	{
		printf("node: %p - content: %i\n", root, *(int *)root->content);
		tmp = root;
		root = root->next;
		free(tmp->content);
		free(tmp);
	}

	// Test 2: Run with NULL pointers
	
	t_list		*node, *null_test1, *null_test2, *null_test3;
	int			*con4 = malloc(sizeof(int));
	*con4 = 10;

	node = ft_lstnew(con4);
	null_test1 = ft_lstmap(NULL, f, del);
	null_test2 = ft_lstmap(node, NULL, del);
	null_test3 = ft_lstmap(node, f, NULL);

	assert(null_test1 == NULL && null_test2 == NULL && null_test3 == NULL);

	printf("\nTest 2 passed: Handles NULL pointers\n");

	free(node);
	free(con4);
	free(null_test1);
	free(null_test2);
	free(null_test3);
	free(con1);
	free(con2);
	free(con3);
}

static void	*f(void *content)
{
	int	*val = malloc(sizeof(int));
	*val = *(int *)content * *(int *)content;
	return(val);
}

static void	del(void *content)
{
	is_del_used++;
	free(content);
}
