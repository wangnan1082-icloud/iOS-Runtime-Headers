/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDAutoSuConfig : NSObject {
    BOOL _allowUnlockBeforeNow;
    BOOL _alwaysFallBackToDefault;
    BOOL _alwaysReturnUnlockNow;
    double _endThreshold;
    int _restrictionEndInSlot;
    int _restrictionStartInSlot;
    double _startThreshold;
    int _suEndDefaultTimeOffsetFromSuStart;
    int _suStartDefaultTime;
    int _unlockMarginInSlot;
    double _unlockThreshold;
}

@property (nonatomic) BOOL allowUnlockBeforeNow;
@property (nonatomic) BOOL alwaysFallBackToDefault;
@property (nonatomic) BOOL alwaysReturnUnlockNow;
@property (nonatomic) double endThreshold;
@property (nonatomic) int restrictionEndInSlot;
@property (nonatomic) int restrictionStartInSlot;
@property (nonatomic) double startThreshold;
@property (nonatomic) int suEndDefaultTimeOffsetFromSuStart;
@property (nonatomic) int suStartDefaultTime;
@property (nonatomic) int unlockMarginInSlot;
@property (nonatomic) double unlockThreshold;

- (BOOL)allowUnlockBeforeNow;
- (BOOL)alwaysFallBackToDefault;
- (BOOL)alwaysReturnUnlockNow;
- (double)endThreshold;
- (int)readConfig;
- (int)restrictionEndInSlot;
- (int)restrictionStartInSlot;
- (void)setAllowUnlockBeforeNow:(BOOL)arg1;
- (void)setAlwaysFallBackToDefault:(BOOL)arg1;
- (void)setAlwaysReturnUnlockNow:(BOOL)arg1;
- (void)setEndThreshold:(double)arg1;
- (void)setParam;
- (void)setRestrictionEndInSlot:(int)arg1;
- (void)setRestrictionStartInSlot:(int)arg1;
- (void)setStartThreshold:(double)arg1;
- (void)setSuEndDefaultTimeOffsetFromSuStart:(int)arg1;
- (void)setSuStartDefaultTime:(int)arg1;
- (void)setUnlockMarginInSlot:(int)arg1;
- (void)setUnlockThreshold:(double)arg1;
- (double)startThreshold;
- (int)suEndDefaultTimeOffsetFromSuStart;
- (int)suStartDefaultTime;
- (int)unlockMarginInSlot;
- (double)unlockThreshold;
- (BOOL)validParam;

@end
