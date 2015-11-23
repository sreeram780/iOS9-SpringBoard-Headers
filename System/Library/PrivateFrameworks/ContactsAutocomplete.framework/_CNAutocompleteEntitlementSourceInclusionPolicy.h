/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:51 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNAutocompleteSourceInclusionPolicy.h>

@class NSString;

@interface _CNAutocompleteEntitlementSourceInclusionPolicy : NSObject <CNAutocompleteSourceInclusionPolicy>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BOOL includeContacts; 
@property (readonly) BOOL includeRecents; 
@property (readonly) BOOL includeSuggestions; 
@property (readonly) BOOL includeDirectoryServers; 
@property (readonly) BOOL includeCalendarServers; 
@property (readonly) BOOL includeSupplementalResults; 
@property (readonly) BOOL includePredictions; 
-(BOOL)includeContacts;
-(BOOL)includeRecents;
-(BOOL)includeSuggestions;
-(BOOL)includeDirectoryServers;
-(BOOL)includeCalendarServers;
-(BOOL)includePredictions;
-(BOOL)includeSupplementalResults;
@end

