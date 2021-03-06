/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Messages/PlugIns/FaceTime.imservice/FaceTime
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <IDSCore/IDSPushHandlerDelegate.h>

@class NSMutableArray, NSArray, NSData;

@interface FaceTimePushHandler : NSObject <IDSPushHandlerDelegate> {

	NSMutableArray* _handlers;
	NSArray* _topics;
	BOOL _registeredForPush;
	BOOL _isListening;

}

@property (nonatomic,readonly) NSData * pushToken; 
@property (assign,nonatomic) BOOL registered; 
+(id)commandToHandlerBlock;
-(id)pushToken;
-(void)dealloc;
-(id)initWithTopics:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(id)copyHandlersForEnumerating;
-(id)_pushTopics;
-(void)_updateListenerIfNeeded;
-(void)_acceptIncomingPushes;
-(void)_ignoreIncomingPushes;
-(void)handler:(id)arg1 didReceiveMessage:(id)arg2 forTopic:(id)arg3 fromID:(id)arg4 messageContext:(id)arg5 ;
-(void)setRegistered:(BOOL)arg1 ;
-(BOOL)registered;
@end

