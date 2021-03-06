﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/GreengrassRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Greengrass
{
namespace Model
{

  /**
   */
  class AWS_GREENGRASS_API GetLoggerDefinitionVersionRequest : public GreengrassRequest
  {
  public:
    GetLoggerDefinitionVersionRequest();
    Aws::String SerializePayload() const override;


    /**
     * logger definition Id
     */
    inline const Aws::String& GetLoggerDefinitionId() const{ return m_loggerDefinitionId; }

    /**
     * logger definition Id
     */
    inline void SetLoggerDefinitionId(const Aws::String& value) { m_loggerDefinitionIdHasBeenSet = true; m_loggerDefinitionId = value; }

    /**
     * logger definition Id
     */
    inline void SetLoggerDefinitionId(Aws::String&& value) { m_loggerDefinitionIdHasBeenSet = true; m_loggerDefinitionId = std::move(value); }

    /**
     * logger definition Id
     */
    inline void SetLoggerDefinitionId(const char* value) { m_loggerDefinitionIdHasBeenSet = true; m_loggerDefinitionId.assign(value); }

    /**
     * logger definition Id
     */
    inline GetLoggerDefinitionVersionRequest& WithLoggerDefinitionId(const Aws::String& value) { SetLoggerDefinitionId(value); return *this;}

    /**
     * logger definition Id
     */
    inline GetLoggerDefinitionVersionRequest& WithLoggerDefinitionId(Aws::String&& value) { SetLoggerDefinitionId(std::move(value)); return *this;}

    /**
     * logger definition Id
     */
    inline GetLoggerDefinitionVersionRequest& WithLoggerDefinitionId(const char* value) { SetLoggerDefinitionId(value); return *this;}


    /**
     * logger definition version Id
     */
    inline const Aws::String& GetLoggerDefinitionVersionId() const{ return m_loggerDefinitionVersionId; }

    /**
     * logger definition version Id
     */
    inline void SetLoggerDefinitionVersionId(const Aws::String& value) { m_loggerDefinitionVersionIdHasBeenSet = true; m_loggerDefinitionVersionId = value; }

    /**
     * logger definition version Id
     */
    inline void SetLoggerDefinitionVersionId(Aws::String&& value) { m_loggerDefinitionVersionIdHasBeenSet = true; m_loggerDefinitionVersionId = std::move(value); }

    /**
     * logger definition version Id
     */
    inline void SetLoggerDefinitionVersionId(const char* value) { m_loggerDefinitionVersionIdHasBeenSet = true; m_loggerDefinitionVersionId.assign(value); }

    /**
     * logger definition version Id
     */
    inline GetLoggerDefinitionVersionRequest& WithLoggerDefinitionVersionId(const Aws::String& value) { SetLoggerDefinitionVersionId(value); return *this;}

    /**
     * logger definition version Id
     */
    inline GetLoggerDefinitionVersionRequest& WithLoggerDefinitionVersionId(Aws::String&& value) { SetLoggerDefinitionVersionId(std::move(value)); return *this;}

    /**
     * logger definition version Id
     */
    inline GetLoggerDefinitionVersionRequest& WithLoggerDefinitionVersionId(const char* value) { SetLoggerDefinitionVersionId(value); return *this;}

  private:

    Aws::String m_loggerDefinitionId;
    bool m_loggerDefinitionIdHasBeenSet;

    Aws::String m_loggerDefinitionVersionId;
    bool m_loggerDefinitionVersionIdHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
