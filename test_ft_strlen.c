#include "test.h"
#include "libft.h"

void	test_ft_strlen(void)
{
	printf("\n\n\n");
	printf("# =============================================================\n");
	printf("# ft_strlen ===================================================\n");
	printf("# =============================================================\n");

  // Test 1: Compare string length
  char buf1[] = "123456";
  size_t len1a = ft_strlen(buf1);
  size_t len1b = strlen(buf1);
  assert(len1a == len1b);
  printf("\nTest 1 passed: Compare string length\n");
  printf("ft_strlen - buf1:\"%s\" - return:%zu\n", buf1, len1a);
  printf("   strlen - buf1:\"%s\" - return:%zu\n", buf1, len1b);

  // Test 2: Compare empty string
  char buf2[] = "";
  size_t len2a = ft_strlen(buf2);
  size_t len2b = strlen(buf2);
  assert(len2a == len2b);
  printf("\nTest 2 passed: Compare empty string\n");
  printf("ft_strlen - buf2:\"%s\" - return:%zu\n", buf2, len2a);
  printf("   strlen - buf2:\"%s\" - return:%zu\n", buf2, len2b);

  // Test 3: Calculate string with NULL-byte 
  char buf3[] = "abc\0def";
  size_t len3a = ft_strlen(buf3);
  size_t len3b = strlen(buf3);
  assert(len3a == len3b);
  printf("\nTest 3 passed: Calculate string with NULL-byte\n");
  printf("ft_strlen - buf3:\"%s\" - return:%zu\n", buf3, len3a);
  printf("   strlen - buf3:\"%s\" - return:%zu\n", buf3, len3b);
}
