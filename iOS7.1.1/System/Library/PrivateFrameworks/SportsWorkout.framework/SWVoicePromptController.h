/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NikePromptExpander, WordsSpeaker, NSString, NSDecimalNumberHandler;

@interface SWVoicePromptController : NSObject {

	NikePromptExpander* _promptExpanderForGivenLanguage;
	NikePromptExpander* _promptExpanderForEnglish;
	WordsSpeaker* _speaker;
	NSString* _gender;
	NSString* _language;
	NSDecimalNumberHandler* _roundToTwoDigitsPastTheDecimal;
	NSDecimalNumberHandler* _roundToZeroDigitsPastTheDecimal;

}

@property (nonatomic,retain) NSString * gender;                      //@synthesize gender=_gender - In the implementation block
@property (nonatomic,retain) NSString * language;                    //@synthesize language=_language - In the implementation block
@property (nonatomic,@dynamic,readonly) bool isPlaying; 
+(id)sharedPromptController;
+(id)_currentLanguageIdentifier;
+(id)_currentGenderIdentifier;
+(id)__sharedMalePromptController;
+(id)__sharedFemalePromptController;
-(void)fireAmountPromptWithAmount:(id)arg1 units:(id)arg2 words:(id*)arg3 englishWords:(id*)arg4 ;
-(void)fireWalkAroundToActivateSensorPrompt;
-(void)refreshSettings;
-(void)fireBeginningWorkoutPrompt;
-(void)fireResumingWorkoutPrompt;
-(void)firePausingWorkoutPrompt;
-(void)stopAllPrompts;
-(void)fireWorkoutCompletedPrompt;
-(void)fireWorkoutDistancePromptWithAmount:(id)arg1 units:(id)arg2 ;
-(void)fireTimePromptWithAmount:(id)arg1 ;
-(void)fireAveragePacePromptWithAmount:(id)arg1 units:(id)arg2 ;
-(void)fireCaloriesBurnedPromptWithAmount:(id)arg1 ;
-(void)fireCurrentPacePromptWithAmount:(id)arg1 units:(id)arg2 ;
-(void)fireTimeContextPromptWithElapsedTime:(id)arg1 ;
-(void)fireTimeBeyondGoalPromptWithElapsedTimeBeyondGoal:(id)arg1 ;
-(void)fireHalfwayPointPrompt;
-(void)fireAmountRemainingPromptWithAmount:(id)arg1 units:(id)arg2 words:(id*)arg3 englishWords:(id*)arg4 ;
-(void)fireFinalRushPromptWithTimeRemaining:(id)arg1 ;
-(void)fireGoalCompletedPromptWithTimeGoal:(id)arg1 ;
-(void)fireCaloriesContextPromptWithCaloriesBurned:(id)arg1 ;
-(void)fireCaloriesBeyondGoalPromptWithCaloriesBurnedBeyondGoal:(id)arg1 ;
-(void)fireFinalRushPromptWithCaloriesRemaining:(id)arg1 ;
-(void)fireGoalCompletedPromptWithCaloriesGoal:(id)arg1 ;
-(void)fireDistanceContextPromptWithDistanceRan:(id)arg1 units:(id)arg2 ;
-(void)fireDistanceBeyondGoalPromptWithDistanceRanBeyondGoal:(id)arg1 units:(id)arg2 ;
-(void)fireFinalRushPromptWithDistanceRemaining:(id)arg1 units:(id)arg2 ;
-(void)fireGoalCompletedPromptWithDistanceGoal:(id)arg1 units:(id)arg2 ;
-(void)fireHit500KPrompt;
-(void)fireHit500KMorePrompt;
-(void)fireHit250MilesPrompt;
-(void)fireHit250MilesMorePrompt;
-(void)fireLongestWorkoutDistancePrompt;
-(void)fireMostCaloriesBurnedPrompt;
-(void)fireFastestMarathonWorkoutPrompt;
-(void)fireFastestHalfMarathonWorkoutPrompt;
-(void)fireFastest10KWorkoutPrompt;
-(void)fireFastest5KWorkoutPrompt;
-(void)fireFastestMilePrompt;
-(id)_initWithLanguage:(id)arg1 gender:(id)arg2 ;
-(void)_setUpWithSettings;
-(void)_printVoicePrompt:(id)arg1 ;
-(bool)_fireOneLinerPromptWithString:(id)arg1 ;
-(id)_roundedAmount:(id)arg1 forUnits:(id)arg2 ;
-(id)_promptExpenderUnitsForWorkoutControllerUnits:(id)arg1 ;
-(void)_firePacePromptWithAmount:(id)arg1 units:(id)arg2 isAveragePace:(bool)arg3 ;
-(void)_firePrompt:(id)arg1 amount:(id)arg2 units:(id)arg3 pronounceUnits:(bool)arg4 words:(id*)arg5 englishWords:(id*)arg6 ;
-(void)_firePrompt:(id)arg1 amount:(id)arg2 units:(id)arg3 words:(id*)arg4 englishWords:(id*)arg5 ;
-(bool)_fireOneLinerPromptUsingRandomGenderWithString:(id)arg1 ;
-(void)fireAmountCompletedPromptWithAmount:(id)arg1 units:(id)arg2 words:(id*)arg3 englishWords:(id*)arg4 ;
-(void)fireAmountBeyondGoalPromptWithAmount:(id)arg1 units:(id)arg2 words:(id*)arg3 englishWords:(id*)arg4 ;
-(void)fireTimeRemainingPromptWithTimeRemaining:(id)arg1 ;
-(void)fireCaloriesRemainingPromptWithCaloriesRemaining:(id)arg1 ;
-(void)fireDistanceRemainingPromptWithDistanceRemaining:(id)arg1 units:(id)arg2 ;
-(void)_fireStandaloneNumberPrompt:(id)arg1 ;
-(bool)isPlaying;
-(void)dealloc;
-(id)init;
-(id)language;
-(void)setLanguage:(id)arg1 ;
-(id)gender;
-(void)setGender:(id)arg1 ;
@end

