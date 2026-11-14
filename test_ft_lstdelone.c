#include "libft.h"
#include "test.h"

static int	is_del_used = 0; 
static void	del(void *content);

void	test_ft_lstdelone(void)
{
	printf("\n\n\n");
	printf("# =============================================================\n");
	printf("# ft_lstdelone ================================================\n");
	printf("# =============================================================\n");

	// Test 1: Check if del was called & and correct node was removed;
	t_list	*root;

	char	*val1 = ft_strdup("veluwse");
	char	*val2 = ft_strdup("jongens");

	root = ft_lstnew((void *)val1);
	root->next = ft_lstnew((void *)val2);

	printf("Before:	root		%p content \"%s\"\n", (void *)root, (char *)root->content);
	printf("Before:	root->next	%p content \"%s\"\n", (void *)root->next, (char *)root->next->content);

	is_del_used = 0;

	ft_lstdelone(root->next, del);
	assert(is_del_used == 1);
	printf("\nTest 1: Function del has been called once\n");

	free(val1);
	free(root);
}

static void  del(void *content)
{
	is_del_used++;
	free(content);
}
