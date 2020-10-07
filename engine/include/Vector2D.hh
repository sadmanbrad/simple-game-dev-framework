#ifndef __SGDF_VECTOR2D_HH__
#define __SGDF_VECTOR2D_HH__ 

#include <string>

class Vector2D {
public:
	float x, y;

	Vector2D() noexcept = default;

	Vector2D(float _x, float _y) noexcept;

	float magnitude() const;

	Vector2D normalized() const;

	std::string toString() const;

	Vector2D operator+(const Vector2D &other) const;

	Vector2D operator-(const Vector2D &other) const;

	Vector2D operator*(float f) const;

	Vector2D operator/(float f) const;

	Vector2D &operator+=(const Vector2D &other);

	Vector2D &operator-=(const Vector2D &other);

	Vector2D &operator*=(float f);

	Vector2D &operator/=(float f);

	friend Vector2D operator*(float f, const Vector2D &v);

	static float dot(const Vector2D &a, const Vector2D &b);
	static Vector2D direction(float angle);

	static const Vector2D ZERO;
	static const Vector2D ONE;
	static const Vector2D UP;
	static const Vector2D RIGHT;
	static const Vector2D DOWN;
	static const Vector2D LEFT;
};



#endif