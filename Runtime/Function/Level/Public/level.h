#pragma once

namespace Lg {
	class CLevel
	{
	public:
		CLevel() = default;
		~CLevel() = default;

		void TickLevel(float dt);
	};
}