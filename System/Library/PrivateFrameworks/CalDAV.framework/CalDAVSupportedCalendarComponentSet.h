/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:30 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet, NSSet;

@interface CalDAVSupportedCalendarComponentSet : CoreDAVItem {

	NSMutableSet* _comps;

}

@property (nonatomic,retain) NSMutableSet * comps;              //@synthesize comps=_comps - In the implementation block
@property (nonatomic,readonly) NSSet * compNames; 
-(id)init;
-(id)description;
-(NSSet *)compNames;
-(id)componentsAsString;
-(void)addComp:(id)arg1 ;
-(NSMutableSet *)comps;
-(id)copyParseRules;
-(id)childrenToWrite;
-(void)setComps:(NSMutableSet *)arg1 ;
@end

