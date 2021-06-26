##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## printf
##

SRC	=	files/main.c				\
		files/move_rect.c			\
		files/help.c				\
		files/scale_and_position.c	\
		files/analyse_events.c		\
		files/trash.c				\

OBJ	=	$(SRC:.c=.o)

NAME	=	my_hunter

CSFML	=	-lcsfml-graphics -lcsfml-system -lcsfml-audio

all:	 $(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) -Wall -Wextra $(OBJ) $(CSFML)
	@tput setaf 5; cat include/signature; tput sgr0

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)
	clear

re:	fclean all
