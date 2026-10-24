#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_0036A7B0
// Address: 0x36a7b0 - 0x36ae70
void func_0036A7B0_0x36a7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036A7B0_0x36a7b0");
#endif

    switch (ctx->pc) {
        case 0x36a7b0u: goto label_36a7b0;
        case 0x36a7b4u: goto label_36a7b4;
        case 0x36a7b8u: goto label_36a7b8;
        case 0x36a7bcu: goto label_36a7bc;
        case 0x36a7c0u: goto label_36a7c0;
        case 0x36a7c4u: goto label_36a7c4;
        case 0x36a7c8u: goto label_36a7c8;
        case 0x36a7ccu: goto label_36a7cc;
        case 0x36a7d0u: goto label_36a7d0;
        case 0x36a7d4u: goto label_36a7d4;
        case 0x36a7d8u: goto label_36a7d8;
        case 0x36a7dcu: goto label_36a7dc;
        case 0x36a7e0u: goto label_36a7e0;
        case 0x36a7e4u: goto label_36a7e4;
        case 0x36a7e8u: goto label_36a7e8;
        case 0x36a7ecu: goto label_36a7ec;
        case 0x36a7f0u: goto label_36a7f0;
        case 0x36a7f4u: goto label_36a7f4;
        case 0x36a7f8u: goto label_36a7f8;
        case 0x36a7fcu: goto label_36a7fc;
        case 0x36a800u: goto label_36a800;
        case 0x36a804u: goto label_36a804;
        case 0x36a808u: goto label_36a808;
        case 0x36a80cu: goto label_36a80c;
        case 0x36a810u: goto label_36a810;
        case 0x36a814u: goto label_36a814;
        case 0x36a818u: goto label_36a818;
        case 0x36a81cu: goto label_36a81c;
        case 0x36a820u: goto label_36a820;
        case 0x36a824u: goto label_36a824;
        case 0x36a828u: goto label_36a828;
        case 0x36a82cu: goto label_36a82c;
        case 0x36a830u: goto label_36a830;
        case 0x36a834u: goto label_36a834;
        case 0x36a838u: goto label_36a838;
        case 0x36a83cu: goto label_36a83c;
        case 0x36a840u: goto label_36a840;
        case 0x36a844u: goto label_36a844;
        case 0x36a848u: goto label_36a848;
        case 0x36a84cu: goto label_36a84c;
        case 0x36a850u: goto label_36a850;
        case 0x36a854u: goto label_36a854;
        case 0x36a858u: goto label_36a858;
        case 0x36a85cu: goto label_36a85c;
        case 0x36a860u: goto label_36a860;
        case 0x36a864u: goto label_36a864;
        case 0x36a868u: goto label_36a868;
        case 0x36a86cu: goto label_36a86c;
        case 0x36a870u: goto label_36a870;
        case 0x36a874u: goto label_36a874;
        case 0x36a878u: goto label_36a878;
        case 0x36a87cu: goto label_36a87c;
        case 0x36a880u: goto label_36a880;
        case 0x36a884u: goto label_36a884;
        case 0x36a888u: goto label_36a888;
        case 0x36a88cu: goto label_36a88c;
        case 0x36a890u: goto label_36a890;
        case 0x36a894u: goto label_36a894;
        case 0x36a898u: goto label_36a898;
        case 0x36a89cu: goto label_36a89c;
        case 0x36a8a0u: goto label_36a8a0;
        case 0x36a8a4u: goto label_36a8a4;
        case 0x36a8a8u: goto label_36a8a8;
        case 0x36a8acu: goto label_36a8ac;
        case 0x36a8b0u: goto label_36a8b0;
        case 0x36a8b4u: goto label_36a8b4;
        case 0x36a8b8u: goto label_36a8b8;
        case 0x36a8bcu: goto label_36a8bc;
        case 0x36a8c0u: goto label_36a8c0;
        case 0x36a8c4u: goto label_36a8c4;
        case 0x36a8c8u: goto label_36a8c8;
        case 0x36a8ccu: goto label_36a8cc;
        case 0x36a8d0u: goto label_36a8d0;
        case 0x36a8d4u: goto label_36a8d4;
        case 0x36a8d8u: goto label_36a8d8;
        case 0x36a8dcu: goto label_36a8dc;
        case 0x36a8e0u: goto label_36a8e0;
        case 0x36a8e4u: goto label_36a8e4;
        case 0x36a8e8u: goto label_36a8e8;
        case 0x36a8ecu: goto label_36a8ec;
        case 0x36a8f0u: goto label_36a8f0;
        case 0x36a8f4u: goto label_36a8f4;
        case 0x36a8f8u: goto label_36a8f8;
        case 0x36a8fcu: goto label_36a8fc;
        case 0x36a900u: goto label_36a900;
        case 0x36a904u: goto label_36a904;
        case 0x36a908u: goto label_36a908;
        case 0x36a90cu: goto label_36a90c;
        case 0x36a910u: goto label_36a910;
        case 0x36a914u: goto label_36a914;
        case 0x36a918u: goto label_36a918;
        case 0x36a91cu: goto label_36a91c;
        case 0x36a920u: goto label_36a920;
        case 0x36a924u: goto label_36a924;
        case 0x36a928u: goto label_36a928;
        case 0x36a92cu: goto label_36a92c;
        case 0x36a930u: goto label_36a930;
        case 0x36a934u: goto label_36a934;
        case 0x36a938u: goto label_36a938;
        case 0x36a93cu: goto label_36a93c;
        case 0x36a940u: goto label_36a940;
        case 0x36a944u: goto label_36a944;
        case 0x36a948u: goto label_36a948;
        case 0x36a94cu: goto label_36a94c;
        case 0x36a950u: goto label_36a950;
        case 0x36a954u: goto label_36a954;
        case 0x36a958u: goto label_36a958;
        case 0x36a95cu: goto label_36a95c;
        case 0x36a960u: goto label_36a960;
        case 0x36a964u: goto label_36a964;
        case 0x36a968u: goto label_36a968;
        case 0x36a96cu: goto label_36a96c;
        case 0x36a970u: goto label_36a970;
        case 0x36a974u: goto label_36a974;
        case 0x36a978u: goto label_36a978;
        case 0x36a97cu: goto label_36a97c;
        case 0x36a980u: goto label_36a980;
        case 0x36a984u: goto label_36a984;
        case 0x36a988u: goto label_36a988;
        case 0x36a98cu: goto label_36a98c;
        case 0x36a990u: goto label_36a990;
        case 0x36a994u: goto label_36a994;
        case 0x36a998u: goto label_36a998;
        case 0x36a99cu: goto label_36a99c;
        case 0x36a9a0u: goto label_36a9a0;
        case 0x36a9a4u: goto label_36a9a4;
        case 0x36a9a8u: goto label_36a9a8;
        case 0x36a9acu: goto label_36a9ac;
        case 0x36a9b0u: goto label_36a9b0;
        case 0x36a9b4u: goto label_36a9b4;
        case 0x36a9b8u: goto label_36a9b8;
        case 0x36a9bcu: goto label_36a9bc;
        case 0x36a9c0u: goto label_36a9c0;
        case 0x36a9c4u: goto label_36a9c4;
        case 0x36a9c8u: goto label_36a9c8;
        case 0x36a9ccu: goto label_36a9cc;
        case 0x36a9d0u: goto label_36a9d0;
        case 0x36a9d4u: goto label_36a9d4;
        case 0x36a9d8u: goto label_36a9d8;
        case 0x36a9dcu: goto label_36a9dc;
        case 0x36a9e0u: goto label_36a9e0;
        case 0x36a9e4u: goto label_36a9e4;
        case 0x36a9e8u: goto label_36a9e8;
        case 0x36a9ecu: goto label_36a9ec;
        case 0x36a9f0u: goto label_36a9f0;
        case 0x36a9f4u: goto label_36a9f4;
        case 0x36a9f8u: goto label_36a9f8;
        case 0x36a9fcu: goto label_36a9fc;
        case 0x36aa00u: goto label_36aa00;
        case 0x36aa04u: goto label_36aa04;
        case 0x36aa08u: goto label_36aa08;
        case 0x36aa0cu: goto label_36aa0c;
        case 0x36aa10u: goto label_36aa10;
        case 0x36aa14u: goto label_36aa14;
        case 0x36aa18u: goto label_36aa18;
        case 0x36aa1cu: goto label_36aa1c;
        case 0x36aa20u: goto label_36aa20;
        case 0x36aa24u: goto label_36aa24;
        case 0x36aa28u: goto label_36aa28;
        case 0x36aa2cu: goto label_36aa2c;
        case 0x36aa30u: goto label_36aa30;
        case 0x36aa34u: goto label_36aa34;
        case 0x36aa38u: goto label_36aa38;
        case 0x36aa3cu: goto label_36aa3c;
        case 0x36aa40u: goto label_36aa40;
        case 0x36aa44u: goto label_36aa44;
        case 0x36aa48u: goto label_36aa48;
        case 0x36aa4cu: goto label_36aa4c;
        case 0x36aa50u: goto label_36aa50;
        case 0x36aa54u: goto label_36aa54;
        case 0x36aa58u: goto label_36aa58;
        case 0x36aa5cu: goto label_36aa5c;
        case 0x36aa60u: goto label_36aa60;
        case 0x36aa64u: goto label_36aa64;
        case 0x36aa68u: goto label_36aa68;
        case 0x36aa6cu: goto label_36aa6c;
        case 0x36aa70u: goto label_36aa70;
        case 0x36aa74u: goto label_36aa74;
        case 0x36aa78u: goto label_36aa78;
        case 0x36aa7cu: goto label_36aa7c;
        case 0x36aa80u: goto label_36aa80;
        case 0x36aa84u: goto label_36aa84;
        case 0x36aa88u: goto label_36aa88;
        case 0x36aa8cu: goto label_36aa8c;
        case 0x36aa90u: goto label_36aa90;
        case 0x36aa94u: goto label_36aa94;
        case 0x36aa98u: goto label_36aa98;
        case 0x36aa9cu: goto label_36aa9c;
        case 0x36aaa0u: goto label_36aaa0;
        case 0x36aaa4u: goto label_36aaa4;
        case 0x36aaa8u: goto label_36aaa8;
        case 0x36aaacu: goto label_36aaac;
        case 0x36aab0u: goto label_36aab0;
        case 0x36aab4u: goto label_36aab4;
        case 0x36aab8u: goto label_36aab8;
        case 0x36aabcu: goto label_36aabc;
        case 0x36aac0u: goto label_36aac0;
        case 0x36aac4u: goto label_36aac4;
        case 0x36aac8u: goto label_36aac8;
        case 0x36aaccu: goto label_36aacc;
        case 0x36aad0u: goto label_36aad0;
        case 0x36aad4u: goto label_36aad4;
        case 0x36aad8u: goto label_36aad8;
        case 0x36aadcu: goto label_36aadc;
        case 0x36aae0u: goto label_36aae0;
        case 0x36aae4u: goto label_36aae4;
        case 0x36aae8u: goto label_36aae8;
        case 0x36aaecu: goto label_36aaec;
        case 0x36aaf0u: goto label_36aaf0;
        case 0x36aaf4u: goto label_36aaf4;
        case 0x36aaf8u: goto label_36aaf8;
        case 0x36aafcu: goto label_36aafc;
        case 0x36ab00u: goto label_36ab00;
        case 0x36ab04u: goto label_36ab04;
        case 0x36ab08u: goto label_36ab08;
        case 0x36ab0cu: goto label_36ab0c;
        case 0x36ab10u: goto label_36ab10;
        case 0x36ab14u: goto label_36ab14;
        case 0x36ab18u: goto label_36ab18;
        case 0x36ab1cu: goto label_36ab1c;
        case 0x36ab20u: goto label_36ab20;
        case 0x36ab24u: goto label_36ab24;
        case 0x36ab28u: goto label_36ab28;
        case 0x36ab2cu: goto label_36ab2c;
        case 0x36ab30u: goto label_36ab30;
        case 0x36ab34u: goto label_36ab34;
        case 0x36ab38u: goto label_36ab38;
        case 0x36ab3cu: goto label_36ab3c;
        case 0x36ab40u: goto label_36ab40;
        case 0x36ab44u: goto label_36ab44;
        case 0x36ab48u: goto label_36ab48;
        case 0x36ab4cu: goto label_36ab4c;
        case 0x36ab50u: goto label_36ab50;
        case 0x36ab54u: goto label_36ab54;
        case 0x36ab58u: goto label_36ab58;
        case 0x36ab5cu: goto label_36ab5c;
        case 0x36ab60u: goto label_36ab60;
        case 0x36ab64u: goto label_36ab64;
        case 0x36ab68u: goto label_36ab68;
        case 0x36ab6cu: goto label_36ab6c;
        case 0x36ab70u: goto label_36ab70;
        case 0x36ab74u: goto label_36ab74;
        case 0x36ab78u: goto label_36ab78;
        case 0x36ab7cu: goto label_36ab7c;
        case 0x36ab80u: goto label_36ab80;
        case 0x36ab84u: goto label_36ab84;
        case 0x36ab88u: goto label_36ab88;
        case 0x36ab8cu: goto label_36ab8c;
        case 0x36ab90u: goto label_36ab90;
        case 0x36ab94u: goto label_36ab94;
        case 0x36ab98u: goto label_36ab98;
        case 0x36ab9cu: goto label_36ab9c;
        case 0x36aba0u: goto label_36aba0;
        case 0x36aba4u: goto label_36aba4;
        case 0x36aba8u: goto label_36aba8;
        case 0x36abacu: goto label_36abac;
        case 0x36abb0u: goto label_36abb0;
        case 0x36abb4u: goto label_36abb4;
        case 0x36abb8u: goto label_36abb8;
        case 0x36abbcu: goto label_36abbc;
        case 0x36abc0u: goto label_36abc0;
        case 0x36abc4u: goto label_36abc4;
        case 0x36abc8u: goto label_36abc8;
        case 0x36abccu: goto label_36abcc;
        case 0x36abd0u: goto label_36abd0;
        case 0x36abd4u: goto label_36abd4;
        case 0x36abd8u: goto label_36abd8;
        case 0x36abdcu: goto label_36abdc;
        case 0x36abe0u: goto label_36abe0;
        case 0x36abe4u: goto label_36abe4;
        case 0x36abe8u: goto label_36abe8;
        case 0x36abecu: goto label_36abec;
        case 0x36abf0u: goto label_36abf0;
        case 0x36abf4u: goto label_36abf4;
        case 0x36abf8u: goto label_36abf8;
        case 0x36abfcu: goto label_36abfc;
        case 0x36ac00u: goto label_36ac00;
        case 0x36ac04u: goto label_36ac04;
        case 0x36ac08u: goto label_36ac08;
        case 0x36ac0cu: goto label_36ac0c;
        case 0x36ac10u: goto label_36ac10;
        case 0x36ac14u: goto label_36ac14;
        case 0x36ac18u: goto label_36ac18;
        case 0x36ac1cu: goto label_36ac1c;
        case 0x36ac20u: goto label_36ac20;
        case 0x36ac24u: goto label_36ac24;
        case 0x36ac28u: goto label_36ac28;
        case 0x36ac2cu: goto label_36ac2c;
        case 0x36ac30u: goto label_36ac30;
        case 0x36ac34u: goto label_36ac34;
        case 0x36ac38u: goto label_36ac38;
        case 0x36ac3cu: goto label_36ac3c;
        case 0x36ac40u: goto label_36ac40;
        case 0x36ac44u: goto label_36ac44;
        case 0x36ac48u: goto label_36ac48;
        case 0x36ac4cu: goto label_36ac4c;
        case 0x36ac50u: goto label_36ac50;
        case 0x36ac54u: goto label_36ac54;
        case 0x36ac58u: goto label_36ac58;
        case 0x36ac5cu: goto label_36ac5c;
        case 0x36ac60u: goto label_36ac60;
        case 0x36ac64u: goto label_36ac64;
        case 0x36ac68u: goto label_36ac68;
        case 0x36ac6cu: goto label_36ac6c;
        case 0x36ac70u: goto label_36ac70;
        case 0x36ac74u: goto label_36ac74;
        case 0x36ac78u: goto label_36ac78;
        case 0x36ac7cu: goto label_36ac7c;
        case 0x36ac80u: goto label_36ac80;
        case 0x36ac84u: goto label_36ac84;
        case 0x36ac88u: goto label_36ac88;
        case 0x36ac8cu: goto label_36ac8c;
        case 0x36ac90u: goto label_36ac90;
        case 0x36ac94u: goto label_36ac94;
        case 0x36ac98u: goto label_36ac98;
        case 0x36ac9cu: goto label_36ac9c;
        case 0x36aca0u: goto label_36aca0;
        case 0x36aca4u: goto label_36aca4;
        case 0x36aca8u: goto label_36aca8;
        case 0x36acacu: goto label_36acac;
        case 0x36acb0u: goto label_36acb0;
        case 0x36acb4u: goto label_36acb4;
        case 0x36acb8u: goto label_36acb8;
        case 0x36acbcu: goto label_36acbc;
        case 0x36acc0u: goto label_36acc0;
        case 0x36acc4u: goto label_36acc4;
        case 0x36acc8u: goto label_36acc8;
        case 0x36acccu: goto label_36accc;
        case 0x36acd0u: goto label_36acd0;
        case 0x36acd4u: goto label_36acd4;
        case 0x36acd8u: goto label_36acd8;
        case 0x36acdcu: goto label_36acdc;
        case 0x36ace0u: goto label_36ace0;
        case 0x36ace4u: goto label_36ace4;
        case 0x36ace8u: goto label_36ace8;
        case 0x36acecu: goto label_36acec;
        case 0x36acf0u: goto label_36acf0;
        case 0x36acf4u: goto label_36acf4;
        case 0x36acf8u: goto label_36acf8;
        case 0x36acfcu: goto label_36acfc;
        case 0x36ad00u: goto label_36ad00;
        case 0x36ad04u: goto label_36ad04;
        case 0x36ad08u: goto label_36ad08;
        case 0x36ad0cu: goto label_36ad0c;
        case 0x36ad10u: goto label_36ad10;
        case 0x36ad14u: goto label_36ad14;
        case 0x36ad18u: goto label_36ad18;
        case 0x36ad1cu: goto label_36ad1c;
        case 0x36ad20u: goto label_36ad20;
        case 0x36ad24u: goto label_36ad24;
        case 0x36ad28u: goto label_36ad28;
        case 0x36ad2cu: goto label_36ad2c;
        case 0x36ad30u: goto label_36ad30;
        case 0x36ad34u: goto label_36ad34;
        case 0x36ad38u: goto label_36ad38;
        case 0x36ad3cu: goto label_36ad3c;
        case 0x36ad40u: goto label_36ad40;
        case 0x36ad44u: goto label_36ad44;
        case 0x36ad48u: goto label_36ad48;
        case 0x36ad4cu: goto label_36ad4c;
        case 0x36ad50u: goto label_36ad50;
        case 0x36ad54u: goto label_36ad54;
        case 0x36ad58u: goto label_36ad58;
        case 0x36ad5cu: goto label_36ad5c;
        case 0x36ad60u: goto label_36ad60;
        case 0x36ad64u: goto label_36ad64;
        case 0x36ad68u: goto label_36ad68;
        case 0x36ad6cu: goto label_36ad6c;
        case 0x36ad70u: goto label_36ad70;
        case 0x36ad74u: goto label_36ad74;
        case 0x36ad78u: goto label_36ad78;
        case 0x36ad7cu: goto label_36ad7c;
        case 0x36ad80u: goto label_36ad80;
        case 0x36ad84u: goto label_36ad84;
        case 0x36ad88u: goto label_36ad88;
        case 0x36ad8cu: goto label_36ad8c;
        case 0x36ad90u: goto label_36ad90;
        case 0x36ad94u: goto label_36ad94;
        case 0x36ad98u: goto label_36ad98;
        case 0x36ad9cu: goto label_36ad9c;
        case 0x36ada0u: goto label_36ada0;
        case 0x36ada4u: goto label_36ada4;
        case 0x36ada8u: goto label_36ada8;
        case 0x36adacu: goto label_36adac;
        case 0x36adb0u: goto label_36adb0;
        case 0x36adb4u: goto label_36adb4;
        case 0x36adb8u: goto label_36adb8;
        case 0x36adbcu: goto label_36adbc;
        case 0x36adc0u: goto label_36adc0;
        case 0x36adc4u: goto label_36adc4;
        case 0x36adc8u: goto label_36adc8;
        case 0x36adccu: goto label_36adcc;
        case 0x36add0u: goto label_36add0;
        case 0x36add4u: goto label_36add4;
        case 0x36add8u: goto label_36add8;
        case 0x36addcu: goto label_36addc;
        case 0x36ade0u: goto label_36ade0;
        case 0x36ade4u: goto label_36ade4;
        case 0x36ade8u: goto label_36ade8;
        case 0x36adecu: goto label_36adec;
        case 0x36adf0u: goto label_36adf0;
        case 0x36adf4u: goto label_36adf4;
        case 0x36adf8u: goto label_36adf8;
        case 0x36adfcu: goto label_36adfc;
        case 0x36ae00u: goto label_36ae00;
        case 0x36ae04u: goto label_36ae04;
        case 0x36ae08u: goto label_36ae08;
        case 0x36ae0cu: goto label_36ae0c;
        case 0x36ae10u: goto label_36ae10;
        case 0x36ae14u: goto label_36ae14;
        case 0x36ae18u: goto label_36ae18;
        case 0x36ae1cu: goto label_36ae1c;
        case 0x36ae20u: goto label_36ae20;
        case 0x36ae24u: goto label_36ae24;
        case 0x36ae28u: goto label_36ae28;
        case 0x36ae2cu: goto label_36ae2c;
        case 0x36ae30u: goto label_36ae30;
        case 0x36ae34u: goto label_36ae34;
        case 0x36ae38u: goto label_36ae38;
        case 0x36ae3cu: goto label_36ae3c;
        case 0x36ae40u: goto label_36ae40;
        case 0x36ae44u: goto label_36ae44;
        case 0x36ae48u: goto label_36ae48;
        case 0x36ae4cu: goto label_36ae4c;
        case 0x36ae50u: goto label_36ae50;
        case 0x36ae54u: goto label_36ae54;
        case 0x36ae58u: goto label_36ae58;
        case 0x36ae5cu: goto label_36ae5c;
        case 0x36ae60u: goto label_36ae60;
        case 0x36ae64u: goto label_36ae64;
        case 0x36ae68u: goto label_36ae68;
        case 0x36ae6cu: goto label_36ae6c;
        default: break;
    }

    ctx->pc = 0x36a7b0u;

