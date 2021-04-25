#pragma once
#include "Vector2D.h"
class Hombre
{
public:
	Hombre();
	virtual ~Hombre();

	float altura;
	Vector2D posicion, velocidad, aceleracion;
};
Hombre::Hombre()
{
	
	altura = 1.8f;
	aceleracion.y = aceleracion.x = velocidad.y = 0;
}
