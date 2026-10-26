#pragma once
#include <raylib.h>

enum class Body_Type {
	SPHERE
};

// Abstract Class
class PhysicsBody
{
public:
	PhysicsBody(Body_Type type, bool isKinematic);

	Vector2 GetPosition() const;
	Vector2 GetVelocity() const;
	float GetDrag() const;
	float GetMass() const;
	Body_Type GetType() const;
	bool GetKinematic() const;

	void SetPosition(Vector2 value);
	void SetVelocity(Vector2 value);
	void SetDrag(float value);
	void SetMass(float value);
	void SetKinematic(bool value);

	virtual bool CollidesWith(PhysicsBody* other) =0;
protected:
	Body_Type type;
	Vector2 position, velocity;
	float drag, mass;

	bool isKinematic;
};

