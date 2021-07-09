/******************************************************************
 *
 * Copyright 2015 Samsung Electronics All Rights Reserved.
 *
 *
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 ******************************************************************/

/**
 * @file   ActionType.h
 *
 * @brief   This file provides data Model for RAML ActionType.
 */

#ifndef ACTION_TYPE_H
#define ACTION_TYPE_H

namespace RAML
{
    /** ActionType - This class provides data Model for RAML ActionType. */
    enum class ActionType
    {
        GET, POST, PUT, DELETE, HEAD, PATCH, OPTIONS, TRACE, NONE
    };

}
#endif
