/**
 * Copyright 2020 Huawei Technologies Co., Ltd
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
 */
#include "tools/schema_gen/schema_type_def.h"

SCHEMA_ENUM_DEF(ResizeMethod, byte)
SCHEMA_ENUM_ATTR_WITH_VALUE(UNKNOW, -1)
SCHEMA_ENUM_ATTR_WITH_VALUE(BILINEAR, 0)
SCHEMA_ENUM_ATTR_WITH_VALUE(NEAREST_NEIGHBOR, 1)
OP_SCHEMA_DEF_END(ResizeMethod)

SCHEMA_ENUM_DEF(Format, int)
SCHEMA_ENUM_ATTR_WITH_VALUE(NCHW, 0)
SCHEMA_ENUM_ATTR(NHWC)
SCHEMA_ENUM_ATTR(NHWC4)
SCHEMA_ENUM_ATTR(HWKC)
SCHEMA_ENUM_ATTR(HWCK)
SCHEMA_ENUM_ATTR(KCHW)
SCHEMA_ENUM_ATTR(CKHW)
SCHEMA_ENUM_ATTR(KHWC)
SCHEMA_ENUM_ATTR(CHWK)
SCHEMA_ENUM_ATTR(HW)
SCHEMA_ENUM_ATTR(HW4)
SCHEMA_ENUM_ATTR(NC)
SCHEMA_ENUM_ATTR(NC4)
SCHEMA_ENUM_ATTR_WITH_VALUE(NC4HW4, 100)
SCHEMA_ENUM_ATTR(NUM_OF_FORMAT)
OP_SCHEMA_DEF_END(Format)

SCHEMA_ENUM_DEF(ActivationType, byte)
SCHEMA_ENUM_ATTR_WITH_VALUE(NO_ACTIVATION, 0)
SCHEMA_ENUM_ATTR_WITH_VALUE(RELU, 1)
SCHEMA_ENUM_ATTR_WITH_VALUE(SIGMOID, 2)
SCHEMA_ENUM_ATTR_WITH_VALUE(RELU6, 3)
SCHEMA_ENUM_ATTR_WITH_VALUE(ELU, 4)
SCHEMA_ENUM_ATTR_WITH_VALUE(LEAKY_RELU, 5)
SCHEMA_ENUM_ATTR_WITH_VALUE(ABS, 6)
SCHEMA_ENUM_ATTR_WITH_VALUE(RELU1, 7)
SCHEMA_ENUM_ATTR_WITH_VALUE(SOFTSIGN, 8)
SCHEMA_ENUM_ATTR_WITH_VALUE(SOFTPLUS, 9)
SCHEMA_ENUM_ATTR_WITH_VALUE(TANH, 10)
SCHEMA_ENUM_ATTR_WITH_VALUE(SELU, 11)
SCHEMA_ENUM_ATTR_WITH_VALUE(HSWISH, 12)
SCHEMA_ENUM_ATTR_WITH_VALUE(HSIGMOID, 13)
SCHEMA_ENUM_ATTR_WITH_VALUE(THRESHOLDRELU, 14)
SCHEMA_ENUM_ATTR_WITH_VALUE(LINEAR, 15)
SCHEMA_ENUM_ATTR_WITH_VALUE(HARD_TANH, 16)
SCHEMA_ENUM_ATTR_WITH_VALUE(SIGN, 17)
SCHEMA_ENUM_ATTR_WITH_VALUE(UNKNOW, 18)
OP_SCHEMA_DEF_END(ActivationType)