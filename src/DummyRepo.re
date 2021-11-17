let dummyPfbCreditAccStmtResponse: Js.Json.t = [%bs.raw 
  {|
    {
        "cycle_report": "credit_cycle_report",
        "account": {
            "id": 3,
            "external_id": "262e5014-95f4-4f96-97fd-3cc2675dd003",
            "name": "PFBIntimationTest3",
            "brand_name": "CreditAccount1"
        },
        "cycle": {
            "start_date": "2021-01-22",
            "end_date": "2021-01-31",
            "zone_id": "Asia/Kolkata"
        },
        "payment_strategy": {
            "payment_strategy": "credit_strategy",
            "amount_limit": 7000,
            "days_limit": 12
        },
        "wallet_usage": {
            "wallet_usage": "credit_account_wallet_usage",
            "balance": {
                "amount": -7909
            },
            "strategy": {
                "payment_strategy": "credit_strategy",
                "amount_limit": 7000,
                "days_limit": 12
            },
            "credit_days_used": 0,
            "credit_days_usage_level": "Permissible",
            "credit_amount_used": 0,
            "credit_amount_usage_level": "Permissible"
        },
        "transactions": [
            {
                "transaction_type": "Debit",
                "transaction_subtype": "order_charge",
                "id": 116,
                "order_id": 32715,
                "amount": 200,
                "unsettled_amount": 0,
                "created_at": 1611343949049,
                "updated_at": 1611343949049
            },
            {
                "transaction_type": "Debit",
                "transaction_subtype": "order_charge",
                "id": 117,
                "order_id": 32716,
                "amount": 3000,
                "unsettled_amount": 0,
                "created_at": 1611344050756,
                "updated_at": 1611344050756
            },
            {
                "transaction_type": "Debit",
                "transaction_subtype": "order_charge",
                "id": 118,
                "order_id": 32719,
                "amount": 0,
                "unsettled_amount": 0,
                "created_at": 1611566422620,
                "updated_at": 1611566422620
            },
            {
                "transaction_type": "Debit",
                "transaction_subtype": "order_charge",
                "id": 118,
                "order_id": 32713,
                "amount": 4000,
                "unsettled_amount": 0,
                "created_at": 1611566422620,
                "updated_at": 1611566422620
            },
            {
                "transaction_type": "Credit",
                "transaction_subtype": "online_payment",
                "id": 118,
                "order_id": 32713,
                "amount": 4000,
                "unsettled_amount": 0,
                "created_at": 1611566422620,
                "updated_at": 1611566422620
            }
        ] ,
        "previous_cycle_wallet_balance": {
            "amount": -7909
        },
        "business_customers": [
            {
                "id": 41,
                "external_id": "1d9c6249-9348-49ab-b566-ec5934be677c",
                "account": {
                    "id": 3,
                    "external_id": "262e5014-95f4-4f96-97fd-3cc2675dd003",
                    "name": "PFBIntimationTest3",
                    "brand_name": "CreditAccount1"
                },
                "customer_id": 938,
                "is_admin": true
            },
            {
                "id": 42,
                "external_id": "1d9c6249-9348-49ab-b566-ec5934be677c",
                "account": {
                    "id": 3,
                    "external_id": "262e5014-95f4-4f96-97fd-3cc2675dd003",
                    "name": "PFBIntimationTest3",
                    "brand_name": "CreditAccount1"
                },
                "customer_id": 1318,
                "is_admin": true
            },
            {
                "id": 45,
                "external_id": "1d9c6249-9348-49ab-b566-ec5934be697c",
                "account": {
                    "id": 3,
                    "external_id": "262e5014-95f4-4f96-97fd-3cc2675dd003",
                    "name": "PFBIntimationTest3",
                    "brand_name": "CreditAccount1"
                },
                "customer_id": 1617,
                "is_admin": true
            },
            {
                "id": 46,
                "external_id": "1d9c6249-9348-49ab-b566-ec5934be697c",
                "account": {
                    "id": 3,
                    "external_id": "262e5014-95f4-4f96-97fd-3cc2675dd003",
                    "name": "PFBIntimationTest3",
                    "brand_name": "CreditAccount1"
                },
                "customer_id": 1900,
                "is_admin": false
            },
            {
                "id": 5,
                "external_id": "3a6dccbc-f759-43ea-9deb-74622e11c451",
                "account": {
                    "id": 3,
                    "external_id": "262e5014-95f4-4f96-97fd-3cc2675dd003",
                    "name": "PFBIntimationTest3",
                    "brand_name": "CreditAccount1"
                },
                "customer_id": 1834,
                "is_admin": false
            },
            {
                "id": 50,
                "external_id": "1d9c6249-9348-49ab-b566-ec5984be697c",
                "account": {
                    "id": 3,
                    "external_id": "262e5014-95f4-4f96-97fd-3cc2675dd003",
                    "name": "PFBIntimationTest3",
                    "brand_name": "CreditAccount1"
                },
                "customer_id": 1899,
                "is_admin": true
            }
        ],
        "cycle_orders": [
          {
              "order_id": 32716,
              "crn": "CRN36477479",
              "vehicle_type": "Tata Ace",
              "geo_region_info": {
                  "geo_region_id": 3,
                  "geo_region_name": "Bangalore",
                  "state_id": 10
              },
              "customer_info": {
                  "customer_id": 1318,
                  "customer_name": "Swapnilkotian Test",
                  "customer_mobile": "7338655416",
                  "customer_email": "shilpagowda@porter.in"
              },
              "order_address": {
                  "from_address": "547, 26th Main Rd, BTM 2nd Stage, Kuvempu Nagar, Stage 2, BTM Layout, Bengaluru, Karnataka 560068, India",
                  "to_address": "xerox 1st floor devarabisanahalli near passport seva kendra, Marathahalli, Bengaluru, Karnataka 560037, India"
              },
              "pickup_time": 1611344048,
              "order_status": "completed",
              "trip_info": {
                  trip_started_time: 1614593709,
                  trip_ended_time: 1614600909,
                  trip_distance_kms: 12.43,
                  vehicle_number: "KA-23-DF-1111",
              },
              "trip_fare": 500,
              "is_gst_applicable_on_rcm": false
          },
          {
              "order_id": 32719,
              "crn": "CRN36477908",
              "vehicle_type": "Tata Ace",
              "geo_region_info": {
                  "geo_region_id": 3,
                  "geo_region_name": "Bangalore",
                  "state_id": 10
              },
              "customer_info": {
                  "customer_id": 1318,
                  "customer_name": "Swapnilkotian Test",
                  "customer_mobile": "7338655416",
                  "customer_email": "shilpagowda@porter.in"
              },
              "order_address": {
                  "from_address": "547, 26th Main Rd, BTM 2nd Stage, Kuvempu Nagar, Stage 2, BTM Layout, Bengaluru, Karnataka 560068, India",
                  "to_address": "xerox 1st floor devarabisanahalli near passport seva kendra, Marathahalli, Bengaluru, Karnataka 560037, India"
              },
              "pickup_time": 1611344048,
              "order_status": "completed",
              "trip_info": {
                  trip_started_time: 1614593709,
                  trip_ended_time: 1614604509,
                  trip_distance_kms: 12.43,
                  vehicle_number: "KA-23-DF-1111",
              },
              "trip_fare": 7000,
              "is_gst_applicable_on_rcm": false
          },
          {
              "order_id": 32715,
              "crn": "CRN48470974",
              "vehicle_type": "Tata Ace",
              "geo_region_info": {
                  "geo_region_id": 3,
                  "geo_region_name": "Bangalore",
                  "state_id": 10
              },
              "customer_info": {
                  "customer_id": 938,
                  "customer_name": "SwapnilKotian",
                  "customer_mobile": "9967202221",
                  "customer_email": "swapnil@porter.in"
              },
              "order_address": {
                  "from_address": "517, 26th Main Rd, BTM 2nd Stage, Kuvempu Nagar, Stage 2, BTM Layout, Bengaluru, Karnataka 560068, India",
                  "to_address": "Yelahanka, Bengaluru, Karnataka, India"
              },
              "pickup_time": 1611343944,
              "order_status": "cancelled",
              "trip_info": null,
              "trip_fare": 0,
              "is_gst_applicable_on_rcm": false
          },
          {
              "order_id": 32717,
              "crn": "CRN37643390",
              "vehicle_type": "Tata Ace",
              "geo_region_info": {
                  "geo_region_id": 3,
                  "geo_region_name": "Bangalore",
                  "state_id": 10
              },
              "customer_info": {
                  "customer_id": 1318,
                  "customer_name": "Swapnilkotian Test",
                  "customer_mobile": "7338655416",
                  "customer_email": "shilpagowda@porter.in"
              },
              "order_address": {
                  "from_address": "548, 26th Main Rd, BTM 2nd Stage, Kuvempu Nagar, Stage 2, BTM Layout, Bengaluru, Karnataka 560068, India",
                  "to_address": "Mandya, Karnataka, India"
              },
              "pickup_time": 1611566417,
              "order_status": "cancelled",
              "trip_info": null,
              "trip_fare": 0,
              "is_gst_applicable_on_rcm": false
          },
          {
              "order_id": 32713,
              "crn": "CRN36477479",
              "vehicle_type": "Tata Ace",
              "geo_region_info": {
                  "geo_region_id": 3,
                  "geo_region_name": "Bangalore",
                  "state_id": 10
              },
              "customer_info": {
                  "customer_id": 1318,
                  "customer_name": "Swapnilkotian Test",
                  "customer_mobile": "7338655416",
                  "customer_email": "shilpagowda@porter.in"
              },
              "order_address": {
                  "from_address": "547, 26th Main Rd, BTM 2nd Stage, Kuvempu Nagar, Stage 2, BTM Layout, Bengaluru, Karnataka 560068, India",
                  "to_address": "xerox 1st floor devarabisanahalli near passport seva kendra, Marathahalli, Bengaluru, Karnataka 560037, India"
              },
              "pickup_time": 1611344048,
              "order_status": "completed",
              "trip_info": {
                  trip_started_time: 1610094960,
                  trip_ended_time: 1610094977,
                  trip_distance_kms: 12.43,
                  vehicle_number: "KA-23-DF-1111",
              },
              "trip_fare": 5000,
              "is_gst_applicable_on_rcm": false
          }],
        "generation_ts": 1612331637061
      }
  |}
];

