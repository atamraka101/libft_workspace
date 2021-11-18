/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:18:57 by atamraka          #+#    #+#             */
/*   Updated: 2021/11/18 22:11:02 by atamraka         ###   ########.fr       */
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
	int nb;

	i = 0;
	nb = n;
	if (n <= 0)
	{
		i++;
		if (n < 0)
			nb = -n;
		printf("value of n %d\n", n);
	}
	while (n != 0)
	{
		n = n/10;
		i++;
	}
	return (i);
}


static int lengthc(int n)
{
	int i;
	unsigned int copy;

	i = 0;
	copy = n;
	if (n <= 0)
	{
		i++;
		if (n < 0)
		{
			copy *= -1;
			printf("Copy %d\n", copy);
		}
	}

	while (copy != 0)
	{
		//printf("%d\n", copy);
		copy = copy / 10;
		//printf("%d\n", copy);
		i++;
		/*if (copy == 0)
		{
			i++;
		}*/
	}
	//printf("%d\n", i);
	//printf("Testing 3\n");
	printf("Length of %d = %d\n", n, i);
	return (i);
}

static char *set_string(char *a, int n, int i)
{
	unsigned int copy;

	copy = n;
	a[i--] = '\0';
	if (n == 0)
	{
		a[0] = '0';
		return (a);
	}
	if (n < 0)
	{
		a[0] = '-';
		printf("value of unsigned copy: %d\n", copy);
		copy *= -1;
		printf("value of copy: %d\n", copy);
		//i++;
	}
	//printf("value of n: %d\n", n);
	while (copy > 0)
	{
		a[i] = (copy % 10) + '0';
		copy = copy / 10;
		i--;
	}
	return (a);
}

char* ft_itoa(int n)
{
	int i;
	char *a;

	i = length(n);
	a = (char*)malloc((sizeof(char))*(i + 1));
	if (!a)
		return (NULL);
	//printf("Testing 1\n");
	set_string(a, n, i);
	//printf("%s", a);
	//puts(a);
	//printf("Testing f\n");
	return (a);
}
