CC = c++
CFLAGS =  -Wall -Werror -Wextra -std=c++11
NAME = hithisisbrain

SOURCES		:= main.cpp\

SOURCE_DIR	:= ./
OBJECTS_DIR	:= objects
OBJECTS 	:= $(addprefix $(OBJECTS_DIR)/, $(SOURCES:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

$(OBJECTS_DIR)/%.o: $(SOURCE_DIR)/%.cpp
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c -o $@ $<

clean:
	@rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)
	@if [ -d "$(OBJECTS_DIR)" ]; then rm -rf $(OBJECTS_DIR); fi

re: fclean all

.PHONY: all clean fclean re