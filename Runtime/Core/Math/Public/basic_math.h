#pragma once

#include <Eigen>
namespace Fy
{
	typedef Eigen::Vector3f FVector;
	typedef Eigen::Quaternionf FQuat;
	typedef Eigen::Matrix4f FMatrix;

	class FTransform
	{
		FVector translate;
		FQuat rotation;
		FVector scaling;
	};


}
