/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:50:54 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableArray, NSMutableOrderedSet;

@interface DownloadErrorController : NSObject {

	NSObject<OS_dispatch_queue>* _dispatchQueue;
	NSMutableArray* _errors;
	NSMutableOrderedSet* _scheduledErrors;
	NSObject<OS_dispatch_source>* _scheduledErrorTimer;

}
+(id)sharedErrorController;
-(void)_cancelErrorsPassingTest:(/*^block*/ id)arg1 ;
-(void)_scheduleErrorDisplay:(id)arg1 ;
-(void)_displayScheduledErrors;
-(void)cancelDialogsWithDownloadIdentifier:(long long)arg1 ;
-(void)showDownloadError:(id)arg1 ;
-(void)_networkTypeChangedNotification:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end
