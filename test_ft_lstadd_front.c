#include "libft.h"
#include "test.h"

void	test_ft_lstadd_front(void)
{
	printf("\n\n\n");
	printf("# =============================================================\n");
	printf("# ft_lstadd_front =============================================\n");
	printf("# =============================================================\n");

	// test 1: Prepend a new node to list
	t_list  *root, *new, *old_root;
	char	*root_content = ft_strdup("old node");
	char	*new_content = ft_strdup("new node");

	root = ft_lstnew((void *)&root_content);
	new = ft_lstnew((void *)&new_content);
	old_root = root;

	printf("\n\nBefore ft_lstadd_front	root: %p	new: %p\n", root, new);

	ft_lstadd_front(&root, new);
	
	assert(root == new);
	printf("Test 1 passed: New node is now head of list\n");
	printf("After ft_lstadd_front	root: %p	new: %p\n\n\n", root, new);

	// Test 2: New root is pointing to former root;
	assert(root->next == old_root);
	printf("Test 2 passed: New root is pointing to former root\n");
	printf("root: %p		root->next: %p\n\n\n", root, old_root);

	// Test 3: Last node is terminated
	assert(root->next->next == NULL);
	printf("Test 3 passed: Last node is terminated\n");
	printf("root->next->next: \"%s\"\n\n\n", (char *)root->next->next);

	free(new_content);
	free(root_content);
	free(root->next);
	free(root);
}