label_36a7b0:
    // 0x36a7b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x36a7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_36a7b4:
    // 0x36a7b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36a7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36a7b8:
    // 0x36a7b8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x36a7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_36a7bc:
    // 0x36a7bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36a7bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36a7c0:
    // 0x36a7c0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x36a7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_36a7c4:
    // 0x36a7c4: 0x261101d0  addiu       $s1, $s0, 0x1D0
    ctx->pc = 0x36a7c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
label_36a7c8:
    // 0x36a7c8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x36a7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_36a7cc:
    // 0x36a7cc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x36a7ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_36a7d0:
    // 0x36a7d0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x36a7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_36a7d4:
    // 0x36a7d4: 0x2613038c  addiu       $s3, $s0, 0x38C
    ctx->pc = 0x36a7d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 908));
label_36a7d8:
    // 0x36a7d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x36a7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_36a7dc:
    // 0x36a7dc: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x36a7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_36a7e0:
    // 0x36a7e0: 0xae0203b8  sw          $v0, 0x3B8($s0)
    ctx->pc = 0x36a7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 952), GPR_U32(ctx, 2));
label_36a7e4:
    // 0x36a7e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36a7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36a7e8:
    // 0x36a7e8: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x36a7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_36a7ec:
    // 0x36a7ec: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x36a7ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_36a7f0:
    // 0x36a7f0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x36a7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_36a7f4:
    // 0x36a7f4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x36a7f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_36a7f8:
    // 0x36a7f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x36a7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_36a7fc:
    // 0x36a7fc: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x36a7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
