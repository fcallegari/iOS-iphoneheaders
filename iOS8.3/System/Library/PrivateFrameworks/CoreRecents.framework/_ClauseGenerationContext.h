/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:13:29 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CoreRecents.framework/recentsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSMutableArray;

@interface _ClauseGenerationContext : NSObject {

	NSDictionary* _predicateCollectionsMap;
	char _hadError;
	char _wantsGroups;
	NSMutableArray* _kindPredicates;
	NSMutableArray* _predicates;

}

@property (assign,nonatomic) char hadError;                                //@synthesize hadError=_hadError - In the implementation block
@property (assign,nonatomic) char wantsGroups;                             //@synthesize wantsGroups=_wantsGroups - In the implementation block
@property (nonatomic,retain) NSMutableArray * kindPredicates;              //@synthesize kindPredicates=_kindPredicates - In the implementation block
@property (nonatomic,retain) NSMutableArray * predicates;                  //@synthesize predicates=_predicates - In the implementation block
-(id)clauseWithBindings:(id)arg1 ;
-(void)setHadError:(char)arg1 ;
-(char)wantsGroups;
-(void)setWantsGroups:(char)arg1 ;
-(NSMutableArray *)kindPredicates;
-(void)setKindPredicates:(NSMutableArray *)arg1 ;
-(void)addPredicate:(id)arg1 forFieldName:(id)arg2 ;
-(id)kindClauseWithBindings:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setPredicates:(NSMutableArray *)arg1 ;
-(NSMutableArray *)predicates;
-(char)hadError;
@end

