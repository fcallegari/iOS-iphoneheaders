/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:04 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSMutableString.h>

@interface NSBigMutableString : NSMutableString {

	struct {
		unsigned isStorage : 1;
		unsigned isUnicode : 1;
		unsigned hasBOM : 1;
		unsigned swap : 1;
		unsigned immutable : 1;
		unsigned  : 27;
	}  flags;
	unsigned long long length;
	SCD_Union_NS2* contents;

}
-(id)_newSubstringWithRange:(NSRange)arg1 zone:(NSZone)arg2 ;
-(bool)_isCString;
-(id)_createSubstringWithRange:(NSRange)arg1 ;
-(void)_checkForInvalidMutationWithSelector:(SEL)arg1 ;
-(bool)_getData:(id*)arg1 encoding:(unsigned long long*)arg2 ;
-(bool)_setData:(id)arg1 encoding:(unsigned long long)arg2 ;
-(bool)_copyStorage:(_CFStorage*)arg1 encoding:(unsigned long long*)arg2 ;
-(bool)_setStorage:(CFStorageRef)arg1 encoding:(unsigned long long)arg2 ;
-(id)initWithStorage:(CFStorageRef)arg1 length:(unsigned long long)arg2 isUnicode:(bool)arg3 ;
-(void)_markAsImmutable;
-(id)_newSmallImmutableSubstringWithRange:(NSRange)arg1 zone:(NSZone)arg2 ;
-(id)_newBigSubstringWithRange:(NSRange)arg1 wantsMutable:(bool)arg2 zone:(NSZone)arg3 ;
-(bool)_isMarkedAsImmutable;
-(void)dealloc;
-(unsigned long long)length;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)initWithString:(id)arg1 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(id)mutableCopyWithZone:(NSZone)arg1 ;
@end

