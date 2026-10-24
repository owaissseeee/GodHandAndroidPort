#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r000_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r000
{
// Function: R000Init__Fv
// Address: 0x79aa90 - 0x79b258
void R000Init__Fv_0x79aa90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R000Init__Fv_0x79aa90");
#endif

    switch (ctx->pc) {
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
        case 0x79adc8u: goto label_79adc8;
        case 0x79adccu: goto label_79adcc;
        case 0x79add0u: goto label_79add0;
        case 0x79add4u: goto label_79add4;
        case 0x79add8u: goto label_79add8;
        case 0x79addcu: goto label_79addc;
        case 0x79ade0u: goto label_79ade0;
        case 0x79ade4u: goto label_79ade4;
        case 0x79ade8u: goto label_79ade8;
        case 0x79adecu: goto label_79adec;
        case 0x79adf0u: goto label_79adf0;
        case 0x79adf4u: goto label_79adf4;
        case 0x79adf8u: goto label_79adf8;
        case 0x79adfcu: goto label_79adfc;
        case 0x79ae00u: goto label_79ae00;
        case 0x79ae04u: goto label_79ae04;
        case 0x79ae08u: goto label_79ae08;
        case 0x79ae0cu: goto label_79ae0c;
        case 0x79ae10u: goto label_79ae10;
        case 0x79ae14u: goto label_79ae14;
        case 0x79ae18u: goto label_79ae18;
        case 0x79ae1cu: goto label_79ae1c;
        case 0x79ae20u: goto label_79ae20;
        case 0x79ae24u: goto label_79ae24;
        case 0x79ae28u: goto label_79ae28;
        case 0x79ae2cu: goto label_79ae2c;
        case 0x79ae30u: goto label_79ae30;
        case 0x79ae34u: goto label_79ae34;
        case 0x79ae38u: goto label_79ae38;
        case 0x79ae3cu: goto label_79ae3c;
        case 0x79ae40u: goto label_79ae40;
        case 0x79ae44u: goto label_79ae44;
        case 0x79ae48u: goto label_79ae48;
        case 0x79ae4cu: goto label_79ae4c;
        case 0x79ae50u: goto label_79ae50;
        case 0x79ae54u: goto label_79ae54;
        case 0x79ae58u: goto label_79ae58;
        case 0x79ae5cu: goto label_79ae5c;
        case 0x79ae60u: goto label_79ae60;
        case 0x79ae64u: goto label_79ae64;
        case 0x79ae68u: goto label_79ae68;
        case 0x79ae6cu: goto label_79ae6c;
        case 0x79ae70u: goto label_79ae70;
        case 0x79ae74u: goto label_79ae74;
        case 0x79ae78u: goto label_79ae78;
        case 0x79ae7cu: goto label_79ae7c;
        case 0x79ae80u: goto label_79ae80;
        case 0x79ae84u: goto label_79ae84;
        case 0x79ae88u: goto label_79ae88;
        case 0x79ae8cu: goto label_79ae8c;
        case 0x79ae90u: goto label_79ae90;
        case 0x79ae94u: goto label_79ae94;
        case 0x79ae98u: goto label_79ae98;
        case 0x79ae9cu: goto label_79ae9c;
        case 0x79aea0u: goto label_79aea0;
        case 0x79aea4u: goto label_79aea4;
        case 0x79aea8u: goto label_79aea8;
        case 0x79aeacu: goto label_79aeac;
        case 0x79aeb0u: goto label_79aeb0;
        case 0x79aeb4u: goto label_79aeb4;
        case 0x79aeb8u: goto label_79aeb8;
        case 0x79aebcu: goto label_79aebc;
        case 0x79aec0u: goto label_79aec0;
        case 0x79aec4u: goto label_79aec4;
        case 0x79aec8u: goto label_79aec8;
        case 0x79aeccu: goto label_79aecc;
        case 0x79aed0u: goto label_79aed0;
        case 0x79aed4u: goto label_79aed4;
        case 0x79aed8u: goto label_79aed8;
        case 0x79aedcu: goto label_79aedc;
        case 0x79aee0u: goto label_79aee0;
        case 0x79aee4u: goto label_79aee4;
        case 0x79aee8u: goto label_79aee8;
        case 0x79aeecu: goto label_79aeec;
        case 0x79aef0u: goto label_79aef0;
        case 0x79aef4u: goto label_79aef4;
        case 0x79aef8u: goto label_79aef8;
        case 0x79aefcu: goto label_79aefc;
        case 0x79af00u: goto label_79af00;
        case 0x79af04u: goto label_79af04;
        case 0x79af08u: goto label_79af08;
        case 0x79af0cu: goto label_79af0c;
        case 0x79af10u: goto label_79af10;
        case 0x79af14u: goto label_79af14;
        case 0x79af18u: goto label_79af18;
        case 0x79af1cu: goto label_79af1c;
        case 0x79af20u: goto label_79af20;
        case 0x79af24u: goto label_79af24;
        case 0x79af28u: goto label_79af28;
        case 0x79af2cu: goto label_79af2c;
        case 0x79af30u: goto label_79af30;
        case 0x79af34u: goto label_79af34;
        case 0x79af38u: goto label_79af38;
        case 0x79af3cu: goto label_79af3c;
        case 0x79af40u: goto label_79af40;
        case 0x79af44u: goto label_79af44;
        case 0x79af48u: goto label_79af48;
        case 0x79af4cu: goto label_79af4c;
        case 0x79af50u: goto label_79af50;
        case 0x79af54u: goto label_79af54;
        case 0x79af58u: goto label_79af58;
        case 0x79af5cu: goto label_79af5c;
        case 0x79af60u: goto label_79af60;
        case 0x79af64u: goto label_79af64;
        case 0x79af68u: goto label_79af68;
        case 0x79af6cu: goto label_79af6c;
        case 0x79af70u: goto label_79af70;
        case 0x79af74u: goto label_79af74;
        case 0x79af78u: goto label_79af78;
        case 0x79af7cu: goto label_79af7c;
        case 0x79af80u: goto label_79af80;
        case 0x79af84u: goto label_79af84;
        case 0x79af88u: goto label_79af88;
        case 0x79af8cu: goto label_79af8c;
        case 0x79af90u: goto label_79af90;
        case 0x79af94u: goto label_79af94;
        case 0x79af98u: goto label_79af98;
        case 0x79af9cu: goto label_79af9c;
        case 0x79afa0u: goto label_79afa0;
        case 0x79afa4u: goto label_79afa4;
        case 0x79afa8u: goto label_79afa8;
        case 0x79afacu: goto label_79afac;
        case 0x79afb0u: goto label_79afb0;
        case 0x79afb4u: goto label_79afb4;
        case 0x79afb8u: goto label_79afb8;
        case 0x79afbcu: goto label_79afbc;
        case 0x79afc0u: goto label_79afc0;
        case 0x79afc4u: goto label_79afc4;
        case 0x79afc8u: goto label_79afc8;
        case 0x79afccu: goto label_79afcc;
        case 0x79afd0u: goto label_79afd0;
        case 0x79afd4u: goto label_79afd4;
        case 0x79afd8u: goto label_79afd8;
        case 0x79afdcu: goto label_79afdc;
        case 0x79afe0u: goto label_79afe0;
        case 0x79afe4u: goto label_79afe4;
        case 0x79afe8u: goto label_79afe8;
        case 0x79afecu: goto label_79afec;
        case 0x79aff0u: goto label_79aff0;
        case 0x79aff4u: goto label_79aff4;
        case 0x79aff8u: goto label_79aff8;
        case 0x79affcu: goto label_79affc;
        case 0x79b000u: goto label_79b000;
        case 0x79b004u: goto label_79b004;
        case 0x79b008u: goto label_79b008;
        case 0x79b00cu: goto label_79b00c;
        case 0x79b010u: goto label_79b010;
        case 0x79b014u: goto label_79b014;
        case 0x79b018u: goto label_79b018;
        case 0x79b01cu: goto label_79b01c;
        case 0x79b020u: goto label_79b020;
        case 0x79b024u: goto label_79b024;
        case 0x79b028u: goto label_79b028;
        case 0x79b02cu: goto label_79b02c;
        case 0x79b030u: goto label_79b030;
        case 0x79b034u: goto label_79b034;
        case 0x79b038u: goto label_79b038;
        case 0x79b03cu: goto label_79b03c;
        case 0x79b040u: goto label_79b040;
        case 0x79b044u: goto label_79b044;
        case 0x79b048u: goto label_79b048;
        case 0x79b04cu: goto label_79b04c;
        case 0x79b050u: goto label_79b050;
        case 0x79b054u: goto label_79b054;
        case 0x79b058u: goto label_79b058;
        case 0x79b05cu: goto label_79b05c;
        case 0x79b060u: goto label_79b060;
        case 0x79b064u: goto label_79b064;
        case 0x79b068u: goto label_79b068;
        case 0x79b06cu: goto label_79b06c;
        case 0x79b070u: goto label_79b070;
        case 0x79b074u: goto label_79b074;
        case 0x79b078u: goto label_79b078;
        case 0x79b07cu: goto label_79b07c;
        case 0x79b080u: goto label_79b080;
        case 0x79b084u: goto label_79b084;
        case 0x79b088u: goto label_79b088;
        case 0x79b08cu: goto label_79b08c;
        case 0x79b090u: goto label_79b090;
        case 0x79b094u: goto label_79b094;
        case 0x79b098u: goto label_79b098;
        case 0x79b09cu: goto label_79b09c;
        case 0x79b0a0u: goto label_79b0a0;
        case 0x79b0a4u: goto label_79b0a4;
        case 0x79b0a8u: goto label_79b0a8;
        case 0x79b0acu: goto label_79b0ac;
        case 0x79b0b0u: goto label_79b0b0;
        case 0x79b0b4u: goto label_79b0b4;
        case 0x79b0b8u: goto label_79b0b8;
        case 0x79b0bcu: goto label_79b0bc;
        case 0x79b0c0u: goto label_79b0c0;
        case 0x79b0c4u: goto label_79b0c4;
        case 0x79b0c8u: goto label_79b0c8;
        case 0x79b0ccu: goto label_79b0cc;
        case 0x79b0d0u: goto label_79b0d0;
        case 0x79b0d4u: goto label_79b0d4;
        case 0x79b0d8u: goto label_79b0d8;
        case 0x79b0dcu: goto label_79b0dc;
        case 0x79b0e0u: goto label_79b0e0;
        case 0x79b0e4u: goto label_79b0e4;
        case 0x79b0e8u: goto label_79b0e8;
        case 0x79b0ecu: goto label_79b0ec;
        case 0x79b0f0u: goto label_79b0f0;
        case 0x79b0f4u: goto label_79b0f4;
        case 0x79b0f8u: goto label_79b0f8;
        case 0x79b0fcu: goto label_79b0fc;
        case 0x79b100u: goto label_79b100;
        case 0x79b104u: goto label_79b104;
        case 0x79b108u: goto label_79b108;
        case 0x79b10cu: goto label_79b10c;
        case 0x79b110u: goto label_79b110;
        case 0x79b114u: goto label_79b114;
        case 0x79b118u: goto label_79b118;
        case 0x79b11cu: goto label_79b11c;
        case 0x79b120u: goto label_79b120;
        case 0x79b124u: goto label_79b124;
        case 0x79b128u: goto label_79b128;
        case 0x79b12cu: goto label_79b12c;
        case 0x79b130u: goto label_79b130;
        case 0x79b134u: goto label_79b134;
        case 0x79b138u: goto label_79b138;
        case 0x79b13cu: goto label_79b13c;
        case 0x79b140u: goto label_79b140;
        case 0x79b144u: goto label_79b144;
        case 0x79b148u: goto label_79b148;
        case 0x79b14cu: goto label_79b14c;
        case 0x79b150u: goto label_79b150;
        case 0x79b154u: goto label_79b154;
        case 0x79b158u: goto label_79b158;
        case 0x79b15cu: goto label_79b15c;
        case 0x79b160u: goto label_79b160;
        case 0x79b164u: goto label_79b164;
        case 0x79b168u: goto label_79b168;
        case 0x79b16cu: goto label_79b16c;
        case 0x79b170u: goto label_79b170;
        case 0x79b174u: goto label_79b174;
        case 0x79b178u: goto label_79b178;
        case 0x79b17cu: goto label_79b17c;
        case 0x79b180u: goto label_79b180;
        case 0x79b184u: goto label_79b184;
        case 0x79b188u: goto label_79b188;
        case 0x79b18cu: goto label_79b18c;
        case 0x79b190u: goto label_79b190;
        case 0x79b194u: goto label_79b194;
        case 0x79b198u: goto label_79b198;
        case 0x79b19cu: goto label_79b19c;
        case 0x79b1a0u: goto label_79b1a0;
        case 0x79b1a4u: goto label_79b1a4;
        case 0x79b1a8u: goto label_79b1a8;
        case 0x79b1acu: goto label_79b1ac;
        case 0x79b1b0u: goto label_79b1b0;
        case 0x79b1b4u: goto label_79b1b4;
        case 0x79b1b8u: goto label_79b1b8;
        case 0x79b1bcu: goto label_79b1bc;
        case 0x79b1c0u: goto label_79b1c0;
        case 0x79b1c4u: goto label_79b1c4;
        case 0x79b1c8u: goto label_79b1c8;
        case 0x79b1ccu: goto label_79b1cc;
        case 0x79b1d0u: goto label_79b1d0;
        case 0x79b1d4u: goto label_79b1d4;
        case 0x79b1d8u: goto label_79b1d8;
        case 0x79b1dcu: goto label_79b1dc;
        case 0x79b1e0u: goto label_79b1e0;
        case 0x79b1e4u: goto label_79b1e4;
        case 0x79b1e8u: goto label_79b1e8;
        case 0x79b1ecu: goto label_79b1ec;
        case 0x79b1f0u: goto label_79b1f0;
        case 0x79b1f4u: goto label_79b1f4;
        case 0x79b1f8u: goto label_79b1f8;
        case 0x79b1fcu: goto label_79b1fc;
        case 0x79b200u: goto label_79b200;
        case 0x79b204u: goto label_79b204;
        case 0x79b208u: goto label_79b208;
        case 0x79b20cu: goto label_79b20c;
        case 0x79b210u: goto label_79b210;
        case 0x79b214u: goto label_79b214;
        case 0x79b218u: goto label_79b218;
        case 0x79b21cu: goto label_79b21c;
        case 0x79b220u: goto label_79b220;
        case 0x79b224u: goto label_79b224;
        case 0x79b228u: goto label_79b228;
        case 0x79b22cu: goto label_79b22c;
        case 0x79b230u: goto label_79b230;
        case 0x79b234u: goto label_79b234;
        case 0x79b238u: goto label_79b238;
        case 0x79b23cu: goto label_79b23c;
        case 0x79b240u: goto label_79b240;
        case 0x79b244u: goto label_79b244;
        case 0x79b248u: goto label_79b248;
        case 0x79b24cu: goto label_79b24c;
        case 0x79b250u: goto label_79b250;
        case 0x79b254u: goto label_79b254;
        default: break;
    }

    ctx->pc = 0x79aa90u;

label_79aa90:
    // 0x79aa90: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x79aa90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_79aa94:
    // 0x79aa94: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x79aa94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_79aa98:
    // 0x79aa98: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x79aa98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_79aa9c:
    // 0x79aa9c: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x79aa9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
label_79aaa0:
    // 0x79aaa0: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x79aaa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_79aaa4:
    // 0x79aaa4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x79aaa4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_79aaa8:
    // 0x79aaa8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x79aaa8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_79aaac:
    // 0x79aaac: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x79aaacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_79aab0:
    // 0x79aab0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x79aab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_79aab4:
    // 0x79aab4: 0x24050371  addiu       $a1, $zero, 0x371
    ctx->pc = 0x79aab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 881));
