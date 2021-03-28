/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassaak <mmassaak@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 22:10:41 by mmassaak          #+#    #+#             */
/*   Updated: 2021/03/28 01:25:49 by mmassaak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	char	*p;
	int		key;
	char	cifra;
	int		i;
	int		code;
	int		base_ascii_ref;

	p = (char *)malloc(100 * sizeof(char));
	strcpy(p, "Apenas um teste utilizando Cifra de Cesar");
	i = 0;
	key = 13;
	while (p[i] != '\0')
	{
		if (p[i] != ' ')
		{
			if (p[i] >= 'a' && p[i] <= 'z')
			{
				base_ascii_ref = 'a';
			}
			else
			{
				base_ascii_ref = 'A';
			}
			code = base_ascii_ref + ((p[i] + key - base_ascii_ref) % 26);
			cifra = (char)code;
			printf("%c", cifra);
		}
		else
		{
			printf(" ");
		}
		i++;
	}
	printf("\n");
	return (0);
}
