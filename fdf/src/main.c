#include "minilibx_macos/mlx.h"

int     window_create()
{
    void*    ptr;

    ptr = mlx_init();
    mlx_new_window( ptr, 300, 400, "fdf");
    return (0);
}