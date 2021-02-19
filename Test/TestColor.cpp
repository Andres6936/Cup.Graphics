// Joan Andrés (@Andres6936) Github.

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest/doctest.h"
#include <Cup/Object/Color.hpp>

using namespace Cup::Graphics;

TEST_CASE("Verify the behavior of setters and getters")
{
	Color color(233, 245, 132);

	CHECK(color.getRed() == 233);
	CHECK(color.getGreen() == 245);
	CHECK(color.getBlue() == 132);
	CHECK(color.getAlpha() == 255);

	color.setRed(56);
	color.setGreen(87);
	color.setBlue(156);
	color.setAlpha(69);

	CHECK(color.getRed() == 56);
	CHECK(color.getGreen() == 87);
	CHECK(color.getBlue() == 156);
	CHECK(color.getAlpha() == 69);
}
