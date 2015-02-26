/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <libTelephonyUtilDynamic.dylib/NSURLConnectionDelegate.h>

@class NSURL, NSURLConnection, NSMutableData;

@interface RUIImageLoad : NSObject <NSURLConnectionDelegate> {

	NSURL* _URL;
	NSURLConnection* _connection;
	NSMutableData* _imageData;
	BOOL _invalidResponse;

}
-(void)dealloc;
-(void)start;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)_createImage;
-(void)_loadFinished;
-(BOOL)receivedValidResponse:(id)arg1 ;
@end
