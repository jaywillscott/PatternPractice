#pragma once
#include <vector>
#include "FloatProperty.h"
#include "BooleanProperty.h"
class PropertyLibrary
{
public:
	PropertyLibrary() = default;

	const std::vector<IProperty*>& GetProperties() const;
	static const std::vector<FloatProperty*> GetFloatProperties(const std::vector<IProperty*> properties);
	static const std::vector<BooleanProperty*> GetBooleanProperties(const std::vector<IProperty*> properties);

	void AddProperty(IProperty* property);

private:
	std::vector<IProperty*> properties;
};

