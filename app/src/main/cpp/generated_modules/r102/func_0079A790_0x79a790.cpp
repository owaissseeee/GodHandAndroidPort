#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r102_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r102
{
// Function: func_0079A790
// Address: 0x79a790 - 0x79adc8
void func_0079A790_0x79a790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A790_0x79a790");
#endif

    switch (ctx->pc) {
        case 0x79a790u: goto label_79a790;
        case 0x79a794u: goto label_79a794;
        case 0x79a798u: goto label_79a798;
        case 0x79a79cu: goto label_79a79c;
        case 0x79a7a0u: goto label_79a7a0;
        case 0x79a7a4u: goto label_79a7a4;
        case 0x79a7a8u: goto label_79a7a8;
        case 0x79a7acu: goto label_79a7ac;
        case 0x79a7b0u: goto label_79a7b0;
        case 0x79a7b4u: goto label_79a7b4;
        case 0x79a7b8u: goto label_79a7b8;
        case 0x79a7bcu: goto label_79a7bc;
        case 0x79a7c0u: goto label_79a7c0;
        case 0x79a7c4u: goto label_79a7c4;
        case 0x79a7c8u: goto label_79a7c8;
        case 0x79a7ccu: goto label_79a7cc;
        case 0x79a7d0u: goto label_79a7d0;
        case 0x79a7d4u: goto label_79a7d4;
        case 0x79a7d8u: goto label_79a7d8;
        case 0x79a7dcu: goto label_79a7dc;
        case 0x79a7e0u: goto label_79a7e0;
        case 0x79a7e4u: goto label_79a7e4;
        case 0x79a7e8u: goto label_79a7e8;
        case 0x79a7ecu: goto label_79a7ec;
        case 0x79a7f0u: goto label_79a7f0;
        case 0x79a7f4u: goto label_79a7f4;
        case 0x79a7f8u: goto label_79a7f8;
        case 0x79a7fcu: goto label_79a7fc;
        case 0x79a800u: goto label_79a800;
        case 0x79a804u: goto label_79a804;
        case 0x79a808u: goto label_79a808;
        case 0x79a80cu: goto label_79a80c;
        case 0x79a810u: goto label_79a810;
        case 0x79a814u: goto label_79a814;
        case 0x79a818u: goto label_79a818;
        case 0x79a81cu: goto label_79a81c;
        case 0x79a820u: goto label_79a820;
        case 0x79a824u: goto label_79a824;
        case 0x79a828u: goto label_79a828;
        case 0x79a82cu: goto label_79a82c;
        case 0x79a830u: goto label_79a830;
        case 0x79a834u: goto label_79a834;
        case 0x79a838u: goto label_79a838;
        case 0x79a83cu: goto label_79a83c;
        case 0x79a840u: goto label_79a840;
        case 0x79a844u: goto label_79a844;
        case 0x79a848u: goto label_79a848;
        case 0x79a84cu: goto label_79a84c;
        case 0x79a850u: goto label_79a850;
        case 0x79a854u: goto label_79a854;
        case 0x79a858u: goto label_79a858;
        case 0x79a85cu: goto label_79a85c;
        case 0x79a860u: goto label_79a860;
        case 0x79a864u: goto label_79a864;
        case 0x79a868u: goto label_79a868;
        case 0x79a86cu: goto label_79a86c;
        case 0x79a870u: goto label_79a870;
        case 0x79a874u: goto label_79a874;
        case 0x79a878u: goto label_79a878;
        case 0x79a87cu: goto label_79a87c;
        case 0x79a880u: goto label_79a880;
        case 0x79a884u: goto label_79a884;
        case 0x79a888u: goto label_79a888;
        case 0x79a88cu: goto label_79a88c;
        case 0x79a890u: goto label_79a890;
        case 0x79a894u: goto label_79a894;
        case 0x79a898u: goto label_79a898;
        case 0x79a89cu: goto label_79a89c;
        case 0x79a8a0u: goto label_79a8a0;
        case 0x79a8a4u: goto label_79a8a4;
        case 0x79a8a8u: goto label_79a8a8;
        case 0x79a8acu: goto label_79a8ac;
        case 0x79a8b0u: goto label_79a8b0;
        case 0x79a8b4u: goto label_79a8b4;
        case 0x79a8b8u: goto label_79a8b8;
        case 0x79a8bcu: goto label_79a8bc;
        case 0x79a8c0u: goto label_79a8c0;
        case 0x79a8c4u: goto label_79a8c4;
        case 0x79a8c8u: goto label_79a8c8;
        case 0x79a8ccu: goto label_79a8cc;
        case 0x79a8d0u: goto label_79a8d0;
        case 0x79a8d4u: goto label_79a8d4;
        case 0x79a8d8u: goto label_79a8d8;
        case 0x79a8dcu: goto label_79a8dc;
        case 0x79a8e0u: goto label_79a8e0;
        case 0x79a8e4u: goto label_79a8e4;
        case 0x79a8e8u: goto label_79a8e8;
        case 0x79a8ecu: goto label_79a8ec;
        case 0x79a8f0u: goto label_79a8f0;
        case 0x79a8f4u: goto label_79a8f4;
        case 0x79a8f8u: goto label_79a8f8;
        case 0x79a8fcu: goto label_79a8fc;
        case 0x79a900u: goto label_79a900;
        case 0x79a904u: goto label_79a904;
        case 0x79a908u: goto label_79a908;
        case 0x79a90cu: goto label_79a90c;
        case 0x79a910u: goto label_79a910;
        case 0x79a914u: goto label_79a914;
        case 0x79a918u: goto label_79a918;
        case 0x79a91cu: goto label_79a91c;
        case 0x79a920u: goto label_79a920;
        case 0x79a924u: goto label_79a924;
        case 0x79a928u: goto label_79a928;
        case 0x79a92cu: goto label_79a92c;
        case 0x79a930u: goto label_79a930;
        case 0x79a934u: goto label_79a934;
        case 0x79a938u: goto label_79a938;
        case 0x79a93cu: goto label_79a93c;
        case 0x79a940u: goto label_79a940;
        case 0x79a944u: goto label_79a944;
        case 0x79a948u: goto label_79a948;
        case 0x79a94cu: goto label_79a94c;
        case 0x79a950u: goto label_79a950;
        case 0x79a954u: goto label_79a954;
        case 0x79a958u: goto label_79a958;
        case 0x79a95cu: goto label_79a95c;
        case 0x79a960u: goto label_79a960;
        case 0x79a964u: goto label_79a964;
        case 0x79a968u: goto label_79a968;
        case 0x79a96cu: goto label_79a96c;
        case 0x79a970u: goto label_79a970;
        case 0x79a974u: goto label_79a974;
        case 0x79a978u: goto label_79a978;
        case 0x79a97cu: goto label_79a97c;
        case 0x79a980u: goto label_79a980;
        case 0x79a984u: goto label_79a984;
        case 0x79a988u: goto label_79a988;
        case 0x79a98cu: goto label_79a98c;
        case 0x79a990u: goto label_79a990;
        case 0x79a994u: goto label_79a994;
        case 0x79a998u: goto label_79a998;
        case 0x79a99cu: goto label_79a99c;
        case 0x79a9a0u: goto label_79a9a0;
        case 0x79a9a4u: goto label_79a9a4;
        case 0x79a9a8u: goto label_79a9a8;
        case 0x79a9acu: goto label_79a9ac;
        case 0x79a9b0u: goto label_79a9b0;
        case 0x79a9b4u: goto label_79a9b4;
        case 0x79a9b8u: goto label_79a9b8;
        case 0x79a9bcu: goto label_79a9bc;
        case 0x79a9c0u: goto label_79a9c0;
        case 0x79a9c4u: goto label_79a9c4;
        case 0x79a9c8u: goto label_79a9c8;
        case 0x79a9ccu: goto label_79a9cc;
        case 0x79a9d0u: goto label_79a9d0;
        case 0x79a9d4u: goto label_79a9d4;
        case 0x79a9d8u: goto label_79a9d8;
        case 0x79a9dcu: goto label_79a9dc;
        case 0x79a9e0u: goto label_79a9e0;
        case 0x79a9e4u: goto label_79a9e4;
        case 0x79a9e8u: goto label_79a9e8;
        case 0x79a9ecu: goto label_79a9ec;
        case 0x79a9f0u: goto label_79a9f0;
        case 0x79a9f4u: goto label_79a9f4;
        case 0x79a9f8u: goto label_79a9f8;
        case 0x79a9fcu: goto label_79a9fc;
        case 0x79aa00u: goto label_79aa00;
        case 0x79aa04u: goto label_79aa04;
        case 0x79aa08u: goto label_79aa08;
        case 0x79aa0cu: goto label_79aa0c;
        case 0x79aa10u: goto label_79aa10;
        case 0x79aa14u: goto label_79aa14;
        case 0x79aa18u: goto label_79aa18;
        case 0x79aa1cu: goto label_79aa1c;
        case 0x79aa20u: goto label_79aa20;
        case 0x79aa24u: goto label_79aa24;
        case 0x79aa28u: goto label_79aa28;
        case 0x79aa2cu: goto label_79aa2c;
        case 0x79aa30u: goto label_79aa30;
        case 0x79aa34u: goto label_79aa34;
        case 0x79aa38u: goto label_79aa38;
        case 0x79aa3cu: goto label_79aa3c;
        case 0x79aa40u: goto label_79aa40;
        case 0x79aa44u: goto label_79aa44;
        case 0x79aa48u: goto label_79aa48;
        case 0x79aa4cu: goto label_79aa4c;
        case 0x79aa50u: goto label_79aa50;
        case 0x79aa54u: goto label_79aa54;
        case 0x79aa58u: goto label_79aa58;
        case 0x79aa5cu: goto label_79aa5c;
        case 0x79aa60u: goto label_79aa60;
        case 0x79aa64u: goto label_79aa64;
        case 0x79aa68u: goto label_79aa68;
        case 0x79aa6cu: goto label_79aa6c;
        case 0x79aa70u: goto label_79aa70;
        case 0x79aa74u: goto label_79aa74;
        case 0x79aa78u: goto label_79aa78;
        case 0x79aa7cu: goto label_79aa7c;
        case 0x79aa80u: goto label_79aa80;
        case 0x79aa84u: goto label_79aa84;
        case 0x79aa88u: goto label_79aa88;
        case 0x79aa8cu: goto label_79aa8c;
        case 0x79aa90u: goto label_79aa90;
        case 0x79aa94u: goto label_79aa94;
        case 0x79aa98u: goto label_79aa98;
        case 0x79aa9cu: goto label_79aa9c;
        case 0x79aaa0u: goto label_79aaa0;
        case 0x79aaa4u: goto label_79aaa4;
        case 0x79aaa8u: goto label_79aaa8;
        case 0x79aaacu: goto label_79aaac;
        case 0x79aab0u: goto label_79aab0;
        case 0x79aab4u: goto label_79aab4;
        case 0x79aab8u: goto label_79aab8;
        case 0x79aabcu: goto label_79aabc;
        case 0x79aac0u: goto label_79aac0;
        case 0x79aac4u: goto label_79aac4;
        case 0x79aac8u: goto label_79aac8;
        case 0x79aaccu: goto label_79aacc;
        case 0x79aad0u: goto label_79aad0;
        case 0x79aad4u: goto label_79aad4;
        case 0x79aad8u: goto label_79aad8;
        case 0x79aadcu: goto label_79aadc;
        case 0x79aae0u: goto label_79aae0;
        case 0x79aae4u: goto label_79aae4;
        case 0x79aae8u: goto label_79aae8;
        case 0x79aaecu: goto label_79aaec;
        case 0x79aaf0u: goto label_79aaf0;
        case 0x79aaf4u: goto label_79aaf4;
        case 0x79aaf8u: goto label_79aaf8;
        case 0x79aafcu: goto label_79aafc;
        case 0x79ab00u: goto label_79ab00;
        case 0x79ab04u: goto label_79ab04;
        case 0x79ab08u: goto label_79ab08;
        case 0x79ab0cu: goto label_79ab0c;
        case 0x79ab10u: goto label_79ab10;
        case 0x79ab14u: goto label_79ab14;
        case 0x79ab18u: goto label_79ab18;
        case 0x79ab1cu: goto label_79ab1c;
        case 0x79ab20u: goto label_79ab20;
        case 0x79ab24u: goto label_79ab24;
        case 0x79ab28u: goto label_79ab28;
        case 0x79ab2cu: goto label_79ab2c;
        case 0x79ab30u: goto label_79ab30;
        case 0x79ab34u: goto label_79ab34;
        case 0x79ab38u: goto label_79ab38;
        case 0x79ab3cu: goto label_79ab3c;
        case 0x79ab40u: goto label_79ab40;
        case 0x79ab44u: goto label_79ab44;
        case 0x79ab48u: goto label_79ab48;
        case 0x79ab4cu: goto label_79ab4c;
        case 0x79ab50u: goto label_79ab50;
        case 0x79ab54u: goto label_79ab54;
        case 0x79ab58u: goto label_79ab58;
        case 0x79ab5cu: goto label_79ab5c;
        case 0x79ab60u: goto label_79ab60;
        case 0x79ab64u: goto label_79ab64;
        case 0x79ab68u: goto label_79ab68;
        case 0x79ab6cu: goto label_79ab6c;
        case 0x79ab70u: goto label_79ab70;
        case 0x79ab74u: goto label_79ab74;
        case 0x79ab78u: goto label_79ab78;
        case 0x79ab7cu: goto label_79ab7c;
        case 0x79ab80u: goto label_79ab80;
        case 0x79ab84u: goto label_79ab84;
        case 0x79ab88u: goto label_79ab88;
        case 0x79ab8cu: goto label_79ab8c;
        case 0x79ab90u: goto label_79ab90;
        case 0x79ab94u: goto label_79ab94;
        case 0x79ab98u: goto label_79ab98;
        case 0x79ab9cu: goto label_79ab9c;
        case 0x79aba0u: goto label_79aba0;
        case 0x79aba4u: goto label_79aba4;
        case 0x79aba8u: goto label_79aba8;
        case 0x79abacu: goto label_79abac;
        case 0x79abb0u: goto label_79abb0;
        case 0x79abb4u: goto label_79abb4;
        case 0x79abb8u: goto label_79abb8;
        case 0x79abbcu: goto label_79abbc;
        case 0x79abc0u: goto label_79abc0;
        case 0x79abc4u: goto label_79abc4;
        case 0x79abc8u: goto label_79abc8;
        case 0x79abccu: goto label_79abcc;
        case 0x79abd0u: goto label_79abd0;
        case 0x79abd4u: goto label_79abd4;
        case 0x79abd8u: goto label_79abd8;
        case 0x79abdcu: goto label_79abdc;
        case 0x79abe0u: goto label_79abe0;
        case 0x79abe4u: goto label_79abe4;
        case 0x79abe8u: goto label_79abe8;
        case 0x79abecu: goto label_79abec;
        case 0x79abf0u: goto label_79abf0;
        case 0x79abf4u: goto label_79abf4;
        case 0x79abf8u: goto label_79abf8;
        case 0x79abfcu: goto label_79abfc;
        case 0x79ac00u: goto label_79ac00;
        case 0x79ac04u: goto label_79ac04;
        case 0x79ac08u: goto label_79ac08;
        case 0x79ac0cu: goto label_79ac0c;
        case 0x79ac10u: goto label_79ac10;
        case 0x79ac14u: goto label_79ac14;
        case 0x79ac18u: goto label_79ac18;
        case 0x79ac1cu: goto label_79ac1c;
        case 0x79ac20u: goto label_79ac20;
        case 0x79ac24u: goto label_79ac24;
        case 0x79ac28u: goto label_79ac28;
        case 0x79ac2cu: goto label_79ac2c;
        case 0x79ac30u: goto label_79ac30;
        case 0x79ac34u: goto label_79ac34;
        case 0x79ac38u: goto label_79ac38;
        case 0x79ac3cu: goto label_79ac3c;
        case 0x79ac40u: goto label_79ac40;
        case 0x79ac44u: goto label_79ac44;
        case 0x79ac48u: goto label_79ac48;
        case 0x79ac4cu: goto label_79ac4c;
        case 0x79ac50u: goto label_79ac50;
        case 0x79ac54u: goto label_79ac54;
        case 0x79ac58u: goto label_79ac58;
        case 0x79ac5cu: goto label_79ac5c;
        case 0x79ac60u: goto label_79ac60;
        case 0x79ac64u: goto label_79ac64;
        case 0x79ac68u: goto label_79ac68;
        case 0x79ac6cu: goto label_79ac6c;
        case 0x79ac70u: goto label_79ac70;
        case 0x79ac74u: goto label_79ac74;
        case 0x79ac78u: goto label_79ac78;
        case 0x79ac7cu: goto label_79ac7c;
        case 0x79ac80u: goto label_79ac80;
        case 0x79ac84u: goto label_79ac84;
        case 0x79ac88u: goto label_79ac88;
        case 0x79ac8cu: goto label_79ac8c;
        case 0x79ac90u: goto label_79ac90;
        case 0x79ac94u: goto label_79ac94;
        case 0x79ac98u: goto label_79ac98;
        case 0x79ac9cu: goto label_79ac9c;
        case 0x79aca0u: goto label_79aca0;
        case 0x79aca4u: goto label_79aca4;
        case 0x79aca8u: goto label_79aca8;
        case 0x79acacu: goto label_79acac;
        case 0x79acb0u: goto label_79acb0;
        case 0x79acb4u: goto label_79acb4;
        case 0x79acb8u: goto label_79acb8;
        case 0x79acbcu: goto label_79acbc;
        case 0x79acc0u: goto label_79acc0;
        case 0x79acc4u: goto label_79acc4;
        case 0x79acc8u: goto label_79acc8;
        case 0x79acccu: goto label_79accc;
        case 0x79acd0u: goto label_79acd0;
        case 0x79acd4u: goto label_79acd4;
        case 0x79acd8u: goto label_79acd8;
        case 0x79acdcu: goto label_79acdc;
        case 0x79ace0u: goto label_79ace0;
        case 0x79ace4u: goto label_79ace4;
        case 0x79ace8u: goto label_79ace8;
        case 0x79acecu: goto label_79acec;
        case 0x79acf0u: goto label_79acf0;
        case 0x79acf4u: goto label_79acf4;
        case 0x79acf8u: goto label_79acf8;
        case 0x79acfcu: goto label_79acfc;
        case 0x79ad00u: goto label_79ad00;
        case 0x79ad04u: goto label_79ad04;
        case 0x79ad08u: goto label_79ad08;
        case 0x79ad0cu: goto label_79ad0c;
        case 0x79ad10u: goto label_79ad10;
        case 0x79ad14u: goto label_79ad14;
        case 0x79ad18u: goto label_79ad18;
        case 0x79ad1cu: goto label_79ad1c;
        case 0x79ad20u: goto label_79ad20;
        case 0x79ad24u: goto label_79ad24;
        case 0x79ad28u: goto label_79ad28;
        case 0x79ad2cu: goto label_79ad2c;
        case 0x79ad30u: goto label_79ad30;
        case 0x79ad34u: goto label_79ad34;
        case 0x79ad38u: goto label_79ad38;
        case 0x79ad3cu: goto label_79ad3c;
        case 0x79ad40u: goto label_79ad40;
        case 0x79ad44u: goto label_79ad44;
        case 0x79ad48u: goto label_79ad48;
        case 0x79ad4cu: goto label_79ad4c;
        case 0x79ad50u: goto label_79ad50;
        case 0x79ad54u: goto label_79ad54;
        case 0x79ad58u: goto label_79ad58;
        case 0x79ad5cu: goto label_79ad5c;
        case 0x79ad60u: goto label_79ad60;
        case 0x79ad64u: goto label_79ad64;
        case 0x79ad68u: goto label_79ad68;
        case 0x79ad6cu: goto label_79ad6c;
        case 0x79ad70u: goto label_79ad70;
        case 0x79ad74u: goto label_79ad74;
        case 0x79ad78u: goto label_79ad78;
        case 0x79ad7cu: goto label_79ad7c;
        case 0x79ad80u: goto label_79ad80;
        case 0x79ad84u: goto label_79ad84;
        case 0x79ad88u: goto label_79ad88;
        case 0x79ad8cu: goto label_79ad8c;
        case 0x79ad90u: goto label_79ad90;
        case 0x79ad94u: goto label_79ad94;
        case 0x79ad98u: goto label_79ad98;
        case 0x79ad9cu: goto label_79ad9c;
        case 0x79ada0u: goto label_79ada0;
        case 0x79ada4u: goto label_79ada4;
        case 0x79ada8u: goto label_79ada8;
        case 0x79adacu: goto label_79adac;
        case 0x79adb0u: goto label_79adb0;
        case 0x79adb4u: goto label_79adb4;
        case 0x79adb8u: goto label_79adb8;
        case 0x79adbcu: goto label_79adbc;
        case 0x79adc0u: goto label_79adc0;
        case 0x79adc4u: goto label_79adc4;
        default: break;
    }

    ctx->pc = 0x79a790u;

label_79a790:
    // 0x79a790: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x79a790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_79a794:
    // 0x79a794: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x79a794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_79a798:
    // 0x79a798: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x79a798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_79a79c:
    // 0x79a79c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a79cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79a7a0:
    // 0x79a7a0: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x79a7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_79a7a4:
    // 0x79a7a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a7a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a7a8:
    // 0x79a7a8: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x79a7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_79a7ac:
    // 0x79a7ac: 0x3c120058  lui         $s2, 0x58
    ctx->pc = 0x79a7acu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)88 << 16));