label_36a800:
    // 0x36a800: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x36a800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_36a804:
    // 0x36a804: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36a804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_36a808:
    // 0x36a808: 0xae0003fc  sw          $zero, 0x3FC($s0)
    ctx->pc = 0x36a808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1020), GPR_U32(ctx, 0));
label_36a80c:
    // 0x36a80c: 0xae000400  sw          $zero, 0x400($s0)
    ctx->pc = 0x36a80cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1024), GPR_U32(ctx, 0));
label_36a810:
    // 0x36a810: 0x40f809  jalr        $v0
label_36a814:
    if (ctx->pc == 0x36A814u) {
        ctx->pc = 0x36A814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A810u;
        // 0x36a814: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A818u;
        goto label_36a818;
    }
    ctx->pc = 0x36A810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36A818u);
        ctx->pc = 0x36A814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A810u;
        // 0x36a814: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A810u, 0x36A818u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36A818u;
label_36a818:
    // 0x36a818: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x36a818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_36a81c:
    // 0x36a81c: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x36a81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_36a820:
    // 0x36a820: 0x623024  and         $a2, $v1, $v0
    ctx->pc = 0x36a820u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_36a824:
    // 0x36a824: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x36a824u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_36a828:
    // 0x36a828: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x36a828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_36a82c:
    // 0x36a82c: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x36a82cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_36a830:
    // 0x36a830: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36a830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_36a834:
    // 0x36a834: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x36a834u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_36a838:
    // 0x36a838: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36a838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_36a83c:
    // 0x36a83c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x36a83cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_36a840:
    // 0x36a840: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x36a840u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_36a844:
    // 0x36a844: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x36a844u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_36a848:
    // 0x36a848: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36a848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_36a84c:
    // 0x36a84c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x36a84cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_36a850:
    // 0x36a850: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x36a850u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_36a854:
    // 0x36a854: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x36a854u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_36a858:
    // 0x36a858: 0x340c0  sll         $t0, $v1, 3
    ctx->pc = 0x36a858u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_36a85c:
    // 0x36a85c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x36a85cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_36a860:
    // 0x36a860: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36a860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_36a864:
    // 0x36a864: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x36a864u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_36a868:
    // 0x36a868: 0x39030000  xori        $v1, $t0, 0x0
    ctx->pc = 0x36a868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)0);
label_36a86c:
    // 0x36a86c: 0x1051004  sllv        $v0, $a1, $t0
    ctx->pc = 0x36a86cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 8) & 0x1F));
label_36a870:
    // 0x36a870: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x36a870u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_36a874:
    // 0x36a874: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x36a874u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_36a878:
    // 0x36a878: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36a878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_36a87c:
    // 0x36a87c: 0x43380b  movn        $a3, $v0, $v1
    ctx->pc = 0x36a87cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
label_36a880:
    // 0x36a880: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x36a880u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_36a884:
    // 0x36a884: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x36a884u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_36a888:
    // 0x36a888: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36a888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_36a88c:
    // 0x36a88c: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x36a88cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_36a890:
    // 0x36a890: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36a890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_36a894:
    // 0x36a894: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x36a894u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_36a898:
    // 0x36a898: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x36a898u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_36a89c:
    // 0x36a89c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x36a89cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_36a8a0:
    // 0x36a8a0: 0x29040014  slti        $a0, $t0, 0x14
    ctx->pc = 0x36a8a0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)20) ? 1 : 0);
label_36a8a4:
    // 0x36a8a4: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x36a8a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_36a8a8:
    // 0x36a8a8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36a8a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_36a8ac:
    // 0x36a8ac: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x36a8acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_36a8b0:
    // 0x36a8b0: 0x1480001d  bnez        $a0, . + 4 + (0x1D << 2)
label_36a8b4:
    if (ctx->pc == 0x36A8B4u) {
        ctx->pc = 0x36A8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A8B0u;
        // 0x36a8b4: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A8B8u;
        goto label_36a8b8;
    }
    ctx->pc = 0x36A8B0u;
    {
        const bool branch_taken_0x36a8b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A8B0u;
        // 0x36a8b4: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a8b0) {
            ctx->pc = 0x36A928u;
            goto label_36a928;
        }
    }
    ctx->pc = 0x36A8B8u;
label_36a8b8:
    // 0x36a8b8: 0x2508ffec  addiu       $t0, $t0, -0x14
    ctx->pc = 0x36a8b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967276));
label_36a8bc:
    // 0x36a8bc: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
label_36a8c0:
    if (ctx->pc == 0x36A8C0u) {
        ctx->pc = 0x36A8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A8BCu;
        // 0x36a8c0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A8C4u;
        goto label_36a8c4;
    }
    ctx->pc = 0x36A8BCu;
    {
        const bool branch_taken_0x36a8bc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A8BCu;
        // 0x36a8c0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a8bc) {
            ctx->pc = 0x36A8E0u;
            goto label_36a8e0;
        }
    }
    ctx->pc = 0x36A8C4u;
label_36a8c4:
    // 0x36a8c4: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x36a8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_36a8c8:
    // 0x36a8c8: 0x451006  srlv        $v0, $a1, $v0
    ctx->pc = 0x36a8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
