/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:41 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MFComposeRecipientTextViewDelegate <NSObject>
@optional
-(id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;
-(void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;
-(void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;
-(void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;
-(void)composeRecipientView:(id)arg1 didReplaceRecipients:(id)arg2 withRecipients:(id)arg3;
-(void)composeRecipientView:(id)arg1 didChangeSize:(CGSize)arg2;
-(void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
-(void)recipientViewDidBecomeFirstResponder:(id)arg1;
-(void)recipientViewDidResignFirstResponder:(id)arg1;
-(char)recipientViewShouldIgnoreFirstResponderChanges:(id)arg1;
-(void)composeRecipientViewRequestAddRecipient:(id)arg1;
-(void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;
-(void)composeRecipientView:(id)arg1 showPersonCardForAtom:(id)arg2;
-(void)composeRecipientView:(id)arg1 showPersonCardForRecipient:(id)arg2;
-(void)composeRecipientView:(id)arg1 showCorecipients:(id)arg2;
-(id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void*)arg2 identifier:(int)arg3;
-(id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
-(void)composeRecipientViewReturnPressed:(id)arg1;
-(void)composeRecipientViewDidBecomeFirstResponder:(id)arg1;
-(char)composeRecipientViewShowingSearchResults:(id)arg1;
-(char)presentSearchResultsForComposeRecipientView:(id)arg1;
-(void)dismissSearchResultsForComposeRecipientView:(id)arg1;
-(void)selectNextSearchResultForComposeRecipientView:(id)arg1;
-(void)selectPreviousSearchResultForComposeRecipientView:(id)arg1;
-(char)chooseSelectedSearchResultForComposeRecipientView:(id)arg1;
-(void)composeRecipientView:(id)arg1 didSelectRecipients:(id)arg2;
-(unsigned)presentationOptionsForRecipient:(id)arg1;

@end

