/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */



@interface ABVCardRecord : NSObject 
{
    void *_record;
    struct __CFArray { } *_properties;
}

+ (struct __CFArray { }*)supportedProperties;
+ (BOOL)privateVCardEnabled;
+ (void)setPrivateVCardEnabled:(BOOL)arg1;
+ (void)setVCardField:(id)arg1 isPrivate:(BOOL)arg2;
+ (void)clearPrivateFields;
+ (BOOL)vcardFieldisPrivate:(id)arg1;
+ (void)setIncludeNotesInVCards:(BOOL)arg1;
+ (BOOL)includeNotesInVCards;
+ (void)setIncludePhotosInVCards:(BOOL)arg1;
+ (BOOL)includePhotosInVCards;

- (id)initWithRecord:(void*)arg1;
- (id)init;
- (id)initWithVCardRepresentation:(id)arg1;
- (void)dealloc;
- (id)vCardRepresentationForMode:(NSInteger)arg1;
- (void*)record;
- (BOOL)setValue:(void*)arg1 forProperty:(NSUInteger)arg2;
- (BOOL)_showField:(NSUInteger)arg1;
- (BOOL)_showField:(NSUInteger)arg1 identifier:(NSInteger)arg2;
- (id)_vCardKeyForAddressLabel:(id)arg1 vCard3:(BOOL)arg2;
- (struct __CFString { }*)_vCardKeyForGenericLabel:(id)arg1;
- (id)_vCardKeysForPhoneLabel:(id)arg1;
- (struct __CFString { }*)_vCardKeyForEmailLabel:(id)arg1;
- (void)appendLabel:(id)arg1 toVCardRep:(id)arg2 inGroup:(id)arg3;
- (id)createISO8061StringFromDate:(id)arg1;
- (id)ISO8061StringFromDate:(id)arg1;
- (void*)copyValueForProperty:(NSUInteger)arg1;
- (void*)valueForProperty:(NSUInteger)arg1;
- (id)propertyLineForGenericABProperty:(NSUInteger)arg1 vCardProperty:(id)arg2 is21:(BOOL)arg3 groupCount:(NSInteger*)arg4;
- (id)propertyLineForInstantMessageHandles:(id)arg1 groupCount:(NSInteger*)arg2;
- (id)propertyLineForGenericABProperty21:(NSUInteger)arg1 vCardProperty:(id)arg2;
- (id)propertyLineForIMHandles:(id)arg1 labels:(id)arg2 vCardProperty:(id)arg3;
- (id)dataForInstantMessageProperties;
- (id)encodedLineForValue:(id)arg1;
- (id)encodedDataForValue:(id)arg1 charsetName:(id*)arg2;
- (id)_fullNameIncludingAuxiliaryElements:(BOOL)arg1;
- (BOOL)_isCompany;
- (id)_fullName;
- (id)alternateName;
- (id)_realCompositeName;
- (id)_21vCardRepresentationAsData;
- (id)imageData;
- (id)_vCardRepresentationAsString;

@end