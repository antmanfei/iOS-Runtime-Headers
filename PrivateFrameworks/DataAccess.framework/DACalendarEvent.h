/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */



@interface DACalendarEvent : DACalendarObject 
{
}

@property(readonly) NSInteger uid;
@property(retain) NSString *uniqueIdentifier;
@property(retain) NSString *externalModificationTag;
@property(readonly) DACalendar *calendar;
@property(readonly) DACalendarEvent *originalEvent;
@property(readonly) ICSCalendar *icsCalendar;
@property(retain) NSString *summary;
@property(retain) NSString *location;
@property(retain) NSString *description;
@property(readonly) NSDate *startDate;
@property(readonly) NSTimeZone *startTimeZone;
@property(retain) NSDate *endDate;
@property BOOL isAllDay;
@property(readonly) NSArray *recurrences;


- (id)startDate;
- (id)externalModificationTag;
- (void)setExternalModificationTag:(id)arg1;
- (id)icsCalendar;
- (id)startTimeZone;
- (void)setStartDate:(id)arg1 timeZone:(id)arg2;
- (id)recurrences;
- (void)addRecurrence:(id)arg1;
- (id)occurrencesBetweenStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3;
- (void)setUniqueIdentifier:(id)arg1;
- (void)remove;
- (NSInteger)uid;
- (id)uniqueIdentifier;
- (void)setLocation:(id)arg1;
- (id)calendar;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)location;
- (id)summary;
- (void)setDescription:(id)arg1;
- (id)originalEvent;
- (void)setSummary:(id)arg1;
- (id)endDate;
- (void)setEndDate:(id)arg1;
- (void)setIsAllDay:(BOOL)arg1;
- (BOOL)isAllDay;

@end