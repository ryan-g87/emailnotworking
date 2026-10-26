#pragma once

#include "PhysicsBody.h"

class Sphere : public PhysicsBody
{
public:
	Sphere(float radius);
	Sphere(float radius, bool isKinematic);

	float GetRadius() const;
	void SetRadius(float radius);

	virtual bool CollidesWith(PhysicsBody* other) override;

private:
	float radius;
};

