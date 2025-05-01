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

bool Vector3D::operator==(const Vector3D& other) const { /// Check if two vectors are equal

	// Use a small epsilon value to compare floating-point numbers
	return x_ == other.x_ && y_ == other.y_ && z_ == other.z_;
}

bool Vector3D::operator!=(const Vector3D& other) const { // Check if two vectors are not equal

	// Use the equality operator to check for inequality
	return !(*this == other);
}

Vector3D Vector3D::operator+(const Vector3D& other) const { // Add two vectors

	// Create a new vector that is the sum of this vector and the other vector
	return Vector3D(x_ + other.x_, y_ + other.y_, z_ + other.z_);
}
