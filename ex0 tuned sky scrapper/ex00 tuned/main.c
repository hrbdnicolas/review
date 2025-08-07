/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boris.hanicotte <boris.hanicotte@learner.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 18:16:51 by boris.hanicot     #+#    #+#             */
/*   Updated: 2025/08/03 18:16:55 by boris.hanicot    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utility.h"

int	main(int argc, char **argv)
{
	int	*indexes;

	if (init_and_parse(argc, argv, &indexes) == 1)
	{
		return (1);
	}
	run(indexes);
	free(indexes);
	return (0);
}
