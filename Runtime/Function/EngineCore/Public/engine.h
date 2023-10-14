#pragma once
#include <string>

namespace Lg
{
	void InitEngine(const std::string& resource_path);
	void TickEngine();

	void ShutDownEngine();
}
