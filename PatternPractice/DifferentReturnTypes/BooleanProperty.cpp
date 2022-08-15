#include "BooleanProperty.h"

BooleanProperty::BooleanProperty(std::string name, int id, bool value = false, std::vector<PropertyScope::Scopes> propertyScope = std::vector<PropertyScope::Scopes>({ PropertyScope::local })) :
	IProperty(name, id, PropertyType::Boolean, propertyScope),
	value(value)
{
}
