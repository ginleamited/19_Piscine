/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushlib.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguerri- <mguerri-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 11:21:56 by mguerri-          #+#    #+#             */
/*   Updated: 2024/07/21 20:28:46 by mguerri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef RUSHLIB_H
# define RUSHLIB_H
# define INV_ARG "Error"
# define PARSING_ERROR "Dict Error"
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
long	ft_numlen(long nb);
char	*ft_itoa(long nb);
long	ft_atoi(char *str, char *dictionary);
char	*ft_strcpy_rest(char *dest, char *src, int k, int len);
char	*ft_strdup_rest(char *src, int k, int len);
char	*ft_strcpy_beg(char *dest, char *src, int k);
char	*ft_strdup_beg(char *src, int i);
void	ft_parser(char *str, long i);
char	*ft_strstr(char *str, char *to_find);
void	bignumb_manager(char *dictionary, char *str);
void	dictionary_feeder(char *dictionary, char *str);
void	operational_splitter1(int argc, char **argv);
void	operational_splitter2(int argc, char **argv);
void	ft_getlist(char *list[]);
#endif
