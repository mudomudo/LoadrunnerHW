Action()
{
	
	lr_start_transaction("cancelFlight");

	
	lr_start_transaction("1_startWebtours");


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
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "2&3");

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_revert_auto_header("Sec-Fetch-User");

	web_add_auto_header("Sec-Fetch-Dest", 
		"frame");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("Origin", 
		"http://127.0.0.1:1080");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");
	
	lr_end_transaction("1_startWebtours", LR_AUTO);
	lr_start_transaction("2_login");

	web_reg_find("Text=User password was correct",
		LAST);

	web_submit_form("login.pl", 
		"Snapshot=t18.inf", 
		ITEMDATA, 
		"Name=username", "Value={login}", ENDITEM, 
		"Name=password", "Value={password}", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");
	lr_end_transaction("2_login", LR_AUTO);
	
	lr_start_transaction("3_checkFlights");


	
	web_reg_save_param_regexp(
		"ParamName=flightNumber",
		"RegExp=input type=\"checkbox\" name=\"(.*?)\"",
		"Group=1",
		"Ordinal=all",
		SEARCH_FILTERS,
		LAST);

	
	web_reg_find("Text=User wants the intineraries",
		LAST);

	web_image("Itinerary Button", 
		"Alt=Itinerary Button", 
		"Snapshot=t19.inf", 
		LAST);

	web_add_header("Origin", 
		"http://127.0.0.1:1080");
	
	lr_end_transaction("3_checkFlights", LR_AUTO);


	lr_think_time(13);

	
	lr_start_transaction("4_cancelFlight");

	web_reg_find("Text=<!-- Flight #1 -->",
		LAST);

	web_submit_form("itinerary.pl", 
		"Snapshot=t20.inf", 
		ITEMDATA, 
		"Name={flightNumber_1}", "Value=on", ENDITEM,
		"Name=removeFlights.x", "Value=59", ENDITEM,
		"Name=removeFlights.y", "Value=11", ENDITEM,		
		LAST);

	web_revert_auto_header("Sec-Fetch-User");

	web_add_header("Sec-Fetch-User", 
		"?1");
	
	lr_end_transaction("4_cancelFlight", LR_AUTO);
	
	lr_start_transaction("5_signOff");

	web_reg_find("Text=A Session ID has been created and loaded",
		LAST);

	web_image("SignOff Button", 
		"Alt=SignOff Button", 
		"Snapshot=t21.inf", 
		LAST);
	
	lr_end_transaction("5_signOff", LR_AUTO);
	
	lr_end_transaction("cancelFlight", LR_AUTO);



	return 0;
}