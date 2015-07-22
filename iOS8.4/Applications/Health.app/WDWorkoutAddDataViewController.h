/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:33 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Health/WDAddDataViewController.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>

@class NSDateFormatter, NSDate, UITableViewCell, WDManualDataEntryTableViewCell, UIDatePicker, NSArray, UIPickerView, HKQuantityType, NSString;

@interface WDWorkoutAddDataViewController : WDAddDataViewController <UIPickerViewDataSource, UIPickerViewDelegate> {

	NSDateFormatter* _dateFormatter;
	NSDate* _startDate;
	NSDate* _endDate;
	UITableViewCell* _selectedCell;
	WDManualDataEntryTableViewCell* _startDateCell;
	UIDatePicker* _startDatePicker;
	WDManualDataEntryTableViewCell* _endDateCell;
	UIDatePicker* _endDatePicker;
	WDManualDataEntryTableViewCell* _totalDistanceCell;
	WDManualDataEntryTableViewCell* _totalEnergyBurnedCell;
	NSArray* _workoutActivityTypePairs;
	WDManualDataEntryTableViewCell* _workoutActivityTypeCell;
	UIPickerView* _workoutActivityTypePicker;
	char _hasSelectedDefaultPickerLocation;
	HKQuantityType* _distanceType;
	NSArray* _sectionsWithDistance;
	NSArray* _sectionsWithoutDistance;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDataUnitGroup:(id)arg1 controllerManager:(id)arg2 unitController:(id)arg3 ;
-(void)_startDatePickerChanged:(id)arg1 ;
-(void)_endDatePickerChanged:(id)arg1 ;
-(id)_generateSortedActivityTypes;
-(int)_indexOfActivityType:(unsigned)arg1 ;
-(id)_activityTypeDescriptionForIndex:(int)arg1 ;
-(void)_updateCurrentDistanceTypeWithActivityType:(unsigned)arg1 ;
-(void)unitPreferencesDidChange:(id)arg1 ;
-(id)_distanceDisplayName;
-(unsigned)_selectedActivityType;
-(id)_totalEnergyBurned;
-(id)_totalDistance;
-(id)_roundDateToNearestMinute:(id)arg1 ;
-(id)_dataUnitForDistanceType:(id)arg1 ;
-(id)_quantityFromCell:(id)arg1 unit:(id)arg2 ;
-(id)_dataUnitForGroupIdentifier:(int)arg1 ;
-(unsigned)_activityTypeForIndex:(int)arg1 ;
-(id)_rowsForSection:(int)arg1 ;
-(void)_setDefaultActivityTypePickerIfNecessary;
-(void)saveHKObjectWithCompletion:(/*^block*/id)arg1 ;
-(void)localeDidChange:(id)arg1 ;
-(void)dealloc;
-(int)numberOfComponentsInPickerView:(id)arg1 ;
-(int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(id)_sections;
@end