label_79a7b0:
    // 0x79a7b0: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x79a7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_79a7b4:
    // 0x79a7b4: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x79a7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_79a7b8:
    // 0x79a7b8: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x79a7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_79a7bc:
    // 0x79a7bc: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x79a7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_79a7c0:
    // 0x79a7c0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x79a7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_79a7c4:
    // 0x79a7c4: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x79a7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
label_79a7c8:
    // 0x79a7c8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x79a7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_79a7cc:
    // 0x79a7cc: 0xc0a588c  jal         func_296230
label_79a7d0:
    if (ctx->pc == 0x79A7D0u) {
        ctx->pc = 0x79A7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7CCu;
        // 0x79a7d0: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A7D4u;
        goto label_79a7d4;
    }
    ctx->pc = 0x79A7CCu;
    SET_GPR_U32(ctx, 31, 0x79A7D4u);
    ctx->pc = 0x79A7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A7CCu;
    // 0x79a7d0: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296230u, 0x79A7CCu, 0x79A7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A7D4u;
label_79a7d4:
    // 0x79a7d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79a7d8:
    // 0x79a7d8: 0xc0a578e  jal         func_295E38
label_79a7dc:
    if (ctx->pc == 0x79A7DCu) {
        ctx->pc = 0x79A7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7D8u;
        // 0x79a7dc: 0x240503bc  addiu       $a1, $zero, 0x3BC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 956));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A7E0u;
        goto label_79a7e0;
    }
    ctx->pc = 0x79A7D8u;
    SET_GPR_U32(ctx, 31, 0x79A7E0u);
    ctx->pc = 0x79A7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A7D8u;
    // 0x79a7dc: 0x240503bc  addiu       $a1, $zero, 0x3BC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 956));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E38u, 0x79A7D8u, 0x79A7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A7E0u;
