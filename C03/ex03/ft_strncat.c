/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjebali <mjebali@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 14:32:52 by mjebali           #+#    #+#             */
/*   Updated: 2026/02/19 14:53:15 by mjebali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int main(void)
{
        char src[] = "holaa";
        char dest[20] = "holi";
	unsigned int nb = 3;
        //unsigned int n;
        //char result;
        //result = ft_strcmp(s1, s2) + '0';
        printf ("%s", ft_strncat(dest, src, 3));
        return (0);
}*/
