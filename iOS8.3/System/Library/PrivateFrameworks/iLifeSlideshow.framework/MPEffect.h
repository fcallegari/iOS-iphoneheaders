/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:31:12 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iLifeSlideshow/iLifeSlideshow-Structs.h>
#import <iLifeSlideshow/MPActionableSupportInternal.h>
#import <iLifeSlideshow/NSCoding.h>
#import <iLifeSlideshow/NSCopying.h>
#import <iLifeSlideshow/MPFilterSupport.h>
#import <iLifeSlideshow/MPAnimationSupport.h>
#import <iLifeSlideshow/MPAudioSupport.h>
#import <iLifeSlideshow/MPActionableSupport.h>
#import <iLifeSlideshow/MPGeometrySupport.h>
#import <iLifeSlideshow/MPEffectSupport.h>

@protocol MZEffectTiming;
@class NSString, NSArray, NSMutableArray, NSMutableDictionary, MCContainerEffect, MCPlugParallel, MPAudioPlaylist, MPEffectContainer, NSObject;

@interface MPEffect : NSObject <MPActionableSupportInternal, NSCoding, NSCopying, MPFilterSupport, MPAnimationSupport, MPAudioSupport, MPActionableSupport, MPGeometrySupport, MPEffectSupport> {

	NSMutableArray* _slides;
	NSMutableArray* _secondarySlides;
	NSMutableArray* _texts;
	NSMutableArray* _filters;
	NSMutableDictionary* _attributes;
	NSMutableDictionary* _animationPaths;
	MCContainerEffect* _container;
	MCPlugParallel* _plug;
	MPAudioPlaylist* _audioPlaylist;
	MPEffectContainer* _parentContainer;
	char _replaceSlides;
	char _supportsEffectTiming;
	char _skipEffectTiming;
	NSObject*<MZEffectTiming> _effectTiming;
	float _opacity;
	CGPoint _position;
	float _zPosition;
	CGSize _size;
	float _rotationAngle;
	float _xRotationAngle;
	float _yRotationAngle;
	float _scale;
	double _timeIn;
	double _phaseInDuration;
	double _phaseOutDuration;
	double _mainDuration;
	NSString* _effectID;
	NSString* _presetID;
	int _audioPriority;
	int _randomSeed;
	NSString* _uuid;
	int _liveIndex;
	char _cleaningUp;

}

