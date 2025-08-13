#* ************************************************************************** */
#*                                                                            */
#*                                                        :::      ::::::::   */
#*   Makefile                                           :+:      :+:    :+:   */
#*                                                    +:+ +:+         +:+     */
#*   By: wissem.boussaha <wissem.boussaha@learner>  #+#  +:+       +#+        */
#*                                                +#+#+#+#+#+   +#+           */
#*   Created: 2025-08-10 15:19:26 by wissem.boussaha   #+#    #+#             */
#*   Updated: 2025-08-10 15:19:26 by wissem.boussaha  ###   ########.fr       */
#*                                                                            */
#* ************************************************************************** */

SRC = rush-02.c  printer.c token_reader.c number_conditioner.c conditioners_bridge.c dict_packs_conditioner.c

NAME = Rosetta Stone

all: $(NAME)

$(NAME):
	cc -Wextra -Wall -Werror $(SRC) -o $(NAME)

clean:

fclean: clean
	rm $(NAME)

re: fclean all
