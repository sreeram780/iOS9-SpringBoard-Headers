/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:23 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSLayoutItem.h>
#import <libobjc.A.dylib/NSISVariableDelegate.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol NSLayoutItem;
@class NSString, NSISVariable;

@interface NSAbstractLayoutGuide : NSObject <NSLayoutItem, NSISVariableDelegate, NSCoding> {

	id<NSLayoutItem> _concreteLayoutGuide;
	id<NSLayoutItem> _owningView;
	NSString* _identifier;
	NSISVariable* _minYVariable;
	NSISVariable* _minXVariable;
	NSISVariable* _widthVariable;
	NSISVariable* _heightVariable;
	CGRect _layoutFrame;

}

@property (copy) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (readonly) CGRect layoutFrame;                            //@synthesize layoutFrame=_layoutFrame - In the implementation block
@property (readonly) CGRect frame; 
@property (assign) id<NSLayoutItem> owningView; 
@property (readonly) NSISVariable * minXVariable;                   //@synthesize minXVariable=_minXVariable - In the implementation block
@property (readonly) NSISVariable * minYVariable;                   //@synthesize minYVariable=_minYVariable - In the implementation block
@property (readonly) NSISVariable * widthVariable;                  //@synthesize widthVariable=_widthVariable - In the implementation block
@property (readonly) NSISVariable * heightVariable;                 //@synthesize heightVariable=_heightVariable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSISVariable *)minXVariable;
-(NSISVariable *)minYVariable;
-(NSISVariable *)widthVariable;
-(NSISVariable *)heightVariable;
-(id)initWithConcreteLayoutGuide:(id)arg1 ;
-(BOOL)_isDescendantOf:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(CGRect)frame;
-(NSString *)identifier;
-(id<NSLayoutItem>)owningView;
-(void)setOwningView:(id<NSLayoutItem>)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2 ;
-(id)nsli_superitem;
-(CGRect)layoutFrame;
-(void)nsli_addConstraint:(id)arg1 ;
-(BOOL)nsli_removeConstraint:(id)arg1 ;
-(id)nsli_installedConstraints;
-(double)nsli_marginOffsetForAttribute:(long long)arg1 ;
-(id)nsli_description;
-(id)nsis_descriptionOfVariable:(id)arg1 ;
-(BOOL)nsis_shouldIntegralizeVariable:(id)arg1 ;
-(BOOL)nsis_valueOfVariableIsUserObservable:(id)arg1 ;
-(BOOL)nsli_lowerAttribute:(int)arg1 intoExpression:(id)arg2 withCoefficient:(double)arg3 container:(id)arg4 ;
-(BOOL)nsli_lowerAttribute:(int)arg1 intoExpression:(id)arg2 withCoefficient:(double)arg3 forConstraint:(id)arg4 ;
-(id)nsli_layoutEngine;
-(CGSize)nsli_convertSizeToEngineSpace:(CGSize)arg1 ;
-(CGSize)nsli_convertSizeFromEngineSpace:(CGSize)arg1 ;
-(BOOL)nsli_resolvedValue:(double*)arg1 forSymbolicConstant:(id)arg2 inConstraint:(id)arg3 error:(id*)arg4 ;
-(BOOL)nsli_descriptionIncludesPointer;
-(unsigned long long)nsli_autoresizingMask;
-(BOOL)nsli_isFlipped;
-(void)_snipReferencingConstraints;
@end

