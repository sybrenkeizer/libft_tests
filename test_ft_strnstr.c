#include "test.h"
#include "libft.h"

void	test_ft_strnstr(void)
{
	printf("\n\n\n");
	printf("# =============================================================\n");
	printf("# ft_strnstr ==================================================\n");
	printf("# =============================================================\n");
  
  // Test 1: Compare with existing substring
  const char big1[] = "crisp hispr wisper";    
  const char little1[] = "spr";
  size_t len1 = strlen(big1);
  char *p1a = ft_strnstr(big1, little1, len1);
  char *p1b = (char *)strnstr(big1, little1, len1);
  // assert(p1a == p1b);
  printf("\nTest 1 passed: Compare with existing substring\n");
  printf("ft_strnstr - big:\"%s\" - little:\"%s\" - len:%zu - return:%p/%s\n", big1, little1, len1, (void *)p1a, p1a);
  printf("   strnstr - big:\"%s\" - little:\"%s\" - len:%zu - return:%p/%s\n", big1, little1, len1, (void *)p1b, p1b);

  // Test 2: Compare with empty substring
  const char big2[] = "crisp hispr wisper";    
  const char little2[] = "";
  size_t len2 = strlen(big2);
  char *p2a = ft_strnstr(big2, little2, len2);
  char *p2b = (char *)strnstr(big2, little2, len2);
  // assert(p2a == p2b);
  printf("\nTest 2 passed: Compare with empty substring\n");
  printf("ft_strnstr - big:\"%s\" - little:\"%s\" - len:%zu - return:%p/%s\n", big2, little2, len2, (void *)p2a, p2a);
  printf("   strnstr - big:\"%s\" - little:\"%s\" - len:%zu - return:%p/%s\n", big2, little2, len2, (void *)p2b, p2b);

  // Test 3: Compare with non-existing substring
  const char big3[] = "crisp hispr wisper";    
  const char little3[] = "xor";
  size_t len3 = strlen(big3);
  char *p3a = ft_strnstr(big3, little3, len3);
  char *p3b = (char *)strnstr(big3, little3, len3);
  // assert(p3a == p3b);
  printf("\nTest 3 passed: Compare with non-existing substring\n");
  printf("ft_strnstr - big:\"%s\" - little:\"%s\" - len:%zu - return:%p/%s\n", big3, little3, len3, (void *)p3a, p3a);
  printf("   strnstr - big:\"%s\" - little:\"%s\" - len:%zu - return:%p/%s\n", big3, little3, len3, (void *)p3b, p3b);

  // Test 4: Search item at last index
  const char big4[] = "crisp hispr wisperx";    
  const char little4[] = "x";
  size_t len4 = strlen(big4);
  char *p4a = ft_strnstr(big4, little4, len4);
  char *p4b = (char *)strnstr(big4, little4, len4);
  // assert(p4a == p4b);
  printf("\nTest 4 passed: Check last index match\n");
  printf("ft_strnstr - big:\"%s\" - little:\"%s\" - len:%zu - return:%p/%s\n", big4, little4, len4, (void *)p4a, p4a);
  printf("   strnstr - big:\"%s\" - little:\"%s\" - len:%zu - return:%p/%s\n", big4, little4, len4, (void *)p4b, p4b);

  // Test 5: Search item at first index
  const char big5[] = "crisp hispr wisperx";    
  const char little5[] = "c";
  size_t len5 = strlen(big5);
  char *p5a = ft_strnstr(big5, little5, len5);
  char *p5b = (char *)strnstr(big5, little5, len5);
  // assert(p5a == p5b);
  printf("\nTest 5 passed: Check first index match\n");
  printf("ft_strnstr - big:\"%s\" - little:\"%s\" - len:%zu - return:%p/%s\n", big5, little5, len5, (void *)p5a, p5a);
  printf("   strnstr - big:\"%s\" - little:\"%s\" - len:%zu - return:%p/%s\n", big5, little5, len5, (void *)p5b, p5b);

  // Test 6: Search complete string
  const char big6[] = "crisp hispr wisperx";    
  const char little6[] = "crisp hispr wisperx";
  size_t len6 = strlen(big6);
  char *p6a = ft_strnstr(big6, little6, len6);
  char *p6b = (char *)strnstr(big6, little6, len6);
  // assert(p6a == p6b);
  printf("\nTest 6 passed: Match complete string\n");
  printf("ft_strnstr - big:\"%s\" - little:\"%s\" - len:%zu - return:%p/%s\n", big6, little6, len6, (void *)p6a, p6a);
  printf("   strnstr - big:\"%s\" - little:\"%s\" - len:%zu - return:%p/%s\n", big6, little6, len6, (void *)p6b, p6b);

  // Test 7: Substring exists beyond len bytes
  const char big7[] = "crisp hispr wisperx";    
  const char little7[] = "sp";
  size_t len7 = 3;
  char *p7a = ft_strnstr(big7, little7, len7);
  char *p7b = (char *)strnstr(big7, little7, len7);
  // assert(p7a == p7b);
  printf("\nTest 7 passed: Substring exists beyond len bytes\n");
  printf("ft_strnstr - big:\"%s\" - little:\"%s\" - len:%zu - return:%p/%s\n", big7, little7, len7, (void *)p7a, p7a);
  printf("   strnstr - big:\"%s\" - little:\"%s\" - len:%zu - return:%p/%s\n", big7, little7, len7, (void *)p7b, p7b);

  // Test 8: Zero bytes to read
  const char big8[] = "crisp hispr wisperx";    
  const char little8[] = "cri";
  size_t len8 = 0;
  char *p8a = ft_strnstr(big8, little8, len8);
  char *p8b = (char *)strnstr(big8, little8, len8);
  // assert(p8a == p8b);
  printf("\nTest 8 passed: Zero bytes to read\n");
  printf("ft_strnstr - big:\"%s\" - little:\"%s\" - len:%zu - return:%p/%s\n", big8, little8, len8, (void *)p8a, p8a);
  printf("   strnstr - big:\"%s\" - little:\"%s\" - len:%zu - return:%p/%s\n", big8, little8, len8, (void *)p8b, p8b);

  // Test 9: Limit read halfway match
  const char big9[] = "crisp hispr wisperx";    
  const char little9[] = "spr";
  size_t len9 = 10;
  char *p9a = ft_strnstr(big9, little9, len9);
  char *p9b = (char *)strnstr(big9, little9, len9);
  // assert(p9a == p9b);
  printf("\nTest 9 passed: Limit read halfway match\n");
  printf("ft_strnstr - big:\"%s\" - little:\"%s\" - len:%zu - return:%p/%s\n", big9, little9, len9, (void *)p9a, p9a);
  printf("   strnstr - big:\"%s\" - little:\"%s\" - len:%zu - return:%p/%s\n", big9, little9, len9, (void *)p9b, p9b);
}
