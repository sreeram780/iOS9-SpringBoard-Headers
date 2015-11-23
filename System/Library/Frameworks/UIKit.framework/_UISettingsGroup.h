/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:54 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UISettings.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableArray, NSHashTable;

@interface _UISettingsGroup : _UISettings <NSFastEnumeration> {

	NSMutableArray* _internal_group;
	NSHashTable* _internal_groupObservers;

}
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_UI44*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)count;
-(void)setValuesFromModel:(id)arg1 ;
-(id)_startInit;
-(void)_continueInitBySettingDefaultValues;
-(void)_completeInitByApplyingArchiveDictionary:(id)arg1 ;
-(void)_stopObservingPropertiesAndChildren;
-(void)_addInternalEntriesToArchiveDictionary:(id)arg1 ;
-(id)archiveDictionary;
-(BOOL)_hasObservers;
-(void)_startObservingPropertiesAndChildren;
-(void)addGroupObserver:(id)arg1 ;
-(void)removeGroupObserver:(id)arg1 ;
-(void)settings:(id)arg1 changedValueForKeyPath:(id)arg2 ;
-(unsigned long long)indexOfSettings:(id)arg1 ;
-(void)insertSettings:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_sendInsert:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeSettingsAtIndex:(unsigned long long)arg1 ;
-(void)_sendRemove:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)moveSettingsAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(void)_sendMove:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)settingsAtIndex:(unsigned long long)arg1 ;
-(BOOL)containsSettings:(id)arg1 ;
-(void)addSettings:(id)arg1 ;
-(void)removeSettings:(id)arg1 ;
-(void)moveSettings:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(void)enumerateSettingsUsingBlock:(/*^block*/id)arg1 ;
@end

