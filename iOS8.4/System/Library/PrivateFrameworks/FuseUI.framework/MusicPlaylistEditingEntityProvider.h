/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:22 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/MusicEntityProviding.h>

@protocol MusicEntityValueProviding;
@class NSString;

@interface MusicPlaylistEditingEntityProvider : NSObject <MusicEntityProviding> {

	id<MusicEntityValueProviding> _entityValueProvider;

}

@property (nonatomic,readonly) id<MusicEntityValueProviding> entityValueProvider;              //@synthesize entityValueProvider=_entityValueProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(unsigned long long)numberOfSections;
-(void)configureEntityValueContextOutputForAnyIndexPath:(id)arg1 ;
-(id)initWithPlaylistEntityValueProvider:(id)arg1 ;
-(id)indexBarEntryAtIndex:(unsigned long long)arg1 ;
-(void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2 ;
-(void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned long long)arg2 ;
-(id)indexPathForEntityValueContext:(id)arg1 ;
-(BOOL)hasEntitiesNotInLibrary;
-(void)_handleEntityValueProviderDidInvalidateNotification:(id)arg1 ;
-(BOOL)hasEntities;
-(id)entityValueProviderAtIndexPath:(id)arg1 ;
-(unsigned long long)numberOfEntitiesInSection:(unsigned long long)arg1 ;
-(id<MusicEntityValueProviding>)entityValueProvider;
-(unsigned long long)numberOfIndexBarEntries;
-(unsigned long long)sectionForSectionIndexBarEntryAtIndex:(unsigned long long)arg1 ;
@end

