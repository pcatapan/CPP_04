# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pcatapan <pcatapan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/29 19:43:58 by pcatapan          #+#    #+#              #
#    Updated: 2023/06/01 21:30:04 by pcatapan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ex01

SRC 		=	src/*.cpp

OBJC		=	$(SRC:%.cpp=%.o)

CC			=	c++
FLAGS		=	-Wall -Werror -Wextra
CPPFLAGS 	= 	-std=c++98

#Colors:
GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m
GRAY		=	\e[33;2;37m
RESET		=	\e[0m
CURSIVE		=	\e[33;3m

all:	${NAME}

${NAME}:	${OBJ}
	@$(CC) $(FLAGS) $(CPPFLAGS) $(SRC) -o $(NAME)
	@printf "$(_SUCCESS) $(GREEN)- Executable ready.\n$(RESET)"

clean:
	@${RM} ${OBJ}
	@printf "$(YELLOW)    - Object files removed.$(RESET)\n"

fclean:	clean
	@${RM} ${NAME}
	@printf "$(YELLOW)    - Executable removed.$(RESET)\n"

re: fclean all

.PHONY: all clean fclean re