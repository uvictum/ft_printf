CC= gcc

CFLAGS= -Wall -Wextra -Werror -c

FILES= ft_memset ft_bzero ft_memcpy ft_memccpy ft_memmove ft_memchr

DFLAGS=

ORIGINAL= memtests.c

NAME= memtests

NAME= mymemtests

MY= mymemtest.c

all: $(NAME)

lib: 
	$(CC) $(CFLAGS) $(FILES)

$(NAME): 
	$(CC) $(CFLAGS) $(MY) $(ORIGINAL) 

test: $(NAME)
	diff $(DFLAGS) $(ORIGINAL) $(MY)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)
