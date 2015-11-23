/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:31 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CalDAVSupportedCalendarComponentSets : CoreDAVItem {

	NSMutableSet* _componentSets;

}
+(BOOL)allowedCalendars:(id)arg1 contains:(id)arg2 ;
-(id)init;
-(id)description;
-(id)componentsAsString;
-(id)copyParseRules;
-(id)childrenToWrite;
-(void)addCompSet:(id)arg1 ;
@end

