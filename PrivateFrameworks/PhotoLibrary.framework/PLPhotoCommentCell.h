/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIView, PLCloudSharedComment, UILabel;

@interface PLPhotoCommentCell : UITableViewCell {
    PLCloudSharedComment *_comment;
    UILabel *_commentBylineLabel;
    UILabel *_commentContentLabel;
    UIView *_styledSeparatorView;
}

@property(copy) PLCloudSharedComment * comment;
@property(readonly) UILabel * commentBylineLabel;
@property(readonly) UILabel * commentContentLabel;
@property(readonly) UIView * styledSeparatorView;

+ (id)_attributedStringForBylineText:(id)arg1;
+ (id)_attributedStringForCommentText:(id)arg1;
+ (id)_synthesizedAttributedString:(id)arg1 withWordWrapping:(BOOL)arg2;
+ (id)bylineStringForComment:(id)arg1;
+ (float)heightForComment:(id)arg1 forWidth:(float)arg2 forInterfaceOrientation:(int)arg3;
+ (float)heightForCommentText:(id)arg1 bylineText:(id)arg2 forWidth:(float)arg3 forInterfaceOrientation:(int)arg4;
+ (Class)layerClass;

- (id)comment;
- (id)commentBylineLabel;
- (id)commentContentLabel;
- (void)dealloc;
- (void)delete:(id)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setComment:(id)arg1;
- (id)styledSeparatorView;

@end