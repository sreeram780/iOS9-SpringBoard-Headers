/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:53 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVLeafItem, CoreDAVItem, CoreDAVErrorItem;

@interface CoreDAVPropStatItem : CoreDAVItem {

	CoreDAVLeafItem* _status;
	CoreDAVItem* _prop;
	CoreDAVErrorItem* _errorItem;
	CoreDAVLeafItem* _responseDescription;

}

@property (nonatomic,retain) CoreDAVLeafItem * status;                           //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) CoreDAVItem * prop;                                 //@synthesize prop=_prop - In the implementation block
@property (nonatomic,retain) CoreDAVErrorItem * errorItem;                       //@synthesize errorItem=_errorItem - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * responseDescription;              //@synthesize responseDescription=_responseDescription - In the implementation block
+(id)copyParseRules;
-(void)dealloc;
-(id)init;
-(id)description;
-(CoreDAVLeafItem *)status;
-(void)setStatus:(CoreDAVLeafItem *)arg1 ;
-(void)setResponseDescription:(CoreDAVLeafItem *)arg1 ;
-(CoreDAVLeafItem *)responseDescription;
-(CoreDAVItem *)prop;
-(void)setProp:(CoreDAVItem *)arg1 ;
-(CoreDAVErrorItem *)errorItem;
-(void)setErrorItem:(CoreDAVErrorItem *)arg1 ;
@end

