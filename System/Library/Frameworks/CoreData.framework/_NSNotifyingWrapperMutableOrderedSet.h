/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:09 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSMutableOrderedSet.h>

@class NSManagedObject, NSString, NSMutableOrderedSet;

@interface _NSNotifyingWrapperMutableOrderedSet : NSMutableOrderedSet {

	NSManagedObject* _container;
	NSString* _key;
	NSMutableOrderedSet* _mutableOrderedSet;

}
-(unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(void)addObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithContainer:(id)arg1 key:(id)arg2 mutableOrderedSet:(id)arg3 ;
-(id)_orderedObjectsAndKeys;
-(BOOL)_reorderObjectsToLocationsByOrderKey:(id)arg1 error:(id*)arg2 ;
-(void)insertObjects:(id*)arg1 count:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(BOOL)intersectsOrderedSet:(id)arg1 ;
-(id)reversedOrderedSet;
-(id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2 ;
-(void)replaceObjectsInRange:(NSRange)arg1 withObjects:(const id*)arg2 count:(unsigned long long)arg3 ;
-(void)sortRange:(NSRange)arg1 options:(unsigned long long)arg2 usingComparator:(/*^block*/id)arg3 ;
-(void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)valueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)removeObject:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(id)firstObject;
-(id)lastObject;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(id)description;
-(id)array;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)set;
-(void)unionSet:(id)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(void)addObjectsFromArray:(id)arg1 ;
-(void)removeObjectsInArray:(id)arg1 ;
-(void)intersectSet:(id)arg1 ;
-(id)allObjects;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)reverseObjectEnumerator;
-(void)removeObjectsInRange:(NSRange)arg1 ;
-(void)minusSet:(id)arg1 ;
-(id)objectEnumerator;
-(unsigned long long)indexOfObjectPassingTest:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)sortUsingComparator:(/*^block*/id)arg1 ;
-(void)removeObjectsAtIndexes:(id)arg1 ;
-(id)indexesOfObjectsPassingTest:(/*^block*/id)arg1 ;
-(id)objectsAtIndexes:(id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(void)sortWithOptions:(unsigned long long)arg1 usingComparator:(/*^block*/id)arg2 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)exchangeObjectAtIndex:(unsigned long long)arg1 withObjectAtIndex:(unsigned long long)arg2 ;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(BOOL)isEqualToOrderedSet:(id)arg1 ;
-(BOOL)isSubsetOfSet:(id)arg1 ;
-(BOOL)intersectsSet:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)sortedArrayUsingComparator:(/*^block*/id)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 inSortedRange:(NSRange)arg2 options:(unsigned long long)arg3 usingComparator:(/*^block*/id)arg4 ;
-(unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)sortedArrayWithOptions:(unsigned long long)arg1 usingComparator:(/*^block*/id)arg2 ;
-(id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(void)insertObjects:(id)arg1 atIndexes:(id)arg2 ;
-(void)intersectOrderedSet:(id)arg1 ;
-(void)getObjects:(id*)arg1 ;
-(void)setObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)minusOrderedSet:(id)arg1 ;
-(void)unionOrderedSet:(id)arg1 ;
-(void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2 ;
-(void)moveObjectsAtIndexes:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(id)descriptionWithLocale:(id)arg1 ;
-(BOOL)isSubsetOfOrderedSet:(id)arg1 ;
@end

