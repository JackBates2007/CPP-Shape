
// Circle.h - You CAN edit this file!

#pragma once

#include "Shape.h"

class Circle : public Shape
{
private:
 
	float m_radius = 1;

public:

	Circle() { }
	Circle(float radius) { SetRadius(radius); }
	virtual ~Circle() { }

	// Accessor
	virtual float GetRadius() { return m_radius; }

	// Mutator
	virtual void SetRadius(const float size);

	// Define additional methods here:
	virtual std::string GetType() const { return "Circle"; }

	virtual float GetArea() const;

	virtual float GetPerimeter() const;

};