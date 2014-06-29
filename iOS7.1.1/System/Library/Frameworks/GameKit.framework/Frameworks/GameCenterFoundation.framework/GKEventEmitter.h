/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:15 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSHashTable, NSMutableArray;

@interface GKEventEmitter : NSObject {

	NSHashTable* _listeners;
	NSMutableArray* _supportedProtocols;
	NSMutableArray* _queuedEvents;

}

@property (nonatomic,retain) NSHashTable * listeners;                          //@synthesize listeners=_listeners - In the implementation block
@property (nonatomic,retain) NSMutableArray * supportedProtocols;              //@synthesize supportedProtocols=_supportedProtocols - In the implementation block
@property (nonatomic,retain) NSMutableArray * queuedEvents;                    //@synthesize queuedEvents=_queuedEvents - In the implementation block
+(id)eventEmitterForProtocols:(id)arg1 ;
-(void)registerListener:(id)arg1 ;
-(void)unregisterListener:(id)arg1 ;
-(void)unregisterAllListeners;
-(id)methodSignatureForProtocol:(id)arg1 selector:(SEL)arg2 ;
-(id)initWithSupportedProtocols:(id)arg1 ;
-(void)setSupportedProtocols:(id)arg1 ;
-(void)setQueuedEvents:(id)arg1 ;
-(void)dispatchQueuedEventsToListener:(id)arg1 ;
-(id)invocationForProtocol:(id)arg1 selector:(SEL)arg2 ;
-(id)supportedProtocols;
-(id)queuedEvents;
-(id)listeners;
-(void)setListeners:(id)arg1 ;
-(bool)listenerRegisteredForSelector:(SEL)arg1 ;
-(void)dealloc;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end
