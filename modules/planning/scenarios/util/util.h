/******************************************************************************
 * Copyright 2019 The Apollo Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

#pragma once

#include <string>

#include "modules/planning/common/reference_line_info.h"

namespace apollo {
namespace planning {
namespace scenario {

bool CheckStopSignDone(const ReferenceLineInfo& reference_line_info,
                       const std::string& stop_sign_overlap_id);

bool CheckTrafficLightDone(const ReferenceLineInfo& reference_line_info,
                           const std::string& traffic_light_overlap_id);

perception::TrafficLight GetSignal(const std::string& signal_id);

bool CheckInsidePnCJunction(const ReferenceLineInfo& reference_line_info);

double GetADCStopDeceleration(const double adc_front_edge_s,
                              const double stop_line_s);

}  // namespace scenario
}  // namespace planning
}  // namespace apollo
