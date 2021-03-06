/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPCSData : NSObject <NSSecureCoding> {
    NSString *_etag;
    struct _OpaquePCSShareProtection { } *_pcs;
    NSData *_pcsData;
}

@property (nonatomic, copy) NSString *etag;
@property (nonatomic, readonly) <NSSecureCoding> *itemID;
@property (nonatomic) struct _OpaquePCSShareProtection { }*pcs;
@property (nonatomic, copy) NSData *pcsData;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (void)dealloc;
- (BOOL)decryptPCSDataWithManager:(id)arg1 error:(id*)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)etag;
- (id)initWithCoder:(id)arg1;
- (id)initWithPCSData:(id)arg1;
- (id)itemID;
- (struct _OpaquePCSShareProtection { }*)pcs;
- (id)pcsData;
- (void)setEtag:(id)arg1;
- (void)setPcs:(struct _OpaquePCSShareProtection { }*)arg1;
- (void)setPcsData:(id)arg1;

@end
