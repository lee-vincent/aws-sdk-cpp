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
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/glacier/GlacierRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glacier/model/VaultNotificationConfig.h>
#include <utility>

namespace Aws
{
namespace Glacier
{
namespace Model
{

  /**
   * <p>Provides options to configure notifications that will be sent when specific
   * events happen to a vault.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/SetVaultNotificationsInput">AWS
   * API Reference</a></p>
   */
  class AWS_GLACIER_API SetVaultNotificationsRequest : public GlacierRequest
  {
  public:
    SetVaultNotificationsRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetVaultNotifications"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * '<code>-</code>' (hyphen), in which case Amazon Glacier uses the AWS account ID
     * associated with the credentials used to sign the request. If you use an account
     * ID, do not include any hyphens ('-') in the ID.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * '<code>-</code>' (hyphen), in which case Amazon Glacier uses the AWS account ID
     * associated with the credentials used to sign the request. If you use an account
     * ID, do not include any hyphens ('-') in the ID.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * '<code>-</code>' (hyphen), in which case Amazon Glacier uses the AWS account ID
     * associated with the credentials used to sign the request. If you use an account
     * ID, do not include any hyphens ('-') in the ID.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * '<code>-</code>' (hyphen), in which case Amazon Glacier uses the AWS account ID
     * associated with the credentials used to sign the request. If you use an account
     * ID, do not include any hyphens ('-') in the ID.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * '<code>-</code>' (hyphen), in which case Amazon Glacier uses the AWS account ID
     * associated with the credentials used to sign the request. If you use an account
     * ID, do not include any hyphens ('-') in the ID.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * '<code>-</code>' (hyphen), in which case Amazon Glacier uses the AWS account ID
     * associated with the credentials used to sign the request. If you use an account
     * ID, do not include any hyphens ('-') in the ID.</p>
     */
    inline SetVaultNotificationsRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * '<code>-</code>' (hyphen), in which case Amazon Glacier uses the AWS account ID
     * associated with the credentials used to sign the request. If you use an account
     * ID, do not include any hyphens ('-') in the ID.</p>
     */
    inline SetVaultNotificationsRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * '<code>-</code>' (hyphen), in which case Amazon Glacier uses the AWS account ID
     * associated with the credentials used to sign the request. If you use an account
     * ID, do not include any hyphens ('-') in the ID.</p>
     */
    inline SetVaultNotificationsRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The name of the vault.</p>
     */
    inline const Aws::String& GetVaultName() const{ return m_vaultName; }

    /**
     * <p>The name of the vault.</p>
     */
    inline bool VaultNameHasBeenSet() const { return m_vaultNameHasBeenSet; }

    /**
     * <p>The name of the vault.</p>
     */
    inline void SetVaultName(const Aws::String& value) { m_vaultNameHasBeenSet = true; m_vaultName = value; }

    /**
     * <p>The name of the vault.</p>
     */
    inline void SetVaultName(Aws::String&& value) { m_vaultNameHasBeenSet = true; m_vaultName = std::move(value); }

    /**
     * <p>The name of the vault.</p>
     */
    inline void SetVaultName(const char* value) { m_vaultNameHasBeenSet = true; m_vaultName.assign(value); }

    /**
     * <p>The name of the vault.</p>
     */
    inline SetVaultNotificationsRequest& WithVaultName(const Aws::String& value) { SetVaultName(value); return *this;}

    /**
     * <p>The name of the vault.</p>
     */
    inline SetVaultNotificationsRequest& WithVaultName(Aws::String&& value) { SetVaultName(std::move(value)); return *this;}

    /**
     * <p>The name of the vault.</p>
     */
    inline SetVaultNotificationsRequest& WithVaultName(const char* value) { SetVaultName(value); return *this;}


    /**
     * <p>Provides options for specifying notification configuration.</p>
     */
    inline const VaultNotificationConfig& GetVaultNotificationConfig() const{ return m_vaultNotificationConfig; }

    /**
     * <p>Provides options for specifying notification configuration.</p>
     */
    inline bool VaultNotificationConfigHasBeenSet() const { return m_vaultNotificationConfigHasBeenSet; }

    /**
     * <p>Provides options for specifying notification configuration.</p>
     */
    inline void SetVaultNotificationConfig(const VaultNotificationConfig& value) { m_vaultNotificationConfigHasBeenSet = true; m_vaultNotificationConfig = value; }

    /**
     * <p>Provides options for specifying notification configuration.</p>
     */
    inline void SetVaultNotificationConfig(VaultNotificationConfig&& value) { m_vaultNotificationConfigHasBeenSet = true; m_vaultNotificationConfig = std::move(value); }

    /**
     * <p>Provides options for specifying notification configuration.</p>
     */
    inline SetVaultNotificationsRequest& WithVaultNotificationConfig(const VaultNotificationConfig& value) { SetVaultNotificationConfig(value); return *this;}

    /**
     * <p>Provides options for specifying notification configuration.</p>
     */
    inline SetVaultNotificationsRequest& WithVaultNotificationConfig(VaultNotificationConfig&& value) { SetVaultNotificationConfig(std::move(value)); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    Aws::String m_vaultName;
    bool m_vaultNameHasBeenSet;

    VaultNotificationConfig m_vaultNotificationConfig;
    bool m_vaultNotificationConfigHasBeenSet;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