label_36a8cc:
    // 0x36a8cc: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x36a8ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_36a8d0:
    // 0x36a8d0: 0x71d02  srl         $v1, $a3, 20
    ctx->pc = 0x36a8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 20));
label_36a8d4:
    // 0x36a8d4: 0x1053804  sllv        $a3, $a1, $t0
    ctx->pc = 0x36a8d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 8) & 0x1F));
label_36a8d8:
    // 0x36a8d8: 0x10000004  b           . + 4 + (0x4 << 2)
label_36a8dc:
    if (ctx->pc == 0x36A8DCu) {
        ctx->pc = 0x36A8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A8D8u;
        // 0x36a8dc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A8E0u;
        goto label_36a8e0;
    }
    ctx->pc = 0x36A8D8u;
    {
        const bool branch_taken_0x36a8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A8D8u;
        // 0x36a8dc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a8d8) {
            ctx->pc = 0x36A8ECu;
            goto label_36a8ec;
        }
    }
    ctx->pc = 0x36A8E0u;
label_36a8e0:
    // 0x36a8e0: 0x71502  srl         $v0, $a3, 20
    ctx->pc = 0x36a8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 20));
label_36a8e4:
    // 0x36a8e4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x36a8e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_36a8e8:
    // 0x36a8e8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x36a8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_36a8ec:
    // 0x36a8ec: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x36a8ecu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_36a8f0:
    // 0x36a8f0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36a8f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_36a8f4:
    // 0x36a8f4: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x36a8f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_36a8f8:
    // 0x36a8f8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36a8f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_36a8fc:
    // 0x36a8fc: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x36a8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_36a900:
    // 0x36a900: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x36a900u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_36a904:
    // 0x36a904: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x36a904u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_36a908:
    // 0x36a908: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36a908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_36a90c:
    // 0x36a90c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x36a90cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_36a910:
    // 0x36a910: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x36a910u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_36a914:
    // 0x36a914: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x36a914u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_36a918:
    // 0x36a918: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36a918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_36a91c:
    // 0x36a91c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x36a91cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_36a920:
    // 0x36a920: 0x10000005  b           . + 4 + (0x5 << 2)
label_36a924:
    if (ctx->pc == 0x36A924u) {
        ctx->pc = 0x36A924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A920u;
        // 0x36a924: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A928u;
        goto label_36a928;
    }
    ctx->pc = 0x36A920u;
    {
        const bool branch_taken_0x36a920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A920u;
        // 0x36a924: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a920) {
            ctx->pc = 0x36A938u;
            goto label_36a938;
        }
    }
    ctx->pc = 0x36A928u;
label_36a928:
    // 0x36a928: 0x71502  srl         $v0, $a3, 20
    ctx->pc = 0x36a928u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 20));
label_36a92c:
    // 0x36a92c: 0x73b00  sll         $a3, $a3, 12
    ctx->pc = 0x36a92cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 12));
label_36a930:
    // 0x36a930: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x36a930u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_36a934:
    // 0x36a934: 0x2508000c  addiu       $t0, $t0, 0xC
    ctx->pc = 0x36a934u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
label_36a938:
    // 0x36a938: 0x29020014  slti        $v0, $t0, 0x14
    ctx->pc = 0x36a938u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)20) ? 1 : 0);
label_36a93c:
    // 0x36a93c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_36a940:
    if (ctx->pc == 0x36A940u) {
        ctx->pc = 0x36A940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A93Cu;
        // 0x36a940: 0x71502  srl         $v0, $a3, 20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A944u;
        goto label_36a944;
    }
    ctx->pc = 0x36A93Cu;
    {
        const bool branch_taken_0x36a93c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A93Cu;
        // 0x36a940: 0x71502  srl         $v0, $a3, 20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a93c) {
            ctx->pc = 0x36A9B8u;
            goto label_36a9b8;
        }
    }
    ctx->pc = 0x36A944u;
label_36a944:
    // 0x36a944: 0x2508ffec  addiu       $t0, $t0, -0x14
    ctx->pc = 0x36a944u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967276));
label_36a948:
    // 0x36a948: 0x11000009  beqz        $t0, . + 4 + (0x9 << 2)
label_36a94c:
    if (ctx->pc == 0x36A94Cu) {
        ctx->pc = 0x36A94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A948u;
        // 0x36a94c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A950u;
        goto label_36a950;
    }
    ctx->pc = 0x36A948u;
    {
        const bool branch_taken_0x36a948 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A948u;
        // 0x36a94c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a948) {
            ctx->pc = 0x36A970u;
            goto label_36a970;
        }
    }
    ctx->pc = 0x36A950u;
label_36a950:
    // 0x36a950: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x36a950u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_36a954:
    // 0x36a954: 0x451006  srlv        $v0, $a1, $v0
    ctx->pc = 0x36a954u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
label_36a958:
    // 0x36a958: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x36a958u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_36a95c:
    // 0x36a95c: 0x71d02  srl         $v1, $a3, 20
    ctx->pc = 0x36a95cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 20));
label_36a960:
    // 0x36a960: 0x1053804  sllv        $a3, $a1, $t0
    ctx->pc = 0x36a960u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 8) & 0x1F));
label_36a964:
    // 0x36a964: 0x10000005  b           . + 4 + (0x5 << 2)
label_36a968:
    if (ctx->pc == 0x36A968u) {
        ctx->pc = 0x36A968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A964u;
        // 0x36a968: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A96Cu;
        goto label_36a96c;
    }
    ctx->pc = 0x36A964u;
    {
        const bool branch_taken_0x36a964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A964u;
        // 0x36a968: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a964) {
            ctx->pc = 0x36A97Cu;
            goto label_36a97c;
        }
    }
    ctx->pc = 0x36A96Cu;
label_36a96c:
    // 0x36a96c: 0x0  nop
    ctx->pc = 0x36a96cu;
    // NOP
label_36a970:
    // 0x36a970: 0x71502  srl         $v0, $a3, 20
    ctx->pc = 0x36a970u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 20));
label_36a974:
    // 0x36a974: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x36a974u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_36a978:
    // 0x36a978: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x36a978u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_36a97c:
    // 0x36a97c: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x36a97cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_36a980:
    // 0x36a980: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36a980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_36a984:
    // 0x36a984: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x36a984u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_36a988:
    // 0x36a988: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36a988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_36a98c:
    // 0x36a98c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x36a98cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_36a990:
    // 0x36a990: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x36a990u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_36a994:
    // 0x36a994: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x36a994u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_36a998:
    // 0x36a998: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36a998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_36a99c:
    // 0x36a99c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x36a99cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_36a9a0:
    // 0x36a9a0: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x36a9a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_36a9a4:
    // 0x36a9a4: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x36a9a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_36a9a8:
    // 0x36a9a8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36a9a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_36a9ac:
    // 0x36a9ac: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x36a9acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_36a9b0:
    // 0x36a9b0: 0x10000004  b           . + 4 + (0x4 << 2)
label_36a9b4:
    if (ctx->pc == 0x36A9B4u) {
        ctx->pc = 0x36A9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A9B0u;
        // 0x36a9b4: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A9B8u;
        goto label_36a9b8;
    }
    ctx->pc = 0x36A9B0u;
    {
        const bool branch_taken_0x36a9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A9B0u;
        // 0x36a9b4: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a9b0) {
            ctx->pc = 0x36A9C4u;
            goto label_36a9c4;
        }
    }
    ctx->pc = 0x36A9B8u;
label_36a9b8:
    // 0x36a9b8: 0x73b00  sll         $a3, $a3, 12
    ctx->pc = 0x36a9b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 12));
label_36a9bc:
    // 0x36a9bc: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x36a9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_36a9c0:
    // 0x36a9c0: 0x2508000c  addiu       $t0, $t0, 0xC
    ctx->pc = 0x36a9c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
label_36a9c4:
    // 0x36a9c4: 0x2902001c  slti        $v0, $t0, 0x1C
    ctx->pc = 0x36a9c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)28) ? 1 : 0);
label_36a9c8:
    // 0x36a9c8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_36a9cc:
    if (ctx->pc == 0x36A9CCu) {
        ctx->pc = 0x36A9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A9C8u;
        // 0x36a9cc: 0x71702  srl         $v0, $a3, 28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A9D0u;
        goto label_36a9d0;
    }
    ctx->pc = 0x36A9C8u;
    {
        const bool branch_taken_0x36a9c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A9C8u;
        // 0x36a9cc: 0x71702  srl         $v0, $a3, 28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a9c8) {
            ctx->pc = 0x36AA40u;
            goto label_36aa40;
        }
    }
    ctx->pc = 0x36A9D0u;
label_36a9d0:
    // 0x36a9d0: 0x2508ffe4  addiu       $t0, $t0, -0x1C
    ctx->pc = 0x36a9d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967268));
label_36a9d4:
    // 0x36a9d4: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
label_36a9d8:
    if (ctx->pc == 0x36A9D8u) {
        ctx->pc = 0x36A9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A9D4u;
        // 0x36a9d8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A9DCu;
        goto label_36a9dc;
    }
    ctx->pc = 0x36A9D4u;
    {
        const bool branch_taken_0x36a9d4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A9D4u;
        // 0x36a9d8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a9d4) {
            ctx->pc = 0x36A9F8u;
            goto label_36a9f8;
        }
    }
    ctx->pc = 0x36A9DCu;
label_36a9dc:
    // 0x36a9dc: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x36a9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_36a9e0:
    // 0x36a9e0: 0x451006  srlv        $v0, $a1, $v0
    ctx->pc = 0x36a9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
label_36a9e4:
    // 0x36a9e4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x36a9e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_36a9e8:
    // 0x36a9e8: 0x71f02  srl         $v1, $a3, 28
    ctx->pc = 0x36a9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 28));
