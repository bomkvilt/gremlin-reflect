#ifndef REFLECT__CONFIG_HPP
#define REFLECT__CONFIG_HPP

#include <string_view>
#include "reflect/archived.hpp"
#include "reflect/archiver.hpp"


namespace reflect
{
	struct FConfig : public FArchived
	{	//!^ Basic class for any json confg
		bool LoadConfig(const std::string& path);
		bool SaveConfig(const std::string& path) const;
	};
}

#endif //!REFLECT__CONFIG_HPP