label_79a7e0:
    // 0x79a7e0: 0x26446ab0  addiu       $a0, $s2, 0x6AB0
    ctx->pc = 0x79a7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 27312));
label_79a7e4:
    // 0x79a7e4: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x79a7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_79a7e8:
    // 0x79a7e8: 0xc0a5526  jal         func_295498
label_79a7ec:
    if (ctx->pc == 0x79A7ECu) {
        ctx->pc = 0x79A7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A7E8u;
        // 0x79a7ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A7F0u;
        goto label_79a7f0;
    }
    ctx->pc = 0x79A7E8u;
    SET_GPR_U32(ctx, 31, 0x79A7F0u);
    ctx->pc = 0x79A7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A7E8u;
    // 0x79a7ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295498u, 0x79A7E8u, 0x79A7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A7F0u;
label_79a7f0:
    // 0x79a7f0: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x79a7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
label_79a7f4:
    // 0x79a7f4: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x79a7f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_79a7f8:
    // 0x79a7f8: 0x3c110060  lui         $s1, 0x60
    ctx->pc = 0x79a7f8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
label_79a7fc:
    // 0x79a7fc: 0x2624ea60  addiu       $a0, $s1, -0x15A0
    ctx->pc = 0x79a7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961760));
label_79a800:
    // 0x79a800: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x79a800u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79a804:
    // 0x79a804: 0xc0b0a92  jal         func_2C2A48
label_79a808:
    if (ctx->pc == 0x79A808u) {
        ctx->pc = 0x79A808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A804u;
        // 0x79a808: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A80Cu;
        goto label_79a80c;
    }
    ctx->pc = 0x79A804u;
    SET_GPR_U32(ctx, 31, 0x79A80Cu);
    ctx->pc = 0x79A808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A804u;
    // 0x79a808: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x79A804u, 0x79A80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A80Cu;
label_79a80c:
    // 0x79a80c: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x79a80cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
label_79a810:
    // 0x79a810: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x79a810u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
label_79a814:
    // 0x79a814: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79a814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_79a818:
    // 0x79a818: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79a81c:
    // 0x79a81c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79a81cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79a820:
    // 0x79a820: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x79a820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_79a824:
    // 0x79a824: 0xc0a57e0  jal         func_295F80
label_79a828:
    if (ctx->pc == 0x79A828u) {
        ctx->pc = 0x79A828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A824u;
        // 0x79a828: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A82Cu;
        goto label_79a82c;
    }
    ctx->pc = 0x79A824u;
    SET_GPR_U32(ctx, 31, 0x79A82Cu);
    ctx->pc = 0x79A828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A824u;
    // 0x79a828: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79A824u, 0x79A82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A82Cu;
label_79a82c:
    // 0x79a82c: 0x240b82d  daddu       $s7, $s2, $zero
    ctx->pc = 0x79a82cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_79a830:
    // 0x79a830: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x79a830u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_79a834:
    // 0x79a834: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x79a834u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79a838:
    // 0x79a838: 0x3c13003c  lui         $s3, 0x3C
    ctx->pc = 0x79a838u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
label_79a83c:
    // 0x79a83c: 0x3c16007a  lui         $s6, 0x7A
    ctx->pc = 0x79a83cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)122 << 16));
label_79a840:
    // 0x79a840: 0x10000007  b           . + 4 + (0x7 << 2)
label_79a844:
    if (ctx->pc == 0x79A844u) {
        ctx->pc = 0x79A844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A840u;
        // 0x79a844: 0x3c1e007a  lui         $fp, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A848u;
        goto label_79a848;
    }
    ctx->pc = 0x79A840u;
    {
        const bool branch_taken_0x79a840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A840u;
        // 0x79a844: 0x3c1e007a  lui         $fp, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a840) {
            ctx->pc = 0x79A860u;
            goto label_79a860;
        }
    }
    ctx->pc = 0x79A848u;
label_79a848:
    // 0x79a848: 0x8c437a8c  lw          $v1, 0x7A8C($v0)
    ctx->pc = 0x79a848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31372)));
label_79a84c:
    // 0x79a84c: 0x460000b  bltz        $v1, . + 4 + (0xB << 2)
label_79a850:
    if (ctx->pc == 0x79A850u) {
        ctx->pc = 0x79A850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A84Cu;
        // 0x79a850: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A854u;
        goto label_79a854;
    }
    ctx->pc = 0x79A84Cu;
    {
        const bool branch_taken_0x79a84c = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x79A850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A84Cu;
        // 0x79a850: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a84c) {
            ctx->pc = 0x79A87Cu;
            goto label_79a87c;
        }
    }
    ctx->pc = 0x79A854u;
label_79a854:
    // 0x79a854: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a858:
    // 0x79a858: 0xc0b56a8  jal         func_2D5AA0
label_79a85c:
    if (ctx->pc == 0x79A85Cu) {
        ctx->pc = 0x79A85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A858u;
        // 0x79a85c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A860u;
        goto label_79a860;
    }
    ctx->pc = 0x79A858u;
    SET_GPR_U32(ctx, 31, 0x79A860u);
    ctx->pc = 0x79A85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A858u;
    // 0x79a85c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A858u, 0x79A860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A860u;
label_79a860:
    // 0x79a860: 0x2684ea60  addiu       $a0, $s4, -0x15A0
    ctx->pc = 0x79a860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961760));
label_79a864:
    // 0x79a864: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x79a864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_79a868:
    // 0x79a868: 0xc0b0aa6  jal         func_2C2A98
label_79a86c:
    if (ctx->pc == 0x79A86Cu) {
        ctx->pc = 0x79A86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A868u;
        // 0x79a86c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A870u;
        goto label_79a870;
    }
    ctx->pc = 0x79A868u;
    SET_GPR_U32(ctx, 31, 0x79A870u);
    ctx->pc = 0x79A86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A868u;
    // 0x79a86c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x79A868u, 0x79A870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A870u;
label_79a870:
    // 0x79a870: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x79a870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a874:
    // 0x79a874: 0x1443fff4  bne         $v0, $v1, . + 4 + (-0xC << 2)
label_79a878:
    if (ctx->pc == 0x79A878u) {
        ctx->pc = 0x79A878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A874u;
        // 0x79a878: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A87Cu;
        goto label_79a87c;
    }
    ctx->pc = 0x79A874u;
    {
        const bool branch_taken_0x79a874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x79A878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A874u;
        // 0x79a878: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a874) {
            ctx->pc = 0x79A848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a848;
        }
    }
    ctx->pc = 0x79A87Cu;
label_79a87c:
    // 0x79a87c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79a880:
    // 0x79a880: 0xc0a579e  jal         func_295E78
label_79a884:
    if (ctx->pc == 0x79A884u) {
        ctx->pc = 0x79A884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A880u;
        // 0x79a884: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A888u;
        goto label_79a888;
    }
    ctx->pc = 0x79A880u;
    SET_GPR_U32(ctx, 31, 0x79A888u);
    ctx->pc = 0x79A884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A880u;
    // 0x79a884: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E78u, 0x79A880u, 0x79A888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A888u;
label_79a888:
    // 0x79a888: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x79a888u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a88c:
    // 0x79a88c: 0x2684ea60  addiu       $a0, $s4, -0x15A0
    ctx->pc = 0x79a88cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961760));
label_79a890:
    // 0x79a890: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x79a890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_79a894:
    // 0x79a894: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x79a894u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_79a898:
    // 0x79a898: 0xc0b0a92  jal         func_2C2A48
label_79a89c:
    if (ctx->pc == 0x79A89Cu) {
        ctx->pc = 0x79A89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A898u;
        // 0x79a89c: 0x3c110074  lui         $s1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A8A0u;
        goto label_79a8a0;
    }
    ctx->pc = 0x79A898u;
    SET_GPR_U32(ctx, 31, 0x79A8A0u);
    ctx->pc = 0x79A89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A898u;
    // 0x79a89c: 0x3c110074  lui         $s1, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)116 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x79A898u, 0x79A8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A8A0u;
label_79a8a0:
    // 0x79a8a0: 0x3c104000  lui         $s0, 0x4000
    ctx->pc = 0x79a8a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)16384 << 16));
label_79a8a4:
    // 0x79a8a4: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x79a8a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
label_79a8a8:
    // 0x79a8a8: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x79a8a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
label_79a8ac:
    // 0x79a8ac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79a8acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_79a8b0:
    // 0x79a8b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a8b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79a8b4:
    // 0x79a8b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x79a8b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_79a8b8:
    // 0x79a8b8: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x79a8b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_79a8bc:
    // 0x79a8bc: 0xc0a57e0  jal         func_295F80
label_79a8c0:
    if (ctx->pc == 0x79A8C0u) {
        ctx->pc = 0x79A8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8BCu;
        // 0x79a8c0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A8C4u;
        goto label_79a8c4;
    }
    ctx->pc = 0x79A8BCu;
    SET_GPR_U32(ctx, 31, 0x79A8C4u);
    ctx->pc = 0x79A8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A8BCu;
    // 0x79a8c0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79A8BCu, 0x79A8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A8C4u;
label_79a8c4:
    // 0x79a8c4: 0x10000009  b           . + 4 + (0x9 << 2)
label_79a8c8:
    if (ctx->pc == 0x79A8C8u) {
        ctx->pc = 0x79A8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8C4u;
        // 0x79a8c8: 0x2684ea60  addiu       $a0, $s4, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A8CCu;
        goto label_79a8cc;
    }
    ctx->pc = 0x79A8C4u;
    {
        const bool branch_taken_0x79a8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8C4u;
        // 0x79a8c8: 0x2684ea60  addiu       $a0, $s4, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a8c4) {
            ctx->pc = 0x79A8ECu;
            goto label_79a8ec;
        }
    }
    ctx->pc = 0x79A8CCu;
label_79a8cc:
    // 0x79a8cc: 0x0  nop
    ctx->pc = 0x79a8ccu;
    // NOP
