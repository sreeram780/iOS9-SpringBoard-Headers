/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:32 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libtzupdate.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface TZPreferencesController : NSObject

@property (nonatomic,readonly) BOOL updatesEnabled; 
@property (nonatomic,readonly) long long loggingLevel; 
+(id)sharedPreferencesController;
-(id)init;
-(long long)loggingLevel;
-(void)preferencesChanged:(id)arg1 ;
-(BOOL)updatesEnabled;
@end

