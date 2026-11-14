#include "libft.h"
#include "test.h"


void	test_ft_lstadd_back(void)
{
	printf("\n\n\n");
	printf("# =============================================================\n");
	printf("# ft_lstadd_back ==============================================\n");
	printf("# =============================================================\n");

	// test 1: append a new node to list
	t_list  *root, *new;
	char	*root_content = ft_strdup("old node");
	char	*new_content = ft_strdup("new node");

	root = ft_lstnew((void *)&root_content);
	new = ft_lstnew((void *)&new_content);

	printf("\n\nBefore ft_lstadd_back	root: %p	root->next: %p		new: %p\n", root, root->next, new);

	ft_lstadd_back(&root, new);
	
	assert(root->next == new);
	printf("Test 1 passed: New node appended to list\n");
	printf("After ft_lstadd_back	root: %p	root->next: %p	new: %p\n\n\n", root, root->next, new);

	// Test 2: Root is pointing to new node;
	assert(root->next == new);
	printf("Test 2 passed: Former last node is pointing to new node\n");
	printf("root->next: %p	new: %p\n\n\n", root->next, new);

	// Test 3: New node's is terminated
	assert(new->next == NULL);
	printf("Test 3 passed: Last node is terminated\n");
	printf("root->next->next: \"%s\"\n\n\n", (char *)root->next->next);

	free(root_content);
	free(new_content);
	free(root->next);
	free(root);
}
