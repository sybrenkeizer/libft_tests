
#include "test.h"
#include "libft.h"


void  test_ft_itoa(void)
{
	printf("\n\n\n");
	printf("# =============================================================\n");
	printf("# ft_itoa =====================================================\n");
	printf("# =============================================================\n");

	// Test 1: Check INT_MAX 
	int	n1 = INT_MAX;
	char *s1 = ft_itoa(n1);
	char s1check[] = "2147483647";
	assert(!memcmp(s1, s1check, sizeof(s1check)));
	printf("\nTest 1 passed: Convert INT_MAX (check positive margin)\n");
	printf("ft_itoa: n:%i - return:%s\n", n1, s1);
	free(s1);

	// Test 2: Check INT_MIN 
	int	n2 = INT_MIN;
	char *s2 = ft_itoa(n2);
	char s2check[] = "-2147483648";
	assert(!memcmp(s2, s2check, sizeof(s2check)));
	printf("\nTest 2 passed: Convert INT_MIN (check negative margin)\n");
	printf("ft_itoa: n:%i - return:%s\n", n2, s2);
	free(s2);

	// Test 3: Check zero 
	int	n3 = 0;
	char *s3 = ft_itoa(n3);
	char s3check[] = "0";
	assert(!memcmp(s3, s3check, sizeof(s3check)));
	printf("\nTest 3 passed: Convert 0\n");
	printf("ft_itoa: n:%i - return:%s\n", n3, s3);
	free(s3);

	// Test 4: Check margin positive
	int	n4 = 1;
	char *s4 = ft_itoa(n4);
	char s4check[] = "1";
	assert(!memcmp(s4, s4check, sizeof(s4check)));
	printf("\nTest 4 passed: Convert 1 (check positive margin)\n");
	printf("ft_itoa: n:%i - return:%s\n", n4, s4);
	free(s4);
	
	// Test 5: Check margin negative 
	int	n5 = -1;
	char *s5 = ft_itoa(n5);
	char s5check[] = "-1";
	assert(!memcmp(s5, s5check, sizeof(s5check)));
	printf("\nTest 5 passed: Convert -1 (check negative margin)\n");
	printf("ft_itoa: n:%i - return:%s\n", n5, s5);
	free(s5);
}	
