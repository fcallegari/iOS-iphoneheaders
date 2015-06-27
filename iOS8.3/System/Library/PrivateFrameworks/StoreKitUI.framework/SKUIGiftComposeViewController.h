/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:38:33 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIGiftStepViewController.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol OS_dispatch_source;
@class SKUIGiftAddressingSection, SKUIGiftAmountSection, UIPopoverController, UIDatePicker, UIImage, SKUIGiftItemView, SKUIGiftValidationResponse, UIView, NSMutableArray, SKUIGiftSendDateSection, NSIndexPath, UITableView, SKUIGiftTermsAndConditionsSection, NSObject, SKUIGiftValidator, NSString;

@interface SKUIGiftComposeViewController : SKUIGiftStepViewController <UIPopoverControllerDelegate, UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate> {

	SKUIGiftAddressingSection* _addressingSection;
	SKUIGiftAmountSection* _amountSection;
	UIPopoverController* _datePickerPopover;
	UIDatePicker* _datePicker;
	UIImage* _itemImage;
	SKUIGiftItemView* _itemView;
	SKUIGiftValidationResponse* _lastValidationResponse;
	UIPopoverController* _peoplePickerPopover;
	UIPopoverController* _searchResultsPopover;
	UIView* _searchResultsView;
	NSMutableArray* _sections;
	SKUIGiftSendDateSection* _sendDateSection;
	NSIndexPath* _showDatePickerIndexPathAfterKeyboardDismiss;
	UITableView* _tableView;
	char _tappedNextWhileValidating;
	SKUIGiftTermsAndConditionsSection* _termsSection;
	NSObject*<OS_dispatch_source> _validationTimer;
	SKUIGiftValidator* _validator;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_cancelAction:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(char)popoverControllerShouldDismissPopover:(id)arg1 ;
-(id)_headerView;
-(id)initWithGift:(id)arg1 configuration:(id)arg2 ;
-(void)_keyboardChangeNotification:(id)arg1 ;
-(void)_recipientsDidChangeNotification:(id)arg1 ;
-(void)_textFieldChangeNotification:(id)arg1 ;
-(void)_textViewChangeNotification:(id)arg1 ;
-(void)_textViewDidEndEditingNotification:(id)arg1 ;
-(void)_reloadSections;
-(void)_nextAction:(id)arg1 ;
-(id)_itemView;
-(void)_setItemImage:(id)arg1 error:(id)arg2 ;
-(void)_validateGiftThrottled:(char)arg1 ;
-(void)_removeDatePickerIfPossible;
-(void)_showDatePickerForRowAtIndexPath:(id)arg1 ;
-(void)_pushThemePickerOrShowInvalidAlert;
-(void)_validateGift;
-(id)_itemImage;
-(void)_amountControlAction:(id)arg1 ;
-(void)_datePickerAction:(id)arg1 ;
-(void)_showDatePickerPopoverForRowAtIndexPath:(id)arg1 ;
-(void)_finishValidationWithResponse:(id)arg1 error:(id)arg2 ;
-(void)tableView:(id)arg1 giftRecipientCellDidChangeRecipients:(id)arg2 ;
-(void)tableView:(id)arg1 giftRecipientCellDidChangeSize:(id)arg2 ;
-(void)tableView:(id)arg1 giftRecipientCell:(id)arg2 didUpdateSearchController:(id)arg3 ;
-(void)tableView:(id)arg1 giftRecipientCell:(id)arg2 dismissPeoplePicker:(id)arg3 ;
-(void)tableView:(id)arg1 giftRecipientCell:(id)arg2 presentPeoplePicker:(id)arg3 ;
@end
