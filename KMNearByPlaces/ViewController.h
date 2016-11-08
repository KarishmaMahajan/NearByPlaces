//
//  ViewController.h
//  KMNearByPlaces
//
//  Created by Student P_07 on 08/11/16.
//  Copyright © 2016 Karishma Mahajan. All rights reserved.
//
#define kGoogleAPIKey @"AIzaSyDUF1Eeu-reQlHa3Gs05Fk4drIqycUaFhQ"

#define kLatitude 19.0760

#define kLongitude 72.8777
#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>



@interface ViewController : UIViewController<UITableViewDataSource,UITableViewDelegate>
{
    NSArray *placeTypes;
    
}
@property (weak, nonatomic) IBOutlet UITableView *placeTypeTableView;




@end

