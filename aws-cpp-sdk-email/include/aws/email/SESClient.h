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
#include <aws/email/SES_EXPORTS.h>
#include <aws/email/SESErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/AmazonSerializableWebServiceRequest.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/email/model/CloneReceiptRuleSetResult.h>
#include <aws/email/model/CreateConfigurationSetResult.h>
#include <aws/email/model/CreateConfigurationSetEventDestinationResult.h>
#include <aws/email/model/CreateConfigurationSetTrackingOptionsResult.h>
#include <aws/email/model/CreateReceiptFilterResult.h>
#include <aws/email/model/CreateReceiptRuleResult.h>
#include <aws/email/model/CreateReceiptRuleSetResult.h>
#include <aws/email/model/DeleteConfigurationSetResult.h>
#include <aws/email/model/DeleteConfigurationSetEventDestinationResult.h>
#include <aws/email/model/DeleteConfigurationSetTrackingOptionsResult.h>
#include <aws/email/model/DeleteIdentityResult.h>
#include <aws/email/model/DeleteIdentityPolicyResult.h>
#include <aws/email/model/DeleteReceiptFilterResult.h>
#include <aws/email/model/DeleteReceiptRuleResult.h>
#include <aws/email/model/DeleteReceiptRuleSetResult.h>
#include <aws/email/model/DescribeActiveReceiptRuleSetResult.h>
#include <aws/email/model/DescribeConfigurationSetResult.h>
#include <aws/email/model/DescribeReceiptRuleResult.h>
#include <aws/email/model/DescribeReceiptRuleSetResult.h>
#include <aws/email/model/GetIdentityDkimAttributesResult.h>
#include <aws/email/model/GetIdentityMailFromDomainAttributesResult.h>
#include <aws/email/model/GetIdentityNotificationAttributesResult.h>
#include <aws/email/model/GetIdentityPoliciesResult.h>
#include <aws/email/model/GetIdentityVerificationAttributesResult.h>
#include <aws/email/model/GetSendQuotaResult.h>
#include <aws/email/model/GetSendStatisticsResult.h>
#include <aws/email/model/ListConfigurationSetsResult.h>
#include <aws/email/model/ListIdentitiesResult.h>
#include <aws/email/model/ListIdentityPoliciesResult.h>
#include <aws/email/model/ListReceiptFiltersResult.h>
#include <aws/email/model/ListReceiptRuleSetsResult.h>
#include <aws/email/model/ListVerifiedEmailAddressesResult.h>
#include <aws/email/model/PutIdentityPolicyResult.h>
#include <aws/email/model/ReorderReceiptRuleSetResult.h>
#include <aws/email/model/SendBounceResult.h>
#include <aws/email/model/SendEmailResult.h>
#include <aws/email/model/SendRawEmailResult.h>
#include <aws/email/model/SetActiveReceiptRuleSetResult.h>
#include <aws/email/model/SetIdentityDkimEnabledResult.h>
#include <aws/email/model/SetIdentityFeedbackForwardingEnabledResult.h>
#include <aws/email/model/SetIdentityHeadersInNotificationsEnabledResult.h>
#include <aws/email/model/SetIdentityMailFromDomainResult.h>
#include <aws/email/model/SetIdentityNotificationTopicResult.h>
#include <aws/email/model/SetReceiptRulePositionResult.h>
#include <aws/email/model/UpdateConfigurationSetEventDestinationResult.h>
#include <aws/email/model/UpdateConfigurationSetTrackingOptionsResult.h>
#include <aws/email/model/UpdateReceiptRuleResult.h>
#include <aws/email/model/VerifyDomainDkimResult.h>
#include <aws/email/model/VerifyDomainIdentityResult.h>
#include <aws/email/model/VerifyEmailIdentityResult.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;

namespace Threading
{
  class Executor;
} // namespace Threading

namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace SES
{

namespace Model
{
        class CloneReceiptRuleSetRequest;
        class CreateConfigurationSetRequest;
        class CreateConfigurationSetEventDestinationRequest;
        class CreateConfigurationSetTrackingOptionsRequest;
        class CreateReceiptFilterRequest;
        class CreateReceiptRuleRequest;
        class CreateReceiptRuleSetRequest;
        class DeleteConfigurationSetRequest;
        class DeleteConfigurationSetEventDestinationRequest;
        class DeleteConfigurationSetTrackingOptionsRequest;
        class DeleteIdentityRequest;
        class DeleteIdentityPolicyRequest;
        class DeleteReceiptFilterRequest;
        class DeleteReceiptRuleRequest;
        class DeleteReceiptRuleSetRequest;
        class DeleteVerifiedEmailAddressRequest;
        class DescribeActiveReceiptRuleSetRequest;
        class DescribeConfigurationSetRequest;
        class DescribeReceiptRuleRequest;
        class DescribeReceiptRuleSetRequest;
        class GetIdentityDkimAttributesRequest;
        class GetIdentityMailFromDomainAttributesRequest;
        class GetIdentityNotificationAttributesRequest;
        class GetIdentityPoliciesRequest;
        class GetIdentityVerificationAttributesRequest;
        class GetSendQuotaRequest;
        class GetSendStatisticsRequest;
        class ListConfigurationSetsRequest;
        class ListIdentitiesRequest;
        class ListIdentityPoliciesRequest;
        class ListReceiptFiltersRequest;
        class ListReceiptRuleSetsRequest;
        class ListVerifiedEmailAddressesRequest;
        class PutIdentityPolicyRequest;
        class ReorderReceiptRuleSetRequest;
        class SendBounceRequest;
        class SendEmailRequest;
        class SendRawEmailRequest;
        class SetActiveReceiptRuleSetRequest;
        class SetIdentityDkimEnabledRequest;
        class SetIdentityFeedbackForwardingEnabledRequest;
        class SetIdentityHeadersInNotificationsEnabledRequest;
        class SetIdentityMailFromDomainRequest;
        class SetIdentityNotificationTopicRequest;
        class SetReceiptRulePositionRequest;
        class UpdateConfigurationSetEventDestinationRequest;
        class UpdateConfigurationSetTrackingOptionsRequest;
        class UpdateReceiptRuleRequest;
        class VerifyDomainDkimRequest;
        class VerifyDomainIdentityRequest;
        class VerifyEmailAddressRequest;
        class VerifyEmailIdentityRequest;

        typedef Aws::Utils::Outcome<CloneReceiptRuleSetResult, Aws::Client::AWSError<SESErrors>> CloneReceiptRuleSetOutcome;
        typedef Aws::Utils::Outcome<CreateConfigurationSetResult, Aws::Client::AWSError<SESErrors>> CreateConfigurationSetOutcome;
        typedef Aws::Utils::Outcome<CreateConfigurationSetEventDestinationResult, Aws::Client::AWSError<SESErrors>> CreateConfigurationSetEventDestinationOutcome;
        typedef Aws::Utils::Outcome<CreateConfigurationSetTrackingOptionsResult, Aws::Client::AWSError<SESErrors>> CreateConfigurationSetTrackingOptionsOutcome;
        typedef Aws::Utils::Outcome<CreateReceiptFilterResult, Aws::Client::AWSError<SESErrors>> CreateReceiptFilterOutcome;
        typedef Aws::Utils::Outcome<CreateReceiptRuleResult, Aws::Client::AWSError<SESErrors>> CreateReceiptRuleOutcome;
        typedef Aws::Utils::Outcome<CreateReceiptRuleSetResult, Aws::Client::AWSError<SESErrors>> CreateReceiptRuleSetOutcome;
        typedef Aws::Utils::Outcome<DeleteConfigurationSetResult, Aws::Client::AWSError<SESErrors>> DeleteConfigurationSetOutcome;
        typedef Aws::Utils::Outcome<DeleteConfigurationSetEventDestinationResult, Aws::Client::AWSError<SESErrors>> DeleteConfigurationSetEventDestinationOutcome;
        typedef Aws::Utils::Outcome<DeleteConfigurationSetTrackingOptionsResult, Aws::Client::AWSError<SESErrors>> DeleteConfigurationSetTrackingOptionsOutcome;
        typedef Aws::Utils::Outcome<DeleteIdentityResult, Aws::Client::AWSError<SESErrors>> DeleteIdentityOutcome;
        typedef Aws::Utils::Outcome<DeleteIdentityPolicyResult, Aws::Client::AWSError<SESErrors>> DeleteIdentityPolicyOutcome;
        typedef Aws::Utils::Outcome<DeleteReceiptFilterResult, Aws::Client::AWSError<SESErrors>> DeleteReceiptFilterOutcome;
        typedef Aws::Utils::Outcome<DeleteReceiptRuleResult, Aws::Client::AWSError<SESErrors>> DeleteReceiptRuleOutcome;
        typedef Aws::Utils::Outcome<DeleteReceiptRuleSetResult, Aws::Client::AWSError<SESErrors>> DeleteReceiptRuleSetOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SESErrors>> DeleteVerifiedEmailAddressOutcome;
        typedef Aws::Utils::Outcome<DescribeActiveReceiptRuleSetResult, Aws::Client::AWSError<SESErrors>> DescribeActiveReceiptRuleSetOutcome;
        typedef Aws::Utils::Outcome<DescribeConfigurationSetResult, Aws::Client::AWSError<SESErrors>> DescribeConfigurationSetOutcome;
        typedef Aws::Utils::Outcome<DescribeReceiptRuleResult, Aws::Client::AWSError<SESErrors>> DescribeReceiptRuleOutcome;
        typedef Aws::Utils::Outcome<DescribeReceiptRuleSetResult, Aws::Client::AWSError<SESErrors>> DescribeReceiptRuleSetOutcome;
        typedef Aws::Utils::Outcome<GetIdentityDkimAttributesResult, Aws::Client::AWSError<SESErrors>> GetIdentityDkimAttributesOutcome;
        typedef Aws::Utils::Outcome<GetIdentityMailFromDomainAttributesResult, Aws::Client::AWSError<SESErrors>> GetIdentityMailFromDomainAttributesOutcome;
        typedef Aws::Utils::Outcome<GetIdentityNotificationAttributesResult, Aws::Client::AWSError<SESErrors>> GetIdentityNotificationAttributesOutcome;
        typedef Aws::Utils::Outcome<GetIdentityPoliciesResult, Aws::Client::AWSError<SESErrors>> GetIdentityPoliciesOutcome;
        typedef Aws::Utils::Outcome<GetIdentityVerificationAttributesResult, Aws::Client::AWSError<SESErrors>> GetIdentityVerificationAttributesOutcome;
        typedef Aws::Utils::Outcome<GetSendQuotaResult, Aws::Client::AWSError<SESErrors>> GetSendQuotaOutcome;
        typedef Aws::Utils::Outcome<GetSendStatisticsResult, Aws::Client::AWSError<SESErrors>> GetSendStatisticsOutcome;
        typedef Aws::Utils::Outcome<ListConfigurationSetsResult, Aws::Client::AWSError<SESErrors>> ListConfigurationSetsOutcome;
        typedef Aws::Utils::Outcome<ListIdentitiesResult, Aws::Client::AWSError<SESErrors>> ListIdentitiesOutcome;
        typedef Aws::Utils::Outcome<ListIdentityPoliciesResult, Aws::Client::AWSError<SESErrors>> ListIdentityPoliciesOutcome;
        typedef Aws::Utils::Outcome<ListReceiptFiltersResult, Aws::Client::AWSError<SESErrors>> ListReceiptFiltersOutcome;
        typedef Aws::Utils::Outcome<ListReceiptRuleSetsResult, Aws::Client::AWSError<SESErrors>> ListReceiptRuleSetsOutcome;
        typedef Aws::Utils::Outcome<ListVerifiedEmailAddressesResult, Aws::Client::AWSError<SESErrors>> ListVerifiedEmailAddressesOutcome;
        typedef Aws::Utils::Outcome<PutIdentityPolicyResult, Aws::Client::AWSError<SESErrors>> PutIdentityPolicyOutcome;
        typedef Aws::Utils::Outcome<ReorderReceiptRuleSetResult, Aws::Client::AWSError<SESErrors>> ReorderReceiptRuleSetOutcome;
        typedef Aws::Utils::Outcome<SendBounceResult, Aws::Client::AWSError<SESErrors>> SendBounceOutcome;
        typedef Aws::Utils::Outcome<SendEmailResult, Aws::Client::AWSError<SESErrors>> SendEmailOutcome;
        typedef Aws::Utils::Outcome<SendRawEmailResult, Aws::Client::AWSError<SESErrors>> SendRawEmailOutcome;
        typedef Aws::Utils::Outcome<SetActiveReceiptRuleSetResult, Aws::Client::AWSError<SESErrors>> SetActiveReceiptRuleSetOutcome;
        typedef Aws::Utils::Outcome<SetIdentityDkimEnabledResult, Aws::Client::AWSError<SESErrors>> SetIdentityDkimEnabledOutcome;
        typedef Aws::Utils::Outcome<SetIdentityFeedbackForwardingEnabledResult, Aws::Client::AWSError<SESErrors>> SetIdentityFeedbackForwardingEnabledOutcome;
        typedef Aws::Utils::Outcome<SetIdentityHeadersInNotificationsEnabledResult, Aws::Client::AWSError<SESErrors>> SetIdentityHeadersInNotificationsEnabledOutcome;
        typedef Aws::Utils::Outcome<SetIdentityMailFromDomainResult, Aws::Client::AWSError<SESErrors>> SetIdentityMailFromDomainOutcome;
        typedef Aws::Utils::Outcome<SetIdentityNotificationTopicResult, Aws::Client::AWSError<SESErrors>> SetIdentityNotificationTopicOutcome;
        typedef Aws::Utils::Outcome<SetReceiptRulePositionResult, Aws::Client::AWSError<SESErrors>> SetReceiptRulePositionOutcome;
        typedef Aws::Utils::Outcome<UpdateConfigurationSetEventDestinationResult, Aws::Client::AWSError<SESErrors>> UpdateConfigurationSetEventDestinationOutcome;
        typedef Aws::Utils::Outcome<UpdateConfigurationSetTrackingOptionsResult, Aws::Client::AWSError<SESErrors>> UpdateConfigurationSetTrackingOptionsOutcome;
        typedef Aws::Utils::Outcome<UpdateReceiptRuleResult, Aws::Client::AWSError<SESErrors>> UpdateReceiptRuleOutcome;
        typedef Aws::Utils::Outcome<VerifyDomainDkimResult, Aws::Client::AWSError<SESErrors>> VerifyDomainDkimOutcome;
        typedef Aws::Utils::Outcome<VerifyDomainIdentityResult, Aws::Client::AWSError<SESErrors>> VerifyDomainIdentityOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<SESErrors>> VerifyEmailAddressOutcome;
        typedef Aws::Utils::Outcome<VerifyEmailIdentityResult, Aws::Client::AWSError<SESErrors>> VerifyEmailIdentityOutcome;

        typedef std::future<CloneReceiptRuleSetOutcome> CloneReceiptRuleSetOutcomeCallable;
        typedef std::future<CreateConfigurationSetOutcome> CreateConfigurationSetOutcomeCallable;
        typedef std::future<CreateConfigurationSetEventDestinationOutcome> CreateConfigurationSetEventDestinationOutcomeCallable;
        typedef std::future<CreateConfigurationSetTrackingOptionsOutcome> CreateConfigurationSetTrackingOptionsOutcomeCallable;
        typedef std::future<CreateReceiptFilterOutcome> CreateReceiptFilterOutcomeCallable;
        typedef std::future<CreateReceiptRuleOutcome> CreateReceiptRuleOutcomeCallable;
        typedef std::future<CreateReceiptRuleSetOutcome> CreateReceiptRuleSetOutcomeCallable;
        typedef std::future<DeleteConfigurationSetOutcome> DeleteConfigurationSetOutcomeCallable;
        typedef std::future<DeleteConfigurationSetEventDestinationOutcome> DeleteConfigurationSetEventDestinationOutcomeCallable;
        typedef std::future<DeleteConfigurationSetTrackingOptionsOutcome> DeleteConfigurationSetTrackingOptionsOutcomeCallable;
        typedef std::future<DeleteIdentityOutcome> DeleteIdentityOutcomeCallable;
        typedef std::future<DeleteIdentityPolicyOutcome> DeleteIdentityPolicyOutcomeCallable;
        typedef std::future<DeleteReceiptFilterOutcome> DeleteReceiptFilterOutcomeCallable;
        typedef std::future<DeleteReceiptRuleOutcome> DeleteReceiptRuleOutcomeCallable;
        typedef std::future<DeleteReceiptRuleSetOutcome> DeleteReceiptRuleSetOutcomeCallable;
        typedef std::future<DeleteVerifiedEmailAddressOutcome> DeleteVerifiedEmailAddressOutcomeCallable;
        typedef std::future<DescribeActiveReceiptRuleSetOutcome> DescribeActiveReceiptRuleSetOutcomeCallable;
        typedef std::future<DescribeConfigurationSetOutcome> DescribeConfigurationSetOutcomeCallable;
        typedef std::future<DescribeReceiptRuleOutcome> DescribeReceiptRuleOutcomeCallable;
        typedef std::future<DescribeReceiptRuleSetOutcome> DescribeReceiptRuleSetOutcomeCallable;
        typedef std::future<GetIdentityDkimAttributesOutcome> GetIdentityDkimAttributesOutcomeCallable;
        typedef std::future<GetIdentityMailFromDomainAttributesOutcome> GetIdentityMailFromDomainAttributesOutcomeCallable;
        typedef std::future<GetIdentityNotificationAttributesOutcome> GetIdentityNotificationAttributesOutcomeCallable;
        typedef std::future<GetIdentityPoliciesOutcome> GetIdentityPoliciesOutcomeCallable;
        typedef std::future<GetIdentityVerificationAttributesOutcome> GetIdentityVerificationAttributesOutcomeCallable;
        typedef std::future<GetSendQuotaOutcome> GetSendQuotaOutcomeCallable;
        typedef std::future<GetSendStatisticsOutcome> GetSendStatisticsOutcomeCallable;
        typedef std::future<ListConfigurationSetsOutcome> ListConfigurationSetsOutcomeCallable;
        typedef std::future<ListIdentitiesOutcome> ListIdentitiesOutcomeCallable;
        typedef std::future<ListIdentityPoliciesOutcome> ListIdentityPoliciesOutcomeCallable;
        typedef std::future<ListReceiptFiltersOutcome> ListReceiptFiltersOutcomeCallable;
        typedef std::future<ListReceiptRuleSetsOutcome> ListReceiptRuleSetsOutcomeCallable;
        typedef std::future<ListVerifiedEmailAddressesOutcome> ListVerifiedEmailAddressesOutcomeCallable;
        typedef std::future<PutIdentityPolicyOutcome> PutIdentityPolicyOutcomeCallable;
        typedef std::future<ReorderReceiptRuleSetOutcome> ReorderReceiptRuleSetOutcomeCallable;
        typedef std::future<SendBounceOutcome> SendBounceOutcomeCallable;
        typedef std::future<SendEmailOutcome> SendEmailOutcomeCallable;
        typedef std::future<SendRawEmailOutcome> SendRawEmailOutcomeCallable;
        typedef std::future<SetActiveReceiptRuleSetOutcome> SetActiveReceiptRuleSetOutcomeCallable;
        typedef std::future<SetIdentityDkimEnabledOutcome> SetIdentityDkimEnabledOutcomeCallable;
        typedef std::future<SetIdentityFeedbackForwardingEnabledOutcome> SetIdentityFeedbackForwardingEnabledOutcomeCallable;
        typedef std::future<SetIdentityHeadersInNotificationsEnabledOutcome> SetIdentityHeadersInNotificationsEnabledOutcomeCallable;
        typedef std::future<SetIdentityMailFromDomainOutcome> SetIdentityMailFromDomainOutcomeCallable;
        typedef std::future<SetIdentityNotificationTopicOutcome> SetIdentityNotificationTopicOutcomeCallable;
        typedef std::future<SetReceiptRulePositionOutcome> SetReceiptRulePositionOutcomeCallable;
        typedef std::future<UpdateConfigurationSetEventDestinationOutcome> UpdateConfigurationSetEventDestinationOutcomeCallable;
        typedef std::future<UpdateConfigurationSetTrackingOptionsOutcome> UpdateConfigurationSetTrackingOptionsOutcomeCallable;
        typedef std::future<UpdateReceiptRuleOutcome> UpdateReceiptRuleOutcomeCallable;
        typedef std::future<VerifyDomainDkimOutcome> VerifyDomainDkimOutcomeCallable;
        typedef std::future<VerifyDomainIdentityOutcome> VerifyDomainIdentityOutcomeCallable;
        typedef std::future<VerifyEmailAddressOutcome> VerifyEmailAddressOutcomeCallable;
        typedef std::future<VerifyEmailIdentityOutcome> VerifyEmailIdentityOutcomeCallable;
} // namespace Model

  class SESClient;

    typedef std::function<void(const SESClient*, const Model::CloneReceiptRuleSetRequest&, const Model::CloneReceiptRuleSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CloneReceiptRuleSetResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::CreateConfigurationSetRequest&, const Model::CreateConfigurationSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConfigurationSetResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::CreateConfigurationSetEventDestinationRequest&, const Model::CreateConfigurationSetEventDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConfigurationSetEventDestinationResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::CreateConfigurationSetTrackingOptionsRequest&, const Model::CreateConfigurationSetTrackingOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConfigurationSetTrackingOptionsResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::CreateReceiptFilterRequest&, const Model::CreateReceiptFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateReceiptFilterResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::CreateReceiptRuleRequest&, const Model::CreateReceiptRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateReceiptRuleResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::CreateReceiptRuleSetRequest&, const Model::CreateReceiptRuleSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateReceiptRuleSetResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::DeleteConfigurationSetRequest&, const Model::DeleteConfigurationSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConfigurationSetResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::DeleteConfigurationSetEventDestinationRequest&, const Model::DeleteConfigurationSetEventDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConfigurationSetEventDestinationResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::DeleteConfigurationSetTrackingOptionsRequest&, const Model::DeleteConfigurationSetTrackingOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConfigurationSetTrackingOptionsResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::DeleteIdentityRequest&, const Model::DeleteIdentityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIdentityResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::DeleteIdentityPolicyRequest&, const Model::DeleteIdentityPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIdentityPolicyResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::DeleteReceiptFilterRequest&, const Model::DeleteReceiptFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteReceiptFilterResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::DeleteReceiptRuleRequest&, const Model::DeleteReceiptRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteReceiptRuleResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::DeleteReceiptRuleSetRequest&, const Model::DeleteReceiptRuleSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteReceiptRuleSetResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::DeleteVerifiedEmailAddressRequest&, const Model::DeleteVerifiedEmailAddressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVerifiedEmailAddressResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::DescribeActiveReceiptRuleSetRequest&, const Model::DescribeActiveReceiptRuleSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeActiveReceiptRuleSetResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::DescribeConfigurationSetRequest&, const Model::DescribeConfigurationSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConfigurationSetResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::DescribeReceiptRuleRequest&, const Model::DescribeReceiptRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReceiptRuleResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::DescribeReceiptRuleSetRequest&, const Model::DescribeReceiptRuleSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReceiptRuleSetResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::GetIdentityDkimAttributesRequest&, const Model::GetIdentityDkimAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIdentityDkimAttributesResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::GetIdentityMailFromDomainAttributesRequest&, const Model::GetIdentityMailFromDomainAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIdentityMailFromDomainAttributesResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::GetIdentityNotificationAttributesRequest&, const Model::GetIdentityNotificationAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIdentityNotificationAttributesResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::GetIdentityPoliciesRequest&, const Model::GetIdentityPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIdentityPoliciesResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::GetIdentityVerificationAttributesRequest&, const Model::GetIdentityVerificationAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIdentityVerificationAttributesResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::GetSendQuotaRequest&, const Model::GetSendQuotaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSendQuotaResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::GetSendStatisticsRequest&, const Model::GetSendStatisticsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSendStatisticsResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::ListConfigurationSetsRequest&, const Model::ListConfigurationSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConfigurationSetsResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::ListIdentitiesRequest&, const Model::ListIdentitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIdentitiesResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::ListIdentityPoliciesRequest&, const Model::ListIdentityPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIdentityPoliciesResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::ListReceiptFiltersRequest&, const Model::ListReceiptFiltersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListReceiptFiltersResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::ListReceiptRuleSetsRequest&, const Model::ListReceiptRuleSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListReceiptRuleSetsResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::ListVerifiedEmailAddressesRequest&, const Model::ListVerifiedEmailAddressesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVerifiedEmailAddressesResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::PutIdentityPolicyRequest&, const Model::PutIdentityPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutIdentityPolicyResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::ReorderReceiptRuleSetRequest&, const Model::ReorderReceiptRuleSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReorderReceiptRuleSetResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::SendBounceRequest&, const Model::SendBounceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendBounceResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::SendEmailRequest&, const Model::SendEmailOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendEmailResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::SendRawEmailRequest&, const Model::SendRawEmailOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendRawEmailResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::SetActiveReceiptRuleSetRequest&, const Model::SetActiveReceiptRuleSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetActiveReceiptRuleSetResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::SetIdentityDkimEnabledRequest&, const Model::SetIdentityDkimEnabledOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetIdentityDkimEnabledResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::SetIdentityFeedbackForwardingEnabledRequest&, const Model::SetIdentityFeedbackForwardingEnabledOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetIdentityFeedbackForwardingEnabledResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::SetIdentityHeadersInNotificationsEnabledRequest&, const Model::SetIdentityHeadersInNotificationsEnabledOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetIdentityHeadersInNotificationsEnabledResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::SetIdentityMailFromDomainRequest&, const Model::SetIdentityMailFromDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetIdentityMailFromDomainResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::SetIdentityNotificationTopicRequest&, const Model::SetIdentityNotificationTopicOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetIdentityNotificationTopicResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::SetReceiptRulePositionRequest&, const Model::SetReceiptRulePositionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetReceiptRulePositionResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::UpdateConfigurationSetEventDestinationRequest&, const Model::UpdateConfigurationSetEventDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConfigurationSetEventDestinationResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::UpdateConfigurationSetTrackingOptionsRequest&, const Model::UpdateConfigurationSetTrackingOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConfigurationSetTrackingOptionsResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::UpdateReceiptRuleRequest&, const Model::UpdateReceiptRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateReceiptRuleResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::VerifyDomainDkimRequest&, const Model::VerifyDomainDkimOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > VerifyDomainDkimResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::VerifyDomainIdentityRequest&, const Model::VerifyDomainIdentityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > VerifyDomainIdentityResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::VerifyEmailAddressRequest&, const Model::VerifyEmailAddressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > VerifyEmailAddressResponseReceivedHandler;
    typedef std::function<void(const SESClient*, const Model::VerifyEmailIdentityRequest&, const Model::VerifyEmailIdentityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > VerifyEmailIdentityResponseReceivedHandler;

  /**
   * <fullname>Amazon Simple Email Service</fullname> <p> This is the API Reference
   * for <a href="https://aws.amazon.com/ses/">Amazon Simple Email Service</a>
   * (Amazon SES). This documentation is intended to be used in conjunction with the
   * <i> <a
   * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon
   * SES Developer Guide</a>.</i> </p> <note> <p> For a list of Amazon SES endpoints
   * to use in service requests, see <a
   * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions
   * and Amazon SES</a> in the <i> <a
   * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon
   * SES Developer Guide</a>.</i> </p> </note>
   */
  class AWS_SES_API SESClient : public Aws::Client::AWSXMLClient
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SESClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SESClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SESClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~SESClient();


       /**
        * Converts any request object to a presigned URL with the GET method, using region for the signer and a timeout of 15 minutes.
        */
        Aws::String ConvertRequestToPresignedUrl(const Aws::AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const;


        /**
         * <p>Creates a receipt rule set by cloning an existing one. All receipt rules and
         * configurations are copied to the new receipt rule set and are completely
         * independent of the source rule set.</p> <p>For information about setting up rule
         * sets, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-receipt-rule-set.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CloneReceiptRuleSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CloneReceiptRuleSetOutcome CloneReceiptRuleSet(const Model::CloneReceiptRuleSetRequest& request) const;

        /**
         * <p>Creates a receipt rule set by cloning an existing one. All receipt rules and
         * configurations are copied to the new receipt rule set and are completely
         * independent of the source rule set.</p> <p>For information about setting up rule
         * sets, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-receipt-rule-set.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CloneReceiptRuleSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CloneReceiptRuleSetOutcomeCallable CloneReceiptRuleSetCallable(const Model::CloneReceiptRuleSetRequest& request) const;

        /**
         * <p>Creates a receipt rule set by cloning an existing one. All receipt rules and
         * configurations are copied to the new receipt rule set and are completely
         * independent of the source rule set.</p> <p>For information about setting up rule
         * sets, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-receipt-rule-set.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CloneReceiptRuleSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CloneReceiptRuleSetAsync(const Model::CloneReceiptRuleSetRequest& request, const CloneReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a configuration set.</p> <p>Configuration sets enable you to publish
         * email sending events. For information about using configuration sets, see the
         * <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/monitor-sending-activity.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CreateConfigurationSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConfigurationSetOutcome CreateConfigurationSet(const Model::CreateConfigurationSetRequest& request) const;

        /**
         * <p>Creates a configuration set.</p> <p>Configuration sets enable you to publish
         * email sending events. For information about using configuration sets, see the
         * <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/monitor-sending-activity.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CreateConfigurationSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateConfigurationSetOutcomeCallable CreateConfigurationSetCallable(const Model::CreateConfigurationSetRequest& request) const;

        /**
         * <p>Creates a configuration set.</p> <p>Configuration sets enable you to publish
         * email sending events. For information about using configuration sets, see the
         * <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/monitor-sending-activity.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CreateConfigurationSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateConfigurationSetAsync(const Model::CreateConfigurationSetRequest& request, const CreateConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a configuration set event destination.</p> <note> <p>When you create
         * or update an event destination, you must provide one, and only one, destination.
         * The destination can be Amazon CloudWatch, Amazon Kinesis Firehose, or Amazon
         * Simple Notification Service (Amazon SNS).</p> </note> <p>An event destination is
         * the AWS service to which Amazon SES publishes the email sending events
         * associated with a configuration set. For information about using configuration
         * sets, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/monitor-sending-activity.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CreateConfigurationSetEventDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConfigurationSetEventDestinationOutcome CreateConfigurationSetEventDestination(const Model::CreateConfigurationSetEventDestinationRequest& request) const;

        /**
         * <p>Creates a configuration set event destination.</p> <note> <p>When you create
         * or update an event destination, you must provide one, and only one, destination.
         * The destination can be Amazon CloudWatch, Amazon Kinesis Firehose, or Amazon
         * Simple Notification Service (Amazon SNS).</p> </note> <p>An event destination is
         * the AWS service to which Amazon SES publishes the email sending events
         * associated with a configuration set. For information about using configuration
         * sets, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/monitor-sending-activity.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CreateConfigurationSetEventDestination">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateConfigurationSetEventDestinationOutcomeCallable CreateConfigurationSetEventDestinationCallable(const Model::CreateConfigurationSetEventDestinationRequest& request) const;

        /**
         * <p>Creates a configuration set event destination.</p> <note> <p>When you create
         * or update an event destination, you must provide one, and only one, destination.
         * The destination can be Amazon CloudWatch, Amazon Kinesis Firehose, or Amazon
         * Simple Notification Service (Amazon SNS).</p> </note> <p>An event destination is
         * the AWS service to which Amazon SES publishes the email sending events
         * associated with a configuration set. For information about using configuration
         * sets, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/monitor-sending-activity.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CreateConfigurationSetEventDestination">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateConfigurationSetEventDestinationAsync(const Model::CreateConfigurationSetEventDestinationRequest& request, const CreateConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an association between a configuration set and a custom domain for
         * open and click event tracking. </p> <p>By default, images and links used for
         * tracking open and click events are hosted on domains operated by Amazon SES. You
         * can configure a subdomain of your own to handle these events by redirecting them
         * to the Amazon SES-operated domain. For information about using configuration
         * sets, see <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/configure-custom-open-click-domains.html">Configuring
         * Custom Domains to Handle Open and Click Tracking</a> in the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon
         * SES Developer Guide</a>.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CreateConfigurationSetTrackingOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConfigurationSetTrackingOptionsOutcome CreateConfigurationSetTrackingOptions(const Model::CreateConfigurationSetTrackingOptionsRequest& request) const;

        /**
         * <p>Creates an association between a configuration set and a custom domain for
         * open and click event tracking. </p> <p>By default, images and links used for
         * tracking open and click events are hosted on domains operated by Amazon SES. You
         * can configure a subdomain of your own to handle these events by redirecting them
         * to the Amazon SES-operated domain. For information about using configuration
         * sets, see <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/configure-custom-open-click-domains.html">Configuring
         * Custom Domains to Handle Open and Click Tracking</a> in the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon
         * SES Developer Guide</a>.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CreateConfigurationSetTrackingOptions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateConfigurationSetTrackingOptionsOutcomeCallable CreateConfigurationSetTrackingOptionsCallable(const Model::CreateConfigurationSetTrackingOptionsRequest& request) const;

        /**
         * <p>Creates an association between a configuration set and a custom domain for
         * open and click event tracking. </p> <p>By default, images and links used for
         * tracking open and click events are hosted on domains operated by Amazon SES. You
         * can configure a subdomain of your own to handle these events by redirecting them
         * to the Amazon SES-operated domain. For information about using configuration
         * sets, see <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/configure-custom-open-click-domains.html">Configuring
         * Custom Domains to Handle Open and Click Tracking</a> in the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon
         * SES Developer Guide</a>.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CreateConfigurationSetTrackingOptions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateConfigurationSetTrackingOptionsAsync(const Model::CreateConfigurationSetTrackingOptionsRequest& request, const CreateConfigurationSetTrackingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new IP address filter.</p> <p>For information about setting up IP
         * address filters, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-ip-filters.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CreateReceiptFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateReceiptFilterOutcome CreateReceiptFilter(const Model::CreateReceiptFilterRequest& request) const;

        /**
         * <p>Creates a new IP address filter.</p> <p>For information about setting up IP
         * address filters, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-ip-filters.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CreateReceiptFilter">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateReceiptFilterOutcomeCallable CreateReceiptFilterCallable(const Model::CreateReceiptFilterRequest& request) const;

        /**
         * <p>Creates a new IP address filter.</p> <p>For information about setting up IP
         * address filters, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-ip-filters.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CreateReceiptFilter">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateReceiptFilterAsync(const Model::CreateReceiptFilterRequest& request, const CreateReceiptFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a receipt rule.</p> <p>For information about setting up receipt
         * rules, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-receipt-rules.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CreateReceiptRule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateReceiptRuleOutcome CreateReceiptRule(const Model::CreateReceiptRuleRequest& request) const;

        /**
         * <p>Creates a receipt rule.</p> <p>For information about setting up receipt
         * rules, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-receipt-rules.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CreateReceiptRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateReceiptRuleOutcomeCallable CreateReceiptRuleCallable(const Model::CreateReceiptRuleRequest& request) const;

        /**
         * <p>Creates a receipt rule.</p> <p>For information about setting up receipt
         * rules, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-receipt-rules.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CreateReceiptRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateReceiptRuleAsync(const Model::CreateReceiptRuleRequest& request, const CreateReceiptRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an empty receipt rule set.</p> <p>For information about setting up
         * receipt rule sets, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-receipt-rule-set.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CreateReceiptRuleSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateReceiptRuleSetOutcome CreateReceiptRuleSet(const Model::CreateReceiptRuleSetRequest& request) const;

        /**
         * <p>Creates an empty receipt rule set.</p> <p>For information about setting up
         * receipt rule sets, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-receipt-rule-set.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CreateReceiptRuleSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateReceiptRuleSetOutcomeCallable CreateReceiptRuleSetCallable(const Model::CreateReceiptRuleSetRequest& request) const;

        /**
         * <p>Creates an empty receipt rule set.</p> <p>For information about setting up
         * receipt rule sets, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-receipt-rule-set.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/CreateReceiptRuleSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateReceiptRuleSetAsync(const Model::CreateReceiptRuleSetRequest& request, const CreateReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a configuration set. Configuration sets enable you to publish email
         * sending events. For information about using configuration sets, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/monitor-sending-activity.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DeleteConfigurationSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConfigurationSetOutcome DeleteConfigurationSet(const Model::DeleteConfigurationSetRequest& request) const;

        /**
         * <p>Deletes a configuration set. Configuration sets enable you to publish email
         * sending events. For information about using configuration sets, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/monitor-sending-activity.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DeleteConfigurationSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteConfigurationSetOutcomeCallable DeleteConfigurationSetCallable(const Model::DeleteConfigurationSetRequest& request) const;

        /**
         * <p>Deletes a configuration set. Configuration sets enable you to publish email
         * sending events. For information about using configuration sets, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/monitor-sending-activity.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DeleteConfigurationSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteConfigurationSetAsync(const Model::DeleteConfigurationSetRequest& request, const DeleteConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a configuration set event destination. Configuration set event
         * destinations are associated with configuration sets, which enable you to publish
         * email sending events. For information about using configuration sets, see the
         * <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/monitor-sending-activity.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DeleteConfigurationSetEventDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConfigurationSetEventDestinationOutcome DeleteConfigurationSetEventDestination(const Model::DeleteConfigurationSetEventDestinationRequest& request) const;

        /**
         * <p>Deletes a configuration set event destination. Configuration set event
         * destinations are associated with configuration sets, which enable you to publish
         * email sending events. For information about using configuration sets, see the
         * <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/monitor-sending-activity.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DeleteConfigurationSetEventDestination">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteConfigurationSetEventDestinationOutcomeCallable DeleteConfigurationSetEventDestinationCallable(const Model::DeleteConfigurationSetEventDestinationRequest& request) const;

        /**
         * <p>Deletes a configuration set event destination. Configuration set event
         * destinations are associated with configuration sets, which enable you to publish
         * email sending events. For information about using configuration sets, see the
         * <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/monitor-sending-activity.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DeleteConfigurationSetEventDestination">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteConfigurationSetEventDestinationAsync(const Model::DeleteConfigurationSetEventDestinationRequest& request, const DeleteConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an association between a configuration set and a custom domain for
         * open and click event tracking.</p> <p>By default, images and links used for
         * tracking open and click events are hosted on domains operated by Amazon SES. You
         * can configure a subdomain of your own to handle these events by redirecting them
         * to the Amazon SES-operated domain. For information about using configuration
         * sets, see <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/configure-custom-open-click-domains.html">Configuring
         * Custom Domains to Handle Open and Click Tracking</a> in the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon
         * SES Developer Guide</a>.</i> </p> <note> <p>Deleting this kind of association
         * will result in emails sent using the specified configuration set to capture open
         * and click events using the standard, Amazon SES-operated domains.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DeleteConfigurationSetTrackingOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConfigurationSetTrackingOptionsOutcome DeleteConfigurationSetTrackingOptions(const Model::DeleteConfigurationSetTrackingOptionsRequest& request) const;

        /**
         * <p>Deletes an association between a configuration set and a custom domain for
         * open and click event tracking.</p> <p>By default, images and links used for
         * tracking open and click events are hosted on domains operated by Amazon SES. You
         * can configure a subdomain of your own to handle these events by redirecting them
         * to the Amazon SES-operated domain. For information about using configuration
         * sets, see <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/configure-custom-open-click-domains.html">Configuring
         * Custom Domains to Handle Open and Click Tracking</a> in the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon
         * SES Developer Guide</a>.</i> </p> <note> <p>Deleting this kind of association
         * will result in emails sent using the specified configuration set to capture open
         * and click events using the standard, Amazon SES-operated domains.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DeleteConfigurationSetTrackingOptions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteConfigurationSetTrackingOptionsOutcomeCallable DeleteConfigurationSetTrackingOptionsCallable(const Model::DeleteConfigurationSetTrackingOptionsRequest& request) const;

        /**
         * <p>Deletes an association between a configuration set and a custom domain for
         * open and click event tracking.</p> <p>By default, images and links used for
         * tracking open and click events are hosted on domains operated by Amazon SES. You
         * can configure a subdomain of your own to handle these events by redirecting them
         * to the Amazon SES-operated domain. For information about using configuration
         * sets, see <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/configure-custom-open-click-domains.html">Configuring
         * Custom Domains to Handle Open and Click Tracking</a> in the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon
         * SES Developer Guide</a>.</i> </p> <note> <p>Deleting this kind of association
         * will result in emails sent using the specified configuration set to capture open
         * and click events using the standard, Amazon SES-operated domains.</p>
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DeleteConfigurationSetTrackingOptions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteConfigurationSetTrackingOptionsAsync(const Model::DeleteConfigurationSetTrackingOptionsRequest& request, const DeleteConfigurationSetTrackingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified identity (an email address or a domain) from the list
         * of verified identities.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DeleteIdentity">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIdentityOutcome DeleteIdentity(const Model::DeleteIdentityRequest& request) const;

        /**
         * <p>Deletes the specified identity (an email address or a domain) from the list
         * of verified identities.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DeleteIdentity">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteIdentityOutcomeCallable DeleteIdentityCallable(const Model::DeleteIdentityRequest& request) const;

        /**
         * <p>Deletes the specified identity (an email address or a domain) from the list
         * of verified identities.</p> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DeleteIdentity">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteIdentityAsync(const Model::DeleteIdentityRequest& request, const DeleteIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified sending authorization policy for the given identity (an
         * email address or a domain). This API returns successfully even if a policy with
         * the specified name does not exist.</p> <note> <p>This API is for the identity
         * owner only. If you have not verified the identity, this API will return an
         * error.</p> </note> <p>Sending authorization is a feature that enables an
         * identity owner to authorize other senders to use its identities. For information
         * about using sending authorization, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DeleteIdentityPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIdentityPolicyOutcome DeleteIdentityPolicy(const Model::DeleteIdentityPolicyRequest& request) const;

        /**
         * <p>Deletes the specified sending authorization policy for the given identity (an
         * email address or a domain). This API returns successfully even if a policy with
         * the specified name does not exist.</p> <note> <p>This API is for the identity
         * owner only. If you have not verified the identity, this API will return an
         * error.</p> </note> <p>Sending authorization is a feature that enables an
         * identity owner to authorize other senders to use its identities. For information
         * about using sending authorization, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DeleteIdentityPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteIdentityPolicyOutcomeCallable DeleteIdentityPolicyCallable(const Model::DeleteIdentityPolicyRequest& request) const;

        /**
         * <p>Deletes the specified sending authorization policy for the given identity (an
         * email address or a domain). This API returns successfully even if a policy with
         * the specified name does not exist.</p> <note> <p>This API is for the identity
         * owner only. If you have not verified the identity, this API will return an
         * error.</p> </note> <p>Sending authorization is a feature that enables an
         * identity owner to authorize other senders to use its identities. For information
         * about using sending authorization, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DeleteIdentityPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteIdentityPolicyAsync(const Model::DeleteIdentityPolicyRequest& request, const DeleteIdentityPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified IP address filter.</p> <p>For information about
         * managing IP address filters, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-managing-ip-filters.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DeleteReceiptFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReceiptFilterOutcome DeleteReceiptFilter(const Model::DeleteReceiptFilterRequest& request) const;

        /**
         * <p>Deletes the specified IP address filter.</p> <p>For information about
         * managing IP address filters, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-managing-ip-filters.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DeleteReceiptFilter">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteReceiptFilterOutcomeCallable DeleteReceiptFilterCallable(const Model::DeleteReceiptFilterRequest& request) const;

        /**
         * <p>Deletes the specified IP address filter.</p> <p>For information about
         * managing IP address filters, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-managing-ip-filters.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DeleteReceiptFilter">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteReceiptFilterAsync(const Model::DeleteReceiptFilterRequest& request, const DeleteReceiptFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified receipt rule.</p> <p>For information about managing
         * receipt rules, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-managing-receipt-rules.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DeleteReceiptRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReceiptRuleOutcome DeleteReceiptRule(const Model::DeleteReceiptRuleRequest& request) const;

        /**
         * <p>Deletes the specified receipt rule.</p> <p>For information about managing
         * receipt rules, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-managing-receipt-rules.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DeleteReceiptRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteReceiptRuleOutcomeCallable DeleteReceiptRuleCallable(const Model::DeleteReceiptRuleRequest& request) const;

        /**
         * <p>Deletes the specified receipt rule.</p> <p>For information about managing
         * receipt rules, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-managing-receipt-rules.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DeleteReceiptRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteReceiptRuleAsync(const Model::DeleteReceiptRuleRequest& request, const DeleteReceiptRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified receipt rule set and all of the receipt rules it
         * contains.</p> <note> <p>The currently active rule set cannot be deleted.</p>
         * </note> <p>For information about managing receipt rule sets, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-managing-receipt-rule-sets.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DeleteReceiptRuleSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReceiptRuleSetOutcome DeleteReceiptRuleSet(const Model::DeleteReceiptRuleSetRequest& request) const;

        /**
         * <p>Deletes the specified receipt rule set and all of the receipt rules it
         * contains.</p> <note> <p>The currently active rule set cannot be deleted.</p>
         * </note> <p>For information about managing receipt rule sets, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-managing-receipt-rule-sets.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DeleteReceiptRuleSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteReceiptRuleSetOutcomeCallable DeleteReceiptRuleSetCallable(const Model::DeleteReceiptRuleSetRequest& request) const;

        /**
         * <p>Deletes the specified receipt rule set and all of the receipt rules it
         * contains.</p> <note> <p>The currently active rule set cannot be deleted.</p>
         * </note> <p>For information about managing receipt rule sets, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-managing-receipt-rule-sets.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DeleteReceiptRuleSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteReceiptRuleSetAsync(const Model::DeleteReceiptRuleSetRequest& request, const DeleteReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deprecated. Use the <code>DeleteIdentity</code> operation to delete email
         * addresses and domains.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DeleteVerifiedEmailAddress">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVerifiedEmailAddressOutcome DeleteVerifiedEmailAddress(const Model::DeleteVerifiedEmailAddressRequest& request) const;

        /**
         * <p>Deprecated. Use the <code>DeleteIdentity</code> operation to delete email
         * addresses and domains.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DeleteVerifiedEmailAddress">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVerifiedEmailAddressOutcomeCallable DeleteVerifiedEmailAddressCallable(const Model::DeleteVerifiedEmailAddressRequest& request) const;

        /**
         * <p>Deprecated. Use the <code>DeleteIdentity</code> operation to delete email
         * addresses and domains.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DeleteVerifiedEmailAddress">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVerifiedEmailAddressAsync(const Model::DeleteVerifiedEmailAddressRequest& request, const DeleteVerifiedEmailAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the metadata and receipt rules for the receipt rule set that is
         * currently active.</p> <p>For information about setting up receipt rule sets, see
         * the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-receipt-rule-set.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DescribeActiveReceiptRuleSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeActiveReceiptRuleSetOutcome DescribeActiveReceiptRuleSet(const Model::DescribeActiveReceiptRuleSetRequest& request) const;

        /**
         * <p>Returns the metadata and receipt rules for the receipt rule set that is
         * currently active.</p> <p>For information about setting up receipt rule sets, see
         * the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-receipt-rule-set.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DescribeActiveReceiptRuleSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeActiveReceiptRuleSetOutcomeCallable DescribeActiveReceiptRuleSetCallable(const Model::DescribeActiveReceiptRuleSetRequest& request) const;

        /**
         * <p>Returns the metadata and receipt rules for the receipt rule set that is
         * currently active.</p> <p>For information about setting up receipt rule sets, see
         * the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-receipt-rule-set.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DescribeActiveReceiptRuleSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeActiveReceiptRuleSetAsync(const Model::DescribeActiveReceiptRuleSetRequest& request, const DescribeActiveReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the details of the specified configuration set. For information about
         * using configuration sets, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/monitor-sending-activity.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DescribeConfigurationSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConfigurationSetOutcome DescribeConfigurationSet(const Model::DescribeConfigurationSetRequest& request) const;

        /**
         * <p>Returns the details of the specified configuration set. For information about
         * using configuration sets, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/monitor-sending-activity.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DescribeConfigurationSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeConfigurationSetOutcomeCallable DescribeConfigurationSetCallable(const Model::DescribeConfigurationSetRequest& request) const;

        /**
         * <p>Returns the details of the specified configuration set. For information about
         * using configuration sets, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/monitor-sending-activity.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DescribeConfigurationSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeConfigurationSetAsync(const Model::DescribeConfigurationSetRequest& request, const DescribeConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the details of the specified receipt rule.</p> <p>For information
         * about setting up receipt rules, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-receipt-rules.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DescribeReceiptRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReceiptRuleOutcome DescribeReceiptRule(const Model::DescribeReceiptRuleRequest& request) const;

        /**
         * <p>Returns the details of the specified receipt rule.</p> <p>For information
         * about setting up receipt rules, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-receipt-rules.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DescribeReceiptRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReceiptRuleOutcomeCallable DescribeReceiptRuleCallable(const Model::DescribeReceiptRuleRequest& request) const;

        /**
         * <p>Returns the details of the specified receipt rule.</p> <p>For information
         * about setting up receipt rules, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-receipt-rules.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DescribeReceiptRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReceiptRuleAsync(const Model::DescribeReceiptRuleRequest& request, const DescribeReceiptRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the details of the specified receipt rule set.</p> <p>For information
         * about managing receipt rule sets, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-managing-receipt-rule-sets.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DescribeReceiptRuleSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeReceiptRuleSetOutcome DescribeReceiptRuleSet(const Model::DescribeReceiptRuleSetRequest& request) const;

        /**
         * <p>Returns the details of the specified receipt rule set.</p> <p>For information
         * about managing receipt rule sets, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-managing-receipt-rule-sets.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DescribeReceiptRuleSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeReceiptRuleSetOutcomeCallable DescribeReceiptRuleSetCallable(const Model::DescribeReceiptRuleSetRequest& request) const;

        /**
         * <p>Returns the details of the specified receipt rule set.</p> <p>For information
         * about managing receipt rule sets, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-managing-receipt-rule-sets.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DescribeReceiptRuleSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeReceiptRuleSetAsync(const Model::DescribeReceiptRuleSetRequest& request, const DescribeReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the current status of Easy DKIM signing for an entity. For domain
         * name identities, this operation also returns the DKIM tokens that are required
         * for Easy DKIM signing, and whether Amazon SES has successfully verified that
         * these tokens have been published.</p> <p>This operation takes a list of
         * identities as input and returns the following information for each:</p> <ul>
         * <li> <p>Whether Easy DKIM signing is enabled or disabled.</p> </li> <li> <p>A
         * set of DKIM tokens that represent the identity. If the identity is an email
         * address, the tokens represent the domain of that address.</p> </li> <li>
         * <p>Whether Amazon SES has successfully verified the DKIM tokens published in the
         * domain's DNS. This information is only returned for domain name identities, not
         * for email addresses.</p> </li> </ul> <p>This operation is throttled at one
         * request per second and can only get DKIM attributes for up to 100 identities at
         * a time.</p> <p>For more information about creating DNS records using DKIM
         * tokens, go to the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim-dns-records.html">Amazon
         * SES Developer Guide</a>.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/GetIdentityDkimAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIdentityDkimAttributesOutcome GetIdentityDkimAttributes(const Model::GetIdentityDkimAttributesRequest& request) const;

        /**
         * <p>Returns the current status of Easy DKIM signing for an entity. For domain
         * name identities, this operation also returns the DKIM tokens that are required
         * for Easy DKIM signing, and whether Amazon SES has successfully verified that
         * these tokens have been published.</p> <p>This operation takes a list of
         * identities as input and returns the following information for each:</p> <ul>
         * <li> <p>Whether Easy DKIM signing is enabled or disabled.</p> </li> <li> <p>A
         * set of DKIM tokens that represent the identity. If the identity is an email
         * address, the tokens represent the domain of that address.</p> </li> <li>
         * <p>Whether Amazon SES has successfully verified the DKIM tokens published in the
         * domain's DNS. This information is only returned for domain name identities, not
         * for email addresses.</p> </li> </ul> <p>This operation is throttled at one
         * request per second and can only get DKIM attributes for up to 100 identities at
         * a time.</p> <p>For more information about creating DNS records using DKIM
         * tokens, go to the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim-dns-records.html">Amazon
         * SES Developer Guide</a>.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/GetIdentityDkimAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetIdentityDkimAttributesOutcomeCallable GetIdentityDkimAttributesCallable(const Model::GetIdentityDkimAttributesRequest& request) const;

        /**
         * <p>Returns the current status of Easy DKIM signing for an entity. For domain
         * name identities, this operation also returns the DKIM tokens that are required
         * for Easy DKIM signing, and whether Amazon SES has successfully verified that
         * these tokens have been published.</p> <p>This operation takes a list of
         * identities as input and returns the following information for each:</p> <ul>
         * <li> <p>Whether Easy DKIM signing is enabled or disabled.</p> </li> <li> <p>A
         * set of DKIM tokens that represent the identity. If the identity is an email
         * address, the tokens represent the domain of that address.</p> </li> <li>
         * <p>Whether Amazon SES has successfully verified the DKIM tokens published in the
         * domain's DNS. This information is only returned for domain name identities, not
         * for email addresses.</p> </li> </ul> <p>This operation is throttled at one
         * request per second and can only get DKIM attributes for up to 100 identities at
         * a time.</p> <p>For more information about creating DNS records using DKIM
         * tokens, go to the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim-dns-records.html">Amazon
         * SES Developer Guide</a>.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/GetIdentityDkimAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetIdentityDkimAttributesAsync(const Model::GetIdentityDkimAttributesRequest& request, const GetIdentityDkimAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the custom MAIL FROM attributes for a list of identities (email
         * addresses : domains).</p> <p>This operation is throttled at one request per
         * second and can only get custom MAIL FROM attributes for up to 100 identities at
         * a time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/GetIdentityMailFromDomainAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIdentityMailFromDomainAttributesOutcome GetIdentityMailFromDomainAttributes(const Model::GetIdentityMailFromDomainAttributesRequest& request) const;

        /**
         * <p>Returns the custom MAIL FROM attributes for a list of identities (email
         * addresses : domains).</p> <p>This operation is throttled at one request per
         * second and can only get custom MAIL FROM attributes for up to 100 identities at
         * a time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/GetIdentityMailFromDomainAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetIdentityMailFromDomainAttributesOutcomeCallable GetIdentityMailFromDomainAttributesCallable(const Model::GetIdentityMailFromDomainAttributesRequest& request) const;

        /**
         * <p>Returns the custom MAIL FROM attributes for a list of identities (email
         * addresses : domains).</p> <p>This operation is throttled at one request per
         * second and can only get custom MAIL FROM attributes for up to 100 identities at
         * a time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/GetIdentityMailFromDomainAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetIdentityMailFromDomainAttributesAsync(const Model::GetIdentityMailFromDomainAttributesRequest& request, const GetIdentityMailFromDomainAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Given a list of verified identities (email addresses and/or domains), returns
         * a structure describing identity notification attributes.</p> <p>This operation
         * is throttled at one request per second and can only get notification attributes
         * for up to 100 identities at a time.</p> <p>For more information about using
         * notifications with Amazon SES, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/notifications.html">Amazon
         * SES Developer Guide</a>.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/GetIdentityNotificationAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIdentityNotificationAttributesOutcome GetIdentityNotificationAttributes(const Model::GetIdentityNotificationAttributesRequest& request) const;

        /**
         * <p>Given a list of verified identities (email addresses and/or domains), returns
         * a structure describing identity notification attributes.</p> <p>This operation
         * is throttled at one request per second and can only get notification attributes
         * for up to 100 identities at a time.</p> <p>For more information about using
         * notifications with Amazon SES, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/notifications.html">Amazon
         * SES Developer Guide</a>.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/GetIdentityNotificationAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetIdentityNotificationAttributesOutcomeCallable GetIdentityNotificationAttributesCallable(const Model::GetIdentityNotificationAttributesRequest& request) const;

        /**
         * <p>Given a list of verified identities (email addresses and/or domains), returns
         * a structure describing identity notification attributes.</p> <p>This operation
         * is throttled at one request per second and can only get notification attributes
         * for up to 100 identities at a time.</p> <p>For more information about using
         * notifications with Amazon SES, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/notifications.html">Amazon
         * SES Developer Guide</a>.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/GetIdentityNotificationAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetIdentityNotificationAttributesAsync(const Model::GetIdentityNotificationAttributesRequest& request, const GetIdentityNotificationAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the requested sending authorization policies for the given identity
         * (an email address or a domain). The policies are returned as a map of policy
         * names to policy contents. You can retrieve a maximum of 20 policies at a
         * time.</p> <note> <p>This API is for the identity owner only. If you have not
         * verified the identity, this API will return an error.</p> </note> <p>Sending
         * authorization is a feature that enables an identity owner to authorize other
         * senders to use its identities. For information about using sending
         * authorization, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/GetIdentityPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIdentityPoliciesOutcome GetIdentityPolicies(const Model::GetIdentityPoliciesRequest& request) const;

        /**
         * <p>Returns the requested sending authorization policies for the given identity
         * (an email address or a domain). The policies are returned as a map of policy
         * names to policy contents. You can retrieve a maximum of 20 policies at a
         * time.</p> <note> <p>This API is for the identity owner only. If you have not
         * verified the identity, this API will return an error.</p> </note> <p>Sending
         * authorization is a feature that enables an identity owner to authorize other
         * senders to use its identities. For information about using sending
         * authorization, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/GetIdentityPolicies">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetIdentityPoliciesOutcomeCallable GetIdentityPoliciesCallable(const Model::GetIdentityPoliciesRequest& request) const;

        /**
         * <p>Returns the requested sending authorization policies for the given identity
         * (an email address or a domain). The policies are returned as a map of policy
         * names to policy contents. You can retrieve a maximum of 20 policies at a
         * time.</p> <note> <p>This API is for the identity owner only. If you have not
         * verified the identity, this API will return an error.</p> </note> <p>Sending
         * authorization is a feature that enables an identity owner to authorize other
         * senders to use its identities. For information about using sending
         * authorization, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/GetIdentityPolicies">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetIdentityPoliciesAsync(const Model::GetIdentityPoliciesRequest& request, const GetIdentityPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Given a list of identities (email addresses and/or domains), returns the
         * verification status and (for domain identities) the verification token for each
         * identity.</p> <p>The verification status of an email address is "Pending" until
         * the email address owner clicks the link within the verification email that
         * Amazon SES sent to that address. If the email address owner clicks the link
         * within 24 hours, the verification status of the email address changes to
         * "Success". If the link is not clicked within 24 hours, the verification status
         * changes to "Failed." In that case, if you still want to verify the email
         * address, you must restart the verification process from the beginning.</p>
         * <p>For domain identities, the domain's verification status is "Pending" as
         * Amazon SES searches for the required TXT record in the DNS settings of the
         * domain. When Amazon SES detects the record, the domain's verification status
         * changes to "Success". If Amazon SES is unable to detect the record within 72
         * hours, the domain's verification status changes to "Failed." In that case, if
         * you still want to verify the domain, you must restart the verification process
         * from the beginning.</p> <p>This operation is throttled at one request per second
         * and can only get verification attributes for up to 100 identities at a
         * time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/GetIdentityVerificationAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIdentityVerificationAttributesOutcome GetIdentityVerificationAttributes(const Model::GetIdentityVerificationAttributesRequest& request) const;

        /**
         * <p>Given a list of identities (email addresses and/or domains), returns the
         * verification status and (for domain identities) the verification token for each
         * identity.</p> <p>The verification status of an email address is "Pending" until
         * the email address owner clicks the link within the verification email that
         * Amazon SES sent to that address. If the email address owner clicks the link
         * within 24 hours, the verification status of the email address changes to
         * "Success". If the link is not clicked within 24 hours, the verification status
         * changes to "Failed." In that case, if you still want to verify the email
         * address, you must restart the verification process from the beginning.</p>
         * <p>For domain identities, the domain's verification status is "Pending" as
         * Amazon SES searches for the required TXT record in the DNS settings of the
         * domain. When Amazon SES detects the record, the domain's verification status
         * changes to "Success". If Amazon SES is unable to detect the record within 72
         * hours, the domain's verification status changes to "Failed." In that case, if
         * you still want to verify the domain, you must restart the verification process
         * from the beginning.</p> <p>This operation is throttled at one request per second
         * and can only get verification attributes for up to 100 identities at a
         * time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/GetIdentityVerificationAttributes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetIdentityVerificationAttributesOutcomeCallable GetIdentityVerificationAttributesCallable(const Model::GetIdentityVerificationAttributesRequest& request) const;

        /**
         * <p>Given a list of identities (email addresses and/or domains), returns the
         * verification status and (for domain identities) the verification token for each
         * identity.</p> <p>The verification status of an email address is "Pending" until
         * the email address owner clicks the link within the verification email that
         * Amazon SES sent to that address. If the email address owner clicks the link
         * within 24 hours, the verification status of the email address changes to
         * "Success". If the link is not clicked within 24 hours, the verification status
         * changes to "Failed." In that case, if you still want to verify the email
         * address, you must restart the verification process from the beginning.</p>
         * <p>For domain identities, the domain's verification status is "Pending" as
         * Amazon SES searches for the required TXT record in the DNS settings of the
         * domain. When Amazon SES detects the record, the domain's verification status
         * changes to "Success". If Amazon SES is unable to detect the record within 72
         * hours, the domain's verification status changes to "Failed." In that case, if
         * you still want to verify the domain, you must restart the verification process
         * from the beginning.</p> <p>This operation is throttled at one request per second
         * and can only get verification attributes for up to 100 identities at a
         * time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/GetIdentityVerificationAttributes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetIdentityVerificationAttributesAsync(const Model::GetIdentityVerificationAttributesRequest& request, const GetIdentityVerificationAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides the sending limits for the Amazon SES account. </p> <p>You can
         * execute this operation no more than once per second.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/GetSendQuota">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSendQuotaOutcome GetSendQuota(const Model::GetSendQuotaRequest& request) const;

        /**
         * <p>Provides the sending limits for the Amazon SES account. </p> <p>You can
         * execute this operation no more than once per second.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/GetSendQuota">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSendQuotaOutcomeCallable GetSendQuotaCallable(const Model::GetSendQuotaRequest& request) const;

        /**
         * <p>Provides the sending limits for the Amazon SES account. </p> <p>You can
         * execute this operation no more than once per second.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/GetSendQuota">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSendQuotaAsync(const Model::GetSendQuotaRequest& request, const GetSendQuotaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides sending statistics for the Amazon SES account. The result is a list
         * of data points, representing the last two weeks of sending activity. Each data
         * point in the list contains statistics for a 15-minute period of time.</p> <p>You
         * can execute this operation no more than once per second.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/GetSendStatistics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSendStatisticsOutcome GetSendStatistics(const Model::GetSendStatisticsRequest& request) const;

        /**
         * <p>Provides sending statistics for the Amazon SES account. The result is a list
         * of data points, representing the last two weeks of sending activity. Each data
         * point in the list contains statistics for a 15-minute period of time.</p> <p>You
         * can execute this operation no more than once per second.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/GetSendStatistics">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSendStatisticsOutcomeCallable GetSendStatisticsCallable(const Model::GetSendStatisticsRequest& request) const;

        /**
         * <p>Provides sending statistics for the Amazon SES account. The result is a list
         * of data points, representing the last two weeks of sending activity. Each data
         * point in the list contains statistics for a 15-minute period of time.</p> <p>You
         * can execute this operation no more than once per second.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/GetSendStatistics">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSendStatisticsAsync(const Model::GetSendStatisticsRequest& request, const GetSendStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides a list of the configuration sets associated with your Amazon SES
         * account. For information about using configuration sets, see <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/monitor-sending-activity.html">Monitoring
         * Your Amazon SES Sending Activity</a> in the <i>Amazon SES Developer
         * Guide</i>.</p> <p>You can execute this operation no more than once per second.
         * This operation will return up to 50 configuration sets each time it is run. If
         * your Amazon SES account has more than 50 configuration sets, this operation will
         * also return a NextToken element. You can then execute the
         * <code>ListConfigurationSets</code> operation again, passing the
         * <code>NextToken</code> parameter and the value of the NextToken element to
         * retrieve additional results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ListConfigurationSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConfigurationSetsOutcome ListConfigurationSets(const Model::ListConfigurationSetsRequest& request) const;

        /**
         * <p>Provides a list of the configuration sets associated with your Amazon SES
         * account. For information about using configuration sets, see <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/monitor-sending-activity.html">Monitoring
         * Your Amazon SES Sending Activity</a> in the <i>Amazon SES Developer
         * Guide</i>.</p> <p>You can execute this operation no more than once per second.
         * This operation will return up to 50 configuration sets each time it is run. If
         * your Amazon SES account has more than 50 configuration sets, this operation will
         * also return a NextToken element. You can then execute the
         * <code>ListConfigurationSets</code> operation again, passing the
         * <code>NextToken</code> parameter and the value of the NextToken element to
         * retrieve additional results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ListConfigurationSets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListConfigurationSetsOutcomeCallable ListConfigurationSetsCallable(const Model::ListConfigurationSetsRequest& request) const;

        /**
         * <p>Provides a list of the configuration sets associated with your Amazon SES
         * account. For information about using configuration sets, see <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/monitor-sending-activity.html">Monitoring
         * Your Amazon SES Sending Activity</a> in the <i>Amazon SES Developer
         * Guide</i>.</p> <p>You can execute this operation no more than once per second.
         * This operation will return up to 50 configuration sets each time it is run. If
         * your Amazon SES account has more than 50 configuration sets, this operation will
         * also return a NextToken element. You can then execute the
         * <code>ListConfigurationSets</code> operation again, passing the
         * <code>NextToken</code> parameter and the value of the NextToken element to
         * retrieve additional results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ListConfigurationSets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListConfigurationSetsAsync(const Model::ListConfigurationSetsRequest& request, const ListConfigurationSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list containing all of the identities (email addresses and domains)
         * for your AWS account, regardless of verification status.</p> <p>You can execute
         * this operation no more than once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ListIdentities">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIdentitiesOutcome ListIdentities(const Model::ListIdentitiesRequest& request) const;

        /**
         * <p>Returns a list containing all of the identities (email addresses and domains)
         * for your AWS account, regardless of verification status.</p> <p>You can execute
         * this operation no more than once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ListIdentities">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListIdentitiesOutcomeCallable ListIdentitiesCallable(const Model::ListIdentitiesRequest& request) const;

        /**
         * <p>Returns a list containing all of the identities (email addresses and domains)
         * for your AWS account, regardless of verification status.</p> <p>You can execute
         * this operation no more than once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ListIdentities">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListIdentitiesAsync(const Model::ListIdentitiesRequest& request, const ListIdentitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of sending authorization policies that are attached to the
         * given identity (an email address or a domain). This API returns only a list. If
         * you want the actual policy content, you can use
         * <code>GetIdentityPolicies</code>.</p> <note> <p>This API is for the identity
         * owner only. If you have not verified the identity, this API will return an
         * error.</p> </note> <p>Sending authorization is a feature that enables an
         * identity owner to authorize other senders to use its identities. For information
         * about using sending authorization, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ListIdentityPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIdentityPoliciesOutcome ListIdentityPolicies(const Model::ListIdentityPoliciesRequest& request) const;

        /**
         * <p>Returns a list of sending authorization policies that are attached to the
         * given identity (an email address or a domain). This API returns only a list. If
         * you want the actual policy content, you can use
         * <code>GetIdentityPolicies</code>.</p> <note> <p>This API is for the identity
         * owner only. If you have not verified the identity, this API will return an
         * error.</p> </note> <p>Sending authorization is a feature that enables an
         * identity owner to authorize other senders to use its identities. For information
         * about using sending authorization, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ListIdentityPolicies">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListIdentityPoliciesOutcomeCallable ListIdentityPoliciesCallable(const Model::ListIdentityPoliciesRequest& request) const;

        /**
         * <p>Returns a list of sending authorization policies that are attached to the
         * given identity (an email address or a domain). This API returns only a list. If
         * you want the actual policy content, you can use
         * <code>GetIdentityPolicies</code>.</p> <note> <p>This API is for the identity
         * owner only. If you have not verified the identity, this API will return an
         * error.</p> </note> <p>Sending authorization is a feature that enables an
         * identity owner to authorize other senders to use its identities. For information
         * about using sending authorization, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ListIdentityPolicies">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListIdentityPoliciesAsync(const Model::ListIdentityPoliciesRequest& request, const ListIdentityPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the IP address filters associated with your AWS account.</p> <p>For
         * information about managing IP address filters, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-managing-ip-filters.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ListReceiptFilters">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReceiptFiltersOutcome ListReceiptFilters(const Model::ListReceiptFiltersRequest& request) const;

        /**
         * <p>Lists the IP address filters associated with your AWS account.</p> <p>For
         * information about managing IP address filters, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-managing-ip-filters.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ListReceiptFilters">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListReceiptFiltersOutcomeCallable ListReceiptFiltersCallable(const Model::ListReceiptFiltersRequest& request) const;

        /**
         * <p>Lists the IP address filters associated with your AWS account.</p> <p>For
         * information about managing IP address filters, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-managing-ip-filters.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ListReceiptFilters">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListReceiptFiltersAsync(const Model::ListReceiptFiltersRequest& request, const ListReceiptFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the receipt rule sets that exist under your AWS account. If there are
         * additional receipt rule sets to be retrieved, you will receive a
         * <code>NextToken</code> that you can provide to the next call to
         * <code>ListReceiptRuleSets</code> to retrieve the additional entries.</p> <p>For
         * information about managing receipt rule sets, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-managing-receipt-rule-sets.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ListReceiptRuleSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReceiptRuleSetsOutcome ListReceiptRuleSets(const Model::ListReceiptRuleSetsRequest& request) const;

        /**
         * <p>Lists the receipt rule sets that exist under your AWS account. If there are
         * additional receipt rule sets to be retrieved, you will receive a
         * <code>NextToken</code> that you can provide to the next call to
         * <code>ListReceiptRuleSets</code> to retrieve the additional entries.</p> <p>For
         * information about managing receipt rule sets, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-managing-receipt-rule-sets.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ListReceiptRuleSets">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListReceiptRuleSetsOutcomeCallable ListReceiptRuleSetsCallable(const Model::ListReceiptRuleSetsRequest& request) const;

        /**
         * <p>Lists the receipt rule sets that exist under your AWS account. If there are
         * additional receipt rule sets to be retrieved, you will receive a
         * <code>NextToken</code> that you can provide to the next call to
         * <code>ListReceiptRuleSets</code> to retrieve the additional entries.</p> <p>For
         * information about managing receipt rule sets, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-managing-receipt-rule-sets.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ListReceiptRuleSets">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListReceiptRuleSetsAsync(const Model::ListReceiptRuleSetsRequest& request, const ListReceiptRuleSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deprecated. Use the <code>ListIdentities</code> operation to list the email
         * addresses and domains associated with your account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ListVerifiedEmailAddresses">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVerifiedEmailAddressesOutcome ListVerifiedEmailAddresses(const Model::ListVerifiedEmailAddressesRequest& request) const;

        /**
         * <p>Deprecated. Use the <code>ListIdentities</code> operation to list the email
         * addresses and domains associated with your account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ListVerifiedEmailAddresses">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListVerifiedEmailAddressesOutcomeCallable ListVerifiedEmailAddressesCallable(const Model::ListVerifiedEmailAddressesRequest& request) const;

        /**
         * <p>Deprecated. Use the <code>ListIdentities</code> operation to list the email
         * addresses and domains associated with your account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ListVerifiedEmailAddresses">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListVerifiedEmailAddressesAsync(const Model::ListVerifiedEmailAddressesRequest& request, const ListVerifiedEmailAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or updates a sending authorization policy for the specified identity (an
         * email address or a domain).</p> <note> <p>This API is for the identity owner
         * only. If you have not verified the identity, this API will return an error.</p>
         * </note> <p>Sending authorization is a feature that enables an identity owner to
         * authorize other senders to use its identities. For information about using
         * sending authorization, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/PutIdentityPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutIdentityPolicyOutcome PutIdentityPolicy(const Model::PutIdentityPolicyRequest& request) const;

        /**
         * <p>Adds or updates a sending authorization policy for the specified identity (an
         * email address or a domain).</p> <note> <p>This API is for the identity owner
         * only. If you have not verified the identity, this API will return an error.</p>
         * </note> <p>Sending authorization is a feature that enables an identity owner to
         * authorize other senders to use its identities. For information about using
         * sending authorization, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/PutIdentityPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutIdentityPolicyOutcomeCallable PutIdentityPolicyCallable(const Model::PutIdentityPolicyRequest& request) const;

        /**
         * <p>Adds or updates a sending authorization policy for the specified identity (an
         * email address or a domain).</p> <note> <p>This API is for the identity owner
         * only. If you have not verified the identity, this API will return an error.</p>
         * </note> <p>Sending authorization is a feature that enables an identity owner to
         * authorize other senders to use its identities. For information about using
         * sending authorization, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/PutIdentityPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutIdentityPolicyAsync(const Model::PutIdentityPolicyRequest& request, const PutIdentityPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Reorders the receipt rules within a receipt rule set.</p> <note> <p>All of
         * the rules in the rule set must be represented in this request. That is, this API
         * will return an error if the reorder request doesn't explicitly position all of
         * the rules.</p> </note> <p>For information about managing receipt rule sets, see
         * the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-managing-receipt-rule-sets.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ReorderReceiptRuleSet">AWS
         * API Reference</a></p>
         */
        virtual Model::ReorderReceiptRuleSetOutcome ReorderReceiptRuleSet(const Model::ReorderReceiptRuleSetRequest& request) const;

        /**
         * <p>Reorders the receipt rules within a receipt rule set.</p> <note> <p>All of
         * the rules in the rule set must be represented in this request. That is, this API
         * will return an error if the reorder request doesn't explicitly position all of
         * the rules.</p> </note> <p>For information about managing receipt rule sets, see
         * the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-managing-receipt-rule-sets.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ReorderReceiptRuleSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ReorderReceiptRuleSetOutcomeCallable ReorderReceiptRuleSetCallable(const Model::ReorderReceiptRuleSetRequest& request) const;

        /**
         * <p>Reorders the receipt rules within a receipt rule set.</p> <note> <p>All of
         * the rules in the rule set must be represented in this request. That is, this API
         * will return an error if the reorder request doesn't explicitly position all of
         * the rules.</p> </note> <p>For information about managing receipt rule sets, see
         * the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-managing-receipt-rule-sets.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ReorderReceiptRuleSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ReorderReceiptRuleSetAsync(const Model::ReorderReceiptRuleSetRequest& request, const ReorderReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Generates and sends a bounce message to the sender of an email you received
         * through Amazon SES. You can only use this API on an email up to 24 hours after
         * you receive it.</p> <note> <p>You cannot use this API to send generic bounces
         * for mail that was not received by Amazon SES.</p> </note> <p>For information
         * about receiving email through Amazon SES, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SendBounce">AWS
         * API Reference</a></p>
         */
        virtual Model::SendBounceOutcome SendBounce(const Model::SendBounceRequest& request) const;

        /**
         * <p>Generates and sends a bounce message to the sender of an email you received
         * through Amazon SES. You can only use this API on an email up to 24 hours after
         * you receive it.</p> <note> <p>You cannot use this API to send generic bounces
         * for mail that was not received by Amazon SES.</p> </note> <p>For information
         * about receiving email through Amazon SES, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SendBounce">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendBounceOutcomeCallable SendBounceCallable(const Model::SendBounceRequest& request) const;

        /**
         * <p>Generates and sends a bounce message to the sender of an email you received
         * through Amazon SES. You can only use this API on an email up to 24 hours after
         * you receive it.</p> <note> <p>You cannot use this API to send generic bounces
         * for mail that was not received by Amazon SES.</p> </note> <p>For information
         * about receiving email through Amazon SES, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SendBounce">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendBounceAsync(const Model::SendBounceRequest& request, const SendBounceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Composes an email message and immediately queues it for sending. In order to
         * send email using the <code>SendEmail</code> operation, your message must meet
         * the following requirements:</p> <ul> <li> <p>The message must be sent from a
         * verified email address or domain. If you attempt to send email using a
         * non-verified address or domain, the operation will result in an "Email address
         * not verified" error. </p> </li> <li> <p>If your account is still in the Amazon
         * SES sandbox, you may only send to verified addresses or domains, or to email
         * addresses associated with the Amazon SES Mailbox Simulator. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-addresses-and-domains.html">Verifying
         * Email Addresses and Domains</a> in the <i>Amazon SES Developer Guide</i>.</p>
         * </li> <li> <p>The total size of the message, including attachments, must be
         * smaller than 10 MB.</p> </li> <li> <p>The message must include at least one
         * recipient email address. The recipient address can be a To: address, a CC:
         * address, or a BCC: address. If a recipient email address is invalid (that is, it
         * is not in the format <i>UserName@[SubDomain.]Domain.TopLevelDomain</i>), the
         * entire message will be rejected, even if the message contains other recipients
         * that are valid.</p> </li> <li> <p>The message may not include more than 50
         * recipients, across the To:, CC: and BCC: fields. If you need to send an email
         * message to a larger audience, you can divide your recipient list into groups of
         * 50 or fewer, and then call the <code>SendEmail</code> operation several times to
         * send the message to each group.</p> </li> </ul> <important> <p>For every message
         * that you send, the total number of recipients (including each recipient in the
         * To:, CC: and BCC: fields) is counted against the maximum number of emails you
         * can send in a 24-hour period (your <i>sending quota</i>). For more information
         * about sending quotas in Amazon SES, see <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/manage-sending-limits.html">Managing
         * Your Amazon SES Sending Limits</a> in the <i>Amazon SES Developer Guide</i>.</p>
         * </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SendEmail">AWS API
         * Reference</a></p>
         */
        virtual Model::SendEmailOutcome SendEmail(const Model::SendEmailRequest& request) const;

        /**
         * <p>Composes an email message and immediately queues it for sending. In order to
         * send email using the <code>SendEmail</code> operation, your message must meet
         * the following requirements:</p> <ul> <li> <p>The message must be sent from a
         * verified email address or domain. If you attempt to send email using a
         * non-verified address or domain, the operation will result in an "Email address
         * not verified" error. </p> </li> <li> <p>If your account is still in the Amazon
         * SES sandbox, you may only send to verified addresses or domains, or to email
         * addresses associated with the Amazon SES Mailbox Simulator. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-addresses-and-domains.html">Verifying
         * Email Addresses and Domains</a> in the <i>Amazon SES Developer Guide</i>.</p>
         * </li> <li> <p>The total size of the message, including attachments, must be
         * smaller than 10 MB.</p> </li> <li> <p>The message must include at least one
         * recipient email address. The recipient address can be a To: address, a CC:
         * address, or a BCC: address. If a recipient email address is invalid (that is, it
         * is not in the format <i>UserName@[SubDomain.]Domain.TopLevelDomain</i>), the
         * entire message will be rejected, even if the message contains other recipients
         * that are valid.</p> </li> <li> <p>The message may not include more than 50
         * recipients, across the To:, CC: and BCC: fields. If you need to send an email
         * message to a larger audience, you can divide your recipient list into groups of
         * 50 or fewer, and then call the <code>SendEmail</code> operation several times to
         * send the message to each group.</p> </li> </ul> <important> <p>For every message
         * that you send, the total number of recipients (including each recipient in the
         * To:, CC: and BCC: fields) is counted against the maximum number of emails you
         * can send in a 24-hour period (your <i>sending quota</i>). For more information
         * about sending quotas in Amazon SES, see <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/manage-sending-limits.html">Managing
         * Your Amazon SES Sending Limits</a> in the <i>Amazon SES Developer Guide</i>.</p>
         * </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SendEmail">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendEmailOutcomeCallable SendEmailCallable(const Model::SendEmailRequest& request) const;

        /**
         * <p>Composes an email message and immediately queues it for sending. In order to
         * send email using the <code>SendEmail</code> operation, your message must meet
         * the following requirements:</p> <ul> <li> <p>The message must be sent from a
         * verified email address or domain. If you attempt to send email using a
         * non-verified address or domain, the operation will result in an "Email address
         * not verified" error. </p> </li> <li> <p>If your account is still in the Amazon
         * SES sandbox, you may only send to verified addresses or domains, or to email
         * addresses associated with the Amazon SES Mailbox Simulator. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-addresses-and-domains.html">Verifying
         * Email Addresses and Domains</a> in the <i>Amazon SES Developer Guide</i>.</p>
         * </li> <li> <p>The total size of the message, including attachments, must be
         * smaller than 10 MB.</p> </li> <li> <p>The message must include at least one
         * recipient email address. The recipient address can be a To: address, a CC:
         * address, or a BCC: address. If a recipient email address is invalid (that is, it
         * is not in the format <i>UserName@[SubDomain.]Domain.TopLevelDomain</i>), the
         * entire message will be rejected, even if the message contains other recipients
         * that are valid.</p> </li> <li> <p>The message may not include more than 50
         * recipients, across the To:, CC: and BCC: fields. If you need to send an email
         * message to a larger audience, you can divide your recipient list into groups of
         * 50 or fewer, and then call the <code>SendEmail</code> operation several times to
         * send the message to each group.</p> </li> </ul> <important> <p>For every message
         * that you send, the total number of recipients (including each recipient in the
         * To:, CC: and BCC: fields) is counted against the maximum number of emails you
         * can send in a 24-hour period (your <i>sending quota</i>). For more information
         * about sending quotas in Amazon SES, see <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/manage-sending-limits.html">Managing
         * Your Amazon SES Sending Limits</a> in the <i>Amazon SES Developer Guide</i>.</p>
         * </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SendEmail">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendEmailAsync(const Model::SendEmailRequest& request, const SendEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Composes an email message and immediately queues it for sending. When calling
         * this operation, you may specify the message headers as well as the content. The
         * <code>SendRawEmail</code> operation is particularly useful for sending multipart
         * MIME emails (such as those that contain both a plain-text and an HTML version).
         * </p> <p>In order to send email using the <code>SendRawEmail</code> operation,
         * your message must meet the following requirements:</p> <ul> <li> <p>The message
         * must be sent from a verified email address or domain. If you attempt to send
         * email using a non-verified address or domain, the operation will result in an
         * "Email address not verified" error. </p> </li> <li> <p>If your account is still
         * in the Amazon SES sandbox, you may only send to verified addresses or domains,
         * or to email addresses associated with the Amazon SES Mailbox Simulator. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-addresses-and-domains.html">Verifying
         * Email Addresses and Domains</a> in the <i>Amazon SES Developer Guide</i>.</p>
         * </li> <li> <p>The total size of the message, including attachments, must be
         * smaller than 10 MB.</p> </li> <li> <p>The message must include at least one
         * recipient email address. The recipient address can be a To: address, a CC:
         * address, or a BCC: address. If a recipient email address is invalid (that is, it
         * is not in the format <i>UserName@[SubDomain.]Domain.TopLevelDomain</i>), the
         * entire message will be rejected, even if the message contains other recipients
         * that are valid.</p> </li> <li> <p>The message may not include more than 50
         * recipients, across the To:, CC: and BCC: fields. If you need to send an email
         * message to a larger audience, you can divide your recipient list into groups of
         * 50 or fewer, and then call the <code>SendRawEmail</code> operation several times
         * to send the message to each group.</p> </li> </ul> <important> <p>For every
         * message that you send, the total number of recipients (including each recipient
         * in the To:, CC: and BCC: fields) is counted against the maximum number of emails
         * you can send in a 24-hour period (your <i>sending quota</i>). For more
         * information about sending quotas in Amazon SES, see <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/manage-sending-limits.html">Managing
         * Your Amazon SES Sending Limits</a> in the <i>Amazon SES Developer Guide</i>.</p>
         * </important> <p>Additionally, keep the following considerations in mind when
         * using the <code>SendRawEmail</code> operation:</p> <ul> <li> <p>Although you can
         * customize the message headers when using the <code>SendRawEmail</code>
         * operation, Amazon SES will automatically apply its own <code>Message-ID</code>
         * and <code>Date</code> headers; if you passed these headers when creating the
         * message, they will be overwritten by the values that Amazon SES provides.</p>
         * </li> <li> <p>If you are using sending authorization to send on behalf of
         * another user, <code>SendRawEmail</code> enables you to specify the cross-account
         * identity for the email's Source, From, and Return-Path parameters in one of two
         * ways: you can pass optional parameters <code>SourceArn</code>,
         * <code>FromArn</code>, and/or <code>ReturnPathArn</code> to the API, or you can
         * include the following X-headers in the header of your raw email:</p> <ul> <li>
         * <p> <code>X-SES-SOURCE-ARN</code> </p> </li> <li> <p>
         * <code>X-SES-FROM-ARN</code> </p> </li> <li> <p>
         * <code>X-SES-RETURN-PATH-ARN</code> </p> </li> </ul> <important> <p>Do not
         * include these X-headers in the DKIM signature; Amazon SES will remove them
         * before sending the email.</p> </important> <p>For most common sending
         * authorization scenarios, we recommend that you specify the
         * <code>SourceIdentityArn</code> parameter and not the
         * <code>FromIdentityArn</code> or <code>ReturnPathIdentityArn</code> parameters.
         * If you only specify the <code>SourceIdentityArn</code> parameter, Amazon SES
         * will set the From and Return Path addresses to the identity specified in
         * <code>SourceIdentityArn</code>. For more information about sending
         * authorization, see the <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Using
         * Sending Authorization with Amazon SES</a> in the <i>Amazon SES Developer
         * Guide</i>.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SendRawEmail">AWS
         * API Reference</a></p>
         */
        virtual Model::SendRawEmailOutcome SendRawEmail(const Model::SendRawEmailRequest& request) const;

        /**
         * <p>Composes an email message and immediately queues it for sending. When calling
         * this operation, you may specify the message headers as well as the content. The
         * <code>SendRawEmail</code> operation is particularly useful for sending multipart
         * MIME emails (such as those that contain both a plain-text and an HTML version).
         * </p> <p>In order to send email using the <code>SendRawEmail</code> operation,
         * your message must meet the following requirements:</p> <ul> <li> <p>The message
         * must be sent from a verified email address or domain. If you attempt to send
         * email using a non-verified address or domain, the operation will result in an
         * "Email address not verified" error. </p> </li> <li> <p>If your account is still
         * in the Amazon SES sandbox, you may only send to verified addresses or domains,
         * or to email addresses associated with the Amazon SES Mailbox Simulator. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-addresses-and-domains.html">Verifying
         * Email Addresses and Domains</a> in the <i>Amazon SES Developer Guide</i>.</p>
         * </li> <li> <p>The total size of the message, including attachments, must be
         * smaller than 10 MB.</p> </li> <li> <p>The message must include at least one
         * recipient email address. The recipient address can be a To: address, a CC:
         * address, or a BCC: address. If a recipient email address is invalid (that is, it
         * is not in the format <i>UserName@[SubDomain.]Domain.TopLevelDomain</i>), the
         * entire message will be rejected, even if the message contains other recipients
         * that are valid.</p> </li> <li> <p>The message may not include more than 50
         * recipients, across the To:, CC: and BCC: fields. If you need to send an email
         * message to a larger audience, you can divide your recipient list into groups of
         * 50 or fewer, and then call the <code>SendRawEmail</code> operation several times
         * to send the message to each group.</p> </li> </ul> <important> <p>For every
         * message that you send, the total number of recipients (including each recipient
         * in the To:, CC: and BCC: fields) is counted against the maximum number of emails
         * you can send in a 24-hour period (your <i>sending quota</i>). For more
         * information about sending quotas in Amazon SES, see <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/manage-sending-limits.html">Managing
         * Your Amazon SES Sending Limits</a> in the <i>Amazon SES Developer Guide</i>.</p>
         * </important> <p>Additionally, keep the following considerations in mind when
         * using the <code>SendRawEmail</code> operation:</p> <ul> <li> <p>Although you can
         * customize the message headers when using the <code>SendRawEmail</code>
         * operation, Amazon SES will automatically apply its own <code>Message-ID</code>
         * and <code>Date</code> headers; if you passed these headers when creating the
         * message, they will be overwritten by the values that Amazon SES provides.</p>
         * </li> <li> <p>If you are using sending authorization to send on behalf of
         * another user, <code>SendRawEmail</code> enables you to specify the cross-account
         * identity for the email's Source, From, and Return-Path parameters in one of two
         * ways: you can pass optional parameters <code>SourceArn</code>,
         * <code>FromArn</code>, and/or <code>ReturnPathArn</code> to the API, or you can
         * include the following X-headers in the header of your raw email:</p> <ul> <li>
         * <p> <code>X-SES-SOURCE-ARN</code> </p> </li> <li> <p>
         * <code>X-SES-FROM-ARN</code> </p> </li> <li> <p>
         * <code>X-SES-RETURN-PATH-ARN</code> </p> </li> </ul> <important> <p>Do not
         * include these X-headers in the DKIM signature; Amazon SES will remove them
         * before sending the email.</p> </important> <p>For most common sending
         * authorization scenarios, we recommend that you specify the
         * <code>SourceIdentityArn</code> parameter and not the
         * <code>FromIdentityArn</code> or <code>ReturnPathIdentityArn</code> parameters.
         * If you only specify the <code>SourceIdentityArn</code> parameter, Amazon SES
         * will set the From and Return Path addresses to the identity specified in
         * <code>SourceIdentityArn</code>. For more information about sending
         * authorization, see the <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Using
         * Sending Authorization with Amazon SES</a> in the <i>Amazon SES Developer
         * Guide</i>.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SendRawEmail">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendRawEmailOutcomeCallable SendRawEmailCallable(const Model::SendRawEmailRequest& request) const;

        /**
         * <p>Composes an email message and immediately queues it for sending. When calling
         * this operation, you may specify the message headers as well as the content. The
         * <code>SendRawEmail</code> operation is particularly useful for sending multipart
         * MIME emails (such as those that contain both a plain-text and an HTML version).
         * </p> <p>In order to send email using the <code>SendRawEmail</code> operation,
         * your message must meet the following requirements:</p> <ul> <li> <p>The message
         * must be sent from a verified email address or domain. If you attempt to send
         * email using a non-verified address or domain, the operation will result in an
         * "Email address not verified" error. </p> </li> <li> <p>If your account is still
         * in the Amazon SES sandbox, you may only send to verified addresses or domains,
         * or to email addresses associated with the Amazon SES Mailbox Simulator. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-addresses-and-domains.html">Verifying
         * Email Addresses and Domains</a> in the <i>Amazon SES Developer Guide</i>.</p>
         * </li> <li> <p>The total size of the message, including attachments, must be
         * smaller than 10 MB.</p> </li> <li> <p>The message must include at least one
         * recipient email address. The recipient address can be a To: address, a CC:
         * address, or a BCC: address. If a recipient email address is invalid (that is, it
         * is not in the format <i>UserName@[SubDomain.]Domain.TopLevelDomain</i>), the
         * entire message will be rejected, even if the message contains other recipients
         * that are valid.</p> </li> <li> <p>The message may not include more than 50
         * recipients, across the To:, CC: and BCC: fields. If you need to send an email
         * message to a larger audience, you can divide your recipient list into groups of
         * 50 or fewer, and then call the <code>SendRawEmail</code> operation several times
         * to send the message to each group.</p> </li> </ul> <important> <p>For every
         * message that you send, the total number of recipients (including each recipient
         * in the To:, CC: and BCC: fields) is counted against the maximum number of emails
         * you can send in a 24-hour period (your <i>sending quota</i>). For more
         * information about sending quotas in Amazon SES, see <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/manage-sending-limits.html">Managing
         * Your Amazon SES Sending Limits</a> in the <i>Amazon SES Developer Guide</i>.</p>
         * </important> <p>Additionally, keep the following considerations in mind when
         * using the <code>SendRawEmail</code> operation:</p> <ul> <li> <p>Although you can
         * customize the message headers when using the <code>SendRawEmail</code>
         * operation, Amazon SES will automatically apply its own <code>Message-ID</code>
         * and <code>Date</code> headers; if you passed these headers when creating the
         * message, they will be overwritten by the values that Amazon SES provides.</p>
         * </li> <li> <p>If you are using sending authorization to send on behalf of
         * another user, <code>SendRawEmail</code> enables you to specify the cross-account
         * identity for the email's Source, From, and Return-Path parameters in one of two
         * ways: you can pass optional parameters <code>SourceArn</code>,
         * <code>FromArn</code>, and/or <code>ReturnPathArn</code> to the API, or you can
         * include the following X-headers in the header of your raw email:</p> <ul> <li>
         * <p> <code>X-SES-SOURCE-ARN</code> </p> </li> <li> <p>
         * <code>X-SES-FROM-ARN</code> </p> </li> <li> <p>
         * <code>X-SES-RETURN-PATH-ARN</code> </p> </li> </ul> <important> <p>Do not
         * include these X-headers in the DKIM signature; Amazon SES will remove them
         * before sending the email.</p> </important> <p>For most common sending
         * authorization scenarios, we recommend that you specify the
         * <code>SourceIdentityArn</code> parameter and not the
         * <code>FromIdentityArn</code> or <code>ReturnPathIdentityArn</code> parameters.
         * If you only specify the <code>SourceIdentityArn</code> parameter, Amazon SES
         * will set the From and Return Path addresses to the identity specified in
         * <code>SourceIdentityArn</code>. For more information about sending
         * authorization, see the <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Using
         * Sending Authorization with Amazon SES</a> in the <i>Amazon SES Developer
         * Guide</i>.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SendRawEmail">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendRawEmailAsync(const Model::SendRawEmailRequest& request, const SendRawEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the specified receipt rule set as the active receipt rule set.</p>
         * <note> <p>To disable your email-receiving through Amazon SES completely, you can
         * call this API with RuleSetName set to null.</p> </note> <p>For information about
         * managing receipt rule sets, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-managing-receipt-rule-sets.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SetActiveReceiptRuleSet">AWS
         * API Reference</a></p>
         */
        virtual Model::SetActiveReceiptRuleSetOutcome SetActiveReceiptRuleSet(const Model::SetActiveReceiptRuleSetRequest& request) const;

        /**
         * <p>Sets the specified receipt rule set as the active receipt rule set.</p>
         * <note> <p>To disable your email-receiving through Amazon SES completely, you can
         * call this API with RuleSetName set to null.</p> </note> <p>For information about
         * managing receipt rule sets, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-managing-receipt-rule-sets.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SetActiveReceiptRuleSet">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetActiveReceiptRuleSetOutcomeCallable SetActiveReceiptRuleSetCallable(const Model::SetActiveReceiptRuleSetRequest& request) const;

        /**
         * <p>Sets the specified receipt rule set as the active receipt rule set.</p>
         * <note> <p>To disable your email-receiving through Amazon SES completely, you can
         * call this API with RuleSetName set to null.</p> </note> <p>For information about
         * managing receipt rule sets, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-managing-receipt-rule-sets.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SetActiveReceiptRuleSet">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetActiveReceiptRuleSetAsync(const Model::SetActiveReceiptRuleSetRequest& request, const SetActiveReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables or disables Easy DKIM signing of email sent from an identity:</p>
         * <ul> <li> <p>If Easy DKIM signing is enabled for a domain name identity (such as
         * <code>example.com</code>), then Amazon SES will DKIM-sign all email sent by
         * addresses under that domain name (for example,
         * <code>user@example.com</code>).</p> </li> <li> <p>If Easy DKIM signing is
         * enabled for an email address, then Amazon SES will DKIM-sign all email sent by
         * that email address.</p> </li> </ul> <p>For email addresses (for example,
         * <code>user@example.com</code>), you can only enable Easy DKIM signing if the
         * corresponding domain (in this case, <code>example.com</code>) has been set up
         * for Easy DKIM using the AWS Console or the <code>VerifyDomainDkim</code>
         * operation.</p> <p>You can execute this operation no more than once per
         * second.</p> <p>For more information about Easy DKIM signing, go to the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Amazon
         * SES Developer Guide</a>.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SetIdentityDkimEnabled">AWS
         * API Reference</a></p>
         */
        virtual Model::SetIdentityDkimEnabledOutcome SetIdentityDkimEnabled(const Model::SetIdentityDkimEnabledRequest& request) const;

        /**
         * <p>Enables or disables Easy DKIM signing of email sent from an identity:</p>
         * <ul> <li> <p>If Easy DKIM signing is enabled for a domain name identity (such as
         * <code>example.com</code>), then Amazon SES will DKIM-sign all email sent by
         * addresses under that domain name (for example,
         * <code>user@example.com</code>).</p> </li> <li> <p>If Easy DKIM signing is
         * enabled for an email address, then Amazon SES will DKIM-sign all email sent by
         * that email address.</p> </li> </ul> <p>For email addresses (for example,
         * <code>user@example.com</code>), you can only enable Easy DKIM signing if the
         * corresponding domain (in this case, <code>example.com</code>) has been set up
         * for Easy DKIM using the AWS Console or the <code>VerifyDomainDkim</code>
         * operation.</p> <p>You can execute this operation no more than once per
         * second.</p> <p>For more information about Easy DKIM signing, go to the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Amazon
         * SES Developer Guide</a>.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SetIdentityDkimEnabled">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetIdentityDkimEnabledOutcomeCallable SetIdentityDkimEnabledCallable(const Model::SetIdentityDkimEnabledRequest& request) const;

        /**
         * <p>Enables or disables Easy DKIM signing of email sent from an identity:</p>
         * <ul> <li> <p>If Easy DKIM signing is enabled for a domain name identity (such as
         * <code>example.com</code>), then Amazon SES will DKIM-sign all email sent by
         * addresses under that domain name (for example,
         * <code>user@example.com</code>).</p> </li> <li> <p>If Easy DKIM signing is
         * enabled for an email address, then Amazon SES will DKIM-sign all email sent by
         * that email address.</p> </li> </ul> <p>For email addresses (for example,
         * <code>user@example.com</code>), you can only enable Easy DKIM signing if the
         * corresponding domain (in this case, <code>example.com</code>) has been set up
         * for Easy DKIM using the AWS Console or the <code>VerifyDomainDkim</code>
         * operation.</p> <p>You can execute this operation no more than once per
         * second.</p> <p>For more information about Easy DKIM signing, go to the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Amazon
         * SES Developer Guide</a>.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SetIdentityDkimEnabled">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetIdentityDkimEnabledAsync(const Model::SetIdentityDkimEnabledRequest& request, const SetIdentityDkimEnabledResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Given an identity (an email address or a domain), enables or disables whether
         * Amazon SES forwards bounce and complaint notifications as email. Feedback
         * forwarding can only be disabled when Amazon Simple Notification Service (Amazon
         * SNS) topics are specified for both bounces and complaints.</p> <note>
         * <p>Feedback forwarding does not apply to delivery notifications. Delivery
         * notifications are only available through Amazon SNS.</p> </note> <p>You can
         * execute this operation no more than once per second.</p> <p>For more information
         * about using notifications with Amazon SES, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/notifications.html">Amazon
         * SES Developer Guide</a>.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SetIdentityFeedbackForwardingEnabled">AWS
         * API Reference</a></p>
         */
        virtual Model::SetIdentityFeedbackForwardingEnabledOutcome SetIdentityFeedbackForwardingEnabled(const Model::SetIdentityFeedbackForwardingEnabledRequest& request) const;

        /**
         * <p>Given an identity (an email address or a domain), enables or disables whether
         * Amazon SES forwards bounce and complaint notifications as email. Feedback
         * forwarding can only be disabled when Amazon Simple Notification Service (Amazon
         * SNS) topics are specified for both bounces and complaints.</p> <note>
         * <p>Feedback forwarding does not apply to delivery notifications. Delivery
         * notifications are only available through Amazon SNS.</p> </note> <p>You can
         * execute this operation no more than once per second.</p> <p>For more information
         * about using notifications with Amazon SES, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/notifications.html">Amazon
         * SES Developer Guide</a>.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SetIdentityFeedbackForwardingEnabled">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetIdentityFeedbackForwardingEnabledOutcomeCallable SetIdentityFeedbackForwardingEnabledCallable(const Model::SetIdentityFeedbackForwardingEnabledRequest& request) const;

        /**
         * <p>Given an identity (an email address or a domain), enables or disables whether
         * Amazon SES forwards bounce and complaint notifications as email. Feedback
         * forwarding can only be disabled when Amazon Simple Notification Service (Amazon
         * SNS) topics are specified for both bounces and complaints.</p> <note>
         * <p>Feedback forwarding does not apply to delivery notifications. Delivery
         * notifications are only available through Amazon SNS.</p> </note> <p>You can
         * execute this operation no more than once per second.</p> <p>For more information
         * about using notifications with Amazon SES, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/notifications.html">Amazon
         * SES Developer Guide</a>.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SetIdentityFeedbackForwardingEnabled">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetIdentityFeedbackForwardingEnabledAsync(const Model::SetIdentityFeedbackForwardingEnabledRequest& request, const SetIdentityFeedbackForwardingEnabledResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Given an identity (an email address or a domain), sets whether Amazon SES
         * includes the original email headers in the Amazon Simple Notification Service
         * (Amazon SNS) notifications of a specified type.</p> <p>You can execute this
         * operation no more than once per second.</p> <p>For more information about using
         * notifications with Amazon SES, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/notifications.html">Amazon
         * SES Developer Guide</a>.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SetIdentityHeadersInNotificationsEnabled">AWS
         * API Reference</a></p>
         */
        virtual Model::SetIdentityHeadersInNotificationsEnabledOutcome SetIdentityHeadersInNotificationsEnabled(const Model::SetIdentityHeadersInNotificationsEnabledRequest& request) const;

        /**
         * <p>Given an identity (an email address or a domain), sets whether Amazon SES
         * includes the original email headers in the Amazon Simple Notification Service
         * (Amazon SNS) notifications of a specified type.</p> <p>You can execute this
         * operation no more than once per second.</p> <p>For more information about using
         * notifications with Amazon SES, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/notifications.html">Amazon
         * SES Developer Guide</a>.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SetIdentityHeadersInNotificationsEnabled">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetIdentityHeadersInNotificationsEnabledOutcomeCallable SetIdentityHeadersInNotificationsEnabledCallable(const Model::SetIdentityHeadersInNotificationsEnabledRequest& request) const;

        /**
         * <p>Given an identity (an email address or a domain), sets whether Amazon SES
         * includes the original email headers in the Amazon Simple Notification Service
         * (Amazon SNS) notifications of a specified type.</p> <p>You can execute this
         * operation no more than once per second.</p> <p>For more information about using
         * notifications with Amazon SES, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/notifications.html">Amazon
         * SES Developer Guide</a>.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SetIdentityHeadersInNotificationsEnabled">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetIdentityHeadersInNotificationsEnabledAsync(const Model::SetIdentityHeadersInNotificationsEnabledRequest& request, const SetIdentityHeadersInNotificationsEnabledResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables or disables the custom MAIL FROM domain setup for a verified identity
         * (an email address or a domain).</p> <important> <p>To send emails using the
         * specified MAIL FROM domain, you must add an MX record to your MAIL FROM domain's
         * DNS settings. If you want your emails to pass Sender Policy Framework (SPF)
         * checks, you must also add or update an SPF record. For more information, see the
         * <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/mail-from-set.html">Amazon
         * SES Developer Guide</a>.</i> </p> </important> <p>You can execute this operation
         * no more than once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SetIdentityMailFromDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::SetIdentityMailFromDomainOutcome SetIdentityMailFromDomain(const Model::SetIdentityMailFromDomainRequest& request) const;

        /**
         * <p>Enables or disables the custom MAIL FROM domain setup for a verified identity
         * (an email address or a domain).</p> <important> <p>To send emails using the
         * specified MAIL FROM domain, you must add an MX record to your MAIL FROM domain's
         * DNS settings. If you want your emails to pass Sender Policy Framework (SPF)
         * checks, you must also add or update an SPF record. For more information, see the
         * <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/mail-from-set.html">Amazon
         * SES Developer Guide</a>.</i> </p> </important> <p>You can execute this operation
         * no more than once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SetIdentityMailFromDomain">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetIdentityMailFromDomainOutcomeCallable SetIdentityMailFromDomainCallable(const Model::SetIdentityMailFromDomainRequest& request) const;

        /**
         * <p>Enables or disables the custom MAIL FROM domain setup for a verified identity
         * (an email address or a domain).</p> <important> <p>To send emails using the
         * specified MAIL FROM domain, you must add an MX record to your MAIL FROM domain's
         * DNS settings. If you want your emails to pass Sender Policy Framework (SPF)
         * checks, you must also add or update an SPF record. For more information, see the
         * <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/mail-from-set.html">Amazon
         * SES Developer Guide</a>.</i> </p> </important> <p>You can execute this operation
         * no more than once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SetIdentityMailFromDomain">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetIdentityMailFromDomainAsync(const Model::SetIdentityMailFromDomainRequest& request, const SetIdentityMailFromDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Given an identity (an email address or a domain), sets the Amazon Simple
         * Notification Service (Amazon SNS) topic to which Amazon SES will publish bounce,
         * complaint, and/or delivery notifications for emails sent with that identity as
         * the <code>Source</code>.</p> <note> <p>Unless feedback forwarding is enabled,
         * you must specify Amazon SNS topics for bounce and complaint notifications. For
         * more information, see <code>SetIdentityFeedbackForwardingEnabled</code>.</p>
         * </note> <p>You can execute this operation no more than once per second.</p>
         * <p>For more information about feedback notification, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/notifications.html">Amazon
         * SES Developer Guide</a>.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SetIdentityNotificationTopic">AWS
         * API Reference</a></p>
         */
        virtual Model::SetIdentityNotificationTopicOutcome SetIdentityNotificationTopic(const Model::SetIdentityNotificationTopicRequest& request) const;

        /**
         * <p>Given an identity (an email address or a domain), sets the Amazon Simple
         * Notification Service (Amazon SNS) topic to which Amazon SES will publish bounce,
         * complaint, and/or delivery notifications for emails sent with that identity as
         * the <code>Source</code>.</p> <note> <p>Unless feedback forwarding is enabled,
         * you must specify Amazon SNS topics for bounce and complaint notifications. For
         * more information, see <code>SetIdentityFeedbackForwardingEnabled</code>.</p>
         * </note> <p>You can execute this operation no more than once per second.</p>
         * <p>For more information about feedback notification, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/notifications.html">Amazon
         * SES Developer Guide</a>.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SetIdentityNotificationTopic">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetIdentityNotificationTopicOutcomeCallable SetIdentityNotificationTopicCallable(const Model::SetIdentityNotificationTopicRequest& request) const;

        /**
         * <p>Given an identity (an email address or a domain), sets the Amazon Simple
         * Notification Service (Amazon SNS) topic to which Amazon SES will publish bounce,
         * complaint, and/or delivery notifications for emails sent with that identity as
         * the <code>Source</code>.</p> <note> <p>Unless feedback forwarding is enabled,
         * you must specify Amazon SNS topics for bounce and complaint notifications. For
         * more information, see <code>SetIdentityFeedbackForwardingEnabled</code>.</p>
         * </note> <p>You can execute this operation no more than once per second.</p>
         * <p>For more information about feedback notification, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/notifications.html">Amazon
         * SES Developer Guide</a>.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SetIdentityNotificationTopic">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetIdentityNotificationTopicAsync(const Model::SetIdentityNotificationTopicRequest& request, const SetIdentityNotificationTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the position of the specified receipt rule in the receipt rule set.</p>
         * <p>For information about managing receipt rules, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-managing-receipt-rules.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SetReceiptRulePosition">AWS
         * API Reference</a></p>
         */
        virtual Model::SetReceiptRulePositionOutcome SetReceiptRulePosition(const Model::SetReceiptRulePositionRequest& request) const;

        /**
         * <p>Sets the position of the specified receipt rule in the receipt rule set.</p>
         * <p>For information about managing receipt rules, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-managing-receipt-rules.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SetReceiptRulePosition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetReceiptRulePositionOutcomeCallable SetReceiptRulePositionCallable(const Model::SetReceiptRulePositionRequest& request) const;

        /**
         * <p>Sets the position of the specified receipt rule in the receipt rule set.</p>
         * <p>For information about managing receipt rules, see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-managing-receipt-rules.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SetReceiptRulePosition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetReceiptRulePositionAsync(const Model::SetReceiptRulePositionRequest& request, const SetReceiptRulePositionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the event destination of a configuration set. Event destinations are
         * associated with configuration sets, which enable you to publish email sending
         * events to Amazon CloudWatch, Amazon Kinesis Firehose, or Amazon Simple
         * Notification Service (Amazon SNS). For information about using configuration
         * sets, see <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/monitor-sending-activity.html">Monitoring
         * Your Amazon SES Sending Activity</a> in the <i>Amazon SES Developer
         * Guide</i>.</p> <note> <p>When you create or update an event destination, you
         * must provide one, and only one, destination. The destination can be Amazon
         * CloudWatch, Amazon Kinesis Firehose, or Amazon Simple Notification Service
         * (Amazon SNS).</p> </note> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/UpdateConfigurationSetEventDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConfigurationSetEventDestinationOutcome UpdateConfigurationSetEventDestination(const Model::UpdateConfigurationSetEventDestinationRequest& request) const;

        /**
         * <p>Updates the event destination of a configuration set. Event destinations are
         * associated with configuration sets, which enable you to publish email sending
         * events to Amazon CloudWatch, Amazon Kinesis Firehose, or Amazon Simple
         * Notification Service (Amazon SNS). For information about using configuration
         * sets, see <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/monitor-sending-activity.html">Monitoring
         * Your Amazon SES Sending Activity</a> in the <i>Amazon SES Developer
         * Guide</i>.</p> <note> <p>When you create or update an event destination, you
         * must provide one, and only one, destination. The destination can be Amazon
         * CloudWatch, Amazon Kinesis Firehose, or Amazon Simple Notification Service
         * (Amazon SNS).</p> </note> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/UpdateConfigurationSetEventDestination">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateConfigurationSetEventDestinationOutcomeCallable UpdateConfigurationSetEventDestinationCallable(const Model::UpdateConfigurationSetEventDestinationRequest& request) const;

        /**
         * <p>Updates the event destination of a configuration set. Event destinations are
         * associated with configuration sets, which enable you to publish email sending
         * events to Amazon CloudWatch, Amazon Kinesis Firehose, or Amazon Simple
         * Notification Service (Amazon SNS). For information about using configuration
         * sets, see <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/monitor-sending-activity.html">Monitoring
         * Your Amazon SES Sending Activity</a> in the <i>Amazon SES Developer
         * Guide</i>.</p> <note> <p>When you create or update an event destination, you
         * must provide one, and only one, destination. The destination can be Amazon
         * CloudWatch, Amazon Kinesis Firehose, or Amazon Simple Notification Service
         * (Amazon SNS).</p> </note> <p>You can execute this operation no more than once
         * per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/UpdateConfigurationSetEventDestination">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateConfigurationSetEventDestinationAsync(const Model::UpdateConfigurationSetEventDestinationRequest& request, const UpdateConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Modifies an association between a configuration set and a custom domain for
         * open and click event tracking. </p> <p>By default, images and links used for
         * tracking open and click events are hosted on domains operated by Amazon SES. You
         * can configure a subdomain of your own to handle these events by redirecting them
         * to the Amazon SES-operated domain. For information about using configuration
         * sets, see <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/configure-custom-open-click-domains.html">Configuring
         * Custom Domains to Handle Open and Click Tracking</a> in the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon
         * SES Developer Guide</a>.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/UpdateConfigurationSetTrackingOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConfigurationSetTrackingOptionsOutcome UpdateConfigurationSetTrackingOptions(const Model::UpdateConfigurationSetTrackingOptionsRequest& request) const;

        /**
         * <p>Modifies an association between a configuration set and a custom domain for
         * open and click event tracking. </p> <p>By default, images and links used for
         * tracking open and click events are hosted on domains operated by Amazon SES. You
         * can configure a subdomain of your own to handle these events by redirecting them
         * to the Amazon SES-operated domain. For information about using configuration
         * sets, see <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/configure-custom-open-click-domains.html">Configuring
         * Custom Domains to Handle Open and Click Tracking</a> in the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon
         * SES Developer Guide</a>.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/UpdateConfigurationSetTrackingOptions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateConfigurationSetTrackingOptionsOutcomeCallable UpdateConfigurationSetTrackingOptionsCallable(const Model::UpdateConfigurationSetTrackingOptionsRequest& request) const;

        /**
         * <p>Modifies an association between a configuration set and a custom domain for
         * open and click event tracking. </p> <p>By default, images and links used for
         * tracking open and click events are hosted on domains operated by Amazon SES. You
         * can configure a subdomain of your own to handle these events by redirecting them
         * to the Amazon SES-operated domain. For information about using configuration
         * sets, see <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/configure-custom-open-click-domains.html">Configuring
         * Custom Domains to Handle Open and Click Tracking</a> in the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon
         * SES Developer Guide</a>.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/UpdateConfigurationSetTrackingOptions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateConfigurationSetTrackingOptionsAsync(const Model::UpdateConfigurationSetTrackingOptionsRequest& request, const UpdateConfigurationSetTrackingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a receipt rule.</p> <p>For information about managing receipt rules,
         * see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-managing-receipt-rules.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/UpdateReceiptRule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateReceiptRuleOutcome UpdateReceiptRule(const Model::UpdateReceiptRuleRequest& request) const;

        /**
         * <p>Updates a receipt rule.</p> <p>For information about managing receipt rules,
         * see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-managing-receipt-rules.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/UpdateReceiptRule">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateReceiptRuleOutcomeCallable UpdateReceiptRuleCallable(const Model::UpdateReceiptRuleRequest& request) const;

        /**
         * <p>Updates a receipt rule.</p> <p>For information about managing receipt rules,
         * see the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/receiving-email-managing-receipt-rules.html">Amazon
         * SES Developer Guide</a>.</i> </p> <p>You can execute this operation no more than
         * once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/UpdateReceiptRule">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateReceiptRuleAsync(const Model::UpdateReceiptRuleRequest& request, const UpdateReceiptRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a set of DKIM tokens for a domain. DKIM <i>tokens</i> are character
         * strings that represent your domain's identity. Using these tokens, you will need
         * to create DNS CNAME records that point to DKIM public keys hosted by Amazon SES.
         * Amazon Web Services will eventually detect that you have updated your DNS
         * records; this detection process may take up to 72 hours. Upon successful
         * detection, Amazon SES will be able to DKIM-sign email originating from that
         * domain.</p> <p>You can execute this operation no more than once per second.</p>
         * <p>To enable or disable Easy DKIM signing for a domain, use the
         * <code>SetIdentityDkimEnabled</code> operation.</p> <p>For more information about
         * creating DNS records using DKIM tokens, go to the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim-dns-records.html">Amazon
         * SES Developer Guide</a>.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/VerifyDomainDkim">AWS
         * API Reference</a></p>
         */
        virtual Model::VerifyDomainDkimOutcome VerifyDomainDkim(const Model::VerifyDomainDkimRequest& request) const;

        /**
         * <p>Returns a set of DKIM tokens for a domain. DKIM <i>tokens</i> are character
         * strings that represent your domain's identity. Using these tokens, you will need
         * to create DNS CNAME records that point to DKIM public keys hosted by Amazon SES.
         * Amazon Web Services will eventually detect that you have updated your DNS
         * records; this detection process may take up to 72 hours. Upon successful
         * detection, Amazon SES will be able to DKIM-sign email originating from that
         * domain.</p> <p>You can execute this operation no more than once per second.</p>
         * <p>To enable or disable Easy DKIM signing for a domain, use the
         * <code>SetIdentityDkimEnabled</code> operation.</p> <p>For more information about
         * creating DNS records using DKIM tokens, go to the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim-dns-records.html">Amazon
         * SES Developer Guide</a>.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/VerifyDomainDkim">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::VerifyDomainDkimOutcomeCallable VerifyDomainDkimCallable(const Model::VerifyDomainDkimRequest& request) const;

        /**
         * <p>Returns a set of DKIM tokens for a domain. DKIM <i>tokens</i> are character
         * strings that represent your domain's identity. Using these tokens, you will need
         * to create DNS CNAME records that point to DKIM public keys hosted by Amazon SES.
         * Amazon Web Services will eventually detect that you have updated your DNS
         * records; this detection process may take up to 72 hours. Upon successful
         * detection, Amazon SES will be able to DKIM-sign email originating from that
         * domain.</p> <p>You can execute this operation no more than once per second.</p>
         * <p>To enable or disable Easy DKIM signing for a domain, use the
         * <code>SetIdentityDkimEnabled</code> operation.</p> <p>For more information about
         * creating DNS records using DKIM tokens, go to the <i> <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim-dns-records.html">Amazon
         * SES Developer Guide</a>.</i> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/VerifyDomainDkim">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void VerifyDomainDkimAsync(const Model::VerifyDomainDkimRequest& request, const VerifyDomainDkimResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a domain to the list of identities for your Amazon SES account and
         * attempts to verify it. For more information about verifying domains, see <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-addresses-and-domains.html">Verifying
         * Email Addresses and Domains</a> in the <i>Amazon SES Developer Guide</i>.</p>
         * <p>You can execute this operation no more than once per second.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/VerifyDomainIdentity">AWS
         * API Reference</a></p>
         */
        virtual Model::VerifyDomainIdentityOutcome VerifyDomainIdentity(const Model::VerifyDomainIdentityRequest& request) const;

        /**
         * <p>Adds a domain to the list of identities for your Amazon SES account and
         * attempts to verify it. For more information about verifying domains, see <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-addresses-and-domains.html">Verifying
         * Email Addresses and Domains</a> in the <i>Amazon SES Developer Guide</i>.</p>
         * <p>You can execute this operation no more than once per second.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/VerifyDomainIdentity">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::VerifyDomainIdentityOutcomeCallable VerifyDomainIdentityCallable(const Model::VerifyDomainIdentityRequest& request) const;

        /**
         * <p>Adds a domain to the list of identities for your Amazon SES account and
         * attempts to verify it. For more information about verifying domains, see <a
         * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-addresses-and-domains.html">Verifying
         * Email Addresses and Domains</a> in the <i>Amazon SES Developer Guide</i>.</p>
         * <p>You can execute this operation no more than once per second.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/VerifyDomainIdentity">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void VerifyDomainIdentityAsync(const Model::VerifyDomainIdentityRequest& request, const VerifyDomainIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deprecated. Use the <code>VerifyEmailIdentity</code> operation to verify a
         * new email address.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/VerifyEmailAddress">AWS
         * API Reference</a></p>
         */
        virtual Model::VerifyEmailAddressOutcome VerifyEmailAddress(const Model::VerifyEmailAddressRequest& request) const;

        /**
         * <p>Deprecated. Use the <code>VerifyEmailIdentity</code> operation to verify a
         * new email address.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/VerifyEmailAddress">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::VerifyEmailAddressOutcomeCallable VerifyEmailAddressCallable(const Model::VerifyEmailAddressRequest& request) const;

        /**
         * <p>Deprecated. Use the <code>VerifyEmailIdentity</code> operation to verify a
         * new email address.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/VerifyEmailAddress">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void VerifyEmailAddressAsync(const Model::VerifyEmailAddressRequest& request, const VerifyEmailAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds an email address to the list of identities for your Amazon SES account
         * and attempts to verify it. This operation causes a confirmation email message to
         * be sent to the specified address.</p> <p>You can execute this operation no more
         * than once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/VerifyEmailIdentity">AWS
         * API Reference</a></p>
         */
        virtual Model::VerifyEmailIdentityOutcome VerifyEmailIdentity(const Model::VerifyEmailIdentityRequest& request) const;

        /**
         * <p>Adds an email address to the list of identities for your Amazon SES account
         * and attempts to verify it. This operation causes a confirmation email message to
         * be sent to the specified address.</p> <p>You can execute this operation no more
         * than once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/VerifyEmailIdentity">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::VerifyEmailIdentityOutcomeCallable VerifyEmailIdentityCallable(const Model::VerifyEmailIdentityRequest& request) const;

        /**
         * <p>Adds an email address to the list of identities for your Amazon SES account
         * and attempts to verify it. This operation causes a confirmation email message to
         * be sent to the specified address.</p> <p>You can execute this operation no more
         * than once per second.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/VerifyEmailIdentity">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void VerifyEmailIdentityAsync(const Model::VerifyEmailIdentityRequest& request, const VerifyEmailIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


  private:
    void init(const Aws::Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void CloneReceiptRuleSetAsyncHelper(const Model::CloneReceiptRuleSetRequest& request, const CloneReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateConfigurationSetAsyncHelper(const Model::CreateConfigurationSetRequest& request, const CreateConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateConfigurationSetEventDestinationAsyncHelper(const Model::CreateConfigurationSetEventDestinationRequest& request, const CreateConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateConfigurationSetTrackingOptionsAsyncHelper(const Model::CreateConfigurationSetTrackingOptionsRequest& request, const CreateConfigurationSetTrackingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateReceiptFilterAsyncHelper(const Model::CreateReceiptFilterRequest& request, const CreateReceiptFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateReceiptRuleAsyncHelper(const Model::CreateReceiptRuleRequest& request, const CreateReceiptRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateReceiptRuleSetAsyncHelper(const Model::CreateReceiptRuleSetRequest& request, const CreateReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteConfigurationSetAsyncHelper(const Model::DeleteConfigurationSetRequest& request, const DeleteConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteConfigurationSetEventDestinationAsyncHelper(const Model::DeleteConfigurationSetEventDestinationRequest& request, const DeleteConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteConfigurationSetTrackingOptionsAsyncHelper(const Model::DeleteConfigurationSetTrackingOptionsRequest& request, const DeleteConfigurationSetTrackingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteIdentityAsyncHelper(const Model::DeleteIdentityRequest& request, const DeleteIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteIdentityPolicyAsyncHelper(const Model::DeleteIdentityPolicyRequest& request, const DeleteIdentityPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteReceiptFilterAsyncHelper(const Model::DeleteReceiptFilterRequest& request, const DeleteReceiptFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteReceiptRuleAsyncHelper(const Model::DeleteReceiptRuleRequest& request, const DeleteReceiptRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteReceiptRuleSetAsyncHelper(const Model::DeleteReceiptRuleSetRequest& request, const DeleteReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteVerifiedEmailAddressAsyncHelper(const Model::DeleteVerifiedEmailAddressRequest& request, const DeleteVerifiedEmailAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeActiveReceiptRuleSetAsyncHelper(const Model::DescribeActiveReceiptRuleSetRequest& request, const DescribeActiveReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeConfigurationSetAsyncHelper(const Model::DescribeConfigurationSetRequest& request, const DescribeConfigurationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeReceiptRuleAsyncHelper(const Model::DescribeReceiptRuleRequest& request, const DescribeReceiptRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeReceiptRuleSetAsyncHelper(const Model::DescribeReceiptRuleSetRequest& request, const DescribeReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetIdentityDkimAttributesAsyncHelper(const Model::GetIdentityDkimAttributesRequest& request, const GetIdentityDkimAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetIdentityMailFromDomainAttributesAsyncHelper(const Model::GetIdentityMailFromDomainAttributesRequest& request, const GetIdentityMailFromDomainAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetIdentityNotificationAttributesAsyncHelper(const Model::GetIdentityNotificationAttributesRequest& request, const GetIdentityNotificationAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetIdentityPoliciesAsyncHelper(const Model::GetIdentityPoliciesRequest& request, const GetIdentityPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetIdentityVerificationAttributesAsyncHelper(const Model::GetIdentityVerificationAttributesRequest& request, const GetIdentityVerificationAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSendQuotaAsyncHelper(const Model::GetSendQuotaRequest& request, const GetSendQuotaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSendStatisticsAsyncHelper(const Model::GetSendStatisticsRequest& request, const GetSendStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListConfigurationSetsAsyncHelper(const Model::ListConfigurationSetsRequest& request, const ListConfigurationSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListIdentitiesAsyncHelper(const Model::ListIdentitiesRequest& request, const ListIdentitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListIdentityPoliciesAsyncHelper(const Model::ListIdentityPoliciesRequest& request, const ListIdentityPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListReceiptFiltersAsyncHelper(const Model::ListReceiptFiltersRequest& request, const ListReceiptFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListReceiptRuleSetsAsyncHelper(const Model::ListReceiptRuleSetsRequest& request, const ListReceiptRuleSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListVerifiedEmailAddressesAsyncHelper(const Model::ListVerifiedEmailAddressesRequest& request, const ListVerifiedEmailAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutIdentityPolicyAsyncHelper(const Model::PutIdentityPolicyRequest& request, const PutIdentityPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ReorderReceiptRuleSetAsyncHelper(const Model::ReorderReceiptRuleSetRequest& request, const ReorderReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SendBounceAsyncHelper(const Model::SendBounceRequest& request, const SendBounceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SendEmailAsyncHelper(const Model::SendEmailRequest& request, const SendEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SendRawEmailAsyncHelper(const Model::SendRawEmailRequest& request, const SendRawEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetActiveReceiptRuleSetAsyncHelper(const Model::SetActiveReceiptRuleSetRequest& request, const SetActiveReceiptRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetIdentityDkimEnabledAsyncHelper(const Model::SetIdentityDkimEnabledRequest& request, const SetIdentityDkimEnabledResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetIdentityFeedbackForwardingEnabledAsyncHelper(const Model::SetIdentityFeedbackForwardingEnabledRequest& request, const SetIdentityFeedbackForwardingEnabledResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetIdentityHeadersInNotificationsEnabledAsyncHelper(const Model::SetIdentityHeadersInNotificationsEnabledRequest& request, const SetIdentityHeadersInNotificationsEnabledResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetIdentityMailFromDomainAsyncHelper(const Model::SetIdentityMailFromDomainRequest& request, const SetIdentityMailFromDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetIdentityNotificationTopicAsyncHelper(const Model::SetIdentityNotificationTopicRequest& request, const SetIdentityNotificationTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetReceiptRulePositionAsyncHelper(const Model::SetReceiptRulePositionRequest& request, const SetReceiptRulePositionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateConfigurationSetEventDestinationAsyncHelper(const Model::UpdateConfigurationSetEventDestinationRequest& request, const UpdateConfigurationSetEventDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateConfigurationSetTrackingOptionsAsyncHelper(const Model::UpdateConfigurationSetTrackingOptionsRequest& request, const UpdateConfigurationSetTrackingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateReceiptRuleAsyncHelper(const Model::UpdateReceiptRuleRequest& request, const UpdateReceiptRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void VerifyDomainDkimAsyncHelper(const Model::VerifyDomainDkimRequest& request, const VerifyDomainDkimResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void VerifyDomainIdentityAsyncHelper(const Model::VerifyDomainIdentityRequest& request, const VerifyDomainIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void VerifyEmailAddressAsyncHelper(const Model::VerifyEmailAddressRequest& request, const VerifyEmailAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void VerifyEmailIdentityAsyncHelper(const Model::VerifyEmailIdentityRequest& request, const VerifyEmailIdentityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

    Aws::String m_uri;
    std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace SES
} // namespace Aws
