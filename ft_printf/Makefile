NAME =	libftprintf.a
INC = ft_printf.h
SRCS =	ft_putp.c\
		ft_printf.c\
		ft_putd.c\
		ft_puts.c\
		ft_flag.c\
		ft_putu.c\
		ft_putx.c\
		ft_putc.c
OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall -Werror -Wextra
CC = gcc
RM = rm -f
AR = ar -rsc

.PHONY: all clean fclean re 


all: $(NAME)
$(NAME):$(OBJS) $(INC)
	@$(AR) $(NAME) $(OBJS)                                       

clean:
	@$(RM) $(OBJS) 

fclean:clean
	@$(RM) $(NAME)

re: fclean all