label_79a8d0:
    // 0x79a8d0: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x79a8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_79a8d4:
    // 0x79a8d4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_79a8d8:
    if (ctx->pc == 0x79A8D8u) {
        ctx->pc = 0x79A8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8D4u;
        // 0x79a8d8: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A8DCu;
        goto label_79a8dc;
    }
    ctx->pc = 0x79A8D4u;
    {
        const bool branch_taken_0x79a8d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8D4u;
        // 0x79a8d8: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a8d4) {
            ctx->pc = 0x79A900u;
            goto label_79a900;
        }
    }
    ctx->pc = 0x79A8DCu;
label_79a8dc:
    // 0x79a8dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a8e0:
    // 0x79a8e0: 0xc0b56a8  jal         func_2D5AA0
label_79a8e4:
    if (ctx->pc == 0x79A8E4u) {
        ctx->pc = 0x79A8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8E0u;
        // 0x79a8e4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A8E8u;
        goto label_79a8e8;
    }
    ctx->pc = 0x79A8E0u;
    SET_GPR_U32(ctx, 31, 0x79A8E8u);
    ctx->pc = 0x79A8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A8E0u;
    // 0x79a8e4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A8E0u, 0x79A8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A8E8u;
label_79a8e8:
    // 0x79a8e8: 0x2684ea60  addiu       $a0, $s4, -0x15A0
    ctx->pc = 0x79a8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961760));
label_79a8ec:
    // 0x79a8ec: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x79a8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_79a8f0:
    // 0x79a8f0: 0xc0b0aa6  jal         func_2C2A98
label_79a8f4:
    if (ctx->pc == 0x79A8F4u) {
        ctx->pc = 0x79A8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8F0u;
        // 0x79a8f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A8F8u;
        goto label_79a8f8;
    }
    ctx->pc = 0x79A8F0u;
    SET_GPR_U32(ctx, 31, 0x79A8F8u);
    ctx->pc = 0x79A8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A8F0u;
    // 0x79a8f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x79A8F0u, 0x79A8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A8F8u;
label_79a8f8:
    // 0x79a8f8: 0x1455fff5  bne         $v0, $s5, . + 4 + (-0xB << 2)
label_79a8fc:
    if (ctx->pc == 0x79A8FCu) {
        ctx->pc = 0x79A8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8F8u;
        // 0x79a8fc: 0x8e227a8c  lw          $v0, 0x7A8C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 31372)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A900u;
        goto label_79a900;
    }
    ctx->pc = 0x79A8F8u;
    {
        const bool branch_taken_0x79a8f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x79A8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8F8u;
        // 0x79a8fc: 0x8e227a8c  lw          $v0, 0x7A8C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 31372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a8f8) {
            ctx->pc = 0x79A8D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a8d0;
        }
    }
    ctx->pc = 0x79A900u;
label_79a900:
    // 0x79a900: 0x2684ea60  addiu       $a0, $s4, -0x15A0
    ctx->pc = 0x79a900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961760));
label_79a904:
    // 0x79a904: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x79a904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_79a908:
    // 0x79a908: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x79a908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_79a90c:
    // 0x79a90c: 0xc0b0a92  jal         func_2C2A48
label_79a910:
    if (ctx->pc == 0x79A910u) {
        ctx->pc = 0x79A910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A90Cu;
        // 0x79a910: 0x3c15003c  lui         $s5, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A914u;
        goto label_79a914;
    }
    ctx->pc = 0x79A90Cu;
    SET_GPR_U32(ctx, 31, 0x79A914u);
    ctx->pc = 0x79A910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A90Cu;
    // 0x79a910: 0x3c15003c  lui         $s5, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x79A90Cu, 0x79A914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A914u;
label_79a914:
    // 0x79a914: 0x3c11007a  lui         $s1, 0x7A
    ctx->pc = 0x79a914u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
label_79a918:
    // 0x79a918: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x79a918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
label_79a91c:
    // 0x79a91c: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x79a91cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
label_79a920:
    // 0x79a920: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79a920u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_79a924:
    // 0x79a924: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79a928:
    // 0x79a928: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x79a928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_79a92c:
    // 0x79a92c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a92cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a930:
    // 0x79a930: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x79a930u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a934:
    // 0x79a934: 0xc0a57e0  jal         func_295F80
label_79a938:
    if (ctx->pc == 0x79A938u) {
        ctx->pc = 0x79A938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A934u;
        // 0x79a938: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A93Cu;
        goto label_79a93c;
    }
    ctx->pc = 0x79A934u;
    SET_GPR_U32(ctx, 31, 0x79A93Cu);
    ctx->pc = 0x79A938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A934u;
    // 0x79a938: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79A934u, 0x79A93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A93Cu;
label_79a93c:
    // 0x79a93c: 0x10000005  b           . + 4 + (0x5 << 2)
label_79a940:
    if (ctx->pc == 0x79A940u) {
        ctx->pc = 0x79A944u;
        goto label_79a944;
    }
    ctx->pc = 0x79A93Cu;
    {
        const bool branch_taken_0x79a93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a93c) {
            ctx->pc = 0x79A954u;
            goto label_79a954;
        }
    }
    ctx->pc = 0x79A944u;
label_79a944:
    // 0x79a944: 0x0  nop
    ctx->pc = 0x79a944u;
    // NOP
label_79a948:
    // 0x79a948: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a94c:
    // 0x79a94c: 0xc0b56a8  jal         func_2D5AA0
label_79a950:
    if (ctx->pc == 0x79A950u) {
        ctx->pc = 0x79A950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A94Cu;
        // 0x79a950: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A954u;
        goto label_79a954;
    }
    ctx->pc = 0x79A94Cu;
    SET_GPR_U32(ctx, 31, 0x79A954u);
    ctx->pc = 0x79A950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A94Cu;
    // 0x79a950: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A94Cu, 0x79A954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A954u;
label_79a954:
    // 0x79a954: 0xc0a5806  jal         func_296018
label_79a958:
    if (ctx->pc == 0x79A958u) {
        ctx->pc = 0x79A958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A954u;
        // 0x79a958: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A95Cu;
        goto label_79a95c;
    }
    ctx->pc = 0x79A954u;
    SET_GPR_U32(ctx, 31, 0x79A95Cu);
    ctx->pc = 0x79A958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A954u;
    // 0x79a958: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296018u, 0x79A954u, 0x79A95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A95Cu;
label_79a95c:
    // 0x79a95c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_79a960:
    if (ctx->pc == 0x79A960u) {
        ctx->pc = 0x79A960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A95Cu;
        // 0x79a960: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A964u;
        goto label_79a964;
    }
    ctx->pc = 0x79A95Cu;
    {
        const bool branch_taken_0x79a95c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A95Cu;
        // 0x79a960: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a95c) {
            ctx->pc = 0x79A974u;
            goto label_79a974;
        }
    }
    ctx->pc = 0x79A964u;
label_79a964:
    // 0x79a964: 0xc0b145a  jal         func_2C5168
label_79a968:
    if (ctx->pc == 0x79A968u) {
        ctx->pc = 0x79A968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A964u;
        // 0x79a968: 0x2625bf20  addiu       $a1, $s1, -0x40E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A96Cu;
        goto label_79a96c;
    }
    ctx->pc = 0x79A964u;
    SET_GPR_U32(ctx, 31, 0x79A96Cu);
    ctx->pc = 0x79A968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A964u;
    // 0x79a968: 0x2625bf20  addiu       $a1, $s1, -0x40E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5168u, 0x79A964u, 0x79A96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A96Cu;
label_79a96c:
    // 0x79a96c: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
label_79a970:
    if (ctx->pc == 0x79A970u) {
        ctx->pc = 0x79A970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A96Cu;
        // 0x79a970: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A974u;
        goto label_79a974;
    }
    ctx->pc = 0x79A96Cu;
    {
        const bool branch_taken_0x79a96c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x79A970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A96Cu;
        // 0x79a970: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a96c) {
            ctx->pc = 0x79A948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a948;
        }
    }
    ctx->pc = 0x79A974u;
label_79a974:
    // 0x79a974: 0x2684ea60  addiu       $a0, $s4, -0x15A0
    ctx->pc = 0x79a974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961760));
label_79a978:
    // 0x79a978: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x79a978u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_79a97c:
    // 0x79a97c: 0xc0b0a92  jal         func_2C2A48
label_79a980:
    if (ctx->pc == 0x79A980u) {
        ctx->pc = 0x79A980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A97Cu;
        // 0x79a980: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A984u;
        goto label_79a984;
    }
    ctx->pc = 0x79A97Cu;
    SET_GPR_U32(ctx, 31, 0x79A984u);
    ctx->pc = 0x79A980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A97Cu;
    // 0x79a980: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x79A97Cu, 0x79A984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A984u;
label_79a984:
    // 0x79a984: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x79a984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
label_79a988:
    // 0x79a988: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x79a988u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
label_79a98c:
    // 0x79a98c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79a98cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_79a990:
    // 0x79a990: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79a994:
    // 0x79a994: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x79a994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_79a998:
    // 0x79a998: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x79a998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_79a99c:
    // 0x79a99c: 0xc0a57e0  jal         func_295F80
label_79a9a0:
    if (ctx->pc == 0x79A9A0u) {
        ctx->pc = 0x79A9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A99Cu;
        // 0x79a9a0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A9A4u;
        goto label_79a9a4;
    }
    ctx->pc = 0x79A99Cu;
    SET_GPR_U32(ctx, 31, 0x79A9A4u);
    ctx->pc = 0x79A9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A99Cu;
    // 0x79a9a0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79A99Cu, 0x79A9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9A4u;
label_79a9a4:
    // 0x79a9a4: 0x10000006  b           . + 4 + (0x6 << 2)
label_79a9a8:
    if (ctx->pc == 0x79A9A8u) {
        ctx->pc = 0x79A9ACu;
        goto label_79a9ac;
    }
    ctx->pc = 0x79A9A4u;
    {
        const bool branch_taken_0x79a9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a9a4) {
            ctx->pc = 0x79A9C0u;
            goto label_79a9c0;
        }
    }
    ctx->pc = 0x79A9ACu;
label_79a9ac:
    // 0x79a9ac: 0x0  nop
    ctx->pc = 0x79a9acu;
    // NOP
label_79a9b0:
    // 0x79a9b0: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x79a9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
label_79a9b4:
    // 0x79a9b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a9b8:
    // 0x79a9b8: 0xc0b56a8  jal         func_2D5AA0
label_79a9bc:
    if (ctx->pc == 0x79A9BCu) {
        ctx->pc = 0x79A9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9B8u;
        // 0x79a9bc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A9C0u;
        goto label_79a9c0;
    }
    ctx->pc = 0x79A9B8u;
    SET_GPR_U32(ctx, 31, 0x79A9C0u);
    ctx->pc = 0x79A9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9B8u;
    // 0x79a9bc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A9B8u, 0x79A9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9C0u;
label_79a9c0:
    // 0x79a9c0: 0xc0a5806  jal         func_296018
label_79a9c4:
    if (ctx->pc == 0x79A9C4u) {
        ctx->pc = 0x79A9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9C0u;
        // 0x79a9c4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A9C8u;
        goto label_79a9c8;
    }
    ctx->pc = 0x79A9C0u;
    SET_GPR_U32(ctx, 31, 0x79A9C8u);
    ctx->pc = 0x79A9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9C0u;
    // 0x79a9c4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296018u, 0x79A9C0u, 0x79A9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9C8u;
