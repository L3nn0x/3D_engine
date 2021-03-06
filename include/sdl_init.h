#ifndef _SDL_H_
# define _SDL_H_

#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <stdint.h>

#define W 640
#define H 480
#define SCREEN_FPS 30
#define SCREEN_TICKS_PER_FRAME (1000 / SCREEN_FPS)

struct sdl_data {
	SDL_Window		*win;
	SDL_Renderer	*ren;
	SDL_Surface		*screen;
	SDL_Surface		*minimap;
	SDL_Texture		*tex;
	char			*folder;

	// Events
	struct {
		char		key[SDL_NUM_SCANCODES];
		int			quit;
	} events;

	// FPS
	struct {
		int			countedFrames;
		uint32_t	startTime;
		float		fps;
		int			print;
		int			capFPS;
		uint32_t	frameTicks;
		uint32_t	ticksPerFrame;
	} fps;

	// Font
	struct {
		TTF_Font	*font;
		SDL_Color	color;
		SDL_Rect	pos;
	} font;
	void			*player;
	uint8_t			debug;
};

struct sdl_data	*init(const char *folder, const char *title);
void			end(struct sdl_data **);
void			display(struct sdl_data *);

void			updateEvents(struct sdl_data *);
int				keyPressed(struct sdl_data*, char key);

#endif /* !_SDL_H_ */
