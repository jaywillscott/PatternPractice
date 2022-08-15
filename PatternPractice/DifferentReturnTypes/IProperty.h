#pragma once
#include <string>
#include <tuple>
#include <variant>
#include "PropertyType.h"
#include <vector>

class IProperty
{
public:
	IProperty(std::string name, int id, PropertyType::Types propertyType, std::vector<PropertyScope::Scopes> propertyScopes);

	const std::string GetName() const;
	void SetName(std::string name);

	const int GetId() const;

	const PropertyType::Types GetPropertyType() const;

	std::vector<PropertyScope::Scopes> GetPropertyScopes() const;

protected:
	std::string name;
	int id;
	const PropertyType::Types propertyType;
	std::vector<PropertyScope::Scopes> propertyScopes;
};
