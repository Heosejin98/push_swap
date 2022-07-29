NAME		= push_swap

CC 			= gcc
FLAGS 		= -Wall -Werror -Wextra

LIBC		= ar rc
SRC_DIR		= ./src/
OBJ_DIR		= ./obj/
HEADERS 	= ./include/push_swap.h
INCS		= -I ./include/


LIB_DIR		= lib
LIBFT_A		= ./lib/libft.a

GREEN		= \033[0;92m
YELLOW		= \033[0;93m
BLUE		= \033[0;94m
END_COLOR	= \033[0;39m

SRC_FILES	= error.c \
			check_stdin.c \
			push_swap.c \
			double_link_stack.c \
			double_link_stack_util.c \
			stack_controller.c \
			print_message.c

OBJ_FILES	= ${SRC_FILES:.c=.o}
SRC			= $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJ			= $(addprefix $(OBJ_DIR), $(OBJ_FILES))


all	: $(OBJ_DIR) $(NAME)

$(NAME) : $(OBJ)
	echo "$(GREEN)make $(LIB_DIR)"
	@make -C $(LIB_DIR) 
	@$(CC) $(OBJ) $(LIBFT_A) -o $(NAME)
#	@$(CC) $(FLAGS) $(OBJ) $(LIBFT_A) -o $(NAME)
	@echo "$(GREEN)$(NAME) compiled"

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@$(CC) -c $< -o $@ $(INCS)
#	@$(CC) $(FLAGS) -c $< -o $@ $(INCS)

$(OBJ_DIR):
	@mkdir $(OBJ_DIR)

clean	:
		@rm -rf $(OBJ)
		@make clean -C $(LIB_DIR)
		@echo "$(YELLOW)$(NAME) clean"
fclean	:	clean
		@rm -rf $(NAME)
		@rm -rf $(LIBFT_A)
		@rm -rf $(OBJ_DIR)
		@echo "$(YELLOW)$(NAME) fclean"
re	:	fclean all

.PHONY	:	all clean fclean re