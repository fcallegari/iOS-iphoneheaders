/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:05:05 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CloudKitDaemon/NSCopying.h>

@class CKDPAssetUploadTokenRetrieveResponse, CKDPDeleteCommentResponse, CKDPDeleteContainerResponse, CKDPGetCommentResponse, CKDPGetCommentsResponse, CKDPGetLikesResponse, CKDPLikeResponse, CKDPMescalCertificateResponse, CKDPMescalSessionInfoResponse, CKDPMescalSignatureResponse, CKDPNotificationMarkReadResponse, CKDPNotificationSyncResponse, CKDPPkiRegisterResponse, CKDPPkiRetrieveResponse, CKDPPostCommentResponse, CKDPPromoteContainerSchemaResponse, CKDPPulseResponse, CKDPQueryRetrieveResponse, CKDPRecordDeleteResponse, CKDPRecordRetrieveChangesResponse, CKDPRecordRetrieveResponse, CKDPRecordRetrieveVersionsResponse, CKDPRecordSaveResponse, CKDPResetContainerResponse, CKDPOperation, CKDPResponseOperationResult, CKDPSetBadgeCountResponse, CKDPShareAcceptResponse, CKDPShareDeleteResponse, CKDPShareRetrieveResponse, CKDPShareSaveResponse, CKDPShareTokenDeleteResponse, CKDPShareTokenRetrieveResponse, CKDPShareTokenSaveResponse, CKDPSubscriptionCreateResponse, CKDPSubscriptionDeleteResponse, CKDPSubscriptionRetrieveResponse, CKDPTokenRegistrationResponse, CKDPTokenUnregistrationResponse, CKDPUnlikeResponse, CKDPUserAvailableQuotaResponse, CKDPUserPrivacySettingsBatchLookupResponse, CKDPUserPrivacySettingsResetResponse, CKDPUserPrivacySettingsRetrieveResponse, CKDPUserPrivacySettingsUpdateResponse, CKDPUserQueryResponse, CKDPUserRetrieveResponse, CKDPWebAuthTokenRetrieveResponse, CKDPZoneDeleteResponse, CKDPZoneRetrieveChangesResponse, CKDPZoneRetrieveResponse, CKDPZoneSaveResponse;

@interface CKDPResponseOperation : PBCodable <NSCopying> {