label_79aab8:
    // 0x79aab8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x79aab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_79aabc:
    // 0x79aabc: 0x24c64220  addiu       $a2, $a2, 0x4220
    ctx->pc = 0x79aabcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16928));
label_79aac0:
    // 0x79aac0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x79aac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_79aac4:
    // 0x79aac4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x79aac4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79aac8:
    // 0x79aac8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x79aac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_79aacc:
    // 0x79aacc: 0x24840d20  addiu       $a0, $a0, 0xD20
    ctx->pc = 0x79aaccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3360));
label_79aad0:
    // 0x79aad0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79aad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_79aad4:
    // 0x79aad4: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x79aad4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
label_79aad8:
    // 0x79aad8: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x79aad8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_79aadc:
    // 0x79aadc: 0xc07fa28  jal         func_1FE8A0
label_79aae0:
    if (ctx->pc == 0x79AAE0u) {
        ctx->pc = 0x79AAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AADCu;
        // 0x79aae0: 0x3c11007a  lui         $s1, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AAE4u;
        goto label_79aae4;
    }
    ctx->pc = 0x79AADCu;
    SET_GPR_U32(ctx, 31, 0x79AAE4u);
    ctx->pc = 0x79AAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AADCu;
    // 0x79aae0: 0x3c11007a  lui         $s1, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE8A0u, 0x79AADCu, 0x79AAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AAE4u;
label_79aae4:
    // 0x79aae4: 0x8e04d6e8  lw          $a0, -0x2918($s0)
    ctx->pc = 0x79aae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294956776)));
label_79aae8:
    // 0x79aae8: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x79aae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_79aaec:
    // 0x79aaec: 0x24529b70  addiu       $s2, $v0, -0x6490
    ctx->pc = 0x79aaecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
label_79aaf0:
    // 0x79aaf0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x79aaf0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79aaf4:
    // 0x79aaf4: 0xc04f906  jal         func_13E418
label_79aaf8:
    if (ctx->pc == 0x79AAF8u) {
        ctx->pc = 0x79AAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAF4u;
        // 0x79aaf8: 0x24841910  addiu       $a0, $a0, 0x1910 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AAFCu;
        goto label_79aafc;
    }
    ctx->pc = 0x79AAF4u;
    SET_GPR_U32(ctx, 31, 0x79AAFCu);
    ctx->pc = 0x79AAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AAF4u;
    // 0x79aaf8: 0x24841910  addiu       $a0, $a0, 0x1910 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E418u, 0x79AAF4u, 0x79AAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AAFCu;
label_79aafc:
    // 0x79aafc: 0x8e02d6e8  lw          $v0, -0x2918($s0)
    ctx->pc = 0x79aafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294956776)));
label_79ab00:
    // 0x79ab00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79ab00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_79ab04:
    // 0x79ab04: 0xc07f0f4  jal         func_1FC3D0
label_79ab08:
    if (ctx->pc == 0x79AB08u) {
        ctx->pc = 0x79AB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB04u;
        // 0x79ab08: 0xac401a10  sw          $zero, 0x1A10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 6672), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB0Cu;
        goto label_79ab0c;
    }
    ctx->pc = 0x79AB04u;
    SET_GPR_U32(ctx, 31, 0x79AB0Cu);
    ctx->pc = 0x79AB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB04u;
    // 0x79ab08: 0xac401a10  sw          $zero, 0x1A10($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 6672), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC3D0u, 0x79AB04u, 0x79AB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB0Cu;
label_79ab0c:
    // 0x79ab0c: 0x8e03d6e8  lw          $v1, -0x2918($s0)
    ctx->pc = 0x79ab0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294956776)));
label_79ab10:
    // 0x79ab10: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x79ab10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_79ab14:
    // 0x79ab14: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x79ab14u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_79ab18:
    // 0x79ab18: 0x24046280  addiu       $a0, $zero, 0x6280
    ctx->pc = 0x79ab18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25216));
label_79ab1c:
    // 0x79ab1c: 0xc1e6a7c  jal         func_79A9F0
label_79ab20:
    if (ctx->pc == 0x79AB20u) {
        ctx->pc = 0x79AB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB1Cu;
        // 0x79ab20: 0xac621a10  sw          $v0, 0x1A10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 6672), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB24u;
        goto label_79ab24;
    }
    ctx->pc = 0x79AB1Cu;
    SET_GPR_U32(ctx, 31, 0x79AB24u);
    ctx->pc = 0x79AB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB1Cu;
    // 0x79ab20: 0xac621a10  sw          $v0, 0x1A10($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 6672), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A9F0u, 0x79AB1Cu, 0x79AB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB24u;
label_79ab24:
    // 0x79ab24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79ab24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79ab28:
    // 0x79ab28: 0xc07a43e  jal         func_1E90F8
label_79ab2c:
    if (ctx->pc == 0x79AB2Cu) {
        ctx->pc = 0x79AB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB28u;
        // 0x79ab2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB30u;
        goto label_79ab30;
    }
    ctx->pc = 0x79AB28u;
    SET_GPR_U32(ctx, 31, 0x79AB30u);
    ctx->pc = 0x79AB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB28u;
    // 0x79ab2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E90F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E90F8u, 0x79AB28u, 0x79AB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB30u;
label_79ab30:
    // 0x79ab30: 0xc07cd60  jal         func_1F3580
label_79ab34:
    if (ctx->pc == 0x79AB34u) {
        ctx->pc = 0x79AB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB30u;
        // 0x79ab34: 0x26042a10  addiu       $a0, $s0, 0x2A10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB38u;
        goto label_79ab38;
    }
    ctx->pc = 0x79AB30u;
    SET_GPR_U32(ctx, 31, 0x79AB38u);
    ctx->pc = 0x79AB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB30u;
    // 0x79ab34: 0x26042a10  addiu       $a0, $s0, 0x2A10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3580u, 0x79AB30u, 0x79AB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB38u;
label_79ab38:
    // 0x79ab38: 0xc07d696  jal         func_1F5A58
label_79ab3c:
    if (ctx->pc == 0x79AB3Cu) {
        ctx->pc = 0x79AB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB38u;
        // 0x79ab3c: 0x260461f0  addiu       $a0, $s0, 0x61F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 25072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB40u;
        goto label_79ab40;
    }
    ctx->pc = 0x79AB38u;
    SET_GPR_U32(ctx, 31, 0x79AB40u);
    ctx->pc = 0x79AB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB38u;
    // 0x79ab3c: 0x260461f0  addiu       $a0, $s0, 0x61F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 25072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5A58u, 0x79AB38u, 0x79AB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB40u;
label_79ab40:
    // 0x79ab40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79ab40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79ab44:
    // 0x79ab44: 0xc07a47e  jal         func_1E91F8
label_79ab48:
    if (ctx->pc == 0x79AB48u) {
        ctx->pc = 0x79AB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB44u;
        // 0x79ab48: 0xae30ca70  sw          $s0, -0x3590($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294953584), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB4Cu;
        goto label_79ab4c;
    }
    ctx->pc = 0x79AB44u;
    SET_GPR_U32(ctx, 31, 0x79AB4Cu);
    ctx->pc = 0x79AB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB44u;
    // 0x79ab48: 0xae30ca70  sw          $s0, -0x3590($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294953584), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E91F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E91F8u, 0x79AB44u, 0x79AB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB4Cu;
label_79ab4c:
    // 0x79ab4c: 0x8e22ca70  lw          $v0, -0x3590($s1)
    ctx->pc = 0x79ab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953584)));
label_79ab50:
    // 0x79ab50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79ab50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_79ab54:
    // 0x79ab54: 0xc07e9b0  jal         func_1FA6C0
