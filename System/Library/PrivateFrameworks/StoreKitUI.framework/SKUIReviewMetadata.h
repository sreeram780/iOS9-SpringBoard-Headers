/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:49 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface SKUIReviewMetadata : NSObject <NSCopying> {

	NSString* _body;
	unsigned long long _bodyMaxLength;
	NSString* _nickname;
	unsigned long long _nicknameMaxLength;
	float _rating;
	NSURL* _submitURL;
	NSString* _title;
	unsigned long long _titleMaxLength;

}

@property (nonatomic,copy) NSString * body;                                       //@synthesize body=_body - In the implementation block
@property (nonatomic,copy) NSString * nickname;                                   //@synthesize nickname=_nickname - In the implementation block
@property (assign,nonatomic) float rating;                                        //@synthesize rating=_rating - In the implementation block
@property (nonatomic,copy) NSString * title;                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSURL * submitURL;                                 //@synthesize submitURL=_submitURL - In the implementation block
@property (nonatomic,readonly) unsigned long long bodyMaxLength;                  //@synthesize bodyMaxLength=_bodyMaxLength - In the implementation block
@property (nonatomic,readonly) unsigned long long nicknameMaxLength;              //@synthesize nicknameMaxLength=_nicknameMaxLength - In the implementation block
@property (nonatomic,readonly) unsigned long long titleMaxLength;                 //@synthesize titleMaxLength=_titleMaxLength - In the implementation block
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)body;
-(void)setBody:(NSString *)arg1 ;
-(void)setRating:(float)arg1 ;
-(float)rating;
-(id)initWithReviewDictionary:(id)arg1 ;
-(unsigned long long)bodyMaxLength;
-(NSString *)nickname;
-(void)setNickname:(NSString *)arg1 ;
-(unsigned long long)nicknameMaxLength;
-(NSURL *)submitURL;
-(unsigned long long)titleMaxLength;
@end

