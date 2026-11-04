#include "test.h"
#include "libft.h"

void	test_ft_strncmp(void)
{
	printf("\n\n\n");
	printf("# =============================================================\n");
	printf("# ft_strncmp ==================================================\n");
	printf("# =============================================================\n");

  // Test 1: Identical strings
  const char buf1a[] = "123456";
  const char buf1b[] = "123456";
  size_t n1 = strlen(buf1a);
  int dif1a = ft_strncmp(buf1a, buf1b, n1);
  int dif1b = strncmp(buf1b, buf1b, n1);
  assert(dif1a == dif1b);
  printf("\nTest 1 passed: Identical strings\n");
  printf("ft_strncmp - s1:\"%s\" - s2:\"%s\" - n:%zu - return:%i\n", buf1a, buf1b, n1, dif1a);
  printf("   strncmp - s1:\"%s\" - s2:\"%s\" - n:%zu - return:%i\n", buf1a, buf1b, n1, dif1b);

  // Test 2: Non-identical strings
  const char buf2a[] = "123456";
  const char buf2b[] = "122456";
  size_t n2 = strlen(buf2a);
  int dif2a = ft_strncmp(buf2a, buf2b, n2);
  int dif2b = strncmp(buf2a, buf2b, n2);
  assert(dif2a == dif2b);
  printf("\nTest 2 passed: Non-identical strings\n");
  printf("ft_strncmp - s1:\"%s\" - s2:\"%s\" - n:%zu - return:%i\n", buf2a, buf2b, n2, dif2a);
  printf("   strncmp - s1:\"%s\" - s2:\"%s\" - n:%zu - return:%i\n", buf2a, buf2b, n2, dif2b);

  // Test 3: Compare only up to first index
  const char buf3a[] = "123456";
  const char buf3b[] = "193456";
  size_t n3 = 1;
  int dif3a = ft_strncmp(buf3a, buf3b, n3);
  int dif3b = strncmp(buf3a, buf3b, n3);
  assert(dif3a == dif3b);
  printf("\nTest 3 passed: Compare up to first index\n");
  printf("ft_strncmp - s1:\"%s\" - s2:\"%s\" - n:%zu - return:%i\n", buf3a, buf3b, n3, dif3a);
  printf("   strncmp - s1:\"%s\" - s2:\"%s\" - n:%zu - return:%i\n", buf3a, buf3b, n3, dif3b);

  // Test 4: No bytes to compare, n = 0
  const char buf4a[] = "123456";
  const char buf4b[] = "193456";
  size_t n4 = 0;
  int dif4a = ft_strncmp(buf4a, buf4b, n4);
  int dif4b = strncmp(buf4a, buf4b, n4);
  assert(dif4a == dif4b);
  printf("\nTest 4 passed: No bytes to compare, n = 0\n");
  printf("ft_strncmp - s1:\"%s\" - s2:\"%s\" - n:%zu - return:%i\n", buf4a, buf4b, n4, dif4a);
  printf("   strncmp - s1:\"%s\" - s2:\"%s\" - n:%zu - return:%i\n", buf4a, buf4b, n4, dif4b);
  
  // Test 5: Compare with empty strings
  const char buf5a[] = "";
  const char buf5b[] = "";
  size_t n5 = 1;
  int dif5a = ft_strncmp(buf5a, buf5b, n5);
  int dif5b = strncmp(buf5a, buf5b, n5);
  assert(dif5a == dif5b);
  printf("\nTest 5 passed: Compare with empty strings\n");
  printf("ft_strncmp - s1:\"%s\" - s2:\"%s\" - n:%zu - return:%i\n", buf5a, buf5b, n5, dif5a);
  printf("   strncmp - s1:\"%s\" - s2:\"%s\" - n:%zu - return:%i\n", buf5a, buf5b, n5, dif5b);

  // Test 6: Check use unsigned char
  const char buf6a[] = "test\200";
  const char buf6b[] = "test\0";
  size_t n6 = 6;
  int dif6a = ft_strncmp(buf6a, buf6b, n6);
  int dif6b = strncmp(buf6a, buf6b, n6);
  assert(dif6a > 0 && dif6b > 0);
  printf("\nTest 6 passed: Check use unsigned char\n");
  printf("ft_strncmp - s1:\"%s\" - s2:\"%s\" - n:%zu - return:%i\n", buf6a, buf6b, n6, dif6a);
  printf("   strncmp - s1:\"%s\" - s2:\"%s\" - n:%zu - return:%i\n", buf6a, buf6b, n6, dif6b);
}
