## Đặt bài toán 

- Phần cứng: Bao gồm nút bấm nhả (push button),một đèn LED hiển thị tích hợp sẵn trên các dev board ,một đèn LED kết nối với chân GPIO ngoài và 1 điện trở 1 kΩ
- Chức năng của chương trình:
   + Khi double click sẽ chuyển chế độ điều khiển giữa hai LED (LED1 và LED2)
   + Khi single click sẽ bật tắt cái LED đang được điều khiển (LED1 hoặc 2, đã chọn ở bước 1)
   + Khi giữ nút nhấn sẽ làm cái LED đang được điều khiển nhấp nháy 200ms một lần

## Mục đích DEMO

Project này sử dụng thư viện mã mở nổi tiếng gần đây là OneButton và thư viện LED tự viết:
- `OneButton` tác giả Matthias Hertel: https://github.com/mathertel/OneButton 
- `LED.h` Cung cấp API sáng sủa để khởi tạo và điều khiển LED (đảo trạng thái - flip, và nháy - blink)
### Kết nối phần cứng
- Kết nối LED 1 vào chân `ledPin1` (GPIO 2 có sẵn trên dev board)
- Kết nối LED 2 vào chân `ledPin2` (GPIO 32)
- Kết nối nút bấm vào chân `buttonPin` (GPIO 22)

