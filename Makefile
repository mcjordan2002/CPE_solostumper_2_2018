##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## make file
##

CC = gcc

SRC = anagram.c

OBJ = $(SRC:.c=.o)

NAME = anagram

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(OBJ) -o $(NAME) -Wall

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all
