CC = cc
FLAGS = -Wall -Werror -Wextra
FT = ft_atoi.c \
	 ft_bzero.c \
	 ft_calloc.c \
	 ft_isalnum.c \
	 ft_isalpha.c \
	 ft_isascii.c \
	 ft_isdigit.c \
	 ft_isprint.c \
	 ft_itoa.c \
	 ft_memchr.c \
	 ft_memcmp.c \
	 ft_memcpy.c \
	 ft_memmove.c \
	 ft_memset.c \
	 ft_putchar_fd.c \
	 ft_putendl_fd.c \
	 ft_putnbr_fd.c \
	 ft_pustr_fd.c \
	 ft_split.c \
	 ft_strchr.c \
	 ft_strdup.c \
	 ft_striteri.c \
	 ft_strjoin.c \
	 ft_strlcat.c \
	 ft_strlcpy.c \
	 ft_strlen.c \
	 ft_strmapi.c \
	 ft_strncmp.c \
	 ft_strnstr.c \
	 ft_strrchr.c \
	 ft_strtrim.c \
	 ft_substr.c \
	 ft_tolower.c \
	 ft_toupper.c

BFT = ft_lstnew.c \
	  ft_lstadd_front.c \
	  ft_lstsize.c \
	  ft_lstlast.c \
	  ft_lstadd_back.c \
	  ft_lstdelone.c \
	  ft_lstclear.c \
	  ft_lstiter.c \
	  ft_lstmap.c

OBJ = $(FT: .c=.o)
BOBJ = $(BFT: .c=.o)

NAME = libft.a

.PHONY : all clean oclean fclean re

all: $(NAME)
	ar rcs $(NAME) $(OBJ)

%.o: %.c libft.h
	$(CC) $(FLAGS) -c $< -o $@ -I.

clean:
	rm -f $(NAME)

oclean:
	rm -f $(OBJ)

fclean: clean oclean

re: fclean all

	
