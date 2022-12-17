# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mschaub <mschaub@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/15 14:31:34 by mschaub           #+#    #+#              #
#    Updated: 2022/12/17 16:34:48 by mschaub          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 		libftprintf.a

CC = 		cc

CFLAGS = 	-Wall -Wextra -Werror -I

RM = 		rm -f

SRC = 		ft_print_unsigned.c \
			ft_printchar.c \
			ft_printf.c \
			ft_printhex.c \
			ft_printnbr.c \
			ft_printperc.c \
			ft_printstr.c \
			ft_printptr.c

OBJS = 		$(SRC:.c=.o)

all: $(NAME)

.c.o:		
	$(CC) $(CFLAGS) $< -o $(<:.c=.o)

$(NAME): 	$(OBJS)
	make -C ../Libft
	cp Libft/libft.a
	mv libft.a $(NAME)
	ar -rcs $(NAME) $^

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all


.PHONY:		all clean fclean re bonus