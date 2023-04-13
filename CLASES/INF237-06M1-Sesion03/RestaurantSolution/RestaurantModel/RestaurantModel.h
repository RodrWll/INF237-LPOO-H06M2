#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace RestaurantModel {
	public ref class RobotWaiter {
        public:
            property int Id; //Variable de instancia
            property String^ FactoryCode;
            property String^ SerialNumber;
            property int BatteryAvailableTime;
            property int Diameter;
            property int Velocity;
            property int LoadCapacity;
            property String^ TrayType;
            property String^ Language;
            property int TableNumber;
            property double InvoiceTotal;
            property List<String^>^ Devices;
            property String^ Name;
    };
}
