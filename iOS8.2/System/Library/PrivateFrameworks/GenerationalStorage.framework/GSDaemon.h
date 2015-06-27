/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:23 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/GenerationalStorage.framework/revisiond
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <revisiond/NSXPCListenerDelegate.h>

@protocol OS_dispatch_source;
@class NSObject, NSXPCListener, NSString;

@interface GSDaemon : NSObject <NSXPCListenerDelegate> {

	NSObject*<OS_dispatch_source> _int_src;
	NSObject*<OS_dispatch_source> _term_src;
	NSObject*<OS_dispatch_source> _quit_src;
	NSObject*<OS_dispatch_source> _hup_src;
	NSXPCListener* _listener;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)daemon;
-(id)_registerSignal:(int)arg1 queue:(id)arg2 ;
-(id)init;
-(void)invalidate;
-(int)resume;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)waitUntilDeviceIsUnlocked;
@end
