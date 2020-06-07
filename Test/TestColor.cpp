// Joan Andrés (@Andres6936) Github.

#include <Cup/Object/Color.hpp>

#include <iostream>
#include <cassert>

using namespace Cup::Object;

int main (int argc, char* argv[])
{
	Color color(233, 245, 132);

	assert(color.getRed() == 233);
	assert(color.getGreen() == 245);
	assert(color.getBlue() == 132);
	assert(color.getAlpha() == 255);

	color.setRed(56);
	color.setGreen(87);
	color.setBlue(156);
	color.setAlpha(69);

	assert(color.getRed() == 56);
	assert(color.getGreen() == 87);
	assert(color.getBlue() == 156);
	assert(color.getAlpha() == 69);
}