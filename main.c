/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamaral- <eamaral-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 12:15:26 by eamaral-          #+#    #+#             */
/*   Updated: 2025/11/01 18:50:16 by eamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <bsd/string.h>

typedef struct s_testcase 
{
	const char *name;
	void (*test_func)(void);
}	t_testcase;

void	test_ft_isalpha(void)
{
    int in = 66; // 'B'
    int mine = ft_isalpha(in);
    int original = isalpha(in);

    printf("ft_isalpha(%d) = %d | isalpha(%d) = %d\n\n", in, mine, in, original);
}

void	test_ft_isdigit(void)
{
	int	in;
	int	mine;
	int	original;

	in = 48; // '0'
	mine =  ft_isdigit(in);
	original = isdigit(in);
	printf("ft_isdigit(%d) = %d | isalpha(%d) = %d\n\n", in, mine, in, original);
}

void	test_ft_isalnum(void)
{
	int	in;
	int	mine;
	int	original;

	in = 50; // '2'
	mine = ft_isalnum(in);
	original = isalnum(in);
	printf("ft_isalnum(%d) = %d | isalnum(%d) = %d\n\n", in, mine, in, original);
}

void	test_ft_isascii(void)
{
	int	in;
	int	mine;
	int	original;

	in = 70;
	mine = ft_isascii(in);
	original = isascii(in);
	printf("ft_isascii(%d) = %d | isascii(%d) = %d\n\n", in, mine, in, original);
}

void	test_ft_isprint(void)
{
	int	in;
	int	mine;
	int	original;
	
	in = 32;
	mine = ft_isprint(in);
	original = isprint(in);
	printf("ft_isprint(%d) = %d | isprint(%d) = %d\n\n", in, mine, in, original);
}

void	test_ft_strlen(void)
{
	const char	*str;
	size_t	mine;
	size_t	original;

	str = "Test";
	mine = ft_strlen(str);
	original = strlen(str);
	printf("ft_strlen(\"%s\") = %zu | strlen(\"%s\") = %zu\n\n", str, mine, str, original);
}

void	test_ft_memcpy(void)
{
	char	inmine_src[4] = "abc";
	char	inmine_dst[4] = "cba";
	char	inori_src[4] = "abc";
	char	inori_dst[4] = "cba";

	printf("ft_memcpy = %s", (char *)ft_memcpy(inmine_dst, inmine_src, 4));
	printf(" | memcpy = %s", (char *)memcpy(inori_dst, inori_src, 4));
	printf("\nThe memcpy() function returns a pointer to dest\n\n");
}

void	test_ft_memset(void)
{
	char	testmine[5] = "4321";
	char	testori[5] = "4321";

	printf("Before ft_memset = \"%s\" | Before memset = \"%s\"\n\n", testmine, testori);
	ft_memset(testmine, '*', 4);
	memset(testori, '*', 4);
	printf("After ft_memset = \"%s\" | After memset = \"%s\"\n\n", testmine, testori);
}

void	test_ft_bzero(void)
{
	char	testmine[18] = "Null here -> 1234";
	char	testori[18] = "Null here -> 1234";

	printf("Before ft_bzero = \"%s\" | Before bzero = \"%s\"\n\n", testmine, testori);
	ft_bzero(testmine + 13, 4);
	bzero(testori + 13, 4);
	printf("After ft_bzero = \"%s\" | After bzero = \"%s\"\n\n", testmine, testori);
}

void	test_ft_memmove(void)
{
	char	testmine[6] = "abcde";
	char	testori[6] = "abcde";

	printf("Before ft_ memmove : | Before memmove :\n\n");
	printf("Str -> %s	     | Str -> %s\n", testmine, testori);
	ft_memmove(testmine + 2, testmine, 3);
	ft_memmove(testori + 2, testori, 3);
	printf("After ft_ memmove : | After memmove :\n\n");
	printf("Str -> %s	     | Str -> %s\n\n", testmine, testori);
}

void	test_ft_strlcpy(void)
{
	char	minesrc[13] = "Hello World!";
	char	minedst[13];
	char	orisrc[13] = "Hello World!";
	char	oridst[13];

	printf("ft_strlcpy = %zu | ", ft_strlcpy(minedst, minesrc, sizeof(minedst)));
	printf("strlcpy = %zu\n\n", strlcpy(oridst, orisrc, sizeof(oridst)));
	printf("ft_strlcpy dest -> %s | strlcpy dest -> %s\n\n", minedst, oridst);
}

int	main(void)
{
	//struct
	t_testcase tests[] = {
	{"ft_isalpha", test_ft_isalpha},
	{"ft_isdigit", test_ft_isdigit},
	{"ft_isalnum", test_ft_isalnum},
	{"ft_isalnum", test_ft_isascii},
	{"ft_isprint", test_ft_isprint},
	{"ft_strlen", test_ft_strlen},
	{"ft_memcpy", test_ft_memcpy},
	{"ft_memset", test_ft_memset},
	{"ft_bzero", test_ft_bzero},
	{"ft_memmove", test_ft_memmove},
	{"ft_strlcpy", test_ft_strlcpy},
	};
	
	int	num_tests;
	int	i;

	num_tests = sizeof(tests) / sizeof(tests[0]);
	i = 0;
	while (i < num_tests)
	{
		printf("\n=== Test : %s ===\n\n", tests[i].name);
		tests[i].test_func();
		printf("========================================================\n");
		i++;
	}
}
