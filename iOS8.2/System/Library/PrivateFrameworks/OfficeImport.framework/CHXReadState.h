/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:38 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CHAutoStyling;
@class EXOfficeArtState, CHDChart, EDResources, OCPPackagePart, CHDChartType, CHDSeries, OADParagraphProperties;

@interface CHXReadState : NSObject {

	EXOfficeArtState* mDrawingState;
	CHDChart* mChart;
	EDResources* mResources;
	OCPPackagePart* mChartPart;
	CHDChartType* mCurrentChartType;
	CHDSeries* mCurrentSeries;
	OADParagraphProperties* mDefaultTextProperties;
	char mDefaultTextPropertiesHaveExplicitFontSize;
	id<CHAutoStyling> mAutoStyling;
	char mIgnoreFormulas;

}

@property (assign,nonatomic) char ignoreFormulas; 
-(void)dealloc;
-(void)setChart:(id)arg1 ;
-(id)chart;
-(id)autoStyling;
-(id)drawingState;
-(id)defaultTextProperties;
-(void)setDefaultTextPropertiesHaveExplicitFontSize:(char)arg1 ;
-(void)setDefaultTextProperties:(id)arg1 ;
-(void)setCurrentChartType:(id)arg1 ;
-(id)exState;
-(char)ignoreFormulas;
-(id)currentChartType;
-(void)pushTitleTextProperties:(char)arg1 ;
-(void)popTitleTextProperties;
-(id)currentSeries;
-(id)initWithDrawingState:(id)arg1 ;
-(void)setChartPart:(id)arg1 ;
-(void)setIgnoreFormulas:(char)arg1 ;
-(void)setCurrentSeries:(id)arg1 ;
-(id)chartPart;
-(id)resources;
-(void)setResources:(id)arg1 ;
@end
