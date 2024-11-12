/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_op.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yunhyojun <hyoyoon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 21:15:36 by yunhyojun         #+#    #+#             */
/*   Updated: 2024/11/12 21:46:05 by yunhyojun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

t_vec	vec_create(double x, double y, double z)
{
	vec	v;

	v.x = x;
	v.y = y;
	v.z = z;
	return (v);
}

t_vec	vec_add(const t_vec *u, const t_vec *v)
{
	return (vec_create(u->x + v->x, u->y + v->y, u->z + v->z));
}

t_vec	vec_sbtact(const t_vec *u, const t_vec *v)
{
	return (vec_create(u->x - v->x, u->y - v->y, u->z - v->z));
}

t_vec	vec_dot(const t_vec *u, const t_vec *v)
{
	return (u->x * v->x + u->y * v->y + u->z * v->z);
}

t_vec	vec_cross(const t_vec *u, const t_vec *v)
{
	return (vec_create(
		u->y * v->z - u->z * v->y,
		u->z * v->x - u->x * v->z,
		u->x * v->y - u->y * v->x
	));
}
