#include "test.h"
#include "libft.h"

void	test_ft_strjoin(void)
{
	printf("\n\n\n");
	printf("# =============================================================\n");
	printf("# ft_strjoin ==================================================\n");
	printf("# =============================================================\n");

	// Test 1: Concatenate 2 existing strings 
	const char		sa1[] = "pinda";
	const char		sb1[] = "kaas";
	char			*joined1 = ft_strjoin(sa1, sb1);
	char			correct1[] = "pindakaas";
	assert(!strncmp(joined1, correct1, ft_strlen(correct1)));
	printf("\nTest 1 passed: Concatenate 2 existing strings\n");
	printf("ft_strjoin - s1:\"%s\" - s2:\"%s\" - return:\"%s\"\n", sa1, sb1, joined1);
	printf("     check - s1:\"%s\" - s2:\"%s\" - return:\"%s\"\n", sa1, sb1, correct1);
	free(joined1);

	// Test 2: Attempt with empty strings
	const char		sa2[] = "";
	const char		sb2[] = "";
	char			*joined2 = ft_strjoin(sa2, sb2);
	char			correct2[] = "";
	assert(!strncmp(joined2, correct2, ft_strlen(correct2)));
	printf("\nTest 2 passed: Attempt with empty strings\n");
	printf("ft_strjoin - s1:\"%s\" - s2:\"%s\" - return:\"%s\"\n", sa2, sb2, joined2);
	printf("     check - 1:\"%s\" - s2:\"%s\" - return:\"%s\"\n", sa2, sb2, correct2);
	free(joined2);

	// Test 3: Concatenate with NULL-byte
	const char		sa3[] = "pind\0a";
	const char		sb3[] = "kaas";
	char			*joined3 = ft_strjoin(sa3, sb3);
	char			correct3[] = "pind\0akaas";
	assert(!strncmp(joined3, correct3, ft_strlen(correct3)));
	printf("\nTest 3 passed: Concatenate with NULL-Byte\n");
	printf("ft_strjoin - s1:\"%s\" - s3:\"%s\" - return:\"%s\"\n", sa3, sb3, joined3);
	printf("     check - 1:\"%s\" - s3:\"%s\" - return:\"%s\"\n", sa3, sb3, correct3);
	free(joined3);
}
