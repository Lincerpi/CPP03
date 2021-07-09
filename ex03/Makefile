# -*- MakeFile -*-

NAME	= ex03

SRCS	=	ClapTrap.cpp \
			ScavTrap.cpp \
			FragTrap.cpp \
			DiamondTrap.cpp \
			main.cpp

CC		= clang++

CFLAGS	= -Wall -Wextra -Werror -Wshadow -Wno-shadow

all:
		$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
		rm -rf $(NAME)

fclean: clean

re: 	clean all

.PHONY: all clean fclean re