#pragma once
#include <cstdint>
#include <vector>


namespace msgpackpp {

	enum pack_type : std::uint8_t {
#pragma region POSITIVE_FIXNUM 0x00 - 0x7F
		POSITIVE_FIXNUM = 0x00,
		POSITIVE_FIXNUM_0x01 = 0x01,
		POSITIVE_FIXNUM_0x02 = 0x02,
		POSITIVE_FIXNUM_0x03 = 0x03,
		POSITIVE_FIXNUM_0x04 = 0x04,
		POSITIVE_FIXNUM_0x05 = 0x05,
		POSITIVE_FIXNUM_0x06 = 0x06,
		POSITIVE_FIXNUM_0x07 = 0x07,
		POSITIVE_FIXNUM_0x08 = 0x08,
		POSITIVE_FIXNUM_0x09 = 0x09,
		POSITIVE_FIXNUM_0x0A = 0x0A,
		POSITIVE_FIXNUM_0x0B = 0x0B,
		POSITIVE_FIXNUM_0x0C = 0x0C,
		POSITIVE_FIXNUM_0x0D = 0x0D,
		POSITIVE_FIXNUM_0x0E = 0x0E,
		POSITIVE_FIXNUM_0x0F = 0x0F,

		POSITIVE_FIXNUM_0x10 = 0x10,
		POSITIVE_FIXNUM_0x11 = 0x11,
		POSITIVE_FIXNUM_0x12 = 0x12,
		POSITIVE_FIXNUM_0x13 = 0x13,
		POSITIVE_FIXNUM_0x14 = 0x14,
		POSITIVE_FIXNUM_0x15 = 0x15,
		POSITIVE_FIXNUM_0x16 = 0x16,
		POSITIVE_FIXNUM_0x17 = 0x17,
		POSITIVE_FIXNUM_0x18 = 0x18,
		POSITIVE_FIXNUM_0x19 = 0x19,
		POSITIVE_FIXNUM_0x1A = 0x1A,
		POSITIVE_FIXNUM_0x1B = 0x1B,
		POSITIVE_FIXNUM_0x1C = 0x1C,
		POSITIVE_FIXNUM_0x1D = 0x1D,
		POSITIVE_FIXNUM_0x1E = 0x1E,
		POSITIVE_FIXNUM_0x1F = 0x1F,

		POSITIVE_FIXNUM_0x20 = 0x20,
		POSITIVE_FIXNUM_0x21 = 0x21,
		POSITIVE_FIXNUM_0x22 = 0x22,
		POSITIVE_FIXNUM_0x23 = 0x23,
		POSITIVE_FIXNUM_0x24 = 0x24,
		POSITIVE_FIXNUM_0x25 = 0x25,
		POSITIVE_FIXNUM_0x26 = 0x26,
		POSITIVE_FIXNUM_0x27 = 0x27,
		POSITIVE_FIXNUM_0x28 = 0x28,
		POSITIVE_FIXNUM_0x29 = 0x29,
		POSITIVE_FIXNUM_0x2A = 0x2A,
		POSITIVE_FIXNUM_0x2B = 0x2B,
		POSITIVE_FIXNUM_0x2C = 0x2C,
		POSITIVE_FIXNUM_0x2D = 0x2D,
		POSITIVE_FIXNUM_0x2E = 0x2E,
		POSITIVE_FIXNUM_0x2F = 0x2F,

		POSITIVE_FIXNUM_0x30 = 0x30,
		POSITIVE_FIXNUM_0x31 = 0x31,
		POSITIVE_FIXNUM_0x32 = 0x32,
		POSITIVE_FIXNUM_0x33 = 0x33,
		POSITIVE_FIXNUM_0x34 = 0x34,
		POSITIVE_FIXNUM_0x35 = 0x35,
		POSITIVE_FIXNUM_0x36 = 0x36,
		POSITIVE_FIXNUM_0x37 = 0x37,
		POSITIVE_FIXNUM_0x38 = 0x38,
		POSITIVE_FIXNUM_0x39 = 0x39,
		POSITIVE_FIXNUM_0x3A = 0x3A,
		POSITIVE_FIXNUM_0x3B = 0x3B,
		POSITIVE_FIXNUM_0x3C = 0x3C,
		POSITIVE_FIXNUM_0x3D = 0x3D,
		POSITIVE_FIXNUM_0x3E = 0x3E,
		POSITIVE_FIXNUM_0x3F = 0x3F,

