Action()
{

	lr_start_transaction("getWebTours");

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

	web_reg_find("Text=<title>Web Tours</title>",
		LAST);

	web_url("WebTours", 
		"URL=http://127.0.0.1:1080/WebTours/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t8.inf", 
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
	lr_end_transaction("getWebtours", LR_AUTO);


	lr_think_time(4);
	
	lr_start_transaction("login");


	web_reg_find("Text=User password was correct",
		LAST);

	web_submit_form("login.pl", 
		"Snapshot=t9.inf", 
		ITEMDATA, 
		"Name=username", "Value={login}", ENDITEM, 
		"Name=password", "Value={passwordDat}", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");
	
	lr_end_transaction("login", LR_AUTO);
	
	lr_start_transaction("searchFlights");

	web_reg_find("Text=User has returned to the search page",
		LAST);

	web_image("Search Flights Button", 
		"Alt=Search Flights Button", 
		"Snapshot=t10.inf", 
		LAST);

	web_add_auto_header("Origin", 
		"http://127.0.0.1:1080");
	
	lr_end_transaction("searchFlights", LR_AUTO);


	lr_think_time(9);
	
	lr_start_transaction("inputData");

	
	web_reg_save_param_regexp(
		"ParamName=outboundFlight",
		"RegExp=name=\"outboundFlight\" value=\"(.*?\\S)\"",
		"Group=1",
		"Ordinal=ALL",
		SEARCH_FILTERS,
		LAST);

	web_submit_form("reservations.pl", 
		"Snapshot=t11.inf", 
		ITEMDATA, 
		"Name=depart", "Value={cityOut}", ENDITEM, 
		"Name=departDate", "Value={outDate}", ENDITEM, 
		"Name=arrive", "Value={cityIn}", ENDITEM, 
		"Name=returnDate", "Value={returnDate}", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=roundtrip", "Value=<OFF>", ENDITEM, 
		"Name=seatPref", "Value={seat}", ENDITEM, 
		"Name=seatType", "Value={class}", ENDITEM,
		"Name=findFlights.x", "Value=62", ENDITEM,
		"Name=findFlights.y", "Value=12", ENDITEM,		
		LAST);
	
	lr_end_transaction("inputData", LR_AUTO);

	lr_start_transaction("chooseFlight");

	web_reg_find("Text=<title>Flight Reservation</title>",
		LAST);

	
	web_submit_form("reservations.pl_2", 
		"Snapshot=t12.inf", 
		ITEMDATA, 
		"Name=outboundFlight", "Value={outboundFlight_1}", ENDITEM, 
		"Name=reserveFlights.x", "Value=32", ENDITEM, 
		"Name=reserveFlights.y", "Value=8", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("Sec-Fetch-User");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("Origin", 
		"http://127.0.0.1:1080");
	
	lr_end_transaction("chooseFlight", LR_AUTO);


	lr_think_time(4);
	
	lr_start_transaction("enterUserData");
	
	web_reg_find("Text=<title>Reservation Made!</title>",
		LAST);

	web_submit_form("reservations.pl_3", 
		"Snapshot=t13.inf", 
		ITEMDATA, 
		"Name=firstName", "Value={name}", ENDITEM, 
		"Name=lastName", "Value={name}", ENDITEM, 
		"Name=address1", "Value=", ENDITEM, 
		"Name=address2", "Value=", ENDITEM, 
		"Name=pass1", "Value=Jojo Bean", ENDITEM, 
		"Name=creditCard", "Value={creditNumber}", ENDITEM, 
		"Name=expDate", "Value={dateCard}", ENDITEM, 
		"Name=saveCC", "Value=<OFF>", ENDITEM, 
		"Name=buyFlights.x", "Value=70", ENDITEM,
		"Name=buyFlights.y", "Value=10", ENDITEM,
		LAST);

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");
	
	lr_end_transaction("enterUserData", LR_AUTO);
	
	lr_start_transaction("openFlightsList");

	web_reg_find("Text=User wants the intineraries",
		LAST);

	web_image("Itinerary Button", 
		"Alt=Itinerary Button", 
		"Snapshot=t14.inf", 
		LAST);

	web_add_header("Origin", 
		"http://127.0.0.1:1080");
	
	lr_end_transaction("openFlightsList", LR_AUTO);


	lr_think_time(12);
	
	lr_start_transaction("discardAllFlights");

	web_reg_find("Text=Flight Transaction Summary",
		LAST);

	web_submit_form("itinerary.pl", 
		"Snapshot=t15.inf", 
		ITEMDATA, 
		"Name=1", "Value=<OFF>", ENDITEM, 
		LAST);

	web_revert_auto_header("Sec-Fetch-User");

	web_add_header("Sec-Fetch-User", 
		"?1");
	lr_end_transaction("discardAllFlights", LR_AUTO);
	
	lr_start_transaction("signOff");

	web_reg_find("Text=A Session ID has been created and loaded into a cookie",
		LAST);

	web_image("SignOff Button", 
		"Alt=SignOff Button", 
		"Snapshot=t16.inf", 
		LAST);
	
	lr_end_transaction("signOff", LR_AUTO);


	return 0;
}