label_79a9c8:
    // 0x79a9c8: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
label_79a9cc:
    if (ctx->pc == 0x79A9CCu) {
        ctx->pc = 0x79A9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9C8u;
        // 0x79a9cc: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A9D0u;
        goto label_79a9d0;
    }
    ctx->pc = 0x79A9C8u;
    {
        const bool branch_taken_0x79a9c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9C8u;
        // 0x79a9cc: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a9c8) {
            ctx->pc = 0x79A9B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a9b0;
        }
    }
    ctx->pc = 0x79A9D0u;
label_79a9d0:
    // 0x79a9d0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x79a9d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a9d4:
    // 0x79a9d4: 0x10000005  b           . + 4 + (0x5 << 2)
label_79a9d8:
    if (ctx->pc == 0x79A9D8u) {
        ctx->pc = 0x79A9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9D4u;
        // 0x79a9d8: 0x2450ea60  addiu       $s0, $v0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A9DCu;
        goto label_79a9dc;
    }
    ctx->pc = 0x79A9D4u;
    {
        const bool branch_taken_0x79a9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9D4u;
        // 0x79a9d8: 0x2450ea60  addiu       $s0, $v0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a9d4) {
            ctx->pc = 0x79A9ECu;
            goto label_79a9ec;
        }
    }
    ctx->pc = 0x79A9DCu;
label_79a9dc:
    // 0x79a9dc: 0x0  nop
    ctx->pc = 0x79a9dcu;
    // NOP
label_79a9e0:
    // 0x79a9e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79a9e4:
    // 0x79a9e4: 0xc0b56a8  jal         func_2D5AA0
label_79a9e8:
    if (ctx->pc == 0x79A9E8u) {
        ctx->pc = 0x79A9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9E4u;
        // 0x79a9e8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A9ECu;
        goto label_79a9ec;
    }
    ctx->pc = 0x79A9E4u;
    SET_GPR_U32(ctx, 31, 0x79A9ECu);
    ctx->pc = 0x79A9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9E4u;
    // 0x79a9e8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A9E4u, 0x79A9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9ECu;
label_79a9ec:
    // 0x79a9ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79a9f0:
    // 0x79a9f0: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x79a9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_79a9f4:
    // 0x79a9f4: 0xc0b0aa6  jal         func_2C2A98
label_79a9f8:
    if (ctx->pc == 0x79A9F8u) {
        ctx->pc = 0x79A9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9F4u;
        // 0x79a9f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A9FCu;
        goto label_79a9fc;
    }
    ctx->pc = 0x79A9F4u;
    SET_GPR_U32(ctx, 31, 0x79A9FCu);
    ctx->pc = 0x79A9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9F4u;
    // 0x79a9f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x79A9F4u, 0x79A9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9FCu;
label_79a9fc:
    // 0x79a9fc: 0x1051004a  beq         $v0, $s1, . + 4 + (0x4A << 2)
label_79aa00:
    if (ctx->pc == 0x79AA00u) {
        ctx->pc = 0x79AA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9FCu;
        // 0x79aa00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AA04u;
        goto label_79aa04;
    }
    ctx->pc = 0x79A9FCu;
    {
        const bool branch_taken_0x79a9fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x79AA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9FCu;
        // 0x79aa00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a9fc) {
            ctx->pc = 0x79AB28u;
            goto label_79ab28;
        }
    }
    ctx->pc = 0x79AA04u;
label_79aa04:
    // 0x79aa04: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x79aa04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_79aa08:
    // 0x79aa08: 0xc0b0aa6  jal         func_2C2A98
label_79aa0c:
    if (ctx->pc == 0x79AA0Cu) {
        ctx->pc = 0x79AA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA08u;
        // 0x79aa0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AA10u;
        goto label_79aa10;
    }
    ctx->pc = 0x79AA08u;
    SET_GPR_U32(ctx, 31, 0x79AA10u);
    ctx->pc = 0x79AA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA08u;
    // 0x79aa0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x79AA08u, 0x79AA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA10u;
label_79aa10:
    // 0x79aa10: 0x1451fff3  bne         $v0, $s1, . + 4 + (-0xD << 2)
label_79aa14:
    if (ctx->pc == 0x79AA14u) {
        ctx->pc = 0x79AA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA10u;
        // 0x79aa14: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AA18u;
        goto label_79aa18;
    }
    ctx->pc = 0x79AA10u;
    {
        const bool branch_taken_0x79aa10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x79AA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA10u;
        // 0x79aa14: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa10) {
            ctx->pc = 0x79A9E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a9e0;
        }
    }
    ctx->pc = 0x79AA18u;
label_79aa18:
    // 0x79aa18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79aa18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79aa1c:
    // 0x79aa1c: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
label_79aa20:
    if (ctx->pc == 0x79AA20u) {
        ctx->pc = 0x79AA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA1Cu;
        // 0x79aa20: 0x2403001d  addiu       $v1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AA24u;
        goto label_79aa24;
    }
    ctx->pc = 0x79AA1Cu;
    {
        const bool branch_taken_0x79aa1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA1Cu;
        // 0x79aa20: 0x2403001d  addiu       $v1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa1c) {
            ctx->pc = 0x79AB30u;
            goto label_79ab30;
        }
    }
    ctx->pc = 0x79AA24u;
label_79aa24:
    // 0x79aa24: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x79aa24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_79aa28:
    // 0x79aa28: 0x26f06ab0  addiu       $s0, $s7, 0x6AB0
    ctx->pc = 0x79aa28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 27312));
label_79aa2c:
    // 0x79aa2c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x79aa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_79aa30:
    // 0x79aa30: 0xa3a30030  sb          $v1, 0x30($sp)
    ctx->pc = 0x79aa30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 3));
label_79aa34:
    // 0x79aa34: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x79aa34u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
label_79aa38:
    // 0x79aa38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79aa38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79aa3c:
    // 0x79aa3c: 0xc0a54b4  jal         func_2952D0
label_79aa40:
    if (ctx->pc == 0x79AA40u) {
        ctx->pc = 0x79AA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA3Cu;
        // 0x79aa40: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AA44u;
        goto label_79aa44;
    }
    ctx->pc = 0x79AA3Cu;
    SET_GPR_U32(ctx, 31, 0x79AA44u);
    ctx->pc = 0x79AA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA3Cu;
    // 0x79aa40: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79AA3Cu, 0x79AA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA44u;
label_79aa44:
    // 0x79aa44: 0x8ec3c000  lw          $v1, -0x4000($s6)
    ctx->pc = 0x79aa44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294950912)));
label_79aa48:
    // 0x79aa48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79aa48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79aa4c:
    // 0x79aa4c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79aa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79aa50:
    // 0x79aa50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79aa50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_79aa54:
    // 0x79aa54: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x79aa54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_79aa58:
    // 0x79aa58: 0xc0a54b4  jal         func_2952D0
label_79aa5c:
    if (ctx->pc == 0x79AA5Cu) {
        ctx->pc = 0x79AA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA58u;
        // 0x79aa5c: 0x93a50030  lbu         $a1, 0x30($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AA60u;
        goto label_79aa60;
    }
    ctx->pc = 0x79AA58u;
    SET_GPR_U32(ctx, 31, 0x79AA60u);
    ctx->pc = 0x79AA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA58u;
    // 0x79aa5c: 0x93a50030  lbu         $a1, 0x30($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79AA58u, 0x79AA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA60u;
label_79aa60:
    // 0x79aa60: 0x8ec3c000  lw          $v1, -0x4000($s6)
    ctx->pc = 0x79aa60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294950912)));
label_79aa64:
    // 0x79aa64: 0x2684ea60  addiu       $a0, $s4, -0x15A0
    ctx->pc = 0x79aa64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961760));
label_79aa68:
    // 0x79aa68: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x79aa68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_79aa6c:
    // 0x79aa6c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x79aa6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_79aa70:
    // 0x79aa70: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79aa70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79aa74:
    // 0x79aa74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79aa74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_79aa78:
    // 0x79aa78: 0xc0b0a92  jal         func_2C2A48
label_79aa7c:
    if (ctx->pc == 0x79AA7Cu) {
        ctx->pc = 0x79AA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA78u;
        // 0x79aa7c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AA80u;
        goto label_79aa80;
    }
    ctx->pc = 0x79AA78u;
    SET_GPR_U32(ctx, 31, 0x79AA80u);
    ctx->pc = 0x79AA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA78u;
    // 0x79aa7c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x79AA78u, 0x79AA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA80u;
label_79aa80:
    // 0x79aa80: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x79aa80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
label_79aa84:
    // 0x79aa84: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x79aa84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
label_79aa88:
    // 0x79aa88: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79aa88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_79aa8c:
    // 0x79aa8c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79aa8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79aa90:
    // 0x79aa90: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x79aa90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_79aa94:
    // 0x79aa94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79aa94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79aa98:
    // 0x79aa98: 0xc0a57e0  jal         func_295F80
label_79aa9c:
    if (ctx->pc == 0x79AA9Cu) {
        ctx->pc = 0x79AA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA98u;
        // 0x79aa9c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AAA0u;
        goto label_79aaa0;
    }
    ctx->pc = 0x79AA98u;
    SET_GPR_U32(ctx, 31, 0x79AAA0u);
    ctx->pc = 0x79AA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA98u;
    // 0x79aa9c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79AA98u, 0x79AAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AAA0u;
label_79aaa0:
    // 0x79aaa0: 0x10000005  b           . + 4 + (0x5 << 2)
label_79aaa4:
    if (ctx->pc == 0x79AAA4u) {
        ctx->pc = 0x79AAA8u;
        goto label_79aaa8;
    }
    ctx->pc = 0x79AAA0u;
    {
        const bool branch_taken_0x79aaa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79aaa0) {
            ctx->pc = 0x79AAB8u;
            goto label_79aab8;
        }
    }
    ctx->pc = 0x79AAA8u;
label_79aaa8:
    // 0x79aaa8: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x79aaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
label_79aaac:
    // 0x79aaac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79aaacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79aab0:
    // 0x79aab0: 0xc0b56a8  jal         func_2D5AA0
label_79aab4:
    if (ctx->pc == 0x79AAB4u) {
        ctx->pc = 0x79AAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAB0u;
        // 0x79aab4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AAB8u;
        goto label_79aab8;
    }
    ctx->pc = 0x79AAB0u;
    SET_GPR_U32(ctx, 31, 0x79AAB8u);
    ctx->pc = 0x79AAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AAB0u;
    // 0x79aab4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79AAB0u, 0x79AAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AAB8u;
label_79aab8:
    // 0x79aab8: 0xc0a5806  jal         func_296018
label_79aabc:
    if (ctx->pc == 0x79AABCu) {
        ctx->pc = 0x79AABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAB8u;
        // 0x79aabc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AAC0u;
        goto label_79aac0;
    }
    ctx->pc = 0x79AAB8u;
    SET_GPR_U32(ctx, 31, 0x79AAC0u);
    ctx->pc = 0x79AABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AAB8u;
    // 0x79aabc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296018u, 0x79AAB8u, 0x79AAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AAC0u;
