/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:05 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewControllerAnimatorTransitioning.h>

@class CalendarModel, MonthDayTransitionView, PaletteView;

@interface PhoneMonthDayAnimator : NSObject <UIViewControllerAnimatorTransitioning> {

	BOOL _reverse;
	CalendarModel* _model;
	MonthDayTransitionView* _transitionView;
	PaletteView* _paletteView;

}

@property (nonatomic,retain) CalendarModel * model;                                //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) BOOL reverse;                                         //@synthesize reverse=_reverse - In the implementation block
@property (nonatomic,retain) MonthDayTransitionView * transitionView;              //@synthesize transitionView=_transitionView - In the implementation block
@property (nonatomic,retain) PaletteView * paletteView;                            //@synthesize paletteView=_paletteView - In the implementation block
-(BOOL)reverse;
-(id)initWithModel:(id)arg1 paletteView:(id)arg2 reverse:(BOOL)arg3 ;
-(void)setReverse:(BOOL)arg1 ;
-(id)paletteView;
-(void)setTransitionView:(id)arg1 ;
-(void)setPaletteView:(id)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(id)transitionView;
-(id)model;
-(void).cxx_destruct;
-(void)setModel:(id)arg1 ;
@end
