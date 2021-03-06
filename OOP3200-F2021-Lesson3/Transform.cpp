#include "Transform.h"

template <class T>
std::string Transform<T>::ToString() const
{
	std::string output_string;

	output_string += "Position  : " + position.ToString() + "\n";
	output_string += "Z Rotation: " + std::to_string(rotation) + "\n";
	output_string += "Scale     : " + scale.ToString();

	return output_string;
}
