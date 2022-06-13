//GENERATED BY ./gen_assets.py.

#ifndef __APPLE__
    #ifndef _POSIX_C_SOURCE
    #define _POSIX_C_SOURCE 200809L
    #endif
#endif

#ifndef _CFG_H_
#define _CFG_H_

#include <stddef.h>
#include <unistd.h>
#include <string.h>

struct cfg {
	char	 *hint_activation_key;
	char	 *grid_activation_key;
	char	 *screen_activation_key;
	char	 *activation_key;
	char	 *hint_oneshot_key;
	int	  repeat_interval;
	int	  speed;
	int	  max_speed;
	int	  acceleration;
	int	  accelerator_acceleration;
	char	 *accelerator;
	char	**buttons;
	size_t	  buttons_sz;
	char	**oneshot_buttons;
	size_t	  oneshot_buttons_sz;
	int	  oneshot_timeout;
	char	 *grid_exit;
	char	 *hint_exit;
	char	 *exit;
	char	 *drag;
	char	 *copy_and_exit;
	char	 *hint;
	char	 *grid;
	char	 *screen;
	char	 *left;
	char	 *down;
	char	 *up;
	char	 *right;
	char	 *cursor_color;
	int	  cursor_size;
	char	 *top;
	char	 *middle;
	char	 *bottom;
	char	 *start;
	char	 *end;
	char	 *hist_back;
	char	 *hist_forward;
	int	  grid_nr;
	int	  grid_nc;
	char	 *grid_up;
	char	 *grid_left;
	char	 *grid_down;
	char	 *grid_right;
	char	**grid_keys;
	size_t	  grid_keys_sz;
	char	 *grid_color;
	int	  grid_size;
	int	  grid_border_size;
	char	 *grid_border_color;
	int	  hint_size;
	char	 *hint_bgcolor;
	char	 *hint_fgcolor;
	int	  hint_border_radius;
	char	 *scroll_down;
	char	 *scroll_up;
	char	 *screen_chars;
	char	 *hint_chars;
	char	 *hint_font;
};

struct cfg* parse_cfg(const char *fname);

#endif