label_79aac0:
    // 0x79aac0: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
label_79aac4:
    if (ctx->pc == 0x79AAC4u) {
        ctx->pc = 0x79AAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAC0u;
        // 0x79aac4: 0x2684ea60  addiu       $a0, $s4, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AAC8u;
        goto label_79aac8;
    }
    ctx->pc = 0x79AAC0u;
    {
        const bool branch_taken_0x79aac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAC0u;
        // 0x79aac4: 0x2684ea60  addiu       $a0, $s4, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aac0) {
            ctx->pc = 0x79AAA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79aaa8;
        }
    }
    ctx->pc = 0x79AAC8u;
label_79aac8:
    // 0x79aac8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x79aac8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_79aacc:
    // 0x79aacc: 0xc0b0a92  jal         func_2C2A48
label_79aad0:
    if (ctx->pc == 0x79AAD0u) {
        ctx->pc = 0x79AAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AACCu;
        // 0x79aad0: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AAD4u;
        goto label_79aad4;
    }
    ctx->pc = 0x79AACCu;
    SET_GPR_U32(ctx, 31, 0x79AAD4u);
    ctx->pc = 0x79AAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AACCu;
    // 0x79aad0: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x79AACCu, 0x79AAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AAD4u;
label_79aad4:
    // 0x79aad4: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x79aad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
label_79aad8:
    // 0x79aad8: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x79aad8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
label_79aadc:
    // 0x79aadc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79aadcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_79aae0:
    // 0x79aae0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79aae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79aae4:
    // 0x79aae4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x79aae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_79aae8:
    // 0x79aae8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79aae8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79aaec:
    // 0x79aaec: 0xc0a57e0  jal         func_295F80
label_79aaf0:
    if (ctx->pc == 0x79AAF0u) {
        ctx->pc = 0x79AAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAECu;
        // 0x79aaf0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AAF4u;
        goto label_79aaf4;
    }
    ctx->pc = 0x79AAECu;
    SET_GPR_U32(ctx, 31, 0x79AAF4u);
    ctx->pc = 0x79AAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AAECu;
    // 0x79aaf0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79AAECu, 0x79AAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AAF4u;
label_79aaf4:
    // 0x79aaf4: 0x10000006  b           . + 4 + (0x6 << 2)
label_79aaf8:
    if (ctx->pc == 0x79AAF8u) {
        ctx->pc = 0x79AAFCu;
        goto label_79aafc;
    }
    ctx->pc = 0x79AAF4u;
    {
        const bool branch_taken_0x79aaf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79aaf4) {
            ctx->pc = 0x79AB10u;
            goto label_79ab10;
        }
    }
    ctx->pc = 0x79AAFCu;
label_79aafc:
    // 0x79aafc: 0x0  nop
    ctx->pc = 0x79aafcu;
    // NOP
label_79ab00:
    // 0x79ab00: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x79ab00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
label_79ab04:
    // 0x79ab04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79ab04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79ab08:
    // 0x79ab08: 0xc0b56a8  jal         func_2D5AA0
label_79ab0c:
    if (ctx->pc == 0x79AB0Cu) {
        ctx->pc = 0x79AB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB08u;
        // 0x79ab0c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB10u;
        goto label_79ab10;
    }
    ctx->pc = 0x79AB08u;
    SET_GPR_U32(ctx, 31, 0x79AB10u);
    ctx->pc = 0x79AB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB08u;
    // 0x79ab0c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79AB08u, 0x79AB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB10u;
label_79ab10:
    // 0x79ab10: 0xc0a5806  jal         func_296018
label_79ab14:
    if (ctx->pc == 0x79AB14u) {
        ctx->pc = 0x79AB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB10u;
        // 0x79ab14: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB18u;
        goto label_79ab18;
    }
    ctx->pc = 0x79AB10u;
    SET_GPR_U32(ctx, 31, 0x79AB18u);
    ctx->pc = 0x79AB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB10u;
    // 0x79ab14: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296018u, 0x79AB10u, 0x79AB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB18u;
label_79ab18:
    // 0x79ab18: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
label_79ab1c:
    if (ctx->pc == 0x79AB1Cu) {
        ctx->pc = 0x79AB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB18u;
        // 0x79ab1c: 0x2684ea60  addiu       $a0, $s4, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB20u;
        goto label_79ab20;
    }
    ctx->pc = 0x79AB18u;
    {
        const bool branch_taken_0x79ab18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB18u;
        // 0x79ab1c: 0x2684ea60  addiu       $a0, $s4, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ab18) {
            ctx->pc = 0x79AB00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ab00;
        }
    }
    ctx->pc = 0x79AB20u;
label_79ab20:
    // 0x79ab20: 0x10000017  b           . + 4 + (0x17 << 2)
label_79ab24:
    if (ctx->pc == 0x79AB24u) {
        ctx->pc = 0x79AB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB20u;
        // 0x79ab24: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB28u;
        goto label_79ab28;
    }
    ctx->pc = 0x79AB20u;
    {
        const bool branch_taken_0x79ab20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB20u;
        // 0x79ab24: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ab20) {
            ctx->pc = 0x79AB80u;
            goto label_79ab80;
        }
    }
    ctx->pc = 0x79AB28u;
label_79ab28:
    // 0x79ab28: 0x1000ffbc  b           . + 4 + (-0x44 << 2)
label_79ab2c:
    if (ctx->pc == 0x79AB2Cu) {
        ctx->pc = 0x79AB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB28u;
        // 0x79ab2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB30u;
        goto label_79ab30;
    }
    ctx->pc = 0x79AB28u;
    {
        const bool branch_taken_0x79ab28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB28u;
        // 0x79ab2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ab28) {
            ctx->pc = 0x79AA1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79aa1c;
        }
    }
    ctx->pc = 0x79AB30u;
label_79ab30:
    // 0x79ab30: 0x26f06ab0  addiu       $s0, $s7, 0x6AB0
    ctx->pc = 0x79ab30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 27312));
label_79ab34:
    // 0x79ab34: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x79ab34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_79ab38:
    // 0x79ab38: 0xa3a30040  sb          $v1, 0x40($sp)
    ctx->pc = 0x79ab38u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 3));
label_79ab3c:
    // 0x79ab3c: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x79ab3cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
label_79ab40:
    // 0x79ab40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79ab40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79ab44:
    // 0x79ab44: 0xc0a54b4  jal         func_2952D0
label_79ab48:
    if (ctx->pc == 0x79AB48u) {
        ctx->pc = 0x79AB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB44u;
        // 0x79ab48: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB4Cu;
        goto label_79ab4c;
    }
    ctx->pc = 0x79AB44u;
    SET_GPR_U32(ctx, 31, 0x79AB4Cu);
    ctx->pc = 0x79AB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB44u;
    // 0x79ab48: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79AB44u, 0x79AB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB4Cu;
label_79ab4c:
    // 0x79ab4c: 0x8ec3c000  lw          $v1, -0x4000($s6)
    ctx->pc = 0x79ab4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294950912)));
label_79ab50:
    // 0x79ab50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79ab50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79ab54:
    // 0x79ab54: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79ab54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79ab58:
    // 0x79ab58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79ab58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_79ab5c:
    // 0x79ab5c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x79ab5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_79ab60:
    // 0x79ab60: 0xc0a54b4  jal         func_2952D0
label_79ab64:
    if (ctx->pc == 0x79AB64u) {
        ctx->pc = 0x79AB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB60u;
        // 0x79ab64: 0x93a50040  lbu         $a1, 0x40($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB68u;
        goto label_79ab68;
    }
    ctx->pc = 0x79AB60u;
    SET_GPR_U32(ctx, 31, 0x79AB68u);
    ctx->pc = 0x79AB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB60u;
    // 0x79ab64: 0x93a50040  lbu         $a1, 0x40($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79AB60u, 0x79AB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB68u;
label_79ab68:
    // 0x79ab68: 0x8ec3c000  lw          $v1, -0x4000($s6)
    ctx->pc = 0x79ab68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294950912)));
label_79ab6c:
    // 0x79ab6c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79ab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_79ab70:
    // 0x79ab70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79ab70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_79ab74:
    // 0x79ab74: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x79ab74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_79ab78:
    // 0x79ab78: 0x2684ea60  addiu       $a0, $s4, -0x15A0
    ctx->pc = 0x79ab78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961760));
label_79ab7c:
    // 0x79ab7c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x79ab7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_79ab80:
    // 0x79ab80: 0xc0b0a92  jal         func_2C2A48
label_79ab84:
    if (ctx->pc == 0x79AB84u) {
        ctx->pc = 0x79AB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB80u;
        // 0x79ab84: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB88u;
        goto label_79ab88;
    }
    ctx->pc = 0x79AB80u;
    SET_GPR_U32(ctx, 31, 0x79AB88u);
    ctx->pc = 0x79AB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB80u;
    // 0x79ab84: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x79AB80u, 0x79AB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB88u;
label_79ab88:
    // 0x79ab88: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x79ab88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
label_79ab8c:
    // 0x79ab8c: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x79ab8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
label_79ab90:
    // 0x79ab90: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79ab90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_79ab94:
    // 0x79ab94: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79ab94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79ab98:
    // 0x79ab98: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x79ab98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_79ab9c:
    // 0x79ab9c: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x79ab9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_79aba0:
    // 0x79aba0: 0xc0a57e0  jal         func_295F80
label_79aba4:
    if (ctx->pc == 0x79ABA4u) {
        ctx->pc = 0x79ABA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABA0u;
        // 0x79aba4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ABA8u;
        goto label_79aba8;
    }
    ctx->pc = 0x79ABA0u;
    SET_GPR_U32(ctx, 31, 0x79ABA8u);
    ctx->pc = 0x79ABA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ABA0u;
    // 0x79aba4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79ABA0u, 0x79ABA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ABA8u;
label_79aba8:
    // 0x79aba8: 0x10000005  b           . + 4 + (0x5 << 2)
label_79abac:
    if (ctx->pc == 0x79ABACu) {
        ctx->pc = 0x79ABB0u;
        goto label_79abb0;
    }
    ctx->pc = 0x79ABA8u;
    {
        const bool branch_taken_0x79aba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79aba8) {
            ctx->pc = 0x79ABC0u;
            goto label_79abc0;
        }
    }
    ctx->pc = 0x79ABB0u;
label_79abb0:
    // 0x79abb0: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x79abb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
label_79abb4:
    // 0x79abb4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79abb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79abb8:
    // 0x79abb8: 0xc0b56a8  jal         func_2D5AA0
label_79abbc:
    if (ctx->pc == 0x79ABBCu) {
        ctx->pc = 0x79ABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABB8u;
        // 0x79abbc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ABC0u;
        goto label_79abc0;
    }
    ctx->pc = 0x79ABB8u;
    SET_GPR_U32(ctx, 31, 0x79ABC0u);
    ctx->pc = 0x79ABBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ABB8u;
    // 0x79abbc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79ABB8u, 0x79ABC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ABC0u;
label_79abc0:
    // 0x79abc0: 0xc0a5806  jal         func_296018
