/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:06 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface IPMessageThread : NSObject {

	NSMutableArray* _threadRoots;
	NSMutableArray* _allUnits;
	NSArray* _allUnitsSorted;

}
-(void)appendUnit:(id)arg1 inResponseToUnit:(id)arg2 ;
-(id)orderedMessageUnits;
-(id)threads;
@end