@property (assign,nonatomic) double phaseInDuration; 
@property (assign,nonatomic) double phaseOutDuration; 
@property (assign,nonatomic) double mainDuration; 
@property (assign,nonatomic) char replaceSlides; 
@property (nonatomic,copy) NSString * effectID; 
@property (nonatomic,copy) NSString * presetID; 
@property (nonatomic,readonly) NSArray * slides; 
@property (nonatomic,readonly) NSArray * texts; 
@property (nonatomic,readonly) NSObject*<MZEffectTiming> effectTiming;              //@synthesize effectTiming=_effectTiming - In the implementation block
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)effectWithEffectID:(id)arg1 andPaths:(id)arg2 ;
+(id)effectWithEffectID:(id)arg1 ;
+(id)effectWithEffectID:(id)arg1 andStrings:(id)arg2 ;
+(id)effectWithEffectID:(id)arg1 strings:(id)arg2 paths:(id)arg3 ;
-(char)hasMovies;
-(void)dump;
-(void)dealloc;
-(CGSize)size;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(float)scale;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(CGPoint)position;
-(void)setContainer:(id)arg1 ;
-(float)opacity;
-(void)setOpacity:(float)arg1 ;
-(id)filters;
-(void)setScale:(float)arg1 ;
-(float)width;
-(id)container;
-(float)height;
-(void)setZPosition:(float)arg1 ;
-(void)setWidth:(float)arg1 ;
-(char)isTextOnly;
-(id)uuid;
-(void)setHeight:(float)arg1 ;
-(void)cleanup;
-(int)zIndex;
-(char)isLive;
-(void)addFilters:(id)arg1 ;
-(float)rotationAngle;
-(void)setRotationAngle:(float)arg1 ;
-(void)addFilter:(id)arg1 ;
-(void)addSlide:(id)arg1 ;
-(id)objectID;
-(void)finalize;
-(float)zPosition;
-(id)parentDocument;
-(id)plugID;
-(void)setPhaseInDuration:(double)arg1 ;
-(void)setPhaseOutDuration:(double)arg1 ;
-(void)removeAllSlides;
-(NSArray *)slides;
-(double)fullDuration;
-(void)copyVars:(id)arg1 ;
-(id)fullDebugLog;
-(id)animationPaths;
-(void)copyAnimationPaths:(id)arg1 ;
-(void)removeAnimationPathForKey:(id)arg1 ;
-(id)animationPathForKey:(id)arg1 ;
-(void)setAnimationPath:(id)arg1 forKey:(id)arg2 ;
-(double)phaseInDuration;
-(double)phaseOutDuration;
-(double)mainDuration;
-(id)parentContainer;
-(id)audioPlaylist;
-(void)setAudioPlaylist:(id)arg1 ;
-(void)setPlug:(id)arg1 ;
-(id)videoPaths;
-(void)setAudioPriority:(int)arg1 ;
-(void)addSlides:(id)arg1 ;
-(int)liveIndex;
-(void)setLiveIndex:(int)arg1 ;
-(void)removeSlidesAtIndices:(id)arg1 ;
-(int)countOfTexts;
-(NSArray *)texts;
-(NSString *)effectID;
-(NSString *)presetID;
-(void)setPresetID:(NSString *)arg1 ;
-(void)removeAllTexts;
-(id)initWithEffectID:(id)arg1 ;
-(void)replaceSlideAtIndex:(int)arg1 withSlide:(id)arg2 ;
-(void)addText:(id)arg1 ;
-(void)replaceTextsWitStrings:(id)arg1 ;
-(char)supportsEffectTiming;
-(int)countOfSlides;
-(char)hasBreaksInDocument:(id)arg1 ;
-(void)setMainDuration:(double)arg1 ;
-(id)initWithEffectID:(id)arg1 andPaths:(id)arg2 ;
-(void)setEffectAttribute:(id)arg1 forKey:(id)arg2 ;
-(id)effectAttributes;
-(void)setSkipEffectTiming:(char)arg1 ;
-(void)setEffectAttributes:(id)arg1 ;
-(void)createSecondarySlidesWithPaths:(id)arg1 ;
-(void)updateTiming;
-(void)createTextsWithStrings:(id)arg1 secondLineFactor:(float)arg2 ;
-(void)createTextsWithDefaultStrings;
-(id)effectPresetID;
-(id)effectAttributeForKey:(id)arg1 ;
-(id)secondarySlides;
-(void)setReplaceSlides:(char)arg1 ;
-(void)setEffectID:(NSString *)arg1 ;
-(id)objectInSlidesAtIndex:(int)arg1 ;
-(void)createTextsWithStrings:(id)arg1 secondLineFactor:(float)arg2 fillIn:(char)arg3 ;
-(void)removeAllSecondarySlides;
-(id)plug;
-(id)initWithEffectID:(id)arg1 andStrings:(id)arg2 ;
-(id)initWithEffectID:(id)arg1 strings:(id)arg2 paths:(id)arg3 ;
-(void)createSlidesWithPaths:(id)arg1 ;
-(void)_updateTiming:(char)arg1 ;
-(float)xRotationAngle;
-(float)yRotationAngle;
-(void)_updateEffectTimingWithDocument:(id)arg1 ;
-(void)copySlides:(id)arg1 ;
-(void)copySecondarySlides:(id)arg1 ;
-(void)copyTexts:(id)arg1 ;
-(void)copyFilters:(id)arg1 ;
-(void)copyAudioPlaylist:(id)arg1 ;
-(void)reconfigureSlides;
-(void)applyFormattedAttributes;
-(id)_effectAttributes;
-(char)needsParallelizer;
-(void)setXRotationAngle:(float)arg1 ;
-(void)setYRotationAngle:(float)arg1 ;
-(id)nearestLayerGroup;
-(void)insertSlides:(id)arg1 atIndex:(int)arg2 ;
-(void)insertSecondarySlides:(id)arg1 atIndex:(int)arg2 ;
-(int)maxNumberOfSlides;
-(void)removeSecondarySlidesAtIndices:(id)arg1 ;
-(id)formattedAttributes;
-(id)slideInformationWithDocument:(id)arg1 ;
-(double)lowestDisplayTime;
-(void)insertTexts:(id)arg1 atIndex:(int)arg2 ;
-(void)removeTextsAtIndices:(id)arg1 ;
-(void)insertFilters:(id)arg1 atIndex:(int)arg2 ;
-(void)removeFiltersAtIndices:(id)arg1 ;
-(void)removeAllFilters;
-(void)moveFiltersFromIndices:(id)arg1 toIndex:(int)arg2 ;
-(void)moveSlidesFromIndices:(id)arg1 toIndex:(int)arg2 ;
-(void)addSecondarySlide:(id)arg1 ;
-(void)addSecondarySlides:(id)arg1 ;
-(void)addTexts:(id)arg1 ;
-(void)moveTextsFromIndices:(id)arg1 toIndex:(int)arg2 ;
-(int)randomSeed;
-(void)setRandomSeed:(int)arg1 ;
-(NSObject*<MZEffectTiming>)effectTiming;
-(void)setFullDuration:(double)arg1 ;
-(void)replaceSlide:(id)arg1 atIndex:(int)arg2 ;
-(char)supportsUnlimitedSlides;
-(char)replaceSlides;
-(int)audioPriority;
-(int)maxNumberOfSecondarySlides;
-(id)nearestPlug;
-(void)updateEffectAttributes;
-(void)setParentContainer:(id)arg1 ;
-(void)scaleMainDuration;
-(id)slideForMCSlide:(id)arg1 ;
-(float)yPosition;
-(float)xPosition;
-(void)insertObject:(id)arg1 inSlidesAtIndex:(int)arg2 ;
-(void)removeObjectFromSlidesAtIndex:(int)arg1 ;
-(void)replaceObjectInSlidesAtIndex:(int)arg1 withObject:(id)arg2 ;
-(id)objectInTextsAtIndex:(int)arg1 ;
-(void)insertObject:(id)arg1 inTextsAtIndex:(int)arg2 ;
-(void)removeObjectFromTextsAtIndex:(int)arg1 ;
-(void)replaceObjectInTextsAtIndex:(int)arg1 withObject:(id)arg2 ;
-(int)countOfFilters;
-(id)objectInFiltersAtIndex:(int)arg1 ;
-(void)insertObject:(id)arg1 inFiltersAtIndex:(int)arg2 ;
-(void)removeObjectFromFiltersAtIndex:(int)arg1 ;
-(void)replaceObjectInFiltersAtIndex:(int)arg1 withObject:(id)arg2 ;
-(void)setXPosition:(float)arg1 ;
-(void)setYPosition:(float)arg1 ;
-(id)scriptingAnimations;
-(void)setScriptingAnimations:(id)arg1 ;
@end

