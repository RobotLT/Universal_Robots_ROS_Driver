// this is for emacs file handling -*- mode: c++; indent-tabs-mode: nil -*-

// -- BEGIN LICENSE BLOCK ----------------------------------------------
// Copyright 2019 FZI Forschungszentrum Informatik
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// -- END LICENSE BLOCK ------------------------------------------------

//----------------------------------------------------------------------
/*!\file
 *
 * \author  Lea Steffen steffen@fzi.de
 * \date    2019-04-01
 *
 */
//----------------------------------------------------------------------

#ifndef UR_RTDE_DRIVER_PRIMARY_PACKAGE_H_INCLUDED
#define UR_RTDE_DRIVER_PRIMARY_PACKAGE_H_INCLUDED

#include "ur_rtde_driver/primary/package_header.h"
#include "ur_rtde_driver/comm/package.h"

namespace ur_driver
{
namespace primary_interface
{
class PrimaryPackage : comm::URPackage<PackageHeader>
{
public:
  PrimaryPackage() = default;
  virtual ~PrimaryPackage() = default;

private:
  uint8_t* data_buffer_;
};

}  // namespace primary_interface
}  // namespace ur_driver

#endif /* UR_RTDE_DRIVER_PRIMARY_PACKAGE_H_INCLUDED */
