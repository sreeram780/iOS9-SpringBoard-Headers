/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:28:03 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
@interface TUICFInterface : NSObject
+(void)allowCallForDestinationID:(id)arg1 service:(int)arg2 isRelay:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
+(CFStringRef)serviceIdentifierForService:(int)arg1 isRelay:(BOOL)arg2 ;
+(int)serviceForServiceIdentifier:(id)arg1 ;
+(BOOL)serviceIdentifierIsRelay:(id)arg1 ;
+(BOOL)allowCallForDestinationID:(id)arg1 service:(int)arg2 isRelay:(BOOL)arg3 ;
@end
