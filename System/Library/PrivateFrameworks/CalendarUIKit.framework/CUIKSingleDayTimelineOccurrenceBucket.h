/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:32 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CUIKSingleDayTimelineViewItem, CUIKSingleDayTimelineLayoutScreenUtils;
@class CUIKSingleDayTimelineLayoutPartition, NSMutableArray, NSArray;

@interface CUIKSingleDayTimelineOccurrenceBucket : NSObject {

	id<CUIKSingleDayTimelineViewItem> _temporaryOccurrenceAtBeginning;
	id<CUIKSingleDayTimelineViewItem> _temporaryOccurrenceAtEnd;
	id<CUIKSingleDayTimelineLayoutScreenUtils> _screenUtilsDelegate;
	BOOL _useTemporaryFitnessLevel;
	BOOL _temporaryFitnessLevelRequiresCalculation;
	double _temporaryFitnessLevel;
	BOOL _originalFitnessLevelRequiresCalculation;
	double _originalFitnessLevel;
	BOOL _ignoreFirstOccurrenceInFitnessCalculations;
	BOOL _ignoreLastOccurrenceInFitnessCalculations;
	BOOL _isOnlyBucket;
	CUIKSingleDayTimelineLayoutPartition* _correspondingPartition;
	NSMutableArray* _currentOccurrences;

}

@property (nonatomic,retain) CUIKSingleDayTimelineLayoutPartition * correspondingPartition;              //@synthesize correspondingPartition=_correspondingPartition - In the implementation block
@property (nonatomic,readonly) NSArray * occurrences; 
@property (assign,nonatomic) BOOL isOnlyBucket;                                                          //@synthesize isOnlyBucket=_isOnlyBucket - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentOccurrences;                                        //@synthesize currentOccurrences=_currentOccurrences - In the implementation block
-(NSArray *)occurrences;
-(CUIKSingleDayTimelineLayoutPartition *)correspondingPartition;
-(id)initWithOccurrences:(id)arg1 correspondingPartition:(id)arg2 screenUtilsDelegate:(id)arg3 ;
-(void)addOccurrenceTemporarilyToEnd:(id)arg1 ;
-(void)makeTemporaryChangesPermanent;
-(void)setIsOnlyBucket:(BOOL)arg1 ;
-(void)stampFramesOntoOccurrences;
-(id)earliestOccurrence;
-(id)_occurrencesForFitnessLevel;
-(BOOL)isOnlyBucket;
-(void)addOccurrenceTemporarilyToBeginning:(id)arg1 ;
-(void)removeOccurrenceAtBeginningTemporarily;
-(void)removeOccurrenceAtEndTemporarily;
-(void)revertTemporaryChanges;
-(void)setCorrespondingPartition:(CUIKSingleDayTimelineLayoutPartition *)arg1 ;
-(NSMutableArray *)currentOccurrences;
-(void)setCurrentOccurrences:(NSMutableArray *)arg1 ;
@end

