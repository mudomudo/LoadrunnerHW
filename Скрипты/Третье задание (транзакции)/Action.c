Action()
{

	lr_start_transaction("buyFlightTicketAndLogout");

	
	lr_start_transaction("getWebtours");
web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("WebTours", 
		"URL=http://127.0.0.1:1080/WebTours/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_revert_auto_header("Sec-Fetch-User");

	web_add_auto_header("Sec-Fetch-Dest", 
		"frame");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("Origin", 
		"http://127.0.0.1:1080");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	lr_think_time(17);
	
	lr_end_transaction("getWebtours", LR_AUTO);
	
	
	
	lr_start_transaction("login");


	web_reg_find("Text=User password was correct",
		LAST);
	
	web_submit_form("login.pl", 
		"Snapshot=t2.inf", 
		ITEMDATA, 
		"Name=username", "Value={login}", ENDITEM, 
		"Name=password", "Value={passwordDat}", ENDITEM, 
		LAST);

	

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(4);
	
	lr_end_transaction("login", LR_AUTO);

lr_start_transaction("searchFlights");

	web_image("Search Flights Button", 
		"Alt=Search Flights Button", 
		"Snapshot=t3.inf", 
		LAST);

	web_add_auto_header("Origin", 
		"http://127.0.0.1:1080");
		
		

	

	
	web_reg_save_param_regexp(
		"ParamName=outbondFlight",
		"RegExp=Flight\" value=\"(.\\S*)\"",
		"NotFound=warning",
		SEARCH_FILTERS,
		"Scope=BODY",
		LAST);
		

	web_submit_form("reservations.pl", 
		"Snapshot=t4.inf", 
		ITEMDATA, 
		"Name=depart", "Value={cityOut}", ENDITEM, 
		"Name=departDate", "Value={outDate}", ENDITEM, 
		"Name=arrive", "Value={cityIn}", ENDITEM, 
		"Name=returnDate", "Value={returnDate}", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=roundtrip", "Value=<OFF>", ENDITEM, 
		"Name=seatPref", "Value={seat}", ENDITEM, 
		"Name=seatType", "Value={class}", ENDITEM, 
		"Name=findFlights.x","Value=65", ENDITEM,
		"Name=findFlights.y","Value=10", ENDITEM,
		LAST);
		
		lr_end_transaction("searchFlights", LR_AUTO);
		
		lr_start_transaction("chooseFlight");

	web_reg_find("Text=name=\"buyFlights\"",
		LAST);

	web_submit_form("reservations.pl_2", 
		"Snapshot=t5.inf", 
		ITEMDATA, 
		"Name=outboundFlight", "Value={outbondFlight}", ENDITEM, 
		"Name=reserveFlights.x", "Value=60", ENDITEM, 
		"Name=reserveFlights.y", "Value=10", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("Sec-Fetch-User");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("Origin", 
		"http://127.0.0.1:1080");
	
	lr_end_transaction("chooseFlight", LR_AUTO);

	lr_start_transaction("enterUserData");



	lr_think_time(11);

	
	web_reg_find("Reservation Made!",
		LAST);

	web_submit_form("reservations.pl_3", 
		"Snapshot=t6.inf", 
		ITEMDATA, 
		"Name=firstName", "Value={name}", ENDITEM, 
		"Name=lastName", "Value={name}", ENDITEM, 
		"Name=address1", "Value=", ENDITEM, 
		"Name=address2", "Value=", ENDITEM, 
		"Name=pass1", "Value=Jojo Bean", ENDITEM, 
		"Name=creditCard", "Value={creditNumber}", ENDITEM, 
		"Name=expDate", "Value={dateCard}", ENDITEM, 
		"Name=saveCC", "Value=<OFF>", ENDITEM,
		"Name=buyFlights.x","Value=54", ENDITEM,
		"Name=buyFlights.y","Value=10", ENDITEM,		
		LAST);

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");
	
	lr_end_transaction("enterUserData", LR_AUTO);

lr_start_transaction("signOff");

	web_image("SignOff Button", 
		"Alt=SignOff Button", 
		"Snapshot=t7.inf", 
		LAST);
		
		lr_end_transaction("signOff", LR_AUTO);
		
		lr_end_transaction("buyFlightTicketAndLogout", LR_AUTO);


	return 0;
}