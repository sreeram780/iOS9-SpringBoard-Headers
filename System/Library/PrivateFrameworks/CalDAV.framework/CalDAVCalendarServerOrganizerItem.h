/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:31 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVHrefItem, CoreDAVLeafItem;

@interface CalDAVCalendarServerOrganizerItem : CoreDAVItem {

	CoreDAVHrefItem* _href;
	CoreDAVLeafItem* _commonName;

}

@property (nonatomic,retain) CoreDAVHrefItem * href;                    //@synthesize href=_href - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * commonName;              //@synthesize commonName=_commonName - In the implementation block
-(id)init;
-(CoreDAVHrefItem *)href;
-(void)setHref:(CoreDAVHrefItem *)arg1 ;
-(id)copyParseRules;
-(void)setCommonName:(CoreDAVLeafItem *)arg1 ;
-(CoreDAVLeafItem *)commonName;
@end

