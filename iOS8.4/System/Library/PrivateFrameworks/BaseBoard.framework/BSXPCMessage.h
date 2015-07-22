/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:52 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject;

@interface BSXPCMessage : NSObject {

	NSObject*<OS_xpc_object> _message;
	/*^block*/id _replyHandler;
	NSObject*<OS_dispatch_queue> _replyQueue;

}
+(void)sendMessageWithPacker:(/*^block*/id)arg1 toConnection:(id)arg2 ;
+(void)sendMessageWithPacker:(/*^block*/id)arg1 toConnection:(id)arg2 replyHandler:(/*^block*/id)arg3 replyQueue:(id)arg4 ;
+(void)sendMessage:(long long)arg1 toConnection:(id)arg2 withMessagePacker:(/*^block*/id)arg3 replyHandler:(/*^block*/id)arg4 replyQueue:(id)arg5 ;
+(id)message:(long long)arg1 withPacker:(/*^block*/id)arg2 replyHandler:(/*^block*/id)arg3 replyQueue:(id)arg4 ;
+(const char*)messageTypeKey;
+(void)sendMessage:(long long)arg1 toConnection:(id)arg2 withMessagePacker:(/*^block*/id)arg3 ;
+(id)message:(long long)arg1 withPacker:(/*^block*/id)arg2 ;
+(id)messageWithPacker:(/*^block*/id)arg1 replyHandler:(/*^block*/id)arg2 replyQueue:(id)arg3 ;
-(void)dealloc;
-(id)initWithMessagePacker:(/*^block*/id)arg1 replyHandler:(/*^block*/id)arg2 replyQueue:(id)arg3 ;
-(id)initWithMessage:(long long)arg1 packer:(/*^block*/id)arg2 replyHandler:(/*^block*/id)arg3 replyQueue:(id)arg4 ;
-(id)initWithMessage:(id)arg1 replyHandler:(/*^block*/id)arg2 replyQueue:(id)arg3 ;
-(void)sendToConnection:(id)arg1 ;
-(void)forcefullyInvokeReplyHandler:(id)arg1 ;
@end
