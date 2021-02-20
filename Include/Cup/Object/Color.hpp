// Joan Andrés (@Andres6936) Github.

#ifndef CUP_OBJECT_COLOR_HPP
#define CUP_OBJECT_COLOR_HPP

#include <cstdint>

namespace Cup::Graphics
{

	class Color
	{

	private:

		// Definitions

		using UInt8 = std::uint8_t;

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

		UInt8 getRed() const;

		UInt8 getGreen() const;

		UInt8 getBlue() const;

		UInt8 getAlpha() const;

		// Setters

		void setRed(std::uint32_t r);

		void setGreen(std::uint32_t g);

		void setBlue(std::uint32_t b);

		void setAlpha(std::uint32_t a);

	};

}

#endif //CUP_OBJECT_COLOR_HPP
