/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:14 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WelcomeKitCore/WLMigrationWebService.h>

@class CNContactStore;

@interface WLContactsMigrator : WLMigrationWebService {

	CNContactStore* _contactStore;

}
+(id)contentType;
-(id)contentType;
-(void)importRecordData:(id)arg1 summary:(id)arg2 account:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)estimateItemSizeForSummary:(id)arg1 account:(id)arg2 ;
-(id)initWithSourceDevice:(id)arg1 urlSessionController:(id)arg2 delegate:(id)arg3 ;
-(id)_vcardDataWithoutCustomFieldsFromVcardData:(id)arg1 ;
@end