	CKDPAssetUploadTokenRetrieveResponse* _assetUploadTokenRetrieveResponse;
	CKDPDeleteCommentResponse* _deleteCommentResponse;
	CKDPDeleteContainerResponse* _deleteContainerResponse;
	CKDPGetCommentResponse* _getCommentResponse;
	CKDPGetCommentsResponse* _getCommentsResponse;
	CKDPGetLikesResponse* _getLikesResponse;
	CKDPLikeResponse* _likeResponse;
	CKDPMescalCertificateResponse* _mescalCertificateResponse;
	CKDPMescalSessionInfoResponse* _mescalSessionInfoResponse;
	CKDPMescalSignatureResponse* _mescalSignatureResponse;
	CKDPNotificationMarkReadResponse* _notificationMarkReadResponse;
	CKDPNotificationSyncResponse* _notificationSyncResponse;
	unsigned _operationCost;
	CKDPPkiRegisterResponse* _pkiRegisterResponse;
	CKDPPkiRetrieveResponse* _pkiRetrieveResponse;
	CKDPPostCommentResponse* _postCommentResponse;
	CKDPPromoteContainerSchemaResponse* _promoteContainerSchemaResponse;
	CKDPPulseResponse* _pulseResponse;
	CKDPQueryRetrieveResponse* _queryRetrieveResponse;
	CKDPRecordDeleteResponse* _recordDeleteResponse;
	CKDPRecordRetrieveChangesResponse* _recordRetrieveChangesResponse;
	CKDPRecordRetrieveResponse* _recordRetrieveResponse;
	CKDPRecordRetrieveVersionsResponse* _recordRetrieveVersionsResponse;
	CKDPRecordSaveResponse* _recordSaveResponse;
	CKDPResetContainerResponse* _resetContainerResponse;
	CKDPOperation* _response;
	CKDPResponseOperationResult* _result;
	CKDPSetBadgeCountResponse* _setBadgeCountResponse;
	CKDPShareAcceptResponse* _shareAcceptResponse;
	CKDPShareDeleteResponse* _shareDeleteResponse;
	CKDPShareRetrieveResponse* _shareRetrieveResponse;
	CKDPShareSaveResponse* _shareSaveResponse;
	CKDPShareTokenDeleteResponse* _shareTokenDeleteResponse;
	CKDPShareTokenRetrieveResponse* _shareTokenRetrieveResponse;
	CKDPShareTokenSaveResponse* _shareTokenSaveResponse;
	CKDPSubscriptionCreateResponse* _subscriptionCreateResponse;
	CKDPSubscriptionDeleteResponse* _subscriptionDeleteResponse;
	CKDPSubscriptionRetrieveResponse* _subscriptionRetrieveResponse;
	CKDPTokenRegistrationResponse* _tokenRegistrationResponse;
	CKDPTokenUnregistrationResponse* _tokenUnregistrationResponse;
	CKDPUnlikeResponse* _unlikeResponse;
	CKDPUserAvailableQuotaResponse* _userAvailableQuotaResponse;
	CKDPUserPrivacySettingsBatchLookupResponse* _userPrivacySettingsBatchLookupResponse;
	CKDPUserPrivacySettingsResetResponse* _userPrivacySettingsResetResponse;
	CKDPUserPrivacySettingsRetrieveResponse* _userPrivacySettingsRetrieveResponse;
	CKDPUserPrivacySettingsUpdateResponse* _userPrivacySettingsUpdateResponse;
	CKDPUserQueryResponse* _userQueryResponse;
	CKDPUserRetrieveResponse* _userRetrieveResponse;
	CKDPWebAuthTokenRetrieveResponse* _webAuthTokenRetrieveResponse;
	CKDPZoneDeleteResponse* _zoneDeleteResponse;
	CKDPZoneRetrieveChangesResponse* _zoneRetrieveChangesResponse;
	CKDPZoneRetrieveResponse* _zoneRetrieveResponse;
	CKDPZoneSaveResponse* _zoneSaveResponse;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) char hasShareSaveResponse; 