label_79ab58:
    if (ctx->pc == 0x79AB58u) {
        ctx->pc = 0x79AB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB54u;
        // 0x79ab58: 0xa44001b0  sh          $zero, 0x1B0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 432), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB5Cu;
        goto label_79ab5c;
    }
    ctx->pc = 0x79AB54u;
    SET_GPR_U32(ctx, 31, 0x79AB5Cu);
    ctx->pc = 0x79AB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB54u;
    // 0x79ab58: 0xa44001b0  sh          $zero, 0x1B0($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 432), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x79AB54u, 0x79AB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB5Cu;
label_79ab5c:
    // 0x79ab5c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_79ab60:
    if (ctx->pc == 0x79AB60u) {
        ctx->pc = 0x79AB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB5Cu;
        // 0x79ab60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB64u;
        goto label_79ab64;
    }
    ctx->pc = 0x79AB5Cu;
    {
        const bool branch_taken_0x79ab5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB5Cu;
        // 0x79ab60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ab5c) {
            ctx->pc = 0x79AB78u;
            goto label_79ab78;
        }
    }
    ctx->pc = 0x79AB64u;
label_79ab64:
    // 0x79ab64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79ab64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_79ab68:
    // 0x79ab68: 0xc07eff4  jal         func_1FBFD0
label_79ab6c:
    if (ctx->pc == 0x79AB6Cu) {
        ctx->pc = 0x79AB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB68u;
        // 0x79ab6c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB70u;
        goto label_79ab70;
    }
    ctx->pc = 0x79AB68u;
    SET_GPR_U32(ctx, 31, 0x79AB70u);
    ctx->pc = 0x79AB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB68u;
    // 0x79ab6c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBFD0u, 0x79AB68u, 0x79AB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB70u;
label_79ab70:
    // 0x79ab70: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_79ab74:
    if (ctx->pc == 0x79AB74u) {
        ctx->pc = 0x79AB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB70u;
        // 0x79ab74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB78u;
        goto label_79ab78;
    }
    ctx->pc = 0x79AB70u;
    {
        const bool branch_taken_0x79ab70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB70u;
        // 0x79ab74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ab70) {
            ctx->pc = 0x79ABA8u;
            goto label_79aba8;
        }
    }
    ctx->pc = 0x79AB78u;
label_79ab78:
    // 0x79ab78: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x79ab78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_79ab7c:
    // 0x79ab7c: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x79ab7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
label_79ab80:
    // 0x79ab80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79ab80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79ab84:
    // 0x79ab84: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x79ab84u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
label_79ab88:
    // 0x79ab88: 0xc0a54b4  jal         func_2952D0
label_79ab8c:
    if (ctx->pc == 0x79AB8Cu) {
        ctx->pc = 0x79AB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB88u;
        // 0x79ab8c: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AB90u;
        goto label_79ab90;
    }
    ctx->pc = 0x79AB88u;
    SET_GPR_U32(ctx, 31, 0x79AB90u);
    ctx->pc = 0x79AB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB88u;
    // 0x79ab8c: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79AB88u, 0x79AB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB90u;
label_79ab90:
    // 0x79ab90: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x79ab90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79ab94:
    // 0x79ab94: 0x2604ea60  addiu       $a0, $s0, -0x15A0
    ctx->pc = 0x79ab94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
label_79ab98:
    // 0x79ab98: 0xc0b0a54  jal         func_2C2950
label_79ab9c:
    if (ctx->pc == 0x79AB9Cu) {
        ctx->pc = 0x79AB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB98u;
        // 0x79ab9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ABA0u;
        goto label_79aba0;
    }
    ctx->pc = 0x79AB98u;
    SET_GPR_U32(ctx, 31, 0x79ABA0u);
    ctx->pc = 0x79AB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB98u;
    // 0x79ab9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x79AB98u, 0x79ABA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ABA0u;
label_79aba0:
    // 0x79aba0: 0x10000007  b           . + 4 + (0x7 << 2)
label_79aba4:
    if (ctx->pc == 0x79ABA4u) {
        ctx->pc = 0x79ABA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABA0u;
        // 0x79aba4: 0x2672ea60  addiu       $s2, $s3, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ABA8u;
        goto label_79aba8;
    }
    ctx->pc = 0x79ABA0u;
    {
        const bool branch_taken_0x79aba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ABA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABA0u;
        // 0x79aba4: 0x2672ea60  addiu       $s2, $s3, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aba0) {
            ctx->pc = 0x79ABC0u;
            goto label_79abc0;
        }
    }
    ctx->pc = 0x79ABA8u;
label_79aba8:
    // 0x79aba8: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x79aba8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_79abac:
    // 0x79abac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79abacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79abb0:
    // 0x79abb0: 0xc0b0a7e  jal         func_2C29F8
label_79abb4:
    if (ctx->pc == 0x79ABB4u) {
        ctx->pc = 0x79ABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABB0u;
        // 0x79abb4: 0x2604ea60  addiu       $a0, $s0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ABB8u;
        goto label_79abb8;
    }
    ctx->pc = 0x79ABB0u;
    SET_GPR_U32(ctx, 31, 0x79ABB8u);
    ctx->pc = 0x79ABB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ABB0u;
    // 0x79abb4: 0x2604ea60  addiu       $a0, $s0, -0x15A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x79ABB0u, 0x79ABB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ABB8u;
label_79abb8:
    // 0x79abb8: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x79abb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79abbc:
    // 0x79abbc: 0x2672ea60  addiu       $s2, $s3, -0x15A0
    ctx->pc = 0x79abbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961760));
label_79abc0:
    // 0x79abc0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x79abc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_79abc4:
    // 0x79abc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79abc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_79abc8:
    // 0x79abc8: 0xc0b0a54  jal         func_2C2950
label_79abcc:
    if (ctx->pc == 0x79ABCCu) {
        ctx->pc = 0x79ABCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABC8u;
        // 0x79abcc: 0x26909b70  addiu       $s0, $s4, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ABD0u;
        goto label_79abd0;
    }
    ctx->pc = 0x79ABC8u;
    SET_GPR_U32(ctx, 31, 0x79ABD0u);
    ctx->pc = 0x79ABCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ABC8u;
    // 0x79abcc: 0x26909b70  addiu       $s0, $s4, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x79ABC8u, 0x79ABD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ABD0u;
label_79abd0:
    // 0x79abd0: 0x8e839b70  lw          $v1, -0x6490($s4)
    ctx->pc = 0x79abd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294941552)));
label_79abd4:
    // 0x79abd4: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x79abd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
label_79abd8:
    // 0x79abd8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x79abd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_79abdc:
    // 0x79abdc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x79abdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_79abe0:
    // 0x79abe0: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_79abe4:
    if (ctx->pc == 0x79ABE4u) {
        ctx->pc = 0x79ABE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABE0u;
        // 0x79abe4: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ABE8u;
        goto label_79abe8;
    }
    ctx->pc = 0x79ABE0u;
    {
        const bool branch_taken_0x79abe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ABE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABE0u;
        // 0x79abe4: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79abe0) {
            ctx->pc = 0x79ACA8u;
            goto label_79aca8;
        }
    }
    ctx->pc = 0x79ABE8u;
label_79abe8:
    // 0x79abe8: 0xc0b6dac  jal         func_2DB6B0
label_79abec:
    if (ctx->pc == 0x79ABECu) {
        ctx->pc = 0x79ABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABE8u;
        // 0x79abec: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ABF0u;
        goto label_79abf0;
    }
    ctx->pc = 0x79ABE8u;
    SET_GPR_U32(ctx, 31, 0x79ABF0u);
    ctx->pc = 0x79ABECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ABE8u;
    // 0x79abec: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79ABE8u, 0x79ABF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ABF0u;
label_79abf0:
    // 0x79abf0: 0x8e03264c  lw          $v1, 0x264C($s0)
    ctx->pc = 0x79abf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 9804)));
label_79abf4:
    // 0x79abf4: 0x34118000  ori         $s1, $zero, 0x8000
    ctx->pc = 0x79abf4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_79abf8:
    // 0x79abf8: 0x8c470214  lw          $a3, 0x214($v0)
    ctx->pc = 0x79abf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_79abfc:
    // 0x79abfc: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x79abfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_79ac00:
    // 0x79ac00: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x79ac00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_79ac04:
    // 0x79ac04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79ac04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_79ac08:
    // 0x79ac08: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79ac08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_79ac0c:
    // 0x79ac0c: 0xc46230d8  lwc1        $f2, 0x30D8($v1)
    ctx->pc = 0x79ac0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_79ac10:
    // 0x79ac10: 0xc46130d0  lwc1        $f1, 0x30D0($v1)
    ctx->pc = 0x79ac10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_79ac14:
    // 0x79ac14: 0xc46030d4  lwc1        $f0, 0x30D4($v1)
    ctx->pc = 0x79ac14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79ac18:
    // 0x79ac18: 0x84e40070  lh          $a0, 0x70($a3)
    ctx->pc = 0x79ac18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 112)));
label_79ac1c:
    // 0x79ac1c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x79ac1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_79ac20:
    // 0x79ac20: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x79ac20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_79ac24:
    // 0x79ac24: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x79ac24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_79ac28:
    // 0x79ac28: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x79ac28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_79ac2c:
    // 0x79ac2c: 0xe4d4000c  swc1        $f20, 0xC($a2)
    ctx->pc = 0x79ac2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
label_79ac30:
    // 0x79ac30: 0x8ce20074  lw          $v0, 0x74($a3)
    ctx->pc = 0x79ac30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 116)));
label_79ac34:
    // 0x79ac34: 0x40f809  jalr        $v0
label_79ac38:
    if (ctx->pc == 0x79AC38u) {
        ctx->pc = 0x79AC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC34u;
        // 0x79ac38: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AC3Cu;
        goto label_79ac3c;
    }
    ctx->pc = 0x79AC34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79AC3Cu);
        ctx->pc = 0x79AC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC34u;
        // 0x79ac38: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AC34u, 0x79AC3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79AC3Cu;
label_79ac3c:
    // 0x79ac3c: 0xc0b6dac  jal         func_2DB6B0
label_79ac40:
    if (ctx->pc == 0x79AC40u) {
        ctx->pc = 0x79AC44u;
        goto label_79ac44;
    }
    ctx->pc = 0x79AC3Cu;
    SET_GPR_U32(ctx, 31, 0x79AC44u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79AC3Cu, 0x79AC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC44u;
label_79ac44:
    // 0x79ac44: 0x8e03264c  lw          $v1, 0x264C($s0)
    ctx->pc = 0x79ac44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 9804)));
label_79ac48:
    // 0x79ac48: 0x8c460214  lw          $a2, 0x214($v0)
    ctx->pc = 0x79ac48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_79ac4c:
    // 0x79ac4c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x79ac4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_79ac50:
    // 0x79ac50: 0xc46030e0  lwc1        $f0, 0x30E0($v1)
    ctx->pc = 0x79ac50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79ac54:
    // 0x79ac54: 0x84c40078  lh          $a0, 0x78($a2)
    ctx->pc = 0x79ac54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 120)));
label_79ac58:
    // 0x79ac58: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x79ac58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_79ac5c:
    // 0x79ac5c: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x79ac5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_79ac60:
    // 0x79ac60: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x79ac60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_79ac64:
    // 0x79ac64: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x79ac64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_79ac68:
    // 0x79ac68: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x79ac68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_79ac6c:
    // 0x79ac6c: 0x8cc2007c  lw          $v0, 0x7C($a2)
    ctx->pc = 0x79ac6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
label_79ac70:
    // 0x79ac70: 0x40f809  jalr        $v0
label_79ac74:
    if (ctx->pc == 0x79AC74u) {
        ctx->pc = 0x79AC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC70u;
        // 0x79ac74: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AC78u;
        goto label_79ac78;
    }
    ctx->pc = 0x79AC70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79AC78u);
        ctx->pc = 0x79AC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC70u;
        // 0x79ac74: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AC70u, 0x79AC78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79AC78u;
