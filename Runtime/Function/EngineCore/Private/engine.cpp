
#include "engine.h"

#include <chrono>

#include "global_context.h"
#include "file_system.h"
#include "window_system.h"
#include "GenericWindow.h"
#include "level_manager.h"

using namespace std::chrono;

namespace Lg
{
	CGlobalSingletonContext* g_global_singleton_context;
	steady_clock::time_point g_last_tick_time_point;
	void InitEngine(const std::string& resource_path)
	{
		g_global_singleton_context = new CGlobalSingletonContext(resource_path);
		g_last_tick_time_point = steady_clock::now();
	}

	float CalculateDeltaTime()
	{
		float delta_time;
		steady_clock::time_point tick_time_point = steady_clock::now();
		duration<float> time_span = duration_cast<duration<float>>(tick_time_point - g_last_tick_time_point);
		delta_time = time_span.count();

		g_last_tick_time_point = tick_time_point;
		return delta_time;
	}

	void LogicTick(float dt)
	{
		g_global_singleton_context->m_level_manager->TickLevels(dt);
		
	}

	void RenderTick(float dt)
	{
		
	}

	void TickEngine()
	{
		bool quit = false;
		while (!quit)
		{
			if (g_global_singleton_context->m_window_system->WindowShouldClose())
			{
				return;
			}
			float dt = CalculateDeltaTime();
			g_global_singleton_context->m_window_system->PollEvents();

			//single thread
			LogicTick(dt);
			RenderTick(dt);
		}
		


	}

	void ShutDownEngine()
	{
		delete g_global_singleton_context;
	}
}
