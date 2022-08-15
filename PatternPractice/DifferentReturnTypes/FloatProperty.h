#pragma once

#include "IProperty.h"

class FloatProperty : 
	public IProperty
{
public:
	FloatProperty(std::string name, int id, float value, std::vector<PropertyScope::Scopes> propertyScope);

	float GetValue()
	{
		return value;
	}

	void SetValue(float value)
	{
		this->value = value;
	}

	float operator=(float value) 
	{
		this->value = value;
	}

private:
	float value;
};