label_36a9ec:
    // 0x36a9ec: 0x1053804  sllv        $a3, $a1, $t0
    ctx->pc = 0x36a9ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 8) & 0x1F));
label_36a9f0:
    // 0x36a9f0: 0x10000004  b           . + 4 + (0x4 << 2)
label_36a9f4:
    if (ctx->pc == 0x36A9F4u) {
        ctx->pc = 0x36A9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A9F0u;
        // 0x36a9f4: 0xae0302a4  sw          $v1, 0x2A4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 676), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36A9F8u;
        goto label_36a9f8;
    }
    ctx->pc = 0x36A9F0u;
    {
        const bool branch_taken_0x36a9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A9F0u;
        // 0x36a9f4: 0xae0302a4  sw          $v1, 0x2A4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 676), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a9f0) {
            ctx->pc = 0x36AA04u;
            goto label_36aa04;
        }
    }
    ctx->pc = 0x36A9F8u;
label_36a9f8:
    // 0x36a9f8: 0x71702  srl         $v0, $a3, 28
    ctx->pc = 0x36a9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 28));
label_36a9fc:
    // 0x36a9fc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x36a9fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_36aa00:
    // 0x36aa00: 0xae0202a4  sw          $v0, 0x2A4($s0)
    ctx->pc = 0x36aa00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 676), GPR_U32(ctx, 2));
label_36aa04:
    // 0x36aa04: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x36aa04u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_36aa08:
    // 0x36aa08: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36aa08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_36aa0c:
    // 0x36aa0c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x36aa0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_36aa10:
    // 0x36aa10: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36aa10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_36aa14:
    // 0x36aa14: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x36aa14u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_36aa18:
    // 0x36aa18: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x36aa18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_36aa1c:
    // 0x36aa1c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x36aa1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_36aa20:
    // 0x36aa20: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36aa20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_36aa24:
    // 0x36aa24: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x36aa24u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_36aa28:
    // 0x36aa28: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x36aa28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_36aa2c:
    // 0x36aa2c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x36aa2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_36aa30:
    // 0x36aa30: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36aa30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_36aa34:
    // 0x36aa34: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x36aa34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_36aa38:
    // 0x36aa38: 0x10000004  b           . + 4 + (0x4 << 2)
label_36aa3c:
    if (ctx->pc == 0x36AA3Cu) {
        ctx->pc = 0x36AA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AA38u;
        // 0x36aa3c: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36AA40u;
        goto label_36aa40;
    }
    ctx->pc = 0x36AA38u;
    {
        const bool branch_taken_0x36aa38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36AA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AA38u;
        // 0x36aa3c: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36aa38) {
            ctx->pc = 0x36AA4Cu;
            goto label_36aa4c;
        }
    }
    ctx->pc = 0x36AA40u;
label_36aa40:
    // 0x36aa40: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x36aa40u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_36aa44:
    // 0x36aa44: 0xae0202a4  sw          $v0, 0x2A4($s0)
    ctx->pc = 0x36aa44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 676), GPR_U32(ctx, 2));
label_36aa48:
    // 0x36aa48: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x36aa48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_36aa4c:
    // 0x36aa4c: 0x2902001c  slti        $v0, $t0, 0x1C
    ctx->pc = 0x36aa4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)28) ? 1 : 0);
label_36aa50:
    // 0x36aa50: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_36aa54:
    if (ctx->pc == 0x36AA54u) {
        ctx->pc = 0x36AA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AA50u;
        // 0x36aa54: 0x72702  srl         $a0, $a3, 28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36AA58u;
        goto label_36aa58;
    }
    ctx->pc = 0x36AA50u;
    {
        const bool branch_taken_0x36aa50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36AA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AA50u;
        // 0x36aa54: 0x72702  srl         $a0, $a3, 28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36aa50) {
            ctx->pc = 0x36AAC0u;
            goto label_36aac0;
        }
    }
    ctx->pc = 0x36AA58u;
label_36aa58:
    // 0x36aa58: 0x2508ffe4  addiu       $t0, $t0, -0x1C
    ctx->pc = 0x36aa58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967268));
label_36aa5c:
    // 0x36aa5c: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
label_36aa60:
    if (ctx->pc == 0x36AA60u) {
        ctx->pc = 0x36AA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AA5Cu;
        // 0x36aa60: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36AA64u;
        goto label_36aa64;
    }
    ctx->pc = 0x36AA5Cu;
    {
        const bool branch_taken_0x36aa5c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x36AA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AA5Cu;
        // 0x36aa60: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36aa5c) {
            ctx->pc = 0x36AA80u;
            goto label_36aa80;
        }
    }
    ctx->pc = 0x36AA64u;
label_36aa64:
    // 0x36aa64: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x36aa64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_36aa68:
    // 0x36aa68: 0x451006  srlv        $v0, $a1, $v0
    ctx->pc = 0x36aa68u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
label_36aa6c:
    // 0x36aa6c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x36aa6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_36aa70:
    // 0x36aa70: 0x72702  srl         $a0, $a3, 28
    ctx->pc = 0x36aa70u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 28));
label_36aa74:
    // 0x36aa74: 0x10000003  b           . + 4 + (0x3 << 2)
label_36aa78:
    if (ctx->pc == 0x36AA78u) {
        ctx->pc = 0x36AA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AA74u;
        // 0x36aa78: 0x1053804  sllv        $a3, $a1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 8) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36AA7Cu;
        goto label_36aa7c;
    }
    ctx->pc = 0x36AA74u;
    {
        const bool branch_taken_0x36aa74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36AA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AA74u;
        // 0x36aa78: 0x1053804  sllv        $a3, $a1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 8) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36aa74) {
            ctx->pc = 0x36AA84u;
            goto label_36aa84;
        }
    }
    ctx->pc = 0x36AA7Cu;
label_36aa7c:
    // 0x36aa7c: 0x0  nop
    ctx->pc = 0x36aa7cu;
    // NOP
label_36aa80:
    // 0x36aa80: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x36aa80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_36aa84:
    // 0x36aa84: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x36aa84u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_36aa88:
    // 0x36aa88: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36aa88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_36aa8c:
    // 0x36aa8c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x36aa8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_36aa90:
    // 0x36aa90: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36aa90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_36aa94:
    // 0x36aa94: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x36aa94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_36aa98:
    // 0x36aa98: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x36aa98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_36aa9c:
    // 0x36aa9c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x36aa9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_36aaa0:
    // 0x36aaa0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36aaa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_36aaa4:
    // 0x36aaa4: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x36aaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_36aaa8:
    // 0x36aaa8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x36aaa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_36aaac:
    // 0x36aaac: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x36aaacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_36aab0:
    // 0x36aab0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36aab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_36aab4:
    // 0x36aab4: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x36aab4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_36aab8:
    // 0x36aab8: 0x10000003  b           . + 4 + (0x3 << 2)
label_36aabc:
    if (ctx->pc == 0x36AABCu) {
        ctx->pc = 0x36AABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AAB8u;
        // 0x36aabc: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36AAC0u;
        goto label_36aac0;
    }
    ctx->pc = 0x36AAB8u;
    {
        const bool branch_taken_0x36aab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36AABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AAB8u;
        // 0x36aabc: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36aab8) {
            ctx->pc = 0x36AAC8u;
            goto label_36aac8;
        }
    }
    ctx->pc = 0x36AAC0u;
label_36aac0:
    // 0x36aac0: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x36aac0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_36aac4:
    // 0x36aac4: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x36aac4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_36aac8:
    // 0x36aac8: 0x2902000e  slti        $v0, $t0, 0xE
    ctx->pc = 0x36aac8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)14) ? 1 : 0);
label_36aacc:
    // 0x36aacc: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_36aad0:
    if (ctx->pc == 0x36AAD0u) {
        ctx->pc = 0x36AAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AACCu;
        // 0x36aad0: 0xae240010  sw          $a0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36AAD4u;
        goto label_36aad4;
    }
    ctx->pc = 0x36AACCu;
    {
        const bool branch_taken_0x36aacc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36AAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AACCu;
        // 0x36aad0: 0xae240010  sw          $a0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36aacc) {
            ctx->pc = 0x36AB48u;
            goto label_36ab48;
        }
    }
    ctx->pc = 0x36AAD4u;
label_36aad4:
    // 0x36aad4: 0x2508fff2  addiu       $t0, $t0, -0xE
    ctx->pc = 0x36aad4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967282));
label_36aad8:
    // 0x36aad8: 0x11000009  beqz        $t0, . + 4 + (0x9 << 2)
label_36aadc:
    if (ctx->pc == 0x36AADCu) {
        ctx->pc = 0x36AADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AAD8u;
        // 0x36aadc: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36AAE0u;
        goto label_36aae0;
    }
    ctx->pc = 0x36AAD8u;
    {
        const bool branch_taken_0x36aad8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x36AADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AAD8u;
        // 0x36aadc: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36aad8) {
            ctx->pc = 0x36AB00u;
            goto label_36ab00;
        }
    }
    ctx->pc = 0x36AAE0u;
label_36aae0:
    // 0x36aae0: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x36aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_36aae4:
    // 0x36aae4: 0x451006  srlv        $v0, $a1, $v0
    ctx->pc = 0x36aae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
label_36aae8:
    // 0x36aae8: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x36aae8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_36aaec:
    // 0x36aaec: 0x71b82  srl         $v1, $a3, 14
    ctx->pc = 0x36aaecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 14));
label_36aaf0:
    // 0x36aaf0: 0x1053804  sllv        $a3, $a1, $t0
    ctx->pc = 0x36aaf0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 8) & 0x1F));
label_36aaf4:
    // 0x36aaf4: 0x10000005  b           . + 4 + (0x5 << 2)
