/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassaak <mmassaak@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 18:43:49 by mmassaak          #+#    #+#             */
/*   Updated: 2021/03/27 20:50:16 by mmassaak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int	main(void)
{
	int current_number;
	int random_number;
	int round;

	srand(time(NULL));
	random_number = rand() % 1024;
	current_number = -1;
	round = 0;
	while (random_number != current_number)
	{
		system("clear");
		printf("tentativa numero: %d\n", round + 1);
		printf("Informe um numero inteiro: ");
		scanf("%d", &current_number);
		round++;
		if (current_number == random_number)
		{
			system("clear");
			printf("* Você acertou o numero!\n");
			printf("* E utilizou %d tentativas\n", round);
			break ;
		}
		else if (current_number < random_number)
		{
			printf("Escolha um numero MAIOR\n");
		}
		else
		{
			printf("Escolha um numero MENOR!\n");
		}
	}
	return (0);
}
