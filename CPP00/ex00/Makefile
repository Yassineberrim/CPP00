GCC = g++
GCCFLAGS = -std=c++11 -Wall -Wextra -Werror

NAME = megaphone
SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)
all: $(NAME)
$(NAME): $(OBJS)
	$(GCC) $(GCCFLAGS) -o $(NAME) $(OBJS)
%.o: %.cpp
	$(GCC) $(GCCFLAGS) -c $< -o $@
clean:
	rm -f $(TARGET) $(OBJS) $(NAME)