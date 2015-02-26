/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:46 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface KNAnimationUtils : NSObject
+(unsigned long long)randomBasicDirection;
+(unsigned long long)directionFromCustomAttributesDeliveryOption:(unsigned long long)arg1 ;
+(id)timingsArrayWithDirection:(unsigned long long)arg1 duration:(double)arg2 count:(unsigned long long)arg3 chunkDuration:(double)arg4 randomness:(double)arg5 ;
+(id)customAttributesArrayWithTextDeliveryOptions:(id)arg1 ;
+(id)customAttributesArrayWithDeliveryOptions:(id)arg1 ;
+(unsigned long long)randomDirection;
+(void)updateDefaultsValues;
+(BOOL)isMotionBlurBlacklistedWithCapabilities:(id)arg1 ;
+(id)customAttributesArrayWithJiggleIntensityOptions:(id)arg1 ;
+(BOOL)isFPSLoggingEnabled;
+(BOOL)isFPSLoggingTimerDisabled;
+(BOOL)isFPSGraphEnabled;
+(BOOL)isGLStateValidationEnabled;
+(BOOL)isDisplayLoggingEnabled;
+(BOOL)isSOATSAnimationTestingEnabled;
+(BOOL)shouldForceDisplayPreferredMode;
+(BOOL)isMotionBlurCapableWithAnimationContext:(id)arg1 ;
+(id)CAAccelerationFromSFXActionAcceleration:(unsigned long long)arg1 ;
+(CGRect)recommendedLayerBoundsForPlaybackOfShow:(id)arg1 inContainerWithBounds:(CGRect)arg2 contentsScale:(double)arg3 isExternalDisplay:(BOOL)arg4 ;
+(void)getRecommendedPosition:(CGPoint*)arg1 andTransform:(CATransform3D*)arg2 toFitLayer:(id)arg3 inContainerWithBounds:(CGRect)arg4 contentsScale:(double)arg5 ;
+(void)initialize;
@end
