/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKColoredBalloonView.h>

@class CKBalloonTextView, NSAttributedString;

@interface CKTextBalloonView : CKColoredBalloonView {

	bool _centerTextWhenSkinny;
	CKBalloonTextView* _textView;
	NSAttributedString* _attributedText;

}

@property (nonatomic,retain) CKBalloonTextView * textView;                   //@synthesize textView=_textView - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedText;              //@synthesize attributedText=_attributedText - In the implementation block
@property (assign,nonatomic) bool centerTextWhenSkinny;                      //@synthesize centerTextWhenSkinny=_centerTextWhenSkinny - In the implementation block
-(void)configureForMessagePart:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)description;
-(void)setAttributedText:(id)arg1 ;
-(id)attributedText;
-(void)setTextView:(id)arg1 ;
-(id)textView;
-(void)prepareForDisplay;
-(CGSize)sizeThatFits:(CGSize)arg1 textAlignmentInsets:(UIEdgeInsets*)arg2 ;
-(void)setCenterTextWhenSkinny:(bool)arg1 ;
-(double)textViewWidthForWidth:(double)arg1 ;
-(bool)centerTextWhenSkinny;
@end

