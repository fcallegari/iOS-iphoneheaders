/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:55 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIWebSelectedItemPrivate.h>

@class DOMHTMLOptGroupElement;

@interface UIDOMHTMLOptGroupSelectedItem : NSObject <UIWebSelectedItemPrivate> {

	DOMHTMLOptGroupElement* _node;

}

@property (nonatomic,retain) DOMHTMLOptGroupElement * _node;              //@synthesize node=_node - In the implementation block
-(void)dealloc;
-(void)setSelected:(bool)arg1 ;
-(bool)selected;
-(void)set_node:(id)arg1 ;
-(id)node;
-(bool)isGroup;
-(void)unselect;
-(id)_node;
-(id)initWithHTMLOptGroupNode:(id)arg1 ;
@end

