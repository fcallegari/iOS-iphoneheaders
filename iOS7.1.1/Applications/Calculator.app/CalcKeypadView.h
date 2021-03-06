/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:56 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Calculator.app/Calculator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Calculator/Calculator-Structs.h>
#import <UIKit/UIImageView.h>

@protocol CalcKeypadViewDelegate;
@class NSMutableDictionary, NSDictionary;

@interface CalcKeypadView : UIImageView {

	unsigned _rows;
	unsigned _columns;
	CGSize _buttonSize;
	CGRect _keypadRect;
	int _pressedTag;
	const int* _buttonTags;
	NSMutableDictionary* _alternateImageViews;
	NSMutableDictionary* _selectedButtonViews;
	BOOL _multipleFingersDetected;
	CalcKeypadView* _forwardingKeypad;
	<CalcKeypadViewDelegate>* _delegate;
	NSDictionary* _frameAdjustments;
	UIEdgeInsets _selectedBorderInsets;

}

@property (nonatomic,retain) NSDictionary * frameAdjustments;                //@synthesize frameAdjustments=_frameAdjustments - In the implementation block
@property (assign,nonatomic) UIEdgeInsets selectedBorderInsets;              //@synthesize selectedBorderInsets=_selectedBorderInsets - In the implementation block
-(id)initWithImage:(id)arg1 buttonOrigin:(CGPoint)arg2 size:(CGSize)arg3 keypadType:(int)arg4 delegate:(id)arg5 ;
-(void)setFrameAdjustments:(id)arg1 ;
-(void)setSelectedBorderInsets:(UIEdgeInsets)arg1 ;
-(void)setShowingAlternateImage:(BOOL)arg1 withPath:(id)arg2 forKey:(id)arg3 onTag:(int)arg4 ;
-(void)setShowingSelectedState:(BOOL)arg1 forButtonWithTag:(int)arg2 borderWidth:(float)arg3 ;
-(CGRect)buttonFrameForTag:(int)arg1 useBorderInsets:(BOOL)arg2 ;
-(CGRect)buttonFrameForTag:(int)arg1 row:(int)arg2 col:(int)arg3 useBorderInsets:(BOOL)arg4 ;
-(CGRect)buttonFrameForTag:(int)arg1 ;
-(void)_animateToSelectedState:(BOOL)arg1 forView:(id)arg2 borderWidth:(float)arg3 completion:(/*^block*/ id)arg4 ;
-(void)forwardedEvent:(id)arg1 ;
-(void)touchesChangedWithEvent:(id)arg1 ;
-(id)frameAdjustments;
-(UIEdgeInsets)selectedBorderInsets;
-(void)dealloc;
-(void)layoutSubviews;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)scriptingInfoWithChildren;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
@end

