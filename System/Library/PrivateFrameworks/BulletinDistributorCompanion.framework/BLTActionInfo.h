/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:30 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, NSDictionary;

@interface BLTActionInfo : NSObject <BSDescriptionProviding> {

	long long _actionType;
	NSString* _publisherBulletinID;
	NSString* _recordID;
	NSString* _sectionID;
	NSDictionary* _context;

}

@property (assign,nonatomic) long long actionType;                      //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,copy) NSString * publisherBulletinID;              //@synthesize publisherBulletinID=_publisherBulletinID - In the implementation block
@property (nonatomic,copy) NSString * recordID;                         //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,copy) NSString * sectionID;                        //@synthesize sectionID=_sectionID - In the implementation block
@property (nonatomic,retain) NSDictionary * context;                    //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)actionType;
-(NSString *)description;
-(NSDictionary *)context;
-(void)setContext:(NSDictionary *)arg1 ;
-(NSString *)publisherBulletinID;
-(id)initWithActionType:(long long)arg1 publisherBulletinID:(id)arg2 recordID:(id)arg3 sectionID:(id)arg4 context:(id)arg5 ;
-(NSString *)sectionID;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setActionType:(long long)arg1 ;
-(void)setPublisherBulletinID:(NSString *)arg1 ;
-(void)setSectionID:(NSString *)arg1 ;
-(void)setRecordID:(NSString *)arg1 ;
-(NSString *)recordID;
@end

