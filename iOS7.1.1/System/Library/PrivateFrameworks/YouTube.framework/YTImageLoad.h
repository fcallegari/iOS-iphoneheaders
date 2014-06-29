/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libTelephonyUtilDynamic.dylib/NSURLConnectionDelegate.h>

@class NSURL, NSURLConnection, NSMutableData, NSString;

@interface YTImageLoad : NSObject <NSURLConnectionDelegate> {

	NSURL* _URL;
	NSURLConnection* _connection;
	NSMutableData* _imageData;
	NSString* _videoID;

}
-(void)dealloc;
-(void)start;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)_createImage;
-(void)_loadFinished;
@end
