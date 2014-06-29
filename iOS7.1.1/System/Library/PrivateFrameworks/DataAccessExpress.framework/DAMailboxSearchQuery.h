/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:19 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataAccessExpress/DASearchQuery.h>

@class NSString, NSDate;

@interface DAMailboxSearchQuery : DASearchQuery {

	NSString* _collectionID;
	int _bodyType;
	long long _truncationSize;
	bool _allOrNone;
	NSDate* _priorToDate;
	int _MIMESupport;
	bool _deepTraversal;
	bool _rebuildResults;

}

@property (retain) NSString * collectionID;               //@synthesize collectionID=_collectionID - In the implementation block
@property (assign) int bodyType;                          //@synthesize bodyType=_bodyType - In the implementation block
@property (assign) long long truncationSize;              //@synthesize truncationSize=_truncationSize - In the implementation block
@property (assign) bool allOrNone;                        //@synthesize allOrNone=_allOrNone - In the implementation block
@property (retain) NSDate * priorToDate;                  //@synthesize priorToDate=_priorToDate - In the implementation block
@property (assign) int MIMESupport;                       //@synthesize MIMESupport=_MIMESupport - In the implementation block
@property (assign) bool deepTraversal;                    //@synthesize deepTraversal=_deepTraversal - In the implementation block
@property (assign) bool rebuildResults;                   //@synthesize rebuildResults=_rebuildResults - In the implementation block
+(id)mailboxSearchQueryWithSearchString:(id)arg1 consumer:(id)arg2 ;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 consumer:(id)arg2 ;
-(id)collectionID;
-(id)priorToDate;
-(int)bodyType;
-(long long)truncationSize;
-(bool)allOrNone;
-(int)MIMESupport;
-(bool)deepTraversal;
-(bool)rebuildResults;
-(id)initWithSearchString:(id)arg1 consumer:(id)arg2 ;
-(void)setAllOrNone:(bool)arg1 ;
-(void)setRebuildResults:(bool)arg1 ;
-(void)setBodyType:(int)arg1 ;
-(void)setCollectionID:(id)arg1 ;
-(void)setMIMESupport:(int)arg1 ;
-(void)setTruncationSize:(long long)arg1 ;
-(void)setPriorToDate:(id)arg1 ;
-(void)setDeepTraversal:(bool)arg1 ;
@end