		POSITIVE_FIXNUM_0x40 = 0x40,
		POSITIVE_FIXNUM_0x41 = 0x41,
		POSITIVE_FIXNUM_0x42 = 0x42,
		POSITIVE_FIXNUM_0x43 = 0x43,
		POSITIVE_FIXNUM_0x44 = 0x44,
		POSITIVE_FIXNUM_0x45 = 0x45,
		POSITIVE_FIXNUM_0x46 = 0x46,
		POSITIVE_FIXNUM_0x47 = 0x47,
		POSITIVE_FIXNUM_0x48 = 0x48,
		POSITIVE_FIXNUM_0x49 = 0x49,
		POSITIVE_FIXNUM_0x4A = 0x4A,
		POSITIVE_FIXNUM_0x4B = 0x4B,
		POSITIVE_FIXNUM_0x4C = 0x4C,
		POSITIVE_FIXNUM_0x4D = 0x4D,
		POSITIVE_FIXNUM_0x4E = 0x4E,
		POSITIVE_FIXNUM_0x4F = 0x4F,

		POSITIVE_FIXNUM_0x50 = 0x50,
		POSITIVE_FIXNUM_0x51 = 0x51,
		POSITIVE_FIXNUM_0x52 = 0x52,
		POSITIVE_FIXNUM_0x53 = 0x53,
		POSITIVE_FIXNUM_0x54 = 0x54,
		POSITIVE_FIXNUM_0x55 = 0x55,
		POSITIVE_FIXNUM_0x56 = 0x56,
		POSITIVE_FIXNUM_0x57 = 0x57,
		POSITIVE_FIXNUM_0x58 = 0x58,
		POSITIVE_FIXNUM_0x59 = 0x59,
		POSITIVE_FIXNUM_0x5A = 0x5A,
		POSITIVE_FIXNUM_0x5B = 0x5B,
		POSITIVE_FIXNUM_0x5C = 0x5C,
		POSITIVE_FIXNUM_0x5D = 0x5D,
		POSITIVE_FIXNUM_0x5E = 0x5E,
		POSITIVE_FIXNUM_0x5F = 0x5F,

		POSITIVE_FIXNUM_0x60 = 0x60,
		POSITIVE_FIXNUM_0x61 = 0x61,
		POSITIVE_FIXNUM_0x62 = 0x62,
		POSITIVE_FIXNUM_0x63 = 0x63,
		POSITIVE_FIXNUM_0x64 = 0x64,
		POSITIVE_FIXNUM_0x65 = 0x65,
		POSITIVE_FIXNUM_0x66 = 0x66,
		POSITIVE_FIXNUM_0x67 = 0x67,
		POSITIVE_FIXNUM_0x68 = 0x68,
		POSITIVE_FIXNUM_0x69 = 0x69,
		POSITIVE_FIXNUM_0x6A = 0x6A,
		POSITIVE_FIXNUM_0x6B = 0x6B,
		POSITIVE_FIXNUM_0x6C = 0x6C,
		POSITIVE_FIXNUM_0x6D = 0x6D,
		POSITIVE_FIXNUM_0x6E = 0x6E,
		POSITIVE_FIXNUM_0x6F = 0x6F,

