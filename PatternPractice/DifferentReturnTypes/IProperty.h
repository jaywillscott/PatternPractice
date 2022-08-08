#pragma once
#include <string>
#include <tuple>
#include <variant>
#include "PropertyType.h"

class IProperty
{
public:
	IProperty(std::string name, int id, PropertyType propertyType);
	IProperty(const IProperty& property);

	const std::string GetName() const;
	void SetName(std::string name);

	const int GetId() const;

	const PropertyType GetPropertyType() const;

protected:
	std::string name;
	int id;
	const PropertyType propertyType;
};
