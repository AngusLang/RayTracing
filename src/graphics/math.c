#include "graphics.h"

extern int iclamp(int  in, int b, int  t) {
	return in < b ? b : in > t ? t : in;
}

extern float fclamp(float  in, float b, float  t) {
	return in < b ? b : in > t ? t : in;
}
