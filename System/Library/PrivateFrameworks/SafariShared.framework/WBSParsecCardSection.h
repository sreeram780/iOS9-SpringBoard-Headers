/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:37 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSURL;

@interface WBSParsecCardSection : NSObject {

	NSString* _type;
	NSURL* _url;

}

@property (nonatomic,copy,readonly) NSString * type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSURL * url;                       //@synthesize url=_url - In the implementation block
+(Class)_classForCardSectionType:(id)arg1 ;
+(id)_specializedCardSectionSchema;
+(id)cardSectionSchema;
+(id)cardSectionWithDictionary:(id)arg1 ;
-(NSURL *)url;
-(NSString *)type;
-(id)_initWithDictionary:(id)arg1 ;
@end

