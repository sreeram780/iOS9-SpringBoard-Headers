/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:59 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSHTTPURLResponse, NSArray;

@interface SSVPlaybackResponse : NSObject <NSCopying> {

	NSDictionary* _responseDictionary;
	NSHTTPURLResponse* _urlResponse;

}

@property (nonatomic,copy,readonly) NSDictionary * responseDictionary;              //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (nonatomic,readonly) NSHTTPURLResponse * URLResponse;                     //@synthesize urlResponse=_urlResponse - In the implementation block
@property (nonatomic,readonly) NSArray * items; 
-(void)_enumerateItemsUsingBlock:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)items;
-(NSDictionary *)responseDictionary;
-(NSHTTPURLResponse *)URLResponse;
-(id)itemForItemIdentifier:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 URLResponse:(id)arg2 ;
@end

