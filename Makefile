# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mazor <mazor@student.21-school.ru>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/13 20:55:48 by mazor             #+#    #+#              #
#    Updated: 2020/05/20 16:40:36 by mazor            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror
NAME = libft.a

SRC = ft_atoi.c          ft_bzero.c        	ft_calloc.c         ft_isalnum.c\
      ft_isascii.c       ft_isdigit.c	    ft_isprint.c 	    ft_isalpha.c\
	  ft_itoa.c 	     ft_memccpy.c       ft_memchr.c         ft_memset.c\
	  ft_memcmp.c	     ft_memcpy.c        ft_memmove.c        ft_split.c\
	  ft_strchr.c        ft_strdup.c        ft_strjoin.c        ft_strlcat.c\
	  ft_strlcpy.c       ft_strlen.c        ft_strmapi.c        ft_strncmp.c\
	  ft_strnstr.c       ft_strrchr.c       ft_strtrim.c        ft_substr.c\
	  ft_tolower.c       ft_toupper.c       ft_putchar_fd.c     ft_putstr_fd.c\
	  ft_putendl_fd.c    ft_putnbr_fd.c     ft_isspace_bonus.c\
	  ft_islower_bonus.c                    ft_isupper_bonus.c

SRCBONUS = ft_lstnew.c		 ft_lstadd_back.c		ft_lstadd_front.c\
		   ft_lstclear.c     ft_lstdelone.c         ft_lstiter.c\
		   ft_lstsize.c      ft_lstmap.c            ft_lstlast.c

INCLUDE = ./libft.h

OBJ = $(SRC:.c=.o)

OBJBONUS = $(SRCBONUS:.c=.o)

all : $(NAME)
$(NAME) : $(OBJ) $(INCLUDE)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

bonus : $(OBJ) $(OBJBONUS) $(INCLUDE)
	@ar rc $(NAME) $(OBJBONUS)
	@ranlib $(NAME)

%.o : %.c
	gcc $(FLAGS) -c -o $@ $<

clean : 
	@rm -rf *.o

fclean : clean
	@rm -rf $(NAME)

re: fclean all

so:
	gcc -c -fPIC ft_*.c
	gcc -shared -o libft.so ft_*.o
rebonus: fclean bonus

.PHONY: all bonus clean fclean re rebonus
