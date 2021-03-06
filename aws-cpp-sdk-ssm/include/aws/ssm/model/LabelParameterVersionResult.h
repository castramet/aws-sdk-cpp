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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{
  class AWS_SSM_API LabelParameterVersionResult
  {
  public:
    LabelParameterVersionResult();
    LabelParameterVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    LabelParameterVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::Vector<Aws::String>& GetInvalidLabels() const{ return m_invalidLabels; }

    
    inline void SetInvalidLabels(const Aws::Vector<Aws::String>& value) { m_invalidLabels = value; }

    
    inline void SetInvalidLabels(Aws::Vector<Aws::String>&& value) { m_invalidLabels = std::move(value); }

    
    inline LabelParameterVersionResult& WithInvalidLabels(const Aws::Vector<Aws::String>& value) { SetInvalidLabels(value); return *this;}

    
    inline LabelParameterVersionResult& WithInvalidLabels(Aws::Vector<Aws::String>&& value) { SetInvalidLabels(std::move(value)); return *this;}

    
    inline LabelParameterVersionResult& AddInvalidLabels(const Aws::String& value) { m_invalidLabels.push_back(value); return *this; }

    
    inline LabelParameterVersionResult& AddInvalidLabels(Aws::String&& value) { m_invalidLabels.push_back(std::move(value)); return *this; }

    
    inline LabelParameterVersionResult& AddInvalidLabels(const char* value) { m_invalidLabels.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_invalidLabels;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
