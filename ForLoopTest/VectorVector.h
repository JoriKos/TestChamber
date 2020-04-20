#pragma once
#include <vector>
#include <string>

class VectorVector
{
public:
	VectorVector();
	~VectorVector();
	std::vector<std::vector<std::string>> GetVectorVector();


protected:
	std::vector<std::vector<std::string>> stringVector{
		{"Vector 1, index 1", "Vector 1, index 2", "Vector 1, index 3"},
		{"Vector 2, index 1", "Vector 2, index 2", "Vector 2, index 3"},
		{"Vector 3, index 1", "Vector 3, index 2", "Vector 3, index 3"}
	};
};