label_36aaf8:
    if (ctx->pc == 0x36AAF8u) {
        ctx->pc = 0x36AAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AAF4u;
        // 0x36aaf8: 0xae0302a8  sw          $v1, 0x2A8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36AAFCu;
        goto label_36aafc;
    }
    ctx->pc = 0x36AAF4u;
    {
        const bool branch_taken_0x36aaf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36AAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AAF4u;
        // 0x36aaf8: 0xae0302a8  sw          $v1, 0x2A8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36aaf4) {
            ctx->pc = 0x36AB0Cu;
            goto label_36ab0c;
        }
    }
    ctx->pc = 0x36AAFCu;
label_36aafc:
    // 0x36aafc: 0x0  nop
    ctx->pc = 0x36aafcu;
    // NOP
label_36ab00:
    // 0x36ab00: 0x71382  srl         $v0, $a3, 14
    ctx->pc = 0x36ab00u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 14));
label_36ab04:
    // 0x36ab04: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x36ab04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_36ab08:
    // 0x36ab08: 0xae0202a8  sw          $v0, 0x2A8($s0)
    ctx->pc = 0x36ab08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 2));
label_36ab0c:
    // 0x36ab0c: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x36ab0cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_36ab10:
    // 0x36ab10: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36ab10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_36ab14:
    // 0x36ab14: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x36ab14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_36ab18:
    // 0x36ab18: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36ab18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_36ab1c:
    // 0x36ab1c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x36ab1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_36ab20:
    // 0x36ab20: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x36ab20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_36ab24:
    // 0x36ab24: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x36ab24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_36ab28:
    // 0x36ab28: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36ab28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_36ab2c:
    // 0x36ab2c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x36ab2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_36ab30:
    // 0x36ab30: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x36ab30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_36ab34:
    // 0x36ab34: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x36ab34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_36ab38:
    // 0x36ab38: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36ab38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_36ab3c:
    // 0x36ab3c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x36ab3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_36ab40:
    // 0x36ab40: 0x10000005  b           . + 4 + (0x5 << 2)
label_36ab44:
    if (ctx->pc == 0x36AB44u) {
        ctx->pc = 0x36AB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AB40u;
        // 0x36ab44: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36AB48u;
        goto label_36ab48;
    }
    ctx->pc = 0x36AB40u;
    {
        const bool branch_taken_0x36ab40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36AB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AB40u;
        // 0x36ab44: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ab40) {
            ctx->pc = 0x36AB58u;
            goto label_36ab58;
        }
    }
    ctx->pc = 0x36AB48u;
label_36ab48:
    // 0x36ab48: 0x71382  srl         $v0, $a3, 14
    ctx->pc = 0x36ab48u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 14));
label_36ab4c:
    // 0x36ab4c: 0x73c80  sll         $a3, $a3, 18
    ctx->pc = 0x36ab4cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 18));
label_36ab50:
    // 0x36ab50: 0xae0202a8  sw          $v0, 0x2A8($s0)
    ctx->pc = 0x36ab50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 2));
label_36ab54:
    // 0x36ab54: 0x25080012  addiu       $t0, $t0, 0x12
    ctx->pc = 0x36ab54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 18));
label_36ab58:
    // 0x36ab58: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36ab58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36ab5c:
    // 0x36ab5c: 0x29020020  slti        $v0, $t0, 0x20
    ctx->pc = 0x36ab5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)32) ? 1 : 0);
label_36ab60:
    // 0x36ab60: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_36ab64:
    if (ctx->pc == 0x36AB64u) {
        ctx->pc = 0x36AB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AB60u;
        // 0x36ab64: 0x73840  sll         $a3, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36AB68u;
        goto label_36ab68;
    }
    ctx->pc = 0x36AB60u;
    {
        const bool branch_taken_0x36ab60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36ab60) {
            ctx->pc = 0x36AB64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36AB60u;
            // 0x36ab64: 0x73840  sll         $a3, $a3, 1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36ABA8u;
            goto label_36aba8;
        }
    }
    ctx->pc = 0x36AB68u;
label_36ab68:
    // 0x36ab68: 0x2508ffe0  addiu       $t0, $t0, -0x20
    ctx->pc = 0x36ab68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967264));
label_36ab6c:
    // 0x36ab6c: 0x1053804  sllv        $a3, $a1, $t0
    ctx->pc = 0x36ab6cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 8) & 0x1F));
label_36ab70:
    // 0x36ab70: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x36ab70u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_36ab74:
    // 0x36ab74: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36ab74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_36ab78:
    // 0x36ab78: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x36ab78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_36ab7c:
    // 0x36ab7c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36ab7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_36ab80:
    // 0x36ab80: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x36ab80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_36ab84:
    // 0x36ab84: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x36ab84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_36ab88:
    // 0x36ab88: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x36ab88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_36ab8c:
    // 0x36ab8c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36ab8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_36ab90:
    // 0x36ab90: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x36ab90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_36ab94:
    // 0x36ab94: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x36ab94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_36ab98:
    // 0x36ab98: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x36ab98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_36ab9c:
    // 0x36ab9c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36ab9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_36aba0:
    // 0x36aba0: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x36aba0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_36aba4:
    // 0x36aba4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x36aba4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_36aba8:
    // 0x36aba8: 0x29020016  slti        $v0, $t0, 0x16
    ctx->pc = 0x36aba8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)22) ? 1 : 0);
label_36abac:
    // 0x36abac: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_36abb0:
    if (ctx->pc == 0x36ABB0u) {
        ctx->pc = 0x36ABB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36ABACu;
        // 0x36abb0: 0x71582  srl         $v0, $a3, 22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36ABB4u;
        goto label_36abb4;
    }
    ctx->pc = 0x36ABACu;
    {
        const bool branch_taken_0x36abac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36ABB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36ABACu;
        // 0x36abb0: 0x71582  srl         $v0, $a3, 22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36abac) {
            ctx->pc = 0x36AC28u;
            goto label_36ac28;
        }
    }
    ctx->pc = 0x36ABB4u;
label_36abb4:
    // 0x36abb4: 0x2508ffea  addiu       $t0, $t0, -0x16
    ctx->pc = 0x36abb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967274));
label_36abb8:
    // 0x36abb8: 0x11000009  beqz        $t0, . + 4 + (0x9 << 2)
label_36abbc:
    if (ctx->pc == 0x36ABBCu) {
        ctx->pc = 0x36ABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36ABB8u;
        // 0x36abbc: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36ABC0u;
        goto label_36abc0;
    }
    ctx->pc = 0x36ABB8u;
    {
        const bool branch_taken_0x36abb8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x36ABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36ABB8u;
        // 0x36abbc: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36abb8) {
            ctx->pc = 0x36ABE0u;
            goto label_36abe0;
        }
    }
    ctx->pc = 0x36ABC0u;
label_36abc0:
    // 0x36abc0: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x36abc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_36abc4:
    // 0x36abc4: 0x451006  srlv        $v0, $a1, $v0
    ctx->pc = 0x36abc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
label_36abc8:
    // 0x36abc8: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x36abc8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_36abcc:
    // 0x36abcc: 0x71d82  srl         $v1, $a3, 22
    ctx->pc = 0x36abccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 22));
label_36abd0:
    // 0x36abd0: 0x1053804  sllv        $a3, $a1, $t0
    ctx->pc = 0x36abd0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 8) & 0x1F));
label_36abd4:
    // 0x36abd4: 0x10000005  b           . + 4 + (0x5 << 2)
label_36abd8:
    if (ctx->pc == 0x36ABD8u) {
        ctx->pc = 0x36ABD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36ABD4u;
        // 0x36abd8: 0xae0302ac  sw          $v1, 0x2AC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36ABDCu;
        goto label_36abdc;
    }
    ctx->pc = 0x36ABD4u;
    {
        const bool branch_taken_0x36abd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36ABD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36ABD4u;
        // 0x36abd8: 0xae0302ac  sw          $v1, 0x2AC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36abd4) {
            ctx->pc = 0x36ABECu;
            goto label_36abec;
        }
    }
    ctx->pc = 0x36ABDCu;
label_36abdc:
    // 0x36abdc: 0x0  nop
    ctx->pc = 0x36abdcu;
    // NOP
label_36abe0:
    // 0x36abe0: 0x71582  srl         $v0, $a3, 22
    ctx->pc = 0x36abe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 22));
label_36abe4:
    // 0x36abe4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x36abe4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_36abe8:
    // 0x36abe8: 0xae0202ac  sw          $v0, 0x2AC($s0)
    ctx->pc = 0x36abe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 2));
label_36abec:
    // 0x36abec: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x36abecu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_36abf0:
    // 0x36abf0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36abf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_36abf4:
    // 0x36abf4: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x36abf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_36abf8:
    // 0x36abf8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36abf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_36abfc:
    // 0x36abfc: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x36abfcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_36ac00:
    // 0x36ac00: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x36ac00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_36ac04:
    // 0x36ac04: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x36ac04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_36ac08:
    // 0x36ac08: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36ac08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_36ac0c:
    // 0x36ac0c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x36ac0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_36ac10:
    // 0x36ac10: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x36ac10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_36ac14:
    // 0x36ac14: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x36ac14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_36ac18:
    // 0x36ac18: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36ac18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_36ac1c:
    // 0x36ac1c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x36ac1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_36ac20:
    // 0x36ac20: 0x10000004  b           . + 4 + (0x4 << 2)
label_36ac24:
    if (ctx->pc == 0x36AC24u) {
        ctx->pc = 0x36AC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AC20u;
        // 0x36ac24: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36AC28u;
        goto label_36ac28;
    }
    ctx->pc = 0x36AC20u;
    {
        const bool branch_taken_0x36ac20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36AC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AC20u;
        // 0x36ac24: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ac20) {
            ctx->pc = 0x36AC34u;
            goto label_36ac34;
        }
    }
    ctx->pc = 0x36AC28u;
