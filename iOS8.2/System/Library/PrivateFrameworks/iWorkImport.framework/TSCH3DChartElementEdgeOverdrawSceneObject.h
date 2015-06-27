/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:06 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DSceneObject.h>

@class TSCH3DPrefilteredLineRenderer, TSCH3DChartElementEdgeOverdraw;

@interface TSCH3DChartElementEdgeOverdrawSceneObject : TSCH3DSceneObject {

	TSCH3DPrefilteredLineRenderer* mRenderer;
	TSCH3DChartElementEdgeOverdraw* mOverdraw;
	box<glm::detail::tvec2<float> > mTexturePortion;

}

@property (assign,nonatomic) box<glm::detail::tvec2<float> > texturePortion; 
-(box<glm::detail::tvec2<float> >)texturePortion;
-(void)setTexturePortion:(box<glm::detail::tvec2<float> >)arg1 ;
-(void)getBounds:(id)arg1 ;
-(void)render:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end
