/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:18 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class UICollectionViewCell, UIView;

@interface GKShowcaseCellView : UICollectionReusableView {

	UICollectionViewCell* _cell;
	SEL _touchedShowcaseCellAction;
	UIView* _underlineView;

}

@property (nonatomic,retain) UICollectionViewCell * cell;                //@synthesize cell=_cell - In the implementation block
@property (assign,nonatomic) SEL touchedShowcaseCellAction;              //@synthesize touchedShowcaseCellAction=_touchedShowcaseCellAction - In the implementation block
@property (nonatomic,retain) UIView * underlineView;                     //@synthesize underlineView=_underlineView - In the implementation block
+(bool)requiresConstraintBasedLayout;
-(id)underlineView;
-(void)setUnderlineView:(id)arg1 ;
-(SEL)touchedShowcaseCellAction;
-(void)setTouchedShowcaseCellAction:(SEL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(id)cell;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)setCell:(id)arg1 ;
@end