		POSITIVE_FIXNUM_0x70 = 0x70,
		POSITIVE_FIXNUM_0x71 = 0x71,
		POSITIVE_FIXNUM_0x72 = 0x72,
		POSITIVE_FIXNUM_0x73 = 0x73,
		POSITIVE_FIXNUM_0x74 = 0x74,
		POSITIVE_FIXNUM_0x75 = 0x75,
		POSITIVE_FIXNUM_0x76 = 0x76,
		POSITIVE_FIXNUM_0x77 = 0x77,
		POSITIVE_FIXNUM_0x78 = 0x78,
		POSITIVE_FIXNUM_0x79 = 0x79,
		POSITIVE_FIXNUM_0x7A = 0x7A,
		POSITIVE_FIXNUM_0x7B = 0x7B,
		POSITIVE_FIXNUM_0x7C = 0x7C,
		POSITIVE_FIXNUM_0x7D = 0x7D,
		POSITIVE_FIXNUM_0x7E = 0x7E,
		POSITIVE_FIXNUM_0x7F = 0x7F,
#pragma endregion

#pragma region FIX_MAP 0x80 - 0x8F
		FIX_MAP = 0x80,
		FIX_MAP_0x1 = 0x81,
		FIX_MAP_0x2 = 0x82,
		FIX_MAP_0x3 = 0x83,
		FIX_MAP_0x4 = 0x84,
		FIX_MAP_0x5 = 0x85,
		FIX_MAP_0x6 = 0x86,
		FIX_MAP_0x7 = 0x87,
		FIX_MAP_0x8 = 0x88,
		FIX_MAP_0x9 = 0x89,
		FIX_MAP_0xA = 0x8A,
		FIX_MAP_0xB = 0x8B,
		FIX_MAP_0xC = 0x8C,
		FIX_MAP_0xD = 0x8D,
		FIX_MAP_0xE = 0x8E,
		FIX_MAP_0xF = 0x8F,
#pragma endregion

#pragma region FIX_ARRAY 0x90 - 0x9F
		FIX_ARRAY = 0x90,
		FIX_ARRAY_0x1 = 0x91,
		FIX_ARRAY_0x2 = 0x92,
		FIX_ARRAY_0x3 = 0x93,
		FIX_ARRAY_0x4 = 0x94,
		FIX_ARRAY_0x5 = 0x95,
		FIX_ARRAY_0x6 = 0x96,
		FIX_ARRAY_0x7 = 0x97,
		FIX_ARRAY_0x8 = 0x98,
		FIX_ARRAY_0x9 = 0x99,
		FIX_ARRAY_0xA = 0x9A,
		FIX_ARRAY_0xB = 0x9B,
		FIX_ARRAY_0xC = 0x9C,
		FIX_ARRAY_0xD = 0x9D,
		FIX_ARRAY_0xE = 0x9E,
		FIX_ARRAY_0xF = 0x9F,
#pragma endregion

#pragma region FIX_STR 0xA0 - 0xBF
		FIX_STR = 0xA0,
		FIX_STR_0x01 = 0xA1,
		FIX_STR_0x02 = 0xA2,
		FIX_STR_0x03 = 0xA3,
		FIX_STR_0x04 = 0xA4,
		FIX_STR_0x05 = 0xA5,
		FIX_STR_0x06 = 0xA6,
		FIX_STR_0x07 = 0xA7,
		FIX_STR_0x08 = 0xA8,
		FIX_STR_0x09 = 0xA9,
		FIX_STR_0x0A = 0xAA,
		FIX_STR_0x0B = 0xAB,
		FIX_STR_0x0C = 0xAC,
		FIX_STR_0x0D = 0xAD,
		FIX_STR_0x0E = 0xAE,
		FIX_STR_0x0F = 0xAF,
		FIX_STR_0x10 = 0xB0,
		FIX_STR_0x11 = 0xB1,
		FIX_STR_0x12 = 0xB2,
		FIX_STR_0x13 = 0xB3,
		FIX_STR_0x14 = 0xB4,
		FIX_STR_0x15 = 0xB5,
		FIX_STR_0x16 = 0xB6,
		FIX_STR_0x17 = 0xB7,
		FIX_STR_0x18 = 0xB8,
		FIX_STR_0x19 = 0xB9,
		FIX_STR_0x1A = 0xBA,
		FIX_STR_0x1B = 0xBB,
		FIX_STR_0x1C = 0xBC,
		FIX_STR_0x1D = 0xBD,
		FIX_STR_0x1E = 0xBE,
		FIX_STR_0x1F = 0xBF,
#pragma endregion

		NIL = 0xC0,
		NEVER_USED = 0xC1,
		FALSE = 0xC2,
		TRUE = 0xC3,

		BIN8 = 0xC4,
		BIN16 = 0xC5,
		BIN32 = 0xC6,

		EXT8 = 0xC7,
		EXT16 = 0xC8,
		EXT32 = 0xC9,

