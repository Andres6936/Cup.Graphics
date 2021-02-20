// Joan Andrés (@Andres6936) Github.

#ifndef CUP_OBJECT_COLOR_HPP
#define CUP_OBJECT_COLOR_HPP

#include <cstdint>

namespace Cup::Graphics
{

	/**
	 * Each color is formed by mixing three basic colors: red, green and blue,
	 * using the RGB (Red-Green-Blue) system to specify colors. When identifying
	 * a particular color (e.g., deep white), it is defined as the sum of the
	 * three basic colors and the proportion of the mixture of these colors.
	 * This proportion is specified using one byte (range 0 to 255), so that
	 * the most intense pure white (mixture of all colors) would be the color
	 * (255,255,255), while black (absence of color) would be (0,0,0).
	 *
	 * Whenever a color is specified, it is specified as a triplet (R,G,B) that
	 * defines how much red (R value), green (G) and blue (B) make up that
	 * color. These three values are called RGB components of the color. Thus, a
	 * medium intense red could be defined as (128,0,0) (128 of red and none of
	 * the other 2 components). In this way (mixing these three components with
	 * the different intensities 0-255) we can obtain up to 256*256*256 = 16.7
	 * million different colors.
	 */
	class Color
	{

	private:

		// Fields

		/**
		 * The order of stored is:
		 * | Red | Green | Blue | Alpha |
		 * each component have 8 bits
		 * in total 32 bits (8 bits * 4 component).
		 */
		std::uint32_t value = 0;

	public:

		// Construct

		Color() noexcept = default;

		Color(std::uint32_t r, std::uint32_t g, std::uint32_t b);

		Color(std::uint32_t r, std::uint32_t g, std::uint32_t b, std::uint32_t a);

		// Getters

		std::uint8_t getRed() const;

		std::uint8_t getGreen() const;

		std::uint8_t getBlue() const;

		std::uint8_t getAlpha() const;

		// Setters

		void setRed(std::uint32_t r);

		void setGreen(std::uint32_t g);

		void setBlue(std::uint32_t b);

		void setAlpha(std::uint32_t a);

	};

}

#endif //CUP_OBJECT_COLOR_HPP
