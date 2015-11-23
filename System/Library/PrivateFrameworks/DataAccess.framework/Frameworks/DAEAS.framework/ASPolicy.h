/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:05 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSString;

@interface ASPolicy : ASItem {

	NSString* _type;
	NSString* _key;
	NSString* _status;

}
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(void)_setKey:(id)arg1 ;
-(void)_setStatus:(id)arg1 ;
-(id)description;
-(id)key;
-(id)type;
-(void)_setType:(id)arg1 ;
-(int)status;
-(id)perDomainDictsForPolicy;
@end

