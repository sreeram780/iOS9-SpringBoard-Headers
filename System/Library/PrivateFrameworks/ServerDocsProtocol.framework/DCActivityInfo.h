/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:40 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ServerDocsProtocol/SDFActivityInfo.h>

@class NSData;

@interface DCActivityInfo : SDFActivityInfo {

	NSData* _sharepointDocumentIdentifier;

}

@property (retain,readonly) NSData * sharepointDocumentIdentifier;              //@synthesize sharepointDocumentIdentifier=_sharepointDocumentIdentifier - In the implementation block
+(id)activityInfoWithQueue:(id)arg1 ;
+(id)activityInfoWithQueue:(id)arg1 sharepointDocumentIdentifier:(id)arg2 ;
-(id)description;
-(id)initWithQueue:(id)arg1 sharepointDocumentIdentifier:(id)arg2 ;
-(NSData *)sharepointDocumentIdentifier;
@end