label_79abc4:
    if (ctx->pc == 0x79ABC4u) {
        ctx->pc = 0x79ABC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABC0u;
        // 0x79abc4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ABC8u;
        goto label_79abc8;
    }
    ctx->pc = 0x79ABC0u;
    SET_GPR_U32(ctx, 31, 0x79ABC8u);
    ctx->pc = 0x79ABC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ABC0u;
    // 0x79abc4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296018u, 0x79ABC0u, 0x79ABC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ABC8u;
label_79abc8:
    // 0x79abc8: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
label_79abcc:
    if (ctx->pc == 0x79ABCCu) {
        ctx->pc = 0x79ABCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABC8u;
        // 0x79abcc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ABD0u;
        goto label_79abd0;
    }
    ctx->pc = 0x79ABC8u;
    {
        const bool branch_taken_0x79abc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ABCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABC8u;
        // 0x79abcc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79abc8) {
            ctx->pc = 0x79ABB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79abb0;
        }
    }
    ctx->pc = 0x79ABD0u;
label_79abd0:
    // 0x79abd0: 0x10000005  b           . + 4 + (0x5 << 2)
label_79abd4:
    if (ctx->pc == 0x79ABD4u) {
        ctx->pc = 0x79ABD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABD0u;
        // 0x79abd4: 0x2684ea60  addiu       $a0, $s4, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ABD8u;
        goto label_79abd8;
    }
    ctx->pc = 0x79ABD0u;
    {
        const bool branch_taken_0x79abd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ABD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABD0u;
        // 0x79abd4: 0x2684ea60  addiu       $a0, $s4, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79abd0) {
            ctx->pc = 0x79ABE8u;
            goto label_79abe8;
        }
    }
    ctx->pc = 0x79ABD8u;
label_79abd8:
    // 0x79abd8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79abd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79abdc:
    // 0x79abdc: 0xc0b56a8  jal         func_2D5AA0
label_79abe0:
    if (ctx->pc == 0x79ABE0u) {
        ctx->pc = 0x79ABE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABDCu;
        // 0x79abe0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ABE4u;
        goto label_79abe4;
    }
    ctx->pc = 0x79ABDCu;
    SET_GPR_U32(ctx, 31, 0x79ABE4u);
    ctx->pc = 0x79ABE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ABDCu;
    // 0x79abe0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79ABDCu, 0x79ABE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ABE4u;
label_79abe4:
    // 0x79abe4: 0x2684ea60  addiu       $a0, $s4, -0x15A0
    ctx->pc = 0x79abe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961760));
label_79abe8:
    // 0x79abe8: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x79abe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_79abec:
    // 0x79abec: 0xc0b0aa6  jal         func_2C2A98
label_79abf0:
    if (ctx->pc == 0x79ABF0u) {
        ctx->pc = 0x79ABF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABECu;
        // 0x79abf0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ABF4u;
        goto label_79abf4;
    }
    ctx->pc = 0x79ABECu;
    SET_GPR_U32(ctx, 31, 0x79ABF4u);
    ctx->pc = 0x79ABF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ABECu;
    // 0x79abf0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x79ABECu, 0x79ABF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ABF4u;
label_79abf4:
    // 0x79abf4: 0x1450fff8  bne         $v0, $s0, . + 4 + (-0x8 << 2)
label_79abf8:
    if (ctx->pc == 0x79ABF8u) {
        ctx->pc = 0x79ABF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABF4u;
        // 0x79abf8: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ABFCu;
        goto label_79abfc;
    }
    ctx->pc = 0x79ABF4u;
    {
        const bool branch_taken_0x79abf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x79ABF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABF4u;
        // 0x79abf8: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79abf4) {
            ctx->pc = 0x79ABD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79abd8;
        }
    }
    ctx->pc = 0x79ABFCu;
label_79abfc:
    // 0x79abfc: 0x2684ea60  addiu       $a0, $s4, -0x15A0
    ctx->pc = 0x79abfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961760));
label_79ac00:
    // 0x79ac00: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x79ac00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_79ac04:
    // 0x79ac04: 0xc0b0a92  jal         func_2C2A48
label_79ac08:
    if (ctx->pc == 0x79AC08u) {
        ctx->pc = 0x79AC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC04u;
        // 0x79ac08: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AC0Cu;
        goto label_79ac0c;
    }
    ctx->pc = 0x79AC04u;
    SET_GPR_U32(ctx, 31, 0x79AC0Cu);
    ctx->pc = 0x79AC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AC04u;
    // 0x79ac08: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x79AC04u, 0x79AC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC0Cu;
label_79ac0c:
    // 0x79ac0c: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x79ac0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
label_79ac10:
    // 0x79ac10: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x79ac10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
label_79ac14:
    // 0x79ac14: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79ac14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_79ac18:
    // 0x79ac18: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x79ac18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_79ac1c:
    // 0x79ac1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79ac1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79ac20:
    // 0x79ac20: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x79ac20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_79ac24:
    // 0x79ac24: 0xc0a57e0  jal         func_295F80
label_79ac28:
    if (ctx->pc == 0x79AC28u) {
        ctx->pc = 0x79AC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC24u;
        // 0x79ac28: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AC2Cu;
        goto label_79ac2c;
    }
    ctx->pc = 0x79AC24u;
    SET_GPR_U32(ctx, 31, 0x79AC2Cu);
    ctx->pc = 0x79AC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AC24u;
    // 0x79ac28: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79AC24u, 0x79AC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC2Cu;
label_79ac2c:
    // 0x79ac2c: 0x10000006  b           . + 4 + (0x6 << 2)
label_79ac30:
    if (ctx->pc == 0x79AC30u) {
        ctx->pc = 0x79AC34u;
        goto label_79ac34;
    }
    ctx->pc = 0x79AC2Cu;
    {
        const bool branch_taken_0x79ac2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79ac2c) {
            ctx->pc = 0x79AC48u;
            goto label_79ac48;
        }
    }
    ctx->pc = 0x79AC34u;
label_79ac34:
    // 0x79ac34: 0x0  nop
    ctx->pc = 0x79ac34u;
    // NOP
label_79ac38:
    // 0x79ac38: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x79ac38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
label_79ac3c:
    // 0x79ac3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79ac3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79ac40:
    // 0x79ac40: 0xc0b56a8  jal         func_2D5AA0
label_79ac44:
    if (ctx->pc == 0x79AC44u) {
        ctx->pc = 0x79AC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC40u;
        // 0x79ac44: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AC48u;
        goto label_79ac48;
    }
    ctx->pc = 0x79AC40u;
    SET_GPR_U32(ctx, 31, 0x79AC48u);
    ctx->pc = 0x79AC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AC40u;
    // 0x79ac44: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79AC40u, 0x79AC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC48u;
label_79ac48:
    // 0x79ac48: 0xc0a5806  jal         func_296018
label_79ac4c:
    if (ctx->pc == 0x79AC4Cu) {
        ctx->pc = 0x79AC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC48u;
        // 0x79ac4c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AC50u;
        goto label_79ac50;
    }
    ctx->pc = 0x79AC48u;
    SET_GPR_U32(ctx, 31, 0x79AC50u);
    ctx->pc = 0x79AC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AC48u;
    // 0x79ac4c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296018u, 0x79AC48u, 0x79AC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC50u;
label_79ac50:
    // 0x79ac50: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
label_79ac54:
    if (ctx->pc == 0x79AC54u) {
        ctx->pc = 0x79AC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC50u;
        // 0x79ac54: 0x27d0bf50  addiu       $s0, $fp, -0x40B0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294950736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AC58u;
        goto label_79ac58;
    }
    ctx->pc = 0x79AC50u;
    {
        const bool branch_taken_0x79ac50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC50u;
        // 0x79ac54: 0x27d0bf50  addiu       $s0, $fp, -0x40B0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294950736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac50) {
            ctx->pc = 0x79AC38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ac38;
        }
    }
    ctx->pc = 0x79AC58u;
label_79ac58:
    // 0x79ac58: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x79ac58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
label_79ac5c:
    // 0x79ac5c: 0xc0b145a  jal         func_2C5168
label_79ac60:
    if (ctx->pc == 0x79AC60u) {
        ctx->pc = 0x79AC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC5Cu;
        // 0x79ac60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AC64u;
        goto label_79ac64;
    }
    ctx->pc = 0x79AC5Cu;
    SET_GPR_U32(ctx, 31, 0x79AC64u);
    ctx->pc = 0x79AC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AC5Cu;
    // 0x79ac60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5168u, 0x79AC5Cu, 0x79AC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC64u;
label_79ac64:
    // 0x79ac64: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
label_79ac68:
    if (ctx->pc == 0x79AC68u) {
        ctx->pc = 0x79AC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC64u;
        // 0x79ac68: 0x3c02005f  lui         $v0, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AC6Cu;
        goto label_79ac6c;
    }
    ctx->pc = 0x79AC64u;
    {
        const bool branch_taken_0x79ac64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC64u;
        // 0x79ac68: 0x3c02005f  lui         $v0, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac64) {
            ctx->pc = 0x79AD54u;
            goto label_79ad54;
        }
    }
    ctx->pc = 0x79AC6Cu;
label_79ac6c:
    // 0x79ac6c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x79ac6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_79ac70:
    // 0x79ac70: 0x93a50000  lbu         $a1, 0x0($sp)
    ctx->pc = 0x79ac70u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_79ac74:
    // 0x79ac74: 0xc0a421a  jal         func_290868
label_79ac78:
    if (ctx->pc == 0x79AC78u) {
        ctx->pc = 0x79AC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC74u;
        // 0x79ac78: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AC7Cu;
        goto label_79ac7c;
    }
    ctx->pc = 0x79AC74u;
    SET_GPR_U32(ctx, 31, 0x79AC7Cu);
    ctx->pc = 0x79AC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AC74u;
    // 0x79ac78: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x79AC74u, 0x79AC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC7Cu;
label_79ac7c:
    // 0x79ac7c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x79ac7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79ac80:
    // 0x79ac80: 0x12400033  beqz        $s2, . + 4 + (0x33 << 2)
label_79ac84:
    if (ctx->pc == 0x79AC84u) {
        ctx->pc = 0x79AC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC80u;
        // 0x79ac84: 0x3c020075  lui         $v0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AC88u;
        goto label_79ac88;
    }
    ctx->pc = 0x79AC80u;
    {
        const bool branch_taken_0x79ac80 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC80u;
        // 0x79ac84: 0x3c020075  lui         $v0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac80) {
            ctx->pc = 0x79AD50u;
            goto label_79ad50;
        }
    }
    ctx->pc = 0x79AC88u;
label_79ac88:
    // 0x79ac88: 0x83c3bf50  lb          $v1, -0x40B0($fp)
    ctx->pc = 0x79ac88u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 4294950736)));
label_79ac8c:
    // 0x79ac8c: 0x24484c58  addiu       $t0, $v0, 0x4C58
    ctx->pc = 0x79ac8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
