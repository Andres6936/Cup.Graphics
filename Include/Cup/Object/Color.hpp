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

		using UInt32 = std::uint32_t;

		using UInt8 = std::uint8_t;

		// Fields

		/**
		 * The order of stored is:
		 * Red Green Blue Alpha
		 * each component have 8 bits
		 * in total 32 bits.
		 */
		UInt32 value = 0;

	public:

		// Construct

		Color() noexcept = default;

		Color(UInt32 r, UInt32 g, UInt32 b);

		Color(UInt32 r, UInt32 g, UInt32 b, UInt32 a);

		// Getters

		UInt8 getRed() const;

		UInt8 getGreen() const;

		UInt8 getBlue() const;

		UInt8 getAlpha() const;

		// Setters

		void setRed(UInt32 r);

		void setGreen(UInt32 g);

		void setBlue(UInt32 b);

		void setAlpha(UInt32 a);

	};

}

#endif //CUP_OBJECT_COLOR_HPP
