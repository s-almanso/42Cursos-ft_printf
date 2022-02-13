# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: salmanso <salmanso@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/30 00:30:18 by salmanso          #+#    #+#              #
#    Updated: 2022/02/12 19:12:33 by salmanso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#standard

NAME			= libft.a
INCLUDE			= ../include
SRC_DIR 		= src/
OBJ_DIR			= obj/
CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I
AR				= ar rcs

# Colors

DEF_COLOR		= \033[0;39m
GREEN			= \033[1;32m
BLUE			= \033[0;34m
YELLOW			= \033[0;33m

#sources

SRC_FILES			=	ft_memset ft_bzero ft_memcpy ft_isalpha \
					ft_isdigit ft_isalnum ft_isascii ft_isprint ft_toupper \
					ft_tolower ft_atoi ft_strlen ft_strlcpy ft_memmove ft_strlcat \
					ft_strchr ft_strrchr ft_strncmp ft_strnstr ft_memchr \
					ft_memcmp ft_strdup ft_calloc ft_substr ft_strtrim ft_strjoin \
					ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd \
					ft_striteri ft_strmapi ft_itoa ft_split \
					ft_lstnew ft_lstadd_front ft_lstsize ft_lstlast \
					ft_lstadd_back ft_lstdelone ft_lstclear \
					ft_lstiter ft_lstmap



SRC			=	$(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ			=	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

OBJSF		=	.cache_exists

all:			$(NAME)

$(NAME):		$(OBJ)
				@$(AR) $(NAME) $(OBJ)
				@ranlib $(NAME)
				@echo "$(GREEN)Libft successfully compiled! $(DEF_COLOR)"


$(OBJ_DIR)%.o :	$(SRC_DIR)/%.c | $(OBJSF)
					@echo "$(YELLOW)Compiling: $< $(DEF_COLOR)"
					@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(OBJSF):
				@mkdir -p $(OBJ_DIR)


clean:
				@$(RM) -rf $(OBJ_DIR)
				@$(RM) -f $(OBJSF)
				@echo "$(BLUE)libft objects files successfully cleaned!$(DEF_COLOR)"

fclean:			clean
				@$(RM) -f $(NAME)
				@echo "$(BLUE)libft executable files successfully cleaned!$(DEF_COLOR)"

re:				fclean all
				@echo "$(GREEN)Cleaned and rebuilt everything successfully for libft!$(DEF_COLOR)"

norm:
				@norminette $(SRC) $(INCLUDE) | grep -v Norme -B1 || true

.PHONY:			all clean fclean re norm
