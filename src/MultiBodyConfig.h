// This file is part of RBDyn.
//
// RBDyn is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// RBDyn is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with RBDyn.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

// includes
// std
#include <vector>

// sva
#include <SpaceVecAlg>

namespace rbd
{
class MultiBody;

struct MultiBodyConfig
{
	MultiBodyConfig(const MultiBody& mb);

	/// Generalized position variable.
	std::vector<std::vector<double>> q;

	/// Bodies transformation in world coordinate.
	std::vector<sva::PTransform> bodyGlobal;
};

} // namespace rbd