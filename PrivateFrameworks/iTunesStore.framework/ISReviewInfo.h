/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSString;



@interface ISReviewInfo : ISItemInfo <NSCopying>
{
    NSString *_text;
    NSString *_userName;
    float _userRating;
}


- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)loadFromDictionary:(id)arg1 dataSource:(id)arg2;
- (id)text;
- (id)userName;
- (float)userRating;

@end