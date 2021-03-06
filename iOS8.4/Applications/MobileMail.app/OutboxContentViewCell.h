/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:48 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MailboxContentViewCell.h>

@class UIActivityIndicatorView, UIButton;

@interface OutboxContentViewCell : MailboxContentViewCell {

	UIActivityIndicatorView* _activityIndicator;
	UIButton* _errorButton;
	unsigned _inDelivery : 1;

}
+(float)marginWidthEditing:(char)arg1 ;
+(float)contentLeftInsetEditing:(char)arg1 ;
-(void)updateFlagsFromMessage:(id)arg1 ;
-(void)layoutStatusIndicatorViews;
-(void)_errorButtonPressed:(id)arg1 ;
-(void)dealloc;
@end

