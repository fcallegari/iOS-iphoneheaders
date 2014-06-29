/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:36 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <PassKit/PKGroupsControllerDelegate.h>
#import <PassKit/PKPassGroupStackViewDatasource.h>
#import <PassKit/PKPassGroupStackViewDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <PassKit/PKCodeAcquisitionDelegate.h>

@protocol PKPassGroupsViewControllerDelegate;
@class PKGroupsController, PKPassGroupStackView, NSTimer, NSMutableArray, PKUsageNotificationServer;

@interface PKPassGroupsViewController : UIViewController <PKGroupsControllerDelegate, PKPassGroupStackViewDatasource, PKPassGroupStackViewDelegate, UIScrollViewDelegate, PKCodeAcquisitionDelegate> {

	PKGroupsController* _groupsController;
	PKPassGroupStackView* _cardStackView;
	unsigned long long _modalCardIndex;
	bool _viewAppeared;
	bool _viewAppearedBefore;
	int _presentationState;
	NSTimer* _allowDimmingTimer;
	unsigned long long tick;
	unsigned long long tock;
	NSTimer* _passViewedNotificationTimer;
	bool _passesAreOutdated;
	bool _backgroundMode;
	NSMutableArray* _blocksQueuedForUpdateCompletion;
	PKUsageNotificationServer* _usageServer;
	<PKPassGroupsViewControllerDelegate>* _delegate;

}

@property (nonatomic,retain) PKPassGroupStackView * groupStackView;                        //@synthesize cardStackView=_cardStackView - In the implementation block
@property (assign,nonatomic) <PKPassGroupsViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) bool passesAreOutdated;                                                 //@synthesize passesAreOutdated=_passesAreOutdated - In the implementation block
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
-(unsigned long long)indexOfGroup:(id)arg1 ;
-(long long)suppressedContent;
-(void)_handleApplicationWillEnterForeground:(id)arg1 ;
-(void)_handleApplicationdidEnterBackground:(id)arg1 ;
-(void)_applyPresentationState;
-(void)reloadPasses;
-(void)_presentWithUpdatedPasses:(/*^block*/ id)arg1 ;
-(void)presentGroupWithIndex:(unsigned long long)arg1 ;
-(void)presentPassWithUniqueID:(id)arg1 ;
-(void)allowIdleTimer;
-(void)_clearPassViewedNotificationTimer;
-(void)_startPassViewedNotificationTimer;
-(void)_passViewedNotificationTimerFired;
-(void)updateLockscreenIdleTimer;
-(double)groupHeightAtIndex:(unsigned long long)arg1 ;
-(void)groupStackView:(id)arg1 deleteConfirmedForPass:(id)arg2 ;
-(void)groupStackViewDidBeginReordering:(id)arg1 ;
-(void)groupStackViewDidEndReordering:(id)arg1 ;
-(bool)passesGrowWhenFlipped;
-(void)groupStackView:(id)arg1 groupDidMoveFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 ;
-(void)groupStackView:(id)arg1 didAnimateToState:(int)arg2 ;
-(void)codeAcquisitionController:(id)arg1 didAcquirePass:(id)arg2 ;
-(void)codeAcquisitionControllerDidCancel:(id)arg1 ;
-(void)reloadPassesWithCompletion:(/*^block*/ id)arg1 ;
-(void)presentGroupTable;
-(void)presentPassWithBulletinRecordID:(id)arg1 ;
-(void)cardsChanged:(id)arg1 ;
-(id)groupStackView;
-(void)setGroupStackView:(id)arg1 ;
-(bool)passesAreOutdated;
-(void)setPassesAreOutdated:(bool)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(id)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(bool)wantsFullScreenLayout;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewDidUnload;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewDidDisappear:(bool)arg1 ;
-(id)groupAtIndex:(unsigned long long)arg1 ;
-(void)groupsController:(id)arg1 didInsertGroup:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)groupsController:(id)arg1 didMoveGroup:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4 ;
-(void)groupsController:(id)arg1 didRemoveGroup:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(unsigned long long)numberOfGroups;
@end
