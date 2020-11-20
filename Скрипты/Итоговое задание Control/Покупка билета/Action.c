Action()
{
	
	lr_start_transaction("Вход в систему");


	web_set_sockets_option("SSL_VERSION", "2&3");

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

	web_revert_auto_header("Sec-Fetch-User");

	web_add_auto_header("Sec-Fetch-Dest", 
		"frame");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("Origin", 
		"http://127.0.0.1:1080");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");
	
	web_reg_find("Text=User password was correct",
		LAST);

	web_submit_form("login.pl", 
		"Snapshot=t2.inf", 
		ITEMDATA, 
		"Name=username", "Value={login}", ENDITEM, 
		"Name=password", "Value={password}", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");
	
	lr_end_transaction("Вход в систему", LR_AUTO);


	lr_think_time(4);
	
	lr_start_transaction("Поиск рейсов");

	web_reg_find("Text=User has returned to the search page.",
		LAST);

	web_image("Search Flights Button", 
		"Alt=Search Flights Button", 
		"Snapshot=t3.inf", 
		LAST);

	web_add_auto_header("Origin", 
		"http://127.0.0.1:1080");
	
	lr_end_transaction("Поиск рейсов", LR_AUTO);


	lr_think_time(5);
	
	lr_start_transaction("Ввод параметров рейса");

	web_reg_save_param_regexp(
		"ParamName=outboundFlights",
		"RegExp=name=\"outboundFlight\" value=\"(.*?\\S)\"",
		"Group=1",
		"Ordinal=ALL",
		SEARCH_FILTERS,
		LAST);

	web_submit_form("reservations.pl", 
		"Snapshot=t4.inf", 
		ITEMDATA, 
		"Name=depart", "Value={city}", ENDITEM, 
		"Name=departDate", "Value={departDate}", ENDITEM, 
		"Name=arrive", "Value={city}", ENDITEM, 
		"Name=returnDate", "Value={returnDate}", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=roundtrip", "Value=<OFF>", ENDITEM, 
		"Name=seatPref", "Value={seat}", ENDITEM, 
		"Name=seatType", "Value={class}", ENDITEM,
		"Name=findFlights.x", "Value=40", ENDITEM,
		"Name=findFlights.y", "Value=14", ENDITEM,		
		LAST);
	
	lr_end_transaction("Ввод параметров рейса", LR_AUTO);


	lr_think_time(12);
	
	lr_start_transaction("Выбор рейса");

	web_reg_find("Text=<title>Flight Reservation</title>",
		LAST);

	web_submit_form("reservations.pl_2", 
		"Snapshot=t5.inf", 
		ITEMDATA, 
		"Name=outboundFlight", "Value={outboundFlights_1}", ENDITEM, 
		"Name=reserveFlights.x", "Value=53", ENDITEM, 
		"Name=reserveFlights.y", "Value=10", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("Sec-Fetch-User");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("Origin", 
		"http://127.0.0.1:1080");
	
	lr_end_transaction("Выбор рейса", LR_AUTO);


	lr_think_time(7);
	
	lr_start_transaction("Ввод данных пользователя");

	web_reg_find("Text=<title>Reservation Made!</title>",
		LAST);

	web_submit_form("reservations.pl_3", 
		"Snapshot=t6.inf", 
		ITEMDATA, 
		"Name=firstName", "Value={name}", ENDITEM, 
		"Name=lastName", "Value={name}", ENDITEM, 
		"Name=address1", "Value=", ENDITEM, 
		"Name=address2", "Value=", ENDITEM, 
		"Name=pass1", "Value=Jojo Bean", ENDITEM, 
		"Name=creditCard", "Value={randomNumber}", ENDITEM, 
		"Name=expDate", "Value={dateCard}", ENDITEM, 
		"Name=saveCC", "Value=<OFF>", ENDITEM, 
		"Name=buyFlights.x", "Value=48", ENDITEM,
		"Name=buyFlights.y", "Value=10", ENDITEM,
		LAST);

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");
	
	lr_end_transaction("Ввод данных пользователя", LR_AUTO);


	lr_think_time(16);
	
	lr_start_transaction("Просмотр квитанций");

	web_reg_find("Text=User wants the intineraries",
		LAST);

	web_image("Itinerary Button", 
		"Alt=Itinerary Button", 
		"Snapshot=t7.inf", 
		LAST);
	
	lr_end_transaction("Просмотр квитанций", LR_AUTO);


	web_revert_auto_header("Sec-Fetch-User");

	lr_think_time(10);
	
	lr_start_transaction("Выход из системы");

	web_reg_find("Text=A Session ID has been created",
		LAST);

	web_image("SignOff Button", 
		"Alt=SignOff Button", 
		"Snapshot=t8.inf", 
		LAST);
	
	lr_end_transaction("Выход из системы", LR_AUTO);


	return 0;
}