label_79ac78:
    // 0x79ac78: 0xc0b6dac  jal         func_2DB6B0
label_79ac7c:
    if (ctx->pc == 0x79AC7Cu) {
        ctx->pc = 0x79AC80u;
        goto label_79ac80;
    }
    ctx->pc = 0x79AC78u;
    SET_GPR_U32(ctx, 31, 0x79AC80u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79AC78u, 0x79AC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC80u;
label_79ac80:
    // 0x79ac80: 0xc04b106  jal         func_12C418
label_79ac84:
    if (ctx->pc == 0x79AC84u) {
        ctx->pc = 0x79AC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC80u;
        // 0x79ac84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AC88u;
        goto label_79ac88;
    }
    ctx->pc = 0x79AC80u;
    SET_GPR_U32(ctx, 31, 0x79AC88u);
    ctx->pc = 0x79AC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AC80u;
    // 0x79ac84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C418u, 0x79AC80u, 0x79AC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC88u;
label_79ac88:
    // 0x79ac88: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79ac88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_79ac8c:
    // 0x79ac8c: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79ac8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_79ac90:
    // 0x79ac90: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x79ac90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
label_79ac94:
    // 0x79ac94: 0x24a5bba8  addiu       $a1, $a1, -0x4458
    ctx->pc = 0x79ac94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949800));
label_79ac98:
    // 0x79ac98: 0xc0b0e24  jal         func_2C3890
label_79ac9c:
    if (ctx->pc == 0x79AC9Cu) {
        ctx->pc = 0x79AC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC98u;
        // 0x79ac9c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ACA0u;
        goto label_79aca0;
    }
    ctx->pc = 0x79AC98u;
    SET_GPR_U32(ctx, 31, 0x79ACA0u);
    ctx->pc = 0x79AC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AC98u;
    // 0x79ac9c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x79AC98u, 0x79ACA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ACA0u;
label_79aca0:
    // 0x79aca0: 0x10000015  b           . + 4 + (0x15 << 2)
label_79aca4:
    if (ctx->pc == 0x79ACA4u) {
        ctx->pc = 0x79ACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACA0u;
        // 0x79aca4: 0x3c07007a  lui         $a3, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ACA8u;
        goto label_79aca8;
    }
    ctx->pc = 0x79ACA0u;
    {
        const bool branch_taken_0x79aca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACA0u;
        // 0x79aca4: 0x3c07007a  lui         $a3, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aca0) {
            ctx->pc = 0x79ACF8u;
            goto label_79acf8;
        }
    }
    ctx->pc = 0x79ACA8u;
label_79aca8:
    // 0x79aca8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79aca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79acac:
    // 0x79acac: 0x24428240  addiu       $v0, $v0, -0x7DC0
    ctx->pc = 0x79acacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935104));
label_79acb0:
    // 0x79acb0: 0xa4400012  sh          $zero, 0x12($v0)
    ctx->pc = 0x79acb0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 18), (uint16_t)GPR_U32(ctx, 0));
label_79acb4:
    // 0x79acb4: 0xc07e9b0  jal         func_1FA6C0
label_79acb8:
    if (ctx->pc == 0x79ACB8u) {
        ctx->pc = 0x79ACB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACB4u;
        // 0x79acb8: 0xa4400010  sh          $zero, 0x10($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 16), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ACBCu;
        goto label_79acbc;
    }
    ctx->pc = 0x79ACB4u;
    SET_GPR_U32(ctx, 31, 0x79ACBCu);
    ctx->pc = 0x79ACB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ACB4u;
    // 0x79acb8: 0xa4400010  sh          $zero, 0x10($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 16), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x79ACB4u, 0x79ACBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ACBCu;
label_79acbc:
    // 0x79acbc: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_79acc0:
    if (ctx->pc == 0x79ACC0u) {
        ctx->pc = 0x79ACC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACBCu;
        // 0x79acc0: 0x3c07007a  lui         $a3, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ACC4u;
        goto label_79acc4;
    }
    ctx->pc = 0x79ACBCu;
    {
        const bool branch_taken_0x79acbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79ACC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACBCu;
        // 0x79acc0: 0x3c07007a  lui         $a3, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79acbc) {
            ctx->pc = 0x79AD20u;
            goto label_79ad20;
        }
    }
    ctx->pc = 0x79ACC4u;
label_79acc4:
    // 0x79acc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79acc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79acc8:
    // 0x79acc8: 0xc07eff4  jal         func_1FBFD0
label_79accc:
    if (ctx->pc == 0x79ACCCu) {
        ctx->pc = 0x79ACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACC8u;
        // 0x79accc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ACD0u;
        goto label_79acd0;
    }
    ctx->pc = 0x79ACC8u;
    SET_GPR_U32(ctx, 31, 0x79ACD0u);
    ctx->pc = 0x79ACCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ACC8u;
    // 0x79accc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBFD0u, 0x79ACC8u, 0x79ACD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ACD0u;
label_79acd0:
    // 0x79acd0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_79acd4:
    if (ctx->pc == 0x79ACD4u) {
        ctx->pc = 0x79ACD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACD0u;
        // 0x79acd4: 0x3c07007a  lui         $a3, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ACD8u;
        goto label_79acd8;
    }
    ctx->pc = 0x79ACD0u;
    {
        const bool branch_taken_0x79acd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79ACD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACD0u;
        // 0x79acd4: 0x3c07007a  lui         $a3, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79acd0) {
            ctx->pc = 0x79ACF8u;
            goto label_79acf8;
        }
    }
    ctx->pc = 0x79ACD8u;
label_79acd8:
    // 0x79acd8: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x79acd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_79acdc:
    // 0x79acdc: 0x8c627a2c  lw          $v0, 0x7A2C($v1)
    ctx->pc = 0x79acdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31276)));
label_79ace0:
    // 0x79ace0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x79ace0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_79ace4:
    // 0x79ace4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_79ace8:
    if (ctx->pc == 0x79ACE8u) {
        ctx->pc = 0x79ACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACE4u;
        // 0x79ace8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ACECu;
        goto label_79acec;
    }
    ctx->pc = 0x79ACE4u;
    {
        const bool branch_taken_0x79ace4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79ACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACE4u;
        // 0x79ace8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ace4) {
            ctx->pc = 0x79ACF8u;
            goto label_79acf8;
        }
    }
    ctx->pc = 0x79ACECu;
label_79acec:
    // 0x79acec: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x79acecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_79acf0:
    // 0x79acf0: 0x10000004  b           . + 4 + (0x4 << 2)
label_79acf4:
    if (ctx->pc == 0x79ACF4u) {
        ctx->pc = 0x79ACF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACF0u;
        // 0x79acf4: 0x24e7b4e8  addiu       $a3, $a3, -0x4B18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ACF8u;
        goto label_79acf8;
    }
    ctx->pc = 0x79ACF0u;
    {
        const bool branch_taken_0x79acf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ACF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ACF0u;
        // 0x79acf4: 0x24e7b4e8  addiu       $a3, $a3, -0x4B18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79acf0) {
            ctx->pc = 0x79AD04u;
            goto label_79ad04;
        }
    }
    ctx->pc = 0x79ACF8u;
label_79acf8:
    // 0x79acf8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79acf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_79acfc:
    // 0x79acfc: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x79acfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
label_79ad00:
    // 0x79ad00: 0x24e7b530  addiu       $a3, $a3, -0x4AD0
    ctx->pc = 0x79ad00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948144));
label_79ad04:
    // 0x79ad04: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x79ad04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_79ad08:
    // 0x79ad08: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x79ad08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79ad0c:
    // 0x79ad0c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79ad0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79ad10:
    // 0x79ad10: 0xc0b09e4  jal         func_2C2790
label_79ad14:
    if (ctx->pc == 0x79AD14u) {
        ctx->pc = 0x79AD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD10u;
        // 0x79ad14: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AD18u;
        goto label_79ad18;
    }
    ctx->pc = 0x79AD10u;
    SET_GPR_U32(ctx, 31, 0x79AD18u);
    ctx->pc = 0x79AD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AD10u;
    // 0x79ad14: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x79AD10u, 0x79AD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AD18u;
label_79ad18:
    // 0x79ad18: 0x10000008  b           . + 4 + (0x8 << 2)
label_79ad1c:
    if (ctx->pc == 0x79AD1Cu) {
        ctx->pc = 0x79AD20u;
        goto label_79ad20;
    }
    ctx->pc = 0x79AD18u;
    {
        const bool branch_taken_0x79ad18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79ad18) {
            ctx->pc = 0x79AD3Cu;
            goto label_79ad3c;
        }
    }
    ctx->pc = 0x79AD20u;
label_79ad20:
    // 0x79ad20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79ad20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_79ad24:
    // 0x79ad24: 0x24e7b530  addiu       $a3, $a3, -0x4AD0
    ctx->pc = 0x79ad24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948144));
label_79ad28:
    // 0x79ad28: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x79ad28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_79ad2c:
    // 0x79ad2c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x79ad2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79ad30:
    // 0x79ad30: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79ad30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79ad34:
    // 0x79ad34: 0xc0b09e4  jal         func_2C2790
label_79ad38:
    if (ctx->pc == 0x79AD38u) {
        ctx->pc = 0x79AD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD34u;
        // 0x79ad38: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AD3Cu;
        goto label_79ad3c;
    }
    ctx->pc = 0x79AD34u;
    SET_GPR_U32(ctx, 31, 0x79AD3Cu);
    ctx->pc = 0x79AD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AD34u;
    // 0x79ad38: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x79AD34u, 0x79AD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AD3Cu;
label_79ad3c:
    // 0x79ad3c: 0xc07f0f4  jal         func_1FC3D0
label_79ad40:
    if (ctx->pc == 0x79AD40u) {
        ctx->pc = 0x79AD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD3Cu;
        // 0x79ad40: 0x26849b70  addiu       $a0, $s4, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AD44u;
        goto label_79ad44;
    }
    ctx->pc = 0x79AD3Cu;
    SET_GPR_U32(ctx, 31, 0x79AD44u);
    ctx->pc = 0x79AD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AD3Cu;
    // 0x79ad40: 0x26849b70  addiu       $a0, $s4, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC3D0u, 0x79AD3Cu, 0x79AD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AD44u;
label_79ad44:
    // 0x79ad44: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_79ad48:
    if (ctx->pc == 0x79AD48u) {
        ctx->pc = 0x79AD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD44u;
        // 0x79ad48: 0x2671ea60  addiu       $s1, $s3, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AD4Cu;
        goto label_79ad4c;
    }
    ctx->pc = 0x79AD44u;
    {
        const bool branch_taken_0x79ad44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD44u;
        // 0x79ad48: 0x2671ea60  addiu       $s1, $s3, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ad44) {
            ctx->pc = 0x79ADA4u;
            goto label_79ada4;
        }
    }
    ctx->pc = 0x79AD4Cu;
label_79ad4c:
    // 0x79ad4c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x79ad4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_79ad50:
    // 0x79ad50: 0xc0b0c46  jal         func_2C3118
label_79ad54:
    if (ctx->pc == 0x79AD54u) {
        ctx->pc = 0x79AD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD50u;
        // 0x79ad54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AD58u;
        goto label_79ad58;
    }
    ctx->pc = 0x79AD50u;
    SET_GPR_U32(ctx, 31, 0x79AD58u);
    ctx->pc = 0x79AD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AD50u;
    // 0x79ad54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3118u, 0x79AD50u, 0x79AD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AD58u;
label_79ad58:
    // 0x79ad58: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x79ad58u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
label_79ad5c:
    // 0x79ad5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79ad5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79ad60:
    // 0x79ad60: 0x2610b3d8  addiu       $s0, $s0, -0x4C28
    ctx->pc = 0x79ad60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947800));
