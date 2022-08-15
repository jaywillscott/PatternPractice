#include "FloatProperty.h"

FloatProperty::FloatProperty(std::string name, int id, float value=0.F, std::vector<PropertyScope::Scopes> propertyScope = std::vector<PropertyScope::Scopes>({ PropertyScope::local })) :
	IProperty(name, id, PropertyType::Float, propertyScope),
	value(value)
{
}
