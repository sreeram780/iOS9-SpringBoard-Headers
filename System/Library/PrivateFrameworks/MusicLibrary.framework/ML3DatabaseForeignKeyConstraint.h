/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:49 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ML3DatabaseTable, NSArray;

@interface ML3DatabaseForeignKeyConstraint : NSObject {

	ML3DatabaseTable* _foreignTable;
	NSArray* _localColumns;
	NSArray* _foreignColumns;

}

@property (nonatomic,readonly) ML3DatabaseTable * foreignTable;              //@synthesize foreignTable=_foreignTable - In the implementation block
@property (nonatomic,readonly) NSArray * localColumns;                       //@synthesize localColumns=_localColumns - In the implementation block
@property (nonatomic,readonly) NSArray * foreignColumns;                     //@synthesize foreignColumns=_foreignColumns - In the implementation block
-(id)initWithForeignTable:(id)arg1 localColumns:(id)arg2 foreignColumns:(id)arg3 ;
-(id)_foreignKeyClauseSQL;
-(ML3DatabaseTable *)foreignTable;
-(NSArray *)localColumns;
-(NSArray *)foreignColumns;
@end

