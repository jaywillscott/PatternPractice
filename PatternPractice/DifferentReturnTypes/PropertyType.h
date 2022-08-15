#pragma once
class PropertyType
{
public:
	enum Types
	{
		Float,
		Boolean
	};

	static std::string ToString(Types type) 
	{
		switch (type)
		{
		case Types::Float:
			return "FLOAT";
			break;
		case Types::Boolean:
			return "BOOLEAN";
			break;
		}
	}
};

class PropertyScope
{
public:
	enum Scopes
	{
		local,
		world
	};

	static std::string ToString(Scopes type)
	{
		switch (type)
		{
		case Scopes::local:
			return "LOCAL";
			break;
		case Scopes::world:
			return "WORLD";
			break;
		}
	}
};

