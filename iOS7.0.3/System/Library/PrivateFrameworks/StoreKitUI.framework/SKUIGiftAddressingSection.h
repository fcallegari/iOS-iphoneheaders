/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIGiftTableViewSection.h>

@protocol UITextFieldDelegate;
@class NSString, SKUIGift, UITextView, SKUIGiftRecipientTableViewCell;

@interface SKUIGiftAddressingSection : SKUIGiftTableViewSection {

	float _footerHeight;
	NSString* _footerString;
	SKUIGift* _gift;
	UITextView* _messagingTextView;
	SKUIGiftRecipientTableViewCell* _recipientTableViewCell;
	<UITextFieldDelegate>* _textFieldDelegate;
	float _textViewCellHeight;

}

@property (nonatomic,retain) SKUIGift * gift;                                        //@synthesize gift=_gift - In the implementation block
@property (assign,nonatomic) <UITextFieldDelegate> * textFieldDelegate;              //@synthesize textFieldDelegate=_textFieldDelegate - In the implementation block
-(float)heightForCellInTableView:(id)arg1 indexPath:(id)arg2 ;
-(int)numberOfRowsInSection;
-(id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forIndexPath:(id)arg3 ;
-(id)gift;
-(void)setTextFieldDelegate:(id)arg1 ;
-(void)beginEditingMessageForTableView:(id)arg1 indexPath:(id)arg2 ;
-(void)endEditingMessageForTableView:(id)arg1 indexPath:(id)arg2 ;
-(id)initWithGiftConfiguration:(id)arg1 ;
-(void)setGift:(id)arg1 ;
-(id)_recipientTableViewCell;
-(id)_footerString;
-(id)_textFieldTableViewCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(id)_textViewCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(id)_attributedPlaceholderWithString:(id)arg1 ;
-(id)textFieldDelegate;
-(void).cxx_destruct;
@end