label_36ac28:
    // 0x36ac28: 0x73a80  sll         $a3, $a3, 10
    ctx->pc = 0x36ac28u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 10));
label_36ac2c:
    // 0x36ac2c: 0xae0202ac  sw          $v0, 0x2AC($s0)
    ctx->pc = 0x36ac2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 2));
label_36ac30:
    // 0x36ac30: 0x2508000a  addiu       $t0, $t0, 0xA
    ctx->pc = 0x36ac30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10));
label_36ac34:
    // 0x36ac34: 0x717c2  srl         $v0, $a3, 31
    ctx->pc = 0x36ac34u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
label_36ac38:
    // 0x36ac38: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x36ac38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_36ac3c:
    // 0x36ac3c: 0x15030012  bne         $t0, $v1, . + 4 + (0x12 << 2)
label_36ac40:
    if (ctx->pc == 0x36AC40u) {
        ctx->pc = 0x36AC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AC3Cu;
        // 0x36ac40: 0xae0202b0  sw          $v0, 0x2B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36AC44u;
        goto label_36ac44;
    }
    ctx->pc = 0x36AC3Cu;
    {
        const bool branch_taken_0x36ac3c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        ctx->pc = 0x36AC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AC3Cu;
        // 0x36ac40: 0xae0202b0  sw          $v0, 0x2B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ac3c) {
            ctx->pc = 0x36AC88u;
            goto label_36ac88;
        }
    }
    ctx->pc = 0x36AC44u;
label_36ac44:
    // 0x36ac44: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x36ac44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_36ac48:
    // 0x36ac48: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x36ac48u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_36ac4c:
    // 0x36ac4c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36ac4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_36ac50:
    // 0x36ac50: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36ac50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36ac54:
    // 0x36ac54: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x36ac54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_36ac58:
    // 0x36ac58: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36ac58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_36ac5c:
    // 0x36ac5c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x36ac5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_36ac60:
    // 0x36ac60: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x36ac60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_36ac64:
    // 0x36ac64: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x36ac64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_36ac68:
    // 0x36ac68: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36ac68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_36ac6c:
    // 0x36ac6c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x36ac6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_36ac70:
    // 0x36ac70: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x36ac70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_36ac74:
    // 0x36ac74: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x36ac74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_36ac78:
    // 0x36ac78: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36ac78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_36ac7c:
    // 0x36ac7c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x36ac7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_36ac80:
    // 0x36ac80: 0x10000003  b           . + 4 + (0x3 << 2)
label_36ac84:
    if (ctx->pc == 0x36AC84u) {
        ctx->pc = 0x36AC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AC80u;
        // 0x36ac84: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36AC88u;
        goto label_36ac88;
    }
    ctx->pc = 0x36AC80u;
    {
        const bool branch_taken_0x36ac80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36AC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AC80u;
        // 0x36ac84: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ac80) {
            ctx->pc = 0x36AC90u;
            goto label_36ac90;
        }
    }
    ctx->pc = 0x36AC88u;
label_36ac88:
    // 0x36ac88: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36ac88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36ac8c:
    // 0x36ac8c: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x36ac8cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_36ac90:
    // 0x36ac90: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x36ac90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_36ac94:
    // 0x36ac94: 0x15020012  bne         $t0, $v0, . + 4 + (0x12 << 2)
label_36ac98:
    if (ctx->pc == 0x36AC98u) {
        ctx->pc = 0x36AC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AC94u;
        // 0x36ac98: 0x727c2  srl         $a0, $a3, 31 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36AC9Cu;
        goto label_36ac9c;
    }
    ctx->pc = 0x36AC94u;
    {
        const bool branch_taken_0x36ac94 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x36AC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AC94u;
        // 0x36ac98: 0x727c2  srl         $a0, $a3, 31 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ac94) {
            ctx->pc = 0x36ACE0u;
            goto label_36ace0;
        }
    }
    ctx->pc = 0x36AC9Cu;
label_36ac9c:
    // 0x36ac9c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x36ac9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_36aca0:
    // 0x36aca0: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x36aca0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_36aca4:
    // 0x36aca4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36aca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_36aca8:
    // 0x36aca8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36aca8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36acac:
    // 0x36acac: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x36acacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_36acb0:
    // 0x36acb0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36acb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_36acb4:
    // 0x36acb4: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x36acb4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_36acb8:
    // 0x36acb8: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x36acb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_36acbc:
    // 0x36acbc: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x36acbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_36acc0:
    // 0x36acc0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36acc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_36acc4:
    // 0x36acc4: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x36acc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_36acc8:
    // 0x36acc8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x36acc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_36accc:
    // 0x36accc: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x36acccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_36acd0:
    // 0x36acd0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36acd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_36acd4:
    // 0x36acd4: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x36acd4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_36acd8:
    // 0x36acd8: 0x10000003  b           . + 4 + (0x3 << 2)
label_36acdc:
    if (ctx->pc == 0x36ACDCu) {
        ctx->pc = 0x36ACDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36ACD8u;
        // 0x36acdc: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36ACE0u;
        goto label_36ace0;
    }
    ctx->pc = 0x36ACD8u;
    {
        const bool branch_taken_0x36acd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36ACDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36ACD8u;
        // 0x36acdc: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36acd8) {
            ctx->pc = 0x36ACE8u;
            goto label_36ace8;
        }
    }
    ctx->pc = 0x36ACE0u;
label_36ace0:
    // 0x36ace0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36ace0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36ace4:
    // 0x36ace4: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x36ace4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_36ace8:
    // 0x36ace8: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
label_36acec:
    if (ctx->pc == 0x36ACECu) {
        ctx->pc = 0x36ACECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36ACE8u;
        // 0x36acec: 0x2404003f  addiu       $a0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36ACF0u;
        goto label_36acf0;
    }
    ctx->pc = 0x36ACE8u;
    {
        const bool branch_taken_0x36ace8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x36ACECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36ACE8u;
        // 0x36acec: 0x2404003f  addiu       $a0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ace8) {
            ctx->pc = 0x36AD60u;
            goto label_36ad60;
        }
    }
    ctx->pc = 0x36ACF0u;
label_36acf0:
    // 0x36acf0: 0x29020018  slti        $v0, $t0, 0x18
    ctx->pc = 0x36acf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)24) ? 1 : 0);
label_36acf4:
    // 0x36acf4: 0x0  nop
    ctx->pc = 0x36acf4u;
    // NOP
label_36acf8:
    // 0x36acf8: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_36acfc:
    if (ctx->pc == 0x36ACFCu) {
        ctx->pc = 0x36ACFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36ACF8u;
        // 0x36acfc: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36AD00u;
        goto label_36ad00;
    }
    ctx->pc = 0x36ACF8u;
    {
        const bool branch_taken_0x36acf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36acf8) {
            ctx->pc = 0x36ACFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36ACF8u;
            // 0x36acfc: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36AD50u;
            goto label_36ad50;
        }
    }
    ctx->pc = 0x36AD00u;
label_36ad00:
    // 0x36ad00: 0x2508ffe8  addiu       $t0, $t0, -0x18
    ctx->pc = 0x36ad00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967272));
label_36ad04:
    // 0x36ad04: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x36ad04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_36ad08:
    // 0x36ad08: 0x1051804  sllv        $v1, $a1, $t0
    ctx->pc = 0x36ad08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 8) & 0x1F));
label_36ad0c:
    // 0x36ad0c: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x36ad0cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_36ad10:
    // 0x36ad10: 0x39020000  xori        $v0, $t0, 0x0
    ctx->pc = 0x36ad10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)0);
label_36ad14:
    // 0x36ad14: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36ad14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_36ad18:
    // 0x36ad18: 0x62380b  movn        $a3, $v1, $v0
    ctx->pc = 0x36ad18u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
label_36ad1c:
    // 0x36ad1c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x36ad1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_36ad20:
    // 0x36ad20: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x36ad20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_36ad24:
    // 0x36ad24: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36ad24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_36ad28:
    // 0x36ad28: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x36ad28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_36ad2c:
    // 0x36ad2c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36ad2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_36ad30:
    // 0x36ad30: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x36ad30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_36ad34:
    // 0x36ad34: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x36ad34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_36ad38:
    // 0x36ad38: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x36ad38u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_36ad3c:
    // 0x36ad3c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36ad3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_36ad40:
    // 0x36ad40: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x36ad40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_36ad44:
    // 0x36ad44: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x36ad44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_36ad48:
    // 0x36ad48: 0x10000002  b           . + 4 + (0x2 << 2)
label_36ad4c:
    if (ctx->pc == 0x36AD4Cu) {
        ctx->pc = 0x36AD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AD48u;
        // 0x36ad4c: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36AD50u;
        goto label_36ad50;
    }
    ctx->pc = 0x36AD48u;
    {
        const bool branch_taken_0x36ad48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36AD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AD48u;
        // 0x36ad4c: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ad48) {
            ctx->pc = 0x36AD54u;
            goto label_36ad54;
        }
    }
    ctx->pc = 0x36AD50u;
label_36ad50:
    // 0x36ad50: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x36ad50u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_36ad54:
    // 0x36ad54: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x36ad54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_36ad58:
    // 0x36ad58: 0x481ffe7  bgez        $a0, . + 4 + (-0x19 << 2)
label_36ad5c:
    if (ctx->pc == 0x36AD5Cu) {
        ctx->pc = 0x36AD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AD58u;
        // 0x36ad5c: 0x29020018  slti        $v0, $t0, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)24) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x36AD60u;
        goto label_36ad60;
    }
    ctx->pc = 0x36AD58u;
    {
        const bool branch_taken_0x36ad58 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x36AD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AD58u;
        // 0x36ad5c: 0x29020018  slti        $v0, $t0, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)24) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ad58) {
            ctx->pc = 0x36ACF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36acf8;
        }
    }
    ctx->pc = 0x36AD60u;
