/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:08 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUStorePageViewController.h>

@class SUBarButtonItem, NSString, SKProductPageViewController;

@interface SKUIITunesStoreUIPageViewController : SUStorePageViewController {

	SUBarButtonItem* _cancelButtonItem;
	NSString* _cancelButtonTitle;
	SKProductPageViewController* _productPageViewController;
	char _showsCancelButton;

}

@property (assign,nonatomic,__weak) SKProductPageViewController * productPageViewController;              //@synthesize productPageViewController=_productPageViewController - In the implementation block
@property (assign,nonatomic) char showsCancelButton;                                                      //@synthesize showsCancelButton=_showsCancelButton - In the implementation block
@property (nonatomic,copy) NSString * cancelButtonTitle;                                                  //@synthesize cancelButtonTitle=_cancelButtonTitle - In the implementation block
-(id)_cancelButtonItem;
-(void)dealloc;
-(void)viewWillLayoutSubviews;
-(void)setShowsCancelButton:(char)arg1 ;
-(char)showsCancelButton;
-(void)setProductPageViewController:(SKProductPageViewController *)arg1 ;
-(void)setCancelButtonTitle:(NSString *)arg1 ;
-(NSString *)cancelButtonTitle;
-(void)resetNavigationItem:(id)arg1 ;
-(void)handleFailureWithError:(id)arg1 ;
-(SKProductPageViewController *)productPageViewController;
-(char)presentDialogForError:(id)arg1 pendUntilVisible:(char)arg2 ;
-(void)_addCancelButtonToNavigationItem:(id)arg1 ;
-(void)_storeSheetCancelButtonAction:(id)arg1 ;
@end
