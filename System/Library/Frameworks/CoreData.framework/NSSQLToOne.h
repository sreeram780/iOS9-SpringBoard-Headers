/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:08 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSSQLRelationship.h>

@class NSSQLForeignKey, NSSQLForeignEntityKey, NSSQLForeignOrderKey;

@interface NSSQLToOne : NSSQLRelationship {

	NSSQLForeignKey* _foreignKey;
	NSSQLForeignEntityKey* _foreignEntityKey;
	NSSQLForeignOrderKey* _foreignOrderKey;
	unsigned _slot;
	BOOL _isVirtual;

}
-(BOOL)isOptional;
-(id)columnName;
-(unsigned)slot;
-(id)foreignKey;
-(id)foreignEntityKey;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(void)copyValuesForReadOnlyFetch:(id)arg1 ;
-(BOOL)isVirtual;
-(id)foreignOrderKey;
-(id)initWithEntity:(id)arg1 inverseToMany:(id)arg2 ;
-(id)initForReadOnlyFetchWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(void)_setForeignOrderKey:(id)arg1 ;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 virtualForToMany:(id)arg3 ;
-(void)dealloc;
-(id)description;
@end