label_79ad64:
    // 0x79ad64: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x79ad64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79ad68:
    // 0x79ad68: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x79ad68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79ad6c:
    // 0x79ad6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79ad6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79ad70:
    // 0x79ad70: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79ad70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79ad74:
    // 0x79ad74: 0xc0b09d4  jal         func_2C2750
label_79ad78:
    if (ctx->pc == 0x79AD78u) {
        ctx->pc = 0x79AD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD74u;
        // 0x79ad78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AD7Cu;
        goto label_79ad7c;
    }
    ctx->pc = 0x79AD74u;
    SET_GPR_U32(ctx, 31, 0x79AD7Cu);
    ctx->pc = 0x79AD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AD74u;
    // 0x79ad78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2750u, 0x79AD74u, 0x79AD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AD7Cu;
label_79ad7c:
    // 0x79ad7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79ad7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_79ad80:
    // 0x79ad80: 0xc0b0c46  jal         func_2C3118
label_79ad84:
    if (ctx->pc == 0x79AD84u) {
        ctx->pc = 0x79AD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD80u;
        // 0x79ad84: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AD88u;
        goto label_79ad88;
    }
    ctx->pc = 0x79AD80u;
    SET_GPR_U32(ctx, 31, 0x79AD88u);
    ctx->pc = 0x79AD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AD80u;
    // 0x79ad84: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3118u, 0x79AD80u, 0x79AD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AD88u;
label_79ad88:
    // 0x79ad88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79ad88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_79ad8c:
    // 0x79ad8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79ad8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79ad90:
    // 0x79ad90: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x79ad90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79ad94:
    // 0x79ad94: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x79ad94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79ad98:
    // 0x79ad98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79ad98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79ad9c:
    // 0x79ad9c: 0xc0b09d4  jal         func_2C2750
label_79ada0:
    if (ctx->pc == 0x79ADA0u) {
        ctx->pc = 0x79ADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AD9Cu;
        // 0x79ada0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ADA4u;
        goto label_79ada4;
    }
    ctx->pc = 0x79AD9Cu;
    SET_GPR_U32(ctx, 31, 0x79ADA4u);
    ctx->pc = 0x79ADA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AD9Cu;
    // 0x79ada0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2750u, 0x79AD9Cu, 0x79ADA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ADA4u;
label_79ada4:
    // 0x79ada4: 0x2670ea60  addiu       $s0, $s3, -0x15A0
    ctx->pc = 0x79ada4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961760));
label_79ada8:
    // 0x79ada8: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x79ada8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_79adac:
    // 0x79adac: 0x24e7b628  addiu       $a3, $a3, -0x49D8
    ctx->pc = 0x79adacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948392));
label_79adb0:
    // 0x79adb0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x79adb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79adb4:
    // 0x79adb4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79adb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79adb8:
    // 0x79adb8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79adb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79adbc:
    // 0x79adbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79adbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79adc0:
    // 0x79adc0: 0xc0b09e4  jal         func_2C2790
label_79adc4:
    if (ctx->pc == 0x79ADC4u) {
        ctx->pc = 0x79ADC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADC0u;
        // 0x79adc4: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ADC8u;
        goto label_79adc8;
    }
    ctx->pc = 0x79ADC0u;
    SET_GPR_U32(ctx, 31, 0x79ADC8u);
    ctx->pc = 0x79ADC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ADC0u;
    // 0x79adc4: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x79ADC0u, 0x79ADC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ADC8u;
label_79adc8:
    // 0x79adc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79adc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79adcc:
    // 0x79adcc: 0xc0b0a7e  jal         func_2C29F8
label_79add0:
    if (ctx->pc == 0x79ADD0u) {
        ctx->pc = 0x79ADD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADCCu;
        // 0x79add0: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ADD4u;
        goto label_79add4;
    }
    ctx->pc = 0x79ADCCu;
    SET_GPR_U32(ctx, 31, 0x79ADD4u);
    ctx->pc = 0x79ADD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ADCCu;
    // 0x79add0: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x79ADCCu, 0x79ADD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ADD4u;
label_79add4:
    // 0x79add4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79add4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79add8:
    // 0x79add8: 0xc0b0a54  jal         func_2C2950
label_79addc:
    if (ctx->pc == 0x79ADDCu) {
        ctx->pc = 0x79ADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADD8u;
        // 0x79addc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79ADE0u;
        goto label_79ade0;
    }
    ctx->pc = 0x79ADD8u;
    SET_GPR_U32(ctx, 31, 0x79ADE0u);
    ctx->pc = 0x79ADDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ADD8u;
    // 0x79addc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x79ADD8u, 0x79ADE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79ADE0u;
label_79ade0:
    // 0x79ade0: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x79ade0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_79ade4:
    // 0x79ade4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79ade4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79ade8:
    // 0x79ade8: 0x24e7bd80  addiu       $a3, $a3, -0x4280
    ctx->pc = 0x79ade8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950272));
label_79adec:
    // 0x79adec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79adecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79adf0:
    // 0x79adf0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x79adf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79adf4:
    // 0x79adf4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79adf4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79adf8:
    // 0x79adf8: 0xc0b09e4  jal         func_2C2790
label_79adfc:
    if (ctx->pc == 0x79ADFCu) {
        ctx->pc = 0x79ADFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ADF8u;
        // 0x79adfc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AE00u;
        goto label_79ae00;
    }
    ctx->pc = 0x79ADF8u;
    SET_GPR_U32(ctx, 31, 0x79AE00u);
    ctx->pc = 0x79ADFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79ADF8u;
    // 0x79adfc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x79ADF8u, 0x79AE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE00u;
label_79ae00:
    // 0x79ae00: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79ae00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_79ae04:
    // 0x79ae04: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x79ae04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79ae08:
    // 0x79ae08: 0x24427a24  addiu       $v0, $v0, 0x7A24
    ctx->pc = 0x79ae08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31268));
label_79ae0c:
    // 0x79ae0c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x79ae0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_79ae10:
    // 0x79ae10: 0x4600008  bltz        $v1, . + 4 + (0x8 << 2)
label_79ae14:
    if (ctx->pc == 0x79AE14u) {
        ctx->pc = 0x79AE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE10u;
        // 0x79ae14: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AE18u;
        goto label_79ae18;
    }
    ctx->pc = 0x79AE10u;
    {
        const bool branch_taken_0x79ae10 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x79AE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE10u;
        // 0x79ae14: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ae10) {
            ctx->pc = 0x79AE34u;
            goto label_79ae34;
        }
    }
    ctx->pc = 0x79AE18u;
label_79ae18:
    // 0x79ae18: 0xc0b6cac  jal         func_2DB2B0
label_79ae1c:
    if (ctx->pc == 0x79AE1Cu) {
        ctx->pc = 0x79AE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE18u;
        // 0x79ae1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AE20u;
        goto label_79ae20;
    }
    ctx->pc = 0x79AE18u;
    SET_GPR_U32(ctx, 31, 0x79AE20u);
    ctx->pc = 0x79AE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE18u;
    // 0x79ae1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x79AE18u, 0x79AE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE20u;
label_79ae20:
    // 0x79ae20: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x79ae20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_79ae24:
    // 0x79ae24: 0xc0b6cac  jal         func_2DB2B0
label_79ae28:
    if (ctx->pc == 0x79AE28u) {
        ctx->pc = 0x79AE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE24u;
        // 0x79ae28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AE2Cu;
        goto label_79ae2c;
    }
    ctx->pc = 0x79AE24u;
    SET_GPR_U32(ctx, 31, 0x79AE2Cu);
    ctx->pc = 0x79AE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE24u;
    // 0x79ae28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x79AE24u, 0x79AE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE2Cu;
label_79ae2c:
    // 0x79ae2c: 0x10000007  b           . + 4 + (0x7 << 2)
label_79ae30:
    if (ctx->pc == 0x79AE30u) {
        ctx->pc = 0x79AE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE2Cu;
        // 0x79ae30: 0x2670ea60  addiu       $s0, $s3, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AE34u;
        goto label_79ae34;
    }
    ctx->pc = 0x79AE2Cu;
    {
        const bool branch_taken_0x79ae2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE2Cu;
        // 0x79ae30: 0x2670ea60  addiu       $s0, $s3, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ae2c) {
            ctx->pc = 0x79AE4Cu;
            goto label_79ae4c;
        }
    }
    ctx->pc = 0x79AE34u;
label_79ae34:
    // 0x79ae34: 0xc0b6cac  jal         func_2DB2B0
label_79ae38:
    if (ctx->pc == 0x79AE38u) {
        ctx->pc = 0x79AE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE34u;
        // 0x79ae38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AE3Cu;
        goto label_79ae3c;
    }
    ctx->pc = 0x79AE34u;
    SET_GPR_U32(ctx, 31, 0x79AE3Cu);
    ctx->pc = 0x79AE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE34u;
    // 0x79ae38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x79AE34u, 0x79AE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE3Cu;
label_79ae3c:
    // 0x79ae3c: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x79ae3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_79ae40:
    // 0x79ae40: 0xc0b6cac  jal         func_2DB2B0
label_79ae44:
    if (ctx->pc == 0x79AE44u) {
        ctx->pc = 0x79AE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE40u;
        // 0x79ae44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AE48u;
        goto label_79ae48;
    }
    ctx->pc = 0x79AE40u;
    SET_GPR_U32(ctx, 31, 0x79AE48u);
    ctx->pc = 0x79AE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE40u;
    // 0x79ae44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x79AE40u, 0x79AE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE48u;
label_79ae48:
    // 0x79ae48: 0x2670ea60  addiu       $s0, $s3, -0x15A0
    ctx->pc = 0x79ae48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961760));
label_79ae4c:
    // 0x79ae4c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x79ae4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_79ae50:
    // 0x79ae50: 0xc0b0a54  jal         func_2C2950
label_79ae54:
    if (ctx->pc == 0x79AE54u) {
        ctx->pc = 0x79AE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE50u;
        // 0x79ae54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AE58u;
        goto label_79ae58;
    }
    ctx->pc = 0x79AE50u;
    SET_GPR_U32(ctx, 31, 0x79AE58u);
    ctx->pc = 0x79AE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE50u;
    // 0x79ae54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x79AE50u, 0x79AE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE58u;
label_79ae58:
    // 0x79ae58: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x79ae58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_79ae5c:
    // 0x79ae5c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x79ae5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79ae60:
    // 0x79ae60: 0x24e7c268  addiu       $a3, $a3, -0x3D98
    ctx->pc = 0x79ae60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951528));
label_79ae64:
    // 0x79ae64: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79ae64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79ae68:
    // 0x79ae68: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79ae68u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79ae6c:
    // 0x79ae6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79ae6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79ae70:
    // 0x79ae70: 0xc0b09e4  jal         func_2C2790
label_79ae74:
    if (ctx->pc == 0x79AE74u) {
        ctx->pc = 0x79AE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE70u;
        // 0x79ae74: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AE78u;
        goto label_79ae78;
    }
    ctx->pc = 0x79AE70u;
    SET_GPR_U32(ctx, 31, 0x79AE78u);
    ctx->pc = 0x79AE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE70u;
    // 0x79ae74: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x79AE70u, 0x79AE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE78u;
label_79ae78:
    // 0x79ae78: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x79ae78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_79ae7c:
    // 0x79ae7c: 0xc0b6cac  jal         func_2DB2B0
label_79ae80:
    if (ctx->pc == 0x79AE80u) {
        ctx->pc = 0x79AE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE7Cu;
        // 0x79ae80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AE84u;
        goto label_79ae84;
    }
    ctx->pc = 0x79AE7Cu;
    SET_GPR_U32(ctx, 31, 0x79AE84u);
    ctx->pc = 0x79AE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE7Cu;
    // 0x79ae80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x79AE7Cu, 0x79AE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE84u;
label_79ae84:
    // 0x79ae84: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x79ae84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_79ae88:
    // 0x79ae88: 0xc0b6cac  jal         func_2DB2B0
