/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:04:37 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iap2d/iap2d-Structs.h>
@interface iAP2PowerUpdates : NSObject {

	unsigned paramCountArr[3];
	unsigned long long updateTypesBitmask;

}
-(void)clearUpdateTypes;
-(unsigned)paramCount:(int)arg1 ;
-(void)incrementParamCount:(int)arg1 ;
-(void)setUpdateTypesBitmask:(unsigned long long)arg1 ;
-(void)enableUpdateType:(int)arg1 ;
-(BOOL)isUpdateTypeEnabled:(int)arg1 ;
-(void)processPowerInfoChangeNotification:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone)arg1 ;
@end