		FLOAT = 0xCA,
		DOUBLE = 0xCB,
		UINT8 = 0xCC,
		UINT16 = 0xCD,
		UINT32 = 0xCE,
		UINT64 = 0xCF,
		INT8 = 0xD0,
		INT16 = 0xD1,
		INT32 = 0xD2,
		INT64 = 0xD3,

		FIX_EXT_1 = 0xD4,
		FIX_EXT_2 = 0xD5,
		FIX_EXT_4 = 0xD6,
		FIX_EXT_8 = 0xD7,
		FIX_EXT_16 = 0xD8,

		STR8 = 0xD9,
		STR16 = 0xDA,
		STR32 = 0xDB,

		ARRAY16 = 0xDC,
		ARRAY32 = 0xDD,
		MAP16 = 0xDE,
		MAP32 = 0xDF,

#pragma region NEGATIVE_FIXNUM 0xE0 - 0xFF
		NEGATIVE_FIXNUM = 0xE0, // 1110 0000 = -32
		NEGATIVE_FIXNUM_0x1F = 0xE1, // -31
		NEGATIVE_FIXNUM_0x1E = 0xE2,
		NEGATIVE_FIXNUM_0x1D = 0xE3,
		NEGATIVE_FIXNUM_0x1C = 0xE4,
		NEGATIVE_FIXNUM_0x1B = 0xE5,
		NEGATIVE_FIXNUM_0x1A = 0xE6,
		NEGATIVE_FIXNUM_0x19 = 0xE7,
		NEGATIVE_FIXNUM_0x18 = 0xE8,
		NEGATIVE_FIXNUM_0x17 = 0xE9,
		NEGATIVE_FIXNUM_0x16 = 0xEA,
		NEGATIVE_FIXNUM_0x15 = 0xEB,
		NEGATIVE_FIXNUM_0x14 = 0xEC,
		NEGATIVE_FIXNUM_0x13 = 0xED,
		NEGATIVE_FIXNUM_0x12 = 0xEE,
		NEGATIVE_FIXNUM_0x11 = 0xEF,
		NEGATIVE_FIXNUM_0x10 = 0xF0,
		NEGATIVE_FIXNUM_0x0F = 0xF1,
		NEGATIVE_FIXNUM_0x0E = 0xF2,
		NEGATIVE_FIXNUM_0x0D = 0xF3,
		NEGATIVE_FIXNUM_0x0C = 0xF4,
		NEGATIVE_FIXNUM_0x0B = 0xF5,
		NEGATIVE_FIXNUM_0x0A = 0xF6,
		NEGATIVE_FIXNUM_0x09 = 0xF7,
		NEGATIVE_FIXNUM_0x08 = 0xF8,
		NEGATIVE_FIXNUM_0x07 = 0xF9,
		NEGATIVE_FIXNUM_0x06 = 0xFA,
		NEGATIVE_FIXNUM_0x05 = 0xFB,
		NEGATIVE_FIXNUM_0x04 = 0xFC,
		NEGATIVE_FIXNUM_0x03 = 0xFD,
		NEGATIVE_FIXNUM_0x02 = 0xFE,
		NEGATIVE_FIXNUM_0x01 = 0xFF, // -1
#pragma endregion
	};

	class packer
	{
		std::vector<std::uint8_t> m_buffer;

	public:
		packer& pack_nil()
		{
			m_buffer.push_back(pack_type::NIL);
			return *this;
		}

		template<typename T>
		packer& pack_integer(T n)
		{
			if (n < 0)
			{
				if (n >= -32)
				{
					m_buffer.push_back(pack_type::NEGATIVE_FIXNUM
						| static_cast<std::uint8_t>((n + 32)));
				}
				else {
					throw std::exception("not implemented");
				}
			}
			else {
				if (n <= 0x7F)
				{
					m_buffer.push_back(static_cast<std::uint8_t>(n));
				}
				else if (n <= 0xFF)
				{
					m_buffer.push_back(pack_type::UINT8);
					m_buffer.push_back(static_cast<std::uint8_t>(n));
				}
				else if (n <= 0xFFFF)
				{
					m_buffer.push_back(pack_type::UINT16);
					// network byteorder
					auto _n = static_cast<std::uint16_t>(n);
					m_buffer.push_back((_n>>8) & 0xff);
					m_buffer.push_back(_n & 0xff);
				}
				else if (n <= 0xFFFFFFFF)
				{
					m_buffer.push_back(pack_type::UINT32);
					// network byteorder
					auto _n = static_cast<std::uint32_t>(n);
					m_buffer.push_back((_n >> 24) & 0xff);
					m_buffer.push_back((_n >> 16) & 0xff);
					m_buffer.push_back((_n >> 8) & 0xff);
					m_buffer.push_back(_n & 0xff);
				}
				else {
					throw std::exception("not implemented");
				}
			}
			return *this;
		}

