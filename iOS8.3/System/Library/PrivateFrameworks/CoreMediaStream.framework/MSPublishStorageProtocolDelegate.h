/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:11:20 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MSPublishStorageProtocolDelegate <NSObject>
@required
-(int)publishStorageProtocol:(id)arg1 didRequestFDForAsset:(id)arg2;
-(void)publishStorageProtocol:(id)arg1 didFinishUsingFD:(int)arg2 forAsset:(id)arg3;
-(void)publishStorageProtocol:(id)arg1 didFinishUploadingAsset:(id)arg2 error:(id)arg3;
-(void)publishStorageProtocolDidFinishPublishingAllAssets:(id)arg1;

@end

