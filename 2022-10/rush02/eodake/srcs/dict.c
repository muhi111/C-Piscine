/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eodake <eodake@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 09:38:40 by eodake            #+#    #+#             */
/*   Updated: 2022/10/23 17:44:23 by eodake           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

char	*ft_strndup(char *src, int n)
{
	int		src_len;
	char	*pnt;
	int		i;

	src_len = ft_strlen(src);
	pnt = malloc((src_len + 1) * sizeof(char));
	if (!pnt)
		return (NULL);
	i = 0;
	while (src[i] && i < n)
	{
		pnt[i] = src[i];
		i++;
	}
	pnt[i] = '\0';
	return (pnt);
}

void	ft_dict_separete_sub(char *d, t_dict *dict, int i)
{
	int		j;
	int		k;
	t_dict	*p;

	j = i;
	while (d[i] != 0)
	{
		p = &dict[j];
		while (d[i] >= '0' && d[i] <= '9')
			i++;
		p->key = ft_strndup(d + k, i - k);
		i += 2;
		k = i;
		while (d[i] < '0' || d[i] > '9')
			i++;
		p->word = ft_strndup(d + k, i - k - 1);
		k = i;
		i++;
		j++;
	}
	return ;
}

void	ft_dict_separete(char *d, t_dict *dict)
{
	int	i;

	i = 0;
	while (d[i] < '0' || d[i] > '9')
		i++;
	ft_dict_separete_sub(d, dict, i);
	return ;
}

void	ft_to_dict_sub(int d_open, t_dict *dict)
{
	char	*d;
	char	*p;
	int		d_read;
	int		i;

	i = 0;
	p = (char *)malloc((1000) * sizeof(char));
	d_read = read(d_open, p, 1000);
	d = (char *)malloc((d_read + 1) * sizeof(char));
	while (i < d_read)
	{
		d[i] = p[i];
		i++;
	}
	d[i] = 0;
	ft_dict_separete(d, dict);
	free(p);
}

int	ft_to_dict(char *dictname, t_dict *dict)
{
	int	d_open;

	d_open = open(dictname, O_RDONLY);
	if (d_open < 0)
	{
		ft_put_dicterror();
		return (0);
	}
	ft_to_dict_sub(d_open, dict);
	close(d_open);
	return (1);
}