		packer& pack_bool(bool isTrue)
		{
			if (isTrue) {
				m_buffer.push_back(pack_type::TRUE);
			}
			else {
				m_buffer.push_back(pack_type::FALSE);
			}
			return *this;
		}

		const std::vector<std::uint8_t> &get_payload()const { return m_buffer; }
	};

	class parser
	{
		const std::uint8_t *m_p;
		int m_size;

	public:
		parser(const std::uint8_t *p, int size)
			: m_p(p)
		{
			// ToDo
		}

		template<typename T>
		T get_integer()const
		{
			auto type = static_cast<pack_type>(m_p[0]);
			if (type < 0x70) {
				// small int
				return type;
			}

			switch (type)
			{
			case pack_type::UINT8: return m_p[1];
			case pack_type::UINT16: return (m_p[1] << 8) | m_p[2];
			case pack_type::UINT32: return (m_p[1] << 24 | m_p[2] << 16 | m_p[3] << 8 | m_p[4]);
			case pack_type::NEGATIVE_FIXNUM: return -32;
			case pack_type::NEGATIVE_FIXNUM_0x1F: return -31;
			case pack_type::NEGATIVE_FIXNUM_0x1E: return -30;
			case pack_type::NEGATIVE_FIXNUM_0x1D: return -29;
			case pack_type::NEGATIVE_FIXNUM_0x1C: return -28;
			case pack_type::NEGATIVE_FIXNUM_0x1B: return -27;
			case pack_type::NEGATIVE_FIXNUM_0x1A: return -26;
			case pack_type::NEGATIVE_FIXNUM_0x19: return -25;
			case pack_type::NEGATIVE_FIXNUM_0x18: return -24;
			case pack_type::NEGATIVE_FIXNUM_0x17: return -23;
			case pack_type::NEGATIVE_FIXNUM_0x16: return -22;
			case pack_type::NEGATIVE_FIXNUM_0x15: return -21;
			case pack_type::NEGATIVE_FIXNUM_0x14: return -20;
			case pack_type::NEGATIVE_FIXNUM_0x13: return -19;
			case pack_type::NEGATIVE_FIXNUM_0x12: return -18;
			case pack_type::NEGATIVE_FIXNUM_0x11: return -17;
			case pack_type::NEGATIVE_FIXNUM_0x10: return -16;
			case pack_type::NEGATIVE_FIXNUM_0x0F: return -15;
			case pack_type::NEGATIVE_FIXNUM_0x0E: return -14;
			case pack_type::NEGATIVE_FIXNUM_0x0D: return -13;
			case pack_type::NEGATIVE_FIXNUM_0x0C: return -12;
			case pack_type::NEGATIVE_FIXNUM_0x0B: return -11;
			case pack_type::NEGATIVE_FIXNUM_0x0A: return -10;
			case pack_type::NEGATIVE_FIXNUM_0x09: return -9;
			case pack_type::NEGATIVE_FIXNUM_0x08: return -8;
			case pack_type::NEGATIVE_FIXNUM_0x07: return -7;
			case pack_type::NEGATIVE_FIXNUM_0x06: return -6;
			case pack_type::NEGATIVE_FIXNUM_0x05: return -5;
			case pack_type::NEGATIVE_FIXNUM_0x04: return -4;
			case pack_type::NEGATIVE_FIXNUM_0x03: return -3;
			case pack_type::NEGATIVE_FIXNUM_0x02: return -2;
			case pack_type::NEGATIVE_FIXNUM_0x01: return -1;
			}

			throw std::exception("not implemented");
		}
	};
}
