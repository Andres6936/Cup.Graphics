#include "Cup/Object/Color.hpp"

using namespace Cup::Object;

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
