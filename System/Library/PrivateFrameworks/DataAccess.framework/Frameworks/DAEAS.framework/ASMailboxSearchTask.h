/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:04 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASSearchTask.h>

@interface ASMailboxSearchTask : ASSearchTask
-(void)finishWithError:(id)arg1 ;
-(void)performTask;
-(id)requestBody;
-(BOOL)getTopLevelToken:(char*)arg1 outStatusCodePage:(char*)arg2 outStatusToken:(char*)arg3 ;
-(BOOL)processContext:(id)arg1 ;
-(BOOL)requiresEASVersionInformaton;
-(void)_appendSearchQuery:(id)arg1 ;
-(void)_appendSearchOptions:(id)arg1 ;
-(id)replacementObjectForEmailItem:(id)arg1 ;
@end