let dummyPfbAdvancedAccStmtResponse: Js.Json.t = [%bs.raw 
  {|
    {
        "cycle_report": "advance_cycle_report",
        "account": {
            "id": 1,
            "external_id": "4c79e325-909d-4a6c-acd3-4ab7e04f896c",
            "name": "PFBIntimationTest1",
            "brand_name": "AdvanceAccount"
        },
        "cycle": {
            "start_date": "2021-01-22",
            "end_date": "2021-01-31",
            "zone_id": "Asia/Kolkata"
        },
        "payment_strategy": {
            "payment_strategy": "advance_strategy"
        },
        "wallet_usage": {
            "wallet_usage": "advance_account_wallet_usage",
            "balance": {
                "amount": 11800
            },
            "strategy": {
                "payment_strategy": "advance_strategy"
            },
            "balance_usage_level": "Sufficient"
        },
        "transactions": [
        {
            "transaction_type": "Debit",
            "transaction_subtype": "order_charge",
            "id": 116,
            "order_id": 32715,
            "amount": 200,
            "unsettled_amount": 0,
            "created_at": 1611343949049,
            "updated_at": 1611343949049
        },
        {
            "transaction_type": "Debit",
            "transaction_subtype": "order_charge",
            "id": 117,
            "order_id": 32716,
            "amount": 3000,
            "unsettled_amount": 0,
            "created_at": 1611344050756,
            "updated_at": 1611344050756
        },
        {
            "transaction_type": "Debit",
            "transaction_subtype": "order_charge",
            "id": 118,
            "order_id": 32717,
            "amount": 307,
            "unsettled_amount": 0,
            "created_at": 1611566422620,
            "updated_at": 1611566422620
        },
        {
            "transaction_type": "Debit",
            "transaction_subtype": "order_charge",
            "id": 118,
            "order_id": 32718,
            "amount": 500,
            "unsettled_amount": 0,
            "created_at": 1611566422620,
            "updated_at": 1611566422620
        },
        {
            "transaction_type": "Debit",
            "transaction_subtype": "order_charge",
            "id": 118,
            "order_id": 32719,
            "amount": 400,
            "unsettled_amount": 0,
            "created_at": 1611566422620,
            "updated_at": 1611566422620
        },
        {
            "transaction_type": "Debit",
            "transaction_subtype": "order_charge",
            "id": 118,
            "order_id": 32720,
            "amount": 3005,
            "unsettled_amount": 0,
            "created_at": 1611566422620,
            "updated_at": 1611566422620
        },
        ],
        "cycle_orders": [
        {
            "order_id": 32715,
            "crn": "CRN36477479",
            "vehicle_type": "Tata Ace",
            "geo_region_info": {
                "geo_region_id": 3,
                "geo_region_name": "Bangalore",
                "state_id": 10
            },
            "customer_info": {
                "customer_id": 1318,
                "customer_name": "Swapnilkotian Test",
                "customer_mobile": "7338655416",
                "customer_email": "shilpagowda@porter.in"
            },
            "order_address": {
                "from_address": "547, 26th Main Rd, BTM 2nd Stage, Kuvempu Nagar, Stage 2, BTM Layout, Bengaluru, Karnataka 560068, India",
                "to_address": "xerox 1st floor devarabisanahalli near passport seva kendra, Marathahalli, Bengaluru, Karnataka 560037, India"
            },
            "pickup_time": 1611344048,
            "order_status": "completed",
            "trip_info": {
                trip_started_time: 1612873800,
                trip_ended_time: 1612881000,
                trip_distance_kms: 200,
                vehicle_number: "KA-23-DF-1111",
            },
            "trip_fare": 500,
            "is_gst_applicable_on_rcm": false
        },
        {
            "order_id": 32716,
            "crn": "CRN36477908",
            "vehicle_type": "Tata Ace",
            "geo_region_info": {
                "geo_region_id": 3,
                "geo_region_name": "Bangalore",
                "state_id": 10
            },
            "customer_info": {
                "customer_id": 1318,
                "customer_name": "Swapnilkotian Test",
                "customer_mobile": "7338655416",
                "customer_email": "shilpagowda@porter.in"
            },
            "order_address": {
                "from_address": "547, 26th Main Rd, BTM 2nd Stage, Kuvempu Nagar, Stage 2, BTM Layout, Bengaluru, Karnataka 560068, India",
                "to_address": "xerox 1st floor devarabisanahalli near passport seva kendra, Marathahalli, Bengaluru, Karnataka 560037, India"
            },
            "pickup_time": 1611344048,
            "order_status": "completed",
            "trip_info": {
                trip_started_time: 1612873800,
                trip_ended_time: 1612881000,
                trip_distance_kms: 100,
                vehicle_number: "KA-23-DF-1111",
            },
            "trip_fare": 7000,
            "is_gst_applicable_on_rcm": false
        }],
        "generation_ts": 1612331637061
    }
  |}
]
