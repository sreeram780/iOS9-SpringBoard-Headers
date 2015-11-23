/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:03 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/OCDDelayedMediaContext.h>

@class OCPPackage, NSURL, NSString;

@interface OCXDelayedMediaContext : NSObject <OCDDelayedMediaContext> {

	OCPPackage* mPackage;
	NSURL* mTargetLocation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(id)initWithTargetLocation:(id)arg1 package:(id)arg2 ;
-(BOOL)loadDelayedNode:(id)arg1 ;
-(id)dataRep;
-(BOOL)saveDelayedMedia:(id)arg1 toFile:(id)arg2 ;
@end
