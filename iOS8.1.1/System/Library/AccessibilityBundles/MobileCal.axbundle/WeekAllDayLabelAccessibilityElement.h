/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:25:54 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/AccessibilityBundles/MobileCal.axbundle/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIAccessibilityElement.h>

@class UIView;

@interface WeekAllDayLabelAccessibilityElement : UIAccessibilityElement {

	unsigned long long _dayIndex;
	UIView* _allDayView;

}

@property (assign,nonatomic) unsigned long long dayIndex;              //@synthesize dayIndex=_dayIndex - In the implementation block
@property (assign,nonatomic) UIView * allDayView;                      //@synthesize allDayView=_allDayView - In the implementation block
-(unsigned long long)dayIndex;
-(void)setDayIndex:(unsigned long long)arg1 ;
-(void)setAllDayView:(UIView *)arg1 ;
-(UIView *)allDayView;
-(CGRect)accessibilityFrame;
@end
