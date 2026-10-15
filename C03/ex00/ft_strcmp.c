/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjebali <mjebali@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 12:12:38 by mjebali           #+#    #+#             */
/*   Updated: 2026/02/19 12:44:32 by mjebali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

/*int main(void)
{
	char s1[] = "holi";
	char s2[] = "holaa";
	char result;
	int resultado = ft_strcmp(s1, s2);
	if (resultado < 0)
	{
		resultado = resultado * (-1);
		write(1, "-", 1);
	}
	result = resultado + '0';
	write (1, &result, 1);
	return (0);
}*/
