#pragma once
#include "Vector2D.h"
class Disparo
{
public:
	Disparo();
	virtual ~Disparo();

	float radio;
    Vector2D posicion, velocidad, aceleracion;
};

