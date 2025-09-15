#define GLM_ENABLE_EXPERIMENTAL 
#include <iostream>
#include <glm/glm.hpp>
#include <glm/gtx/string_cast.hpp>
#include <glm/gtc/constants.hpp>

const double DEGREES_TO_RADIANS = glm::pi<float>() / 180.0;
const double RADIANS_TO_DEGREES = 180.0 / glm::pi<float>();

int main() {

	glm::vec3 v(2.0f, -1.0f, 1.0f);
	glm::vec3 u(1.0f, 1.0f, 2.0f);
	float d = glm::dot(v, u);
	float e = d / (glm::length(u) * glm::length(v));
	float deg = glm::acos(e) * RADIANS_TO_DEGREES;
	std::cout << deg << std::endl;

	return 0;
}