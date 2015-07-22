/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:23 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSPComponentWriteChannel.h>

@protocol TSPComponentWriteChannel;
@class NSString;

@interface TSPSnappyComponentWriteChannel : NSObject <TSPComponentWriteChannel> {

	char* _uncompressedBuffer;
	unsigned long long _uncompressedLength;
	id<TSPComponentWriteChannel> _writeChannel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithWriteChannel:(id)arg1 ;
-(void)writeBlock;
-(void)dealloc;
-(void)close;
-(void)writeData:(id)arg1 ;
@end
