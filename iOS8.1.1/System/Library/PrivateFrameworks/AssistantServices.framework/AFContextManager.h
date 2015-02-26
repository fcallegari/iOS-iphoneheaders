/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:34 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AssistantServices/AssistantServices-Structs.h>
@class CPDistributedMessagingCenter;

@interface AFContextManager : NSObject {

	CFArrayRef _contextProviders;
	CPDistributedMessagingCenter* _center;

}
+(id)defaultContextManager;
-(void)dealloc;
-(id)init;
-(void)nothing;
-(void)_collateContextsIntoArray:(id)arg1 ;
-(void)_shutdownServer;
-(id)_collateContexts;
-(void)startCenter:(id)arg1 ;
-(void)removeContextProvider:(id)arg1 ;
-(BOOL)addContextProvider:(id)arg1 ;
@end
