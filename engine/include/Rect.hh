#ifndef __SGDF_RECT_HH__
#define __SGDF_RECT_HH__ 

#include "Vector2D.hh"

class Rect
{
public:
	float x, y, width, height;

	Rect(float x, float y, float width, float height);

	Vector2D getPosition() const;
	Vector2D getSize() const;
	Vector2D getCenter() const;
};

#endif