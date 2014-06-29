/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:19:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GuidedAccess/GuidedAccess-Structs.h>
#import <Preferences/DevicePINController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegatePrivate.h>

@protocol GAXPINViewControllerDelegate;
@class NSString, UIViewController, UIPopoverController, UINavigationController, UIStatusBar, UIView;

@interface GAXPINViewController : DevicePINController <UINavigationControllerDelegate, UIPopoverControllerDelegate, UIPopoverControllerDelegatePrivate> {

	bool _pinViewVisible;
	int _presentationStyle;
	<GAXPINViewControllerDelegate>* _delegate;
	NSString* _pinCode;
	UIViewController* _presentorController;
	UIPopoverController* _hostingPopoverController;
	UINavigationController* _hostingNavigationController;
	/*^block*/ id _presentationCompletion;
	UIStatusBar* _statusBar;
	UIView* _statusBarContainerView;

}

@property (assign,nonatomic) <GAXPINViewControllerDelegate> * delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isPINViewVisible,nonatomic) bool pinViewVisible;                       //@synthesize pinViewVisible=_pinViewVisible - In the implementation block
@property (nonatomic,copy) NSString * pinCode;                                                  //@synthesize pinCode=_pinCode - In the implementation block
@property (assign,nonatomic) int presentationStyle;                                             //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (nonatomic,retain) UIViewController * presentorController;                            //@synthesize presentorController=_presentorController - In the implementation block
@property (nonatomic,retain) UINavigationController * hostingNavigationController;              //@synthesize hostingNavigationController=_hostingNavigationController - In the implementation block
@property (nonatomic,retain) UIPopoverController * hostingPopoverController;                    //@synthesize hostingPopoverController=_hostingPopoverController - In the implementation block
@property (nonatomic,copy) id presentationCompletion;                                           //@synthesize presentationCompletion=_presentationCompletion - In the implementation block
@property (nonatomic,retain) UIStatusBar * statusBar;                                           //@synthesize statusBar=_statusBar - In the implementation block
@property (nonatomic,retain) UIView * statusBarContainerView;                                   //@synthesize statusBarContainerView=_statusBarContainerView - In the implementation block
-(void)presentPINViewWithParentViewController:(id)arg1 usingPresentationStyle:(int)arg2 animated:(bool)arg3 ;
-(id)initForSetup:(bool)arg1 ;
-(void)dismissPINViewAnimated:(bool)arg1 reason:(int)arg2 ;
-(void)setPinCode:(id)arg1 ;
-(id)hostingPopoverController;
-(void)setHostingPopoverController:(id)arg1 ;
-(id)hostingNavigationController;
-(void)setHostingNavigationController:(id)arg1 ;
-(void)setPresentationCompletion:(/*^block*/ id)arg1 ;
-(void)_presentPINViewWithParentViewController:(id)arg1 usingPresentationStyle:(int)arg2 animated:(bool)arg3 ;
-(void)_dismissPINViewAnimated:(bool)arg1 withReason:(int)arg2 notifyDelegate:(bool)arg3 ;
-(void)setPresentationStyle:(int)arg1 ;
-(void)setPinViewVisible:(bool)arg1 ;
-(void)_notifyDelegateOfPinViewVisibilityChange;
-(bool)_shouldShowCancelButton;
-(void)_updateStatusBar:(id)arg1 ;
-(/*^block*/ id)presentationCompletion;
-(id)presentorController;
-(id)statusBarContainerView;
-(void)_didFinishDismissingPINViewWithPresentationStyle:(int)arg1 reason:(int)arg2 notifyDelegate:(bool)arg3 ;
-(void)_notifyDelegateOfPINControllerDismissalWithReason:(int)arg1 ;
-(void)_commonInitForSetup:(bool)arg1 ;
-(void)setPresentorController:(id)arg1 ;
-(void)setStatusBarContainerView:(id)arg1 ;
-(id)pinCode;
-(bool)isPINViewVisible;
-(bool)switchFromKeypadToKeyboard;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)setStatusBar:(id)arg1 ;
-(id)statusBar;
-(unsigned long long)supportedInterfaceOrientations;
-(void)_commonInit;
-(void)viewWillLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1 ;
-(void)popoverController:(id)arg1 animationCompleted:(long long)arg2 ;
-(int)presentationStyle;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)setPane:(id)arg1 ;
-(bool)requiresKeyboard;
-(bool)useProgressiveDelays;
-(bool)validatePIN:(id)arg1 ;
-(id)stringsBundle;
-(void)_updateErrorTextAndFailureCount:(bool)arg1 ;
-(void)cancelButtonTapped;
-(bool)simplePIN;
-(bool)pinIsAcceptable:(id)arg1 outError:(id*)arg2 ;
-(void)_slidePasscodeField;
-(void)didAcceptSetPIN;
-(void)setPIN:(id)arg1 ;
-(void)didAcceptEnteredPIN;
-(int)pinLength;
@end