@property (nonatomic,retain) CKDPShareSaveResponse * shareSaveResponse; 
@property (nonatomic,readonly) char hasShareRetrieveResponse; 
@property (nonatomic,retain) CKDPShareRetrieveResponse * shareRetrieveResponse; 
@property (nonatomic,readonly) char hasShareDeleteResponse; 
@property (nonatomic,retain) CKDPShareDeleteResponse * shareDeleteResponse; 
@property (nonatomic,readonly) char hasShareAcceptResponse; 
@property (nonatomic,retain) CKDPShareAcceptResponse * shareAcceptResponse; 
@property (nonatomic,readonly) char hasShareTokenSaveResponse; 
@property (nonatomic,retain) CKDPShareTokenSaveResponse * shareTokenSaveResponse; 
@property (nonatomic,readonly) char hasShareTokenRetrieveResponse; 
@property (nonatomic,retain) CKDPShareTokenRetrieveResponse * shareTokenRetrieveResponse; 
@property (nonatomic,readonly) char hasShareTokenDeleteResponse; 
@property (nonatomic,retain) CKDPShareTokenDeleteResponse * shareTokenDeleteResponse; 
@property (nonatomic,readonly) char hasZoneSaveResponse; 
@property (nonatomic,retain) CKDPZoneSaveResponse * zoneSaveResponse; 
@property (nonatomic,readonly) char hasZoneRetrieveResponse; 
@property (nonatomic,retain) CKDPZoneRetrieveResponse * zoneRetrieveResponse; 
@property (nonatomic,readonly) char hasZoneDeleteResponse; 
@property (nonatomic,retain) CKDPZoneDeleteResponse * zoneDeleteResponse; 
@property (nonatomic,readonly) char hasZoneRetrieveChangesResponse; 
@property (nonatomic,retain) CKDPZoneRetrieveChangesResponse * zoneRetrieveChangesResponse; 
@property (nonatomic,readonly) char hasRecordSaveResponse; 
@property (nonatomic,retain) CKDPRecordSaveResponse * recordSaveResponse; 
@property (nonatomic,readonly) char hasRecordRetrieveResponse; 
@property (nonatomic,retain) CKDPRecordRetrieveResponse * recordRetrieveResponse; 
@property (nonatomic,readonly) char hasRecordRetrieveVersionsResponse; 
@property (nonatomic,retain) CKDPRecordRetrieveVersionsResponse * recordRetrieveVersionsResponse; 
@property (nonatomic,readonly) char hasRecordRetrieveChangesResponse; 
@property (nonatomic,retain) CKDPRecordRetrieveChangesResponse * recordRetrieveChangesResponse; 
@property (nonatomic,readonly) char hasRecordDeleteResponse; 
@property (nonatomic,retain) CKDPRecordDeleteResponse * recordDeleteResponse; 
@property (nonatomic,readonly) char hasUserAvailableQuotaResponse; 
@property (nonatomic,retain) CKDPUserAvailableQuotaResponse * userAvailableQuotaResponse; 
@property (nonatomic,readonly) char hasUserRetrieveResponse; 
@property (nonatomic,retain) CKDPUserRetrieveResponse * userRetrieveResponse; 
@property (nonatomic,readonly) char hasQueryRetrieveResponse; 
@property (nonatomic,retain) CKDPQueryRetrieveResponse * queryRetrieveResponse; 
@property (nonatomic,readonly) char hasAssetUploadTokenRetrieveResponse; 
@property (nonatomic,retain) CKDPAssetUploadTokenRetrieveResponse * assetUploadTokenRetrieveResponse; 
@property (nonatomic,readonly) char hasDeleteContainerResponse; 
@property (nonatomic,retain) CKDPDeleteContainerResponse * deleteContainerResponse; 
@property (nonatomic,readonly) char hasResetContainerResponse; 
@property (nonatomic,retain) CKDPResetContainerResponse * resetContainerResponse; 
@property (nonatomic,readonly) char hasPromoteContainerSchemaResponse; 
@property (nonatomic,retain) CKDPPromoteContainerSchemaResponse * promoteContainerSchemaResponse; 
@property (nonatomic,readonly) char hasWebAuthTokenRetrieveResponse; 
@property (nonatomic,retain) CKDPWebAuthTokenRetrieveResponse * webAuthTokenRetrieveResponse; 
@property (nonatomic,readonly) char hasPostCommentResponse; 
@property (nonatomic,retain) CKDPPostCommentResponse * postCommentResponse; 
@property (nonatomic,readonly) char hasGetCommentsResponse; 
@property (nonatomic,retain) CKDPGetCommentsResponse * getCommentsResponse; 
@property (nonatomic,readonly) char hasGetCommentResponse; 
@property (nonatomic,retain) CKDPGetCommentResponse * getCommentResponse; 
@property (nonatomic,readonly) char hasDeleteCommentResponse; 
@property (nonatomic,retain) CKDPDeleteCommentResponse * deleteCommentResponse; 
@property (nonatomic,readonly) char hasLikeResponse; 
@property (nonatomic,retain) CKDPLikeResponse * likeResponse; 
@property (nonatomic,readonly) char hasUnlikeResponse; 
@property (nonatomic,retain) CKDPUnlikeResponse * unlikeResponse; 
@property (nonatomic,readonly) char hasGetLikesResponse; 
@property (nonatomic,retain) CKDPGetLikesResponse * getLikesResponse; 
@property (nonatomic,readonly) char hasPulseResponse; 
@property (nonatomic,retain) CKDPPulseResponse * pulseResponse; 
@property (nonatomic,readonly) char hasSubscriptionCreateResponse; 
@property (nonatomic,retain) CKDPSubscriptionCreateResponse * subscriptionCreateResponse; 
@property (nonatomic,readonly) char hasSubscriptionRetrieveResponse; 
@property (nonatomic,retain) CKDPSubscriptionRetrieveResponse * subscriptionRetrieveResponse; 
@property (nonatomic,readonly) char hasSubscriptionDeleteResponse; 
@property (nonatomic,retain) CKDPSubscriptionDeleteResponse * subscriptionDeleteResponse; 
@property (nonatomic,readonly) char hasUserQueryResponse; 
@property (nonatomic,retain) CKDPUserQueryResponse * userQueryResponse; 
@property (nonatomic,readonly) char hasUserPrivacySettingsUpdateResponse; 
@property (nonatomic,retain) CKDPUserPrivacySettingsUpdateResponse * userPrivacySettingsUpdateResponse; 
@property (nonatomic,readonly) char hasUserPrivacySettingsResetResponse; 
@property (nonatomic,retain) CKDPUserPrivacySettingsResetResponse * userPrivacySettingsResetResponse; 
@property (nonatomic,readonly) char hasUserPrivacySettingsBatchLookupResponse; 
@property (nonatomic,retain) CKDPUserPrivacySettingsBatchLookupResponse * userPrivacySettingsBatchLookupResponse; 
@property (nonatomic,readonly) char hasUserPrivacySettingsRetrieveResponse; 
@property (nonatomic,retain) CKDPUserPrivacySettingsRetrieveResponse * userPrivacySettingsRetrieveResponse; 
@property (nonatomic,readonly) char hasTokenRegistrationResponse; 
@property (nonatomic,retain) CKDPTokenRegistrationResponse * tokenRegistrationResponse; 
@property (nonatomic,readonly) char hasTokenUnregistrationResponse; 
@property (nonatomic,retain) CKDPTokenUnregistrationResponse * tokenUnregistrationResponse; 
@property (nonatomic,readonly) char hasSetBadgeCountResponse; 
@property (nonatomic,retain) CKDPSetBadgeCountResponse * setBadgeCountResponse; 
@property (nonatomic,readonly) char hasNotificationSyncResponse; 
@property (nonatomic,retain) CKDPNotificationSyncResponse * notificationSyncResponse; 
@property (nonatomic,readonly) char hasNotificationMarkReadResponse; 
@property (nonatomic,retain) CKDPNotificationMarkReadResponse * notificationMarkReadResponse; 
@property (nonatomic,readonly) char hasPkiRegisterResponse; 
@property (nonatomic,retain) CKDPPkiRegisterResponse * pkiRegisterResponse; 
@property (nonatomic,readonly) char hasPkiRetrieveResponse; 
@property (nonatomic,retain) CKDPPkiRetrieveResponse * pkiRetrieveResponse; 
@property (nonatomic,readonly) char hasMescalSignatureResponse; 
@property (nonatomic,retain) CKDPMescalSignatureResponse * mescalSignatureResponse; 
@property (nonatomic,readonly) char hasMescalSessionInfoResponse; 
@property (nonatomic,retain) CKDPMescalSessionInfoResponse * mescalSessionInfoResponse; 
@property (nonatomic,readonly) char hasMescalCertificateResponse; 
@property (nonatomic,retain) CKDPMescalCertificateResponse * mescalCertificateResponse; 
@property (assign,nonatomic) char hasOperationCost; 
@property (assign,nonatomic) unsigned operationCost;                                                                           //@synthesize operationCost=_operationCost - In the implementation block
@property (nonatomic,readonly) char hasResponse; 
@property (nonatomic,retain) CKDPOperation * response;                                                                         //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) char hasResult; 
@property (nonatomic,retain) CKDPResponseOperationResult * result;                                                             //@synthesize result=_result - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CKDPOperation *)response;
-(id)dictionaryRepresentation;
-(CKDPResponseOperationResult *)result;
-(char)hasResult;
-(char)hasMescalSignatureResponse;
-(char)hasOperationCost;
-(unsigned)operationCost;
-(void)setResponse:(CKDPOperation *)arg1 ;
-(CKDPMescalSignatureResponse *)mescalSignatureResponse;
-(char)hasQueryRetrieveResponse;
-(CKDPQueryRetrieveResponse *)queryRetrieveResponse;
-(char)hasShareRetrieveResponse;
-(CKDPShareRetrieveResponse *)shareRetrieveResponse;
-(void)setResult:(CKDPResponseOperationResult *)arg1 ;
-(void)setZoneSaveResponse:(CKDPZoneSaveResponse *)arg1 ;
-(void)setZoneRetrieveResponse:(CKDPZoneRetrieveResponse *)arg1 ;
-(void)setZoneDeleteResponse:(CKDPZoneDeleteResponse *)arg1 ;
-(void)setZoneRetrieveChangesResponse:(CKDPZoneRetrieveChangesResponse *)arg1 ;
-(void)setRecordSaveResponse:(CKDPRecordSaveResponse *)arg1 ;
-(void)setRecordRetrieveResponse:(CKDPRecordRetrieveResponse *)arg1 ;
-(void)setRecordRetrieveVersionsResponse:(CKDPRecordRetrieveVersionsResponse *)arg1 ;
-(void)setRecordRetrieveChangesResponse:(CKDPRecordRetrieveChangesResponse *)arg1 ;
-(void)setRecordDeleteResponse:(CKDPRecordDeleteResponse *)arg1 ;
-(void)setQueryRetrieveResponse:(CKDPQueryRetrieveResponse *)arg1 ;
-(void)setAssetUploadTokenRetrieveResponse:(CKDPAssetUploadTokenRetrieveResponse *)arg1 ;
-(void)setDeleteContainerResponse:(CKDPDeleteContainerResponse *)arg1 ;
-(void)setResetContainerResponse:(CKDPResetContainerResponse *)arg1 ;
-(void)setPromoteContainerSchemaResponse:(CKDPPromoteContainerSchemaResponse *)arg1 ;
-(void)setUserAvailableQuotaResponse:(CKDPUserAvailableQuotaResponse *)arg1 ;
-(void)setWebAuthTokenRetrieveResponse:(CKDPWebAuthTokenRetrieveResponse *)arg1 ;
-(void)setSubscriptionCreateResponse:(CKDPSubscriptionCreateResponse *)arg1 ;
-(void)setSubscriptionRetrieveResponse:(CKDPSubscriptionRetrieveResponse *)arg1 ;
-(void)setSubscriptionDeleteResponse:(CKDPSubscriptionDeleteResponse *)arg1 ;
-(void)setUserRetrieveResponse:(CKDPUserRetrieveResponse *)arg1 ;
-(void)setUserQueryResponse:(CKDPUserQueryResponse *)arg1 ;
-(void)setUserPrivacySettingsRetrieveResponse:(CKDPUserPrivacySettingsRetrieveResponse *)arg1 ;
-(void)setUserPrivacySettingsUpdateResponse:(CKDPUserPrivacySettingsUpdateResponse *)arg1 ;
-(void)setUserPrivacySettingsResetResponse:(CKDPUserPrivacySettingsResetResponse *)arg1 ;
-(void)setUserPrivacySettingsBatchLookupResponse:(CKDPUserPrivacySettingsBatchLookupResponse *)arg1 ;
-(void)setShareSaveResponse:(CKDPShareSaveResponse *)arg1 ;
-(void)setShareRetrieveResponse:(CKDPShareRetrieveResponse *)arg1 ;
-(void)setShareDeleteResponse:(CKDPShareDeleteResponse *)arg1 ;
-(void)setShareAcceptResponse:(CKDPShareAcceptResponse *)arg1 ;
-(void)setShareTokenSaveResponse:(CKDPShareTokenSaveResponse *)arg1 ;
-(void)setShareTokenRetrieveResponse:(CKDPShareTokenRetrieveResponse *)arg1 ;
-(void)setShareTokenDeleteResponse:(CKDPShareTokenDeleteResponse *)arg1 ;
-(void)setPostCommentResponse:(CKDPPostCommentResponse *)arg1 ;
-(void)setGetCommentsResponse:(CKDPGetCommentsResponse *)arg1 ;
-(void)setDeleteCommentResponse:(CKDPDeleteCommentResponse *)arg1 ;
-(void)setLikeResponse:(CKDPLikeResponse *)arg1 ;
-(void)setUnlikeResponse:(CKDPUnlikeResponse *)arg1 ;
-(void)setGetLikesResponse:(CKDPGetLikesResponse *)arg1 ;
-(void)setGetCommentResponse:(CKDPGetCommentResponse *)arg1 ;
-(void)setPulseResponse:(CKDPPulseResponse *)arg1 ;
-(void)setTokenRegistrationResponse:(CKDPTokenRegistrationResponse *)arg1 ;
-(void)setTokenUnregistrationResponse:(CKDPTokenUnregistrationResponse *)arg1 ;
-(void)setSetBadgeCountResponse:(CKDPSetBadgeCountResponse *)arg1 ;
-(void)setNotificationSyncResponse:(CKDPNotificationSyncResponse *)arg1 ;
-(void)setNotificationMarkReadResponse:(CKDPNotificationMarkReadResponse *)arg1 ;
-(void)setPkiRegisterResponse:(CKDPPkiRegisterResponse *)arg1 ;
-(void)setPkiRetrieveResponse:(CKDPPkiRetrieveResponse *)arg1 ;
-(void)setMescalSignatureResponse:(CKDPMescalSignatureResponse *)arg1 ;
-(void)setMescalSessionInfoResponse:(CKDPMescalSessionInfoResponse *)arg1 ;
-(void)setMescalCertificateResponse:(CKDPMescalCertificateResponse *)arg1 ;
-(void)setOperationCost:(unsigned)arg1 ;
-(void)setHasOperationCost:(char)arg1 ;
-(char)hasResponse;
-(char)hasShareSaveResponse;
-(CKDPShareSaveResponse *)shareSaveResponse;
-(char)hasShareDeleteResponse;
-(CKDPShareDeleteResponse *)shareDeleteResponse;
-(char)hasShareAcceptResponse;
-(CKDPShareAcceptResponse *)shareAcceptResponse;
-(char)hasShareTokenSaveResponse;
-(CKDPShareTokenSaveResponse *)shareTokenSaveResponse;
-(char)hasShareTokenRetrieveResponse;
-(CKDPShareTokenRetrieveResponse *)shareTokenRetrieveResponse;
-(char)hasShareTokenDeleteResponse;
-(CKDPShareTokenDeleteResponse *)shareTokenDeleteResponse;
-(char)hasZoneSaveResponse;
-(CKDPZoneSaveResponse *)zoneSaveResponse;
-(char)hasZoneRetrieveResponse;
-(CKDPZoneRetrieveResponse *)zoneRetrieveResponse;
-(char)hasZoneDeleteResponse;
-(CKDPZoneDeleteResponse *)zoneDeleteResponse;
-(char)hasZoneRetrieveChangesResponse;
-(CKDPZoneRetrieveChangesResponse *)zoneRetrieveChangesResponse;
-(char)hasRecordSaveResponse;
-(CKDPRecordSaveResponse *)recordSaveResponse;
-(char)hasRecordRetrieveResponse;
-(CKDPRecordRetrieveResponse *)recordRetrieveResponse;
-(char)hasRecordRetrieveVersionsResponse;
-(CKDPRecordRetrieveVersionsResponse *)recordRetrieveVersionsResponse;
-(char)hasRecordRetrieveChangesResponse;
-(CKDPRecordRetrieveChangesResponse *)recordRetrieveChangesResponse;
-(char)hasRecordDeleteResponse;
-(CKDPRecordDeleteResponse *)recordDeleteResponse;
-(char)hasUserAvailableQuotaResponse;
-(CKDPUserAvailableQuotaResponse *)userAvailableQuotaResponse;
-(char)hasUserRetrieveResponse;
-(CKDPUserRetrieveResponse *)userRetrieveResponse;
-(char)hasAssetUploadTokenRetrieveResponse;
-(CKDPAssetUploadTokenRetrieveResponse *)assetUploadTokenRetrieveResponse;
-(char)hasDeleteContainerResponse;
-(CKDPDeleteContainerResponse *)deleteContainerResponse;
-(char)hasResetContainerResponse;
-(CKDPResetContainerResponse *)resetContainerResponse;
-(char)hasPromoteContainerSchemaResponse;
-(CKDPPromoteContainerSchemaResponse *)promoteContainerSchemaResponse;
-(char)hasWebAuthTokenRetrieveResponse;
-(CKDPWebAuthTokenRetrieveResponse *)webAuthTokenRetrieveResponse;
-(char)hasPostCommentResponse;
-(CKDPPostCommentResponse *)postCommentResponse;
-(char)hasGetCommentsResponse;
-(CKDPGetCommentsResponse *)getCommentsResponse;
-(char)hasGetCommentResponse;
-(CKDPGetCommentResponse *)getCommentResponse;
-(char)hasDeleteCommentResponse;
-(CKDPDeleteCommentResponse *)deleteCommentResponse;
-(char)hasLikeResponse;
-(CKDPLikeResponse *)likeResponse;
-(char)hasUnlikeResponse;
-(CKDPUnlikeResponse *)unlikeResponse;
-(char)hasGetLikesResponse;
-(CKDPGetLikesResponse *)getLikesResponse;
-(char)hasPulseResponse;
-(CKDPPulseResponse *)pulseResponse;
-(char)hasSubscriptionCreateResponse;
-(CKDPSubscriptionCreateResponse *)subscriptionCreateResponse;
-(char)hasSubscriptionRetrieveResponse;
-(CKDPSubscriptionRetrieveResponse *)subscriptionRetrieveResponse;
-(char)hasSubscriptionDeleteResponse;
-(CKDPSubscriptionDeleteResponse *)subscriptionDeleteResponse;
-(char)hasUserQueryResponse;
-(CKDPUserQueryResponse *)userQueryResponse;
-(char)hasUserPrivacySettingsUpdateResponse;
-(CKDPUserPrivacySettingsUpdateResponse *)userPrivacySettingsUpdateResponse;
-(char)hasUserPrivacySettingsResetResponse;
-(CKDPUserPrivacySettingsResetResponse *)userPrivacySettingsResetResponse;
-(char)hasUserPrivacySettingsBatchLookupResponse;
-(CKDPUserPrivacySettingsBatchLookupResponse *)userPrivacySettingsBatchLookupResponse;
-(char)hasUserPrivacySettingsRetrieveResponse;
-(CKDPUserPrivacySettingsRetrieveResponse *)userPrivacySettingsRetrieveResponse;
-(char)hasTokenRegistrationResponse;
-(CKDPTokenRegistrationResponse *)tokenRegistrationResponse;
-(char)hasTokenUnregistrationResponse;
-(CKDPTokenUnregistrationResponse *)tokenUnregistrationResponse;
-(char)hasSetBadgeCountResponse;
-(CKDPSetBadgeCountResponse *)setBadgeCountResponse;
-(char)hasNotificationSyncResponse;
-(CKDPNotificationSyncResponse *)notificationSyncResponse;
-(char)hasNotificationMarkReadResponse;
-(CKDPNotificationMarkReadResponse *)notificationMarkReadResponse;
-(char)hasPkiRegisterResponse;
-(CKDPPkiRegisterResponse *)pkiRegisterResponse;
-(char)hasPkiRetrieveResponse;
-(CKDPPkiRetrieveResponse *)pkiRetrieveResponse;
-(char)hasMescalSessionInfoResponse;
-(CKDPMescalSessionInfoResponse *)mescalSessionInfoResponse;
-(char)hasMescalCertificateResponse;
-(CKDPMescalCertificateResponse *)mescalCertificateResponse;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