label_79ae8c:
    if (ctx->pc == 0x79AE8Cu) {
        ctx->pc = 0x79AE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE88u;
        // 0x79ae8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AE90u;
        goto label_79ae90;
    }
    ctx->pc = 0x79AE88u;
    SET_GPR_U32(ctx, 31, 0x79AE90u);
    ctx->pc = 0x79AE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE88u;
    // 0x79ae8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x79AE88u, 0x79AE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE90u;
label_79ae90:
    // 0x79ae90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79ae90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79ae94:
    // 0x79ae94: 0xc0b0a54  jal         func_2C2950
label_79ae98:
    if (ctx->pc == 0x79AE98u) {
        ctx->pc = 0x79AE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AE94u;
        // 0x79ae98: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AE9Cu;
        goto label_79ae9c;
    }
    ctx->pc = 0x79AE94u;
    SET_GPR_U32(ctx, 31, 0x79AE9Cu);
    ctx->pc = 0x79AE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AE94u;
    // 0x79ae98: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x79AE94u, 0x79AE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AE9Cu;
label_79ae9c:
    // 0x79ae9c: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x79ae9cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_79aea0:
    // 0x79aea0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79aea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79aea4:
    // 0x79aea4: 0x24e7c358  addiu       $a3, $a3, -0x3CA8
    ctx->pc = 0x79aea4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951768));
label_79aea8:
    // 0x79aea8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x79aea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_79aeac:
    // 0x79aeac: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x79aeacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79aeb0:
    // 0x79aeb0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79aeb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79aeb4:
    // 0x79aeb4: 0xc0b09e4  jal         func_2C2790
label_79aeb8:
    if (ctx->pc == 0x79AEB8u) {
        ctx->pc = 0x79AEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AEB4u;
        // 0x79aeb8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AEBCu;
        goto label_79aebc;
    }
    ctx->pc = 0x79AEB4u;
    SET_GPR_U32(ctx, 31, 0x79AEBCu);
    ctx->pc = 0x79AEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AEB4u;
    // 0x79aeb8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x79AEB4u, 0x79AEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AEBCu;
label_79aebc:
    // 0x79aebc: 0x26227a24  addiu       $v0, $s1, 0x7A24
    ctx->pc = 0x79aebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 31268));
label_79aec0:
    // 0x79aec0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x79aec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_79aec4:
    // 0x79aec4: 0x463003a  bgezl       $v1, . + 4 + (0x3A << 2)
label_79aec8:
    if (ctx->pc == 0x79AEC8u) {
        ctx->pc = 0x79AEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AEC4u;
        // 0x79aec8: 0x26237a24  addiu       $v1, $s1, 0x7A24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 31268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AECCu;
        goto label_79aecc;
    }
    ctx->pc = 0x79AEC4u;
    {
        const bool branch_taken_0x79aec4 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x79aec4) {
            ctx->pc = 0x79AEC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AEC4u;
            // 0x79aec8: 0x26237a24  addiu       $v1, $s1, 0x7A24 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 31268));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AFB0u;
            goto label_79afb0;
        }
    }
    ctx->pc = 0x79AECCu;
label_79aecc:
    // 0x79aecc: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x79aeccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
label_79aed0:
    // 0x79aed0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x79aed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_79aed4:
    // 0x79aed4: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
label_79aed8:
    if (ctx->pc == 0x79AED8u) {
        ctx->pc = 0x79AED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AED4u;
        // 0x79aed8: 0x26237a24  addiu       $v1, $s1, 0x7A24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 31268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AEDCu;
        goto label_79aedc;
    }
    ctx->pc = 0x79AED4u;
    {
        const bool branch_taken_0x79aed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AED4u;
        // 0x79aed8: 0x26237a24  addiu       $v1, $s1, 0x7A24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 31268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aed4) {
            ctx->pc = 0x79AFB0u;
            goto label_79afb0;
        }
    }
    ctx->pc = 0x79AEDCu;
label_79aedc:
    // 0x79aedc: 0x26c40d20  addiu       $a0, $s6, 0xD20
    ctx->pc = 0x79aedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 3360));
label_79aee0:
    // 0x79aee0: 0x240503ca  addiu       $a1, $zero, 0x3CA
    ctx->pc = 0x79aee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 970));
label_79aee4:
    // 0x79aee4: 0x26a64220  addiu       $a2, $s5, 0x4220
    ctx->pc = 0x79aee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 16928));
label_79aee8:
    // 0x79aee8: 0xc07fa28  jal         func_1FE8A0
label_79aeec:
    if (ctx->pc == 0x79AEECu) {
        ctx->pc = 0x79AEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AEE8u;
        // 0x79aeec: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AEF0u;
        goto label_79aef0;
    }
    ctx->pc = 0x79AEE8u;
    SET_GPR_U32(ctx, 31, 0x79AEF0u);
    ctx->pc = 0x79AEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AEE8u;
    // 0x79aeec: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE8A0u, 0x79AEE8u, 0x79AEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AEF0u;
label_79aef0:
    // 0x79aef0: 0x240403dc  addiu       $a0, $zero, 0x3DC
    ctx->pc = 0x79aef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 988));
label_79aef4:
    // 0x79aef4: 0xc0c3ea6  jal         func_30FA98
label_79aef8:
    if (ctx->pc == 0x79AEF8u) {
        ctx->pc = 0x79AEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AEF4u;
        // 0x79aef8: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AEFCu;
        goto label_79aefc;
    }
    ctx->pc = 0x79AEF4u;
    SET_GPR_U32(ctx, 31, 0x79AEFCu);
    ctx->pc = 0x79AEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AEF4u;
    // 0x79aef8: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x79AEF4u, 0x79AEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AEFCu;
label_79aefc:
    // 0x79aefc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79aefcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79af00:
    // 0x79af00: 0x1200002b  beqz        $s0, . + 4 + (0x2B << 2)
label_79af04:
    if (ctx->pc == 0x79AF04u) {
        ctx->pc = 0x79AF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF00u;
        // 0x79af04: 0x26237a24  addiu       $v1, $s1, 0x7A24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 31268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AF08u;
        goto label_79af08;
    }
    ctx->pc = 0x79AF00u;
    {
        const bool branch_taken_0x79af00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF00u;
        // 0x79af04: 0x26237a24  addiu       $v1, $s1, 0x7A24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 31268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af00) {
            ctx->pc = 0x79AFB0u;
            goto label_79afb0;
        }
    }
    ctx->pc = 0x79AF08u;
label_79af08:
    // 0x79af08: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x79af08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_79af0c:
    // 0x79af0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79af0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_79af10:
    // 0x79af10: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79af10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_79af14:
    // 0x79af14: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x79af14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_79af18:
    // 0x79af18: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x79af18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_79af1c:
    // 0x79af1c: 0x40f809  jalr        $v0
label_79af20:
    if (ctx->pc == 0x79AF20u) {
        ctx->pc = 0x79AF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF1Cu;
        // 0x79af20: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AF24u;
        goto label_79af24;
    }
    ctx->pc = 0x79AF1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79AF24u);
        ctx->pc = 0x79AF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF1Cu;
        // 0x79af20: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AF1Cu, 0x79AF24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79AF24u;
label_79af24:
    // 0x79af24: 0x3c01c234  lui         $at, 0xC234
    ctx->pc = 0x79af24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49716 << 16));
label_79af28:
    // 0x79af28: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x79af28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_79af2c:
    // 0x79af2c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79af2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_79af30:
    // 0x79af30: 0x240303ca  addiu       $v1, $zero, 0x3CA
    ctx->pc = 0x79af30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 970));
label_79af34:
    // 0x79af34: 0x3c01c25d  lui         $at, 0xC25D
    ctx->pc = 0x79af34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49757 << 16));
label_79af38:
    // 0x79af38: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x79af38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
label_79af3c:
    // 0x79af3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79af3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79af40:
    // 0x79af40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79af40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79af44:
    // 0x79af44: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x79af44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_79af48:
    // 0x79af48: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79af48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_79af4c:
    // 0x79af4c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x79af4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79af50:
    // 0x79af50: 0xae030560  sw          $v1, 0x560($s0)
    ctx->pc = 0x79af50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 3));
label_79af54:
    // 0x79af54: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x79af54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_79af58:
    // 0x79af58: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x79af58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_79af5c:
    // 0x79af5c: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x79af5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_79af60:
    // 0x79af60: 0xc07097c  jal         func_1C25F0
label_79af64:
    if (ctx->pc == 0x79AF64u) {
        ctx->pc = 0x79AF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF60u;
        // 0x79af64: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AF68u;
        goto label_79af68;
    }
    ctx->pc = 0x79AF60u;
    SET_GPR_U32(ctx, 31, 0x79AF68u);
    ctx->pc = 0x79AF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AF60u;
    // 0x79af64: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C25F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C25F0u, 0x79AF60u, 0x79AF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AF68u;
label_79af68:
    // 0x79af68: 0x3c014035  lui         $at, 0x4035
    ctx->pc = 0x79af68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16437 << 16));
label_79af6c:
    // 0x79af6c: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x79af6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_79af70:
    // 0x79af70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79af70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79af74:
    // 0x79af74: 0x26020110  addiu       $v0, $s0, 0x110
    ctx->pc = 0x79af74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_79af78:
    // 0x79af78: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x79af78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_79af7c:
    // 0x79af7c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79af7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_79af80:
    // 0x79af80: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x79af80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
label_79af84:
    // 0x79af84: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x79af84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_79af88:
    // 0x79af88: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x79af88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_79af8c:
    // 0x79af8c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x79af8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_79af90:
    // 0x79af90: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
label_79af94:
    if (ctx->pc == 0x79AF94u) {
        ctx->pc = 0x79AF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF90u;
        // 0x79af94: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AF98u;
        goto label_79af98;
    }
    ctx->pc = 0x79AF90u;
    {
        const bool branch_taken_0x79af90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x79AF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AF90u;
        // 0x79af94: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79af90) {
            ctx->pc = 0x79AFACu;
            goto label_79afac;
        }
    }
    ctx->pc = 0x79AF98u;
label_79af98:
    // 0x79af98: 0xe6010110  swc1        $f1, 0x110($s0)
    ctx->pc = 0x79af98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
label_79af9c:
    // 0x79af9c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x79af9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79afa0:
    // 0x79afa0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x79afa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_79afa4:
    // 0x79afa4: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x79afa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_79afa8:
    // 0x79afa8: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x79afa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_79afac:
    // 0x79afac: 0x26237a24  addiu       $v1, $s1, 0x7A24
    ctx->pc = 0x79afacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 31268));
label_79afb0:
    // 0x79afb0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x79afb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_79afb4:
    // 0x79afb4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x79afb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_79afb8:
    // 0x79afb8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x79afb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_79afbc:
    // 0x79afbc: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_79afc0:
    if (ctx->pc == 0x79AFC0u) {
        ctx->pc = 0x79AFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AFBCu;
        // 0x79afc0: 0x3c020200  lui         $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AFC4u;
        goto label_79afc4;
    }
    ctx->pc = 0x79AFBCu;
    {
        const bool branch_taken_0x79afbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AFBCu;
        // 0x79afc0: 0x3c020200  lui         $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79afbc) {
            ctx->pc = 0x79B0A0u;
            goto label_79b0a0;
        }
    }
    ctx->pc = 0x79AFC4u;
label_79afc4:
    // 0x79afc4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x79afc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_79afc8:
    // 0x79afc8: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
label_79afcc:
    if (ctx->pc == 0x79AFCCu) {
        ctx->pc = 0x79AFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AFC8u;
        // 0x79afcc: 0x26237a24  addiu       $v1, $s1, 0x7A24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 31268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AFD0u;
        goto label_79afd0;
    }
    ctx->pc = 0x79AFC8u;
    {
        const bool branch_taken_0x79afc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AFC8u;
        // 0x79afcc: 0x26237a24  addiu       $v1, $s1, 0x7A24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 31268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79afc8) {
            ctx->pc = 0x79B0A4u;
            goto label_79b0a4;
        }
    }
    ctx->pc = 0x79AFD0u;
