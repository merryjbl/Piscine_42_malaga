/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjebali <mjebali@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 18:40:29 by mjebali           #+#    #+#             */
/*   Updated: 2026/02/17 11:25:28 by mjebali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			i ++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*int main() {
  char str[] = "";
  //ft_str_is_alpha(str);
  printf ("%d", ft_str_is_alpha(str));

  return 0;
}*/
