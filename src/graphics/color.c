#include "graphics.h"

extern void color_clamp(color * c) {
	c->r = iclamp(c->r, 0, 255);
	c->g = iclamp(c->g, 0, 255);
	c->b = iclamp(c->b, 0, 255);
}

extern void color_new(color * c, int r, int g, int b) {
	c->r = r;
	c->g = g;
	c->b = b;
	color_clamp(c);
}

extern void color_scale(color * out, color c, float factor) {
	out->r = c.r * factor;
	out->g = c.g * factor;
	out->b = c.b * factor;
	color_clamp(out);
}