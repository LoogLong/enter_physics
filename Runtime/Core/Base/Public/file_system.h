#pragma once
#include <string>


namespace Lg
{
	class CFileSystem
	{
	public:
		CFileSystem(const std::string& resource_path) : m_resource_root_path(resource_path){
			
		}

		std::string GetFullPath(const std::string& relative_path) {
			return m_resource_root_path + relative_path;
		}
	private:
		std::string m_resource_root_path;
	};

};
