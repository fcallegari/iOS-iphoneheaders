/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSSerializerStream
@required
-(void)copySerializationInto:(void*)arg1;
-(unsigned long long)writeInt:(unsigned long long)arg1;
-(unsigned long long)writeAlignedDataSize:(unsigned long long)arg1;
-(unsigned long long)writeData:(const void*)arg1 length:(unsigned long long)arg2;
-(unsigned long long)writeRoomForInt:(int*)arg1;
-(void)writeDelayedInt:(unsigned long long)arg1 for:(int)arg2;
@end
