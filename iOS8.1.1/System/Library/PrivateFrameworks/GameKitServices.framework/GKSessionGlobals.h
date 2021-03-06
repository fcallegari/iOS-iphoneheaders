/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:45 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GameKitServices/GameKitServices-Structs.h>
@interface GKSessionGlobals : NSObject {

	unsigned* _activePIDList;
	unsigned long long _activePIDListSize;
	unsigned long long _activePIDListCount;
	opaque_pthread_mutex_t _lock;

}
-(id)init;
-(void)lock;
-(void)unlock;
-(void)unregisterPID:(unsigned)arg1 ;
-(void)registerPID:(unsigned)arg1 ;
-(BOOL)hasActivePID:(unsigned)arg1 ;
@end

