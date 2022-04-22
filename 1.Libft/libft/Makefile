TARGET= exe
DIROBJS= ../
OBJS= $(DIROBJS)ft_isalpha.o $(DIROBJS)ft_isdigit.o $(DIROBJS)ft_isalnum.o $(DIROBJS)ft_isascii.o \
$(DIROBJS)ft_strlen.o $(DIROBJS)ft_isprint.o $(DIROBJS)ft_memset.o $(DIROBJS)ft_bzero.o \
$(DIROBJS)ft_memcpy.o $(DIROBJS)ft_memmove.o $(DIROBJS)ft_strlcpy.o $(DIROBJS)ft_strlcat.o  $(DIROBJS)ft_toupper.o \
$(DIROBJS)ft_tolower.o $(DIROBJS)ft_strchr.o $(DIROBJS)ft_strrchr.o $(DIROBJS)ft_strncmp.o $(DIROBJS)ft_memchr.o \
$(DIROBJS)ft_memcmp.o $(DIROBJS)ft_strnstr.o $(DIROBJS)ft_atoi.o $(DIROBJS)ft_calloc.o
CFLAGS= -Wall -Werror -Wextra

DEPN=libft.h
CC = gcc
NAME=libft.a
AR = ar
ARFLAGS = -crs
RANLIB = ranlib
DIRA = ../

all: $(NAME)

%.c : %.o
	-$(CC) -c $(CFLAGS) -o $< $@
# Generate Library
$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $(DIRA)$(NAME) $(OBJS)
	$(RANLIB) $(DIRA)$(NAME)

.PHONY: clean re fclean
clean:
	@rm -f $(DIROBJS)*.o
fclean: clean 
	@rm $(DIRA)$(NAME)
re: clean all