label_79afd0:
    // 0x79afd0: 0x26c40d20  addiu       $a0, $s6, 0xD20
    ctx->pc = 0x79afd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 3360));
label_79afd4:
    // 0x79afd4: 0x240503cc  addiu       $a1, $zero, 0x3CC
    ctx->pc = 0x79afd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 972));
label_79afd8:
    // 0x79afd8: 0x26a64220  addiu       $a2, $s5, 0x4220
    ctx->pc = 0x79afd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 16928));
label_79afdc:
    // 0x79afdc: 0xc07fa28  jal         func_1FE8A0
label_79afe0:
    if (ctx->pc == 0x79AFE0u) {
        ctx->pc = 0x79AFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AFDCu;
        // 0x79afe0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AFE4u;
        goto label_79afe4;
    }
    ctx->pc = 0x79AFDCu;
    SET_GPR_U32(ctx, 31, 0x79AFE4u);
    ctx->pc = 0x79AFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AFDCu;
    // 0x79afe0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE8A0u, 0x79AFDCu, 0x79AFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AFE4u;
label_79afe4:
    // 0x79afe4: 0x240403da  addiu       $a0, $zero, 0x3DA
    ctx->pc = 0x79afe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 986));
label_79afe8:
    // 0x79afe8: 0xc0c3ea6  jal         func_30FA98
label_79afec:
    if (ctx->pc == 0x79AFECu) {
        ctx->pc = 0x79AFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AFE8u;
        // 0x79afec: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AFF0u;
        goto label_79aff0;
    }
    ctx->pc = 0x79AFE8u;
    SET_GPR_U32(ctx, 31, 0x79AFF0u);
    ctx->pc = 0x79AFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AFE8u;
    // 0x79afec: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x79AFE8u, 0x79AFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AFF0u;
label_79aff0:
    // 0x79aff0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79aff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79aff4:
    // 0x79aff4: 0x1200002b  beqz        $s0, . + 4 + (0x2B << 2)
label_79aff8:
    if (ctx->pc == 0x79AFF8u) {
        ctx->pc = 0x79AFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AFF4u;
        // 0x79aff8: 0x26237a24  addiu       $v1, $s1, 0x7A24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 31268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79AFFCu;
        goto label_79affc;
    }
    ctx->pc = 0x79AFF4u;
    {
        const bool branch_taken_0x79aff4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AFF4u;
        // 0x79aff8: 0x26237a24  addiu       $v1, $s1, 0x7A24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 31268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aff4) {
            ctx->pc = 0x79B0A4u;
            goto label_79b0a4;
        }
    }
    ctx->pc = 0x79AFFCu;
label_79affc:
    // 0x79affc: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x79affcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_79b000:
    // 0x79b000: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79b000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_79b004:
    // 0x79b004: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79b004u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_79b008:
    // 0x79b008: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x79b008u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_79b00c:
    // 0x79b00c: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x79b00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_79b010:
    // 0x79b010: 0x40f809  jalr        $v0
label_79b014:
    if (ctx->pc == 0x79B014u) {
        ctx->pc = 0x79B014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B010u;
        // 0x79b014: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B018u;
        goto label_79b018;
    }
    ctx->pc = 0x79B010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79B018u);
        ctx->pc = 0x79B014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B010u;
        // 0x79b014: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B010u, 0x79B018u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79B018u;
label_79b018:
    // 0x79b018: 0x3c01c23e  lui         $at, 0xC23E
    ctx->pc = 0x79b018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49726 << 16));
label_79b01c:
    // 0x79b01c: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x79b01cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
label_79b020:
    // 0x79b020: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79b020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_79b024:
    // 0x79b024: 0x240303cc  addiu       $v1, $zero, 0x3CC
    ctx->pc = 0x79b024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 972));
label_79b028:
    // 0x79b028: 0x3c01c260  lui         $at, 0xC260
    ctx->pc = 0x79b028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49760 << 16));
label_79b02c:
    // 0x79b02c: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x79b02cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
label_79b030:
    // 0x79b030: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b030u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79b034:
    // 0x79b034: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79b038:
    // 0x79b038: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x79b038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_79b03c:
    // 0x79b03c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79b03cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_79b040:
    // 0x79b040: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x79b040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79b044:
    // 0x79b044: 0xae030560  sw          $v1, 0x560($s0)
    ctx->pc = 0x79b044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 3));
label_79b048:
    // 0x79b048: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x79b048u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_79b04c:
    // 0x79b04c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x79b04cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_79b050:
    // 0x79b050: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x79b050u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_79b054:
    // 0x79b054: 0xc07097c  jal         func_1C25F0
label_79b058:
    if (ctx->pc == 0x79B058u) {
        ctx->pc = 0x79B058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B054u;
        // 0x79b058: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B05Cu;
        goto label_79b05c;
    }
    ctx->pc = 0x79B054u;
    SET_GPR_U32(ctx, 31, 0x79B05Cu);
    ctx->pc = 0x79B058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B054u;
    // 0x79b058: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C25F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C25F0u, 0x79B054u, 0x79B05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B05Cu;
label_79b05c:
    // 0x79b05c: 0x3c014035  lui         $at, 0x4035
    ctx->pc = 0x79b05cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16437 << 16));
label_79b060:
    // 0x79b060: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x79b060u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_79b064:
    // 0x79b064: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b064u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79b068:
    // 0x79b068: 0x26020110  addiu       $v0, $s0, 0x110
    ctx->pc = 0x79b068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_79b06c:
    // 0x79b06c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x79b06cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_79b070:
    // 0x79b070: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79b070u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_79b074:
    // 0x79b074: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x79b074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
label_79b078:
    // 0x79b078: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x79b078u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_79b07c:
    // 0x79b07c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x79b07cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_79b080:
    // 0x79b080: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x79b080u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_79b084:
    // 0x79b084: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
label_79b088:
    if (ctx->pc == 0x79B088u) {
        ctx->pc = 0x79B088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B084u;
        // 0x79b088: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B08Cu;
        goto label_79b08c;
    }
    ctx->pc = 0x79B084u;
    {
        const bool branch_taken_0x79b084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x79B088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B084u;
        // 0x79b088: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b084) {
            ctx->pc = 0x79B0A0u;
            goto label_79b0a0;
        }
    }
    ctx->pc = 0x79B08Cu;
label_79b08c:
    // 0x79b08c: 0xe6010110  swc1        $f1, 0x110($s0)
    ctx->pc = 0x79b08cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
label_79b090:
    // 0x79b090: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x79b090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79b094:
    // 0x79b094: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x79b094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_79b098:
    // 0x79b098: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x79b098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_79b09c:
    // 0x79b09c: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x79b09cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_79b0a0:
    // 0x79b0a0: 0x26237a24  addiu       $v1, $s1, 0x7A24
    ctx->pc = 0x79b0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 31268));
label_79b0a4:
    // 0x79b0a4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x79b0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_79b0a8:
    // 0x79b0a8: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x79b0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_79b0ac:
    // 0x79b0ac: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x79b0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_79b0b0:
    // 0x79b0b0: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_79b0b4:
    if (ctx->pc == 0x79B0B4u) {
        ctx->pc = 0x79B0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0B0u;
        // 0x79b0b4: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B0B8u;
        goto label_79b0b8;
    }
    ctx->pc = 0x79B0B0u;
    {
        const bool branch_taken_0x79b0b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0B0u;
        // 0x79b0b4: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b0b0) {
            ctx->pc = 0x79B194u;
            goto label_79b194;
        }
    }
    ctx->pc = 0x79B0B8u;
label_79b0b8:
    // 0x79b0b8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x79b0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_79b0bc:
    // 0x79b0bc: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
label_79b0c0:
    if (ctx->pc == 0x79B0C0u) {
        ctx->pc = 0x79B0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0BCu;
        // 0x79b0c0: 0x26227a24  addiu       $v0, $s1, 0x7A24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 31268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B0C4u;
        goto label_79b0c4;
    }
    ctx->pc = 0x79B0BCu;
    {
        const bool branch_taken_0x79b0bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0BCu;
        // 0x79b0c0: 0x26227a24  addiu       $v0, $s1, 0x7A24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 31268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b0bc) {
            ctx->pc = 0x79B198u;
            goto label_79b198;
        }
    }
    ctx->pc = 0x79B0C4u;
label_79b0c4:
    // 0x79b0c4: 0x26c40d20  addiu       $a0, $s6, 0xD20
    ctx->pc = 0x79b0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 3360));
label_79b0c8:
    // 0x79b0c8: 0x26a64220  addiu       $a2, $s5, 0x4220
    ctx->pc = 0x79b0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 16928));
label_79b0cc:
    // 0x79b0cc: 0x240503cd  addiu       $a1, $zero, 0x3CD
    ctx->pc = 0x79b0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 973));
label_79b0d0:
    // 0x79b0d0: 0xc07fa28  jal         func_1FE8A0
label_79b0d4:
    if (ctx->pc == 0x79B0D4u) {
        ctx->pc = 0x79B0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0D0u;
        // 0x79b0d4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B0D8u;
        goto label_79b0d8;
    }
    ctx->pc = 0x79B0D0u;
    SET_GPR_U32(ctx, 31, 0x79B0D8u);
    ctx->pc = 0x79B0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B0D0u;
    // 0x79b0d4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE8A0u, 0x79B0D0u, 0x79B0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B0D8u;
label_79b0d8:
    // 0x79b0d8: 0x240403dd  addiu       $a0, $zero, 0x3DD
    ctx->pc = 0x79b0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 989));
label_79b0dc:
    // 0x79b0dc: 0xc0c3ea6  jal         func_30FA98
label_79b0e0:
    if (ctx->pc == 0x79B0E0u) {
        ctx->pc = 0x79B0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0DCu;
        // 0x79b0e0: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B0E4u;
        goto label_79b0e4;
    }
    ctx->pc = 0x79B0DCu;
    SET_GPR_U32(ctx, 31, 0x79B0E4u);
    ctx->pc = 0x79B0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B0DCu;
    // 0x79b0e0: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x79B0DCu, 0x79B0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B0E4u;
label_79b0e4:
    // 0x79b0e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79b0e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79b0e8:
    // 0x79b0e8: 0x1200002b  beqz        $s0, . + 4 + (0x2B << 2)
label_79b0ec:
    if (ctx->pc == 0x79B0ECu) {
        ctx->pc = 0x79B0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0E8u;
        // 0x79b0ec: 0x26227a24  addiu       $v0, $s1, 0x7A24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 31268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B0F0u;
        goto label_79b0f0;
    }
    ctx->pc = 0x79B0E8u;
    {
        const bool branch_taken_0x79b0e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0E8u;
        // 0x79b0ec: 0x26227a24  addiu       $v0, $s1, 0x7A24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 31268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b0e8) {
            ctx->pc = 0x79B198u;
            goto label_79b198;
        }
    }
    ctx->pc = 0x79B0F0u;
label_79b0f0:
    // 0x79b0f0: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x79b0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_79b0f4:
    // 0x79b0f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79b0f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_79b0f8:
    // 0x79b0f8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79b0f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_79b0fc:
    // 0x79b0fc: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x79b0fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_79b100:
    // 0x79b100: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x79b100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_79b104:
    // 0x79b104: 0x40f809  jalr        $v0
label_79b108:
    if (ctx->pc == 0x79B108u) {
        ctx->pc = 0x79B108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B104u;
        // 0x79b108: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B10Cu;
        goto label_79b10c;
    }
    ctx->pc = 0x79B104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79B10Cu);
        ctx->pc = 0x79B108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B104u;
        // 0x79b108: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B104u, 0x79B10Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79B10Cu;
