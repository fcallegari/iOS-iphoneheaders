/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:25 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMHTMLElement.h>

@class NSString, DOMHTMLCollection;

@interface DOMHTMLTableSectionElement : DOMHTMLElement

@property (copy) NSString * align; 
@property (copy) NSString * ch; 
@property (copy) NSString * chOff; 
@property (copy) NSString * vAlign; 
@property (readonly) DOMHTMLCollection * rows; 
-(DOMHTMLCollection *)rows;
-(NSString *)align;
-(void)setAlign:(NSString *)arg1 ;
-(NSString *)ch;
-(void)setCh:(NSString *)arg1 ;
-(NSString *)chOff;
-(void)setChOff:(NSString *)arg1 ;
-(NSString *)vAlign;
-(void)setVAlign:(NSString *)arg1 ;
-(id)insertRow:(int)arg1 ;
-(void)deleteRow:(int)arg1 ;
@end

