/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:44 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDOperation.h>

@class CKShareID, NSString;

@interface CKDUpdateUserPresenceOperation : CKDOperation {

	char _isLurk;
	/*^block*/id _updateCompletionBlock;
	CKShareID* _shareID;
	int _status;
	NSString* _lastETag;
	long long _customStatusFlags;
	double _ttl;

}

@property (nonatomic,copy) id updateCompletionBlock;                   //@synthesize updateCompletionBlock=_updateCompletionBlock - In the implementation block
@property (nonatomic,retain) CKShareID * shareID;                      //@synthesize shareID=_shareID - In the implementation block
@property (assign,nonatomic) int status;                               //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) long long customStatusFlags;              //@synthesize customStatusFlags=_customStatusFlags - In the implementation block
@property (nonatomic,retain) NSString * lastETag;                      //@synthesize lastETag=_lastETag - In the implementation block
@property (assign,nonatomic) char isLurk;                              //@synthesize isLurk=_isLurk - In the implementation block
@property (assign,nonatomic) double ttl;                               //@synthesize ttl=_ttl - In the implementation block
-(void)main;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setUpdateCompletionBlock:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(CKShareID *)shareID;
-(NSString *)lastETag;
-(long long)customStatusFlags;
-(double)ttl;
-(void)setCustomStatusFlags:(long long)arg1 ;
-(void)setLastETag:(NSString *)arg1 ;
-(void)setTtl:(double)arg1 ;
-(void)setShareID:(CKShareID *)arg1 ;
-(char)isLurk;
-(id)updateCompletionBlock;
-(void)_handleUserPresences:(id)arg1 etag:(id)arg2 response:(id)arg3 ;
-(void)setIsLurk:(char)arg1 ;
@end
