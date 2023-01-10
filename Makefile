# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eozdur <ozduremre06@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 15:14:13 by eozdur            #+#    #+#              #
#    Updated: 2022/10/24 17:28:59 by eozdur           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = $(shell find . -type f ! -name "ft_lst*.c" -name "*.c")

BONUS = $(shell find . -type f -name "ft_lst*.c")

CC				= gcc
CFLAGS			= -Wall -Wextra -Werror
NAME			= libft.a

all:			$(NAME)

$(NAME):		
			$(CC) $(CFLAGS) -c $(SRCS)
			ar -rcs $(NAME) *.o

bonus:			
			$(CC) $(CFLAGS) -c $(BONUS)
			ar -rcs $(NAME) *.o
	
clean:
			/bin/rm -f  *.o

fclean:			clean
			/bin/rm -f $(NAME)

re:				fclean $(NAME)


.PHONY:			all clean fclean re bonus
