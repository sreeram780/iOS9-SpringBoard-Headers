/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:04 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UIDebuggingInformationValueViewObserver.h>

@class UITableView, NSMutableArray, NSMutableDictionary, NSString;

@interface UIDebuggingInformationViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIDebuggingInformationValueViewObserver> {

	UITableView* _valueTableView;
	NSMutableArray* _keys;
	NSMutableDictionary* _managedValues;
	NSMutableDictionary* _observersForKeys;
	NSMutableDictionary* _controlsForKeys;

}

@property (nonatomic,retain) UITableView * valueTableView;                        //@synthesize valueTableView=_valueTableView - In the implementation block
@property (nonatomic,retain) NSMutableArray * keys;                               //@synthesize keys=_keys - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * managedValues;                 //@synthesize managedValues=_managedValues - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * observersForKeys;              //@synthesize observersForKeys=_observersForKeys - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * controlsForKeys;               //@synthesize controlsForKeys=_controlsForKeys - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(NSMutableArray *)keys;
-(void)valueWithKey:(id)arg1 changedToValue:(id)arg2 ;
-(void)setValueTableView:(UITableView *)arg1 ;
-(void)setKeys:(NSMutableArray *)arg1 ;
-(void)setManagedValues:(NSMutableDictionary *)arg1 ;
-(void)setObserversForKeys:(NSMutableDictionary *)arg1 ;
-(void)setControlsForKeys:(NSMutableDictionary *)arg1 ;
-(UITableView *)valueTableView;
-(NSMutableDictionary *)managedValues;
-(NSMutableDictionary *)controlsForKeys;
-(id)_observersForKey:(id)arg1 ;
-(NSMutableDictionary *)observersForKeys;
-(void)addPropertyForKey:(id)arg1 ofType:(long long)arg2 defaultValue:(id)arg3 minimumValue:(id)arg4 maximumValue:(id)arg5 ;
-(void)addPropertyObserver:(id)arg1 forKey:(id)arg2 ;
-(void)removePropertyObserver:(id)arg1 forKey:(id)arg2 ;
@end

