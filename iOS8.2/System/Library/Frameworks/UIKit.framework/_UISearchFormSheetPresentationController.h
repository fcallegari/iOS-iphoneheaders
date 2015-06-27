/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:00 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIPresentationController.h>
#import <UIKit/_UISearchControllerPresenting.h>

@class UIView, _UISearchPresentationAssistant, NSString;

@interface _UISearchFormSheetPresentationController : UIPresentationController <_UISearchControllerPresenting> {

	_UISearchPresentationAssistant* _assistant;
	UIView* _wrapperView;
	CGRect finalFrameForContainerView;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) UIView * searchBarContainerView; 
@property (nonatomic,readonly) char shouldAccountForStatusBar; 
@property (nonatomic,readonly) float statusBarAdjustment; 
@property (nonatomic,readonly) char searchBarToBecomeTopAttached; 
@property (nonatomic,readonly) float resultsControllerContentOffset; 
@property (nonatomic,readonly) UIPresentationController*<_UISearchControllerPresenting> adaptivePresentationController; 
@property (nonatomic,readonly) CGRect finalFrameForContainerView; 
-(void)dealloc;
-(CGRect)frameOfPresentedViewInContainerView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(char)shouldRemovePresentersView;
-(char)_shouldRespectDefinesPresentationContext;
-(CGRect)_frameOfPresentedViewControllerViewInSuperview;
-(id)presentedView;
-(void)presentationTransitionDidEnd:(char)arg1 ;
-(void)dismissalTransitionDidEnd:(char)arg1 ;
-(void)_transitionToDidEnd;
-(void)_transitionFromDidEnd;
-(void)presentationTransitionWillBegin;
-(void)dismissalTransitionWillBegin;
-(void)_transitionFromWillBegin;
-(void)_transitionToWillBegin;
-(int)adaptivePresentationStyle;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(char)_shouldKeepCurrentFirstResponder;
-(void)_transitionToPresentationController:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)_presentationControllerForSizeClassPair:(SCD_Struct_UI26)arg1 ;
-(id)_presentedViewControllerForSizeClassPair:(SCD_Struct_UI26)arg1 ;
-(UIView *)searchBarContainerView;
-(char)searchBarToBecomeTopAttached;
-(float)statusBarAdjustment;
-(void)_presentedView:(id)arg1 enableFormSheetAccoutrements:(char)arg2 ;
-(void)setContentVisible:(char)arg1 ;
-(char)_shouldSubscribeToKeyboardNotifications;
-(float)resultsControllerContentOffset;
-(char)shouldAccountForStatusBar;
-(UIPresentationController*<_UISearchControllerPresenting>)adaptivePresentationController;
-(CGRect)finalFrameForContainerView;
@end
