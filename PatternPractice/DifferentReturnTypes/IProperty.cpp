#include "IProperty.h"

IProperty::IProperty(std::string name, int id, PropertyType propertyType) :
	name(name),
	id(id),
	propertyType(propertyType)
{
}

IProperty::IProperty(const IProperty& property):
	IProperty(property.GetName(), property.GetId(), property.GetPropertyType())
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

const PropertyType IProperty::GetPropertyType() const
{
	return propertyType;
}


