#pragma once

#include <memory>

namespace Lg
{
	class CWindowsWindow;

	class CWindowSystem
	{
	public:
		CWindowSystem();
		~CWindowSystem() = default;

		bool WindowShouldClose() const;
		void SetWindowShouldClose(bool should_close)
		{
			m_should_close = should_close;
		}

		void PollEvents();


	private:
		std::unique_ptr<CWindowsWindow> m_windows_window;
		bool m_should_close{ false };
	};
}
