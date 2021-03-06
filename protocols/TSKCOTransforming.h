/* Generated by RuntimeBrowser.
 */

@protocol TSKCOTransforming

@required

- (TSKCOAbstractOperation<TSKCOTransforming> *)transformDynamicByAnyOperation:(TSKCOAbstractOperation<TSKCOTransforming> *)arg1 byHigherPriority:(BOOL)arg2;
- (TSKCOIdPlacementBaseOperation *)transformIdPlacementBaseOperation:(TSKCOIdPlacementBaseOperation *)arg1 isHigherPriority:(BOOL)arg2;
- (TSKCOReplaceRangeOperation *)transformReplaceRangeOperation:(TSKCOReplaceRangeOperation *)arg1 isHigherPriority:(BOOL)arg2;
- (TSKCOUpdateIdOperation *)transformUpdateIdOperation:(TSKCOUpdateIdOperation *)arg1 isHigherPriority:(BOOL)arg2;
- (TSKCOUpdateRangeOperation *)transformUpdateRangeOperation:(TSKCOUpdateRangeOperation *)arg1 isHigherPriority:(BOOL)arg2;

@end
