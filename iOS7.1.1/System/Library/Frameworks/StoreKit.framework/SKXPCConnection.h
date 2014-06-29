/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:46 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject;

@interface SKXPCConnection : NSObject {

	NSObject<OS_xpc_object>* _connection;
	NSObject<OS_dispatch_queue>* _dispatchQueue;
	/*^block*/ id _disconnectBlock;
	/*^block*/ id _messageBlock;

}

@property (copy) id disconnectBlock; 
@property (copy) id messageBlock; 
-(id)_initSKXPCConnection;
-(void)dealloc;
-(id)init;
-(void)sendMessage:(id)arg1 ;
-(id)initWithServiceName:(id)arg1 ;
-(void)sendMessage:(id)arg1 withReply:(/*^block*/ id)arg2 ;
-(void)setDisconnectBlock:(/*^block*/ id)arg1 ;
-(void)setMessageBlock:(/*^block*/ id)arg1 ;
-(/*^block*/ id)messageBlock;
-(id)createXPCEndpoint;
-(/*^block*/ id)disconnectBlock;
-(void)sendSynchronousMessage:(id)arg1 withReply:(/*^block*/ id)arg2 ;
-(id)initWithXPCConnection:(id)arg1 ;
-(void)_reloadEventHandler;
@end
