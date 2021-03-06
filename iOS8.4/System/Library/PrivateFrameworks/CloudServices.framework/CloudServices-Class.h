/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:31 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudServices.framework/CloudServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface CloudServices : NSObject {

	NSObject*<OS_dispatch_queue> _replyQueue;
	NSObject*<OS_dispatch_queue> replyQueue;

}

@property (assign,nonatomic) NSObject*<OS_dispatch_queue> replyQueue; 
+(id)_CreateLakituConnection;
-(id)getAccountInfoWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)startSMSChallengeWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)changeSMSTargetWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)storeRecordWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)recoverRecordWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)updateRecordWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)deleteRecordWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)listSMSTargetsWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)verifyCertificateWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)replyQueue;
-(void)setReplyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

