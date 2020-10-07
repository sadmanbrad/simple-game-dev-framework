#include "Rect.hh"

Rect::Rect(float x, float y, float width, float height) : 
	x(x), y(y), width(width), height(height) {
}

Vector2D Rect::getPosition() const {
	return {x,y};
}

Vector2D Rect::getSize() const {
	return {width,height};
}

Vector2D Rect::getCenter() const {
	return {x + width/2, y + height/2};
}