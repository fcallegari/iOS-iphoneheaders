/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:36:13 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/TextInput/TextInput_fr.bundle/TextInput_fr
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TextInput_fr/TextInput_fr-Structs.h>
#import <libTextInputCore.dylib/TIKeyboardInputManagerZephyr.h>

@interface TIKeyboardInputManager_fr : TIKeyboardInputManagerZephyr
-(id)accentKeyStringForInputPrefix:(id)arg1 ;
-(TIInputManagerZephyr*)initImplementation;
-(BOOL)doesComposeText;
-(id)internalStringToExternal:(id)arg1 ;
-(id)externalStringToInternal:(id)arg1 ;
-(id)nonstopPunctuationCharacters;
-(id)terminatorsDeletingAutospace;
-(id)keyboardConfigurationAccentKeyString;
@end
