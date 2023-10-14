#pragma once
#include <memory>
#include <string>


namespace Lg
{
	class CFileSystem;
	class CWindowSystem;
	class CLevelManager;

	class CGlobalSingletonContext
	{
	public:
		CGlobalSingletonContext(const std::string& resource_path);




		std::unique_ptr<CFileSystem> m_file_system;
		std::unique_ptr<CWindowSystem> m_window_system;
		std::unique_ptr<CLevelManager> m_level_manager;

	};
	extern CGlobalSingletonContext* g_global_singleton_context;

};
