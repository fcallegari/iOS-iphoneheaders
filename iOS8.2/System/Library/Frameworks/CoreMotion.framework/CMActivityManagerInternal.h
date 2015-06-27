/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:23 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue, OS_dispatch_semaphore;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMActivityManagerInternal : NSObject {

	CLConnectionClient* fLocationdConnection;
	/*^block*/id fActivityHandler;
	NSObject*<OS_dispatch_source> fWatchdogTimer;
	NSObject*<OS_dispatch_queue> fPrivateQueue;
	char fSubscribedToMotionState;
	NSObject*<OS_dispatch_semaphore> fSidebandOverrideSemaphore;
	NSObject*<OS_dispatch_queue> fSidebandOverrideQueue;
	char fSidebandOverrideWaiting;
	int fSidebandOverrideResult;

}
-(void)stopWatchdogCheckinsPrivate;
-(void)startWatchdogCheckinsPrivate;
-(void)startActivityUpdatesWithHandlerPrivate:(/*^block*/id)arg1 ;
-(void)stopActivityUpdatesPrivate;
-(void)overrideOscarSideband:(char)arg1 withState:(int)arg2 ;
-(void)dealloc;
-(id)init;
-(void)connect;
-(void)disconnect;
@end
