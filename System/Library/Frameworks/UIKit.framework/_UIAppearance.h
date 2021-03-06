/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:01 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSMutableArray, NSMapTable, NSMutableDictionary, _UIAppearanceCustomizableClassInfo;

@interface _UIAppearance : NSObject {

	NSArray* _containerList;
	NSMutableArray* _appearanceInvocations;
	NSMapTable* _invocationSources;
	NSMutableDictionary* _resettableInvocations;
	_UIAppearanceCustomizableClassInfo* _customizableClassInfo;

}

@property (nonatomic,readonly) _UIAppearanceCustomizableClassInfo * _customizableClassInfo;                               //@synthesize customizableClassInfo=_customizableClassInfo - In the implementation block
@property (setter=_setResettableInvocations:,nonatomic,retain) NSMutableDictionary * _resettableInvocations;              //@synthesize resettableInvocations=_resettableInvocations - In the implementation block
+(void)_setInvalidatesViewsOnAppearanceChange:(BOOL)arg1 ;
+(id)_appearanceForClass:(Class)arg1 withContainerList:(id)arg2 ;
+(void)_applyInvocationsTo:(id)arg1 window:(id)arg2 matchingSelector:(SEL)arg3 onlySystemInvocations:(BOOL)arg4 ;
+(BOOL)_hasAnyCustomizations;
+(BOOL)_hasCustomizationsForClass:(Class)arg1 guideClass:(Class)arg2 ;
+(void)_applyInvocationsTo:(id)arg1 window:(id)arg2 ;
+(id)recursiveDescription;
+(void)_applyInvocationsTo:(id)arg1 window:(id)arg2 matchingSelector:(SEL)arg3 ;
+(id)_windowsForSource:(id)arg1 ;
+(id)_recorderForSource:(id)arg1 ;
+(id)_rootAppearancesNode;
+(void)_removeInvocationsForSource:(id)arg1 ;
+(id)appearancesAtNode:(id)arg1 withObject:(id)arg2 ;
+(id)_appearanceWithClassInfo:(id)arg1 containerList:(id)arg2 ;
+(id)_appearanceNodeForClassInfo:(id)arg1 containerList:(id)arg2 ;
+(id)_newAppearanceWithClassInfo:(id)arg1 containerList:(id)arg2 ;
+(id)_currentAppearanceSource;
+(id)_pendingRecordInvocationsForSource:(id)arg1 ;
+(void)_appendDescriptionOfNode:(id)arg1 toString:(id)arg2 atLevel:(unsigned long long)arg3 ;
+(void)_setCurrentAppearanceSource:(id)arg1 ;
+(void)_addWindow:(id)arg1 forSource:(id)arg2 ;
+(void)_removeWindow:(id)arg1 forSource:(id)arg2 ;
+(id)_recordersExcludingSource:(id)arg1 withWindow:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)_traitCollection;
-(SEL)_beginListeningForAppearanceEventsForSetter:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)_resettableInvocationsCreateIfNecessary;
-(BOOL)_isValidAppearanceForCustomizableObject:(id)arg1 ;
-(void)_removeInvocationsForSource:(id)arg1 ;
-(BOOL)_isRecordingInvocations;
-(void)updateResettableSelectorsWithInvocation:(id)arg1 removeSelector:(BOOL)arg2 ;
-(void)_invalidateAppearanceInWindow:(id)arg1 ;
-(void)_handleSetterInvocation:(id)arg1 ;
-(void)_handleGetterInvocation:(id)arg1 ;
-(void)_appendDescriptionToString:(id)arg1 atLevel:(unsigned long long)arg2 ;
-(id)_appearanceInvocations;
-(NSMutableDictionary *)_resettableInvocations;
-(void)_setResettableInvocations:(id)arg1 ;
-(_UIAppearanceCustomizableClassInfo *)_customizableClassInfo;
@end

