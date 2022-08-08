#include "PropertyLibrary.h"

const std::vector<IProperty*>& PropertyLibrary::GetProperties() const
{
	return properties;
}

const std::vector<FloatProperty*> PropertyLibrary::GetFloatProperties(const std::vector<IProperty*> properties)
{
	auto floatProperties = std::vector<FloatProperty*>();

	for (auto* property : properties)
	{
		if (property->GetPropertyType() == PropertyType::Float)
		{
			floatProperties.emplace_back((FloatProperty*)property);
		}
	}

	return floatProperties;
}

const std::vector<BooleanProperty*> PropertyLibrary::GetBooleanProperties(const std::vector<IProperty*> properties)
{
	auto booleanProperties = std::vector<BooleanProperty*>();

	for (IProperty* property : properties)
	{
		if (property->GetPropertyType() == PropertyType::Boolean)
		{
			booleanProperties.emplace_back((BooleanProperty*)property);
		}
	}

	return booleanProperties;
}

void PropertyLibrary::AddProperty(IProperty* property)
{
	properties.emplace_back(property);
}
