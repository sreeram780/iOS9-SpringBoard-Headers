/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:03 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSNumber;

@interface MobileCalDAVDeletedItemContext : NSObject {

	int _entityType;
	NSNumber* _rowid;

}

@property (nonatomic,retain) NSNumber * rowid;              //@synthesize rowid=_rowid - In the implementation block
@property (assign,nonatomic) int entityType;                //@synthesize entityType=_entityType - In the implementation block
-(int)entityType;
-(void)setEntityType:(int)arg1 ;
-(void)setRowid:(NSNumber *)arg1 ;
-(NSNumber *)rowid;
@end

