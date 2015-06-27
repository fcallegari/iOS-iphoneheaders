/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:42:05 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSUStreamReadChannel.h>

@protocol TSUStreamReadChannel, TSPMutableCryptoInfo;
@class NSString;

@interface TSPCryptoTranscodeReadChannel : NSObject <TSUStreamReadChannel> {

	id<TSUStreamReadChannel> _readChannel;
	id<TSPMutableCryptoInfo> _encryptionInfo;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)readWithHandler:(/*^block*/id)arg1 ;
-(id)initWithReadChannel:(id)arg1 decryptionInfo:(id)arg2 encryptionInfo:(id)arg3 ;
-(void)close;
@end
