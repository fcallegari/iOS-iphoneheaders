/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:10 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface ABVCardActivityAlertScanner : NSObject {

	NSString* _string;
	unsigned _position;

}
+(char)characterIsStringValueCharacter:(unsigned short)arg1 ;
+(id)scanAlertValueFromString:(id)arg1 ;
+(id)scannerWithString:(id)arg1 ;
-(id)scanAlertValue;
-(id)scanKeyValuePair;
-(char)scanPastItemDelimiter;
-(id)scanStringValue;
-(char)scanPastKeyValueSeparator;
-(char)atEnd;
-(unsigned short)nextUnescapedCharacter;
-(id)scanQuotedStringValue;
-(id)scanUnquotedStringValue;
-(unsigned short)scanCharacter;
-(char)scanPastCharacter:(unsigned short)arg1 ;
-(unsigned short)scanCharacterWithEscaping:(char)arg1 ;
-(void)scanPastWhitespace;
-(void)dealloc;
-(unsigned)position;
-(id)initWithString:(id)arg1 ;
-(unsigned short)nextCharacter;
@end
