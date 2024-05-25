/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youchiya <youchiya@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:54:39 by youchiya          #+#    #+#             */
/*   Updated: 2024/03/12 09:00:28 by youchiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	check;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			check = ft_strncmp(str + i, to_find, ft_strlen(to_find));
			if (check == 0)
			{
				return (str + i);
			}
		}
		i++;
	}
	return (0);
}

// #include        <stdio.h>
// #include        <string.h>
// int main(void)
// {
//         char    s1[] = "abcdefghijklmn";
//         char    s2[] = "defgh";
//         char    s3[] = "xyz";
//         char    s4[] = "abcdefghijklmnopqr";
//         char    s5[] = "";
//         char    *sp;

// 		sp = strstr(s1,s2);
//         printf("expected output : %s\n",sp);
//         sp = ft_strstr(s1,s2);
//         printf("actual output   : %s\n\n",sp);

// 		sp = strstr(s1,s3);
//         printf("expected output : %s\n",sp);
//         sp = ft_strstr(s1,s3);
//         printf("actual output   : %s\n\n",sp);

// 		sp = strstr(s1,s4);
//         printf("expected output : %s\n",sp);
//         sp = ft_strstr(s1,s4);
//         printf("actual output   : %s\n\n",sp);

// 		sp = strstr(s1,s5);
//         printf("expected output : %s\n",sp);
//         sp = ft_strstr(s1,s5);
//         printf("actual output   : %s\n\n",sp);

//         return 0;
// }