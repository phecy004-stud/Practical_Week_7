#include "vector3d.h"
#include <cmath>

// Accessors
float Vector3D::x() const { 
	return x_; 
}

float Vector3D::y() const { 
	return y_; 
}

float Vector3D::z() const { 
	return z_; 
}

// Constructor
Vector3D::Vector3D(float x, float y, float z) : x_(x), y_(y), z_(z) {}

// Copy constructor
Vector3D::Vector3D(const Vector3D& other) : x_(other.x_), y_(other.y_), z_(other.z_) {}
