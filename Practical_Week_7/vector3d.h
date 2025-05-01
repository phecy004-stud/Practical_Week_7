#pragma once

class Vector3D {

protected:

    // Data members to be used in the derived classes
    const float x_;
    const float y_;
    const float z_;

public:
    
    // Accessors : Activity 1 No.5
    float x() const;
    float y() const;
    float z() const;

    Vector3D(float x = 0, float y = 0, float z = 0); // Constructor with default values : Activity 1 No.6

    Vector3D(const Vector3D& other); // Copy constructor : Activity 1 No.7

    // Operators
    bool operator==(const Vector3D& other) const;
    bool operator!=(const Vector3D& other) const;
    Vector3D operator+(const Vector3D& other) const;

    // Distance function
    float distanceTo(const Vector3D& other) const;

    // Delete assignment operator to make class immutable
    Vector3D &operator =(const Vector3D& other) = delete;
};