label_79b10c:
    // 0x79b10c: 0x3c01c24a  lui         $at, 0xC24A
    ctx->pc = 0x79b10cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49738 << 16));
label_79b110:
    // 0x79b110: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x79b110u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
label_79b114:
    // 0x79b114: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79b114u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_79b118:
    // 0x79b118: 0x240303cd  addiu       $v1, $zero, 0x3CD
    ctx->pc = 0x79b118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 973));
label_79b11c:
    // 0x79b11c: 0x3c01c264  lui         $at, 0xC264
    ctx->pc = 0x79b11cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49764 << 16));
label_79b120:
    // 0x79b120: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x79b120u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_79b124:
    // 0x79b124: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b124u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79b128:
    // 0x79b128: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79b12c:
    // 0x79b12c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x79b12cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_79b130:
    // 0x79b130: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79b130u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_79b134:
    // 0x79b134: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x79b134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79b138:
    // 0x79b138: 0xae030560  sw          $v1, 0x560($s0)
    ctx->pc = 0x79b138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 3));
label_79b13c:
    // 0x79b13c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x79b13cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_79b140:
    // 0x79b140: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x79b140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_79b144:
    // 0x79b144: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x79b144u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_79b148:
    // 0x79b148: 0xc07097c  jal         func_1C25F0
label_79b14c:
    if (ctx->pc == 0x79B14Cu) {
        ctx->pc = 0x79B14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B148u;
        // 0x79b14c: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B150u;
        goto label_79b150;
    }
    ctx->pc = 0x79B148u;
    SET_GPR_U32(ctx, 31, 0x79B150u);
    ctx->pc = 0x79B14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B148u;
    // 0x79b14c: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C25F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C25F0u, 0x79B148u, 0x79B150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B150u;
label_79b150:
    // 0x79b150: 0x3c014035  lui         $at, 0x4035
    ctx->pc = 0x79b150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16437 << 16));
label_79b154:
    // 0x79b154: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x79b154u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_79b158:
    // 0x79b158: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b158u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79b15c:
    // 0x79b15c: 0x26020110  addiu       $v0, $s0, 0x110
    ctx->pc = 0x79b15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_79b160:
    // 0x79b160: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x79b160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_79b164:
    // 0x79b164: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79b164u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_79b168:
    // 0x79b168: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x79b168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
label_79b16c:
    // 0x79b16c: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x79b16cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_79b170:
    // 0x79b170: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x79b170u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_79b174:
    // 0x79b174: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x79b174u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_79b178:
    // 0x79b178: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
label_79b17c:
    if (ctx->pc == 0x79B17Cu) {
        ctx->pc = 0x79B17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B178u;
        // 0x79b17c: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B180u;
        goto label_79b180;
    }
    ctx->pc = 0x79B178u;
    {
        const bool branch_taken_0x79b178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x79B17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B178u;
        // 0x79b17c: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b178) {
            ctx->pc = 0x79B194u;
            goto label_79b194;
        }
    }
    ctx->pc = 0x79B180u;
label_79b180:
    // 0x79b180: 0xe6010110  swc1        $f1, 0x110($s0)
    ctx->pc = 0x79b180u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
label_79b184:
    // 0x79b184: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x79b184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79b188:
    // 0x79b188: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x79b188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_79b18c:
    // 0x79b18c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x79b18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_79b190:
    // 0x79b190: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x79b190u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_79b194:
    // 0x79b194: 0x26227a24  addiu       $v0, $s1, 0x7A24
    ctx->pc = 0x79b194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 31268));
label_79b198:
    // 0x79b198: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x79b198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_79b19c:
    // 0x79b19c: 0x4610015  bgez        $v1, . + 4 + (0x15 << 2)
label_79b1a0:
    if (ctx->pc == 0x79B1A0u) {
        ctx->pc = 0x79B1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B19Cu;
        // 0x79b1a0: 0x2664ea60  addiu       $a0, $s3, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B1A4u;
        goto label_79b1a4;
    }
    ctx->pc = 0x79B19Cu;
    {
        const bool branch_taken_0x79b19c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x79B1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B19Cu;
        // 0x79b1a0: 0x2664ea60  addiu       $a0, $s3, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b19c) {
            ctx->pc = 0x79B1F4u;
            goto label_79b1f4;
        }
    }
    ctx->pc = 0x79B1A4u;
label_79b1a4:
    // 0x79b1a4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x79b1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_79b1a8:
    // 0x79b1a8: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x79b1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_79b1ac:
    // 0x79b1ac: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x79b1acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
label_79b1b0:
    // 0x79b1b0: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x79b1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
label_79b1b4:
    // 0x79b1b4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x79b1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_79b1b8:
    // 0x79b1b8: 0xc0a54b4  jal         func_2952D0
label_79b1bc:
    if (ctx->pc == 0x79B1BCu) {
        ctx->pc = 0x79B1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B1B8u;
        // 0x79b1bc: 0x2670ea60  addiu       $s0, $s3, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B1C0u;
        goto label_79b1c0;
    }
    ctx->pc = 0x79B1B8u;
    SET_GPR_U32(ctx, 31, 0x79B1C0u);
    ctx->pc = 0x79B1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B1B8u;
    // 0x79b1bc: 0x2670ea60  addiu       $s0, $s3, -0x15A0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79B1B8u, 0x79B1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B1C0u;
label_79b1c0:
    // 0x79b1c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79b1c4:
    // 0x79b1c4: 0xc0b0a54  jal         func_2C2950
label_79b1c8:
    if (ctx->pc == 0x79B1C8u) {
        ctx->pc = 0x79B1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B1C4u;
        // 0x79b1c8: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B1CCu;
        goto label_79b1cc;
    }
    ctx->pc = 0x79B1C4u;
    SET_GPR_U32(ctx, 31, 0x79B1CCu);
    ctx->pc = 0x79B1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B1C4u;
    // 0x79b1c8: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x79B1C4u, 0x79B1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B1CCu;
label_79b1cc:
    // 0x79b1cc: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x79b1ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_79b1d0:
    // 0x79b1d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79b1d4:
    // 0x79b1d4: 0x24e7c428  addiu       $a3, $a3, -0x3BD8
    ctx->pc = 0x79b1d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951976));
label_79b1d8:
    // 0x79b1d8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x79b1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_79b1dc:
    // 0x79b1dc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x79b1dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79b1e0:
    // 0x79b1e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79b1e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79b1e4:
    // 0x79b1e4: 0xc0b09e4  jal         func_2C2790
label_79b1e8:
    if (ctx->pc == 0x79B1E8u) {
        ctx->pc = 0x79B1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B1E4u;
        // 0x79b1e8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B1ECu;
        goto label_79b1ec;
    }
    ctx->pc = 0x79B1E4u;
    SET_GPR_U32(ctx, 31, 0x79B1ECu);
    ctx->pc = 0x79B1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B1E4u;
    // 0x79b1e8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x79B1E4u, 0x79B1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B1ECu;
label_79b1ec:
    // 0x79b1ec: 0x10000004  b           . + 4 + (0x4 << 2)
label_79b1f0:
    if (ctx->pc == 0x79B1F0u) {
        ctx->pc = 0x79B1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B1ECu;
        // 0x79b1f0: 0x26909b70  addiu       $s0, $s4, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B1F4u;
        goto label_79b1f4;
    }
    ctx->pc = 0x79B1ECu;
    {
        const bool branch_taken_0x79b1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B1ECu;
        // 0x79b1f0: 0x26909b70  addiu       $s0, $s4, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b1ec) {
            ctx->pc = 0x79B200u;
            goto label_79b200;
        }
    }
    ctx->pc = 0x79B1F4u;
label_79b1f4:
    // 0x79b1f4: 0xc0b0a7e  jal         func_2C29F8
label_79b1f8:
    if (ctx->pc == 0x79B1F8u) {
        ctx->pc = 0x79B1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B1F4u;
        // 0x79b1f8: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B1FCu;
        goto label_79b1fc;
    }
    ctx->pc = 0x79B1F4u;
    SET_GPR_U32(ctx, 31, 0x79B1FCu);
    ctx->pc = 0x79B1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B1F4u;
    // 0x79b1f8: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x79B1F4u, 0x79B1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B1FCu;
label_79b1fc:
    // 0x79b1fc: 0x26909b70  addiu       $s0, $s4, -0x6490
    ctx->pc = 0x79b1fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941552));
label_79b200:
    // 0x79b200: 0xc07e9b0  jal         func_1FA6C0
label_79b204:
    if (ctx->pc == 0x79B204u) {
        ctx->pc = 0x79B204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B200u;
        // 0x79b204: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B208u;
        goto label_79b208;
    }
    ctx->pc = 0x79B200u;
    SET_GPR_U32(ctx, 31, 0x79B208u);
    ctx->pc = 0x79B204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B200u;
    // 0x79b204: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x79B200u, 0x79B208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B208u;
label_79b208:
    // 0x79b208: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_79b20c:
    if (ctx->pc == 0x79B20Cu) {
        ctx->pc = 0x79B20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B208u;
        // 0x79b20c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B210u;
        goto label_79b210;
    }
    ctx->pc = 0x79B208u;
    {
        const bool branch_taken_0x79b208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b208) {
            ctx->pc = 0x79B20Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B208u;
            // 0x79b20c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B230u;
            goto label_79b230;
        }
    }
    ctx->pc = 0x79B210u;
label_79b210:
    // 0x79b210: 0xc07e99e  jal         func_1FA678
label_79b214:
    if (ctx->pc == 0x79B214u) {
        ctx->pc = 0x79B214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B210u;
        // 0x79b214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B218u;
        goto label_79b218;
    }
    ctx->pc = 0x79B210u;
    SET_GPR_U32(ctx, 31, 0x79B218u);
    ctx->pc = 0x79B214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B210u;
    // 0x79b214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA678u, 0x79B210u, 0x79B218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B218u;
label_79b218:
    // 0x79b218: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x79b218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_79b21c:
    // 0x79b21c: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_79b220:
    if (ctx->pc == 0x79B220u) {
        ctx->pc = 0x79B220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B21Cu;
        // 0x79b220: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B224u;
        goto label_79b224;
    }
    ctx->pc = 0x79B21Cu;
    {
        const bool branch_taken_0x79b21c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x79B220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B21Cu;
        // 0x79b220: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b21c) {
            ctx->pc = 0x79B230u;
            goto label_79b230;
        }
    }
    ctx->pc = 0x79B224u;
label_79b224:
    // 0x79b224: 0xc1e7172  jal         func_79C5C8
label_79b228:
    if (ctx->pc == 0x79B228u) {
        ctx->pc = 0x79B22Cu;
        goto label_79b22c;
    }
    ctx->pc = 0x79B224u;
    SET_GPR_U32(ctx, 31, 0x79B22Cu);
    ctx->pc = 0x79C5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79C5C8u, 0x79B224u, 0x79B22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B22Cu;
label_79b22c:
    // 0x79b22c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x79b22cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_79b230:
    // 0x79b230: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x79b230u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_79b234:
    // 0x79b234: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x79b234u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_79b238:
    // 0x79b238: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x79b238u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_79b23c:
    // 0x79b23c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x79b23cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_79b240:
    // 0x79b240: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x79b240u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_79b244:
    // 0x79b244: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x79b244u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_79b248:
    // 0x79b248: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79b248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_79b24c:
    // 0x79b24c: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x79b24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_79b250:
    // 0x79b250: 0x3e00008  jr          $ra
label_79b254:
    if (ctx->pc == 0x79B254u) {
        ctx->pc = 0x79B254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B250u;
        // 0x79b254: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B258u;
        goto label_fallthrough_0x79b250;
    }
    ctx->pc = 0x79B250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B250u;
        // 0x79b254: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x79b250:
    ctx->pc = 0x79B258u;
}
} // namespace gh_r000
