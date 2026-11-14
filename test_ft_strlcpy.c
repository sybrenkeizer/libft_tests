#include "test.h"
#include "libft.h"
#include <bsd/string.h>

void	test_ft_strlcpy(void)
{
	printf("\n\n\n");
	printf("# =============================================================\n");
	printf("# ft_strlcpy ==================================================\n");
	printf("# =============================================================\n");

  // Test 1: Copy full src (src length + 1 for NULL-byte)
  const char src1[] = "Source";
  char dst1a[20] = "XXXXXXXXXXXXXXXXXX";
  char dst1b[20] = "XXXXXXXXXXXXXXXXXX";
  size_t size1 = strlen(src1) + 1;
  size_t ret1a = ft_strlcpy(dst1a, src1, size1);
  size_t ret1b = strlcpy(dst1b, src1, size1);
  assert(!(strncmp(dst1a, dst1b, sizeof(dst1a))));
  assert(ret1a == strlen(src1) && ret1a == ret1b);
  printf("\nTest 1 passed: Copy full src (src length + 1 for NULL-byte)\n");
  printf("ft_strlcpy - src1:\"%s\" - size:%zu - dst1a:\"%s\" - return:%zu\n", src1, size1, dst1a, ret1a);
  printf("   strlcpy - src1:\"%s\" - size:%zu - dst1a:\"%s\" - return:%zu\n", src1, size1, dst1b, ret1b);
  
  // Test 2: Copy limited src
  const char src2[] = "Source";
  char dst2a[20] = "XXXXXXXXXXXXXXXXXX";
  char dst2b[20] = "XXXXXXXXXXXXXXXXXX";
  size_t size2 = 2;
  size_t ret2a = ft_strlcpy(dst2a, src2, size2);
  size_t ret2b = strlcpy(dst2b, src2, size2);
  assert(!(strncmp(dst2a, dst2b, sizeof(dst2a))));
  assert(ret2a == strlen(src2) && ret2a == ret2b);
  printf("\nTest 2 passed: Copy partial src due size < src length\n");
  printf("ft_strlcpy - src2:\"%s\" - size:%zu - dst2a:\"%s\" - return:%zu\n", src2, size2, dst2a, ret2a);
  printf("   strlcpy - src2:\"%s\" - size:%zu - dst2a:\"%s\" - return:%zu\n", src2, size2, dst2b, ret2b);

  // Test 3: Copy nothing as size = 0
  const char src3[] = "Source";
  char dst3a[20] = "XXXXXXXXXXXXXXXXXX";
  char dst3b[20] = "XXXXXXXXXXXXXXXXXX";
  size_t size3 = 0;
  size_t ret3a = ft_strlcpy(dst3a, src3, size3);
  size_t ret3b = strlcpy(dst3b, src3, size3);
  assert(!(strncmp(dst3a, dst3b, sizeof(dst3a))));
  assert(ret3a == strlen(src3) && ret3a == ret3b);
  printf("\nTest 3 passed: Copy nothing as size = 0\n");
  printf("ft_strlcpy - src3:\"%s\" - size:%zu - dst3a:\"%s\" - return:%zu\n", src3, size3, dst3a, ret3a);
  printf("   strlcpy - src3:\"%s\" - size:%zu - dst3a:\"%s\" - return:%zu\n", src3, size3, dst3b, ret3b);

  // Test 4: Copy partial src with starting index past 0
  const char src4[] = "Source";
  char dst4a[20] = "XXXXXXXXXXXXXXXXXX";
  char dst4b[20] = "XXXXXXXXXXXXXXXXXX";
  size_t size4 = 2;
  size_t ret4a = ft_strlcpy(dst4a, src4 + 3, size4);
  size_t ret4b = strlcpy(dst4b, src4 + 3, size4);
  assert(!(strncmp(dst4a, dst4b, sizeof(dst4a))));
  assert((ret4a == strlen(src4) - 3) && ret4a == ret4b);
  printf("\nTest 4 passed: Copy partial src with starting index past 0\n");
  printf("ft_strlcpy - src4:\"%s\" - size:%zu - dst4a:\"%s\" - return:%zu\n", src4 + 3, size4, dst4a, ret4a);
  printf("   strlcpy - src4:\"%s\" - size:%zu - dst4a:\"%s\" - return:%zu\n", src4 + 3, size4, dst4b, ret4b);
}