label_36ad60:
    // 0x36ad60: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x36ad60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_36ad64:
    // 0x36ad64: 0x15020004  bne         $t0, $v0, . + 4 + (0x4 << 2)
label_36ad68:
    if (ctx->pc == 0x36AD68u) {
        ctx->pc = 0x36AD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AD64u;
        // 0x36ad68: 0x727c2  srl         $a0, $a3, 31 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36AD6Cu;
        goto label_36ad6c;
    }
    ctx->pc = 0x36AD64u;
    {
        const bool branch_taken_0x36ad64 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x36AD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AD64u;
        // 0x36ad68: 0x727c2  srl         $a0, $a3, 31 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ad64) {
            ctx->pc = 0x36AD78u;
            goto label_36ad78;
        }
    }
    ctx->pc = 0x36AD6Cu;
label_36ad6c:
    // 0x36ad6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36ad6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36ad70:
    // 0x36ad70: 0x10000002  b           . + 4 + (0x2 << 2)
label_36ad74:
    if (ctx->pc == 0x36AD74u) {
        ctx->pc = 0x36AD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AD70u;
        // 0x36ad74: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36AD78u;
        goto label_36ad78;
    }
    ctx->pc = 0x36AD70u;
    {
        const bool branch_taken_0x36ad70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36AD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AD70u;
        // 0x36ad74: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ad70) {
            ctx->pc = 0x36AD7Cu;
            goto label_36ad7c;
        }
    }
    ctx->pc = 0x36AD78u;
label_36ad78:
    // 0x36ad78: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36ad78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_36ad7c:
    // 0x36ad7c: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_36ad80:
    if (ctx->pc == 0x36AD80u) {
        ctx->pc = 0x36AD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AD7Cu;
        // 0x36ad80: 0x2404003f  addiu       $a0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36AD84u;
        goto label_36ad84;
    }
    ctx->pc = 0x36AD7Cu;
    {
        const bool branch_taken_0x36ad7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x36AD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AD7Cu;
        // 0x36ad80: 0x2404003f  addiu       $a0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ad7c) {
            ctx->pc = 0x36ADACu;
            goto label_36adac;
        }
    }
    ctx->pc = 0x36AD84u;
label_36ad84:
    // 0x36ad84: 0x29020018  slti        $v0, $t0, 0x18
    ctx->pc = 0x36ad84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)24) ? 1 : 0);
label_36ad88:
    // 0x36ad88: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_36ad8c:
    if (ctx->pc == 0x36AD8Cu) {
        ctx->pc = 0x36AD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AD88u;
        // 0x36ad8c: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36AD90u;
        goto label_36ad90;
    }
    ctx->pc = 0x36AD88u;
    {
        const bool branch_taken_0x36ad88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36ad88) {
            ctx->pc = 0x36AD8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36AD88u;
            // 0x36ad8c: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36AD98u;
            goto label_36ad98;
        }
    }
    ctx->pc = 0x36AD90u;
label_36ad90:
    // 0x36ad90: 0x2508ffe8  addiu       $t0, $t0, -0x18
    ctx->pc = 0x36ad90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967272));
label_36ad94:
    // 0x36ad94: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x36ad94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_36ad98:
    // 0x36ad98: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x36ad98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_36ad9c:
    // 0x36ad9c: 0x0  nop
    ctx->pc = 0x36ad9cu;
    // NOP
label_36ada0:
    // 0x36ada0: 0x0  nop
    ctx->pc = 0x36ada0u;
    // NOP
label_36ada4:
    // 0x36ada4: 0x481fff8  bgez        $a0, . + 4 + (-0x8 << 2)
label_36ada8:
    if (ctx->pc == 0x36ADA8u) {
        ctx->pc = 0x36ADA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36ADA4u;
        // 0x36ada8: 0x29020018  slti        $v0, $t0, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)24) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x36ADACu;
        goto label_36adac;
    }
    ctx->pc = 0x36ADA4u;
    {
        const bool branch_taken_0x36ada4 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x36ADA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36ADA4u;
        // 0x36ada8: 0x29020018  slti        $v0, $t0, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)24) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ada4) {
            ctx->pc = 0x36AD88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36ad88;
        }
    }
    ctx->pc = 0x36ADACu;
label_36adac:
    // 0x36adac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x36adacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_36adb0:
    // 0x36adb0: 0x25080007  addiu       $t0, $t0, 0x7
    ctx->pc = 0x36adb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 7));
label_36adb4:
    // 0x36adb4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x36adb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_36adb8:
    // 0x36adb8: 0x840c3  sra         $t0, $t0, 3
    ctx->pc = 0x36adb8u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 3));
label_36adbc:
    // 0x36adbc: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x36adbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_36adc0:
    // 0x36adc0: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x36adc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_36adc4:
    // 0x36adc4: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x36adc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_36adc8:
    // 0x36adc8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x36adc8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_36adcc:
    // 0x36adcc: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x36adccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_36add0:
    // 0x36add0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x36add0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_36add4:
    // 0x36add4: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x36add4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_36add8:
    // 0x36add8: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x36add8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_36addc:
    // 0x36addc: 0x2508fff8  addiu       $t0, $t0, -0x8
    ctx->pc = 0x36addcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967288));
label_36ade0:
    // 0x36ade0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x36ade0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_36ade4:
    // 0x36ade4: 0x8e0302a8  lw          $v1, 0x2A8($s0)
    ctx->pc = 0x36ade4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 680)));
label_36ade8:
    // 0x36ade8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x36ade8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_36adec:
    // 0x36adec: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x36adecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_36adf0:
    // 0x36adf0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x36adf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_36adf4:
    // 0x36adf4: 0xae020344  sw          $v0, 0x344($s0)
    ctx->pc = 0x36adf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 836), GPR_U32(ctx, 2));
label_36adf8:
    // 0x36adf8: 0xae230048  sw          $v1, 0x48($s1)
    ctx->pc = 0x36adf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
label_36adfc:
    // 0x36adfc: 0x8e0202ac  lw          $v0, 0x2AC($s0)
    ctx->pc = 0x36adfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 684)));
label_36ae00:
    // 0x36ae00: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x36ae00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
label_36ae04:
    // 0x36ae04: 0x920302a4  lbu         $v1, 0x2A4($s0)
    ctx->pc = 0x36ae04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 676)));
label_36ae08:
    // 0x36ae08: 0xa2230059  sb          $v1, 0x59($s1)
    ctx->pc = 0x36ae08u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 89), (uint8_t)GPR_U32(ctx, 3));
label_36ae0c:
    // 0x36ae0c: 0x920202b0  lbu         $v0, 0x2B0($s0)
    ctx->pc = 0x36ae0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 688)));
label_36ae10:
    // 0x36ae10: 0xa222005a  sb          $v0, 0x5A($s1)
    ctx->pc = 0x36ae10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 90), (uint8_t)GPR_U32(ctx, 2));
label_36ae14:
    // 0x36ae14: 0x8e05038c  lw          $a1, 0x38C($s0)
    ctx->pc = 0x36ae14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 908)));
label_36ae18:
    // 0x36ae18: 0xc0ceb28  jal         func_33ACA0
label_36ae1c:
    if (ctx->pc == 0x36AE1Cu) {
        ctx->pc = 0x36AE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AE18u;
        // 0x36ae1c: 0x1052823  subu        $a1, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36AE20u;
        goto label_36ae20;
    }
    ctx->pc = 0x36AE18u;
    SET_GPR_U32(ctx, 31, 0x36AE20u);
    ctx->pc = 0x36AE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AE18u;
    // 0x36ae1c: 0x1052823  subu        $a1, $t0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ACA0u, 0x36AE18u, 0x36AE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AE20u;
label_36ae20:
    // 0x36ae20: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x36ae20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_36ae24:
    // 0x36ae24: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x36ae24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_36ae28:
    // 0x36ae28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36ae28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_36ae2c:
    // 0x36ae2c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x36ae2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_36ae30:
    // 0x36ae30: 0x40f809  jalr        $v0
label_36ae34:
    if (ctx->pc == 0x36AE34u) {
        ctx->pc = 0x36AE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AE30u;
        // 0x36ae34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36AE38u;
        goto label_36ae38;
    }
    ctx->pc = 0x36AE30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36AE38u);
        ctx->pc = 0x36AE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AE30u;
        // 0x36ae34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36AE30u, 0x36AE38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36AE38u;
label_36ae38:
    // 0x36ae38: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x36ae38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_36ae3c:
    // 0x36ae3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36ae3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_36ae40:
    // 0x36ae40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36ae40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36ae44:
    // 0x36ae44: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x36ae44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_36ae48:
    // 0x36ae48: 0x40f809  jalr        $v0
label_36ae4c:
    if (ctx->pc == 0x36AE4Cu) {
        ctx->pc = 0x36AE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AE48u;
        // 0x36ae4c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36AE50u;
        goto label_36ae50;
    }
    ctx->pc = 0x36AE48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36AE50u);
        ctx->pc = 0x36AE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AE48u;
        // 0x36ae4c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36AE48u, 0x36AE50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36AE50u;
label_36ae50:
    // 0x36ae50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36ae50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36ae54:
    // 0x36ae54: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x36ae54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_36ae58:
    // 0x36ae58: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x36ae58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_36ae5c:
    // 0x36ae5c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x36ae5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_36ae60:
    // 0x36ae60: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x36ae60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_36ae64:
    // 0x36ae64: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x36ae64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_36ae68:
    // 0x36ae68: 0x3e00008  jr          $ra
label_36ae6c:
    if (ctx->pc == 0x36AE6Cu) {
        ctx->pc = 0x36AE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AE68u;
        // 0x36ae6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36AE70u;
        goto label_fallthrough_0x36ae68;
    }
    ctx->pc = 0x36AE68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36AE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AE68u;
        // 0x36ae6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36AE68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x36ae68:
    ctx->pc = 0x36AE70u;
}
