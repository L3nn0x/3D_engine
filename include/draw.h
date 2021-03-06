
#ifndef _DRAW_H_
# define _DRAW_H_

#include <SDL2/SDL.h>
#include <stdint.h>

void	drawLine(SDL_Surface*, int x1, int y1, int x2, int y2, uint32_t color);
void	drawVLine(SDL_Surface*, unsigned int x, unsigned int y1, unsigned int y2, uint32_t color);
void	drawVLineColor(SDL_Surface*, unsigned int x, unsigned int y1, unsigned int y2, uint32_t top, uint32_t middle, uint32_t bottom);
void	drawHLine(SDL_Surface*, unsigned int x1, unsigned int x2, unsigned int y, uint32_t color);
void	drawPixel(SDL_Surface*, unsigned int x, unsigned int y, uint32_t color);

#endif /* !_DRAW_H_ */
