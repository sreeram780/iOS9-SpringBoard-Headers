/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:04 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CNContactSection : NSObject <NSCopying> {

	NSString* _title;
	NSString* _identifier;
	NSString* _sortKey;
	NSRange _range;

}

@property (nonatomic,retain) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) NSRange range;                      //@synthesize range=_range - In the implementation block
@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * sortKey;                 //@synthesize sortKey=_sortKey - In the implementation block
-(void)setSortKey:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSString *)identifier;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
-(NSString *)sortKey;
@end

