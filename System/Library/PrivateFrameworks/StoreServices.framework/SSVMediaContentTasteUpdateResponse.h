/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:59 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSDate, NSString;

@interface SSVMediaContentTasteUpdateResponse : NSObject <SSXPCCoding, NSSecureCoding> {

	BOOL _cachedResponse;
	NSArray* _contentTasteItems;
	NSDate* _expirationDate;
	unsigned long long _responseRevisionID;

}

@property (nonatomic,copy) NSArray * contentTasteItems;                                //@synthesize contentTasteItems=_contentTasteItems - In the implementation block
@property (nonatomic,copy) NSDate * expirationDate;                                    //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign,nonatomic) unsigned long long responseRevisionID;                    //@synthesize responseRevisionID=_responseRevisionID - In the implementation block
@property (assign,getter=isCachedResponse,nonatomic) BOOL cachedResponse;              //@synthesize cachedResponse=_cachedResponse - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(unsigned long long)responseRevisionID;
-(NSArray *)contentTasteItems;
-(void)setContentTasteItems:(NSArray *)arg1 ;
-(void)setResponseRevisionID:(unsigned long long)arg1 ;
-(BOOL)isCachedResponse;
-(void)setCachedResponse:(BOOL)arg1 ;
@end

