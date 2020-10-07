#include "Vector2D.hh"
#include <cmath>
#include <sstream>

const Vector2D Vector2D::ZERO(0, 0);
const Vector2D Vector2D::ONE(1, 1);
const Vector2D Vector2D::UP(0, 1);
const Vector2D Vector2D::RIGHT(1, 0);
const Vector2D Vector2D::DOWN(0, -1);
const Vector2D Vector2D::LEFT(-1, 0);

Vector2D::Vector2D(float _x, float _y) noexcept : x(_x), y(_y) {
}

float Vector2D::magnitude() const {
	return sqrtf(dot(*this, *this));
}

Vector2D Vector2D::normalized() const {
	return Vector2D(x / magnitude(), y / magnitude());
}

float Vector2D::dot(const Vector2D &a, const Vector2D &b) {
	return a.x * b.x + a.y * b.y;
}

Vector2D Vector2D::operator+(const Vector2D &other) const {
	return Vector2D(x + other.x, y + other.y);
}

Vector2D Vector2D::operator-(const Vector2D &other) const {
	return Vector2D(x - other.x, y - other.y);
}

Vector2D Vector2D::operator*(float f) const {
	return Vector2D(x * f, y * f);
}

Vector2D Vector2D::operator/(float f) const {
	return Vector2D(x / f, y / f);
}

Vector2D &Vector2D::operator+=(const Vector2D &other) {
	x += other.x;
	y += other.y;
	return *this;
}

Vector2D &Vector2D::operator-=(const Vector2D &other) {
	x -= other.x;
	y -= other.y;
	return *this;
}

Vector2D &Vector2D::operator*=(float f) {
	x *= f;
	y *= f;
	return *this;
}

Vector2D &Vector2D::operator/=(float f) {
	x /= f;
	y /= f;
	return *this;
}

Vector2D operator*(float f, const Vector2D &v) {
	return Vector2D(v.x * f, v.y * f);
}

Vector2D Vector2D::direction(float angle) {
	constexpr static float PI = 3.14159265f;
	return {std::cos(angle/180 * PI), std::sin(angle/180 * PI)};
}

std::string Vector2D::toString() const {
	std::ostringstream str;
	str << '(' << x << ',' << y << ')';
	return str.str();
}
