/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:27 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKSearchCompleter.h>

@protocol GEOMapServiceCompletionTicket, MKLocationManagerOperation;
@class NSArray, NSTimer;

@interface MKLocalSearchCompleter : MKSearchCompleter {

	double _lastRequestTime;
	BOOL _dirty;
	NSArray* _results;
	NSTimer* _timer;
	id<GEOMapServiceCompletionTicket> _ticket;
	int _source;
	id<MKLocationManagerOperation> _singleLocationUpdate;

}
-(void)setCategoryFilter:(id)arg1 ;
-(void)_fireRequest;
-(void)_cancelTimer;
-(void)_handleCompletion:(id)arg1 forTicket:(id)arg2 ;
-(BOOL)resultsAreCurrent;
-(BOOL)isSearching;
-(void)retry;
-(void)_schedulePendingRequest;
-(void)_markDirty;
-(void)setBoundingRegion:(SCD_Struct_MK2)arg1 ;
-(void)_handleError:(id)arg1 forTicket:(id)arg2 ;
-(void)_scheduleRequest;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(int)source;
-(void)setSource:(int)arg1 ;
-(id)results;
-(void)setFragment:(id)arg1 ;
@end

