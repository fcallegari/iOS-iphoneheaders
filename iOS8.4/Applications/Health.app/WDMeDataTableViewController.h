/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:33 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>
#import <UIKit/UIViewControllerRestoration.h>

@class WDControllerManager, HKHealthStore, HKBloodTypeObject, HKBiologicalSexObject, NSDate, UIDatePicker, UIPickerView, UIBarButtonItem, WDMeDataTableViewCell, NSString;

@interface WDMeDataTableViewController : UITableViewController <UIPickerViewDataSource, UIPickerViewDelegate, UIViewControllerRestoration> {

	WDControllerManager* _controllerManager;
	HKHealthStore* _healthStore;
	HKBloodTypeObject* _bloodTypeObject;
	int _bloodTypeDisplayValue;
	HKBiologicalSexObject* _biologicalSexObject;
	int _biologicalSexDisplayValue;
	NSDate* _birthdate;
	NSDate* _birthdateDisplayValue;
	UIDatePicker* _birthdatePicker;
	UIPickerView* _bloodTypePicker;
	UIPickerView* _biologicalSexPicker;
	UIBarButtonItem* _cancelButtonItem;
	WDMeDataTableViewCell* _birthdateCell;
	WDMeDataTableViewCell* _biologicalSexCell;
	WDMeDataTableViewCell* _bloodTypeCell;
	WDMeDataTableViewCell* _selectedCell;
	char _isCancelling;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
-(id)initWithControllerManager:(id)arg1 ;
-(void)birthdateChanged:(id)arg1 ;
-(void)_updatePickersWithDisplayValues;
-(void)_resetSelectedCell;
-(id)_displayStringForBirthDate:(id)arg1 ;
-(id)_displayStringForBiologicalSex:(int)arg1 ;
-(id)_displayStringForBloodType:(int)arg1 ;
-(void)_updateBirthdateCellDisplayValue;
-(id)_dateAsAge:(id)arg1 ;
-(void)cancelButtonTapped:(id)arg1 ;
-(int)numberOfComponentsInPickerView:(id)arg1 ;
-(int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(id)initWithStyle:(int)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
@end

