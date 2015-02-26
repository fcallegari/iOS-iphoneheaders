/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:22 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>

@class NSMutableDictionary, TSURetainedPointerKeyDictionary, TSADocumentRoot;

@interface TSAShortcutController : TSPObject {

	NSMutableDictionary* _shortcutToStyleDictionary;
	TSURetainedPointerKeyDictionary* _styleToShortcutDictionary;
	TSADocumentRoot* _documentRoot;

}

@property (nonatomic,readonly) BOOL hasShortcuts; 
@property (assign,nonatomic) TSADocumentRoot * documentRoot;              //@synthesize documentRoot=_documentRoot - In the implementation block
+(id)localizedStringForShortcut:(id)arg1 ;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(ShortcutControllerArchive*)arg1 archiver:(id)arg2 ;
-(void)documentDidLoad;
-(void)loadFromArchive:(const ShortcutControllerArchive*)arg1 unarchiver:(id)arg2 ;
-(BOOL)hasShortcuts;
-(void)documentWillUnload;
-(id)initWithDocumentRoot:(id)arg1 ;
-(id)styleForShortcut:(id)arg1 ;
-(id)shortcutForStyle:(id)arg1 ;
-(void)setStyle:(id)arg1 forShortcut:(id)arg2 ;
-(void)removeStylesNotInTheme;
-(id)commandForUpdatingShortcutsFromPropagationMap:(id)arg1 ;
-(void)dealloc;
-(TSADocumentRoot *)documentRoot;
-(void)setDocumentRoot:(TSADocumentRoot *)arg1 ;
@end
