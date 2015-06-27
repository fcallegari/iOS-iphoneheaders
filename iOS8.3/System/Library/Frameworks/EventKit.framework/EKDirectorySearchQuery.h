/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:45:59 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSSet;

@interface EKDirectorySearchQuery : NSObject {

	char _findGroups;
	char _findLocations;
	char _findResources;
	char _findUsers;
	NSSet* _terms;
	unsigned _resultLimit;

}

@property (nonatomic,retain) NSSet * terms;                     //@synthesize terms=_terms - In the implementation block
@property (assign,nonatomic) char findGroups;                   //@synthesize findGroups=_findGroups - In the implementation block
@property (assign,nonatomic) char findLocations;                //@synthesize findLocations=_findLocations - In the implementation block
@property (assign,nonatomic) char findResources;                //@synthesize findResources=_findResources - In the implementation block
@property (assign,nonatomic) char findUsers;                    //@synthesize findUsers=_findUsers - In the implementation block
@property (assign,nonatomic) unsigned resultLimit;              //@synthesize resultLimit=_resultLimit - In the implementation block
-(NSSet *)terms;
-(void)setTerms:(NSSet *)arg1 ;
-(char)findGroups;
-(void)setFindGroups:(char)arg1 ;
-(char)findLocations;
-(void)setFindLocations:(char)arg1 ;
-(char)findResources;
-(void)setFindResources:(char)arg1 ;
-(char)findUsers;
-(void)setFindUsers:(char)arg1 ;
-(void)setResultLimit:(unsigned)arg1 ;
-(unsigned)resultLimit;
@end
