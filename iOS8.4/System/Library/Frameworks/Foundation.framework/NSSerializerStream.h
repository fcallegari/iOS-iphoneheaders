/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:56 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
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
