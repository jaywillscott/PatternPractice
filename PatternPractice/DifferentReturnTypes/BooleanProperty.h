#pragma once

#include "IProperty.h"

class BooleanProperty :
    public IProperty
{
public:
	BooleanProperty(std::string name, int id, bool value, std::vector<PropertyScope::Scopes> propertyScope);

	bool GetValue()
	{
		return value;
	}

	void SetValue(bool value)
	{
		this->value = value;
	}

	float operator=(bool value)
	{
		this->value = value;
	}

private:
	bool value;
};

