#include "libft.h"
#include "test.h"

void	test_ft_lstnew(void)
{
	printf("\n\n\n");
	printf("# =============================================================\n");
	printf("# ft_lstnew ===================================================\n");
	printf("# =============================================================\n");

	// Test 1: New node with string content
	char *val1 = ft_strdup("string in list");
	t_list  *node1 = ft_lstnew((void *)val1);
	assert(!(memcmp(val1, (char *)node1->content, strlen(val1))));
	printf("\n\nPassed test 1: Create new node and assign string to it's content\n");
	printf("value:	\"%s\"	content:	\"%s\"\n", val1, (char *)node1->content);
	free(node1);
	free(val1);

	// Test 2: New node with NULL content
	t_list  *node2 = ft_lstnew(NULL);
	assert(node2->content == NULL);
	printf("\n\nPassed test 2: Create new node and assign NULL to it's content\n");
	printf("Value:	NULL			content:	\"%s\"\n", (char *)node2->content);
	free(node2);

	// Test 3: Node next pointer is terminated
	char *val3 = ft_strdup("string in list");
	t_list  *node3 = ft_lstnew((void *)val3);
	assert(node3->next == NULL);
	printf("\n\nPassed test 3: Newly created node is NULL terminated\n");
	printf("Next:	%s", (char *)node3->next);
	free(node3);
	free(val3);
}


