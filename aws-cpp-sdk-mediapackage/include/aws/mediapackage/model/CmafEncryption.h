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
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/mediapackage/model/SpekeKeyProvider.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MediaPackage
{
namespace Model
{

  /**
   * A Common Media Application Format (CMAF) encryption configuration.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/CmafEncryption">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIAPACKAGE_API CmafEncryption
  {
  public:
    CmafEncryption();
    CmafEncryption(Aws::Utils::Json::JsonView jsonValue);
    CmafEncryption& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Time (in seconds) between each encryption key rotation.
     */
    inline int GetKeyRotationIntervalSeconds() const{ return m_keyRotationIntervalSeconds; }

    /**
     * Time (in seconds) between each encryption key rotation.
     */
    inline bool KeyRotationIntervalSecondsHasBeenSet() const { return m_keyRotationIntervalSecondsHasBeenSet; }

    /**
     * Time (in seconds) between each encryption key rotation.
     */
    inline void SetKeyRotationIntervalSeconds(int value) { m_keyRotationIntervalSecondsHasBeenSet = true; m_keyRotationIntervalSeconds = value; }

    /**
     * Time (in seconds) between each encryption key rotation.
     */
    inline CmafEncryption& WithKeyRotationIntervalSeconds(int value) { SetKeyRotationIntervalSeconds(value); return *this;}


    
    inline const SpekeKeyProvider& GetSpekeKeyProvider() const{ return m_spekeKeyProvider; }

    
    inline bool SpekeKeyProviderHasBeenSet() const { return m_spekeKeyProviderHasBeenSet; }

    
    inline void SetSpekeKeyProvider(const SpekeKeyProvider& value) { m_spekeKeyProviderHasBeenSet = true; m_spekeKeyProvider = value; }

    
    inline void SetSpekeKeyProvider(SpekeKeyProvider&& value) { m_spekeKeyProviderHasBeenSet = true; m_spekeKeyProvider = std::move(value); }

    
    inline CmafEncryption& WithSpekeKeyProvider(const SpekeKeyProvider& value) { SetSpekeKeyProvider(value); return *this;}

    
    inline CmafEncryption& WithSpekeKeyProvider(SpekeKeyProvider&& value) { SetSpekeKeyProvider(std::move(value)); return *this;}

  private:

    int m_keyRotationIntervalSeconds;
    bool m_keyRotationIntervalSecondsHasBeenSet;

    SpekeKeyProvider m_spekeKeyProvider;
    bool m_spekeKeyProviderHasBeenSet;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
