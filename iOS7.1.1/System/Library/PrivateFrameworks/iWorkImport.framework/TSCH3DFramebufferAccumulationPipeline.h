/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:26 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSCH3DFramebufferTransformPipeline.h>

@protocol TSCH3DFramebufferAccumulator, TSCH3DFramebufferResolver;
@class TSCH3DFramebufferTransformPipeline;

@interface TSCH3DFramebufferAccumulationPipeline : TSCH3DFramebufferTransformPipeline {

	float mFactor;
	float mAccumulated;
	TSCH3DFramebufferTransformPipeline<TSCH3DFramebufferAccumulator>* mAccumulator;
	TSCH3DFramebufferTransformPipeline<TSCH3DFramebufferResolver>* mResolver;

}

@property (assign,nonatomic) float factor; 
@property (assign,nonatomic) float accumulated; 
-(bool)accumulate;
-(void)setFactor:(float)arg1 ;
-(float)accumulated;
-(void)setAccumulated:(float)arg1 ;
-(bool)resolve;
-(void)dealloc;
-(void)setTarget:(id)arg1 ;
-(bool)run;
-(void)setSource:(id)arg1 ;
-(void)reset;
-(float)factor;
@end
