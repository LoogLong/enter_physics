#include "global_context.h"

#include <string>

#include "file_system.h"
#include "window_system.h"
#include "GenericWindow.h"
#include "level_manager.h"

namespace Lg
{
	CGlobalSingletonContext::CGlobalSingletonContext(const std::string& resource_path)
	{
		m_file_system = std::make_unique<CFileSystem>(resource_path);
		m_window_system = std::make_unique<CWindowSystem>();
		m_level_manager = std::make_unique<CLevelManager>();
	}
}
