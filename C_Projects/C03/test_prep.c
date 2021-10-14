===ex00===

int	main(void)
{
	char test0[81]="The Answer to the Ultimate Question of Life, the Universe, and Everything is 42.";
	char test1[81]="The Answer to the Ultimate question of Life, the Universe, and Everything is 42.";
	char *test0ptr;
	char *test1ptr;
	int result;

	test0ptr = &test0[0];
	test1ptr = &test1[0];
	result = 42;
	result = ft_strcmp(test0, test1);	
	printf("\nResult: %d\n", result);
}

===ex01===

int	main(void)
{
	char test0[81]="The Answer to the Ultimate Question of Life, the Universe, and Everything is 42.";
	char test1[81]="The Answer to the Ultimate Question of Life, the Universe, and Everything is 40.";
	char *test0ptr;
	char *test1ptr;
	int result;

	test0ptr = &test0[0];
	test1ptr = &test1[0];
	result = 42;
	result = ft_strncmp(test0, test1, 15);	
	printf("\nResult: %d\n", result);
	result = ft_strncmp(test0, test1, 81);	
	printf("\nResult: %d\n", result);
}

===ex02===


int	main(void)
{
	char test0[81]="The Answer to the Ultimate Question of Life,";
	char test1[36]=" the Universe, and Everything is 42.";
	char *test0ptr;
	char *test1ptr;

	test0ptr = &test0[0];
	test1ptr = &test1[0];
	ft_strncat(test0, test1, 40);	
	printf("\nResult: %s\n", test0);
}

===ex03===

int	main(void)
{
	char test0[81]="The Answer to the Ultimate Question of Life,";
	char test1[36]=" the Universe, and Everything is 42.";
	char *test0ptr;
	char *test1ptr;

	test0ptr = &test0[0];
	test1ptr = &test1[0];
	ft_strncat(test0, test1, 40);	
	printf("\nResult: %s\n", test0);

}