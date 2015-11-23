/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:41 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MapsSupport/MapsSupport-Structs.h>
@class NSMutableArray, NSMutableSet, NSArray;

@interface _MSPContainerEditsRecorder : NSObject {

	NSMutableArray* _originalMutableArray;
	NSMutableArray* _proxiesMutableArray;
	NSMutableArray* _orderedEdits;
	NSMutableSet* _updatedObjects;

}

@property (nonatomic,readonly) NSMutableArray * recordableMutableArray; 
@property (nonatomic,readonly) NSArray * orderedEdits; 
-(void)insertObject:(id)arg1 inEditableObjectsAtIndex:(unsigned long long)arg2 ;
-(void)removeObjectFromEditableObjectsAtIndex:(unsigned long long)arg1 ;
-(void)replaceEditableObjectsAtIndexes:(id)arg1 withEditableObjects:(id)arg2 ;
-(id)editableObjectsAtIndexes:(id)arg1 ;
-(id)initWithMutableArray:(id)arg1 ;
-(void)getEditableObjects:(id*)arg1 range:(NSRange)arg2 ;
-(void)_editDetectorDidDetectUpdateForObject:(id)arg1 ;
-(void)useImmutableObjectsForEditsFromMap:(id)arg1 intermediateMutableObjectTransferBlock:(/*^block*/id)arg2 ;
-(void)insertEditableObjects:(id)arg1 atIndexes:(id)arg2 ;
-(void)removeEditableObjectsAtIndexes:(id)arg1 ;
-(NSMutableArray *)recordableMutableArray;
-(id)objectInEditableObjectsAtIndex:(unsigned long long)arg1 ;
-(void)replaceObjectInEditableObjectsAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(NSArray *)orderedEdits;
-(unsigned long long)countOfEditableObjects;
@end

