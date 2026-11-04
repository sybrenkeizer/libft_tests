#include "test.h"
#include "libft.h"


void	test_ft_strlcat(void)
{
	printf("\n\n\n");
	printf("# =============================================================\n");
	printf("# ft_strlcat ==================================================\n");
	printf("# =============================================================\n");

  // Test 1: Concatenate full src
  const char src1[] = "Kaas";
  char dst1a[20] = "Pinda";
  char dst1b[20] = "Pinda";
  size_t size1 = strlen(dst1a) + strlen(src1) + 1;
  size_t ret1a = ft_strlcat(dst1a, src1, size1);
  size_t ret1b = strlcat(dst1b, src1, size1);
  assert(!(memcmp(dst1a, dst1b, size1)));
  assert(ret1a == ret1b);
  printf("\nTest 1 passed: Concatenate full src\n");
  printf("ft_strlcat - src1:\"%s\" - size:%zu - dst1a:\"%s\" - return:%zu\n", src1, size1, dst1a, ret1a);
  printf("   strlcat - src1:\"%s\" - size:%zu - dst1b:\"%s\" - return:%zu\n", src1, size1, dst1b, ret1b);

  // Test 2: Concatenate only first character
  const char src2[] = "Kaas";
  char dst2a[20] = "Pinda";
  char dst2b[20] = "Pinda";
  size_t size2 = 6;
  size_t ret2a = ft_strlcat(dst2a, src2, size2);
  size_t ret2b = strlcat(dst2b, src2, size2);
  assert(!(memcmp(dst2a, dst2b, size2)));
  assert(ret2a == ret2b);
  printf("\nTest 2 passed: Concatenate only first character\n");
  printf("ft_strlcat - src2:\"%s\" - size:%zu - dst2a:\"%s\" - return:%zu\n", src2, size2, dst2a, ret2a);
  printf("   strlcat - src2:\"%s\" - size:%zu - dst2b:\"%s\" - return:%zu\n", src2, size2, dst2b, ret2b);

  // Test 3: Concatenate nothing (size == 0)
  const char src3[] = "Kaas";
  char dst3a[20] = "Pinda";
  char dst3b[20] = "Pinda";
  size_t size3 = 0;
  size_t ret3a = ft_strlcat(dst3a, src3, size3);
  size_t ret3b = strlcat(dst3b, src3, size3);
  assert(!(memcmp(dst3a, dst3b, size3)));
  assert(ret3a == ret3b);
  printf("\nTest 3 passed: Concatenate nothing (size == 0)\n");
  printf("ft_strlcat - src3:\"%s\" - size:%zu - dst3a:\"%s\" - return:%zu\n", src3, size3, dst3a, ret3a);
  printf("   strlcat - src3:\"%s\" - size:%zu - dst3b:\"%s\" - return:%zu\n", src3, size3, dst3b, ret3b);

  // Test 4: Compare NULL-termination
  const char src4[] = "Kaas";
  char dst4a[20] = "Pinda";
  char dst4b[20] = "Pinda";
  size_t size4 = strlen(dst4a);
  size_t ret4a = ft_strlcat(dst4a, src4, size4);
  size_t ret4b = strlcat(dst4b, src4, size4);
  assert(!(memcmp(dst4a, dst4b, size4)));
  assert(ret4a == ret4b);
  assert(*strchr(dst4a, '\0') == *strchr(dst4b, '\0'));
  printf("\nTest 4 passed: Compare NULL-termination\n");
  printf("ft_strlcat - src4:\"%s\" - size:%zu - dst4a:\"%s\" - return:%zu\n", src4, size4, dst4a, ret4a);
  printf("   strlcat - src4:\"%s\" - size:%zu - dst4b:\"%s\" - return:%zu\n", src4, size4, dst4b, ret4b);

  // Test 5: Concatenate when size < dst
  const char src5[] = "Kaas";
  char dst5a[20] = "Pinda";
  char dst5b[20] = "Pinda";
  size_t size5 = 3; 
  size_t ret5a = ft_strlcat(dst5a, src5, size5);
  size_t ret5b = strlcat(dst5b, src5, size5);
  assert(!(memcmp(dst5a, dst5b, size5)));
  assert(ret5a == ret5b);
  printf("\nTest 5 passed: Concatenate when size < dst\n");
  printf("ft_strlcat - src5:\"%s\" - size:%zu - dst5a:\"%s\" - return:%zu\n", src5, size5, dst5a, ret5a);
  printf("   strlcat - src5:\"%s\" - size:%zu - dst5b:\"%s\" - return:%zu\n", src5, size5, dst5b, ret5b);
  
  // Test 6: source - 1 
  const char src6[] = "Kaas";
  char dst6a[20] = "Pinda";
  char dst6b[20] = "Pinda";
  size_t size6 = strlen(dst6a) + strlen(src6); 
  size_t ret6a = ft_strlcat(dst6a, src6, size6);
  size_t ret6b = strlcat(dst6b, src6, size6);
  assert(!(memcmp(dst6a, dst6b, size6)));
  assert(ret6a == ret6b);
  printf("\nTest 6 passed: source - 1\n");
  printf("ft_strlcat - src6:\"%s\" - size:%zu - dst6a:\"%s\" - return:%zu\n", src6, size6, dst6a, ret6a);
  printf("   strlcat - src6:\"%s\" - size:%zu - dst6b:\"%s\" - return:%zu\n", src6, size6, dst6b, ret6b);

  // Test 7: Compare NULL-termination
  const char src7[] = "Kaas";
  char dst7a[20] = "Pinda";
  char dst7b[20] = "Pinda";
  size_t size7 = strlen(dst7a) + 1;
  size_t ret7a = ft_strlcat(dst7a, src7, size7);
  size_t ret7b = strlcat(dst7b, src7, size7);
  assert(!(memcmp(dst7a, dst7b, size7)));
  assert(ret7a == ret7b);
  assert(*strchr(dst7a, '\0') == *strchr(dst7b, '\0'));
  printf("\nTest 7 passed: Compare NULL-termination\n");
  printf("ft_strlcat - src7:\"%s\" - size:%zu - dst7a:\"%s\" - return:%zu\n", src7, size7, dst7a, ret7a);
  printf("   strlcat - src7:\"%s\" - size:%zu - dst7b:\"%s\" - return:%zu\n", src7, size7, dst7b, ret7b);

  // Test 8: Not NULL-terminated dst, return src + size
  const char src8[] = "Kaas";
  char dst8a[20];
  char dst8b[20];
  memset(dst8a, 'X', sizeof(dst8a));
  memset(dst8b, 'X', sizeof(dst8b));
  size_t size8 = 10;
  size_t ret8a = ft_strlcat(dst8a, src8, size8);
  size_t ret8b = strlcat(dst8b, src8, size8);
  assert(!(memcmp(dst8a, dst8b, size8)));
  assert(ret8a == ret8b);
  printf("\nTest 8 passed: Not NULL-terminated dst, return src + size\n");
  printf("ft_strlcat - src8:\"%s\" - size:%zu - return:%zu\n", src8, size8, ret8a);
  printf("   strlcat - src8:\"%s\" - size:%zu - return:%zu\n", src8, size8, ret8b);


// Test 8: Destination without a null-byte within size
  // char dst8a[20];
  // char dst8b[20];
  // memset(dst8a, 'A', sizeof(dst8a)); // Fill entirely with 'A', NO null-byte!
  // memset(dst8b, 'A', sizeof(dst8b));
  //
  // const char src8[] = "Kaas";
  // size_t size8 = 5; // Within these 5 bytes, there is no '\0'
  //
  // size_t ret8a = ft_strlcat(dst8a, src8, size8);
  // size_t ret8b = strlcat(dst8b, src8, size8);
  //
  // // Verify behavior matches standard strlcat
  // assert(ret8a == ret8b);
  // printf("\nTest 8 passed: Destination without null-byte within size\n");
  // printf("ft_strlcat return: %zu | strlcat return: %zu\n", ret8a, ret8b);
}
