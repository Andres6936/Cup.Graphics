#include <bitset>
#include <iostream>
#include "Cup/Object/Color.hpp"

using namespace Cup::Object;

// Constructs

Color::Color(UInt32 r, UInt32 g, UInt32 b) : Color(r, g, b, 255)
{

}

Color::Color(UInt32 r, UInt32 g, UInt32 b, UInt32 a)
{
	value += r << 24;
	value += g << 16;
	value += b << 8;
	value += a << 0;
}

// Getters

Color::UInt8 Color::getRed() const
{
	return static_cast<UInt8>(value >> 24);
}

Color::UInt8 Color::getGreen() const
{
	return static_cast<UInt8>(value >> 16);
}

Color::UInt8 Color::getBlue() const
{
	return static_cast<UInt8>(value >> 8);
}

Color::UInt8 Color::getAlpha() const
{
	return static_cast<UInt8>(value >> 0);
}

// Setters

void Color::setRed(Color::UInt32 r)
{
	using Bit = std::bitset<32>;

	std::cout << "After : " << Bit(value).to_string() << "\n";

	r <<= 24;

	std::cout << "Value : " << Bit(r).to_string() << "\n";

	value <<= 8;
	value >>= 8;

	std::cout << "Clear : " << Bit(value).to_string() << "\n";

	value ^= r;

	std::cout << "Before: " << Bit(value).to_string() << "\n";
}

void Color::setGreen(Color::UInt32 g)
{
	value += g << 16;
}

void Color::setBlue(Color::UInt32 b)
{
	value += b << 8;
}

void Color::setAlpha(Color::UInt32 a)
{
	value += a << 0;
}
