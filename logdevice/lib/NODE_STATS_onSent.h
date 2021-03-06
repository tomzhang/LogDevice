/**
 * Copyright (c) 2017-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree.
 */
#pragma once

#include "logdevice/common/protocol/NODE_STATS_Message.h"

namespace facebook { namespace logdevice {

void NODE_STATS_onSent(const NODE_STATS_Message& msg,
                       Status status,
                       const Address& to);
}} // namespace facebook::logdevice
