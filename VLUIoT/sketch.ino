#include "VLUIoT.h"
#include "VLUAVG.h"
#include <DHT.h>
#define DHTPIN 7
#define DHTTYPE DHT22
DHT dht(DHTPIN,DHTTYPE);

VLUIoT led(13);
VLUAVG sensorData;

void setup() {
    Serial.begin(9600);
  // Không cần thiết lập gì thêm
}

void loop() {
  // led.on(4000);  // Bật LED trong 1 giây
  // led.off(1000); // Tắt LED trong 1 giây
   // Giả sử rằng bạn đã đọc giá trị nhiệt độ và độ ẩm từ cảm biến
  float temperature = dht.readTemperature();// Hàm này cần được định nghĩa để đọc giá trị nhiệt độ từ cảm biến
  float humidity = dht.readHumidity(); // Hàm này cần được định nghĩa để đọc giá trị độ ẩm từ cảm biến
  Serial.println(temperature);
 Serial.println(humidity);
  // Thêm giá trị nhiệt độ và độ ẩm vào thư viện
  sensorData.addTemperature(temperature);
  sensorData.addHumidity(humidity);

  // In giá trị trung bình nhiệt độ và độ ẩm
  Serial.print("Average temperature: ");
  Serial.println(sensorData.averageTemperature());
  Serial.print("Average humidity: ");
  Serial.println(sensorData.averageHumidity());

  delay(4000); // Đợi 1 giây trước khi đọc và in giá trị tiếp theo


}
