/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjebali <mjebali@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 17:42:08 by mjebali           #+#    #+#             */
/*   Updated: 2026/02/18 17:51:59 by mjebali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (str[0] != '\0' && str[0] >= 97 && str[0] <= 122)
	{
		str[0] = str[0] - 32;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		if ((!((str[i - 1] >= 65 && str[i - 1] <= 90)
					|| (str[i - 1] >= 97 && str[i - 1] <= 122)
					|| (str[i - 1] >= 48 && str[i - 1] <= 57)))
			&& (str[i] >= 97 && str[i] <= 122))
		{
			str[i] = str[i] -32;
		}
		i++;
	}
	return (str);
}

/*int main(void)
{
char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
int i;
i = 0;
ft_strcapitalize(str);
while (str[i] != '\0')
{
write (1, &str[i], 1);
i++;
}
write (1, "\n", 1);
return (0);
}*/
