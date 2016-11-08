//
//  PlaceListViewController.h
//  KMNearByPlaces
//
//  Created by Student P_07 on 08/11/16.
//  Copyright © 2016 Karishma Mahajan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@interface PlaceListViewController : UIViewController<UITableViewDelegate,UITableViewDataSource,CLLocationManagerDelegate,NSXMLParserDelegate>

{
    CLLocationManager *myLocationManager;
    NSString *currentLatitude;
    NSString *currentLongitude;
    
    NSMutableArray *placeList;
    NSMutableDictionary *placeDictionary;
    NSMutableDictionary *latLongDictionary;
    
    
    NSXMLParser *parser;
    
    NSString *dataString;
    
    
}

@property NSString *selectedPlaceType;

@property (weak, nonatomic) IBOutlet UITableView *placeListTableView;

- (IBAction)actionRefresh:(id)sender;


@end
