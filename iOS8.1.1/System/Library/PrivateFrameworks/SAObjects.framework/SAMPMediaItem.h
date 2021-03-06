/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:38 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAMPMediaEntity.h>

@class NSString, SACalendar, SAMPPlaybackInfo, SAMPReleaseInfo;

@interface SAMPMediaItem : SAMPMediaEntity

@property (nonatomic,copy) NSString * album; 
@property (nonatomic,copy) NSString * artist; 
@property (nonatomic,retain) SACalendar * dateAdded; 
@property (nonatomic,retain) SACalendar * datePurchased; 
@property (nonatomic,copy) NSString * genre; 
@property (nonatomic,retain) SAMPPlaybackInfo * playbackInfo; 
@property (nonatomic,retain) SAMPReleaseInfo * releaseInfo; 
@property (nonatomic,copy) NSString * sortAlbum; 
@property (nonatomic,copy) NSString * sortArtist; 
+(id)mediaItem;
+(id)mediaItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)MPMediaItemRepresentation;
-(id)groupIdentifier;
-(void)setReleaseInfo:(SAMPReleaseInfo *)arg1 ;
-(SAMPReleaseInfo *)releaseInfo;
-(void)setArtist:(NSString *)arg1 ;
-(NSString *)artist;
-(void)setGenre:(NSString *)arg1 ;
-(void)setPlaybackInfo:(SAMPPlaybackInfo *)arg1 ;
-(NSString *)genre;
-(SAMPPlaybackInfo *)playbackInfo;
-(NSString *)sortAlbum;
-(void)setSortAlbum:(NSString *)arg1 ;
-(NSString *)album;
-(void)setAlbum:(NSString *)arg1 ;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(NSString *)sortArtist;
-(void)setSortArtist:(NSString *)arg1 ;
-(void)setDateAdded:(SACalendar *)arg1 ;
-(void)setDatePurchased:(SACalendar *)arg1 ;
-(SACalendar *)datePurchased;
-(SACalendar *)dateAdded;
@end

