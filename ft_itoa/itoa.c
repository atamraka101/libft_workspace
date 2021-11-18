/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:18:57 by atamraka          #+#    #+#             */
/*   Updated: 2021/11/18 13:31:33 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** integer to string
** allocate with malloc for the new string ending with '\0'
** negative nos. are supported
** returns string representing the integer passed as argument
*/
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

static int length(int n)
{
	int i;
	int copy;

	i = 0;
	copy = n;
	if (copy <= 0)
		i++;
	while (copy != 0)
	{
		printf("%d\n", copy);
		copy = copy / 10;
		printf("%d\n", copy);
		i++;
		/*if (copy == 0)
		{
			i++;
		}*/
	}
	printf("%d\n", i);
	//printf("Testing 3\n");
	return (i);
}

static char *set_string(char *a, int n, int i)
{
	//printf("%d\n", n);
	//printf("%d\n", i);
	a[i--] = '\0';
	printf("%d\n", i);
	//printf("Testing d\n");
	if (n == 0)
	{
		a[0] = '0';
		return (a);
	}
	//printf("Testing 2\n");
	if (n < 0)
	{
		a[0] = '-';
		n = n * (-1);/////////////////////
		printf("Testing \n");
		printf("%d\n", n);

	}
	while (n > 0)
	{
		a[i] = (n % 10) + '0';
		n = n / 10;
		printf("Testing \n");
		i--;
	}
	return (a);
}

char* ft_itoa(int n)
{
	int i;
	char *a;

	i = length(n);
	a = (char*)malloc((sizeof(char))*(i+1));
	if (!a)
		return NULL;
	//printf("Testing 1\n");
	set_string(a, n, i);
	printf("%s", a);
	//puts(a);
	//printf("Testing f\n");
	return (a);
}
