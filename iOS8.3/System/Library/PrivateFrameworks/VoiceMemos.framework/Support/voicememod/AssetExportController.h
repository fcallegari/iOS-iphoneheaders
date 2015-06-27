/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:06:56 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/Support/voicememod
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSOperationQueue, NSObject, NSMutableDictionary;

@interface AssetExportController : NSObject {

	NSOperationQueue* _operationQueue;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableDictionary* _exportOperationsByCompositionAVURL;
	NSMutableDictionary* _waveformOperationsByCompositionAVURL;

}
-(void)finalizeAssetWithCompositionAVURL:(id)arg1 cacheWaveform:(char)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)init;
@end
