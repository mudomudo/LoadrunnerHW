Action()
{

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
		"Snapshot=t38.inf", 
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

	lr_think_time(9);

	web_submit_form("login.pl", 
		"Snapshot=t39.inf", 
		ITEMDATA, 
		"Name=username", "Value={login}", ENDITEM, 
		"Name=password", "Value={passwordDat}", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_image("Search Flights Button", 
		"Alt=Search Flights Button", 
		"Snapshot=t40.inf", 
		LAST);

	web_add_auto_header("Origin", 
		"http://127.0.0.1:1080");

	lr_think_time(20);

/*Correlation comment - Do not change!  Original value='241;181;10/30/2020' Name ='outboundFlight' Type ='ResponseBased'*/
//	web_reg_save_param_attrib(
//		"ParamName=outboundFlight",
//		"TagName=input",
//		"Extract=value",
//		"Name=outboundFlight",
//		"Type=radio",
//		SEARCH_FILTERS,
//		"IgnoreRedirections=No",
//		LAST);

	web_reg_save_param_regexp(
		"ParamName=outbondFlight",
		"RegExp=Flight\" value=\"(.\\S*)\"",
		"NotFound=warning",
		"Group=1",
		"Ordinal=ALL",
		SEARCH_FILTERS,
		"Scope=BODY",
		LAST);

	web_submit_form("reservations.pl", 
		"Snapshot=t41.inf", 
		ITEMDATA, 
		"Name=depart", "Value={cityIn}", ENDITEM, 
		"Name=departDate", "Value={dateIn}", ENDITEM, 
		"Name=arrive", "Value={cityOut}", ENDITEM, 
		"Name=returnDate", "Value={dateOut}", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=roundtrip", "Value=<OFF>", ENDITEM, 
		"Name=seatPref", "Value={seat}", ENDITEM, 
		"Name=seatType", "Value={class}", ENDITEM, 
		LAST);
		
			web_reg_save_param_regexp(
		"ParamName=outbondFlight",
		"RegExp=Flight\" value=\"(.\\S*)\"",
		"NotFound=warning",
		"Group=1",
		"Ordinal=ALL",
		SEARCH_FILTERS,
		"Scope=BODY",
		LAST);

	lr_think_time(4);

	web_submit_form("reservations.pl_2",
		"Snapshot=t42.inf",
		ITEMDATA,
		"Name=outboundFlight", "Value={outboundFlight}", ENDITEM,
		"Name=reserveFlights.x", "Value=55", ENDITEM,
		"Name=reserveFlights.y", "Value=14", ENDITEM,
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("Sec-Fetch-User");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("Origin", 
		"http://127.0.0.1:1080");

	web_submit_form("reservations.pl_3", 
		"Snapshot=t43.inf", 
		ITEMDATA, 
		"Name=firstName", "Value=Jojo", ENDITEM, 
		"Name=lastName", "Value=Bean", ENDITEM, 
		"Name=address1", "Value=", ENDITEM, 
		"Name=address2", "Value=", ENDITEM, 
		"Name=pass1", "Value=Jojo Bean", ENDITEM, 
		"Name=creditCard", "Value=1231241231231", ENDITEM, 
		"Name=expDate", "Value=1322", ENDITEM, 
		"Name=saveCC", "Value=<OFF>", ENDITEM, 
		LAST);

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_image("SignOff Button", 
		"Alt=SignOff Button", 
		"Snapshot=t44.inf", 
		LAST);

	return 0;
}