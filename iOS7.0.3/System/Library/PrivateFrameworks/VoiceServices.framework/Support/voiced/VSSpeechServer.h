/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:08:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/voiced
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCoreServices/NSXPCListenerDelegate.h>

@class NSXPCListener;

@interface VSSpeechServer : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _listener;

}
-(void)dealloc;
-(id)init;
-(void)resume;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

