
// Circle.cpp - You CAN edit this file!

#include <math.h>

#include "Circle.h"

namespace { const float PI = 3.14159265359f; } // Use this to aproximate Pi

void Circle::SetRadius(const float size)
{
	if (size > 0) m_radius = size;
	else m_radius = 1;
}

float Circle::GetArea() const
{
	return PI * (m_radius * m_radius);
}

float Circle::GetPerimeter() const
{
	return 2 * PI * m_radius;
}