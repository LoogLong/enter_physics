

#include "window_system.h"
#include "GenericWindow.h"
#include "define.h"


namespace Lg {
	CWindowSystem::CWindowSystem()
	{
		m_windows_window = std::make_unique<CWindowsWindow>();
		m_windows_window->Initialize(Config::default_window_size[0], Config::default_window_size[1], "enter physics", false);
	}

	bool CWindowSystem::WindowShouldClose() const
	{
		return m_should_close;
	}

	void CWindowSystem::PollEvents()
	{
		m_windows_window->PollEvents();
	}
}
