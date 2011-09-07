//  Created by Jesse MacFadyen on 10-10-31.
//  Copyright Nitobi 2010. All rights reserved.

var NativeTableView{
    show : function(x,y,width,height){
        PhoneGap.exec("com.phonegap.tableview.showTableView");
    }, 
    
    hide : function(){
        PhoneGap.exec("com.phonegap.tableview.hideTableView");
    }, 
};