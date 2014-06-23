//
//  LufthouseTour.h
//  basic-museum-ios
//
//  Created by Adam Gleichsner on 6/17/14.
//  Copyright (c) 2014 Lufthouse. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LufthouseTour : NSObject

@property (nonatomic, strong) NSString *tourName;
@property (nonatomic, strong) NSMutableArray *beaconIDs;
@property (nonatomic, strong) NSMutableArray *beaconContent;
@property (nonatomic, strong) NSMutableArray *beaconContentType;
@property (nonatomic, strong) NSMutableArray *beaconAudio;


-(LufthouseTour *)initTourWithName: (NSString *) tourName beaconIDArray: (NSMutableArray *) beaconIDs beaconContentArray: (NSMutableArray *) beaconContent beaconContentTypeArray:(NSMutableArray *) beaconContentTyoe beaconAudioArray: (NSMutableArray *) beaconAudio;
-(NSString *)getTourName;
-(NSString *)getBeaconIDAtIndex: (NSInteger) index;
-(NSString *)getBeaconContentAtIndex: (NSInteger) index;
-(NSString *)getBeaconContentTypeAtIndex: (NSInteger) index;
-(NSString *)getBeaconAudioAtIndex: (NSInteger) index;
-(void)addBeaconID: (NSString *) newID addBeaconContent:(NSString *) newContent;
-(NSInteger)findIndexOfID: (NSString *) targetID;
-(NSInteger)findIndexOfContent: (NSString *) targetContent;



@end
