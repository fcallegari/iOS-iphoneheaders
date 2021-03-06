/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:33 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Radio/Radio-Structs.h>
@class RadioFairPlaySAPContext;

@interface RadioFairPlaySAPExchanger : NSObject {

	FairPlayHWInfo_ _hardwareInfo;
	FPSAPContextOpaque_Ref _session;
	RadioFairPlaySAPContext* _SAPContext;

}

@property (setter=APContext,nonatomic,readonly) RadioFairPlaySAPContext * SAPContext;              //@synthesize SAPContext=_SAPContext - In the implementation block
-(void)dealloc;
-(id)init;
-(RadioFairPlaySAPContext *)SAPContext;
-(id)exchangeData:(id)arg1 error:(id*)arg2 ;
@end

