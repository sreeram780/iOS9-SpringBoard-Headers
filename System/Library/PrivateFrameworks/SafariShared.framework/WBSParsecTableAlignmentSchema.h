/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:37 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SafariShared/WBSParsecModel.h>

@class NSArray;

@interface WBSParsecTableAlignmentSchema : WBSParsecModel {

	NSArray* _internalAlignments;
	NSArray* _columnGravities;
	NSArray* _columnsWithEqualWidths;

}

@property (nonatomic,copy,readonly) NSArray * internalAlignments;                  //@synthesize internalAlignments=_internalAlignments - In the implementation block
@property (nonatomic,copy,readonly) NSArray * columnGravities;                     //@synthesize columnGravities=_columnGravities - In the implementation block
@property (nonatomic,copy,readonly) NSArray * columnsWithEqualWidths;              //@synthesize columnsWithEqualWidths=_columnsWithEqualWidths - In the implementation block
+(id)schema;
-(id)initWithDictionary:(id)arg1 ;
-(NSArray *)internalAlignments;
-(NSArray *)columnGravities;
-(NSArray *)columnsWithEqualWidths;
@end

