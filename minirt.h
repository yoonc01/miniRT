/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minirt.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunhyojun <hyoyoon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 21:12:03 by yunhyojun         #+#    #+#             */
/*   Updated: 2024/11/12 22:02:22 by yunhyojun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINIRT_H
# define MINIRT_H

typedef struct	s_vec {
	double x;
	double y;
	double z;
}	t_vec;

t_vec	vec_create(double x, double y, double z);
t_vec	vec_add(const t_vec *u, const t_vec *v);
t_vec	vec_sbtact(const t_vec *u, const t_vec *v);
t_vec	vec_dot(const t_vec *u, const t_vec *v);
t_vec	vec_cross(const t_vec *u, const t_vec *v);

#endif
