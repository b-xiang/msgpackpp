#pragma once
#include <cstdint>
#include <vector>
#include <limits>
#include <iterator>
#include <string>
#include <algorithm>


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

	private:
		template<class Range>
		void push(const Range &r)
		{
			m_buffer.insert(m_buffer.end(), std::begin(r), std::end(r));
		}

		template<typename T>
		void push_number_reverse(T n)
		{
			auto size = sizeof(T);
			auto _p = reinterpret_cast<std::uint8_t*>(&n) + (size - 1);
			for (int i = 0; i < size; ++i, --_p)
			{
				m_buffer.push_back(*_p);
			}
		}

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
				else if (n >= std::numeric_limits<std::int8_t>::min())
				{
					m_buffer.push_back(pack_type::INT8);
					m_buffer.push_back(n);
				}
				else if (n >= std::numeric_limits<std::int16_t>::min())
				{
					m_buffer.push_back(pack_type::INT16);
					// network byteorder
					push_number_reverse(static_cast<std::int16_t>(n));
				}
				else if (n >= std::numeric_limits<std::int32_t>::min())
				{
					m_buffer.push_back(pack_type::INT32);
					// network byteorder
					push_number_reverse(static_cast<std::int32_t>(n));
				}
				else if (n >= std::numeric_limits<std::int64_t>::min())
				{
					m_buffer.push_back(pack_type::INT64);
					// network byteorder
					push_number_reverse(static_cast<std::int64_t>(n));
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
				else if (n <= std::numeric_limits<std::uint8_t>::max())
				{
					m_buffer.push_back(pack_type::UINT8);
					m_buffer.push_back(static_cast<std::uint8_t>(n));
				}
				else if (n <= std::numeric_limits<std::uint16_t>::max())
				{
					m_buffer.push_back(pack_type::UINT16);
					// network byteorder
					push_number_reverse(static_cast<std::uint16_t>(n));
				}
				else if (n <= std::numeric_limits<std::uint32_t>::max())
				{
					m_buffer.push_back(pack_type::UINT32);
					// network byteorder
					push_number_reverse(static_cast<std::uint32_t>(n));
				}
				else if (n <= std::numeric_limits<std::uint64_t>::max()) {
					m_buffer.push_back(pack_type::UINT64);
					// network byteorder
					push_number_reverse(static_cast<std::uint64_t>(n));
				}
				else {
					throw std::exception("not implemented");
				}
			}
			return *this;
		}

		packer& pack_float(float n)
		{
			m_buffer.push_back(pack_type::FLOAT);
			push_number_reverse(n);
			return *this;
		}

		packer& pack_double(double n)
		{
			m_buffer.push_back(pack_type::DOUBLE);
			push_number_reverse(n);
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

		packer& pack_str(const char *str)
		{
			return pack_str(std::string(str));
		}

		template <class Range>
		packer& pack_str(const Range &r)
		{
			auto size = std::distance(std::begin(r), std::end(r));
			if (size < 32)
			{
				m_buffer.push_back(pack_type::FIX_STR | static_cast<std::uint8_t>(size));
				push(r);
			}
			else if (size <= std::numeric_limits<std::uint8_t>::max())
			{
				m_buffer.push_back(pack_type::STR8);
				m_buffer.push_back(static_cast<std::uint8_t>(size));
				push(r);
			}
			else if (size <= std::numeric_limits<std::uint16_t>::max())
			{
				m_buffer.push_back(pack_type::STR16);
				push_number_reverse(static_cast<std::uint16_t>(size));
				push(r);
			}
			else if (size <= std::numeric_limits<std::uint32_t>::max())
			{
				m_buffer.push_back(pack_type::STR32);
				push_number_reverse(static_cast<std::uint32_t>(size));
				push(r);
			}
			else {
				throw std::exception("not implemented");
			}
			return *this;
		}

		template <class Range>
		packer& pack_bin(const Range &r)
		{
			auto size = std::distance(std::begin(r), std::end(r));
			if (size <= std::numeric_limits<std::uint8_t>::max())
			{
				m_buffer.push_back(pack_type::BIN8);
				m_buffer.push_back(static_cast<std::uint8_t>(size));
				push(r);
			}
			else if (size <= std::numeric_limits<std::uint16_t>::max())
			{
				m_buffer.push_back(pack_type::BIN16);
				push_number_reverse(static_cast<std::uint16_t>(size));
				push(r);
			}
			else if (size <= std::numeric_limits<std::uint32_t>::max())
			{
				m_buffer.push_back(pack_type::BIN32);
				push_number_reverse(static_cast<std::uint32_t>(size));
				push(r);
			}
			else {
				throw std::exception("not implemented");
			}
			return *this;
		}

		packer& pack_array(int n)
		{
			if (n < 16)
			{
				m_buffer.push_back(pack_type::FIX_ARRAY | static_cast<std::uint8_t>(n));
			}
			else if (n < std::numeric_limits<std::uint16_t>::max())
			{
				m_buffer.push_back(pack_type::ARRAY16);
				push_number_reverse(static_cast<std::uint16_t>(n));
			}
			else if (n < std::numeric_limits<std::uint32_t>::max())
			{
				m_buffer.push_back(pack_type::ARRAY32);
				push_number_reverse(static_cast<std::uint32_t>(n));
			}
			else {
				throw std::exception("not implemented");
			}
			return *this;
		}

		const std::vector<std::uint8_t> &get_payload()const { return m_buffer; }
	};

	template<typename T>
	packer& operator<<(packer &p, const T &t)
	{
		return serialize(p, t);
	}
	template<typename T>
	packer& serialize(packer &p, const T &t)
	{
		throw std::exception("not implemented");
	}
	template<>
	packer& serialize(packer &p, const int &t)
	{
		return p.pack_integer(t);
	}
	packer& serialize(packer &p, const char* t)
	{
		return p.pack_str(t);
	}
	packer& serialize(packer &p, const bool &t)
	{
		return p.pack_bool(t);
	}
	packer& serialize(packer &p, const float &t)
	{
		return p.pack_float(t);
	}
	packer& serialize(packer &p, const double &t)
	{
		return p.pack_double(t);
	}

	class parser
	{
		const std::uint8_t *m_p;
		int m_size;

		template<typename T>
		T body_number()const
		{
			switch (sizeof(T))
			{
			case 1: return m_p[1];
			case 2: return (m_p[1] << 8) | m_p[2];
			case 4:
			{
				std::uint8_t buf[] = {
					m_p[4], m_p[3], m_p[2], m_p[1]
				};
				return *reinterpret_cast<T*>(buf);
			}
			case 8:
			{
				std::uint8_t buf[] = {
					m_p[8], m_p[7], m_p[6], m_p[5], m_p[4], m_p[3], m_p[2], m_p[1]
				};
				return *reinterpret_cast<T*>(buf);
			}
			}
		}

	public:
		parser(const std::uint8_t *p, int size)
			: m_p(p)
		{
			// ToDo
		}

#pragma region leaf
		bool get_bool()const
		{
			auto type = static_cast<pack_type>(m_p[0]);
			switch (type)
			{
			case pack_type::TRUE: return true;
			case pack_type::FALSE: return false;
			}

			throw std::exception("not bool");
		}

		std::string get_string()const
		{
			auto type = static_cast<pack_type>(m_p[0]);
			switch (type)
			{
			case pack_type::STR32: return std::string(m_p + 1 + 4, m_p + 1 + 4 + body_number<std::uint32_t>());
			case pack_type::STR16: return std::string(m_p + 1 + 2, m_p + 1 + 2 + body_number<std::uint16_t>());
			case pack_type::STR8: return std::string(m_p + 1 + 1, m_p + 1 + 1 + body_number<std::uint8_t>());
			case pack_type::FIX_STR: return "";
			case pack_type::FIX_STR_0x01: return std::string(m_p + 1, m_p + 2);
			case pack_type::FIX_STR_0x02: return std::string(m_p + 1, m_p + 3);
			case pack_type::FIX_STR_0x03: return std::string(m_p + 1, m_p + 4);
			case pack_type::FIX_STR_0x04: return std::string(m_p + 1, m_p + 5);
			case pack_type::FIX_STR_0x05: return std::string(m_p + 1, m_p + 6);
			case pack_type::FIX_STR_0x06: return std::string(m_p + 1, m_p + 7);
			case pack_type::FIX_STR_0x07: return std::string(m_p + 1, m_p + 8);
			case pack_type::FIX_STR_0x08: return std::string(m_p + 1, m_p + 9);
			case pack_type::FIX_STR_0x09: return std::string(m_p + 1, m_p + 10);
			case pack_type::FIX_STR_0x0A: return std::string(m_p + 1, m_p + 11);
			case pack_type::FIX_STR_0x0B: return std::string(m_p + 1, m_p + 12);
			case pack_type::FIX_STR_0x0C: return std::string(m_p + 1, m_p + 13);
			case pack_type::FIX_STR_0x0D: return std::string(m_p + 1, m_p + 14);
			case pack_type::FIX_STR_0x0E: return std::string(m_p + 1, m_p + 15);
			case pack_type::FIX_STR_0x0F: return std::string(m_p + 1, m_p + 16);
			case pack_type::FIX_STR_0x10: return std::string(m_p + 1, m_p + 17);
			case pack_type::FIX_STR_0x11: return std::string(m_p + 1, m_p + 18);
			case pack_type::FIX_STR_0x12: return std::string(m_p + 1, m_p + 19);
			case pack_type::FIX_STR_0x13: return std::string(m_p + 1, m_p + 20);
			case pack_type::FIX_STR_0x14: return std::string(m_p + 1, m_p + 21);
			case pack_type::FIX_STR_0x15: return std::string(m_p + 1, m_p + 22);
			case pack_type::FIX_STR_0x16: return std::string(m_p + 1, m_p + 23);
			case pack_type::FIX_STR_0x17: return std::string(m_p + 1, m_p + 24);
			case pack_type::FIX_STR_0x18: return std::string(m_p + 1, m_p + 25);
			case pack_type::FIX_STR_0x19: return std::string(m_p + 1, m_p + 26);
			case pack_type::FIX_STR_0x1A: return std::string(m_p + 1, m_p + 27);
			case pack_type::FIX_STR_0x1B: return std::string(m_p + 1, m_p + 28);
			case pack_type::FIX_STR_0x1C: return std::string(m_p + 1, m_p + 29);
			case pack_type::FIX_STR_0x1D: return std::string(m_p + 1, m_p + 30);
			case pack_type::FIX_STR_0x1E: return std::string(m_p + 1, m_p + 31);
			case pack_type::FIX_STR_0x1F: return std::string(m_p + 1, m_p + 32);
			}

			throw std::exception("not implemented");
		}

		std::vector<std::uint8_t> get_binary()const
		{
			auto type = static_cast<pack_type>(m_p[0]);
			switch (type)
			{
			case pack_type::BIN32: return std::vector<std::uint8_t>(m_p + 1 + 4, m_p + 1 + 4 + body_number<std::uint32_t>());
			case pack_type::BIN16: return std::vector<std::uint8_t>(m_p + 1 + 2, m_p + 1 + 2 + body_number<std::uint16_t>());
			case pack_type::BIN8: return std::vector<std::uint8_t>(m_p + 1 + 1, m_p + 1 + 1 + body_number<std::uint8_t>());
			}

			throw std::exception("not implemented");
		}

		template<typename T>
		T get_number()const
		{
			auto type = static_cast<pack_type>(m_p[0]);
			if (type <= 0x7f) {
				// small int
				return type;
			}

			switch (type)
			{
			case pack_type::UINT8: return m_p[1];
			case pack_type::UINT16: return body_number<std::uint16_t>();
			case pack_type::UINT32: return body_number<std::uint32_t>();
			case pack_type::UINT64: return body_number<std::uint64_t>();
			case pack_type::INT8: return m_p[1];
			case pack_type::INT16: return body_number<std::int16_t>();
			case pack_type::INT32: return body_number<std::int32_t>();
			case pack_type::INT64: return body_number<std::int64_t>();
			case pack_type::FLOAT: return body_number<float>();
			case pack_type::DOUBLE: return body_number<double>();
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
#pragma endregion

		bool is_array()const
		{
			auto type = static_cast<pack_type>(m_p[0]);
			switch (type)
			{
			case pack_type::FIX_ARRAY:
			case pack_type::FIX_ARRAY_0x1:
			case pack_type::FIX_ARRAY_0x2:
			case pack_type::FIX_ARRAY_0x3:
			case pack_type::FIX_ARRAY_0x4:
			case pack_type::FIX_ARRAY_0x5:
			case pack_type::FIX_ARRAY_0x6:
			case pack_type::FIX_ARRAY_0x7:
			case pack_type::FIX_ARRAY_0x8:
			case pack_type::FIX_ARRAY_0x9:
			case pack_type::FIX_ARRAY_0xA:
			case pack_type::FIX_ARRAY_0xB:
			case pack_type::FIX_ARRAY_0xC:
			case pack_type::FIX_ARRAY_0xD:
			case pack_type::FIX_ARRAY_0xE:
			case pack_type::FIX_ARRAY_0xF:
			case pack_type::ARRAY16:
			case pack_type::ARRAY32:
				return true;
			}

			return false;
		}

		int count()const
		{
			auto type = static_cast<pack_type>(m_p[0]);
			switch (type)
			{
			case pack_type::FIX_ARRAY: return 0;
			case pack_type::FIX_ARRAY_0x1: return 1;
			case pack_type::FIX_ARRAY_0x2:return 2;
			case pack_type::FIX_ARRAY_0x3:return 3;
			case pack_type::FIX_ARRAY_0x4:return 4;
			case pack_type::FIX_ARRAY_0x5:return 5;
			case pack_type::FIX_ARRAY_0x6:return 6;
			case pack_type::FIX_ARRAY_0x7:return 7;
			case pack_type::FIX_ARRAY_0x8:return 8;
			case pack_type::FIX_ARRAY_0x9:return 9;
			case pack_type::FIX_ARRAY_0xA:return 10;
			case pack_type::FIX_ARRAY_0xB:return 11;
			case pack_type::FIX_ARRAY_0xC:return 12;
			case pack_type::FIX_ARRAY_0xD:return 13;
			case pack_type::FIX_ARRAY_0xE:return 14;
			case pack_type::FIX_ARRAY_0xF:return 15;
			case pack_type::ARRAY16: return body_number<std::uint16_t>();
			case pack_type::ARRAY32: return body_number<std::uint32_t>();
			}

			throw std::exception("not array or map");
		}

	private:
		int body_index()const
		{
			auto type = static_cast<pack_type>(m_p[0]);
			switch (type)
			{
#pragma region POSITIVE_FIXNUM 0x00 - 0x7F
			case POSITIVE_FIXNUM: return 1;
			case POSITIVE_FIXNUM_0x01: return 1;
			case POSITIVE_FIXNUM_0x02: return 1;
			case POSITIVE_FIXNUM_0x03: return 1;
			case POSITIVE_FIXNUM_0x04: return 1;
			case POSITIVE_FIXNUM_0x05: return 1;
			case POSITIVE_FIXNUM_0x06: return 1;
			case POSITIVE_FIXNUM_0x07: return 1;
			case POSITIVE_FIXNUM_0x08: return 1;
			case POSITIVE_FIXNUM_0x09: return 1;
			case POSITIVE_FIXNUM_0x0A: return 1;
			case POSITIVE_FIXNUM_0x0B: return 1;
			case POSITIVE_FIXNUM_0x0C: return 1;
			case POSITIVE_FIXNUM_0x0D: return 1;
			case POSITIVE_FIXNUM_0x0E: return 1;
			case POSITIVE_FIXNUM_0x0F: return 1;

			case POSITIVE_FIXNUM_0x10: return 1;
			case POSITIVE_FIXNUM_0x11: return 1;
			case POSITIVE_FIXNUM_0x12: return 1;
			case POSITIVE_FIXNUM_0x13: return 1;
			case POSITIVE_FIXNUM_0x14: return 1;
			case POSITIVE_FIXNUM_0x15: return 1;
			case POSITIVE_FIXNUM_0x16: return 1;
			case POSITIVE_FIXNUM_0x17: return 1;
			case POSITIVE_FIXNUM_0x18: return 1;
			case POSITIVE_FIXNUM_0x19: return 1;
			case POSITIVE_FIXNUM_0x1A: return 1;
			case POSITIVE_FIXNUM_0x1B: return 1;
			case POSITIVE_FIXNUM_0x1C: return 1;
			case POSITIVE_FIXNUM_0x1D: return 1;
			case POSITIVE_FIXNUM_0x1E: return 1;
			case POSITIVE_FIXNUM_0x1F: return 1;

			case POSITIVE_FIXNUM_0x20: return 1;
			case POSITIVE_FIXNUM_0x21: return 1;
			case POSITIVE_FIXNUM_0x22: return 1;
			case POSITIVE_FIXNUM_0x23: return 1;
			case POSITIVE_FIXNUM_0x24: return 1;
			case POSITIVE_FIXNUM_0x25: return 1;
			case POSITIVE_FIXNUM_0x26: return 1;
			case POSITIVE_FIXNUM_0x27: return 1;
			case POSITIVE_FIXNUM_0x28: return 1;
			case POSITIVE_FIXNUM_0x29: return 1;
			case POSITIVE_FIXNUM_0x2A: return 1;
			case POSITIVE_FIXNUM_0x2B: return 1;
			case POSITIVE_FIXNUM_0x2C: return 1;
			case POSITIVE_FIXNUM_0x2D: return 1;
			case POSITIVE_FIXNUM_0x2E: return 1;
			case POSITIVE_FIXNUM_0x2F: return 1;

			case POSITIVE_FIXNUM_0x30: return 1;
			case POSITIVE_FIXNUM_0x31: return 1;
			case POSITIVE_FIXNUM_0x32: return 1;
			case POSITIVE_FIXNUM_0x33: return 1;
			case POSITIVE_FIXNUM_0x34: return 1;
			case POSITIVE_FIXNUM_0x35: return 1;
			case POSITIVE_FIXNUM_0x36: return 1;
			case POSITIVE_FIXNUM_0x37: return 1;
			case POSITIVE_FIXNUM_0x38: return 1;
			case POSITIVE_FIXNUM_0x39: return 1;
			case POSITIVE_FIXNUM_0x3A: return 1;
			case POSITIVE_FIXNUM_0x3B: return 1;
			case POSITIVE_FIXNUM_0x3C: return 1;
			case POSITIVE_FIXNUM_0x3D: return 1;
			case POSITIVE_FIXNUM_0x3E: return 1;
			case POSITIVE_FIXNUM_0x3F: return 1;

			case POSITIVE_FIXNUM_0x40: return 1;
			case POSITIVE_FIXNUM_0x41: return 1;
			case POSITIVE_FIXNUM_0x42: return 1;
			case POSITIVE_FIXNUM_0x43: return 1;
			case POSITIVE_FIXNUM_0x44: return 1;
			case POSITIVE_FIXNUM_0x45: return 1;
			case POSITIVE_FIXNUM_0x46: return 1;
			case POSITIVE_FIXNUM_0x47: return 1;
			case POSITIVE_FIXNUM_0x48: return 1;
			case POSITIVE_FIXNUM_0x49: return 1;
			case POSITIVE_FIXNUM_0x4A: return 1;
			case POSITIVE_FIXNUM_0x4B: return 1;
			case POSITIVE_FIXNUM_0x4C: return 1;
			case POSITIVE_FIXNUM_0x4D: return 1;
			case POSITIVE_FIXNUM_0x4E: return 1;
			case POSITIVE_FIXNUM_0x4F: return 1;

			case POSITIVE_FIXNUM_0x50: return 1;
			case POSITIVE_FIXNUM_0x51: return 1;
			case POSITIVE_FIXNUM_0x52: return 1;
			case POSITIVE_FIXNUM_0x53: return 1;
			case POSITIVE_FIXNUM_0x54: return 1;
			case POSITIVE_FIXNUM_0x55: return 1;
			case POSITIVE_FIXNUM_0x56: return 1;
			case POSITIVE_FIXNUM_0x57: return 1;
			case POSITIVE_FIXNUM_0x58: return 1;
			case POSITIVE_FIXNUM_0x59: return 1;
			case POSITIVE_FIXNUM_0x5A: return 1;
			case POSITIVE_FIXNUM_0x5B: return 1;
			case POSITIVE_FIXNUM_0x5C: return 1;
			case POSITIVE_FIXNUM_0x5D: return 1;
			case POSITIVE_FIXNUM_0x5E: return 1;
			case POSITIVE_FIXNUM_0x5F: return 1;

			case POSITIVE_FIXNUM_0x60: return 1;
			case POSITIVE_FIXNUM_0x61: return 1;
			case POSITIVE_FIXNUM_0x62: return 1;
			case POSITIVE_FIXNUM_0x63: return 1;
			case POSITIVE_FIXNUM_0x64: return 1;
			case POSITIVE_FIXNUM_0x65: return 1;
			case POSITIVE_FIXNUM_0x66: return 1;
			case POSITIVE_FIXNUM_0x67: return 1;
			case POSITIVE_FIXNUM_0x68: return 1;
			case POSITIVE_FIXNUM_0x69: return 1;
			case POSITIVE_FIXNUM_0x6A: return 1;
			case POSITIVE_FIXNUM_0x6B: return 1;
			case POSITIVE_FIXNUM_0x6C: return 1;
			case POSITIVE_FIXNUM_0x6D: return 1;
			case POSITIVE_FIXNUM_0x6E: return 1;
			case POSITIVE_FIXNUM_0x6F: return 1;

			case POSITIVE_FIXNUM_0x70: return 1;
			case POSITIVE_FIXNUM_0x71: return 1;
			case POSITIVE_FIXNUM_0x72: return 1;
			case POSITIVE_FIXNUM_0x73: return 1;
			case POSITIVE_FIXNUM_0x74: return 1;
			case POSITIVE_FIXNUM_0x75: return 1;
			case POSITIVE_FIXNUM_0x76: return 1;
			case POSITIVE_FIXNUM_0x77: return 1;
			case POSITIVE_FIXNUM_0x78: return 1;
			case POSITIVE_FIXNUM_0x79: return 1;
			case POSITIVE_FIXNUM_0x7A: return 1;
			case POSITIVE_FIXNUM_0x7B: return 1;
			case POSITIVE_FIXNUM_0x7C: return 1;
			case POSITIVE_FIXNUM_0x7D: return 1;
			case POSITIVE_FIXNUM_0x7E: return 1;
			case POSITIVE_FIXNUM_0x7F: return 1;
#pragma endregion

#pragma region FIX_MAP 0x80 - 0x8F
			case FIX_MAP: return 1;
			case FIX_MAP_0x1: return 1;
			case FIX_MAP_0x2: return 1;
			case FIX_MAP_0x3: return 1;
			case FIX_MAP_0x4: return 1;
			case FIX_MAP_0x5: return 1;
			case FIX_MAP_0x6: return 1;
			case FIX_MAP_0x7: return 1;
			case FIX_MAP_0x8: return 1;
			case FIX_MAP_0x9: return 1;
			case FIX_MAP_0xA: return 1;
			case FIX_MAP_0xB: return 1;
			case FIX_MAP_0xC: return 1;
			case FIX_MAP_0xD: return 1;
			case FIX_MAP_0xE: return 1;
			case FIX_MAP_0xF: return 1;
#pragma endregion

#pragma region FIX_ARRAY 0x90 - 0x9F
			case FIX_ARRAY: return 1;
			case FIX_ARRAY_0x1: return 1;
			case FIX_ARRAY_0x2: return 1;
			case FIX_ARRAY_0x3: return 1;
			case FIX_ARRAY_0x4: return 1;
			case FIX_ARRAY_0x5: return 1;
			case FIX_ARRAY_0x6: return 1;
			case FIX_ARRAY_0x7: return 1;
			case FIX_ARRAY_0x8: return 1;
			case FIX_ARRAY_0x9: return 1;
			case FIX_ARRAY_0xA: return 1;
			case FIX_ARRAY_0xB: return 1;
			case FIX_ARRAY_0xC: return 1;
			case FIX_ARRAY_0xD: return 1;
			case FIX_ARRAY_0xE: return 1;
			case FIX_ARRAY_0xF: return 1;
#pragma endregion

#pragma region FIX_STR 0xA0 - 0xBF
			case FIX_STR: return 1;
			case FIX_STR_0x01: return 1;
			case FIX_STR_0x02: return 1;
			case FIX_STR_0x03: return 1;
			case FIX_STR_0x04: return 1;
			case FIX_STR_0x05: return 1;
			case FIX_STR_0x06: return 1;
			case FIX_STR_0x07: return 1;
			case FIX_STR_0x08: return 1;
			case FIX_STR_0x09: return 1;
			case FIX_STR_0x0A: return 1;
			case FIX_STR_0x0B: return 1;
			case FIX_STR_0x0C: return 1;
			case FIX_STR_0x0D: return 1;
			case FIX_STR_0x0E: return 1;
			case FIX_STR_0x0F: return 1;
			case FIX_STR_0x10: return 1;
			case FIX_STR_0x11: return 1;
			case FIX_STR_0x12: return 1;
			case FIX_STR_0x13: return 1;
			case FIX_STR_0x14: return 1;
			case FIX_STR_0x15: return 1;
			case FIX_STR_0x16: return 1;
			case FIX_STR_0x17: return 1;
			case FIX_STR_0x18: return 1;
			case FIX_STR_0x19: return 1;
			case FIX_STR_0x1A: return 1;
			case FIX_STR_0x1B: return 1;
			case FIX_STR_0x1C: return 1;
			case FIX_STR_0x1D: return 1;
			case FIX_STR_0x1E: return 1;
			case FIX_STR_0x1F: return 1;
#pragma endregion

			case NIL: return 1;
			case NEVER_USED: throw std::exception("no size");
			case FALSE: return 1;
			case TRUE: return 1;

			case BIN8: return 1+1;
			case BIN16: return 1+2;
			case BIN32: return 1+4;

			case EXT8: throw std::exception("not implemented");
			case EXT16: throw std::exception("not implemented");
			case EXT32: throw std::exception("not implemented");

			case FLOAT: return 1;
			case DOUBLE: return 1;
			case UINT8: return 1;
			case UINT16: return 1;
			case UINT32: return 1;
			case UINT64: return 1;
			case INT8: return 1;
			case INT16: return 1;
			case INT32: return 1;
			case INT64: return 1;

			case FIX_EXT_1: throw std::exception("not implemented");
			case FIX_EXT_2: throw std::exception("not implemented");
			case FIX_EXT_4: throw std::exception("not implemented");
			case FIX_EXT_8: throw std::exception("not implemented");
			case FIX_EXT_16: throw std::exception("not implemented");

			case STR8: return 1+1;
			case STR16: return 1+2;
			case STR32: return 1+4;

			case ARRAY16: return 1+2;
			case ARRAY32: return 1+4;
			case MAP16: return 1+2;
			case MAP32: return 1+4;

#pragma region NEGATIVE_FIXNUM 0xE0 - 0xFF
			case NEGATIVE_FIXNUM: return 1;
			case NEGATIVE_FIXNUM_0x1F: return 1;
			case NEGATIVE_FIXNUM_0x1E: return 1;
			case NEGATIVE_FIXNUM_0x1D: return 1;
			case NEGATIVE_FIXNUM_0x1C: return 1;
			case NEGATIVE_FIXNUM_0x1B: return 1;
			case NEGATIVE_FIXNUM_0x1A: return 1;
			case NEGATIVE_FIXNUM_0x19: return 1;
			case NEGATIVE_FIXNUM_0x18: return 1;
			case NEGATIVE_FIXNUM_0x17: return 1;
			case NEGATIVE_FIXNUM_0x16: return 1;
			case NEGATIVE_FIXNUM_0x15: return 1;
			case NEGATIVE_FIXNUM_0x14: return 1;
			case NEGATIVE_FIXNUM_0x13: return 1;
			case NEGATIVE_FIXNUM_0x12: return 1;
			case NEGATIVE_FIXNUM_0x11: return 1;
			case NEGATIVE_FIXNUM_0x10: return 1;
			case NEGATIVE_FIXNUM_0x0F: return 1;
			case NEGATIVE_FIXNUM_0x0E: return 1;
			case NEGATIVE_FIXNUM_0x0D: return 1;
			case NEGATIVE_FIXNUM_0x0C: return 1;
			case NEGATIVE_FIXNUM_0x0B: return 1;
			case NEGATIVE_FIXNUM_0x0A: return 1;
			case NEGATIVE_FIXNUM_0x09: return 1;
			case NEGATIVE_FIXNUM_0x08: return 1;
			case NEGATIVE_FIXNUM_0x07: return 1;
			case NEGATIVE_FIXNUM_0x06: return 1;
			case NEGATIVE_FIXNUM_0x05: return 1;
			case NEGATIVE_FIXNUM_0x04: return 1;
			case NEGATIVE_FIXNUM_0x03: return 1;
			case NEGATIVE_FIXNUM_0x02: return 1;
			case NEGATIVE_FIXNUM_0x01: return 1;
#pragma endregion

			}

			throw std::exception("not implemented");
		}

	public:
		parser operator[](int index)const
		{
			auto offset = body_index();
			auto current = parser(m_p + offset, m_size - offset);
			for (int i = 0; i < index; ++i)
			{
				current = current.next();
			}
			return current;
		}

		int body_size()const
		{
			auto type = static_cast<pack_type>(m_p[0]);
			switch (type)
			{
#pragma region POSITIVE_FIXNUM 0x00 - 0x7F
			case POSITIVE_FIXNUM: return 0;
			case POSITIVE_FIXNUM_0x01: return 0;
			case POSITIVE_FIXNUM_0x02: return 0;
			case POSITIVE_FIXNUM_0x03: return 0;
			case POSITIVE_FIXNUM_0x04: return 0;
			case POSITIVE_FIXNUM_0x05: return 0;
			case POSITIVE_FIXNUM_0x06: return 0;
			case POSITIVE_FIXNUM_0x07: return 0;
			case POSITIVE_FIXNUM_0x08: return 0;
			case POSITIVE_FIXNUM_0x09: return 0;
			case POSITIVE_FIXNUM_0x0A: return 0;
			case POSITIVE_FIXNUM_0x0B: return 0;
			case POSITIVE_FIXNUM_0x0C: return 0;
			case POSITIVE_FIXNUM_0x0D: return 0;
			case POSITIVE_FIXNUM_0x0E: return 0;
			case POSITIVE_FIXNUM_0x0F: return 0;

			case POSITIVE_FIXNUM_0x10: return 0;
			case POSITIVE_FIXNUM_0x11: return 0;
			case POSITIVE_FIXNUM_0x12: return 0;
			case POSITIVE_FIXNUM_0x13: return 0;
			case POSITIVE_FIXNUM_0x14: return 0;
			case POSITIVE_FIXNUM_0x15: return 0;
			case POSITIVE_FIXNUM_0x16: return 0;
			case POSITIVE_FIXNUM_0x17: return 0;
			case POSITIVE_FIXNUM_0x18: return 0;
			case POSITIVE_FIXNUM_0x19: return 0;
			case POSITIVE_FIXNUM_0x1A: return 0;
			case POSITIVE_FIXNUM_0x1B: return 0;
			case POSITIVE_FIXNUM_0x1C: return 0;
			case POSITIVE_FIXNUM_0x1D: return 0;
			case POSITIVE_FIXNUM_0x1E: return 0;
			case POSITIVE_FIXNUM_0x1F: return 0;

			case POSITIVE_FIXNUM_0x20: return 0;
			case POSITIVE_FIXNUM_0x21: return 0;
			case POSITIVE_FIXNUM_0x22: return 0;
			case POSITIVE_FIXNUM_0x23: return 0;
			case POSITIVE_FIXNUM_0x24: return 0;
			case POSITIVE_FIXNUM_0x25: return 0;
			case POSITIVE_FIXNUM_0x26: return 0;
			case POSITIVE_FIXNUM_0x27: return 0;
			case POSITIVE_FIXNUM_0x28: return 0;
			case POSITIVE_FIXNUM_0x29: return 0;
			case POSITIVE_FIXNUM_0x2A: return 0;
			case POSITIVE_FIXNUM_0x2B: return 0;
			case POSITIVE_FIXNUM_0x2C: return 0;
			case POSITIVE_FIXNUM_0x2D: return 0;
			case POSITIVE_FIXNUM_0x2E: return 0;
			case POSITIVE_FIXNUM_0x2F: return 0;

			case POSITIVE_FIXNUM_0x30: return 0;
			case POSITIVE_FIXNUM_0x31: return 0;
			case POSITIVE_FIXNUM_0x32: return 0;
			case POSITIVE_FIXNUM_0x33: return 0;
			case POSITIVE_FIXNUM_0x34: return 0;
			case POSITIVE_FIXNUM_0x35: return 0;
			case POSITIVE_FIXNUM_0x36: return 0;
			case POSITIVE_FIXNUM_0x37: return 0;
			case POSITIVE_FIXNUM_0x38: return 0;
			case POSITIVE_FIXNUM_0x39: return 0;
			case POSITIVE_FIXNUM_0x3A: return 0;
			case POSITIVE_FIXNUM_0x3B: return 0;
			case POSITIVE_FIXNUM_0x3C: return 0;
			case POSITIVE_FIXNUM_0x3D: return 0;
			case POSITIVE_FIXNUM_0x3E: return 0;
			case POSITIVE_FIXNUM_0x3F: return 0;

			case POSITIVE_FIXNUM_0x40: return 0;
			case POSITIVE_FIXNUM_0x41: return 0;
			case POSITIVE_FIXNUM_0x42: return 0;
			case POSITIVE_FIXNUM_0x43: return 0;
			case POSITIVE_FIXNUM_0x44: return 0;
			case POSITIVE_FIXNUM_0x45: return 0;
			case POSITIVE_FIXNUM_0x46: return 0;
			case POSITIVE_FIXNUM_0x47: return 0;
			case POSITIVE_FIXNUM_0x48: return 0;
			case POSITIVE_FIXNUM_0x49: return 0;
			case POSITIVE_FIXNUM_0x4A: return 0;
			case POSITIVE_FIXNUM_0x4B: return 0;
			case POSITIVE_FIXNUM_0x4C: return 0;
			case POSITIVE_FIXNUM_0x4D: return 0;
			case POSITIVE_FIXNUM_0x4E: return 0;
			case POSITIVE_FIXNUM_0x4F: return 0;

			case POSITIVE_FIXNUM_0x50: return 0;
			case POSITIVE_FIXNUM_0x51: return 0;
			case POSITIVE_FIXNUM_0x52: return 0;
			case POSITIVE_FIXNUM_0x53: return 0;
			case POSITIVE_FIXNUM_0x54: return 0;
			case POSITIVE_FIXNUM_0x55: return 0;
			case POSITIVE_FIXNUM_0x56: return 0;
			case POSITIVE_FIXNUM_0x57: return 0;
			case POSITIVE_FIXNUM_0x58: return 0;
			case POSITIVE_FIXNUM_0x59: return 0;
			case POSITIVE_FIXNUM_0x5A: return 0;
			case POSITIVE_FIXNUM_0x5B: return 0;
			case POSITIVE_FIXNUM_0x5C: return 0;
			case POSITIVE_FIXNUM_0x5D: return 0;
			case POSITIVE_FIXNUM_0x5E: return 0;
			case POSITIVE_FIXNUM_0x5F: return 0;

			case POSITIVE_FIXNUM_0x60: return 0;
			case POSITIVE_FIXNUM_0x61: return 0;
			case POSITIVE_FIXNUM_0x62: return 0;
			case POSITIVE_FIXNUM_0x63: return 0;
			case POSITIVE_FIXNUM_0x64: return 0;
			case POSITIVE_FIXNUM_0x65: return 0;
			case POSITIVE_FIXNUM_0x66: return 0;
			case POSITIVE_FIXNUM_0x67: return 0;
			case POSITIVE_FIXNUM_0x68: return 0;
			case POSITIVE_FIXNUM_0x69: return 0;
			case POSITIVE_FIXNUM_0x6A: return 0;
			case POSITIVE_FIXNUM_0x6B: return 0;
			case POSITIVE_FIXNUM_0x6C: return 0;
			case POSITIVE_FIXNUM_0x6D: return 0;
			case POSITIVE_FIXNUM_0x6E: return 0;
			case POSITIVE_FIXNUM_0x6F: return 0;

			case POSITIVE_FIXNUM_0x70: return 0;
			case POSITIVE_FIXNUM_0x71: return 0;
			case POSITIVE_FIXNUM_0x72: return 0;
			case POSITIVE_FIXNUM_0x73: return 0;
			case POSITIVE_FIXNUM_0x74: return 0;
			case POSITIVE_FIXNUM_0x75: return 0;
			case POSITIVE_FIXNUM_0x76: return 0;
			case POSITIVE_FIXNUM_0x77: return 0;
			case POSITIVE_FIXNUM_0x78: return 0;
			case POSITIVE_FIXNUM_0x79: return 0;
			case POSITIVE_FIXNUM_0x7A: return 0;
			case POSITIVE_FIXNUM_0x7B: return 0;
			case POSITIVE_FIXNUM_0x7C: return 0;
			case POSITIVE_FIXNUM_0x7D: return 0;
			case POSITIVE_FIXNUM_0x7E: return 0;
			case POSITIVE_FIXNUM_0x7F: return 0;
#pragma endregion

#pragma region FIX_MAP 0x80 - 0x8F
			case FIX_MAP: throw std::exception("no size");
			case FIX_MAP_0x1: throw std::exception("no size");
			case FIX_MAP_0x2: throw std::exception("no size");
			case FIX_MAP_0x3: throw std::exception("no size");
			case FIX_MAP_0x4: throw std::exception("no size");
			case FIX_MAP_0x5: throw std::exception("no size");
			case FIX_MAP_0x6: throw std::exception("no size");
			case FIX_MAP_0x7: throw std::exception("no size");
			case FIX_MAP_0x8: throw std::exception("no size");
			case FIX_MAP_0x9: throw std::exception("no size");
			case FIX_MAP_0xA: throw std::exception("no size");
			case FIX_MAP_0xB: throw std::exception("no size");
			case FIX_MAP_0xC: throw std::exception("no size");
			case FIX_MAP_0xD: throw std::exception("no size");
			case FIX_MAP_0xE: throw std::exception("no size");
			case FIX_MAP_0xF: throw std::exception("no size");
#pragma endregion

#pragma region FIX_ARRAY 0x90 - 0x9F
			case FIX_ARRAY: throw std::exception("no size");
			case FIX_ARRAY_0x1: throw std::exception("no size");
			case FIX_ARRAY_0x2: throw std::exception("no size");
			case FIX_ARRAY_0x3: throw std::exception("no size");
			case FIX_ARRAY_0x4: throw std::exception("no size");
			case FIX_ARRAY_0x5: throw std::exception("no size");
			case FIX_ARRAY_0x6: throw std::exception("no size");
			case FIX_ARRAY_0x7: throw std::exception("no size");
			case FIX_ARRAY_0x8: throw std::exception("no size");
			case FIX_ARRAY_0x9: throw std::exception("no size");
			case FIX_ARRAY_0xA: throw std::exception("no size");
			case FIX_ARRAY_0xB: throw std::exception("no size");
			case FIX_ARRAY_0xC: throw std::exception("no size");
			case FIX_ARRAY_0xD: throw std::exception("no size");
			case FIX_ARRAY_0xE: throw std::exception("no size");
			case FIX_ARRAY_0xF: throw std::exception("no size");
#pragma endregion

#pragma region FIX_STR 0xA0 - 0xBF
			case FIX_STR: return 0;
			case FIX_STR_0x01: return 1;
			case FIX_STR_0x02: return 2;
			case FIX_STR_0x03: return 3;
			case FIX_STR_0x04: return 4;
			case FIX_STR_0x05: return 5;
			case FIX_STR_0x06: return 6;
			case FIX_STR_0x07: return 7;
			case FIX_STR_0x08: return 8;
			case FIX_STR_0x09: return 9;
			case FIX_STR_0x0A: return 10;
			case FIX_STR_0x0B: return 11;
			case FIX_STR_0x0C: return 12;
			case FIX_STR_0x0D: return 13;
			case FIX_STR_0x0E: return 14;
			case FIX_STR_0x0F: return 15;
			case FIX_STR_0x10: return 16;
			case FIX_STR_0x11: return 17;
			case FIX_STR_0x12: return 18;
			case FIX_STR_0x13: return 19;
			case FIX_STR_0x14: return 20;
			case FIX_STR_0x15: return 21;
			case FIX_STR_0x16: return 22;
			case FIX_STR_0x17: return 23;
			case FIX_STR_0x18: return 24;
			case FIX_STR_0x19: return 25;
			case FIX_STR_0x1A: return 26;
			case FIX_STR_0x1B: return 27;
			case FIX_STR_0x1C: return 28;
			case FIX_STR_0x1D: return 29;
			case FIX_STR_0x1E: return 30;
			case FIX_STR_0x1F: return 31;
#pragma endregion

			case NIL: return 0;
			case NEVER_USED: throw std::exception("no size");
			case FALSE: return 0;
			case TRUE: return 0;

			case BIN8: return body_number<std::uint8_t>();
			case BIN16: return body_number<std::uint16_t>();
			case BIN32: return body_number<std::uint32_t>();

			case EXT8: throw std::exception("not implemented");
			case EXT16: throw std::exception("not implemented");
			case EXT32: throw std::exception("not implemented");

			case FLOAT: return 4;
			case DOUBLE: return 8;
			case UINT8: return 1;
			case UINT16: return 2;
			case UINT32: return 4;
			case UINT64: return 8;
			case INT8: return 1;
			case INT16: return 2;
			case INT32: return 4;
			case INT64: return 8;

			case FIX_EXT_1: throw std::exception("not implemented");
			case FIX_EXT_2: throw std::exception("not implemented");
			case FIX_EXT_4: throw std::exception("not implemented");
			case FIX_EXT_8: throw std::exception("not implemented");
			case FIX_EXT_16: throw std::exception("not implemented");

			case STR8: return body_number<std::uint8_t>();
			case STR16: return body_number<std::uint16_t>();
			case STR32: return body_number<std::uint32_t>();

			case ARRAY16: throw std::exception("no size");
			case ARRAY32: throw std::exception("no size");
			case MAP16: throw std::exception("no size");
			case MAP32: throw std::exception("no size");

#pragma region NEGATIVE_FIXNUM 0xE0 - 0xFF
			case NEGATIVE_FIXNUM: return 0;
			case NEGATIVE_FIXNUM_0x1F: return 0;
			case NEGATIVE_FIXNUM_0x1E: return 0;
			case NEGATIVE_FIXNUM_0x1D: return 0;
			case NEGATIVE_FIXNUM_0x1C: return 0;
			case NEGATIVE_FIXNUM_0x1B: return 0;
			case NEGATIVE_FIXNUM_0x1A: return 0;
			case NEGATIVE_FIXNUM_0x19: return 0;
			case NEGATIVE_FIXNUM_0x18: return 0;
			case NEGATIVE_FIXNUM_0x17: return 0;
			case NEGATIVE_FIXNUM_0x16: return 0;
			case NEGATIVE_FIXNUM_0x15: return 0;
			case NEGATIVE_FIXNUM_0x14: return 0;
			case NEGATIVE_FIXNUM_0x13: return 0;
			case NEGATIVE_FIXNUM_0x12: return 0;
			case NEGATIVE_FIXNUM_0x11: return 0;
			case NEGATIVE_FIXNUM_0x10: return 0;
			case NEGATIVE_FIXNUM_0x0F: return 0;
			case NEGATIVE_FIXNUM_0x0E: return 0;
			case NEGATIVE_FIXNUM_0x0D: return 0;
			case NEGATIVE_FIXNUM_0x0C: return 0;
			case NEGATIVE_FIXNUM_0x0B: return 0;
			case NEGATIVE_FIXNUM_0x0A: return 0;
			case NEGATIVE_FIXNUM_0x09: return 0;
			case NEGATIVE_FIXNUM_0x08: return 0;
			case NEGATIVE_FIXNUM_0x07: return 0;
			case NEGATIVE_FIXNUM_0x06: return 0;
			case NEGATIVE_FIXNUM_0x05: return 0;
			case NEGATIVE_FIXNUM_0x04: return 0;
			case NEGATIVE_FIXNUM_0x03: return 0;
			case NEGATIVE_FIXNUM_0x02: return 0;
			case NEGATIVE_FIXNUM_0x01: return 0;
#pragma endregion
			}

			throw std::exception("not implemented");
		}

		parser next()const
		{
			if (is_array())
			{
				auto offset = body_index();
				auto current = parser(m_p + offset, m_size - offset);
				auto item_count = count();
				for (int i = 0; i < item_count; ++i)
				{
					current = current.next();
				}
				return current;
			}
			else {

				auto offset = body_index() + body_size();
				auto current = parser(m_p + offset, m_size - offset);
				return current;

			}
		}
	};
}
