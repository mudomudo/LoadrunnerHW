Action()
{
	lr_start_transaction("searchWithoutPay");

	lr_start_transaction("1_startPage");


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
	
	lr_end_transaction("1_startPage", LR_AUTO);


	lr_think_time(15);
	
	lr_start_transaction("2_login");

	web_reg_find("Text=User password was correct",
		LAST);

	web_submit_form("login.pl", 
		"Snapshot=t2.inf", 
		ITEMDATA, 
		"Name=username", "Value={login}", ENDITEM, 
		"Name=password", "Value={password}", ENDITEM,
		"Name=login.x", "Value=51", ENDITEM,
		"Name=login.y", "Value=13", ENDITEM,		
		LAST);

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");
	
	lr_end_transaction("2_login", LR_AUTO);
	
	lr_start_transaction("3_flightSearchButton");

	web_reg_find("Text=User has returned to the search page.",
		LAST);

	web_image("Search Flights Button", 
		"Alt=Search Flights Button", 
		"Snapshot=t3.inf", 
		LAST);

	web_add_auto_header("Origin", 
		"http://127.0.0.1:1080");
	
	lr_end_transaction("3_flightSearchButton", LR_AUTO);


	lr_think_time(6);
	
	lr_start_transaction("4_searchParam");
	
	
	web_reg_save_param_regexp(
		"ParamName=outboundFlight",
		"RegExp=name=\"outboundFlight\" value=\"(.*?\\S)\"",
		"Group=1",
		"Ordinal=ALL",
		SEARCH_FILTERS,
		LAST);
	
	web_reg_find("Text=<title>Flight Selections</title>",
		LAST);

	web_submit_form("reservations.pl", 
		"Snapshot=t4.inf", 
		ITEMDATA, 
		"Name=depart", "Value={cityDep}", ENDITEM, 
		"Name=departDate", "Value={departDate}", ENDITEM, 
		"Name=arrive", "Value={cityRet}", ENDITEM, 
		"Name=returnDate", "Value={returnDate}", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=roundtrip", "Value=<OFF>", ENDITEM, 
		"Name=seatPref", "Value={seat}", ENDITEM, 
		"Name=seatType", "Value={type}", ENDITEM, 
		"Name=findFlights.x", "Value=48", ENDITEM,
		"Name=findFlights.y", "Value=5", ENDITEM,
		LAST);
	
	lr_end_transaction("4_searchParam", LR_AUTO);
	
	lr_start_transaction("5_selectFlight");
	
	web_reg_find("Text=<title>Flight Reservation</title>",
		LAST);


	web_submit_form("reservations.pl_2", 
		"Snapshot=t5.inf", 
		ITEMDATA, 
		"Name=outboundFlight", "Value={outboundFlight_1}", ENDITEM, 
		"Name=reserveFlights.x", "Value=60", ENDITEM, 
		"Name=reserveFlights.y", "Value=6", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("Sec-Fetch-User");
	
	lr_end_transaction("5_selectFlight", LR_AUTO);


	lr_think_time(12);
	
	lr_start_transaction("6_signOff");
	
	web_reg_find("Text= A Session ID has been created",
		LAST);

	web_image("SignOff Button", 
		"Alt=SignOff Button", 
		"Snapshot=t6.inf", 
		LAST);
	
	lr_end_transaction("6_signOff", LR_AUTO);
	
	lr_end_transaction("searchWithoutPay", LR_AUTO);



	return 0;
}