TARGET 			:= fdf

# directories list
SRC_DIR			:= src
INC_DIR			:= inc
LIB_DIR := ./src/libft
MLX_DIR := ./src/minilibx_macos
OBJ_DIR			:= build


MINILIBX = $(MLX_DIR)libmlx.a

CC 				:= gcc
FLAGS 			:= -Wall -Werror -Wextra -Ofast -I./$(INC_DIR)

DIRS			:= $(patsubst $(SRC_DIR)%,$(OBJ_DIR)%,$(shell find $(SRC_DIR) -type d))
SRCS			:= ./src/main.c 
OBJS			:= $(patsubst $(SRC_DIR)%.c,$(OBJ_DIR)%.o,$(SRCS))

all: $(TARGET)

$(TARGET): $(OBJS)
	@ar rc $@ $^
	@ranlib $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	@$(CC) -o $@ -c $< $(FLAGS)

$(OBJ_DIR)/%.o: $(LIB_DIR)/%.c
	@$(CC) $(FLAGS) -c -o $@ $<

$(OBJ_DIR)/%.o: $(MAKE) -C $(MLX_DIR)
	@echo "\033[37;1mLinking\033[0m" "\033[33;1m" [ $< ] "\033[0m" "\033[32;1m" $(OK) "\033[0m"

$(OBJ_DIR):
	@mkdir -p $(DIRS)

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re