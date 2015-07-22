/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:38 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class AppLaunchStatsComputation, AppLaunchStatsState, AppLaunchStatsStateHandlerQueue, NSObject;

@interface AppLaunchStatsREventHandler : NSObject {

	AppLaunchStatsComputation* aplsComputation;
	AppLaunchStatsState* aplsState;
	AppLaunchStatsStateHandlerQueue* aplsStateHandlerQueue;
	BOOL coreDuet;
	NSObject*<OS_dispatch_queue> rEventQueue;

}
-(void)hdlr_getscores:(unsigned long long)arg1 flags:(unsigned long long)arg2 withXPCObject:(id)arg3 ;
-(void)hdlr_ok2launch:(unsigned long long)arg1 flags:(unsigned long long)arg2 withXPCObject:(id)arg3 ;
-(void)hdlr_energyforecast:(unsigned long long)arg1 withXPCObject:(id)arg2 ;
-(void)hdlr_dataforecast:(unsigned long long)arg1 withXPCObject:(id)arg2 ;
-(void)hdlr_appforecast:(unsigned long long)arg1 withXPCObject:(id)arg2 ;
-(void)hdlr_updateAliveList:(id)arg1 ;
-(void)hdlr_readTrendEvents:(id)arg1 ;
-(void)hdlr_dbolderthan:(id)arg1 ;
-(void)hdlr_nonprewarm:(id)arg1 ;
-(void)hdlr_resourcePool:(id)arg1 ;
-(void)hdlr_budgetRead:(id)arg1 ;
-(id)init:(id)arg1 withHandlers:(id)arg2 ;
-(void)hdlr:(id)arg1 flags:(unsigned long long)arg2 ;
@end