label_79ac90:
    // 0x79ac90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79ac90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79ac94:
    // 0x79ac94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79ac94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79ac98:
    // 0x79ac98: 0x27b50020  addiu       $s5, $sp, 0x20
    ctx->pc = 0x79ac98u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_79ac9c:
    // 0x79ac9c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_79aca0:
    if (ctx->pc == 0x79ACA0u) {
        ctx->pc = 0x79ACA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC9Cu;
        // 0x79aca0: 0x27b40050  addiu       $s4, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ACA4u;
        goto label_79aca4;
    }
    ctx->pc = 0x79AC9Cu;
    {
        const bool branch_taken_0x79ac9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ACA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC9Cu;
        // 0x79aca0: 0x27b40050  addiu       $s4, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac9c) {
            ctx->pc = 0x79ACD8u;
            goto label_79acd8;
        }
    }
    ctx->pc = 0x79ACA4u;
label_79aca4:
    // 0x79aca4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79aca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79aca8:
    // 0x79aca8: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x79aca8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_79acac:
    // 0x79acac: 0x0  nop
    ctx->pc = 0x79acacu;
    // NOP
label_79acb0:
    // 0x79acb0: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x79acb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_79acb4:
    // 0x79acb4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79acb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_79acb8:
    // 0x79acb8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x79acb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_79acbc:
    // 0x79acbc: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79acbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_79acc0:
    // 0x79acc0: 0x28c30008  slti        $v1, $a2, 0x8
    ctx->pc = 0x79acc0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
label_79acc4:
    // 0x79acc4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_79acc8:
    if (ctx->pc == 0x79ACC8u) {
        ctx->pc = 0x79ACC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACC4u;
        // 0x79acc8: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ACCCu;
        goto label_79accc;
    }
    ctx->pc = 0x79ACC4u;
    {
        const bool branch_taken_0x79acc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ACC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACC4u;
        // 0x79acc8: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79acc4) {
            ctx->pc = 0x79ACD8u;
            goto label_79acd8;
        }
    }
    ctx->pc = 0x79ACCCu;
label_79accc:
    // 0x79accc: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x79acccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_79acd0:
    // 0x79acd0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_79acd4:
    if (ctx->pc == 0x79ACD4u) {
        ctx->pc = 0x79ACD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACD0u;
        // 0x79acd4: 0x80a20000  lb          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ACD8u;
        goto label_79acd8;
    }
    ctx->pc = 0x79ACD0u;
    {
        const bool branch_taken_0x79acd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79acd0) {
            ctx->pc = 0x79ACD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79ACD0u;
            // 0x79acd4: 0x80a20000  lb          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79ACB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79acb0;
        }
    }
    ctx->pc = 0x79ACD8u;
label_79acd8:
    // 0x79acd8: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x79acd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_79acdc:
    // 0x79acdc: 0xc053f66  jal         func_14FD98
label_79ace0:
    if (ctx->pc == 0x79ACE0u) {
        ctx->pc = 0x79ACE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACDCu;
        // 0x79ace0: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ACE4u;
        goto label_79ace4;
    }
    ctx->pc = 0x79ACDCu;
    SET_GPR_U32(ctx, 31, 0x79ACE4u);
    ctx->pc = 0x79ACE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ACDCu;
    // 0x79ace0: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79ACDCu, 0x79ACE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ACE4u;
label_79ace4:
    // 0x79ace4: 0x8e430214  lw          $v1, 0x214($s2)
    ctx->pc = 0x79ace4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
label_79ace8:
    // 0x79ace8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x79ace8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79acec:
    // 0x79acec: 0x8e3000f0  lw          $s0, 0xF0($s1)
    ctx->pc = 0x79acecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_79acf0:
    // 0x79acf0: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x79acf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_79acf4:
    // 0x79acf4: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x79acf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_79acf8:
    // 0x79acf8: 0x40f809  jalr        $v0
label_79acfc:
    if (ctx->pc == 0x79ACFCu) {
        ctx->pc = 0x79ACFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACF8u;
        // 0x79acfc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AD00u;
        goto label_79ad00;
    }
    ctx->pc = 0x79ACF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79AD00u);
        ctx->pc = 0x79ACFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACF8u;
        // 0x79acfc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79ACF8u, 0x79AD00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79AD00u;
label_79ad00:
    // 0x79ad00: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x79ad00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
label_79ad04:
    // 0x79ad04: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x79ad04u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_79ad08:
    // 0x79ad08: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x79ad08u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_79ad0c:
    // 0x79ad0c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x79ad0cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_79ad10:
    // 0x79ad10: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x79ad10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_79ad14:
    // 0x79ad14: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x79ad14u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_79ad18:
    // 0x79ad18: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x79ad18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_79ad1c:
    // 0x79ad1c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x79ad1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_79ad20:
    // 0x79ad20: 0xc07df8a  jal         func_1F7E28
label_79ad24:
    if (ctx->pc == 0x79AD24u) {
        ctx->pc = 0x79AD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD20u;
        // 0x79ad24: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AD28u;
        goto label_79ad28;
    }
    ctx->pc = 0x79AD20u;
    SET_GPR_U32(ctx, 31, 0x79AD28u);
    ctx->pc = 0x79AD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AD20u;
    // 0x79ad24: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x79AD20u, 0x79AD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AD28u;
label_79ad28:
    // 0x79ad28: 0x3c014010  lui         $at, 0x4010
    ctx->pc = 0x79ad28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16400 << 16));
label_79ad2c:
    // 0x79ad2c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79ad2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_79ad30:
    // 0x79ad30: 0x0  nop
    ctx->pc = 0x79ad30u;
    // NOP
label_79ad34:
    // 0x79ad34: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x79ad34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_79ad38:
    // 0x79ad38: 0x0  nop
    ctx->pc = 0x79ad38u;
    // NOP
label_79ad3c:
    // 0x79ad3c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_79ad40:
    if (ctx->pc == 0x79AD40u) {
        ctx->pc = 0x79AD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD3Cu;
        // 0x79ad40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AD44u;
        goto label_79ad44;
    }
    ctx->pc = 0x79AD3Cu;
    {
        const bool branch_taken_0x79ad3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79AD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD3Cu;
        // 0x79ad40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad3c) {
            ctx->pc = 0x79AD50u;
            goto label_79ad50;
        }
    }
    ctx->pc = 0x79AD44u;
label_79ad44:
    // 0x79ad44: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x79ad44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_79ad48:
    // 0x79ad48: 0xc09cd9e  jal         func_273678
label_79ad4c:
    if (ctx->pc == 0x79AD4Cu) {
        ctx->pc = 0x79AD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD48u;
        // 0x79ad4c: 0x8e2500f0  lw          $a1, 0xF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AD50u;
        goto label_79ad50;
    }
    ctx->pc = 0x79AD48u;
    SET_GPR_U32(ctx, 31, 0x79AD50u);
    ctx->pc = 0x79AD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AD48u;
    // 0x79ad4c: 0x8e2500f0  lw          $a1, 0xF0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273678u, 0x79AD48u, 0x79AD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AD50u;
label_79ad50:
    // 0x79ad50: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x79ad50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_79ad54:
    // 0x79ad54: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x79ad54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_79ad58:
    // 0x79ad58: 0x8c448658  lw          $a0, -0x79A8($v0)
    ctx->pc = 0x79ad58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936152)));
label_79ad5c:
    // 0x79ad5c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x79ad5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79ad60:
    // 0x79ad60: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x79ad60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_79ad64:
    // 0x79ad64: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x79ad64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_79ad68:
    // 0x79ad68: 0x10000004  b           . + 4 + (0x4 << 2)
label_79ad6c:
    if (ctx->pc == 0x79AD6Cu) {
        ctx->pc = 0x79AD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD68u;
        // 0x79ad6c: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AD70u;
        goto label_79ad70;
    }
    ctx->pc = 0x79AD68u;
    {
        const bool branch_taken_0x79ad68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD68u;
        // 0x79ad6c: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad68) {
            ctx->pc = 0x79AD7Cu;
            goto label_79ad7c;
        }
    }
    ctx->pc = 0x79AD70u;
label_79ad70:
    // 0x79ad70: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79ad70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79ad74:
    // 0x79ad74: 0xc0b56a8  jal         func_2D5AA0
label_79ad78:
    if (ctx->pc == 0x79AD78u) {
        ctx->pc = 0x79AD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD74u;
        // 0x79ad78: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AD7Cu;
        goto label_79ad7c;
    }
    ctx->pc = 0x79AD74u;
    SET_GPR_U32(ctx, 31, 0x79AD7Cu);
    ctx->pc = 0x79AD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AD74u;
    // 0x79ad78: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79AD74u, 0x79AD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AD7Cu;
label_79ad7c:
    // 0x79ad7c: 0xc0a572a  jal         func_295CA8
label_79ad80:
    if (ctx->pc == 0x79AD80u) {
        ctx->pc = 0x79AD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD7Cu;
        // 0x79ad80: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AD84u;
        goto label_79ad84;
    }
    ctx->pc = 0x79AD7Cu;
    SET_GPR_U32(ctx, 31, 0x79AD84u);
    ctx->pc = 0x79AD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AD7Cu;
    // 0x79ad80: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79AD7Cu, 0x79AD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AD84u;
label_79ad84:
    // 0x79ad84: 0x1450fffa  bne         $v0, $s0, . + 4 + (-0x6 << 2)
label_79ad88:
    if (ctx->pc == 0x79AD88u) {
        ctx->pc = 0x79AD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD84u;
        // 0x79ad88: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AD8Cu;
        goto label_79ad8c;
    }
    ctx->pc = 0x79AD84u;
    {
        const bool branch_taken_0x79ad84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x79AD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD84u;
        // 0x79ad88: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad84) {
            ctx->pc = 0x79AD70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ad70;
        }
    }
    ctx->pc = 0x79AD8Cu;
label_79ad8c:
    // 0x79ad8c: 0xc0b5692  jal         func_2D5A48
label_79ad90:
    if (ctx->pc == 0x79AD90u) {
        ctx->pc = 0x79AD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD8Cu;
        // 0x79ad90: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AD94u;
        goto label_79ad94;
    }
    ctx->pc = 0x79AD8Cu;
    SET_GPR_U32(ctx, 31, 0x79AD94u);
    ctx->pc = 0x79AD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AD8Cu;
    // 0x79ad90: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79AD8Cu, 0x79AD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AD94u;
label_79ad94:
    // 0x79ad94: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x79ad94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_79ad98:
    // 0x79ad98: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x79ad98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_79ad9c:
    // 0x79ad9c: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x79ad9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_79ada0:
    // 0x79ada0: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x79ada0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_79ada4:
    // 0x79ada4: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x79ada4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_79ada8:
    // 0x79ada8: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x79ada8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_79adac:
    // 0x79adac: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x79adacu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_79adb0:
    // 0x79adb0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x79adb0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_79adb4:
    // 0x79adb4: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x79adb4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_79adb8:
    // 0x79adb8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x79adb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_79adbc:
    // 0x79adbc: 0x3e00008  jr          $ra
label_79adc0:
    if (ctx->pc == 0x79ADC0u) {
        ctx->pc = 0x79ADC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADBCu;
        // 0x79adc0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ADC4u;
        goto label_79adc4;
    }
    ctx->pc = 0x79ADBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79ADC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADBCu;
        // 0x79adc0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79ADBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79ADC4u;
label_79adc4:
    // 0x79adc4: 0x0  nop
    ctx->pc = 0x79adc4u;
    // NOP
    ctx->pc = 0x79adc8u;
}
} // namespace gh_r102
