Một người lính muốn mua w quả chuối trong cửa hàng. Anh ta phải trả k đô la cho quả chuối đầu tiên, 2 k đô la cho quả thứ hai, v.v. (nói cách khác, anh ta phải trả i · k đô la cho quả chuối thứ i ).

Anh ta có n đô la. Anh ta phải vay bao nhiêu đô la từ người bạn lính của mình để mua w chuối?

Đầu vào:

Dòng đầu tiên chứa ba số nguyên dương k ,  n ,  w ( 1 ≤   k ,  w   ≤ 1000 , 0 ≤  n  ≤ 10 9 ), là giá của quả chuối đầu tiên, số đô la ban đầu mà người lính có và số chuối mà anh ta muốn.

Đầu ra:

Xuất ra một số nguyên — số tiền đô la mà người lính phải vay từ bạn mình. Nếu anh ta không phải vay tiền, hãy xuất ra 0 .

Giải pháp:

            Tổng chi phí = k x (1 + 2 + ... + w) = k x [(w x (w + 1)] / 2

Sau đó, ta so sánh tổng chi phí với số tiền n mà người lính có. Nếu tổng chi phí lớn hơn n, ta sẽ tính số tiền cần phải vay là:

            Tiền cần vay = max(0, tổng chi phí - n)
