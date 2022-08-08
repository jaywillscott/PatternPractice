#include "IProperty.h"

IProperty::IProperty(std::string name, int id, PropertyType::Types propertyType) :
	name(name),
	id(id),
	propertyType(propertyType)
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


