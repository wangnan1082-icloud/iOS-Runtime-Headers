/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSuggestionsUsageLogMessage : PBCodable <NSCopying> {
    NSMutableArray *_displayedResults;
    struct { 
        unsigned int searchFieldType : 1; 
        unsigned int selectedIndex : 1; 
        unsigned int suggestionEntryIndex : 1; 
        unsigned int suggestionEntryListIndex : 1; 
    } _has;
    NSString *_prefix;
    int _searchFieldType;
    int _selectedIndex;
    GEOPDAutocompleteEntry *_suggestionEntry;
    int _suggestionEntryIndex;
    int _suggestionEntryListIndex;
    NSData *_suggestionEntryMetadata;
    NSData *_suggestionMetadata;
}

@property (nonatomic, retain) NSMutableArray *displayedResults;
@property (nonatomic, readonly) BOOL hasPrefix;
@property (nonatomic) BOOL hasSearchFieldType;
@property (nonatomic) BOOL hasSelectedIndex;
@property (nonatomic, readonly) BOOL hasSuggestionEntry;
@property (nonatomic) BOOL hasSuggestionEntryIndex;
@property (nonatomic) BOOL hasSuggestionEntryListIndex;
@property (nonatomic, readonly) BOOL hasSuggestionEntryMetadata;
@property (nonatomic, readonly) BOOL hasSuggestionMetadata;
@property (nonatomic, retain) NSString *prefix;
@property (nonatomic) int searchFieldType;
@property (nonatomic) int selectedIndex;
@property (nonatomic, retain) GEOPDAutocompleteEntry *suggestionEntry;
@property (nonatomic) int suggestionEntryIndex;
@property (nonatomic) int suggestionEntryListIndex;
@property (nonatomic, retain) NSData *suggestionEntryMetadata;
@property (nonatomic, retain) NSData *suggestionMetadata;

- (void)addDisplayedResult:(id)arg1;
- (void)clearDisplayedResults;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayedResultAtIndex:(unsigned int)arg1;
- (id)displayedResults;
- (unsigned int)displayedResultsCount;
- (BOOL)hasPrefix;
- (BOOL)hasSearchFieldType;
- (BOOL)hasSelectedIndex;
- (BOOL)hasSuggestionEntry;
- (BOOL)hasSuggestionEntryIndex;
- (BOOL)hasSuggestionEntryListIndex;
- (BOOL)hasSuggestionEntryMetadata;
- (BOOL)hasSuggestionMetadata;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)prefix;
- (BOOL)readFrom:(id)arg1;
- (int)searchFieldType;
- (int)selectedIndex;
- (void)setDisplayedResults:(id)arg1;
- (void)setHasSearchFieldType:(BOOL)arg1;
- (void)setHasSelectedIndex:(BOOL)arg1;
- (void)setHasSuggestionEntryIndex:(BOOL)arg1;
- (void)setHasSuggestionEntryListIndex:(BOOL)arg1;
- (void)setPrefix:(id)arg1;
- (void)setSearchFieldType:(int)arg1;
- (void)setSelectedIndex:(int)arg1;
- (void)setSuggestionEntry:(id)arg1;
- (void)setSuggestionEntryIndex:(int)arg1;
- (void)setSuggestionEntryListIndex:(int)arg1;
- (void)setSuggestionEntryMetadata:(id)arg1;
- (void)setSuggestionMetadata:(id)arg1;
- (id)suggestionEntry;
- (int)suggestionEntryIndex;
- (int)suggestionEntryListIndex;
- (id)suggestionEntryMetadata;
- (id)suggestionMetadata;
- (void)writeTo:(id)arg1;

@end
