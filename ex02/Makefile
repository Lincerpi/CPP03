# -*- MakeFile -*-

NAME	= ex02

SRCS	=	ClapTrap.cpp \
			ScavTrap.cpp \
			FragTrap.cpp \
			main.cpp

CC		= clang++

CFLAGS	= -Wall -Wextra -Werror

all:
		$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
		rm -rf $(NAME)

fclean: clean

re: 	clean all

.PHONY: all clean fclean re