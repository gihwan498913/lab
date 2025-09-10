#define GLM_ENABLE_EXPERIMENTAL 
#include <iostream>
#include <glm/glm.hpp>
#include <glm/gtx/string_cast.hpp>

int main() {
	//Q1
	glm::vec3 p(1.0f, 4.0f, -5.0f);
	glm::vec3 v(5.0f, 1.0f, 4.0f);
	std::cout << to_string(p + v) << std::endl;

	//Q2
	glm::vec3 v1(1.0f, 0.0f, 0.0f);
	glm::vec3 v2(0.0f, 1.0f, 0.0f);
	std::cout << to_string(v1 + v2) << std::endl;

	//Q3
	glm::vec3 v3(0.0f, 1.0f, 0.0f);
	std::cout << to_string(2.0f * v3) << std::endl;

	//Q4
	glm::vec3 v4(8.0f, 2.0f, 5.0f);
	glm::vec3 v5(1.0f, -1.0f, 4.0f);
	std::cout << to_string(v5 - v4) << std::endl;

	//Q5
	glm::vec3 v6(1.0f, 3.0f, 4.0f);
	glm::vec3 v6_h = glm::normalize(v6);
	std::cout << to_string(v6_h) << std::endl;
	
	//Q6
	glm::vec3 v7(1.0f, -1.0f, 4.0f);
	glm::vec4 v8 = glm::vec4(v7, 0.0f);
	std::cout << to_string(v8) << std::endl;

	return 0;
}