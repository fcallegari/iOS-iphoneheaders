/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:04:25 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface PLCloudBackgroundTransferMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSMutableDictionary* _pendingBGTransfers;

}
+(id)sharedInstance;
+(id)identifierForResource:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)completeBackgroundTransferForResource:(id)arg1 withError:(id)arg2 ;
-(void)abandonAllBackgroundTransfers;
-(void)onCompletedResource:(id)arg1 invokeBlock:(/*^block*/id)arg2 ;
-(void)completeBackgroundTransferWithIdentifier:(id)arg1 withError:(id)arg2 ;
-(void)abandonTransfersForItemIdentifier:(id)arg1 ;
@end
