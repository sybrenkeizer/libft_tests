#include "test.h"
#include "libft.h"

static void		free_split(char **strings);
static int		compare_vector(char **result, const char **expected);
static void		print_vector(char **result, const char **expected);

void  test_ft_split(void)
{
	printf("\n\n\n");
	printf("# =============================================================\n");
	printf("# ft_split ====================================================\n");
	printf("# =============================================================\n");

	// Test 1: Basic test with space delimiter
	const char  *s1 = "this string has 5 words";
	char        c1 = ' ';
	const char  *expected1[] = { "this", "string", "has", "5", "words", NULL };
	char        **result1 = ft_split(s1, c1);
	assert(compare_vector(result1, expected1));
	printf("\nTest 1 passed: Basic test with space delimiter\n\n");
	print_vector(result1, expected1);
	free_split(result1);
	printf("\n");

	// Test 2: Multiple prepending delimiters
	const char  *s2 = ",,,this,string,has,5,words";
	char        c2 = ',';
	const char  *expected2[] = { "this", "string", "has", "5", "words", NULL };
	char        **result2 = ft_split(s2, c2);
	
	assert(compare_vector(result2, expected2));
	printf("\nTest 2 passed: Test with multiple prepending delimiters\n\n");
	print_vector(result2, expected2);
	free_split(result2);
	printf("\n");

 	// Test 3: Multiple appending delimiters
	const char  *s3 = "this,string,has,5,words,,,";
	char        c3 = ',';
	const char  *expected3[] = { "this", "string", "has", "5", "words", NULL };
	char        **result3 = ft_split(s3, c3);
	
	assert(compare_vector(result3, expected3));
	printf("\nTest 3 passed: Test with multiple appending delimiters\n\n");
	print_vector(result3, expected3);
	free_split(result3);
	printf("\n");

	// Test 4: String with nothing but delimiters
   const char  *s4 = ",,,,,,,,";
   char        c4 = ',';
   const char  *expected4[] = { NULL };
   char        **result4 = ft_split(s4, c4);

   assert(compare_vector(result4, expected4));
   printf("\nTest 4 passed: String with nothing but delimiters\n\n");
   print_vector(result4, expected4);
   free_split(result4);
   printf("\n");

	// Test 5: No string
	const char  *s5 = "";
	char        c5 = ',';
	const char  *expected5[] = { NULL };
	char        **result5 = ft_split(s5, c5);	
	assert(compare_vector(result5, expected5));
	printf("\nTest 5 passed: No string\n\n");
	print_vector(result5, expected5);
	free_split(result5);
	printf("\n");

	// Test 6: Delimiter does not occur
	const char  *s6 = "delimiter does not occur";
	char        c6 = 'x';
	const char  *expected6[] = { "delimiter does not occur", NULL };
	char        **result6 = ft_split(s6, c6);	
	assert(compare_vector(result6, expected6));
	printf("\nTest 6 passed: Delimiter does not occur\n\n");
	print_vector(result6, expected6);
	free_split(result6);
	printf("\n");
}

static void  free_split(char **strings)
{
  size_t  i;
  if (!strings)
    return ;
  i = 0;
  while (strings[i] != NULL)
  {
    free(strings[i]);
    i++;
  }
  free(strings);
}

static int compare_vector(char **result, const char **expected)
{
  size_t i = 0;
  if (!result && !expected)
      return (1);
  if (!result || !expected)
      return (0);
  while (result[i] && expected[i])
  {
    if (strcmp(result[i], expected[i]) != 0)
       return (0);
    i++;
  }
  return (result[i] == NULL && expected[i] == NULL);
}

static void  print_vector(char **result, const char **expected)
{
  size_t i = 0;
  while (result[i] && expected[i])
  {
		printf("Result:     \"%s\"\nExpected    \"%s\"\n", result[i], expected[i]);
		i++;
  }
}
