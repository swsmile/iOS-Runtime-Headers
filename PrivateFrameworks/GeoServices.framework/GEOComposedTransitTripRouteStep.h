/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOComposedTransitTripRouteStep : GEOComposedTransitRouteStep {
    NSArray *_arrivalTimes;
    BOOL _canPreloadTiles;
    double _departureTimeIntervalMax;
    double _departureTimeIntervalMin;
    NSArray *_departureTimes;
    GEOPBTransitStop *_destinationStop;
    BOOL _isBus;
    BOOL _isRail;
    GEOPBTransitStop *_originStop;
    NSArray *_routeLineArtwork;
    <GEOTransitLine> *_transitLine;
    <GEOTransitSystem> *_transitSystem;
    GEOTransitVehicleInfo *_transitVehicle;
}

@property (nonatomic, readonly) NSDate *arrivalTime;
@property (nonatomic, readonly) NSTimeZone *arrivalTimeZone;
@property (nonatomic, readonly) NSArray *arrivalTimes;
@property (nonatomic, readonly) BOOL canPreloadTilesForThisStep;
@property (nonatomic, readonly) NSDate *departureTime;
@property (nonatomic, readonly) double departureTimeIntervalMax;
@property (nonatomic, readonly) double departureTimeIntervalMin;
@property (nonatomic, readonly) NSTimeZone *departureTimeZone;
@property (nonatomic, readonly) NSArray *departureTimes;
@property (nonatomic, readonly) BOOL isBus;
@property (nonatomic, readonly) BOOL isRail;
@property (nonatomic, readonly) NSArray *routeLineArtwork;
@property (nonatomic, readonly) <GEOTransitLine> *transitLine;
@property (nonatomic, readonly) <GEOTransitSystem> *transitSystem;
@property (nonatomic, readonly) GEOTransitVehicleInfo *transitVehicle;
@property (nonatomic, readonly) GEOComposedTransitTripRouteLeg *tripLeg;

- (id)arrivalTime;
- (id)arrivalTimeZone;
- (id)arrivalTimes;
- (BOOL)canPreloadTilesForThisStep;
- (void)dealloc;
- (id)departureTime;
- (double)departureTimeIntervalMax;
- (double)departureTimeIntervalMin;
- (id)departureTimeZone;
- (id)departureTimes;
- (id)description;
- (id)destinationStop;
- (unsigned int)duration;
- (BOOL)hasDuration;
- (id)initWithComposedRoute:(id)arg1 decoderData:(id)arg2 step:(id)arg3 stepIndex:(unsigned int)arg4 duration:(unsigned int)arg5 pointRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg6;
- (BOOL)isBus;
- (BOOL)isRail;
- (id)originStop;
- (id)routeLineArtwork;
- (id)transitLine;
- (id)transitSystem;
- (id)transitVehicle;
- (id)tripLeg;

@end
