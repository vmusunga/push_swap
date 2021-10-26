LIBFT =		libft/ft_strlen.c \
			libft/ft_atoi.c \
			libft/ft_split.c \
			libft/ft_isdigit.c \

UTILITY =	utility/ft_intlen.c \
			utility/ft_check_doubles.c \
			utility/ft_error.c \
			utility/ft_free.c \
			utility/ft_tabtab_to_tab.c \
			utility/ft_count_double_tab.c \

LIST_OPS =	list_ops/ft_lstnew.c \
			list_ops/ft_lstadd_back.c\
			list_ops/ft_lstadd_front.c\
			list_ops/ft_lstlast.c\
			list_ops/ft_lstclear.c \

OPERATIONS = operations/ft_sa.c \
			operations/ft_ra.c \
			operations/ft_rra.c \
			operations/ft_pb.c \

ALGO = algorithms/ft_short_list.c \

SRCS =	$(ALGO) \
		$(LIBFT) \
		$(UTILITY) \
		$(LIST_OPS) \
		$(OPERATIONS) \
		main.c

BONUS = 

INCLUDE =	-I include

OBJS	=		$(SRCS:.c=.o)
OBJS_BONUS =	$(BONUS:.c=.o)
EXEC = push_swap

NAME	=		push_swap
CC		=		gcc
FLAGS	=		-Wall -Werror -Wextra
RM		=		rm -f

.c.o:
			$(CC) $(FLAGS) -c -I include $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
			$(CC) $(FLAGS) $(OBJS) -o $(EXEC)

all:		$(NAME)

bonus:		$(OBJS_BONUS)
			$(CC) $(FLAGS) $(OBJS_BONUS)

clean:
			$(RM) $(OBJS) $(OBJS_BONUS)

fclean:		clean
			$(RM) $(EXEC)

re:			fclean all