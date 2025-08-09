/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean.nicolas-de-lamballerie <jean.nicolas  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 14:11:27 by jean.nicolas-     #+#    #+#             */
/*   Updated: 2025/08/09 15:28:08 by jean.nicolas-    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_DICTIONARY_H
# define FT_DICTIONARY_H
// Keys and values should have the exact same length.
// any discrepancy would mean an invalid line being added.
typedef struct s_dictionary {
	char **keys;
	char **values;
	int len;
} t_dictionary;

typedef struct s_word {
	char *keys; // max 3
	int len; // 0 et 3
	int position_in_string; // 0 ? pas de mots; 1 : milliers, 2, millions, 3...
	char* thousandths;
} t_word;




typedef struct s_fetch_result {
	char *value;
	int success;
} result;
#endif
