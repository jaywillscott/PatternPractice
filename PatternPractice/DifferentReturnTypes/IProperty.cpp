#include "IProperty.h"

IProperty::IProperty(std::string name, int id, PropertyType::Types propertyType, std::vector<PropertyScope::Scopes> propertyScopes = { PropertyScope::local}) :
	name(name),
	id(id),
	propertyType(propertyType),
	propertyScopes(propertyScopes)
{
}

const std::string IProperty::GetName() const
{
	return name;
}

void IProperty::SetName(std::string name)
{
	this->name = name;
}

const int IProperty::GetId() const
{
	return id;
}

const PropertyType::Types IProperty::GetPropertyType() const
{
	return propertyType;
}

std::vector<PropertyScope::Scopes> IProperty::GetPropertyScopes() const
{
	return propertyScopes;
}


