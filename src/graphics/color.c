#include "graphics.h"

void color_clamp(color * c) {
	c->r = iclamp(c->r, 0, 255);
	c->g = iclamp(c->g, 0, 255);
	c->b = iclamp(c->b, 0, 255);
}

void color_new(color * c, int r, int g, int b) {
	c->r = r;
	c->g = g;
	c->b = b;
	color_clamp(c);
}

void color_add(color * c, color a, color b) {
	c->r = a.r + b.r;
	c->g = a.g + b.g;
	c->b = a.b + b.b;
	color_clamp(c);
}

void color_scale(color * out, color c, float factor) {
	out->r = c.r * factor;
	out->g = c.g * factor;
	out->b = c.b * factor;
	color_clamp(out);
}

void color_print(color c) {
	printf("<color r:%d g:%d b:%d>\n", c.r, c.g, c.b);
}
