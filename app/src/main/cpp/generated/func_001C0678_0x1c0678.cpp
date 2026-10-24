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

// Function: func_001C0678
// Address: 0x1c0678 - 0x1c20c8
void func_001C0678_0x1c0678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001C0678_0x1c0678");
#endif

    switch (ctx->pc) {
        case 0x1c0678u: goto label_1c0678;
        case 0x1c067cu: goto label_1c067c;
        case 0x1c0680u: goto label_1c0680;
        case 0x1c0684u: goto label_1c0684;
        case 0x1c0688u: goto label_1c0688;
        case 0x1c068cu: goto label_1c068c;
        case 0x1c0690u: goto label_1c0690;
        case 0x1c0694u: goto label_1c0694;
        case 0x1c0698u: goto label_1c0698;
        case 0x1c069cu: goto label_1c069c;
        case 0x1c06a0u: goto label_1c06a0;
        case 0x1c06a4u: goto label_1c06a4;
        case 0x1c06a8u: goto label_1c06a8;
        case 0x1c06acu: goto label_1c06ac;
        case 0x1c06b0u: goto label_1c06b0;
        case 0x1c06b4u: goto label_1c06b4;
        case 0x1c06b8u: goto label_1c06b8;
        case 0x1c06bcu: goto label_1c06bc;
        case 0x1c06c0u: goto label_1c06c0;
        case 0x1c06c4u: goto label_1c06c4;
        case 0x1c06c8u: goto label_1c06c8;
        case 0x1c06ccu: goto label_1c06cc;
        case 0x1c06d0u: goto label_1c06d0;
        case 0x1c06d4u: goto label_1c06d4;
        case 0x1c06d8u: goto label_1c06d8;
        case 0x1c06dcu: goto label_1c06dc;
        case 0x1c06e0u: goto label_1c06e0;
        case 0x1c06e4u: goto label_1c06e4;
        case 0x1c06e8u: goto label_1c06e8;
        case 0x1c06ecu: goto label_1c06ec;
        case 0x1c06f0u: goto label_1c06f0;
        case 0x1c06f4u: goto label_1c06f4;
        case 0x1c06f8u: goto label_1c06f8;
        case 0x1c06fcu: goto label_1c06fc;
        case 0x1c0700u: goto label_1c0700;
        case 0x1c0704u: goto label_1c0704;
        case 0x1c0708u: goto label_1c0708;
        case 0x1c070cu: goto label_1c070c;
        case 0x1c0710u: goto label_1c0710;
        case 0x1c0714u: goto label_1c0714;
        case 0x1c0718u: goto label_1c0718;
        case 0x1c071cu: goto label_1c071c;
        case 0x1c0720u: goto label_1c0720;
        case 0x1c0724u: goto label_1c0724;
        case 0x1c0728u: goto label_1c0728;
        case 0x1c072cu: goto label_1c072c;
        case 0x1c0730u: goto label_1c0730;
        case 0x1c0734u: goto label_1c0734;
        case 0x1c0738u: goto label_1c0738;
        case 0x1c073cu: goto label_1c073c;
        case 0x1c0740u: goto label_1c0740;
        case 0x1c0744u: goto label_1c0744;
        case 0x1c0748u: goto label_1c0748;
        case 0x1c074cu: goto label_1c074c;
        case 0x1c0750u: goto label_1c0750;
        case 0x1c0754u: goto label_1c0754;
        case 0x1c0758u: goto label_1c0758;
        case 0x1c075cu: goto label_1c075c;
        case 0x1c0760u: goto label_1c0760;
        case 0x1c0764u: goto label_1c0764;
        case 0x1c0768u: goto label_1c0768;
        case 0x1c076cu: goto label_1c076c;
        case 0x1c0770u: goto label_1c0770;
        case 0x1c0774u: goto label_1c0774;
        case 0x1c0778u: goto label_1c0778;
        case 0x1c077cu: goto label_1c077c;
        case 0x1c0780u: goto label_1c0780;
        case 0x1c0784u: goto label_1c0784;
        case 0x1c0788u: goto label_1c0788;
        case 0x1c078cu: goto label_1c078c;
        case 0x1c0790u: goto label_1c0790;
        case 0x1c0794u: goto label_1c0794;
        case 0x1c0798u: goto label_1c0798;
        case 0x1c079cu: goto label_1c079c;
        case 0x1c07a0u: goto label_1c07a0;
        case 0x1c07a4u: goto label_1c07a4;
        case 0x1c07a8u: goto label_1c07a8;
        case 0x1c07acu: goto label_1c07ac;
        case 0x1c07b0u: goto label_1c07b0;
        case 0x1c07b4u: goto label_1c07b4;
        case 0x1c07b8u: goto label_1c07b8;
        case 0x1c07bcu: goto label_1c07bc;
        case 0x1c07c0u: goto label_1c07c0;
        case 0x1c07c4u: goto label_1c07c4;
        case 0x1c07c8u: goto label_1c07c8;
        case 0x1c07ccu: goto label_1c07cc;
        case 0x1c07d0u: goto label_1c07d0;
        case 0x1c07d4u: goto label_1c07d4;
        case 0x1c07d8u: goto label_1c07d8;
        case 0x1c07dcu: goto label_1c07dc;
        case 0x1c07e0u: goto label_1c07e0;
        case 0x1c07e4u: goto label_1c07e4;
        case 0x1c07e8u: goto label_1c07e8;
        case 0x1c07ecu: goto label_1c07ec;
        case 0x1c07f0u: goto label_1c07f0;
        case 0x1c07f4u: goto label_1c07f4;
        case 0x1c07f8u: goto label_1c07f8;
        case 0x1c07fcu: goto label_1c07fc;
        case 0x1c0800u: goto label_1c0800;
        case 0x1c0804u: goto label_1c0804;
        case 0x1c0808u: goto label_1c0808;
        case 0x1c080cu: goto label_1c080c;
        case 0x1c0810u: goto label_1c0810;
        case 0x1c0814u: goto label_1c0814;
        case 0x1c0818u: goto label_1c0818;
        case 0x1c081cu: goto label_1c081c;
        case 0x1c0820u: goto label_1c0820;
        case 0x1c0824u: goto label_1c0824;
        case 0x1c0828u: goto label_1c0828;
        case 0x1c082cu: goto label_1c082c;
        case 0x1c0830u: goto label_1c0830;
        case 0x1c0834u: goto label_1c0834;
        case 0x1c0838u: goto label_1c0838;
        case 0x1c083cu: goto label_1c083c;
        case 0x1c0840u: goto label_1c0840;
        case 0x1c0844u: goto label_1c0844;
        case 0x1c0848u: goto label_1c0848;
        case 0x1c084cu: goto label_1c084c;
        case 0x1c0850u: goto label_1c0850;
        case 0x1c0854u: goto label_1c0854;
        case 0x1c0858u: goto label_1c0858;
        case 0x1c085cu: goto label_1c085c;
        case 0x1c0860u: goto label_1c0860;
        case 0x1c0864u: goto label_1c0864;
        case 0x1c0868u: goto label_1c0868;
        case 0x1c086cu: goto label_1c086c;
        case 0x1c0870u: goto label_1c0870;
        case 0x1c0874u: goto label_1c0874;
        case 0x1c0878u: goto label_1c0878;
        case 0x1c087cu: goto label_1c087c;
        case 0x1c0880u: goto label_1c0880;
        case 0x1c0884u: goto label_1c0884;
        case 0x1c0888u: goto label_1c0888;
        case 0x1c088cu: goto label_1c088c;
        case 0x1c0890u: goto label_1c0890;
        case 0x1c0894u: goto label_1c0894;
        case 0x1c0898u: goto label_1c0898;
        case 0x1c089cu: goto label_1c089c;
        case 0x1c08a0u: goto label_1c08a0;
        case 0x1c08a4u: goto label_1c08a4;
        case 0x1c08a8u: goto label_1c08a8;
        case 0x1c08acu: goto label_1c08ac;
        case 0x1c08b0u: goto label_1c08b0;
        case 0x1c08b4u: goto label_1c08b4;
        case 0x1c08b8u: goto label_1c08b8;
        case 0x1c08bcu: goto label_1c08bc;
        case 0x1c08c0u: goto label_1c08c0;
        case 0x1c08c4u: goto label_1c08c4;
        case 0x1c08c8u: goto label_1c08c8;
        case 0x1c08ccu: goto label_1c08cc;
        case 0x1c08d0u: goto label_1c08d0;
        case 0x1c08d4u: goto label_1c08d4;
        case 0x1c08d8u: goto label_1c08d8;
        case 0x1c08dcu: goto label_1c08dc;
        case 0x1c08e0u: goto label_1c08e0;
        case 0x1c08e4u: goto label_1c08e4;
        case 0x1c08e8u: goto label_1c08e8;
        case 0x1c08ecu: goto label_1c08ec;
        case 0x1c08f0u: goto label_1c08f0;
        case 0x1c08f4u: goto label_1c08f4;
        case 0x1c08f8u: goto label_1c08f8;
        case 0x1c08fcu: goto label_1c08fc;
        case 0x1c0900u: goto label_1c0900;
        case 0x1c0904u: goto label_1c0904;
        case 0x1c0908u: goto label_1c0908;
        case 0x1c090cu: goto label_1c090c;
        case 0x1c0910u: goto label_1c0910;
        case 0x1c0914u: goto label_1c0914;
        case 0x1c0918u: goto label_1c0918;
        case 0x1c091cu: goto label_1c091c;
        case 0x1c0920u: goto label_1c0920;
        case 0x1c0924u: goto label_1c0924;
        case 0x1c0928u: goto label_1c0928;
        case 0x1c092cu: goto label_1c092c;
        case 0x1c0930u: goto label_1c0930;
        case 0x1c0934u: goto label_1c0934;
        case 0x1c0938u: goto label_1c0938;
        case 0x1c093cu: goto label_1c093c;
        case 0x1c0940u: goto label_1c0940;
        case 0x1c0944u: goto label_1c0944;
        case 0x1c0948u: goto label_1c0948;
        case 0x1c094cu: goto label_1c094c;
        case 0x1c0950u: goto label_1c0950;
        case 0x1c0954u: goto label_1c0954;
        case 0x1c0958u: goto label_1c0958;
        case 0x1c095cu: goto label_1c095c;
        case 0x1c0960u: goto label_1c0960;
        case 0x1c0964u: goto label_1c0964;
        case 0x1c0968u: goto label_1c0968;
        case 0x1c096cu: goto label_1c096c;
        case 0x1c0970u: goto label_1c0970;
        case 0x1c0974u: goto label_1c0974;
        case 0x1c0978u: goto label_1c0978;
        case 0x1c097cu: goto label_1c097c;
        case 0x1c0980u: goto label_1c0980;
        case 0x1c0984u: goto label_1c0984;
        case 0x1c0988u: goto label_1c0988;
        case 0x1c098cu: goto label_1c098c;
        case 0x1c0990u: goto label_1c0990;
        case 0x1c0994u: goto label_1c0994;
        case 0x1c0998u: goto label_1c0998;
        case 0x1c099cu: goto label_1c099c;
        case 0x1c09a0u: goto label_1c09a0;
        case 0x1c09a4u: goto label_1c09a4;
        case 0x1c09a8u: goto label_1c09a8;
        case 0x1c09acu: goto label_1c09ac;
        case 0x1c09b0u: goto label_1c09b0;
        case 0x1c09b4u: goto label_1c09b4;
        case 0x1c09b8u: goto label_1c09b8;
        case 0x1c09bcu: goto label_1c09bc;
        case 0x1c09c0u: goto label_1c09c0;
        case 0x1c09c4u: goto label_1c09c4;
        case 0x1c09c8u: goto label_1c09c8;
        case 0x1c09ccu: goto label_1c09cc;
        case 0x1c09d0u: goto label_1c09d0;
        case 0x1c09d4u: goto label_1c09d4;
        case 0x1c09d8u: goto label_1c09d8;
        case 0x1c09dcu: goto label_1c09dc;
        case 0x1c09e0u: goto label_1c09e0;
        case 0x1c09e4u: goto label_1c09e4;
        case 0x1c09e8u: goto label_1c09e8;
        case 0x1c09ecu: goto label_1c09ec;
        case 0x1c09f0u: goto label_1c09f0;
        case 0x1c09f4u: goto label_1c09f4;
        case 0x1c09f8u: goto label_1c09f8;
        case 0x1c09fcu: goto label_1c09fc;
        case 0x1c0a00u: goto label_1c0a00;
        case 0x1c0a04u: goto label_1c0a04;
        case 0x1c0a08u: goto label_1c0a08;
        case 0x1c0a0cu: goto label_1c0a0c;
        case 0x1c0a10u: goto label_1c0a10;
        case 0x1c0a14u: goto label_1c0a14;
        case 0x1c0a18u: goto label_1c0a18;
        case 0x1c0a1cu: goto label_1c0a1c;
        case 0x1c0a20u: goto label_1c0a20;
        case 0x1c0a24u: goto label_1c0a24;
        case 0x1c0a28u: goto label_1c0a28;
        case 0x1c0a2cu: goto label_1c0a2c;
        case 0x1c0a30u: goto label_1c0a30;
        case 0x1c0a34u: goto label_1c0a34;
        case 0x1c0a38u: goto label_1c0a38;
        case 0x1c0a3cu: goto label_1c0a3c;
        case 0x1c0a40u: goto label_1c0a40;
        case 0x1c0a44u: goto label_1c0a44;
        case 0x1c0a48u: goto label_1c0a48;
        case 0x1c0a4cu: goto label_1c0a4c;
        case 0x1c0a50u: goto label_1c0a50;
        case 0x1c0a54u: goto label_1c0a54;
        case 0x1c0a58u: goto label_1c0a58;
        case 0x1c0a5cu: goto label_1c0a5c;
        case 0x1c0a60u: goto label_1c0a60;
        case 0x1c0a64u: goto label_1c0a64;
        case 0x1c0a68u: goto label_1c0a68;
        case 0x1c0a6cu: goto label_1c0a6c;
        case 0x1c0a70u: goto label_1c0a70;
        case 0x1c0a74u: goto label_1c0a74;
        case 0x1c0a78u: goto label_1c0a78;
        case 0x1c0a7cu: goto label_1c0a7c;
        case 0x1c0a80u: goto label_1c0a80;
        case 0x1c0a84u: goto label_1c0a84;
        case 0x1c0a88u: goto label_1c0a88;
        case 0x1c0a8cu: goto label_1c0a8c;
        case 0x1c0a90u: goto label_1c0a90;
        case 0x1c0a94u: goto label_1c0a94;
        case 0x1c0a98u: goto label_1c0a98;
        case 0x1c0a9cu: goto label_1c0a9c;
        case 0x1c0aa0u: goto label_1c0aa0;
        case 0x1c0aa4u: goto label_1c0aa4;
        case 0x1c0aa8u: goto label_1c0aa8;
        case 0x1c0aacu: goto label_1c0aac;
        case 0x1c0ab0u: goto label_1c0ab0;
        case 0x1c0ab4u: goto label_1c0ab4;
        case 0x1c0ab8u: goto label_1c0ab8;
        case 0x1c0abcu: goto label_1c0abc;
        case 0x1c0ac0u: goto label_1c0ac0;
        case 0x1c0ac4u: goto label_1c0ac4;
        case 0x1c0ac8u: goto label_1c0ac8;
        case 0x1c0accu: goto label_1c0acc;
        case 0x1c0ad0u: goto label_1c0ad0;
        case 0x1c0ad4u: goto label_1c0ad4;
        case 0x1c0ad8u: goto label_1c0ad8;
        case 0x1c0adcu: goto label_1c0adc;
        case 0x1c0ae0u: goto label_1c0ae0;
        case 0x1c0ae4u: goto label_1c0ae4;
        case 0x1c0ae8u: goto label_1c0ae8;
        case 0x1c0aecu: goto label_1c0aec;
        case 0x1c0af0u: goto label_1c0af0;
        case 0x1c0af4u: goto label_1c0af4;
        case 0x1c0af8u: goto label_1c0af8;
        case 0x1c0afcu: goto label_1c0afc;
        case 0x1c0b00u: goto label_1c0b00;
        case 0x1c0b04u: goto label_1c0b04;
        case 0x1c0b08u: goto label_1c0b08;
        case 0x1c0b0cu: goto label_1c0b0c;
        case 0x1c0b10u: goto label_1c0b10;
        case 0x1c0b14u: goto label_1c0b14;
        case 0x1c0b18u: goto label_1c0b18;
        case 0x1c0b1cu: goto label_1c0b1c;
        case 0x1c0b20u: goto label_1c0b20;
        case 0x1c0b24u: goto label_1c0b24;
        case 0x1c0b28u: goto label_1c0b28;
        case 0x1c0b2cu: goto label_1c0b2c;
        case 0x1c0b30u: goto label_1c0b30;
        case 0x1c0b34u: goto label_1c0b34;
        case 0x1c0b38u: goto label_1c0b38;
        case 0x1c0b3cu: goto label_1c0b3c;
        case 0x1c0b40u: goto label_1c0b40;
        case 0x1c0b44u: goto label_1c0b44;
        case 0x1c0b48u: goto label_1c0b48;
        case 0x1c0b4cu: goto label_1c0b4c;
        case 0x1c0b50u: goto label_1c0b50;
        case 0x1c0b54u: goto label_1c0b54;
        case 0x1c0b58u: goto label_1c0b58;
        case 0x1c0b5cu: goto label_1c0b5c;
        case 0x1c0b60u: goto label_1c0b60;
        case 0x1c0b64u: goto label_1c0b64;
        case 0x1c0b68u: goto label_1c0b68;
        case 0x1c0b6cu: goto label_1c0b6c;
        case 0x1c0b70u: goto label_1c0b70;
        case 0x1c0b74u: goto label_1c0b74;
        case 0x1c0b78u: goto label_1c0b78;
        case 0x1c0b7cu: goto label_1c0b7c;
        case 0x1c0b80u: goto label_1c0b80;
        case 0x1c0b84u: goto label_1c0b84;
        case 0x1c0b88u: goto label_1c0b88;
        case 0x1c0b8cu: goto label_1c0b8c;
        case 0x1c0b90u: goto label_1c0b90;
        case 0x1c0b94u: goto label_1c0b94;
        case 0x1c0b98u: goto label_1c0b98;
        case 0x1c0b9cu: goto label_1c0b9c;
        case 0x1c0ba0u: goto label_1c0ba0;
        case 0x1c0ba4u: goto label_1c0ba4;
        case 0x1c0ba8u: goto label_1c0ba8;
        case 0x1c0bacu: goto label_1c0bac;
        case 0x1c0bb0u: goto label_1c0bb0;
        case 0x1c0bb4u: goto label_1c0bb4;
        case 0x1c0bb8u: goto label_1c0bb8;
        case 0x1c0bbcu: goto label_1c0bbc;
        case 0x1c0bc0u: goto label_1c0bc0;
        case 0x1c0bc4u: goto label_1c0bc4;
        case 0x1c0bc8u: goto label_1c0bc8;
        case 0x1c0bccu: goto label_1c0bcc;
        case 0x1c0bd0u: goto label_1c0bd0;
        case 0x1c0bd4u: goto label_1c0bd4;
        case 0x1c0bd8u: goto label_1c0bd8;
        case 0x1c0bdcu: goto label_1c0bdc;
        case 0x1c0be0u: goto label_1c0be0;
        case 0x1c0be4u: goto label_1c0be4;
        case 0x1c0be8u: goto label_1c0be8;
        case 0x1c0becu: goto label_1c0bec;
        case 0x1c0bf0u: goto label_1c0bf0;
        case 0x1c0bf4u: goto label_1c0bf4;
        case 0x1c0bf8u: goto label_1c0bf8;
        case 0x1c0bfcu: goto label_1c0bfc;
        case 0x1c0c00u: goto label_1c0c00;
        case 0x1c0c04u: goto label_1c0c04;
        case 0x1c0c08u: goto label_1c0c08;
        case 0x1c0c0cu: goto label_1c0c0c;
        case 0x1c0c10u: goto label_1c0c10;
        case 0x1c0c14u: goto label_1c0c14;
        case 0x1c0c18u: goto label_1c0c18;
        case 0x1c0c1cu: goto label_1c0c1c;
        case 0x1c0c20u: goto label_1c0c20;
        case 0x1c0c24u: goto label_1c0c24;
        case 0x1c0c28u: goto label_1c0c28;
        case 0x1c0c2cu: goto label_1c0c2c;
        case 0x1c0c30u: goto label_1c0c30;
        case 0x1c0c34u: goto label_1c0c34;
        case 0x1c0c38u: goto label_1c0c38;
        case 0x1c0c3cu: goto label_1c0c3c;
        case 0x1c0c40u: goto label_1c0c40;
        case 0x1c0c44u: goto label_1c0c44;
        case 0x1c0c48u: goto label_1c0c48;
        case 0x1c0c4cu: goto label_1c0c4c;
        case 0x1c0c50u: goto label_1c0c50;
        case 0x1c0c54u: goto label_1c0c54;
        case 0x1c0c58u: goto label_1c0c58;
        case 0x1c0c5cu: goto label_1c0c5c;
        case 0x1c0c60u: goto label_1c0c60;
        case 0x1c0c64u: goto label_1c0c64;
        case 0x1c0c68u: goto label_1c0c68;
        case 0x1c0c6cu: goto label_1c0c6c;
        case 0x1c0c70u: goto label_1c0c70;
        case 0x1c0c74u: goto label_1c0c74;
        case 0x1c0c78u: goto label_1c0c78;
        case 0x1c0c7cu: goto label_1c0c7c;
        case 0x1c0c80u: goto label_1c0c80;
        case 0x1c0c84u: goto label_1c0c84;
        case 0x1c0c88u: goto label_1c0c88;
        case 0x1c0c8cu: goto label_1c0c8c;
        case 0x1c0c90u: goto label_1c0c90;
        case 0x1c0c94u: goto label_1c0c94;
        case 0x1c0c98u: goto label_1c0c98;
        case 0x1c0c9cu: goto label_1c0c9c;
        case 0x1c0ca0u: goto label_1c0ca0;
        case 0x1c0ca4u: goto label_1c0ca4;
        case 0x1c0ca8u: goto label_1c0ca8;
        case 0x1c0cacu: goto label_1c0cac;
        case 0x1c0cb0u: goto label_1c0cb0;
        case 0x1c0cb4u: goto label_1c0cb4;
        case 0x1c0cb8u: goto label_1c0cb8;
        case 0x1c0cbcu: goto label_1c0cbc;
        case 0x1c0cc0u: goto label_1c0cc0;
        case 0x1c0cc4u: goto label_1c0cc4;
        case 0x1c0cc8u: goto label_1c0cc8;
        case 0x1c0cccu: goto label_1c0ccc;
        case 0x1c0cd0u: goto label_1c0cd0;
        case 0x1c0cd4u: goto label_1c0cd4;
        case 0x1c0cd8u: goto label_1c0cd8;
        case 0x1c0cdcu: goto label_1c0cdc;
        case 0x1c0ce0u: goto label_1c0ce0;
        case 0x1c0ce4u: goto label_1c0ce4;
        case 0x1c0ce8u: goto label_1c0ce8;
        case 0x1c0cecu: goto label_1c0cec;
        case 0x1c0cf0u: goto label_1c0cf0;
        case 0x1c0cf4u: goto label_1c0cf4;
        case 0x1c0cf8u: goto label_1c0cf8;
        case 0x1c0cfcu: goto label_1c0cfc;
        case 0x1c0d00u: goto label_1c0d00;
        case 0x1c0d04u: goto label_1c0d04;
        case 0x1c0d08u: goto label_1c0d08;
        case 0x1c0d0cu: goto label_1c0d0c;
        case 0x1c0d10u: goto label_1c0d10;
        case 0x1c0d14u: goto label_1c0d14;
        case 0x1c0d18u: goto label_1c0d18;
        case 0x1c0d1cu: goto label_1c0d1c;
        case 0x1c0d20u: goto label_1c0d20;
        case 0x1c0d24u: goto label_1c0d24;
        case 0x1c0d28u: goto label_1c0d28;
        case 0x1c0d2cu: goto label_1c0d2c;
        case 0x1c0d30u: goto label_1c0d30;
        case 0x1c0d34u: goto label_1c0d34;
        case 0x1c0d38u: goto label_1c0d38;
        case 0x1c0d3cu: goto label_1c0d3c;
        case 0x1c0d40u: goto label_1c0d40;
        case 0x1c0d44u: goto label_1c0d44;
        case 0x1c0d48u: goto label_1c0d48;
        case 0x1c0d4cu: goto label_1c0d4c;
        case 0x1c0d50u: goto label_1c0d50;
        case 0x1c0d54u: goto label_1c0d54;
        case 0x1c0d58u: goto label_1c0d58;
        case 0x1c0d5cu: goto label_1c0d5c;
        case 0x1c0d60u: goto label_1c0d60;
        case 0x1c0d64u: goto label_1c0d64;
        case 0x1c0d68u: goto label_1c0d68;
        case 0x1c0d6cu: goto label_1c0d6c;
        case 0x1c0d70u: goto label_1c0d70;
        case 0x1c0d74u: goto label_1c0d74;
        case 0x1c0d78u: goto label_1c0d78;
        case 0x1c0d7cu: goto label_1c0d7c;
        case 0x1c0d80u: goto label_1c0d80;
        case 0x1c0d84u: goto label_1c0d84;
        case 0x1c0d88u: goto label_1c0d88;
        case 0x1c0d8cu: goto label_1c0d8c;
        case 0x1c0d90u: goto label_1c0d90;
        case 0x1c0d94u: goto label_1c0d94;
        case 0x1c0d98u: goto label_1c0d98;
        case 0x1c0d9cu: goto label_1c0d9c;
        case 0x1c0da0u: goto label_1c0da0;
        case 0x1c0da4u: goto label_1c0da4;
        case 0x1c0da8u: goto label_1c0da8;
        case 0x1c0dacu: goto label_1c0dac;
        case 0x1c0db0u: goto label_1c0db0;
        case 0x1c0db4u: goto label_1c0db4;
        case 0x1c0db8u: goto label_1c0db8;
        case 0x1c0dbcu: goto label_1c0dbc;
        case 0x1c0dc0u: goto label_1c0dc0;
        case 0x1c0dc4u: goto label_1c0dc4;
        case 0x1c0dc8u: goto label_1c0dc8;
        case 0x1c0dccu: goto label_1c0dcc;
        case 0x1c0dd0u: goto label_1c0dd0;
        case 0x1c0dd4u: goto label_1c0dd4;
        case 0x1c0dd8u: goto label_1c0dd8;
        case 0x1c0ddcu: goto label_1c0ddc;
        case 0x1c0de0u: goto label_1c0de0;
        case 0x1c0de4u: goto label_1c0de4;
        case 0x1c0de8u: goto label_1c0de8;
        case 0x1c0decu: goto label_1c0dec;
        case 0x1c0df0u: goto label_1c0df0;
        case 0x1c0df4u: goto label_1c0df4;
        case 0x1c0df8u: goto label_1c0df8;
        case 0x1c0dfcu: goto label_1c0dfc;
        case 0x1c0e00u: goto label_1c0e00;
        case 0x1c0e04u: goto label_1c0e04;
        case 0x1c0e08u: goto label_1c0e08;
        case 0x1c0e0cu: goto label_1c0e0c;
        case 0x1c0e10u: goto label_1c0e10;
        case 0x1c0e14u: goto label_1c0e14;
        case 0x1c0e18u: goto label_1c0e18;
        case 0x1c0e1cu: goto label_1c0e1c;
        case 0x1c0e20u: goto label_1c0e20;
        case 0x1c0e24u: goto label_1c0e24;
        case 0x1c0e28u: goto label_1c0e28;
        case 0x1c0e2cu: goto label_1c0e2c;
        case 0x1c0e30u: goto label_1c0e30;
        case 0x1c0e34u: goto label_1c0e34;
        case 0x1c0e38u: goto label_1c0e38;
        case 0x1c0e3cu: goto label_1c0e3c;
        case 0x1c0e40u: goto label_1c0e40;
        case 0x1c0e44u: goto label_1c0e44;
        case 0x1c0e48u: goto label_1c0e48;
        case 0x1c0e4cu: goto label_1c0e4c;
        case 0x1c0e50u: goto label_1c0e50;
        case 0x1c0e54u: goto label_1c0e54;
        case 0x1c0e58u: goto label_1c0e58;
        case 0x1c0e5cu: goto label_1c0e5c;
        case 0x1c0e60u: goto label_1c0e60;
        case 0x1c0e64u: goto label_1c0e64;
        case 0x1c0e68u: goto label_1c0e68;
        case 0x1c0e6cu: goto label_1c0e6c;
        case 0x1c0e70u: goto label_1c0e70;
        case 0x1c0e74u: goto label_1c0e74;
        case 0x1c0e78u: goto label_1c0e78;
        case 0x1c0e7cu: goto label_1c0e7c;
        case 0x1c0e80u: goto label_1c0e80;
        case 0x1c0e84u: goto label_1c0e84;
        case 0x1c0e88u: goto label_1c0e88;
        case 0x1c0e8cu: goto label_1c0e8c;
        case 0x1c0e90u: goto label_1c0e90;
        case 0x1c0e94u: goto label_1c0e94;
        case 0x1c0e98u: goto label_1c0e98;
        case 0x1c0e9cu: goto label_1c0e9c;
        case 0x1c0ea0u: goto label_1c0ea0;
        case 0x1c0ea4u: goto label_1c0ea4;
        case 0x1c0ea8u: goto label_1c0ea8;
        case 0x1c0eacu: goto label_1c0eac;
        case 0x1c0eb0u: goto label_1c0eb0;
        case 0x1c0eb4u: goto label_1c0eb4;
        case 0x1c0eb8u: goto label_1c0eb8;
        case 0x1c0ebcu: goto label_1c0ebc;
        case 0x1c0ec0u: goto label_1c0ec0;
        case 0x1c0ec4u: goto label_1c0ec4;
        case 0x1c0ec8u: goto label_1c0ec8;
        case 0x1c0eccu: goto label_1c0ecc;
        case 0x1c0ed0u: goto label_1c0ed0;
        case 0x1c0ed4u: goto label_1c0ed4;
        case 0x1c0ed8u: goto label_1c0ed8;
        case 0x1c0edcu: goto label_1c0edc;
        case 0x1c0ee0u: goto label_1c0ee0;
        case 0x1c0ee4u: goto label_1c0ee4;
        case 0x1c0ee8u: goto label_1c0ee8;
        case 0x1c0eecu: goto label_1c0eec;
        case 0x1c0ef0u: goto label_1c0ef0;
        case 0x1c0ef4u: goto label_1c0ef4;
        case 0x1c0ef8u: goto label_1c0ef8;
        case 0x1c0efcu: goto label_1c0efc;
        case 0x1c0f00u: goto label_1c0f00;
        case 0x1c0f04u: goto label_1c0f04;
        case 0x1c0f08u: goto label_1c0f08;
        case 0x1c0f0cu: goto label_1c0f0c;
        case 0x1c0f10u: goto label_1c0f10;
        case 0x1c0f14u: goto label_1c0f14;
        case 0x1c0f18u: goto label_1c0f18;
        case 0x1c0f1cu: goto label_1c0f1c;
        case 0x1c0f20u: goto label_1c0f20;
        case 0x1c0f24u: goto label_1c0f24;
        case 0x1c0f28u: goto label_1c0f28;
        case 0x1c0f2cu: goto label_1c0f2c;
        case 0x1c0f30u: goto label_1c0f30;
        case 0x1c0f34u: goto label_1c0f34;
        case 0x1c0f38u: goto label_1c0f38;
        case 0x1c0f3cu: goto label_1c0f3c;
        case 0x1c0f40u: goto label_1c0f40;
        case 0x1c0f44u: goto label_1c0f44;
        case 0x1c0f48u: goto label_1c0f48;
        case 0x1c0f4cu: goto label_1c0f4c;
        case 0x1c0f50u: goto label_1c0f50;
        case 0x1c0f54u: goto label_1c0f54;
        case 0x1c0f58u: goto label_1c0f58;
        case 0x1c0f5cu: goto label_1c0f5c;
        case 0x1c0f60u: goto label_1c0f60;
        case 0x1c0f64u: goto label_1c0f64;
        case 0x1c0f68u: goto label_1c0f68;
        case 0x1c0f6cu: goto label_1c0f6c;
        case 0x1c0f70u: goto label_1c0f70;
        case 0x1c0f74u: goto label_1c0f74;
        case 0x1c0f78u: goto label_1c0f78;
        case 0x1c0f7cu: goto label_1c0f7c;
        case 0x1c0f80u: goto label_1c0f80;
        case 0x1c0f84u: goto label_1c0f84;
        case 0x1c0f88u: goto label_1c0f88;
        case 0x1c0f8cu: goto label_1c0f8c;
        case 0x1c0f90u: goto label_1c0f90;
        case 0x1c0f94u: goto label_1c0f94;
        case 0x1c0f98u: goto label_1c0f98;
        case 0x1c0f9cu: goto label_1c0f9c;
        case 0x1c0fa0u: goto label_1c0fa0;
        case 0x1c0fa4u: goto label_1c0fa4;
        case 0x1c0fa8u: goto label_1c0fa8;
        case 0x1c0facu: goto label_1c0fac;
        case 0x1c0fb0u: goto label_1c0fb0;
        case 0x1c0fb4u: goto label_1c0fb4;
        case 0x1c0fb8u: goto label_1c0fb8;
        case 0x1c0fbcu: goto label_1c0fbc;
        case 0x1c0fc0u: goto label_1c0fc0;
        case 0x1c0fc4u: goto label_1c0fc4;
        case 0x1c0fc8u: goto label_1c0fc8;
        case 0x1c0fccu: goto label_1c0fcc;
        case 0x1c0fd0u: goto label_1c0fd0;
        case 0x1c0fd4u: goto label_1c0fd4;
        case 0x1c0fd8u: goto label_1c0fd8;
        case 0x1c0fdcu: goto label_1c0fdc;
        case 0x1c0fe0u: goto label_1c0fe0;
        case 0x1c0fe4u: goto label_1c0fe4;
        case 0x1c0fe8u: goto label_1c0fe8;
        case 0x1c0fecu: goto label_1c0fec;
        case 0x1c0ff0u: goto label_1c0ff0;
        case 0x1c0ff4u: goto label_1c0ff4;
        case 0x1c0ff8u: goto label_1c0ff8;
        case 0x1c0ffcu: goto label_1c0ffc;
        case 0x1c1000u: goto label_1c1000;
        case 0x1c1004u: goto label_1c1004;
        case 0x1c1008u: goto label_1c1008;
        case 0x1c100cu: goto label_1c100c;
        case 0x1c1010u: goto label_1c1010;
        case 0x1c1014u: goto label_1c1014;
        case 0x1c1018u: goto label_1c1018;
        case 0x1c101cu: goto label_1c101c;
        case 0x1c1020u: goto label_1c1020;
        case 0x1c1024u: goto label_1c1024;
        case 0x1c1028u: goto label_1c1028;
        case 0x1c102cu: goto label_1c102c;
        case 0x1c1030u: goto label_1c1030;
        case 0x1c1034u: goto label_1c1034;
        case 0x1c1038u: goto label_1c1038;
        case 0x1c103cu: goto label_1c103c;
        case 0x1c1040u: goto label_1c1040;
        case 0x1c1044u: goto label_1c1044;
        case 0x1c1048u: goto label_1c1048;
        case 0x1c104cu: goto label_1c104c;
        case 0x1c1050u: goto label_1c1050;
        case 0x1c1054u: goto label_1c1054;
        case 0x1c1058u: goto label_1c1058;
        case 0x1c105cu: goto label_1c105c;
        case 0x1c1060u: goto label_1c1060;
        case 0x1c1064u: goto label_1c1064;
        case 0x1c1068u: goto label_1c1068;
        case 0x1c106cu: goto label_1c106c;
        case 0x1c1070u: goto label_1c1070;
        case 0x1c1074u: goto label_1c1074;
        case 0x1c1078u: goto label_1c1078;
        case 0x1c107cu: goto label_1c107c;
        case 0x1c1080u: goto label_1c1080;
        case 0x1c1084u: goto label_1c1084;
        case 0x1c1088u: goto label_1c1088;
        case 0x1c108cu: goto label_1c108c;
        case 0x1c1090u: goto label_1c1090;
        case 0x1c1094u: goto label_1c1094;
        case 0x1c1098u: goto label_1c1098;
        case 0x1c109cu: goto label_1c109c;
        case 0x1c10a0u: goto label_1c10a0;
        case 0x1c10a4u: goto label_1c10a4;
        case 0x1c10a8u: goto label_1c10a8;
        case 0x1c10acu: goto label_1c10ac;
        case 0x1c10b0u: goto label_1c10b0;
        case 0x1c10b4u: goto label_1c10b4;
        case 0x1c10b8u: goto label_1c10b8;
        case 0x1c10bcu: goto label_1c10bc;
        case 0x1c10c0u: goto label_1c10c0;
        case 0x1c10c4u: goto label_1c10c4;
        case 0x1c10c8u: goto label_1c10c8;
        case 0x1c10ccu: goto label_1c10cc;
        case 0x1c10d0u: goto label_1c10d0;
        case 0x1c10d4u: goto label_1c10d4;
        case 0x1c10d8u: goto label_1c10d8;
        case 0x1c10dcu: goto label_1c10dc;
        case 0x1c10e0u: goto label_1c10e0;
        case 0x1c10e4u: goto label_1c10e4;
        case 0x1c10e8u: goto label_1c10e8;
        case 0x1c10ecu: goto label_1c10ec;
        case 0x1c10f0u: goto label_1c10f0;
        case 0x1c10f4u: goto label_1c10f4;
        case 0x1c10f8u: goto label_1c10f8;
        case 0x1c10fcu: goto label_1c10fc;
        case 0x1c1100u: goto label_1c1100;
        case 0x1c1104u: goto label_1c1104;
        case 0x1c1108u: goto label_1c1108;
        case 0x1c110cu: goto label_1c110c;
        case 0x1c1110u: goto label_1c1110;
        case 0x1c1114u: goto label_1c1114;
        case 0x1c1118u: goto label_1c1118;
        case 0x1c111cu: goto label_1c111c;
        case 0x1c1120u: goto label_1c1120;
        case 0x1c1124u: goto label_1c1124;
        case 0x1c1128u: goto label_1c1128;
        case 0x1c112cu: goto label_1c112c;
        case 0x1c1130u: goto label_1c1130;
        case 0x1c1134u: goto label_1c1134;
        case 0x1c1138u: goto label_1c1138;
        case 0x1c113cu: goto label_1c113c;
        case 0x1c1140u: goto label_1c1140;
        case 0x1c1144u: goto label_1c1144;
        case 0x1c1148u: goto label_1c1148;
        case 0x1c114cu: goto label_1c114c;
        case 0x1c1150u: goto label_1c1150;
        case 0x1c1154u: goto label_1c1154;
        case 0x1c1158u: goto label_1c1158;
        case 0x1c115cu: goto label_1c115c;
        case 0x1c1160u: goto label_1c1160;
        case 0x1c1164u: goto label_1c1164;
        case 0x1c1168u: goto label_1c1168;
        case 0x1c116cu: goto label_1c116c;
        case 0x1c1170u: goto label_1c1170;
        case 0x1c1174u: goto label_1c1174;
        case 0x1c1178u: goto label_1c1178;
        case 0x1c117cu: goto label_1c117c;
        case 0x1c1180u: goto label_1c1180;
        case 0x1c1184u: goto label_1c1184;
        case 0x1c1188u: goto label_1c1188;
        case 0x1c118cu: goto label_1c118c;
        case 0x1c1190u: goto label_1c1190;
        case 0x1c1194u: goto label_1c1194;
        case 0x1c1198u: goto label_1c1198;
        case 0x1c119cu: goto label_1c119c;
        case 0x1c11a0u: goto label_1c11a0;
        case 0x1c11a4u: goto label_1c11a4;
        case 0x1c11a8u: goto label_1c11a8;
        case 0x1c11acu: goto label_1c11ac;
        case 0x1c11b0u: goto label_1c11b0;
        case 0x1c11b4u: goto label_1c11b4;
        case 0x1c11b8u: goto label_1c11b8;
        case 0x1c11bcu: goto label_1c11bc;
        case 0x1c11c0u: goto label_1c11c0;
        case 0x1c11c4u: goto label_1c11c4;
        case 0x1c11c8u: goto label_1c11c8;
        case 0x1c11ccu: goto label_1c11cc;
        case 0x1c11d0u: goto label_1c11d0;
        case 0x1c11d4u: goto label_1c11d4;
        case 0x1c11d8u: goto label_1c11d8;
        case 0x1c11dcu: goto label_1c11dc;
        case 0x1c11e0u: goto label_1c11e0;
        case 0x1c11e4u: goto label_1c11e4;
        case 0x1c11e8u: goto label_1c11e8;
        case 0x1c11ecu: goto label_1c11ec;
        case 0x1c11f0u: goto label_1c11f0;
        case 0x1c11f4u: goto label_1c11f4;
        case 0x1c11f8u: goto label_1c11f8;
        case 0x1c11fcu: goto label_1c11fc;
        case 0x1c1200u: goto label_1c1200;
        case 0x1c1204u: goto label_1c1204;
        case 0x1c1208u: goto label_1c1208;
        case 0x1c120cu: goto label_1c120c;
        case 0x1c1210u: goto label_1c1210;
        case 0x1c1214u: goto label_1c1214;
        case 0x1c1218u: goto label_1c1218;
        case 0x1c121cu: goto label_1c121c;
        case 0x1c1220u: goto label_1c1220;
        case 0x1c1224u: goto label_1c1224;
        case 0x1c1228u: goto label_1c1228;
        case 0x1c122cu: goto label_1c122c;
        case 0x1c1230u: goto label_1c1230;
        case 0x1c1234u: goto label_1c1234;
        case 0x1c1238u: goto label_1c1238;
        case 0x1c123cu: goto label_1c123c;
        case 0x1c1240u: goto label_1c1240;
        case 0x1c1244u: goto label_1c1244;
        case 0x1c1248u: goto label_1c1248;
        case 0x1c124cu: goto label_1c124c;
        case 0x1c1250u: goto label_1c1250;
        case 0x1c1254u: goto label_1c1254;
        case 0x1c1258u: goto label_1c1258;
        case 0x1c125cu: goto label_1c125c;
        case 0x1c1260u: goto label_1c1260;
        case 0x1c1264u: goto label_1c1264;
        case 0x1c1268u: goto label_1c1268;
        case 0x1c126cu: goto label_1c126c;
        case 0x1c1270u: goto label_1c1270;
        case 0x1c1274u: goto label_1c1274;
        case 0x1c1278u: goto label_1c1278;
        case 0x1c127cu: goto label_1c127c;
        case 0x1c1280u: goto label_1c1280;
        case 0x1c1284u: goto label_1c1284;
        case 0x1c1288u: goto label_1c1288;
        case 0x1c128cu: goto label_1c128c;
        case 0x1c1290u: goto label_1c1290;
        case 0x1c1294u: goto label_1c1294;
        case 0x1c1298u: goto label_1c1298;
        case 0x1c129cu: goto label_1c129c;
        case 0x1c12a0u: goto label_1c12a0;
        case 0x1c12a4u: goto label_1c12a4;
        case 0x1c12a8u: goto label_1c12a8;
        case 0x1c12acu: goto label_1c12ac;
        case 0x1c12b0u: goto label_1c12b0;
        case 0x1c12b4u: goto label_1c12b4;
        case 0x1c12b8u: goto label_1c12b8;
        case 0x1c12bcu: goto label_1c12bc;
        case 0x1c12c0u: goto label_1c12c0;
        case 0x1c12c4u: goto label_1c12c4;
        case 0x1c12c8u: goto label_1c12c8;
        case 0x1c12ccu: goto label_1c12cc;
        case 0x1c12d0u: goto label_1c12d0;
        case 0x1c12d4u: goto label_1c12d4;
        case 0x1c12d8u: goto label_1c12d8;
        case 0x1c12dcu: goto label_1c12dc;
        case 0x1c12e0u: goto label_1c12e0;
        case 0x1c12e4u: goto label_1c12e4;
        case 0x1c12e8u: goto label_1c12e8;
        case 0x1c12ecu: goto label_1c12ec;
        case 0x1c12f0u: goto label_1c12f0;
        case 0x1c12f4u: goto label_1c12f4;
        case 0x1c12f8u: goto label_1c12f8;
        case 0x1c12fcu: goto label_1c12fc;
        case 0x1c1300u: goto label_1c1300;
        case 0x1c1304u: goto label_1c1304;
        case 0x1c1308u: goto label_1c1308;
        case 0x1c130cu: goto label_1c130c;
        case 0x1c1310u: goto label_1c1310;
        case 0x1c1314u: goto label_1c1314;
        case 0x1c1318u: goto label_1c1318;
        case 0x1c131cu: goto label_1c131c;
        case 0x1c1320u: goto label_1c1320;
        case 0x1c1324u: goto label_1c1324;
        case 0x1c1328u: goto label_1c1328;
        case 0x1c132cu: goto label_1c132c;
        case 0x1c1330u: goto label_1c1330;
        case 0x1c1334u: goto label_1c1334;
        case 0x1c1338u: goto label_1c1338;
        case 0x1c133cu: goto label_1c133c;
        case 0x1c1340u: goto label_1c1340;
        case 0x1c1344u: goto label_1c1344;
        case 0x1c1348u: goto label_1c1348;
        case 0x1c134cu: goto label_1c134c;
        case 0x1c1350u: goto label_1c1350;
        case 0x1c1354u: goto label_1c1354;
        case 0x1c1358u: goto label_1c1358;
        case 0x1c135cu: goto label_1c135c;
        case 0x1c1360u: goto label_1c1360;
        case 0x1c1364u: goto label_1c1364;
        case 0x1c1368u: goto label_1c1368;
        case 0x1c136cu: goto label_1c136c;
        case 0x1c1370u: goto label_1c1370;
        case 0x1c1374u: goto label_1c1374;
        case 0x1c1378u: goto label_1c1378;
        case 0x1c137cu: goto label_1c137c;
        case 0x1c1380u: goto label_1c1380;
        case 0x1c1384u: goto label_1c1384;
        case 0x1c1388u: goto label_1c1388;
        case 0x1c138cu: goto label_1c138c;
        case 0x1c1390u: goto label_1c1390;
        case 0x1c1394u: goto label_1c1394;
        case 0x1c1398u: goto label_1c1398;
        case 0x1c139cu: goto label_1c139c;
        case 0x1c13a0u: goto label_1c13a0;
        case 0x1c13a4u: goto label_1c13a4;
        case 0x1c13a8u: goto label_1c13a8;
        case 0x1c13acu: goto label_1c13ac;
        case 0x1c13b0u: goto label_1c13b0;
        case 0x1c13b4u: goto label_1c13b4;
        case 0x1c13b8u: goto label_1c13b8;
        case 0x1c13bcu: goto label_1c13bc;
        case 0x1c13c0u: goto label_1c13c0;
        case 0x1c13c4u: goto label_1c13c4;
        case 0x1c13c8u: goto label_1c13c8;
        case 0x1c13ccu: goto label_1c13cc;
        case 0x1c13d0u: goto label_1c13d0;
        case 0x1c13d4u: goto label_1c13d4;
        case 0x1c13d8u: goto label_1c13d8;
        case 0x1c13dcu: goto label_1c13dc;
        case 0x1c13e0u: goto label_1c13e0;
        case 0x1c13e4u: goto label_1c13e4;
        case 0x1c13e8u: goto label_1c13e8;
        case 0x1c13ecu: goto label_1c13ec;
        case 0x1c13f0u: goto label_1c13f0;
        case 0x1c13f4u: goto label_1c13f4;
        case 0x1c13f8u: goto label_1c13f8;
        case 0x1c13fcu: goto label_1c13fc;
        case 0x1c1400u: goto label_1c1400;
        case 0x1c1404u: goto label_1c1404;
        case 0x1c1408u: goto label_1c1408;
        case 0x1c140cu: goto label_1c140c;
        case 0x1c1410u: goto label_1c1410;
        case 0x1c1414u: goto label_1c1414;
        case 0x1c1418u: goto label_1c1418;
        case 0x1c141cu: goto label_1c141c;
        case 0x1c1420u: goto label_1c1420;
        case 0x1c1424u: goto label_1c1424;
        case 0x1c1428u: goto label_1c1428;
        case 0x1c142cu: goto label_1c142c;
        case 0x1c1430u: goto label_1c1430;
        case 0x1c1434u: goto label_1c1434;
        case 0x1c1438u: goto label_1c1438;
        case 0x1c143cu: goto label_1c143c;
        case 0x1c1440u: goto label_1c1440;
        case 0x1c1444u: goto label_1c1444;
        case 0x1c1448u: goto label_1c1448;
        case 0x1c144cu: goto label_1c144c;
        case 0x1c1450u: goto label_1c1450;
        case 0x1c1454u: goto label_1c1454;
        case 0x1c1458u: goto label_1c1458;
        case 0x1c145cu: goto label_1c145c;
        case 0x1c1460u: goto label_1c1460;
        case 0x1c1464u: goto label_1c1464;
        case 0x1c1468u: goto label_1c1468;
        case 0x1c146cu: goto label_1c146c;
        case 0x1c1470u: goto label_1c1470;
        case 0x1c1474u: goto label_1c1474;
        case 0x1c1478u: goto label_1c1478;
        case 0x1c147cu: goto label_1c147c;
        case 0x1c1480u: goto label_1c1480;
        case 0x1c1484u: goto label_1c1484;
        case 0x1c1488u: goto label_1c1488;
        case 0x1c148cu: goto label_1c148c;
        case 0x1c1490u: goto label_1c1490;
        case 0x1c1494u: goto label_1c1494;
        case 0x1c1498u: goto label_1c1498;
        case 0x1c149cu: goto label_1c149c;
        case 0x1c14a0u: goto label_1c14a0;
        case 0x1c14a4u: goto label_1c14a4;
        case 0x1c14a8u: goto label_1c14a8;
        case 0x1c14acu: goto label_1c14ac;
        case 0x1c14b0u: goto label_1c14b0;
        case 0x1c14b4u: goto label_1c14b4;
        case 0x1c14b8u: goto label_1c14b8;
        case 0x1c14bcu: goto label_1c14bc;
        case 0x1c14c0u: goto label_1c14c0;
        case 0x1c14c4u: goto label_1c14c4;
        case 0x1c14c8u: goto label_1c14c8;
        case 0x1c14ccu: goto label_1c14cc;
        case 0x1c14d0u: goto label_1c14d0;
        case 0x1c14d4u: goto label_1c14d4;
        case 0x1c14d8u: goto label_1c14d8;
        case 0x1c14dcu: goto label_1c14dc;
        case 0x1c14e0u: goto label_1c14e0;
        case 0x1c14e4u: goto label_1c14e4;
        case 0x1c14e8u: goto label_1c14e8;
        case 0x1c14ecu: goto label_1c14ec;
        case 0x1c14f0u: goto label_1c14f0;
        case 0x1c14f4u: goto label_1c14f4;
        case 0x1c14f8u: goto label_1c14f8;
        case 0x1c14fcu: goto label_1c14fc;
        case 0x1c1500u: goto label_1c1500;
        case 0x1c1504u: goto label_1c1504;
        case 0x1c1508u: goto label_1c1508;
        case 0x1c150cu: goto label_1c150c;
        case 0x1c1510u: goto label_1c1510;
        case 0x1c1514u: goto label_1c1514;
        case 0x1c1518u: goto label_1c1518;
        case 0x1c151cu: goto label_1c151c;
        case 0x1c1520u: goto label_1c1520;
        case 0x1c1524u: goto label_1c1524;
        case 0x1c1528u: goto label_1c1528;
        case 0x1c152cu: goto label_1c152c;
        case 0x1c1530u: goto label_1c1530;
        case 0x1c1534u: goto label_1c1534;
        case 0x1c1538u: goto label_1c1538;
        case 0x1c153cu: goto label_1c153c;
        case 0x1c1540u: goto label_1c1540;
        case 0x1c1544u: goto label_1c1544;
        case 0x1c1548u: goto label_1c1548;
        case 0x1c154cu: goto label_1c154c;
        case 0x1c1550u: goto label_1c1550;
        case 0x1c1554u: goto label_1c1554;
        case 0x1c1558u: goto label_1c1558;
        case 0x1c155cu: goto label_1c155c;
        case 0x1c1560u: goto label_1c1560;
        case 0x1c1564u: goto label_1c1564;
        case 0x1c1568u: goto label_1c1568;
        case 0x1c156cu: goto label_1c156c;
        case 0x1c1570u: goto label_1c1570;
        case 0x1c1574u: goto label_1c1574;
        case 0x1c1578u: goto label_1c1578;
        case 0x1c157cu: goto label_1c157c;
        case 0x1c1580u: goto label_1c1580;
        case 0x1c1584u: goto label_1c1584;
        case 0x1c1588u: goto label_1c1588;
        case 0x1c158cu: goto label_1c158c;
        case 0x1c1590u: goto label_1c1590;
        case 0x1c1594u: goto label_1c1594;
        case 0x1c1598u: goto label_1c1598;
        case 0x1c159cu: goto label_1c159c;
        case 0x1c15a0u: goto label_1c15a0;
        case 0x1c15a4u: goto label_1c15a4;
        case 0x1c15a8u: goto label_1c15a8;
        case 0x1c15acu: goto label_1c15ac;
        case 0x1c15b0u: goto label_1c15b0;
        case 0x1c15b4u: goto label_1c15b4;
        case 0x1c15b8u: goto label_1c15b8;
        case 0x1c15bcu: goto label_1c15bc;
        case 0x1c15c0u: goto label_1c15c0;
        case 0x1c15c4u: goto label_1c15c4;
        case 0x1c15c8u: goto label_1c15c8;
        case 0x1c15ccu: goto label_1c15cc;
        case 0x1c15d0u: goto label_1c15d0;
        case 0x1c15d4u: goto label_1c15d4;
        case 0x1c15d8u: goto label_1c15d8;
        case 0x1c15dcu: goto label_1c15dc;
        case 0x1c15e0u: goto label_1c15e0;
        case 0x1c15e4u: goto label_1c15e4;
        case 0x1c15e8u: goto label_1c15e8;
        case 0x1c15ecu: goto label_1c15ec;
        case 0x1c15f0u: goto label_1c15f0;
        case 0x1c15f4u: goto label_1c15f4;
        case 0x1c15f8u: goto label_1c15f8;
        case 0x1c15fcu: goto label_1c15fc;
        case 0x1c1600u: goto label_1c1600;
        case 0x1c1604u: goto label_1c1604;
        case 0x1c1608u: goto label_1c1608;
        case 0x1c160cu: goto label_1c160c;
        case 0x1c1610u: goto label_1c1610;
        case 0x1c1614u: goto label_1c1614;
        case 0x1c1618u: goto label_1c1618;
        case 0x1c161cu: goto label_1c161c;
        case 0x1c1620u: goto label_1c1620;
        case 0x1c1624u: goto label_1c1624;
        case 0x1c1628u: goto label_1c1628;
        case 0x1c162cu: goto label_1c162c;
        case 0x1c1630u: goto label_1c1630;
        case 0x1c1634u: goto label_1c1634;
        case 0x1c1638u: goto label_1c1638;
        case 0x1c163cu: goto label_1c163c;
        case 0x1c1640u: goto label_1c1640;
        case 0x1c1644u: goto label_1c1644;
        case 0x1c1648u: goto label_1c1648;
        case 0x1c164cu: goto label_1c164c;
        case 0x1c1650u: goto label_1c1650;
        case 0x1c1654u: goto label_1c1654;
        case 0x1c1658u: goto label_1c1658;
        case 0x1c165cu: goto label_1c165c;
        case 0x1c1660u: goto label_1c1660;
        case 0x1c1664u: goto label_1c1664;
        case 0x1c1668u: goto label_1c1668;
        case 0x1c166cu: goto label_1c166c;
        case 0x1c1670u: goto label_1c1670;
        case 0x1c1674u: goto label_1c1674;
        case 0x1c1678u: goto label_1c1678;
        case 0x1c167cu: goto label_1c167c;
        case 0x1c1680u: goto label_1c1680;
        case 0x1c1684u: goto label_1c1684;
        case 0x1c1688u: goto label_1c1688;
        case 0x1c168cu: goto label_1c168c;
        case 0x1c1690u: goto label_1c1690;
        case 0x1c1694u: goto label_1c1694;
        case 0x1c1698u: goto label_1c1698;
        case 0x1c169cu: goto label_1c169c;
        case 0x1c16a0u: goto label_1c16a0;
        case 0x1c16a4u: goto label_1c16a4;
        case 0x1c16a8u: goto label_1c16a8;
        case 0x1c16acu: goto label_1c16ac;
        case 0x1c16b0u: goto label_1c16b0;
        case 0x1c16b4u: goto label_1c16b4;
        case 0x1c16b8u: goto label_1c16b8;
        case 0x1c16bcu: goto label_1c16bc;
        case 0x1c16c0u: goto label_1c16c0;
        case 0x1c16c4u: goto label_1c16c4;
        case 0x1c16c8u: goto label_1c16c8;
        case 0x1c16ccu: goto label_1c16cc;
        case 0x1c16d0u: goto label_1c16d0;
        case 0x1c16d4u: goto label_1c16d4;
        case 0x1c16d8u: goto label_1c16d8;
        case 0x1c16dcu: goto label_1c16dc;
        case 0x1c16e0u: goto label_1c16e0;
        case 0x1c16e4u: goto label_1c16e4;
        case 0x1c16e8u: goto label_1c16e8;
        case 0x1c16ecu: goto label_1c16ec;
        case 0x1c16f0u: goto label_1c16f0;
        case 0x1c16f4u: goto label_1c16f4;
        case 0x1c16f8u: goto label_1c16f8;
        case 0x1c16fcu: goto label_1c16fc;
        case 0x1c1700u: goto label_1c1700;
        case 0x1c1704u: goto label_1c1704;
        case 0x1c1708u: goto label_1c1708;
        case 0x1c170cu: goto label_1c170c;
        case 0x1c1710u: goto label_1c1710;
        case 0x1c1714u: goto label_1c1714;
        case 0x1c1718u: goto label_1c1718;
        case 0x1c171cu: goto label_1c171c;
        case 0x1c1720u: goto label_1c1720;
        case 0x1c1724u: goto label_1c1724;
        case 0x1c1728u: goto label_1c1728;
        case 0x1c172cu: goto label_1c172c;
        case 0x1c1730u: goto label_1c1730;
        case 0x1c1734u: goto label_1c1734;
        case 0x1c1738u: goto label_1c1738;
        case 0x1c173cu: goto label_1c173c;
        case 0x1c1740u: goto label_1c1740;
        case 0x1c1744u: goto label_1c1744;
        case 0x1c1748u: goto label_1c1748;
        case 0x1c174cu: goto label_1c174c;
        case 0x1c1750u: goto label_1c1750;
        case 0x1c1754u: goto label_1c1754;
        case 0x1c1758u: goto label_1c1758;
        case 0x1c175cu: goto label_1c175c;
        case 0x1c1760u: goto label_1c1760;
        case 0x1c1764u: goto label_1c1764;
        case 0x1c1768u: goto label_1c1768;
        case 0x1c176cu: goto label_1c176c;
        case 0x1c1770u: goto label_1c1770;
        case 0x1c1774u: goto label_1c1774;
        case 0x1c1778u: goto label_1c1778;
        case 0x1c177cu: goto label_1c177c;
        case 0x1c1780u: goto label_1c1780;
        case 0x1c1784u: goto label_1c1784;
        case 0x1c1788u: goto label_1c1788;
        case 0x1c178cu: goto label_1c178c;
        case 0x1c1790u: goto label_1c1790;
        case 0x1c1794u: goto label_1c1794;
        case 0x1c1798u: goto label_1c1798;
        case 0x1c179cu: goto label_1c179c;
        case 0x1c17a0u: goto label_1c17a0;
        case 0x1c17a4u: goto label_1c17a4;
        case 0x1c17a8u: goto label_1c17a8;
        case 0x1c17acu: goto label_1c17ac;
        case 0x1c17b0u: goto label_1c17b0;
        case 0x1c17b4u: goto label_1c17b4;
        case 0x1c17b8u: goto label_1c17b8;
        case 0x1c17bcu: goto label_1c17bc;
        case 0x1c17c0u: goto label_1c17c0;
        case 0x1c17c4u: goto label_1c17c4;
        case 0x1c17c8u: goto label_1c17c8;
        case 0x1c17ccu: goto label_1c17cc;
        case 0x1c17d0u: goto label_1c17d0;
        case 0x1c17d4u: goto label_1c17d4;
        case 0x1c17d8u: goto label_1c17d8;
        case 0x1c17dcu: goto label_1c17dc;
        case 0x1c17e0u: goto label_1c17e0;
        case 0x1c17e4u: goto label_1c17e4;
        case 0x1c17e8u: goto label_1c17e8;
        case 0x1c17ecu: goto label_1c17ec;
        case 0x1c17f0u: goto label_1c17f0;
        case 0x1c17f4u: goto label_1c17f4;
        case 0x1c17f8u: goto label_1c17f8;
        case 0x1c17fcu: goto label_1c17fc;
        case 0x1c1800u: goto label_1c1800;
        case 0x1c1804u: goto label_1c1804;
        case 0x1c1808u: goto label_1c1808;
        case 0x1c180cu: goto label_1c180c;
        case 0x1c1810u: goto label_1c1810;
        case 0x1c1814u: goto label_1c1814;
        case 0x1c1818u: goto label_1c1818;
        case 0x1c181cu: goto label_1c181c;
        case 0x1c1820u: goto label_1c1820;
        case 0x1c1824u: goto label_1c1824;
        case 0x1c1828u: goto label_1c1828;
        case 0x1c182cu: goto label_1c182c;
        case 0x1c1830u: goto label_1c1830;
        case 0x1c1834u: goto label_1c1834;
        case 0x1c1838u: goto label_1c1838;
        case 0x1c183cu: goto label_1c183c;
        case 0x1c1840u: goto label_1c1840;
        case 0x1c1844u: goto label_1c1844;
        case 0x1c1848u: goto label_1c1848;
        case 0x1c184cu: goto label_1c184c;
        case 0x1c1850u: goto label_1c1850;
        case 0x1c1854u: goto label_1c1854;
        case 0x1c1858u: goto label_1c1858;
        case 0x1c185cu: goto label_1c185c;
        case 0x1c1860u: goto label_1c1860;
        case 0x1c1864u: goto label_1c1864;
        case 0x1c1868u: goto label_1c1868;
        case 0x1c186cu: goto label_1c186c;
        case 0x1c1870u: goto label_1c1870;
        case 0x1c1874u: goto label_1c1874;
        case 0x1c1878u: goto label_1c1878;
        case 0x1c187cu: goto label_1c187c;
        case 0x1c1880u: goto label_1c1880;
        case 0x1c1884u: goto label_1c1884;
        case 0x1c1888u: goto label_1c1888;
        case 0x1c188cu: goto label_1c188c;
        case 0x1c1890u: goto label_1c1890;
        case 0x1c1894u: goto label_1c1894;
        case 0x1c1898u: goto label_1c1898;
        case 0x1c189cu: goto label_1c189c;
        case 0x1c18a0u: goto label_1c18a0;
        case 0x1c18a4u: goto label_1c18a4;
        case 0x1c18a8u: goto label_1c18a8;
        case 0x1c18acu: goto label_1c18ac;
        case 0x1c18b0u: goto label_1c18b0;
        case 0x1c18b4u: goto label_1c18b4;
        case 0x1c18b8u: goto label_1c18b8;
        case 0x1c18bcu: goto label_1c18bc;
        case 0x1c18c0u: goto label_1c18c0;
        case 0x1c18c4u: goto label_1c18c4;
        case 0x1c18c8u: goto label_1c18c8;
        case 0x1c18ccu: goto label_1c18cc;
        case 0x1c18d0u: goto label_1c18d0;
        case 0x1c18d4u: goto label_1c18d4;
        case 0x1c18d8u: goto label_1c18d8;
        case 0x1c18dcu: goto label_1c18dc;
        case 0x1c18e0u: goto label_1c18e0;
        case 0x1c18e4u: goto label_1c18e4;
        case 0x1c18e8u: goto label_1c18e8;
        case 0x1c18ecu: goto label_1c18ec;
        case 0x1c18f0u: goto label_1c18f0;
        case 0x1c18f4u: goto label_1c18f4;
        case 0x1c18f8u: goto label_1c18f8;
        case 0x1c18fcu: goto label_1c18fc;
        case 0x1c1900u: goto label_1c1900;
        case 0x1c1904u: goto label_1c1904;
        case 0x1c1908u: goto label_1c1908;
        case 0x1c190cu: goto label_1c190c;
        case 0x1c1910u: goto label_1c1910;
        case 0x1c1914u: goto label_1c1914;
        case 0x1c1918u: goto label_1c1918;
        case 0x1c191cu: goto label_1c191c;
        case 0x1c1920u: goto label_1c1920;
        case 0x1c1924u: goto label_1c1924;
        case 0x1c1928u: goto label_1c1928;
        case 0x1c192cu: goto label_1c192c;
        case 0x1c1930u: goto label_1c1930;
        case 0x1c1934u: goto label_1c1934;
        case 0x1c1938u: goto label_1c1938;
        case 0x1c193cu: goto label_1c193c;
        case 0x1c1940u: goto label_1c1940;
        case 0x1c1944u: goto label_1c1944;
        case 0x1c1948u: goto label_1c1948;
        case 0x1c194cu: goto label_1c194c;
        case 0x1c1950u: goto label_1c1950;
        case 0x1c1954u: goto label_1c1954;
        case 0x1c1958u: goto label_1c1958;
        case 0x1c195cu: goto label_1c195c;
        case 0x1c1960u: goto label_1c1960;
        case 0x1c1964u: goto label_1c1964;
        case 0x1c1968u: goto label_1c1968;
        case 0x1c196cu: goto label_1c196c;
        case 0x1c1970u: goto label_1c1970;
        case 0x1c1974u: goto label_1c1974;
        case 0x1c1978u: goto label_1c1978;
        case 0x1c197cu: goto label_1c197c;
        case 0x1c1980u: goto label_1c1980;
        case 0x1c1984u: goto label_1c1984;
        case 0x1c1988u: goto label_1c1988;
        case 0x1c198cu: goto label_1c198c;
        case 0x1c1990u: goto label_1c1990;
        case 0x1c1994u: goto label_1c1994;
        case 0x1c1998u: goto label_1c1998;
        case 0x1c199cu: goto label_1c199c;
        case 0x1c19a0u: goto label_1c19a0;
        case 0x1c19a4u: goto label_1c19a4;
        case 0x1c19a8u: goto label_1c19a8;
        case 0x1c19acu: goto label_1c19ac;
        case 0x1c19b0u: goto label_1c19b0;
        case 0x1c19b4u: goto label_1c19b4;
        case 0x1c19b8u: goto label_1c19b8;
        case 0x1c19bcu: goto label_1c19bc;
        case 0x1c19c0u: goto label_1c19c0;
        case 0x1c19c4u: goto label_1c19c4;
        case 0x1c19c8u: goto label_1c19c8;
        case 0x1c19ccu: goto label_1c19cc;
        case 0x1c19d0u: goto label_1c19d0;
        case 0x1c19d4u: goto label_1c19d4;
        case 0x1c19d8u: goto label_1c19d8;
        case 0x1c19dcu: goto label_1c19dc;
        case 0x1c19e0u: goto label_1c19e0;
        case 0x1c19e4u: goto label_1c19e4;
        case 0x1c19e8u: goto label_1c19e8;
        case 0x1c19ecu: goto label_1c19ec;
        case 0x1c19f0u: goto label_1c19f0;
        case 0x1c19f4u: goto label_1c19f4;
        case 0x1c19f8u: goto label_1c19f8;
        case 0x1c19fcu: goto label_1c19fc;
        case 0x1c1a00u: goto label_1c1a00;
        case 0x1c1a04u: goto label_1c1a04;
        case 0x1c1a08u: goto label_1c1a08;
        case 0x1c1a0cu: goto label_1c1a0c;
        case 0x1c1a10u: goto label_1c1a10;
        case 0x1c1a14u: goto label_1c1a14;
        case 0x1c1a18u: goto label_1c1a18;
        case 0x1c1a1cu: goto label_1c1a1c;
        case 0x1c1a20u: goto label_1c1a20;
        case 0x1c1a24u: goto label_1c1a24;
        case 0x1c1a28u: goto label_1c1a28;
        case 0x1c1a2cu: goto label_1c1a2c;
        case 0x1c1a30u: goto label_1c1a30;
        case 0x1c1a34u: goto label_1c1a34;
        case 0x1c1a38u: goto label_1c1a38;
        case 0x1c1a3cu: goto label_1c1a3c;
        case 0x1c1a40u: goto label_1c1a40;
        case 0x1c1a44u: goto label_1c1a44;
        case 0x1c1a48u: goto label_1c1a48;
        case 0x1c1a4cu: goto label_1c1a4c;
        case 0x1c1a50u: goto label_1c1a50;
        case 0x1c1a54u: goto label_1c1a54;
        case 0x1c1a58u: goto label_1c1a58;
        case 0x1c1a5cu: goto label_1c1a5c;
        case 0x1c1a60u: goto label_1c1a60;
        case 0x1c1a64u: goto label_1c1a64;
        case 0x1c1a68u: goto label_1c1a68;
        case 0x1c1a6cu: goto label_1c1a6c;
        case 0x1c1a70u: goto label_1c1a70;
        case 0x1c1a74u: goto label_1c1a74;
        case 0x1c1a78u: goto label_1c1a78;
        case 0x1c1a7cu: goto label_1c1a7c;
        case 0x1c1a80u: goto label_1c1a80;
        case 0x1c1a84u: goto label_1c1a84;
        case 0x1c1a88u: goto label_1c1a88;
        case 0x1c1a8cu: goto label_1c1a8c;
        case 0x1c1a90u: goto label_1c1a90;
        case 0x1c1a94u: goto label_1c1a94;
        case 0x1c1a98u: goto label_1c1a98;
        case 0x1c1a9cu: goto label_1c1a9c;
        case 0x1c1aa0u: goto label_1c1aa0;
        case 0x1c1aa4u: goto label_1c1aa4;
        case 0x1c1aa8u: goto label_1c1aa8;
        case 0x1c1aacu: goto label_1c1aac;
        case 0x1c1ab0u: goto label_1c1ab0;
        case 0x1c1ab4u: goto label_1c1ab4;
        case 0x1c1ab8u: goto label_1c1ab8;
        case 0x1c1abcu: goto label_1c1abc;
        case 0x1c1ac0u: goto label_1c1ac0;
        case 0x1c1ac4u: goto label_1c1ac4;
        case 0x1c1ac8u: goto label_1c1ac8;
        case 0x1c1accu: goto label_1c1acc;
        case 0x1c1ad0u: goto label_1c1ad0;
        case 0x1c1ad4u: goto label_1c1ad4;
        case 0x1c1ad8u: goto label_1c1ad8;
        case 0x1c1adcu: goto label_1c1adc;
        case 0x1c1ae0u: goto label_1c1ae0;
        case 0x1c1ae4u: goto label_1c1ae4;
        case 0x1c1ae8u: goto label_1c1ae8;
        case 0x1c1aecu: goto label_1c1aec;
        case 0x1c1af0u: goto label_1c1af0;
        case 0x1c1af4u: goto label_1c1af4;
        case 0x1c1af8u: goto label_1c1af8;
        case 0x1c1afcu: goto label_1c1afc;
        case 0x1c1b00u: goto label_1c1b00;
        case 0x1c1b04u: goto label_1c1b04;
        case 0x1c1b08u: goto label_1c1b08;
        case 0x1c1b0cu: goto label_1c1b0c;
        case 0x1c1b10u: goto label_1c1b10;
        case 0x1c1b14u: goto label_1c1b14;
        case 0x1c1b18u: goto label_1c1b18;
        case 0x1c1b1cu: goto label_1c1b1c;
        case 0x1c1b20u: goto label_1c1b20;
        case 0x1c1b24u: goto label_1c1b24;
        case 0x1c1b28u: goto label_1c1b28;
        case 0x1c1b2cu: goto label_1c1b2c;
        case 0x1c1b30u: goto label_1c1b30;
        case 0x1c1b34u: goto label_1c1b34;
        case 0x1c1b38u: goto label_1c1b38;
        case 0x1c1b3cu: goto label_1c1b3c;
        case 0x1c1b40u: goto label_1c1b40;
        case 0x1c1b44u: goto label_1c1b44;
        case 0x1c1b48u: goto label_1c1b48;
        case 0x1c1b4cu: goto label_1c1b4c;
        case 0x1c1b50u: goto label_1c1b50;
        case 0x1c1b54u: goto label_1c1b54;
        case 0x1c1b58u: goto label_1c1b58;
        case 0x1c1b5cu: goto label_1c1b5c;
        case 0x1c1b60u: goto label_1c1b60;
        case 0x1c1b64u: goto label_1c1b64;
        case 0x1c1b68u: goto label_1c1b68;
        case 0x1c1b6cu: goto label_1c1b6c;
        case 0x1c1b70u: goto label_1c1b70;
        case 0x1c1b74u: goto label_1c1b74;
        case 0x1c1b78u: goto label_1c1b78;
        case 0x1c1b7cu: goto label_1c1b7c;
        case 0x1c1b80u: goto label_1c1b80;
        case 0x1c1b84u: goto label_1c1b84;
        case 0x1c1b88u: goto label_1c1b88;
        case 0x1c1b8cu: goto label_1c1b8c;
        case 0x1c1b90u: goto label_1c1b90;
        case 0x1c1b94u: goto label_1c1b94;
        case 0x1c1b98u: goto label_1c1b98;
        case 0x1c1b9cu: goto label_1c1b9c;
        case 0x1c1ba0u: goto label_1c1ba0;
        case 0x1c1ba4u: goto label_1c1ba4;
        case 0x1c1ba8u: goto label_1c1ba8;
        case 0x1c1bacu: goto label_1c1bac;
        case 0x1c1bb0u: goto label_1c1bb0;
        case 0x1c1bb4u: goto label_1c1bb4;
        case 0x1c1bb8u: goto label_1c1bb8;
        case 0x1c1bbcu: goto label_1c1bbc;
        case 0x1c1bc0u: goto label_1c1bc0;
        case 0x1c1bc4u: goto label_1c1bc4;
        case 0x1c1bc8u: goto label_1c1bc8;
        case 0x1c1bccu: goto label_1c1bcc;
        case 0x1c1bd0u: goto label_1c1bd0;
        case 0x1c1bd4u: goto label_1c1bd4;
        case 0x1c1bd8u: goto label_1c1bd8;
        case 0x1c1bdcu: goto label_1c1bdc;
        case 0x1c1be0u: goto label_1c1be0;
        case 0x1c1be4u: goto label_1c1be4;
        case 0x1c1be8u: goto label_1c1be8;
        case 0x1c1becu: goto label_1c1bec;
        case 0x1c1bf0u: goto label_1c1bf0;
        case 0x1c1bf4u: goto label_1c1bf4;
        case 0x1c1bf8u: goto label_1c1bf8;
        case 0x1c1bfcu: goto label_1c1bfc;
        case 0x1c1c00u: goto label_1c1c00;
        case 0x1c1c04u: goto label_1c1c04;
        case 0x1c1c08u: goto label_1c1c08;
        case 0x1c1c0cu: goto label_1c1c0c;
        case 0x1c1c10u: goto label_1c1c10;
        case 0x1c1c14u: goto label_1c1c14;
        case 0x1c1c18u: goto label_1c1c18;
        case 0x1c1c1cu: goto label_1c1c1c;
        case 0x1c1c20u: goto label_1c1c20;
        case 0x1c1c24u: goto label_1c1c24;
        case 0x1c1c28u: goto label_1c1c28;
        case 0x1c1c2cu: goto label_1c1c2c;
        case 0x1c1c30u: goto label_1c1c30;
        case 0x1c1c34u: goto label_1c1c34;
        case 0x1c1c38u: goto label_1c1c38;
        case 0x1c1c3cu: goto label_1c1c3c;
        case 0x1c1c40u: goto label_1c1c40;
        case 0x1c1c44u: goto label_1c1c44;
        case 0x1c1c48u: goto label_1c1c48;
        case 0x1c1c4cu: goto label_1c1c4c;
        case 0x1c1c50u: goto label_1c1c50;
        case 0x1c1c54u: goto label_1c1c54;
        case 0x1c1c58u: goto label_1c1c58;
        case 0x1c1c5cu: goto label_1c1c5c;
        case 0x1c1c60u: goto label_1c1c60;
        case 0x1c1c64u: goto label_1c1c64;
        case 0x1c1c68u: goto label_1c1c68;
        case 0x1c1c6cu: goto label_1c1c6c;
        case 0x1c1c70u: goto label_1c1c70;
        case 0x1c1c74u: goto label_1c1c74;
        case 0x1c1c78u: goto label_1c1c78;
        case 0x1c1c7cu: goto label_1c1c7c;
        case 0x1c1c80u: goto label_1c1c80;
        case 0x1c1c84u: goto label_1c1c84;
        case 0x1c1c88u: goto label_1c1c88;
        case 0x1c1c8cu: goto label_1c1c8c;
        case 0x1c1c90u: goto label_1c1c90;
        case 0x1c1c94u: goto label_1c1c94;
        case 0x1c1c98u: goto label_1c1c98;
        case 0x1c1c9cu: goto label_1c1c9c;
        case 0x1c1ca0u: goto label_1c1ca0;
        case 0x1c1ca4u: goto label_1c1ca4;
        case 0x1c1ca8u: goto label_1c1ca8;
        case 0x1c1cacu: goto label_1c1cac;
        case 0x1c1cb0u: goto label_1c1cb0;
        case 0x1c1cb4u: goto label_1c1cb4;
        case 0x1c1cb8u: goto label_1c1cb8;
        case 0x1c1cbcu: goto label_1c1cbc;
        case 0x1c1cc0u: goto label_1c1cc0;
        case 0x1c1cc4u: goto label_1c1cc4;
        case 0x1c1cc8u: goto label_1c1cc8;
        case 0x1c1cccu: goto label_1c1ccc;
        case 0x1c1cd0u: goto label_1c1cd0;
        case 0x1c1cd4u: goto label_1c1cd4;
        case 0x1c1cd8u: goto label_1c1cd8;
        case 0x1c1cdcu: goto label_1c1cdc;
        case 0x1c1ce0u: goto label_1c1ce0;
        case 0x1c1ce4u: goto label_1c1ce4;
        case 0x1c1ce8u: goto label_1c1ce8;
        case 0x1c1cecu: goto label_1c1cec;
        case 0x1c1cf0u: goto label_1c1cf0;
        case 0x1c1cf4u: goto label_1c1cf4;
        case 0x1c1cf8u: goto label_1c1cf8;
        case 0x1c1cfcu: goto label_1c1cfc;
        case 0x1c1d00u: goto label_1c1d00;
        case 0x1c1d04u: goto label_1c1d04;
        case 0x1c1d08u: goto label_1c1d08;
        case 0x1c1d0cu: goto label_1c1d0c;
        case 0x1c1d10u: goto label_1c1d10;
        case 0x1c1d14u: goto label_1c1d14;
        case 0x1c1d18u: goto label_1c1d18;
        case 0x1c1d1cu: goto label_1c1d1c;
        case 0x1c1d20u: goto label_1c1d20;
        case 0x1c1d24u: goto label_1c1d24;
        case 0x1c1d28u: goto label_1c1d28;
        case 0x1c1d2cu: goto label_1c1d2c;
        case 0x1c1d30u: goto label_1c1d30;
        case 0x1c1d34u: goto label_1c1d34;
        case 0x1c1d38u: goto label_1c1d38;
        case 0x1c1d3cu: goto label_1c1d3c;
        case 0x1c1d40u: goto label_1c1d40;
        case 0x1c1d44u: goto label_1c1d44;
        case 0x1c1d48u: goto label_1c1d48;
        case 0x1c1d4cu: goto label_1c1d4c;
        case 0x1c1d50u: goto label_1c1d50;
        case 0x1c1d54u: goto label_1c1d54;
        case 0x1c1d58u: goto label_1c1d58;
        case 0x1c1d5cu: goto label_1c1d5c;
        case 0x1c1d60u: goto label_1c1d60;
        case 0x1c1d64u: goto label_1c1d64;
        case 0x1c1d68u: goto label_1c1d68;
        case 0x1c1d6cu: goto label_1c1d6c;
        case 0x1c1d70u: goto label_1c1d70;
        case 0x1c1d74u: goto label_1c1d74;
        case 0x1c1d78u: goto label_1c1d78;
        case 0x1c1d7cu: goto label_1c1d7c;
        case 0x1c1d80u: goto label_1c1d80;
        case 0x1c1d84u: goto label_1c1d84;
        case 0x1c1d88u: goto label_1c1d88;
        case 0x1c1d8cu: goto label_1c1d8c;
        case 0x1c1d90u: goto label_1c1d90;
        case 0x1c1d94u: goto label_1c1d94;
        case 0x1c1d98u: goto label_1c1d98;
        case 0x1c1d9cu: goto label_1c1d9c;
        case 0x1c1da0u: goto label_1c1da0;
        case 0x1c1da4u: goto label_1c1da4;
        case 0x1c1da8u: goto label_1c1da8;
        case 0x1c1dacu: goto label_1c1dac;
        case 0x1c1db0u: goto label_1c1db0;
        case 0x1c1db4u: goto label_1c1db4;
        case 0x1c1db8u: goto label_1c1db8;
        case 0x1c1dbcu: goto label_1c1dbc;
        case 0x1c1dc0u: goto label_1c1dc0;
        case 0x1c1dc4u: goto label_1c1dc4;
        case 0x1c1dc8u: goto label_1c1dc8;
        case 0x1c1dccu: goto label_1c1dcc;
        case 0x1c1dd0u: goto label_1c1dd0;
        case 0x1c1dd4u: goto label_1c1dd4;
        case 0x1c1dd8u: goto label_1c1dd8;
        case 0x1c1ddcu: goto label_1c1ddc;
        case 0x1c1de0u: goto label_1c1de0;
        case 0x1c1de4u: goto label_1c1de4;
        case 0x1c1de8u: goto label_1c1de8;
        case 0x1c1decu: goto label_1c1dec;
        case 0x1c1df0u: goto label_1c1df0;
        case 0x1c1df4u: goto label_1c1df4;
        case 0x1c1df8u: goto label_1c1df8;
        case 0x1c1dfcu: goto label_1c1dfc;
        case 0x1c1e00u: goto label_1c1e00;
        case 0x1c1e04u: goto label_1c1e04;
        case 0x1c1e08u: goto label_1c1e08;
        case 0x1c1e0cu: goto label_1c1e0c;
        case 0x1c1e10u: goto label_1c1e10;
        case 0x1c1e14u: goto label_1c1e14;
        case 0x1c1e18u: goto label_1c1e18;
        case 0x1c1e1cu: goto label_1c1e1c;
        case 0x1c1e20u: goto label_1c1e20;
        case 0x1c1e24u: goto label_1c1e24;
        case 0x1c1e28u: goto label_1c1e28;
        case 0x1c1e2cu: goto label_1c1e2c;
        case 0x1c1e30u: goto label_1c1e30;
        case 0x1c1e34u: goto label_1c1e34;
        case 0x1c1e38u: goto label_1c1e38;
        case 0x1c1e3cu: goto label_1c1e3c;
        case 0x1c1e40u: goto label_1c1e40;
        case 0x1c1e44u: goto label_1c1e44;
        case 0x1c1e48u: goto label_1c1e48;
        case 0x1c1e4cu: goto label_1c1e4c;
        case 0x1c1e50u: goto label_1c1e50;
        case 0x1c1e54u: goto label_1c1e54;
        case 0x1c1e58u: goto label_1c1e58;
        case 0x1c1e5cu: goto label_1c1e5c;
        case 0x1c1e60u: goto label_1c1e60;
        case 0x1c1e64u: goto label_1c1e64;
        case 0x1c1e68u: goto label_1c1e68;
        case 0x1c1e6cu: goto label_1c1e6c;
        case 0x1c1e70u: goto label_1c1e70;
        case 0x1c1e74u: goto label_1c1e74;
        case 0x1c1e78u: goto label_1c1e78;
        case 0x1c1e7cu: goto label_1c1e7c;
        case 0x1c1e80u: goto label_1c1e80;
        case 0x1c1e84u: goto label_1c1e84;
        case 0x1c1e88u: goto label_1c1e88;
        case 0x1c1e8cu: goto label_1c1e8c;
        case 0x1c1e90u: goto label_1c1e90;
        case 0x1c1e94u: goto label_1c1e94;
        case 0x1c1e98u: goto label_1c1e98;
        case 0x1c1e9cu: goto label_1c1e9c;
        case 0x1c1ea0u: goto label_1c1ea0;
        case 0x1c1ea4u: goto label_1c1ea4;
        case 0x1c1ea8u: goto label_1c1ea8;
        case 0x1c1eacu: goto label_1c1eac;
        case 0x1c1eb0u: goto label_1c1eb0;
        case 0x1c1eb4u: goto label_1c1eb4;
        case 0x1c1eb8u: goto label_1c1eb8;
        case 0x1c1ebcu: goto label_1c1ebc;
        case 0x1c1ec0u: goto label_1c1ec0;
        case 0x1c1ec4u: goto label_1c1ec4;
        case 0x1c1ec8u: goto label_1c1ec8;
        case 0x1c1eccu: goto label_1c1ecc;
        case 0x1c1ed0u: goto label_1c1ed0;
        case 0x1c1ed4u: goto label_1c1ed4;
        case 0x1c1ed8u: goto label_1c1ed8;
        case 0x1c1edcu: goto label_1c1edc;
        case 0x1c1ee0u: goto label_1c1ee0;
        case 0x1c1ee4u: goto label_1c1ee4;
        case 0x1c1ee8u: goto label_1c1ee8;
        case 0x1c1eecu: goto label_1c1eec;
        case 0x1c1ef0u: goto label_1c1ef0;
        case 0x1c1ef4u: goto label_1c1ef4;
        case 0x1c1ef8u: goto label_1c1ef8;
        case 0x1c1efcu: goto label_1c1efc;
        case 0x1c1f00u: goto label_1c1f00;
        case 0x1c1f04u: goto label_1c1f04;
        case 0x1c1f08u: goto label_1c1f08;
        case 0x1c1f0cu: goto label_1c1f0c;
        case 0x1c1f10u: goto label_1c1f10;
        case 0x1c1f14u: goto label_1c1f14;
        case 0x1c1f18u: goto label_1c1f18;
        case 0x1c1f1cu: goto label_1c1f1c;
        case 0x1c1f20u: goto label_1c1f20;
        case 0x1c1f24u: goto label_1c1f24;
        case 0x1c1f28u: goto label_1c1f28;
        case 0x1c1f2cu: goto label_1c1f2c;
        case 0x1c1f30u: goto label_1c1f30;
        case 0x1c1f34u: goto label_1c1f34;
        case 0x1c1f38u: goto label_1c1f38;
        case 0x1c1f3cu: goto label_1c1f3c;
        case 0x1c1f40u: goto label_1c1f40;
        case 0x1c1f44u: goto label_1c1f44;
        case 0x1c1f48u: goto label_1c1f48;
        case 0x1c1f4cu: goto label_1c1f4c;
        case 0x1c1f50u: goto label_1c1f50;
        case 0x1c1f54u: goto label_1c1f54;
        case 0x1c1f58u: goto label_1c1f58;
        case 0x1c1f5cu: goto label_1c1f5c;
        case 0x1c1f60u: goto label_1c1f60;
        case 0x1c1f64u: goto label_1c1f64;
        case 0x1c1f68u: goto label_1c1f68;
        case 0x1c1f6cu: goto label_1c1f6c;
        case 0x1c1f70u: goto label_1c1f70;
        case 0x1c1f74u: goto label_1c1f74;
        case 0x1c1f78u: goto label_1c1f78;
        case 0x1c1f7cu: goto label_1c1f7c;
        case 0x1c1f80u: goto label_1c1f80;
        case 0x1c1f84u: goto label_1c1f84;
        case 0x1c1f88u: goto label_1c1f88;
        case 0x1c1f8cu: goto label_1c1f8c;
        case 0x1c1f90u: goto label_1c1f90;
        case 0x1c1f94u: goto label_1c1f94;
        case 0x1c1f98u: goto label_1c1f98;
        case 0x1c1f9cu: goto label_1c1f9c;
        case 0x1c1fa0u: goto label_1c1fa0;
        case 0x1c1fa4u: goto label_1c1fa4;
        case 0x1c1fa8u: goto label_1c1fa8;
        case 0x1c1facu: goto label_1c1fac;
        case 0x1c1fb0u: goto label_1c1fb0;
        case 0x1c1fb4u: goto label_1c1fb4;
        case 0x1c1fb8u: goto label_1c1fb8;
        case 0x1c1fbcu: goto label_1c1fbc;
        case 0x1c1fc0u: goto label_1c1fc0;
        case 0x1c1fc4u: goto label_1c1fc4;
        case 0x1c1fc8u: goto label_1c1fc8;
        case 0x1c1fccu: goto label_1c1fcc;
        case 0x1c1fd0u: goto label_1c1fd0;
        case 0x1c1fd4u: goto label_1c1fd4;
        case 0x1c1fd8u: goto label_1c1fd8;
        case 0x1c1fdcu: goto label_1c1fdc;
        case 0x1c1fe0u: goto label_1c1fe0;
        case 0x1c1fe4u: goto label_1c1fe4;
        case 0x1c1fe8u: goto label_1c1fe8;
        case 0x1c1fecu: goto label_1c1fec;
        case 0x1c1ff0u: goto label_1c1ff0;
        case 0x1c1ff4u: goto label_1c1ff4;
        case 0x1c1ff8u: goto label_1c1ff8;
        case 0x1c1ffcu: goto label_1c1ffc;
        case 0x1c2000u: goto label_1c2000;
        case 0x1c2004u: goto label_1c2004;
        case 0x1c2008u: goto label_1c2008;
        case 0x1c200cu: goto label_1c200c;
        case 0x1c2010u: goto label_1c2010;
        case 0x1c2014u: goto label_1c2014;
        case 0x1c2018u: goto label_1c2018;
        case 0x1c201cu: goto label_1c201c;
        case 0x1c2020u: goto label_1c2020;
        case 0x1c2024u: goto label_1c2024;
        case 0x1c2028u: goto label_1c2028;
        case 0x1c202cu: goto label_1c202c;
        case 0x1c2030u: goto label_1c2030;
        case 0x1c2034u: goto label_1c2034;
        case 0x1c2038u: goto label_1c2038;
        case 0x1c203cu: goto label_1c203c;
        case 0x1c2040u: goto label_1c2040;
        case 0x1c2044u: goto label_1c2044;
        case 0x1c2048u: goto label_1c2048;
        case 0x1c204cu: goto label_1c204c;
        case 0x1c2050u: goto label_1c2050;
        case 0x1c2054u: goto label_1c2054;
        case 0x1c2058u: goto label_1c2058;
        case 0x1c205cu: goto label_1c205c;
        case 0x1c2060u: goto label_1c2060;
        case 0x1c2064u: goto label_1c2064;
        case 0x1c2068u: goto label_1c2068;
        case 0x1c206cu: goto label_1c206c;
        case 0x1c2070u: goto label_1c2070;
        case 0x1c2074u: goto label_1c2074;
        case 0x1c2078u: goto label_1c2078;
        case 0x1c207cu: goto label_1c207c;
        case 0x1c2080u: goto label_1c2080;
        case 0x1c2084u: goto label_1c2084;
        case 0x1c2088u: goto label_1c2088;
        case 0x1c208cu: goto label_1c208c;
        case 0x1c2090u: goto label_1c2090;
        case 0x1c2094u: goto label_1c2094;
        case 0x1c2098u: goto label_1c2098;
        case 0x1c209cu: goto label_1c209c;
        case 0x1c20a0u: goto label_1c20a0;
        case 0x1c20a4u: goto label_1c20a4;
        case 0x1c20a8u: goto label_1c20a8;
        case 0x1c20acu: goto label_1c20ac;
        case 0x1c20b0u: goto label_1c20b0;
        case 0x1c20b4u: goto label_1c20b4;
        case 0x1c20b8u: goto label_1c20b8;
        case 0x1c20bcu: goto label_1c20bc;
        case 0x1c20c0u: goto label_1c20c0;
        case 0x1c20c4u: goto label_1c20c4;
        default: break;
    }

    ctx->pc = 0x1c0678u;

label_1c0678:
    // 0x1c0678: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1c0678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_1c067c:
    // 0x1c067c: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1c067cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_1c0680:
    // 0x1c0680: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x1c0680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_1c0684:
    // 0x1c0684: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c0684u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c0688:
    // 0x1c0688: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1c0688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_1c068c:
    // 0x1c068c: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1c068cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_1c0690:
    // 0x1c0690: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x1c0690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_1c0694:
    // 0x1c0694: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1c0694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1c0698:
    // 0x1c0698: 0xc0b6dac  jal         func_2DB6B0
label_1c069c:
    if (ctx->pc == 0x1C069Cu) {
        ctx->pc = 0x1C069Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0698u;
        // 0x1c069c: 0xe7b400d0  swc1        $f20, 0xD0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C06A0u;
        goto label_1c06a0;
    }
    ctx->pc = 0x1C0698u;
    SET_GPR_U32(ctx, 31, 0x1C06A0u);
    ctx->pc = 0x1C069Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0698u;
    // 0x1c069c: 0xe7b400d0  swc1        $f20, 0xD0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1C0698u, 0x1C06A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C06A0u;
label_1c06a0:
    // 0x1c06a0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1c06a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c06a4:
    // 0x1c06a4: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1c06a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c06a8:
    // 0x1c06a8: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x1c06a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c06ac:
    // 0x1c06ac: 0xc070928  jal         func_1C24A0
label_1c06b0:
    if (ctx->pc == 0x1C06B0u) {
        ctx->pc = 0x1C06B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C06ACu;
        // 0x1c06b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C06B4u;
        goto label_1c06b4;
    }
    ctx->pc = 0x1C06ACu;
    SET_GPR_U32(ctx, 31, 0x1C06B4u);
    ctx->pc = 0x1C06B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C06ACu;
    // 0x1c06b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C24A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C24A0u, 0x1C06ACu, 0x1C06B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C06B4u;
label_1c06b4:
    // 0x1c06b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c06b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c06b8:
    // 0x1c06b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c06b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c06bc:
    // 0x1c06bc: 0x56220021  bnel        $s1, $v0, . + 4 + (0x21 << 2)
label_1c06c0:
    if (ctx->pc == 0x1C06C0u) {
        ctx->pc = 0x1C06C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C06BCu;
        // 0x1c06c0: 0x924302f6  lbu         $v1, 0x2F6($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C06C4u;
        goto label_1c06c4;
    }
    ctx->pc = 0x1C06BCu;
    {
        const bool branch_taken_0x1c06bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c06bc) {
            ctx->pc = 0x1C06C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C06BCu;
            // 0x1c06c0: 0x924302f6  lbu         $v1, 0x2F6($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0744u;
            goto label_1c0744;
        }
    }
    ctx->pc = 0x1C06C4u;
label_1c06c4:
    // 0x1c06c4: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x1c06c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c06c8:
    // 0x1c06c8: 0x8e430214  lw          $v1, 0x214($s2)
    ctx->pc = 0x1c06c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
label_1c06cc:
    // 0x1c06cc: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1c06ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_1c06d0:
    // 0x1c06d0: 0x2610ea60  addiu       $s0, $s0, -0x15A0
    ctx->pc = 0x1c06d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
label_1c06d4:
    // 0x1c06d4: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1c06d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1c06d8:
    // 0x1c06d8: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x1c06d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1c06dc:
    // 0x1c06dc: 0x40f809  jalr        $v0
label_1c06e0:
    if (ctx->pc == 0x1C06E0u) {
        ctx->pc = 0x1C06E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C06DCu;
        // 0x1c06e0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C06E4u;
        goto label_1c06e4;
    }
    ctx->pc = 0x1C06DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C06E4u);
        ctx->pc = 0x1C06E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C06DCu;
        // 0x1c06e0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C06DCu, 0x1C06E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C06E4u;
label_1c06e4:
    // 0x1c06e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c06e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c06e8:
    // 0x1c06e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c06e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c06ec:
    // 0x1c06ec: 0xc0b0924  jal         func_2C2490
label_1c06f0:
    if (ctx->pc == 0x1C06F0u) {
        ctx->pc = 0x1C06F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C06ECu;
        // 0x1c06f0: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C06F4u;
        goto label_1c06f4;
    }
    ctx->pc = 0x1C06ECu;
    SET_GPR_U32(ctx, 31, 0x1C06F4u);
    ctx->pc = 0x1C06F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C06ECu;
    // 0x1c06f0: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2490u, 0x1C06ECu, 0x1C06F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C06F4u;
label_1c06f4:
    // 0x1c06f4: 0x54510013  bnel        $v0, $s1, . + 4 + (0x13 << 2)
label_1c06f8:
    if (ctx->pc == 0x1C06F8u) {
        ctx->pc = 0x1C06F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C06F4u;
        // 0x1c06f8: 0x924302f6  lbu         $v1, 0x2F6($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C06FCu;
        goto label_1c06fc;
    }
    ctx->pc = 0x1C06F4u;
    {
        const bool branch_taken_0x1c06f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1c06f4) {
            ctx->pc = 0x1C06F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C06F4u;
            // 0x1c06f8: 0x924302f6  lbu         $v1, 0x2F6($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0744u;
            goto label_1c0744;
        }
    }
    ctx->pc = 0x1C06FCu;
label_1c06fc:
    // 0x1c06fc: 0x8e430214  lw          $v1, 0x214($s2)
    ctx->pc = 0x1c06fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
label_1c0700:
    // 0x1c0700: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1c0700u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1c0704:
    // 0x1c0704: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x1c0704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1c0708:
    // 0x1c0708: 0x40f809  jalr        $v0
label_1c070c:
    if (ctx->pc == 0x1C070Cu) {
        ctx->pc = 0x1C070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0708u;
        // 0x1c070c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0710u;
        goto label_1c0710;
    }
    ctx->pc = 0x1C0708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C0710u);
        ctx->pc = 0x1C070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0708u;
        // 0x1c070c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0708u, 0x1C0710u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C0710u;
label_1c0710:
    // 0x1c0710: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c0710u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c0714:
    // 0x1c0714: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x1c0714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c0718:
    // 0x1c0718: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x1c0718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c071c:
    // 0x1c071c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1c071cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1c0720:
    // 0x1c0720: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1c0720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c0724:
    // 0x1c0724: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x1c0724u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1c0728:
    // 0x1c0728: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1c0728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_1c072c:
    // 0x1c072c: 0x8e420214  lw          $v0, 0x214($s2)
    ctx->pc = 0x1c072cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
label_1c0730:
    // 0x1c0730: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1c0730u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1c0734:
    // 0x1c0734: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1c0734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1c0738:
    // 0x1c0738: 0x60f809  jalr        $v1
label_1c073c:
    if (ctx->pc == 0x1C073Cu) {
        ctx->pc = 0x1C073Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0738u;
        // 0x1c073c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0740u;
        goto label_1c0740;
    }
    ctx->pc = 0x1C0738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C0740u);
        ctx->pc = 0x1C073Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0738u;
        // 0x1c073c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0738u, 0x1C0740u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C0740u;
label_1c0740:
    // 0x1c0740: 0x924302f6  lbu         $v1, 0x2F6($s2)
    ctx->pc = 0x1c0740u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
label_1c0744:
    // 0x1c0744: 0x2c620018  sltiu       $v0, $v1, 0x18
    ctx->pc = 0x1c0744u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
label_1c0748:
    // 0x1c0748: 0x10400654  beqz        $v0, . + 4 + (0x654 << 2)
label_1c074c:
    if (ctx->pc == 0x1C074Cu) {
        ctx->pc = 0x1C074Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0748u;
        // 0x1c074c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0750u;
        goto label_1c0750;
    }
    ctx->pc = 0x1C0748u;
    {
        const bool branch_taken_0x1c0748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C074Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0748u;
        // 0x1c074c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0748) {
            ctx->pc = 0x1C209Cu;
            goto label_1c209c;
        }
    }
    ctx->pc = 0x1C0750u;
label_1c0750:
    // 0x1c0750: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c0750u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1c0754:
    // 0x1c0754: 0x24429990  addiu       $v0, $v0, -0x6670
    ctx->pc = 0x1c0754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941072));
label_1c0758:
    // 0x1c0758: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c0758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1c075c:
    // 0x1c075c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1c075cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1c0760:
    // 0x1c0760: 0x800008  jr          $a0
label_1c0764:
    if (ctx->pc == 0x1C0764u) {
        ctx->pc = 0x1C0768u;
        goto label_1c0768;
    }
    ctx->pc = 0x1C0760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C0768u: goto label_1c0768;
            case 0x1C07C4u: goto label_1c07c4;
            case 0x1C0A30u: goto label_1c0a30;
            case 0x1C0A74u: goto label_1c0a74;
            case 0x1C0E10u: goto label_1c0e10;
            case 0x1C1A7Cu: goto label_1c1a7c;
            case 0x1C1AE4u: goto label_1c1ae4;
            case 0x1C1B18u: goto label_1c1b18;
            case 0x1C1C0Cu: goto label_1c1c0c;
            case 0x1C1D64u: goto label_1c1d64;
            case 0x1C1E00u: goto label_1c1e00;
            case 0x1C1EF8u: goto label_1c1ef8;
            case 0x1C1FB4u: goto label_1c1fb4;
            case 0x1C2050u: goto label_1c2050;
            case 0x1C209Cu: goto label_1c209c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0760u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C0768u;
label_1c0768:
    // 0x1c0768: 0x92420676  lbu         $v0, 0x676($s2)
    ctx->pc = 0x1c0768u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1654)));
label_1c076c:
    // 0x1c076c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c076cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c0770:
    // 0x1c0770: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1c0770u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
label_1c0774:
    // 0x1c0774: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c0774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1c0778:
    // 0x1c0778: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_1c077c:
    if (ctx->pc == 0x1C077Cu) {
        ctx->pc = 0x1C077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0778u;
        // 0x1c077c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0780u;
        goto label_1c0780;
    }
    ctx->pc = 0x1C0778u;
    {
        const bool branch_taken_0x1c0778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0778u;
        // 0x1c077c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0778) {
            ctx->pc = 0x1C0788u;
            goto label_1c0788;
        }
    }
    ctx->pc = 0x1C0780u;
label_1c0780:
    // 0x1c0780: 0x10000646  b           . + 4 + (0x646 << 2)
label_1c0784:
    if (ctx->pc == 0x1C0784u) {
        ctx->pc = 0x1C0784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0780u;
        // 0x1c0784: 0xa24202f6  sb          $v0, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0788u;
        goto label_1c0788;
    }
    ctx->pc = 0x1C0780u;
    {
        const bool branch_taken_0x1c0780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0780u;
        // 0x1c0784: 0xa24202f6  sb          $v0, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0780) {
            ctx->pc = 0x1C209Cu;
            goto label_1c209c;
        }
    }
    ctx->pc = 0x1C0788u;
label_1c0788:
    // 0x1c0788: 0xc0c73f8  jal         func_31CFE0
label_1c078c:
    if (ctx->pc == 0x1C078Cu) {
        ctx->pc = 0x1C0790u;
        goto label_1c0790;
    }
    ctx->pc = 0x1C0788u;
    SET_GPR_U32(ctx, 31, 0x1C0790u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x1C0788u, 0x1C0790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0790u;
label_1c0790:
    // 0x1c0790: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1c0790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1c0794:
    // 0x1c0794: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1c0794u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1c0798:
    // 0x1c0798: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_1c079c:
    if (ctx->pc == 0x1C079Cu) {
        ctx->pc = 0x1C079Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0798u;
        // 0x1c079c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C07A0u;
        goto label_1c07a0;
    }
    ctx->pc = 0x1C0798u;
    {
        const bool branch_taken_0x1c0798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0798) {
            ctx->pc = 0x1C079Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0798u;
            // 0x1c079c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C07A0u;
            goto label_1c07a0;
        }
    }
    ctx->pc = 0x1C07A0u;
label_1c07a0:
    // 0x1c07a0: 0x8e4500f0  lw          $a1, 0xF0($s2)
    ctx->pc = 0x1c07a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_1c07a4:
    // 0x1c07a4: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x1c07a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
label_1c07a8:
    // 0x1c07a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c07a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1c07ac:
    // 0x1c07ac: 0x2010  mfhi        $a0
    ctx->pc = 0x1c07acu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_1c07b0:
    // 0x1c07b0: 0x2484001e  addiu       $a0, $a0, 0x1E
    ctx->pc = 0x1c07b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30));
label_1c07b4:
    // 0x1c07b4: 0xa644056a  sh          $a0, 0x56A($s2)
    ctx->pc = 0x1c07b4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1386), (uint16_t)GPR_U32(ctx, 4));
label_1c07b8:
    // 0x1c07b8: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1c07b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c07bc:
    // 0x1c07bc: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x1c07bcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_1c07c0:
    // 0x1c07c0: 0xe6400620  swc1        $f0, 0x620($s2)
    ctx->pc = 0x1c07c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1568), bits); }
label_1c07c4:
    // 0x1c07c4: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x1c07c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_1c07c8:
    // 0x1c07c8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1c07c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1c07cc:
    // 0x1c07cc: 0x50820008  beql        $a0, $v0, . + 4 + (0x8 << 2)
label_1c07d0:
    if (ctx->pc == 0x1C07D0u) {
        ctx->pc = 0x1C07D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C07CCu;
        // 0x1c07d0: 0x8e4300f0  lw          $v1, 0xF0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C07D4u;
        goto label_1c07d4;
    }
    ctx->pc = 0x1C07CCu;
    {
        const bool branch_taken_0x1c07cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c07cc) {
            ctx->pc = 0x1C07D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C07CCu;
            // 0x1c07d0: 0x8e4300f0  lw          $v1, 0xF0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C07F0u;
            goto label_1c07f0;
        }
    }
    ctx->pc = 0x1C07D4u;
label_1c07d4:
    // 0x1c07d4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1c07d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c07d8:
    // 0x1c07d8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1c07d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1c07dc:
    // 0x1c07dc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1c07dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c07e0:
    // 0x1c07e0: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x1c07e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_1c07e4:
    // 0x1c07e4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1c07e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c07e8:
    // 0x1c07e8: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1c07e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_1c07ec:
    // 0x1c07ec: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x1c07ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_1c07f0:
    // 0x1c07f0: 0x26420610  addiu       $v0, $s2, 0x610
    ctx->pc = 0x1c07f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1552));
label_1c07f4:
    // 0x1c07f4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1c07f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1c07f8:
    // 0x1c07f8: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1c07f8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c07fc:
    // 0x1c07fc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c07fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c0800:
    // 0x1c0800: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1c0800u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c0804:
    // 0x1c0804: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x1c0804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_1c0808:
    // 0x1c0808: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1c0808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1c080c:
    // 0x1c080c: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
label_1c0810:
    if (ctx->pc == 0x1C0810u) {
        ctx->pc = 0x1C0810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C080Cu;
        // 0x1c0810: 0xc6400614  lwc1        $f0, 0x614($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0814u;
        goto label_1c0814;
    }
    ctx->pc = 0x1C080Cu;
    {
        const bool branch_taken_0x1c080c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c080c) {
            ctx->pc = 0x1C0810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C080Cu;
            // 0x1c0810: 0xc6400614  lwc1        $f0, 0x614($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0830u;
            goto label_1c0830;
        }
    }
    ctx->pc = 0x1C0814u;
label_1c0814:
    // 0x1c0814: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1c0814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c0818:
    // 0x1c0818: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1c0818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1c081c:
    // 0x1c081c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1c081cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c0820:
    // 0x1c0820: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1c0820u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1c0824:
    // 0x1c0824: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1c0824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c0828:
    // 0x1c0828: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1c0828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1c082c:
    // 0x1c082c: 0xc6400614  lwc1        $f0, 0x614($s2)
    ctx->pc = 0x1c082cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c0830:
    // 0x1c0830: 0xc6410600  lwc1        $f1, 0x600($s2)
    ctx->pc = 0x1c0830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c0834:
    // 0x1c0834: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1c0834u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c0838:
    // 0x1c0838: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c0838u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1c083c:
    // 0x1c083c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1c083cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c0840:
    // 0x1c0840: 0x0  nop
    ctx->pc = 0x1c0840u;
    // NOP
label_1c0844:
    // 0x1c0844: 0x4500002d  bc1f        . + 4 + (0x2D << 2)
label_1c0848:
    if (ctx->pc == 0x1C0848u) {
        ctx->pc = 0x1C0848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0844u;
        // 0x1c0848: 0xe6400614  swc1        $f0, 0x614($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1556), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C084Cu;
        goto label_1c084c;
    }
    ctx->pc = 0x1C0844u;
    {
        const bool branch_taken_0x1c0844 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C0848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0844u;
        // 0x1c0848: 0xe6400614  swc1        $f0, 0x614($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0844) {
            ctx->pc = 0x1C08FCu;
            goto label_1c08fc;
        }
    }
    ctx->pc = 0x1C084Cu;
label_1c084c:
    // 0x1c084c: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x1c084cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_1c0850:
    // 0x1c0850: 0xc6410620  lwc1        $f1, 0x620($s2)
    ctx->pc = 0x1c0850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c0854:
    // 0x1c0854: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1c0854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c0858:
    // 0x1c0858: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c0858u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c085c:
    // 0x1c085c: 0x0  nop
    ctx->pc = 0x1c085cu;
    // NOP
label_1c0860:
    // 0x1c0860: 0x45000026  bc1f        . + 4 + (0x26 << 2)
label_1c0864:
    if (ctx->pc == 0x1C0864u) {
        ctx->pc = 0x1C0868u;
        goto label_1c0868;
    }
    ctx->pc = 0x1C0860u;
    {
        const bool branch_taken_0x1c0860 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c0860) {
            ctx->pc = 0x1C08FCu;
            goto label_1c08fc;
        }
    }
    ctx->pc = 0x1C0868u;
label_1c0868:
    // 0x1c0868: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x1c0868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c086c:
    // 0x1c086c: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x1c086cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c0870:
    // 0x1c0870: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c0870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c0874:
    // 0x1c0874: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1c0874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c0878:
    // 0x1c0878: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1c0878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1c087c:
    // 0x1c087c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1c087cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1c0880:
    // 0x1c0880: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1c0880u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1c0884:
    // 0x1c0884: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c0884u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0888:
    // 0x1c0888: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c0888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1c088c:
    // 0x1c088c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c088cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c0890:
    // 0x1c0890: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1c0890u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c0894:
    // 0x1c0894: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1c0894u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_1c0898:
    // 0x1c0898: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1c0898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_1c089c:
    // 0x1c089c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1c089cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_1c08a0:
    // 0x1c08a0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1c08a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1c08a4:
    // 0x1c08a4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1c08a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1c08a8:
    // 0x1c08a8: 0x24090400  addiu       $t1, $zero, 0x400
    ctx->pc = 0x1c08a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1c08ac:
    // 0x1c08ac: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1c08acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1c08b0:
    // 0x1c08b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c08b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c08b4:
    // 0x1c08b4: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1c08b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1c08b8:
    // 0x1c08b8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1c08b8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c08bc:
    // 0x1c08bc: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1c08bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_1c08c0:
    // 0x1c08c0: 0xc04c784  jal         func_131E10
label_1c08c4:
    if (ctx->pc == 0x1C08C4u) {
        ctx->pc = 0x1C08C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C08C0u;
        // 0x1c08c4: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C08C8u;
        goto label_1c08c8;
    }
    ctx->pc = 0x1C08C0u;
    SET_GPR_U32(ctx, 31, 0x1C08C8u);
    ctx->pc = 0x1C08C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C08C0u;
    // 0x1c08c4: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x1C08C0u, 0x1C08C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C08C8u;
label_1c08c8:
    // 0x1c08c8: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_1c08cc:
    if (ctx->pc == 0x1C08CCu) {
        ctx->pc = 0x1C08CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C08C8u;
        // 0x1c08cc: 0xc7a10054  lwc1        $f1, 0x54($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C08D0u;
        goto label_1c08d0;
    }
    ctx->pc = 0x1C08C8u;
    {
        const bool branch_taken_0x1c08c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C08CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C08C8u;
        // 0x1c08cc: 0xc7a10054  lwc1        $f1, 0x54($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c08c8) {
            ctx->pc = 0x1C0984u;
            goto label_1c0984;
        }
    }
    ctx->pc = 0x1C08D0u;
label_1c08d0:
    // 0x1c08d0: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x1c08d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_1c08d4:
    // 0x1c08d4: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x1c08d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_1c08d8:
    // 0x1c08d8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1c08d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c08dc:
    // 0x1c08dc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c08dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c08e0:
    // 0x1c08e0: 0x0  nop
    ctx->pc = 0x1c08e0u;
    // NOP
label_1c08e4:
    // 0x1c08e4: 0x45020028  bc1fl       . + 4 + (0x28 << 2)
label_1c08e8:
    if (ctx->pc == 0x1C08E8u) {
        ctx->pc = 0x1C08E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C08E4u;
        // 0x1c08e8: 0x8e430214  lw          $v1, 0x214($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C08ECu;
        goto label_1c08ec;
    }
    ctx->pc = 0x1C08E4u;
    {
        const bool branch_taken_0x1c08e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c08e4) {
            ctx->pc = 0x1C08E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C08E4u;
            // 0x1c08e8: 0x8e430214  lw          $v1, 0x214($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0988u;
            goto label_1c0988;
        }
    }
    ctx->pc = 0x1C08ECu;
label_1c08ec:
    // 0x1c08ec: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1c08ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1c08f0:
    // 0x1c08f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c08f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c08f4:
    // 0x1c08f4: 0x10000023  b           . + 4 + (0x23 << 2)
label_1c08f8:
    if (ctx->pc == 0x1C08F8u) {
        ctx->pc = 0x1C08F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C08F4u;
        // 0x1c08f8: 0xa24202f6  sb          $v0, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C08FCu;
        goto label_1c08fc;
    }
    ctx->pc = 0x1C08F4u;
    {
        const bool branch_taken_0x1c08f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C08F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C08F4u;
        // 0x1c08f8: 0xa24202f6  sb          $v0, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c08f4) {
            ctx->pc = 0x1C0984u;
            goto label_1c0984;
        }
    }
    ctx->pc = 0x1C08FCu;
label_1c08fc:
    // 0x1c08fc: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x1c08fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c0900:
    // 0x1c0900: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x1c0900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c0904:
    // 0x1c0904: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c0904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c0908:
    // 0x1c0908: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1c0908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c090c:
    // 0x1c090c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1c090cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1c0910:
    // 0x1c0910: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1c0910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1c0914:
    // 0x1c0914: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1c0914u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1c0918:
    // 0x1c0918: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1c0918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1c091c:
    // 0x1c091c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c091cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1c0920:
    // 0x1c0920: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c0920u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c0924:
    // 0x1c0924: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c0924u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0928:
    // 0x1c0928: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1c0928u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_1c092c:
    // 0x1c092c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1c092cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_1c0930:
    // 0x1c0930: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1c0930u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1c0934:
    // 0x1c0934: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1c0934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1c0938:
    // 0x1c0938: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1c0938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1c093c:
    // 0x1c093c: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x1c093cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1c0940:
    // 0x1c0940: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1c0940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1c0944:
    // 0x1c0944: 0x24090400  addiu       $t1, $zero, 0x400
    ctx->pc = 0x1c0944u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1c0948:
    // 0x1c0948: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1c0948u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1c094c:
    // 0x1c094c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c094cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0950:
    // 0x1c0950: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1c0950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_1c0954:
    // 0x1c0954: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1c0954u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0958:
    // 0x1c0958: 0xc04c784  jal         func_131E10
label_1c095c:
    if (ctx->pc == 0x1C095Cu) {
        ctx->pc = 0x1C095Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0958u;
        // 0x1c095c: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0960u;
        goto label_1c0960;
    }
    ctx->pc = 0x1C0958u;
    SET_GPR_U32(ctx, 31, 0x1C0960u);
    ctx->pc = 0x1C095Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0958u;
    // 0x1c095c: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x1C0958u, 0x1C0960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0960u;
label_1c0960:
    // 0x1c0960: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1c0964:
    if (ctx->pc == 0x1C0964u) {
        ctx->pc = 0x1C0964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0960u;
        // 0x1c0964: 0xc7a10054  lwc1        $f1, 0x54($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0968u;
        goto label_1c0968;
    }
    ctx->pc = 0x1C0960u;
    {
        const bool branch_taken_0x1c0960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0960u;
        // 0x1c0964: 0xc7a10054  lwc1        $f1, 0x54($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0960) {
            ctx->pc = 0x1C0984u;
            goto label_1c0984;
        }
    }
    ctx->pc = 0x1C0968u;
label_1c0968:
    // 0x1c0968: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x1c0968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_1c096c:
    // 0x1c096c: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x1c096cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
label_1c0970:
    // 0x1c0970: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1c0970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c0974:
    // 0x1c0974: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c0974u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c0978:
    // 0x1c0978: 0x0  nop
    ctx->pc = 0x1c0978u;
    // NOP
label_1c097c:
    // 0x1c097c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1c0980:
    if (ctx->pc == 0x1C0980u) {
        ctx->pc = 0x1C0980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C097Cu;
        // 0x1c0980: 0xe4410004  swc1        $f1, 0x4($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0984u;
        goto label_1c0984;
    }
    ctx->pc = 0x1C097Cu;
    {
        const bool branch_taken_0x1c097c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c097c) {
            ctx->pc = 0x1C0980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C097Cu;
            // 0x1c0980: 0xe4410004  swc1        $f1, 0x4($v0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0984u;
            goto label_1c0984;
        }
    }
    ctx->pc = 0x1C0984u;
label_1c0984:
    // 0x1c0984: 0x8e430214  lw          $v1, 0x214($s2)
    ctx->pc = 0x1c0984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
label_1c0988:
    // 0x1c0988: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1c0988u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1c098c:
    // 0x1c098c: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x1c098cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1c0990:
    // 0x1c0990: 0x40f809  jalr        $v0
label_1c0994:
    if (ctx->pc == 0x1C0994u) {
        ctx->pc = 0x1C0994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0990u;
        // 0x1c0994: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0998u;
        goto label_1c0998;
    }
    ctx->pc = 0x1C0990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C0998u);
        ctx->pc = 0x1C0994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0990u;
        // 0x1c0994: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0990u, 0x1C0998u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C0998u;
label_1c0998:
    // 0x1c0998: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1c0998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c099c:
    // 0x1c099c: 0x3c01c461  lui         $at, 0xC461
    ctx->pc = 0x1c099cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50273 << 16));
label_1c09a0:
    // 0x1c09a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c09a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c09a4:
    // 0x1c09a4: 0x0  nop
    ctx->pc = 0x1c09a4u;
    // NOP
label_1c09a8:
    // 0x1c09a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c09a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c09ac:
    // 0x1c09ac: 0x0  nop
    ctx->pc = 0x1c09acu;
    // NOP
label_1c09b0:
    // 0x1c09b0: 0x450005ba  bc1f        . + 4 + (0x5BA << 2)
label_1c09b4:
    if (ctx->pc == 0x1C09B4u) {
        ctx->pc = 0x1C09B8u;
        goto label_1c09b8;
    }
    ctx->pc = 0x1C09B0u;
    {
        const bool branch_taken_0x1c09b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c09b0) {
            ctx->pc = 0x1C209Cu;
            goto label_1c209c;
        }
    }
    ctx->pc = 0x1C09B8u;
label_1c09b8:
    // 0x1c09b8: 0xc070928  jal         func_1C24A0
label_1c09bc:
    if (ctx->pc == 0x1C09BCu) {
        ctx->pc = 0x1C09BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C09B8u;
        // 0x1c09bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C09C0u;
        goto label_1c09c0;
    }
    ctx->pc = 0x1C09B8u;
    SET_GPR_U32(ctx, 31, 0x1C09C0u);
    ctx->pc = 0x1C09BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C09B8u;
    // 0x1c09bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C24A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C24A0u, 0x1C09B8u, 0x1C09C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C09C0u;
label_1c09c0:
    // 0x1c09c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c09c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c09c4:
    // 0x1c09c4: 0x54430016  bnel        $v0, $v1, . + 4 + (0x16 << 2)
label_1c09c8:
    if (ctx->pc == 0x1C09C8u) {
        ctx->pc = 0x1C09C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C09C4u;
        // 0x1c09c8: 0xa24302f4  sb          $v1, 0x2F4($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C09CCu;
        goto label_1c09cc;
    }
    ctx->pc = 0x1C09C4u;
    {
        const bool branch_taken_0x1c09c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c09c4) {
            ctx->pc = 0x1C09C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C09C4u;
            // 0x1c09c8: 0xa24302f4  sb          $v1, 0x2F4($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0A20u;
            goto label_1c0a20;
        }
    }
    ctx->pc = 0x1C09CCu;
label_1c09cc:
    // 0x1c09cc: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1c09ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_1c09d0:
    // 0x1c09d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c09d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c09d4:
    // 0x1c09d4: 0xc6400600  lwc1        $f0, 0x600($s2)
    ctx->pc = 0x1c09d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c09d8:
    // 0x1c09d8: 0x8e420214  lw          $v0, 0x214($s2)
    ctx->pc = 0x1c09d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
label_1c09dc:
    // 0x1c09dc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c09dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1c09e0:
    // 0x1c09e0: 0x24510070  addiu       $s1, $v0, 0x70
    ctx->pc = 0x1c09e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_1c09e4:
    // 0x1c09e4: 0xe6400614  swc1        $f0, 0x614($s2)
    ctx->pc = 0x1c09e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1556), bits); }
label_1c09e8:
    // 0x1c09e8: 0x84500070  lh          $s0, 0x70($v0)
    ctx->pc = 0x1c09e8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1c09ec:
    // 0x1c09ec: 0xc0b6dac  jal         func_2DB6B0
label_1c09f0:
    if (ctx->pc == 0x1C09F0u) {
        ctx->pc = 0x1C09F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C09ECu;
        // 0x1c09f0: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C09F4u;
        goto label_1c09f4;
    }
    ctx->pc = 0x1C09ECu;
    SET_GPR_U32(ctx, 31, 0x1C09F4u);
    ctx->pc = 0x1C09F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C09ECu;
    // 0x1c09f0: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1C09ECu, 0x1C09F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C09F4u;
label_1c09f4:
    // 0x1c09f4: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x1c09f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_1c09f8:
    // 0x1c09f8: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1c09f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1c09fc:
    // 0x1c09fc: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x1c09fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1c0a00:
    // 0x1c0a00: 0xa0f809  jalr        $a1
label_1c0a04:
    if (ctx->pc == 0x1C0A04u) {
        ctx->pc = 0x1C0A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0A00u;
        // 0x1c0a04: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0A08u;
        goto label_1c0a08;
    }
    ctx->pc = 0x1C0A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1C0A08u);
        ctx->pc = 0x1C0A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0A00u;
        // 0x1c0a04: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0A00u, 0x1C0A08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C0A08u;
label_1c0a08:
    // 0x1c0a08: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1c0a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1c0a0c:
    // 0x1c0a0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c0a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c0a10:
    // 0x1c0a10: 0x60f809  jalr        $v1
label_1c0a14:
    if (ctx->pc == 0x1C0A14u) {
        ctx->pc = 0x1C0A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0A10u;
        // 0x1c0a14: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0A18u;
        goto label_1c0a18;
    }
    ctx->pc = 0x1C0A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C0A18u);
        ctx->pc = 0x1C0A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0A10u;
        // 0x1c0a14: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0A10u, 0x1C0A18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C0A18u;
label_1c0a18:
    // 0x1c0a18: 0x100005a0  b           . + 4 + (0x5A0 << 2)
label_1c0a1c:
    if (ctx->pc == 0x1C0A1Cu) {
        ctx->pc = 0x1C0A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0A18u;
        // 0x1c0a1c: 0xa24002f6  sb          $zero, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0A20u;
        goto label_1c0a20;
    }
    ctx->pc = 0x1C0A18u;
    {
        const bool branch_taken_0x1c0a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0A18u;
        // 0x1c0a1c: 0xa24002f6  sb          $zero, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0a18) {
            ctx->pc = 0x1C209Cu;
            goto label_1c209c;
        }
    }
    ctx->pc = 0x1C0A20u;
label_1c0a20:
    // 0x1c0a20: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x1c0a20u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
label_1c0a24:
    // 0x1c0a24: 0xa24002f5  sb          $zero, 0x2F5($s2)
    ctx->pc = 0x1c0a24u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 0));
label_1c0a28:
    // 0x1c0a28: 0x1000059e  b           . + 4 + (0x59E << 2)
label_1c0a2c:
    if (ctx->pc == 0x1C0A2Cu) {
        ctx->pc = 0x1C0A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0A28u;
        // 0x1c0a2c: 0xa24002f6  sb          $zero, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0A30u;
        goto label_1c0a30;
    }
    ctx->pc = 0x1C0A28u;
    {
        const bool branch_taken_0x1c0a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0A28u;
        // 0x1c0a2c: 0xa24002f6  sb          $zero, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0a28) {
            ctx->pc = 0x1C20A4u;
            goto label_1c20a4;
        }
    }
    ctx->pc = 0x1C0A30u;
label_1c0a30:
    // 0x1c0a30: 0xde450668  ld          $a1, 0x668($s2)
    ctx->pc = 0x1c0a30u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 1640)));
label_1c0a34:
    // 0x1c0a34: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_1c0a38:
    if (ctx->pc == 0x1C0A38u) {
        ctx->pc = 0x1C0A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0A34u;
        // 0x1c0a38: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0A3Cu;
        goto label_1c0a3c;
    }
    ctx->pc = 0x1C0A34u;
    {
        const bool branch_taken_0x1c0a34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0A34u;
        // 0x1c0a38: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0a34) {
            ctx->pc = 0x1C0A50u;
            goto label_1c0a50;
        }
    }
    ctx->pc = 0x1C0A3Cu;
label_1c0a3c:
    // 0x1c0a3c: 0xc0b147a  jal         func_2C51E8
label_1c0a40:
    if (ctx->pc == 0x1C0A40u) {
        ctx->pc = 0x1C0A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0A3Cu;
        // 0x1c0a40: 0x8c442f84  lw          $a0, 0x2F84($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0A44u;
        goto label_1c0a44;
    }
    ctx->pc = 0x1C0A3Cu;
    SET_GPR_U32(ctx, 31, 0x1C0A44u);
    ctx->pc = 0x1C0A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0A3Cu;
    // 0x1c0a40: 0x8c442f84  lw          $a0, 0x2F84($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C51E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C51E8u, 0x1C0A3Cu, 0x1C0A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0A44u;
label_1c0a44:
    // 0x1c0a44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c0a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c0a48:
    // 0x1c0a48: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_1c0a4c:
    if (ctx->pc == 0x1C0A4Cu) {
        ctx->pc = 0x1C0A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0A48u;
        // 0x1c0a4c: 0xc6400600  lwc1        $f0, 0x600($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0A50u;
        goto label_1c0a50;
    }
    ctx->pc = 0x1C0A48u;
    {
        const bool branch_taken_0x1c0a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c0a48) {
            ctx->pc = 0x1C0A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0A48u;
            // 0x1c0a4c: 0xc6400600  lwc1        $f0, 0x600($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0A60u;
            goto label_1c0a60;
        }
    }
    ctx->pc = 0x1C0A50u;
label_1c0a50:
    // 0x1c0a50: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x1c0a50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
label_1c0a54:
    // 0x1c0a54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c0a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1c0a58:
    // 0x1c0a58: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x1c0a58u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_1c0a5c:
    // 0x1c0a5c: 0xc6400600  lwc1        $f0, 0x600($s2)
    ctx->pc = 0x1c0a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c0a60:
    // 0x1c0a60: 0xae400610  sw          $zero, 0x610($s2)
    ctx->pc = 0x1c0a60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1552), GPR_U32(ctx, 0));
label_1c0a64:
    // 0x1c0a64: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1c0a64u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1c0a68:
    // 0x1c0a68: 0xae400618  sw          $zero, 0x618($s2)
    ctx->pc = 0x1c0a68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1560), GPR_U32(ctx, 0));
label_1c0a6c:
    // 0x1c0a6c: 0x1000058b  b           . + 4 + (0x58B << 2)
label_1c0a70:
    if (ctx->pc == 0x1C0A70u) {
        ctx->pc = 0x1C0A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0A6Cu;
        // 0x1c0a70: 0xe6400614  swc1        $f0, 0x614($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1556), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0A74u;
        goto label_1c0a74;
    }
    ctx->pc = 0x1C0A6Cu;
    {
        const bool branch_taken_0x1c0a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0A6Cu;
        // 0x1c0a70: 0xe6400614  swc1        $f0, 0x614($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0a6c) {
            ctx->pc = 0x1C209Cu;
            goto label_1c209c;
        }
    }
    ctx->pc = 0x1C0A74u;
label_1c0a74:
    // 0x1c0a74: 0x92420676  lbu         $v0, 0x676($s2)
    ctx->pc = 0x1c0a74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1654)));
label_1c0a78:
    // 0x1c0a78: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1c0a78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
label_1c0a7c:
    // 0x1c0a7c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c0a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1c0a80:
    // 0x1c0a80: 0x54400056  bnel        $v0, $zero, . + 4 + (0x56 << 2)
label_1c0a84:
    if (ctx->pc == 0x1C0A84u) {
        ctx->pc = 0x1C0A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0A80u;
        // 0x1c0a84: 0x8662054a  lh          $v0, 0x54A($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1354)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0A88u;
        goto label_1c0a88;
    }
    ctx->pc = 0x1C0A80u;
    {
        const bool branch_taken_0x1c0a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0a80) {
            ctx->pc = 0x1C0A84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0A80u;
            // 0x1c0a84: 0x8662054a  lh          $v0, 0x54A($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1354)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0BDCu;
            goto label_1c0bdc;
        }
    }
    ctx->pc = 0x1C0A88u;
label_1c0a88:
    // 0x1c0a88: 0x8e420630  lw          $v0, 0x630($s2)
    ctx->pc = 0x1c0a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1584)));
label_1c0a8c:
    // 0x1c0a8c: 0x54400049  bnel        $v0, $zero, . + 4 + (0x49 << 2)
label_1c0a90:
    if (ctx->pc == 0x1C0A90u) {
        ctx->pc = 0x1C0A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0A8Cu;
        // 0x1c0a90: 0xc6400104  lwc1        $f0, 0x104($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0A94u;
        goto label_1c0a94;
    }
    ctx->pc = 0x1C0A8Cu;
    {
        const bool branch_taken_0x1c0a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0a8c) {
            ctx->pc = 0x1C0A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0A8Cu;
            // 0x1c0a90: 0xc6400104  lwc1        $f0, 0x104($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0BB4u;
            goto label_1c0bb4;
        }
    }
    ctx->pc = 0x1C0A94u;
label_1c0a94:
    // 0x1c0a94: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x1c0a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_1c0a98:
    // 0x1c0a98: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1c0a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1c0a9c:
    // 0x1c0a9c: 0x50820008  beql        $a0, $v0, . + 4 + (0x8 << 2)
label_1c0aa0:
    if (ctx->pc == 0x1C0AA0u) {
        ctx->pc = 0x1C0AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0A9Cu;
        // 0x1c0aa0: 0x8e4300f0  lw          $v1, 0xF0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0AA4u;
        goto label_1c0aa4;
    }
    ctx->pc = 0x1C0A9Cu;
    {
        const bool branch_taken_0x1c0a9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c0a9c) {
            ctx->pc = 0x1C0AA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0A9Cu;
            // 0x1c0aa0: 0x8e4300f0  lw          $v1, 0xF0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0AC0u;
            goto label_1c0ac0;
        }
    }
    ctx->pc = 0x1C0AA4u;
label_1c0aa4:
    // 0x1c0aa4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1c0aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c0aa8:
    // 0x1c0aa8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1c0aa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1c0aac:
    // 0x1c0aac: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1c0aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c0ab0:
    // 0x1c0ab0: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x1c0ab0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_1c0ab4:
    // 0x1c0ab4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1c0ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c0ab8:
    // 0x1c0ab8: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1c0ab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_1c0abc:
    // 0x1c0abc: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x1c0abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_1c0ac0:
    // 0x1c0ac0: 0x26420610  addiu       $v0, $s2, 0x610
    ctx->pc = 0x1c0ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1552));
label_1c0ac4:
    // 0x1c0ac4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1c0ac4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1c0ac8:
    // 0x1c0ac8: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1c0ac8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c0acc:
    // 0x1c0acc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c0accu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c0ad0:
    // 0x1c0ad0: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1c0ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c0ad4:
    // 0x1c0ad4: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x1c0ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_1c0ad8:
    // 0x1c0ad8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1c0ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1c0adc:
    // 0x1c0adc: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
label_1c0ae0:
    if (ctx->pc == 0x1C0AE0u) {
        ctx->pc = 0x1C0AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0ADCu;
        // 0x1c0ae0: 0xc6400614  lwc1        $f0, 0x614($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0AE4u;
        goto label_1c0ae4;
    }
    ctx->pc = 0x1C0ADCu;
    {
        const bool branch_taken_0x1c0adc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c0adc) {
            ctx->pc = 0x1C0AE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0ADCu;
            // 0x1c0ae0: 0xc6400614  lwc1        $f0, 0x614($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0B00u;
            goto label_1c0b00;
        }
    }
    ctx->pc = 0x1C0AE4u;
label_1c0ae4:
    // 0x1c0ae4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1c0ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c0ae8:
    // 0x1c0ae8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1c0ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1c0aec:
    // 0x1c0aec: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1c0aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c0af0:
    // 0x1c0af0: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1c0af0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1c0af4:
    // 0x1c0af4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1c0af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c0af8:
    // 0x1c0af8: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1c0af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1c0afc:
    // 0x1c0afc: 0xc6400614  lwc1        $f0, 0x614($s2)
    ctx->pc = 0x1c0afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c0b00:
    // 0x1c0b00: 0xc6410600  lwc1        $f1, 0x600($s2)
    ctx->pc = 0x1c0b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c0b04:
    // 0x1c0b04: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1c0b04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c0b08:
    // 0x1c0b08: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c0b08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1c0b0c:
    // 0x1c0b0c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1c0b0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c0b10:
    // 0x1c0b10: 0x0  nop
    ctx->pc = 0x1c0b10u;
    // NOP
label_1c0b14:
    // 0x1c0b14: 0x45000026  bc1f        . + 4 + (0x26 << 2)
label_1c0b18:
    if (ctx->pc == 0x1C0B18u) {
        ctx->pc = 0x1C0B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0B14u;
        // 0x1c0b18: 0xe6400614  swc1        $f0, 0x614($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1556), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0B1Cu;
        goto label_1c0b1c;
    }
    ctx->pc = 0x1C0B14u;
    {
        const bool branch_taken_0x1c0b14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C0B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0B14u;
        // 0x1c0b18: 0xe6400614  swc1        $f0, 0x614($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0b14) {
            ctx->pc = 0x1C0BB0u;
            goto label_1c0bb0;
        }
    }
    ctx->pc = 0x1C0B1Cu;
label_1c0b1c:
    // 0x1c0b1c: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x1c0b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c0b20:
    // 0x1c0b20: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x1c0b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c0b24:
    // 0x1c0b24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c0b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c0b28:
    // 0x1c0b28: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1c0b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c0b2c:
    // 0x1c0b2c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1c0b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1c0b30:
    // 0x1c0b30: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1c0b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1c0b34:
    // 0x1c0b34: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1c0b34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1c0b38:
    // 0x1c0b38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c0b38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0b3c:
    // 0x1c0b3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c0b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1c0b40:
    // 0x1c0b40: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c0b40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c0b44:
    // 0x1c0b44: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1c0b44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c0b48:
    // 0x1c0b48: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1c0b48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_1c0b4c:
    // 0x1c0b4c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1c0b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_1c0b50:
    // 0x1c0b50: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1c0b50u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_1c0b54:
    // 0x1c0b54: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1c0b54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1c0b58:
    // 0x1c0b58: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1c0b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1c0b5c:
    // 0x1c0b5c: 0x24090400  addiu       $t1, $zero, 0x400
    ctx->pc = 0x1c0b5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1c0b60:
    // 0x1c0b60: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1c0b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1c0b64:
    // 0x1c0b64: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c0b64u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0b68:
    // 0x1c0b68: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1c0b68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1c0b6c:
    // 0x1c0b6c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1c0b6cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0b70:
    // 0x1c0b70: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1c0b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_1c0b74:
    // 0x1c0b74: 0xc04c784  jal         func_131E10
label_1c0b78:
    if (ctx->pc == 0x1C0B78u) {
        ctx->pc = 0x1C0B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0B74u;
        // 0x1c0b78: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0B7Cu;
        goto label_1c0b7c;
    }
    ctx->pc = 0x1C0B74u;
    SET_GPR_U32(ctx, 31, 0x1C0B7Cu);
    ctx->pc = 0x1C0B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0B74u;
    // 0x1c0b78: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x1C0B74u, 0x1C0B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0B7Cu;
label_1c0b7c:
    // 0x1c0b7c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1c0b80:
    if (ctx->pc == 0x1C0B80u) {
        ctx->pc = 0x1C0B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0B7Cu;
        // 0x1c0b80: 0xc7a10054  lwc1        $f1, 0x54($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0B84u;
        goto label_1c0b84;
    }
    ctx->pc = 0x1C0B7Cu;
    {
        const bool branch_taken_0x1c0b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0B7Cu;
        // 0x1c0b80: 0xc7a10054  lwc1        $f1, 0x54($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0b7c) {
            ctx->pc = 0x1C0BB0u;
            goto label_1c0bb0;
        }
    }
    ctx->pc = 0x1C0B84u;
label_1c0b84:
    // 0x1c0b84: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x1c0b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_1c0b88:
    // 0x1c0b88: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x1c0b88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_1c0b8c:
    // 0x1c0b8c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1c0b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c0b90:
    // 0x1c0b90: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c0b90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c0b94:
    // 0x1c0b94: 0x0  nop
    ctx->pc = 0x1c0b94u;
    // NOP
label_1c0b98:
    // 0x1c0b98: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_1c0b9c:
    if (ctx->pc == 0x1C0B9Cu) {
        ctx->pc = 0x1C0B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0B98u;
        // 0x1c0b9c: 0xc6400104  lwc1        $f0, 0x104($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0BA0u;
        goto label_1c0ba0;
    }
    ctx->pc = 0x1C0B98u;
    {
        const bool branch_taken_0x1c0b98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c0b98) {
            ctx->pc = 0x1C0B9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0B98u;
            // 0x1c0b9c: 0xc6400104  lwc1        $f0, 0x104($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0BB4u;
            goto label_1c0bb4;
        }
    }
    ctx->pc = 0x1C0BA0u;
label_1c0ba0:
    // 0x1c0ba0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1c0ba0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1c0ba4:
    // 0x1c0ba4: 0xc6400600  lwc1        $f0, 0x600($s2)
    ctx->pc = 0x1c0ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c0ba8:
    // 0x1c0ba8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1c0ba8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1c0bac:
    // 0x1c0bac: 0xe6400614  swc1        $f0, 0x614($s2)
    ctx->pc = 0x1c0bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1556), bits); }
label_1c0bb0:
    // 0x1c0bb0: 0xc6400104  lwc1        $f0, 0x104($s2)
    ctx->pc = 0x1c0bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c0bb4:
    // 0x1c0bb4: 0x3c013db2  lui         $at, 0x3DB2
    ctx->pc = 0x1c0bb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15794 << 16));
label_1c0bb8:
    // 0x1c0bb8: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x1c0bb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
label_1c0bbc:
    // 0x1c0bbc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c0bbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c0bc0:
    // 0x1c0bc0: 0x0  nop
    ctx->pc = 0x1c0bc0u;
    // NOP
label_1c0bc4:
    // 0x1c0bc4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c0bc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1c0bc8:
    // 0x1c0bc8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1c0bc8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1c0bcc:
    // 0x1c0bcc: 0xc07df52  jal         func_1F7D48
label_1c0bd0:
    if (ctx->pc == 0x1C0BD0u) {
        ctx->pc = 0x1C0BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0BCCu;
        // 0x1c0bd0: 0xe6400104  swc1        $f0, 0x104($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0BD4u;
        goto label_1c0bd4;
    }
    ctx->pc = 0x1C0BCCu;
    SET_GPR_U32(ctx, 31, 0x1C0BD4u);
    ctx->pc = 0x1C0BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0BCCu;
    // 0x1c0bd0: 0xe6400104  swc1        $f0, 0x104($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x1C0BCCu, 0x1C0BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0BD4u;
label_1c0bd4:
    // 0x1c0bd4: 0xe6400104  swc1        $f0, 0x104($s2)
    ctx->pc = 0x1c0bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
label_1c0bd8:
    // 0x1c0bd8: 0x8662054a  lh          $v0, 0x54A($s3)
    ctx->pc = 0x1c0bd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1354)));
label_1c0bdc:
    // 0x1c0bdc: 0x18400531  blez        $v0, . + 4 + (0x531 << 2)
label_1c0be0:
    if (ctx->pc == 0x1C0BE0u) {
        ctx->pc = 0x1C0BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0BDCu;
        // 0x1c0be0: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0BE4u;
        goto label_1c0be4;
    }
    ctx->pc = 0x1C0BDCu;
    {
        const bool branch_taken_0x1c0bdc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1C0BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0BDCu;
        // 0x1c0be0: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0bdc) {
            ctx->pc = 0x1C20A4u;
            goto label_1c20a4;
        }
    }
    ctx->pc = 0x1C0BE4u;
label_1c0be4:
    // 0x1c0be4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1c0be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c0be8:
    // 0x1c0be8: 0x8c537ab0  lw          $s3, 0x7AB0($v0)
    ctx->pc = 0x1c0be8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31408)));
label_1c0bec:
    // 0x1c0bec: 0x56630078  bnel        $s3, $v1, . + 4 + (0x78 << 2)
label_1c0bf0:
    if (ctx->pc == 0x1C0BF0u) {
        ctx->pc = 0x1C0BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0BECu;
        // 0x1c0bf0: 0x9642056a  lhu         $v0, 0x56A($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1386)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0BF4u;
        goto label_1c0bf4;
    }
    ctx->pc = 0x1C0BECu;
    {
        const bool branch_taken_0x1c0bec = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c0bec) {
            ctx->pc = 0x1C0BF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0BECu;
            // 0x1c0bf0: 0x9642056a  lhu         $v0, 0x56A($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1386)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0DD0u;
            goto label_1c0dd0;
        }
    }
    ctx->pc = 0x1C0BF4u;
label_1c0bf4:
    // 0x1c0bf4: 0x8e420670  lw          $v0, 0x670($s2)
    ctx->pc = 0x1c0bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
label_1c0bf8:
    // 0x1c0bf8: 0x24140031  addiu       $s4, $zero, 0x31
    ctx->pc = 0x1c0bf8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_1c0bfc:
    // 0x1c0bfc: 0x14540019  bne         $v0, $s4, . + 4 + (0x19 << 2)
label_1c0c00:
    if (ctx->pc == 0x1C0C00u) {
        ctx->pc = 0x1C0C04u;
        goto label_1c0c04;
    }
    ctx->pc = 0x1C0BFCu;
    {
        const bool branch_taken_0x1c0bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x1c0bfc) {
            ctx->pc = 0x1C0C64u;
            goto label_1c0c64;
        }
    }
    ctx->pc = 0x1C0C04u;
label_1c0c04:
    // 0x1c0c04: 0xc070836  jal         func_1C20D8
label_1c0c08:
    if (ctx->pc == 0x1C0C08u) {
        ctx->pc = 0x1C0C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C04u;
        // 0x1c0c08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0C0Cu;
        goto label_1c0c0c;
    }
    ctx->pc = 0x1C0C04u;
    SET_GPR_U32(ctx, 31, 0x1C0C0Cu);
    ctx->pc = 0x1C0C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0C04u;
    // 0x1c0c08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C20D8u, 0x1C0C04u, 0x1C0C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0C0Cu;
label_1c0c0c:
    // 0x1c0c0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c0c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c0c10:
    // 0x1c0c10: 0x5443006f  bnel        $v0, $v1, . + 4 + (0x6F << 2)
label_1c0c14:
    if (ctx->pc == 0x1C0C14u) {
        ctx->pc = 0x1C0C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C10u;
        // 0x1c0c14: 0x9642056a  lhu         $v0, 0x56A($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1386)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0C18u;
        goto label_1c0c18;
    }
    ctx->pc = 0x1C0C10u;
    {
        const bool branch_taken_0x1c0c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c0c10) {
            ctx->pc = 0x1C0C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0C10u;
            // 0x1c0c14: 0x9642056a  lhu         $v0, 0x56A($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1386)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0DD0u;
            goto label_1c0dd0;
        }
    }
    ctx->pc = 0x1C0C18u;
label_1c0c18:
    // 0x1c0c18: 0x964202fe  lhu         $v0, 0x2FE($s2)
    ctx->pc = 0x1c0c18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 766)));
label_1c0c1c:
    // 0x1c0c1c: 0x2444fc44  addiu       $a0, $v0, -0x3BC
    ctx->pc = 0x1c0c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966340));
label_1c0c20:
    // 0x1c0c20: 0x2c830032  sltiu       $v1, $a0, 0x32
    ctx->pc = 0x1c0c20u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
label_1c0c24:
    // 0x1c0c24: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1c0c28:
    if (ctx->pc == 0x1C0C28u) {
        ctx->pc = 0x1C0C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C24u;
        // 0x1c0c28: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0C2Cu;
        goto label_1c0c2c;
    }
    ctx->pc = 0x1C0C24u;
    {
        const bool branch_taken_0x1c0c24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C24u;
        // 0x1c0c28: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0c24) {
            ctx->pc = 0x1C0C44u;
            goto label_1c0c44;
        }
    }
    ctx->pc = 0x1C0C2Cu;
label_1c0c2c:
    // 0x1c0c2c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1c0c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1c0c30:
    // 0x1c0c30: 0x244299f0  addiu       $v0, $v0, -0x6610
    ctx->pc = 0x1c0c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941168));
label_1c0c34:
    // 0x1c0c34: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c0c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1c0c38:
    // 0x1c0c38: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1c0c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1c0c3c:
    // 0x1c0c3c: 0x800008  jr          $a0
label_1c0c40:
    if (ctx->pc == 0x1C0C40u) {
        ctx->pc = 0x1C0C44u;
        goto label_1c0c44;
    }
    ctx->pc = 0x1C0C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C0C44u: goto label_1c0c44;
            case 0x1C0C54u: goto label_1c0c54;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0C3Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C0C44u;
label_1c0c44:
    // 0x1c0c44: 0xc0b6e2e  jal         func_2DB8B8
label_1c0c48:
    if (ctx->pc == 0x1C0C48u) {
        ctx->pc = 0x1C0C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C44u;
        // 0x1c0c48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0C4Cu;
        goto label_1c0c4c;
    }
    ctx->pc = 0x1C0C44u;
    SET_GPR_U32(ctx, 31, 0x1C0C4Cu);
    ctx->pc = 0x1C0C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0C44u;
    // 0x1c0c48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB8B8u, 0x1C0C44u, 0x1C0C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0C4Cu;
label_1c0c4c:
    // 0x1c0c4c: 0x10000060  b           . + 4 + (0x60 << 2)
label_1c0c50:
    if (ctx->pc == 0x1C0C50u) {
        ctx->pc = 0x1C0C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C4Cu;
        // 0x1c0c50: 0x9642056a  lhu         $v0, 0x56A($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1386)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0C54u;
        goto label_1c0c54;
    }
    ctx->pc = 0x1C0C4Cu;
    {
        const bool branch_taken_0x1c0c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C4Cu;
        // 0x1c0c50: 0x9642056a  lhu         $v0, 0x56A($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1386)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0c4c) {
            ctx->pc = 0x1C0DD0u;
            goto label_1c0dd0;
        }
    }
    ctx->pc = 0x1C0C54u;
label_1c0c54:
    // 0x1c0c54: 0xc07093a  jal         func_1C24E8
label_1c0c58:
    if (ctx->pc == 0x1C0C58u) {
        ctx->pc = 0x1C0C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C54u;
        // 0x1c0c58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0C5Cu;
        goto label_1c0c5c;
    }
    ctx->pc = 0x1C0C54u;
    SET_GPR_U32(ctx, 31, 0x1C0C5Cu);
    ctx->pc = 0x1C0C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0C54u;
    // 0x1c0c58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C24E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C24E8u, 0x1C0C54u, 0x1C0C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0C5Cu;
label_1c0c5c:
    // 0x1c0c5c: 0x1000005c  b           . + 4 + (0x5C << 2)
label_1c0c60:
    if (ctx->pc == 0x1C0C60u) {
        ctx->pc = 0x1C0C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C5Cu;
        // 0x1c0c60: 0x9642056a  lhu         $v0, 0x56A($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1386)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0C64u;
        goto label_1c0c64;
    }
    ctx->pc = 0x1C0C5Cu;
    {
        const bool branch_taken_0x1c0c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C5Cu;
        // 0x1c0c60: 0x9642056a  lhu         $v0, 0x56A($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1386)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0c5c) {
            ctx->pc = 0x1C0DD0u;
            goto label_1c0dd0;
        }
    }
    ctx->pc = 0x1C0C64u;
label_1c0c64:
    // 0x1c0c64: 0xc070836  jal         func_1C20D8
label_1c0c68:
    if (ctx->pc == 0x1C0C68u) {
        ctx->pc = 0x1C0C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C64u;
        // 0x1c0c68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0C6Cu;
        goto label_1c0c6c;
    }
    ctx->pc = 0x1C0C64u;
    SET_GPR_U32(ctx, 31, 0x1C0C6Cu);
    ctx->pc = 0x1C0C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0C64u;
    // 0x1c0c68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C20D8u, 0x1C0C64u, 0x1C0C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0C6Cu;
label_1c0c6c:
    // 0x1c0c6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c0c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c0c70:
    // 0x1c0c70: 0x54430057  bnel        $v0, $v1, . + 4 + (0x57 << 2)
label_1c0c74:
    if (ctx->pc == 0x1C0C74u) {
        ctx->pc = 0x1C0C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C70u;
        // 0x1c0c74: 0x9642056a  lhu         $v0, 0x56A($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1386)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0C78u;
        goto label_1c0c78;
    }
    ctx->pc = 0x1C0C70u;
    {
        const bool branch_taken_0x1c0c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c0c70) {
            ctx->pc = 0x1C0C74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0C70u;
            // 0x1c0c74: 0x9642056a  lhu         $v0, 0x56A($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1386)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0DD0u;
            goto label_1c0dd0;
        }
    }
    ctx->pc = 0x1C0C78u;
label_1c0c78:
    // 0x1c0c78: 0x92420674  lbu         $v0, 0x674($s2)
    ctx->pc = 0x1c0c78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1652)));
label_1c0c7c:
    // 0x1c0c7c: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
label_1c0c80:
    if (ctx->pc == 0x1C0C80u) {
        ctx->pc = 0x1C0C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C7Cu;
        // 0x1c0c80: 0x8e430214  lw          $v1, 0x214($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0C84u;
        goto label_1c0c84;
    }
    ctx->pc = 0x1C0C7Cu;
    {
        const bool branch_taken_0x1c0c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0c7c) {
            ctx->pc = 0x1C0C80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0C7Cu;
            // 0x1c0c80: 0x8e430214  lw          $v1, 0x214($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0CD8u;
            goto label_1c0cd8;
        }
    }
    ctx->pc = 0x1C0C84u;
label_1c0c84:
    // 0x1c0c84: 0xc0709ae  jal         func_1C26B8
label_1c0c88:
    if (ctx->pc == 0x1C0C88u) {
        ctx->pc = 0x1C0C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C84u;
        // 0x1c0c88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0C8Cu;
        goto label_1c0c8c;
    }
    ctx->pc = 0x1C0C84u;
    SET_GPR_U32(ctx, 31, 0x1C0C8Cu);
    ctx->pc = 0x1C0C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0C84u;
    // 0x1c0c88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C26B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C26B8u, 0x1C0C84u, 0x1C0C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0C8Cu;
label_1c0c8c:
    // 0x1c0c8c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1c0c90:
    if (ctx->pc == 0x1C0C90u) {
        ctx->pc = 0x1C0C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C8Cu;
        // 0x1c0c90: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0C94u;
        goto label_1c0c94;
    }
    ctx->pc = 0x1C0C8Cu;
    {
        const bool branch_taken_0x1c0c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C8Cu;
        // 0x1c0c90: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0c8c) {
            ctx->pc = 0x1C0CACu;
            goto label_1c0cac;
        }
    }
    ctx->pc = 0x1C0C94u;
label_1c0c94:
    // 0x1c0c94: 0x3c08001c  lui         $t0, 0x1C
    ctx->pc = 0x1c0c94u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28 << 16));
label_1c0c98:
    // 0x1c0c98: 0x8e460670  lw          $a2, 0x670($s2)
    ctx->pc = 0x1c0c98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
label_1c0c9c:
    // 0x1c0c9c: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x1c0c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
label_1c0ca0:
    // 0x1c0ca0: 0x250820c8  addiu       $t0, $t0, 0x20C8
    ctx->pc = 0x1c0ca0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8392));
label_1c0ca4:
    // 0x1c0ca4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1c0ca8:
    if (ctx->pc == 0x1C0CA8u) {
        ctx->pc = 0x1C0CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0CA4u;
        // 0x1c0ca8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0CACu;
        goto label_1c0cac;
    }
    ctx->pc = 0x1C0CA4u;
    {
        const bool branch_taken_0x1c0ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0CA4u;
        // 0x1c0ca8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0ca4) {
            ctx->pc = 0x1C0CC0u;
            goto label_1c0cc0;
        }
    }
    ctx->pc = 0x1C0CACu;
label_1c0cac:
    // 0x1c0cac: 0x3c08001c  lui         $t0, 0x1C
    ctx->pc = 0x1c0cacu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28 << 16));
label_1c0cb0:
    // 0x1c0cb0: 0x8e460670  lw          $a2, 0x670($s2)
    ctx->pc = 0x1c0cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
label_1c0cb4:
    // 0x1c0cb4: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x1c0cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
label_1c0cb8:
    // 0x1c0cb8: 0x250820c8  addiu       $t0, $t0, 0x20C8
    ctx->pc = 0x1c0cb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8392));
label_1c0cbc:
    // 0x1c0cbc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1c0cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1c0cc0:
    // 0x1c0cc0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c0cc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0cc4:
    // 0x1c0cc4: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x1c0cc4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c0cc8:
    // 0x1c0cc8: 0xc07de16  jal         func_1F7858
label_1c0ccc:
    if (ctx->pc == 0x1C0CCCu) {
        ctx->pc = 0x1C0CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0CC8u;
        // 0x1c0ccc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0CD0u;
        goto label_1c0cd0;
    }
    ctx->pc = 0x1C0CC8u;
    SET_GPR_U32(ctx, 31, 0x1C0CD0u);
    ctx->pc = 0x1C0CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0CC8u;
    // 0x1c0ccc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x1C0CC8u, 0x1C0CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0CD0u;
label_1c0cd0:
    // 0x1c0cd0: 0x1000003f  b           . + 4 + (0x3F << 2)
label_1c0cd4:
    if (ctx->pc == 0x1C0CD4u) {
        ctx->pc = 0x1C0CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0CD0u;
        // 0x1c0cd4: 0x9642056a  lhu         $v0, 0x56A($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1386)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0CD8u;
        goto label_1c0cd8;
    }
    ctx->pc = 0x1C0CD0u;
    {
        const bool branch_taken_0x1c0cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0CD0u;
        // 0x1c0cd4: 0x9642056a  lhu         $v0, 0x56A($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1386)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0cd0) {
            ctx->pc = 0x1C0DD0u;
            goto label_1c0dd0;
        }
    }
    ctx->pc = 0x1C0CD8u;
label_1c0cd8:
    // 0x1c0cd8: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1c0cd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1c0cdc:
    // 0x1c0cdc: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x1c0cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1c0ce0:
    // 0x1c0ce0: 0x40f809  jalr        $v0
label_1c0ce4:
    if (ctx->pc == 0x1C0CE4u) {
        ctx->pc = 0x1C0CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0CE0u;
        // 0x1c0ce4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0CE8u;
        goto label_1c0ce8;
    }
    ctx->pc = 0x1C0CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C0CE8u);
        ctx->pc = 0x1C0CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0CE0u;
        // 0x1c0ce4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0CE0u, 0x1C0CE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C0CE8u;
label_1c0ce8:
    // 0x1c0ce8: 0x8e430214  lw          $v1, 0x214($s2)
    ctx->pc = 0x1c0ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
label_1c0cec:
    // 0x1c0cec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c0cecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c0cf0:
    // 0x1c0cf0: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1c0cf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1c0cf4:
    // 0x1c0cf4: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1c0cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1c0cf8:
    // 0x1c0cf8: 0x40f809  jalr        $v0
label_1c0cfc:
    if (ctx->pc == 0x1C0CFCu) {
        ctx->pc = 0x1C0CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0CF8u;
        // 0x1c0cfc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0D00u;
        goto label_1c0d00;
    }
    ctx->pc = 0x1C0CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C0D00u);
        ctx->pc = 0x1C0CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0CF8u;
        // 0x1c0cfc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0CF8u, 0x1C0D00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C0D00u;
label_1c0d00:
    // 0x1c0d00: 0xc0b6dac  jal         func_2DB6B0
label_1c0d04:
    if (ctx->pc == 0x1C0D04u) {
        ctx->pc = 0x1C0D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0D00u;
        // 0x1c0d04: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0D08u;
        goto label_1c0d08;
    }
    ctx->pc = 0x1C0D00u;
    SET_GPR_U32(ctx, 31, 0x1C0D08u);
    ctx->pc = 0x1C0D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0D00u;
    // 0x1c0d04: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1C0D00u, 0x1C0D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0D08u;
label_1c0d08:
    // 0x1c0d08: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x1c0d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_1c0d0c:
    // 0x1c0d0c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1c0d0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1c0d10:
    // 0x1c0d10: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x1c0d10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1c0d14:
    // 0x1c0d14: 0xa0f809  jalr        $a1
label_1c0d18:
    if (ctx->pc == 0x1C0D18u) {
        ctx->pc = 0x1C0D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0D14u;
        // 0x1c0d18: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0D1Cu;
        goto label_1c0d1c;
    }
    ctx->pc = 0x1C0D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1C0D1Cu);
        ctx->pc = 0x1C0D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0D14u;
        // 0x1c0d18: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0D14u, 0x1C0D1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C0D1Cu;
label_1c0d1c:
    // 0x1c0d1c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1c0d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_1c0d20:
    // 0x1c0d20: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1c0d20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1c0d24:
    // 0x1c0d24: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1c0d24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1c0d28:
    // 0x1c0d28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c0d28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c0d2c:
    // 0x1c0d2c: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x1c0d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c0d30:
    // 0x1c0d30: 0xc0b680e  jal         func_2DA038
label_1c0d34:
    if (ctx->pc == 0x1C0D34u) {
        ctx->pc = 0x1C0D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0D30u;
        // 0x1c0d34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0D38u;
        goto label_1c0d38;
    }
    ctx->pc = 0x1C0D30u;
    SET_GPR_U32(ctx, 31, 0x1C0D38u);
    ctx->pc = 0x1C0D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0D30u;
    // 0x1c0d34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x1C0D30u, 0x1C0D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0D38u;
label_1c0d38:
    // 0x1c0d38: 0xc6410104  lwc1        $f1, 0x104($s2)
    ctx->pc = 0x1c0d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c0d3c:
    // 0x1c0d3c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1c0d3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1c0d40:
    // 0x1c0d40: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x1c0d40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
label_1c0d44:
    // 0x1c0d44: 0xc07df52  jal         func_1F7D48
label_1c0d48:
    if (ctx->pc == 0x1C0D48u) {
        ctx->pc = 0x1C0D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0D44u;
        // 0x1c0d48: 0xe6410104  swc1        $f1, 0x104($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0D4Cu;
        goto label_1c0d4c;
    }
    ctx->pc = 0x1C0D44u;
    SET_GPR_U32(ctx, 31, 0x1C0D4Cu);
    ctx->pc = 0x1C0D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0D44u;
    // 0x1c0d48: 0xe6410104  swc1        $f1, 0x104($s2) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x1C0D44u, 0x1C0D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0D4Cu;
label_1c0d4c:
    // 0x1c0d4c: 0x8e420560  lw          $v0, 0x560($s2)
    ctx->pc = 0x1c0d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1376)));
label_1c0d50:
    // 0x1c0d50: 0x10530004  beq         $v0, $s3, . + 4 + (0x4 << 2)
label_1c0d54:
    if (ctx->pc == 0x1C0D54u) {
        ctx->pc = 0x1C0D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0D50u;
        // 0x1c0d54: 0xe6400104  swc1        $f0, 0x104($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0D58u;
        goto label_1c0d58;
    }
    ctx->pc = 0x1C0D50u;
    {
        const bool branch_taken_0x1c0d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x1C0D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0D50u;
        // 0x1c0d54: 0xe6400104  swc1        $f0, 0x104($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d50) {
            ctx->pc = 0x1C0D64u;
            goto label_1c0d64;
        }
    }
    ctx->pc = 0x1C0D58u;
label_1c0d58:
    // 0x1c0d58: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1c0d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1c0d5c:
    // 0x1c0d5c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1c0d60:
    if (ctx->pc == 0x1C0D60u) {
        ctx->pc = 0x1C0D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0D5Cu;
        // 0x1c0d60: 0xa24202f6  sb          $v0, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0D64u;
        goto label_1c0d64;
    }
    ctx->pc = 0x1C0D5Cu;
    {
        const bool branch_taken_0x1c0d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0D5Cu;
        // 0x1c0d60: 0xa24202f6  sb          $v0, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d5c) {
            ctx->pc = 0x1C0D68u;
            goto label_1c0d68;
        }
    }
    ctx->pc = 0x1C0D64u;
label_1c0d64:
    // 0x1c0d64: 0xae540670  sw          $s4, 0x670($s2)
    ctx->pc = 0x1c0d64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1648), GPR_U32(ctx, 20));
label_1c0d68:
    // 0x1c0d68: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1c0d68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1c0d6c:
    // 0x1c0d6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c0d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0d70:
    // 0x1c0d70: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c0d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1c0d74:
    // 0x1c0d74: 0x240600fb  addiu       $a2, $zero, 0xFB
    ctx->pc = 0x1c0d74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 251));
label_1c0d78:
    // 0x1c0d78: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1c0d78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c0d7c:
    // 0x1c0d7c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c0d7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0d80:
    // 0x1c0d80: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c0d80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0d84:
    // 0x1c0d84: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c0d84u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0d88:
    // 0x1c0d88: 0xc0b2e92  jal         func_2CBA48
label_1c0d8c:
    if (ctx->pc == 0x1C0D8Cu) {
        ctx->pc = 0x1C0D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0D88u;
        // 0x1c0d8c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0D90u;
        goto label_1c0d90;
    }
    ctx->pc = 0x1C0D88u;
    SET_GPR_U32(ctx, 31, 0x1C0D90u);
    ctx->pc = 0x1C0D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0D88u;
    // 0x1c0d8c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1C0D88u, 0x1C0D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0D90u;
label_1c0d90:
    // 0x1c0d90: 0x9e4305b0  lwu         $v1, 0x5B0($s2)
    ctx->pc = 0x1c0d90u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 1456)));
label_1c0d94:
    // 0x1c0d94: 0x3197b  dsra        $v1, $v1, 5
    ctx->pc = 0x1c0d94u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 5);
label_1c0d98:
    // 0x1c0d98: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1c0d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1c0d9c:
    // 0x1c0d9c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_1c0da0:
    if (ctx->pc == 0x1C0DA0u) {
        ctx->pc = 0x1C0DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0D9Cu;
        // 0x1c0da0: 0xae400630  sw          $zero, 0x630($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1584), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0DA4u;
        goto label_1c0da4;
    }
    ctx->pc = 0x1C0D9Cu;
    {
        const bool branch_taken_0x1c0d9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0D9Cu;
        // 0x1c0da0: 0xae400630  sw          $zero, 0x630($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1584), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d9c) {
            ctx->pc = 0x1C0DBCu;
            goto label_1c0dbc;
        }
    }
    ctx->pc = 0x1C0DA4u;
label_1c0da4:
    // 0x1c0da4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1c0da4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_1c0da8:
    // 0x1c0da8: 0x96450662  lhu         $a1, 0x662($s2)
    ctx->pc = 0x1c0da8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1634)));
label_1c0dac:
    // 0x1c0dac: 0xc07ecb6  jal         func_1FB2D8
label_1c0db0:
    if (ctx->pc == 0x1C0DB0u) {
        ctx->pc = 0x1C0DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0DACu;
        // 0x1c0db0: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0DB4u;
        goto label_1c0db4;
    }
    ctx->pc = 0x1C0DACu;
    SET_GPR_U32(ctx, 31, 0x1C0DB4u);
    ctx->pc = 0x1C0DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0DACu;
    // 0x1c0db0: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB2D8u, 0x1C0DACu, 0x1C0DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0DB4u;
label_1c0db4:
    // 0x1c0db4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1c0db8:
    if (ctx->pc == 0x1C0DB8u) {
        ctx->pc = 0x1C0DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0DB4u;
        // 0x1c0db8: 0x9642056a  lhu         $v0, 0x56A($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1386)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0DBCu;
        goto label_1c0dbc;
    }
    ctx->pc = 0x1C0DB4u;
    {
        const bool branch_taken_0x1c0db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0DB4u;
        // 0x1c0db8: 0x9642056a  lhu         $v0, 0x56A($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1386)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0db4) {
            ctx->pc = 0x1C0DD0u;
            goto label_1c0dd0;
        }
    }
    ctx->pc = 0x1C0DBCu;
label_1c0dbc:
    // 0x1c0dbc: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x1c0dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
label_1c0dc0:
    // 0x1c0dc0: 0xde450538  ld          $a1, 0x538($s2)
    ctx->pc = 0x1c0dc0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 1336)));
label_1c0dc4:
    // 0x1c0dc4: 0xc0afb2c  jal         func_2BECB0
label_1c0dc8:
    if (ctx->pc == 0x1C0DC8u) {
        ctx->pc = 0x1C0DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0DC4u;
        // 0x1c0dc8: 0x24848658  addiu       $a0, $a0, -0x79A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0DCCu;
        goto label_1c0dcc;
    }
    ctx->pc = 0x1C0DC4u;
    SET_GPR_U32(ctx, 31, 0x1C0DCCu);
    ctx->pc = 0x1C0DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0DC4u;
    // 0x1c0dc8: 0x24848658  addiu       $a0, $a0, -0x79A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BECB0u, 0x1C0DC4u, 0x1C0DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0DCCu;
label_1c0dcc:
    // 0x1c0dcc: 0x9642056a  lhu         $v0, 0x56A($s2)
    ctx->pc = 0x1c0dccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1386)));
label_1c0dd0:
    // 0x1c0dd0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c0dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1c0dd4:
    // 0x1c0dd4: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1c0dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1c0dd8:
    // 0x1c0dd8: 0x1c6004b0  bgtz        $v1, . + 4 + (0x4B0 << 2)
label_1c0ddc:
    if (ctx->pc == 0x1C0DDCu) {
        ctx->pc = 0x1C0DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0DD8u;
        // 0x1c0ddc: 0xa642056a  sh          $v0, 0x56A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 1386), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0DE0u;
        goto label_1c0de0;
    }
    ctx->pc = 0x1C0DD8u;
    {
        const bool branch_taken_0x1c0dd8 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1C0DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0DD8u;
        // 0x1c0ddc: 0xa642056a  sh          $v0, 0x56A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 1386), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0dd8) {
            ctx->pc = 0x1C209Cu;
            goto label_1c209c;
        }
    }
    ctx->pc = 0x1C0DE0u;
label_1c0de0:
    // 0x1c0de0: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1c0de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1c0de4:
    // 0x1c0de4: 0x8e4700f0  lw          $a3, 0xF0($s2)
    ctx->pc = 0x1c0de4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_1c0de8:
    // 0x1c0de8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c0de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1c0dec:
    // 0x1c0dec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c0decu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c0df0:
    // 0x1c0df0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c0df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0df4:
    // 0x1c0df4: 0xa642056a  sh          $v0, 0x56A($s2)
    ctx->pc = 0x1c0df4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1386), (uint16_t)GPR_U32(ctx, 2));
label_1c0df8:
    // 0x1c0df8: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x1c0df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_1c0dfc:
    // 0x1c0dfc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c0dfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0e00:
    // 0x1c0e00: 0xc0c1a0e  jal         func_306838
label_1c0e04:
    if (ctx->pc == 0x1C0E04u) {
        ctx->pc = 0x1C0E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0E00u;
        // 0x1c0e04: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0E08u;
        goto label_1c0e08;
    }
    ctx->pc = 0x1C0E00u;
    SET_GPR_U32(ctx, 31, 0x1C0E08u);
    ctx->pc = 0x1C0E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0E00u;
    // 0x1c0e04: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x1C0E00u, 0x1C0E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0E08u;
label_1c0e08:
    // 0x1c0e08: 0x100004a4  b           . + 4 + (0x4A4 << 2)
label_1c0e0c:
    if (ctx->pc == 0x1C0E0Cu) {
        ctx->pc = 0x1C0E10u;
        goto label_1c0e10;
    }
    ctx->pc = 0x1C0E08u;
    {
        const bool branch_taken_0x1c0e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0e08) {
            ctx->pc = 0x1C209Cu;
            goto label_1c209c;
        }
    }
    ctx->pc = 0x1C0E10u;
label_1c0e10:
    // 0x1c0e10: 0x964402fe  lhu         $a0, 0x2FE($s2)
    ctx->pc = 0x1c0e10u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 766)));
label_1c0e14:
    // 0x1c0e14: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1c0e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1c0e18:
    // 0x1c0e18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c0e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c0e1c:
    // 0x1c0e1c: 0xa6420568  sh          $v0, 0x568($s2)
    ctx->pc = 0x1c0e1cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1384), (uint16_t)GPR_U32(ctx, 2));
label_1c0e20:
    // 0x1c0e20: 0x2484fc44  addiu       $a0, $a0, -0x3BC
    ctx->pc = 0x1c0e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966340));
label_1c0e24:
    // 0x1c0e24: 0xa2430660  sb          $v1, 0x660($s2)
    ctx->pc = 0x1c0e24u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1632), (uint8_t)GPR_U32(ctx, 3));
label_1c0e28:
    // 0x1c0e28: 0x2c820032  sltiu       $v0, $a0, 0x32
    ctx->pc = 0x1c0e28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
label_1c0e2c:
    // 0x1c0e2c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1c0e30:
    if (ctx->pc == 0x1C0E30u) {
        ctx->pc = 0x1C0E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0E2Cu;
        // 0x1c0e30: 0xa2430675  sb          $v1, 0x675($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1653), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0E34u;
        goto label_1c0e34;
    }
    ctx->pc = 0x1C0E2Cu;
    {
        const bool branch_taken_0x1c0e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0E2Cu;
        // 0x1c0e30: 0xa2430675  sb          $v1, 0x675($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1653), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0e2c) {
            ctx->pc = 0x1C0E50u;
            goto label_1c0e50;
        }
    }
    ctx->pc = 0x1C0E34u;
label_1c0e34:
    // 0x1c0e34: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1c0e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_1c0e38:
    // 0x1c0e38: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1c0e38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1c0e3c:
    // 0x1c0e3c: 0x24429ac0  addiu       $v0, $v0, -0x6540
    ctx->pc = 0x1c0e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941376));
label_1c0e40:
    // 0x1c0e40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c0e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1c0e44:
    // 0x1c0e44: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1c0e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1c0e48:
    // 0x1c0e48: 0x800008  jr          $a0
label_1c0e4c:
    if (ctx->pc == 0x1C0E4Cu) {
        ctx->pc = 0x1C0E50u;
        goto label_1c0e50;
    }
    ctx->pc = 0x1C0E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C0E50u: goto label_1c0e50;
            case 0x1C0F18u: goto label_1c0f18;
            case 0x1C1004u: goto label_1c1004;
            case 0x1C10F4u: goto label_1c10f4;
            case 0x1C11E4u: goto label_1c11e4;
            case 0x1C125Cu: goto label_1c125c;
            case 0x1C12E0u: goto label_1c12e0;
            case 0x1C1370u: goto label_1c1370;
            case 0x1C13E8u: goto label_1c13e8;
            case 0x1C1430u: goto label_1c1430;
            case 0x1C1478u: goto label_1c1478;
            case 0x1C14BCu: goto label_1c14bc;
            case 0x1C1500u: goto label_1c1500;
            case 0x1C1544u: goto label_1c1544;
            case 0x1C1588u: goto label_1c1588;
            case 0x1C15CCu: goto label_1c15cc;
            case 0x1C1610u: goto label_1c1610;
            case 0x1C1654u: goto label_1c1654;
            case 0x1C16A0u: goto label_1c16a0;
            case 0x1C1718u: goto label_1c1718;
            case 0x1C1750u: goto label_1c1750;
            case 0x1C1794u: goto label_1c1794;
            case 0x1C17D8u: goto label_1c17d8;
            case 0x1C181Cu: goto label_1c181c;
            case 0x1C186Cu: goto label_1c186c;
            case 0x1C18BCu: goto label_1c18bc;
            case 0x1C190Cu: goto label_1c190c;
            case 0x1C195Cu: goto label_1c195c;
            case 0x1C19ECu: goto label_1c19ec;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0E48u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C0E50u;
label_1c0e50:
    // 0x1c0e50: 0xc0b6dac  jal         func_2DB6B0
label_1c0e54:
    if (ctx->pc == 0x1C0E54u) {
        ctx->pc = 0x1C0E58u;
        goto label_1c0e58;
    }
    ctx->pc = 0x1C0E50u;
    SET_GPR_U32(ctx, 31, 0x1C0E58u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1C0E50u, 0x1C0E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0E58u;
label_1c0e58:
    // 0x1c0e58: 0xc0b6dac  jal         func_2DB6B0
label_1c0e5c:
    if (ctx->pc == 0x1C0E5Cu) {
        ctx->pc = 0x1C0E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0E58u;
        // 0x1c0e5c: 0x8450054a  lh          $s0, 0x54A($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1354)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0E60u;
        goto label_1c0e60;
    }
    ctx->pc = 0x1C0E58u;
    SET_GPR_U32(ctx, 31, 0x1C0E60u);
    ctx->pc = 0x1C0E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0E58u;
    // 0x1c0e5c: 0x8450054a  lh          $s0, 0x54A($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1354)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1C0E58u, 0x1C0E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0E60u;
label_1c0e60:
    // 0x1c0e60: 0x84430548  lh          $v1, 0x548($v0)
    ctx->pc = 0x1c0e60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1352)));
label_1c0e64:
    // 0x1c0e64: 0x16030003  bne         $s0, $v1, . + 4 + (0x3 << 2)
label_1c0e68:
    if (ctx->pc == 0x1C0E68u) {
        ctx->pc = 0x1C0E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0E64u;
        // 0x1c0e68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0E6Cu;
        goto label_1c0e6c;
    }
    ctx->pc = 0x1C0E64u;
    {
        const bool branch_taken_0x1c0e64 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C0E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0E64u;
        // 0x1c0e68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0e64) {
            ctx->pc = 0x1C0E74u;
            goto label_1c0e74;
        }
    }
    ctx->pc = 0x1C0E6Cu;
label_1c0e6c:
    // 0x1c0e6c: 0xc070902  jal         func_1C2408
label_1c0e70:
    if (ctx->pc == 0x1C0E70u) {
        ctx->pc = 0x1C0E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0E6Cu;
        // 0x1c0e70: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0E74u;
        goto label_1c0e74;
    }
    ctx->pc = 0x1C0E6Cu;
    SET_GPR_U32(ctx, 31, 0x1C0E74u);
    ctx->pc = 0x1C0E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0E6Cu;
    // 0x1c0e70: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2408u, 0x1C0E6Cu, 0x1C0E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0E74u;
label_1c0e74:
    // 0x1c0e74: 0xc0b6dac  jal         func_2DB6B0
label_1c0e78:
    if (ctx->pc == 0x1C0E78u) {
        ctx->pc = 0x1C0E7Cu;
        goto label_1c0e7c;
    }
    ctx->pc = 0x1C0E74u;
    SET_GPR_U32(ctx, 31, 0x1C0E7Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1C0E74u, 0x1C0E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0E7Cu;
label_1c0e7c:
    // 0x1c0e7c: 0xc0b6dac  jal         func_2DB6B0
label_1c0e80:
    if (ctx->pc == 0x1C0E80u) {
        ctx->pc = 0x1C0E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0E7Cu;
        // 0x1c0e80: 0x84510548  lh          $s1, 0x548($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0E84u;
        goto label_1c0e84;
    }
    ctx->pc = 0x1C0E7Cu;
    SET_GPR_U32(ctx, 31, 0x1C0E84u);
    ctx->pc = 0x1C0E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0E7Cu;
    // 0x1c0e80: 0x84510548  lh          $s1, 0x548($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1C0E7Cu, 0x1C0E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0E84u;
label_1c0e84:
    // 0x1c0e84: 0xc0b6dac  jal         func_2DB6B0
label_1c0e88:
    if (ctx->pc == 0x1C0E88u) {
        ctx->pc = 0x1C0E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0E84u;
        // 0x1c0e88: 0x8450054a  lh          $s0, 0x54A($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1354)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0E8Cu;
        goto label_1c0e8c;
    }
    ctx->pc = 0x1C0E84u;
    SET_GPR_U32(ctx, 31, 0x1C0E8Cu);
    ctx->pc = 0x1C0E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0E84u;
    // 0x1c0e88: 0x8450054a  lh          $s0, 0x54A($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1354)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1C0E84u, 0x1C0E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0E8Cu;
label_1c0e8c:
    // 0x1c0e8c: 0x84430548  lh          $v1, 0x548($v0)
    ctx->pc = 0x1c0e8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1352)));
label_1c0e90:
    // 0x1c0e90: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x1c0e90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_1c0e94:
    // 0x1c0e94: 0x70182a  slt         $v1, $v1, $s0
    ctx->pc = 0x1c0e94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1c0e98:
    // 0x1c0e98: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1c0e9c:
    if (ctx->pc == 0x1C0E9Cu) {
        ctx->pc = 0x1C0EA0u;
        goto label_1c0ea0;
    }
    ctx->pc = 0x1C0E98u;
    {
        const bool branch_taken_0x1c0e98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0e98) {
            ctx->pc = 0x1C0EACu;
            goto label_1c0eac;
        }
    }
    ctx->pc = 0x1C0EA0u;
label_1c0ea0:
    // 0x1c0ea0: 0xc0b6dac  jal         func_2DB6B0
label_1c0ea4:
    if (ctx->pc == 0x1C0EA4u) {
        ctx->pc = 0x1C0EA8u;
        goto label_1c0ea8;
    }
    ctx->pc = 0x1C0EA0u;
    SET_GPR_U32(ctx, 31, 0x1C0EA8u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1C0EA0u, 0x1C0EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0EA8u;
label_1c0ea8:
    // 0x1c0ea8: 0x84500548  lh          $s0, 0x548($v0)
    ctx->pc = 0x1c0ea8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1352)));
label_1c0eac:
    // 0x1c0eac: 0xc0b6dac  jal         func_2DB6B0
label_1c0eb0:
    if (ctx->pc == 0x1C0EB0u) {
        ctx->pc = 0x1C0EB4u;
        goto label_1c0eb4;
    }
    ctx->pc = 0x1C0EACu;
    SET_GPR_U32(ctx, 31, 0x1C0EB4u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1C0EACu, 0x1C0EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0EB4u;
label_1c0eb4:
    // 0x1c0eb4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c0eb4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c0eb8:
    // 0x1c0eb8: 0x84620548  lh          $v0, 0x548($v1)
    ctx->pc = 0x1c0eb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1352)));
label_1c0ebc:
    // 0x1c0ebc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1c0ebcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1c0ec0:
    // 0x1c0ec0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c0ec4:
    if (ctx->pc == 0x1C0EC4u) {
        ctx->pc = 0x1C0EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0EC0u;
        // 0x1c0ec4: 0x94640548  lhu         $a0, 0x548($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0EC8u;
        goto label_1c0ec8;
    }
    ctx->pc = 0x1C0EC0u;
    {
        const bool branch_taken_0x1c0ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0EC0u;
        // 0x1c0ec4: 0x94640548  lhu         $a0, 0x548($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0ec0) {
            ctx->pc = 0x1C0ED0u;
            goto label_1c0ed0;
        }
    }
    ctx->pc = 0x1C0EC8u;
label_1c0ec8:
    // 0x1c0ec8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1c0ecc:
    if (ctx->pc == 0x1C0ECCu) {
        ctx->pc = 0x1C0ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0EC8u;
        // 0x1c0ecc: 0xa464054a  sh          $a0, 0x54A($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 1354), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0ED0u;
        goto label_1c0ed0;
    }
    ctx->pc = 0x1C0EC8u;
    {
        const bool branch_taken_0x1c0ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0EC8u;
        // 0x1c0ecc: 0xa464054a  sh          $a0, 0x54A($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 1354), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0ec8) {
            ctx->pc = 0x1C0ED4u;
            goto label_1c0ed4;
        }
    }
    ctx->pc = 0x1C0ED0u;
label_1c0ed0:
    // 0x1c0ed0: 0xa470054a  sh          $s0, 0x54A($v1)
    ctx->pc = 0x1c0ed0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1354), (uint16_t)GPR_U32(ctx, 16));
label_1c0ed4:
    // 0x1c0ed4: 0xc0b6dac  jal         func_2DB6B0
label_1c0ed8:
    if (ctx->pc == 0x1C0ED8u) {
        ctx->pc = 0x1C0EDCu;
        goto label_1c0edc;
    }
    ctx->pc = 0x1C0ED4u;
    SET_GPR_U32(ctx, 31, 0x1C0EDCu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1C0ED4u, 0x1C0EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0EDCu;
label_1c0edc:
    // 0x1c0edc: 0xac4005f4  sw          $zero, 0x5F4($v0)
    ctx->pc = 0x1c0edcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1524), GPR_U32(ctx, 0));
label_1c0ee0:
    // 0x1c0ee0: 0xc04b14c  jal         func_12C530
label_1c0ee4:
    if (ctx->pc == 0x1C0EE4u) {
        ctx->pc = 0x1C0EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0EE0u;
        // 0x1c0ee4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0EE8u;
        goto label_1c0ee8;
    }
    ctx->pc = 0x1C0EE0u;
    SET_GPR_U32(ctx, 31, 0x1C0EE8u);
    ctx->pc = 0x1C0EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0EE0u;
    // 0x1c0ee4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C530u, 0x1C0EE0u, 0x1C0EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0EE8u;
label_1c0ee8:
    // 0x1c0ee8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1c0eec:
    if (ctx->pc == 0x1C0EECu) {
        ctx->pc = 0x1C0EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0EE8u;
        // 0x1c0eec: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0EF0u;
        goto label_1c0ef0;
    }
    ctx->pc = 0x1C0EE8u;
    {
        const bool branch_taken_0x1c0ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0EE8u;
        // 0x1c0eec: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0ee8) {
            ctx->pc = 0x1C0F04u;
            goto label_1c0f04;
        }
    }
    ctx->pc = 0x1C0EF0u;
label_1c0ef0:
    // 0x1c0ef0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c0ef0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c0ef4:
    // 0x1c0ef4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c0ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1c0ef8:
    // 0x1c0ef8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c0ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c0efc:
    // 0x1c0efc: 0x100002b4  b           . + 4 + (0x2B4 << 2)
label_1c0f00:
    if (ctx->pc == 0x1C0F00u) {
        ctx->pc = 0x1C0F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0EFCu;
        // 0x1c0f00: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0F04u;
        goto label_1c0f04;
    }
    ctx->pc = 0x1C0EFCu;
    {
        const bool branch_taken_0x1c0efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0EFCu;
        // 0x1c0f00: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0efc) {
            ctx->pc = 0x1C19D0u;
            goto label_1c19d0;
        }
    }
    ctx->pc = 0x1C0F04u;
label_1c0f04:
    // 0x1c0f04: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c0f04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c0f08:
    // 0x1c0f08: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c0f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1c0f0c:
    // 0x1c0f0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c0f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0f10:
    // 0x1c0f10: 0x100002af  b           . + 4 + (0x2AF << 2)
label_1c0f14:
    if (ctx->pc == 0x1C0F14u) {
        ctx->pc = 0x1C0F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0F10u;
        // 0x1c0f14: 0x240600dc  addiu       $a2, $zero, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0F18u;
        goto label_1c0f18;
    }
    ctx->pc = 0x1C0F10u;
    {
        const bool branch_taken_0x1c0f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0F10u;
        // 0x1c0f14: 0x240600dc  addiu       $a2, $zero, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0f10) {
            ctx->pc = 0x1C19D0u;
            goto label_1c19d0;
        }
    }
    ctx->pc = 0x1C0F18u;
label_1c0f18:
    // 0x1c0f18: 0xc0b6dac  jal         func_2DB6B0
label_1c0f1c:
    if (ctx->pc == 0x1C0F1Cu) {
        ctx->pc = 0x1C0F20u;
        goto label_1c0f20;
    }
    ctx->pc = 0x1C0F18u;
    SET_GPR_U32(ctx, 31, 0x1C0F20u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1C0F18u, 0x1C0F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0F20u;
label_1c0f20:
    // 0x1c0f20: 0xc0b6dac  jal         func_2DB6B0
label_1c0f24:
    if (ctx->pc == 0x1C0F24u) {
        ctx->pc = 0x1C0F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0F20u;
        // 0x1c0f24: 0x8450054a  lh          $s0, 0x54A($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1354)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0F28u;
        goto label_1c0f28;
    }
    ctx->pc = 0x1C0F20u;
    SET_GPR_U32(ctx, 31, 0x1C0F28u);
    ctx->pc = 0x1C0F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0F20u;
    // 0x1c0f24: 0x8450054a  lh          $s0, 0x54A($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1354)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1C0F20u, 0x1C0F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0F28u;
label_1c0f28:
    // 0x1c0f28: 0x84430548  lh          $v1, 0x548($v0)
    ctx->pc = 0x1c0f28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1352)));
label_1c0f2c:
    // 0x1c0f2c: 0x16030003  bne         $s0, $v1, . + 4 + (0x3 << 2)
label_1c0f30:
    if (ctx->pc == 0x1C0F30u) {
        ctx->pc = 0x1C0F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0F2Cu;
        // 0x1c0f30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0F34u;
        goto label_1c0f34;
    }
    ctx->pc = 0x1C0F2Cu;
    {
        const bool branch_taken_0x1c0f2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C0F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0F2Cu;
        // 0x1c0f30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0f2c) {
            ctx->pc = 0x1C0F3Cu;
            goto label_1c0f3c;
        }
    }
    ctx->pc = 0x1C0F34u;
label_1c0f34:
    // 0x1c0f34: 0xc070902  jal         func_1C2408
label_1c0f38:
    if (ctx->pc == 0x1C0F38u) {
        ctx->pc = 0x1C0F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0F34u;
        // 0x1c0f38: 0x240501f4  addiu       $a1, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0F3Cu;
        goto label_1c0f3c;
    }
    ctx->pc = 0x1C0F34u;
    SET_GPR_U32(ctx, 31, 0x1C0F3Cu);
    ctx->pc = 0x1C0F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0F34u;
    // 0x1c0f38: 0x240501f4  addiu       $a1, $zero, 0x1F4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2408u, 0x1C0F34u, 0x1C0F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0F3Cu;
label_1c0f3c:
    // 0x1c0f3c: 0xc0b6dac  jal         func_2DB6B0
label_1c0f40:
    if (ctx->pc == 0x1C0F40u) {
        ctx->pc = 0x1C0F44u;
        goto label_1c0f44;
    }
    ctx->pc = 0x1C0F3Cu;
    SET_GPR_U32(ctx, 31, 0x1C0F44u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1C0F3Cu, 0x1C0F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0F44u;
label_1c0f44:
    // 0x1c0f44: 0x84510548  lh          $s1, 0x548($v0)
    ctx->pc = 0x1c0f44u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1352)));
label_1c0f48:
    // 0x1c0f48: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1c0f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1c0f4c:
    // 0x1c0f4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c0f4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c0f50:
    // 0x1c0f50: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x1c0f50u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c0f54:
    // 0x1c0f54: 0x0  nop
    ctx->pc = 0x1c0f54u;
    // NOP
label_1c0f58:
    // 0x1c0f58: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c0f58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1c0f5c:
    // 0x1c0f5c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1c0f5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1c0f60:
    // 0x1c0f60: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c0f60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1c0f64:
    // 0x1c0f64: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x1c0f64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_1c0f68:
    // 0x1c0f68: 0xc0b6dac  jal         func_2DB6B0
label_1c0f6c:
    if (ctx->pc == 0x1C0F6Cu) {
        ctx->pc = 0x1C0F70u;
        goto label_1c0f70;
    }
    ctx->pc = 0x1C0F68u;
    SET_GPR_U32(ctx, 31, 0x1C0F70u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1C0F68u, 0x1C0F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0F70u;
label_1c0f70:
    // 0x1c0f70: 0xc0b6dac  jal         func_2DB6B0
label_1c0f74:
    if (ctx->pc == 0x1C0F74u) {
        ctx->pc = 0x1C0F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0F70u;
        // 0x1c0f74: 0x8450054a  lh          $s0, 0x54A($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1354)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0F78u;
        goto label_1c0f78;
    }
    ctx->pc = 0x1C0F70u;
    SET_GPR_U32(ctx, 31, 0x1C0F78u);
    ctx->pc = 0x1C0F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0F70u;
    // 0x1c0f74: 0x8450054a  lh          $s0, 0x54A($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1354)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1C0F70u, 0x1C0F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0F78u;
label_1c0f78:
    // 0x1c0f78: 0x84430548  lh          $v1, 0x548($v0)
    ctx->pc = 0x1c0f78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1352)));
label_1c0f7c:
    // 0x1c0f7c: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x1c0f7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_1c0f80:
    // 0x1c0f80: 0x70182a  slt         $v1, $v1, $s0
    ctx->pc = 0x1c0f80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1c0f84:
    // 0x1c0f84: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1c0f88:
    if (ctx->pc == 0x1C0F88u) {
        ctx->pc = 0x1C0F8Cu;
        goto label_1c0f8c;
    }
    ctx->pc = 0x1C0F84u;
    {
        const bool branch_taken_0x1c0f84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0f84) {
            ctx->pc = 0x1C0F98u;
            goto label_1c0f98;
        }
    }
    ctx->pc = 0x1C0F8Cu;
label_1c0f8c:
    // 0x1c0f8c: 0xc0b6dac  jal         func_2DB6B0
label_1c0f90:
    if (ctx->pc == 0x1C0F90u) {
        ctx->pc = 0x1C0F94u;
        goto label_1c0f94;
    }
    ctx->pc = 0x1C0F8Cu;
    SET_GPR_U32(ctx, 31, 0x1C0F94u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1C0F8Cu, 0x1C0F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0F94u;
label_1c0f94:
    // 0x1c0f94: 0x84500548  lh          $s0, 0x548($v0)
    ctx->pc = 0x1c0f94u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1352)));
label_1c0f98:
    // 0x1c0f98: 0xc0b6dac  jal         func_2DB6B0
label_1c0f9c:
    if (ctx->pc == 0x1C0F9Cu) {
        ctx->pc = 0x1C0FA0u;
        goto label_1c0fa0;
    }
    ctx->pc = 0x1C0F98u;
    SET_GPR_U32(ctx, 31, 0x1C0FA0u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1C0F98u, 0x1C0FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0FA0u;
label_1c0fa0:
    // 0x1c0fa0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c0fa0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c0fa4:
    // 0x1c0fa4: 0x84620548  lh          $v0, 0x548($v1)
    ctx->pc = 0x1c0fa4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1352)));
label_1c0fa8:
    // 0x1c0fa8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1c0fa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1c0fac:
    // 0x1c0fac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c0fb0:
    if (ctx->pc == 0x1C0FB0u) {
        ctx->pc = 0x1C0FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0FACu;
        // 0x1c0fb0: 0x94640548  lhu         $a0, 0x548($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0FB4u;
        goto label_1c0fb4;
    }
    ctx->pc = 0x1C0FACu;
    {
        const bool branch_taken_0x1c0fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0FACu;
        // 0x1c0fb0: 0x94640548  lhu         $a0, 0x548($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0fac) {
            ctx->pc = 0x1C0FBCu;
            goto label_1c0fbc;
        }
    }
    ctx->pc = 0x1C0FB4u;
label_1c0fb4:
    // 0x1c0fb4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1c0fb8:
    if (ctx->pc == 0x1C0FB8u) {
        ctx->pc = 0x1C0FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0FB4u;
        // 0x1c0fb8: 0xa464054a  sh          $a0, 0x54A($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 1354), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0FBCu;
        goto label_1c0fbc;
    }
    ctx->pc = 0x1C0FB4u;
    {
        const bool branch_taken_0x1c0fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0FB4u;
        // 0x1c0fb8: 0xa464054a  sh          $a0, 0x54A($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 1354), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0fb4) {
            ctx->pc = 0x1C0FC0u;
            goto label_1c0fc0;
        }
    }
    ctx->pc = 0x1C0FBCu;
label_1c0fbc:
    // 0x1c0fbc: 0xa470054a  sh          $s0, 0x54A($v1)
    ctx->pc = 0x1c0fbcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1354), (uint16_t)GPR_U32(ctx, 16));
label_1c0fc0:
    // 0x1c0fc0: 0xc0b6dac  jal         func_2DB6B0
label_1c0fc4:
    if (ctx->pc == 0x1C0FC4u) {
        ctx->pc = 0x1C0FC8u;
        goto label_1c0fc8;
    }
    ctx->pc = 0x1C0FC0u;
    SET_GPR_U32(ctx, 31, 0x1C0FC8u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1C0FC0u, 0x1C0FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0FC8u;
label_1c0fc8:
    // 0x1c0fc8: 0xac4005f4  sw          $zero, 0x5F4($v0)
    ctx->pc = 0x1c0fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1524), GPR_U32(ctx, 0));
label_1c0fcc:
    // 0x1c0fcc: 0xc04b14c  jal         func_12C530
label_1c0fd0:
    if (ctx->pc == 0x1C0FD0u) {
        ctx->pc = 0x1C0FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0FCCu;
        // 0x1c0fd0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0FD4u;
        goto label_1c0fd4;
    }
    ctx->pc = 0x1C0FCCu;
    SET_GPR_U32(ctx, 31, 0x1C0FD4u);
    ctx->pc = 0x1C0FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0FCCu;
    // 0x1c0fd0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C530u, 0x1C0FCCu, 0x1C0FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0FD4u;
label_1c0fd4:
    // 0x1c0fd4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1c0fd8:
    if (ctx->pc == 0x1C0FD8u) {
        ctx->pc = 0x1C0FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0FD4u;
        // 0x1c0fd8: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0FDCu;
        goto label_1c0fdc;
    }
    ctx->pc = 0x1C0FD4u;
    {
        const bool branch_taken_0x1c0fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0FD4u;
        // 0x1c0fd8: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0fd4) {
            ctx->pc = 0x1C0FF0u;
            goto label_1c0ff0;
        }
    }
    ctx->pc = 0x1C0FDCu;
label_1c0fdc:
    // 0x1c0fdc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c0fdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c0fe0:
    // 0x1c0fe0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c0fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1c0fe4:
    // 0x1c0fe4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c0fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c0fe8:
    // 0x1c0fe8: 0x10000279  b           . + 4 + (0x279 << 2)
label_1c0fec:
    if (ctx->pc == 0x1C0FECu) {
        ctx->pc = 0x1C0FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0FE8u;
        // 0x1c0fec: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0FF0u;
        goto label_1c0ff0;
    }
    ctx->pc = 0x1C0FE8u;
    {
        const bool branch_taken_0x1c0fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0FE8u;
        // 0x1c0fec: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0fe8) {
            ctx->pc = 0x1C19D0u;
            goto label_1c19d0;
        }
    }
    ctx->pc = 0x1C0FF0u;
label_1c0ff0:
    // 0x1c0ff0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c0ff0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c0ff4:
    // 0x1c0ff4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c0ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1c0ff8:
    // 0x1c0ff8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c0ff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0ffc:
    // 0x1c0ffc: 0x10000274  b           . + 4 + (0x274 << 2)
label_1c1000:
    if (ctx->pc == 0x1C1000u) {
        ctx->pc = 0x1C1000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0FFCu;
        // 0x1c1000: 0x240600df  addiu       $a2, $zero, 0xDF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1004u;
        goto label_1c1004;
    }
    ctx->pc = 0x1C0FFCu;
    {
        const bool branch_taken_0x1c0ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0FFCu;
        // 0x1c1000: 0x240600df  addiu       $a2, $zero, 0xDF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0ffc) {
            ctx->pc = 0x1C19D0u;
            goto label_1c19d0;
        }
    }
    ctx->pc = 0x1C1004u;
label_1c1004:
    // 0x1c1004: 0xc0b6dac  jal         func_2DB6B0
label_1c1008:
    if (ctx->pc == 0x1C1008u) {
        ctx->pc = 0x1C100Cu;
        goto label_1c100c;
    }
    ctx->pc = 0x1C1004u;
    SET_GPR_U32(ctx, 31, 0x1C100Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1C1004u, 0x1C100Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C100Cu;
label_1c100c:
    // 0x1c100c: 0xc0b6dac  jal         func_2DB6B0
label_1c1010:
    if (ctx->pc == 0x1C1010u) {
        ctx->pc = 0x1C1010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C100Cu;
        // 0x1c1010: 0x8450054a  lh          $s0, 0x54A($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1354)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1014u;
        goto label_1c1014;
    }
    ctx->pc = 0x1C100Cu;
    SET_GPR_U32(ctx, 31, 0x1C1014u);
    ctx->pc = 0x1C1010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C100Cu;
    // 0x1c1010: 0x8450054a  lh          $s0, 0x54A($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1354)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1C100Cu, 0x1C1014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1014u;
label_1c1014:
    // 0x1c1014: 0x84430548  lh          $v1, 0x548($v0)
    ctx->pc = 0x1c1014u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1352)));
label_1c1018:
    // 0x1c1018: 0x16030003  bne         $s0, $v1, . + 4 + (0x3 << 2)
label_1c101c:
    if (ctx->pc == 0x1C101Cu) {
        ctx->pc = 0x1C101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1018u;
        // 0x1c101c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1020u;
        goto label_1c1020;
    }
    ctx->pc = 0x1C1018u;
    {
        const bool branch_taken_0x1c1018 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1018u;
        // 0x1c101c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1018) {
            ctx->pc = 0x1C1028u;
            goto label_1c1028;
        }
    }
    ctx->pc = 0x1C1020u;
label_1c1020:
    // 0x1c1020: 0xc070902  jal         func_1C2408
label_1c1024:
    if (ctx->pc == 0x1C1024u) {
        ctx->pc = 0x1C1024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1020u;
        // 0x1c1024: 0x240500c8  addiu       $a1, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1028u;
        goto label_1c1028;
    }
    ctx->pc = 0x1C1020u;
    SET_GPR_U32(ctx, 31, 0x1C1028u);
    ctx->pc = 0x1C1024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1020u;
    // 0x1c1024: 0x240500c8  addiu       $a1, $zero, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2408u, 0x1C1020u, 0x1C1028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1028u;
label_1c1028:
    // 0x1c1028: 0xc0b6dac  jal         func_2DB6B0
label_1c102c:
    if (ctx->pc == 0x1C102Cu) {
        ctx->pc = 0x1C1030u;
        goto label_1c1030;
    }
    ctx->pc = 0x1C1028u;
    SET_GPR_U32(ctx, 31, 0x1C1030u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1C1028u, 0x1C1030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1030u;
label_1c1030:
    // 0x1c1030: 0x84510548  lh          $s1, 0x548($v0)
    ctx->pc = 0x1c1030u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1352)));
label_1c1034:
    // 0x1c1034: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1c1034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_1c1038:
    // 0x1c1038: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1c1038u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1c103c:
    // 0x1c103c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c103cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c1040:
    // 0x1c1040: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x1c1040u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c1044:
    // 0x1c1044: 0x0  nop
    ctx->pc = 0x1c1044u;
    // NOP
label_1c1048:
    // 0x1c1048: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c1048u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1c104c:
    // 0x1c104c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1c104cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1c1050:
    // 0x1c1050: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c1050u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1c1054:
    // 0x1c1054: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x1c1054u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_1c1058:
    // 0x1c1058: 0xc0b6dac  jal         func_2DB6B0
label_1c105c:
    if (ctx->pc == 0x1C105Cu) {
        ctx->pc = 0x1C1060u;
        goto label_1c1060;
    }
    ctx->pc = 0x1C1058u;
    SET_GPR_U32(ctx, 31, 0x1C1060u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1C1058u, 0x1C1060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1060u;
label_1c1060:
    // 0x1c1060: 0xc0b6dac  jal         func_2DB6B0
label_1c1064:
    if (ctx->pc == 0x1C1064u) {
        ctx->pc = 0x1C1064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1060u;
        // 0x1c1064: 0x8450054a  lh          $s0, 0x54A($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1354)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1068u;
        goto label_1c1068;
    }
    ctx->pc = 0x1C1060u;
    SET_GPR_U32(ctx, 31, 0x1C1068u);
    ctx->pc = 0x1C1064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1060u;
    // 0x1c1064: 0x8450054a  lh          $s0, 0x54A($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1354)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1C1060u, 0x1C1068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1068u;
label_1c1068:
    // 0x1c1068: 0x84430548  lh          $v1, 0x548($v0)
    ctx->pc = 0x1c1068u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1352)));
label_1c106c:
    // 0x1c106c: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x1c106cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_1c1070:
    // 0x1c1070: 0x70182a  slt         $v1, $v1, $s0
    ctx->pc = 0x1c1070u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1c1074:
    // 0x1c1074: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1c1078:
    if (ctx->pc == 0x1C1078u) {
        ctx->pc = 0x1C107Cu;
        goto label_1c107c;
    }
    ctx->pc = 0x1C1074u;
    {
        const bool branch_taken_0x1c1074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1074) {
            ctx->pc = 0x1C1088u;
            goto label_1c1088;
        }
    }
    ctx->pc = 0x1C107Cu;
label_1c107c:
    // 0x1c107c: 0xc0b6dac  jal         func_2DB6B0
label_1c1080:
    if (ctx->pc == 0x1C1080u) {
        ctx->pc = 0x1C1084u;
        goto label_1c1084;
    }
    ctx->pc = 0x1C107Cu;
    SET_GPR_U32(ctx, 31, 0x1C1084u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1C107Cu, 0x1C1084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1084u;
label_1c1084:
    // 0x1c1084: 0x84500548  lh          $s0, 0x548($v0)
    ctx->pc = 0x1c1084u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1352)));
label_1c1088:
    // 0x1c1088: 0xc0b6dac  jal         func_2DB6B0
label_1c108c:
    if (ctx->pc == 0x1C108Cu) {
        ctx->pc = 0x1C1090u;
        goto label_1c1090;
    }
    ctx->pc = 0x1C1088u;
    SET_GPR_U32(ctx, 31, 0x1C1090u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1C1088u, 0x1C1090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1090u;
label_1c1090:
    // 0x1c1090: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c1090u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c1094:
    // 0x1c1094: 0x84620548  lh          $v0, 0x548($v1)
    ctx->pc = 0x1c1094u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1352)));
label_1c1098:
    // 0x1c1098: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1c1098u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1c109c:
    // 0x1c109c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c10a0:
    if (ctx->pc == 0x1C10A0u) {
        ctx->pc = 0x1C10A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C109Cu;
        // 0x1c10a0: 0x94640548  lhu         $a0, 0x548($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C10A4u;
        goto label_1c10a4;
    }
    ctx->pc = 0x1C109Cu;
    {
        const bool branch_taken_0x1c109c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C10A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C109Cu;
        // 0x1c10a0: 0x94640548  lhu         $a0, 0x548($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c109c) {
            ctx->pc = 0x1C10ACu;
            goto label_1c10ac;
        }
    }
    ctx->pc = 0x1C10A4u;
label_1c10a4:
    // 0x1c10a4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1c10a8:
    if (ctx->pc == 0x1C10A8u) {
        ctx->pc = 0x1C10A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C10A4u;
        // 0x1c10a8: 0xa464054a  sh          $a0, 0x54A($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 1354), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C10ACu;
        goto label_1c10ac;
    }
    ctx->pc = 0x1C10A4u;
    {
        const bool branch_taken_0x1c10a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C10A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C10A4u;
        // 0x1c10a8: 0xa464054a  sh          $a0, 0x54A($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 1354), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c10a4) {
            ctx->pc = 0x1C10B0u;
            goto label_1c10b0;
        }
    }
    ctx->pc = 0x1C10ACu;
label_1c10ac:
    // 0x1c10ac: 0xa470054a  sh          $s0, 0x54A($v1)
    ctx->pc = 0x1c10acu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1354), (uint16_t)GPR_U32(ctx, 16));
label_1c10b0:
    // 0x1c10b0: 0xc0b6dac  jal         func_2DB6B0
label_1c10b4:
    if (ctx->pc == 0x1C10B4u) {
        ctx->pc = 0x1C10B8u;
        goto label_1c10b8;
    }
    ctx->pc = 0x1C10B0u;
    SET_GPR_U32(ctx, 31, 0x1C10B8u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1C10B0u, 0x1C10B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C10B8u;
label_1c10b8:
    // 0x1c10b8: 0xac4005f4  sw          $zero, 0x5F4($v0)
    ctx->pc = 0x1c10b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1524), GPR_U32(ctx, 0));
label_1c10bc:
    // 0x1c10bc: 0xc04b14c  jal         func_12C530
label_1c10c0:
    if (ctx->pc == 0x1C10C0u) {
        ctx->pc = 0x1C10C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C10BCu;
        // 0x1c10c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C10C4u;
        goto label_1c10c4;
    }
    ctx->pc = 0x1C10BCu;
    SET_GPR_U32(ctx, 31, 0x1C10C4u);
    ctx->pc = 0x1C10C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C10BCu;
    // 0x1c10c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C530u, 0x1C10BCu, 0x1C10C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C10C4u;
label_1c10c4:
    // 0x1c10c4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1c10c8:
    if (ctx->pc == 0x1C10C8u) {
        ctx->pc = 0x1C10C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C10C4u;
        // 0x1c10c8: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C10CCu;
        goto label_1c10cc;
    }
    ctx->pc = 0x1C10C4u;
    {
        const bool branch_taken_0x1c10c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C10C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C10C4u;
        // 0x1c10c8: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c10c4) {
            ctx->pc = 0x1C10E0u;
            goto label_1c10e0;
        }
    }
    ctx->pc = 0x1C10CCu;
label_1c10cc:
    // 0x1c10cc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c10ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c10d0:
    // 0x1c10d0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c10d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1c10d4:
    // 0x1c10d4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c10d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c10d8:
    // 0x1c10d8: 0x1000023d  b           . + 4 + (0x23D << 2)
label_1c10dc:
    if (ctx->pc == 0x1C10DCu) {
        ctx->pc = 0x1C10DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C10D8u;
        // 0x1c10dc: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C10E0u;
        goto label_1c10e0;
    }
    ctx->pc = 0x1C10D8u;
    {
        const bool branch_taken_0x1c10d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C10DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C10D8u;
        // 0x1c10dc: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c10d8) {
            ctx->pc = 0x1C19D0u;
            goto label_1c19d0;
        }
    }
    ctx->pc = 0x1C10E0u;
label_1c10e0:
    // 0x1c10e0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c10e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c10e4:
    // 0x1c10e4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c10e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1c10e8:
    // 0x1c10e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c10e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c10ec:
    // 0x1c10ec: 0x10000238  b           . + 4 + (0x238 << 2)
label_1c10f0:
    if (ctx->pc == 0x1C10F0u) {
        ctx->pc = 0x1C10F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C10ECu;
        // 0x1c10f0: 0x240600d2  addiu       $a2, $zero, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C10F4u;
        goto label_1c10f4;
    }
    ctx->pc = 0x1C10ECu;
    {
        const bool branch_taken_0x1c10ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C10F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C10ECu;
        // 0x1c10f0: 0x240600d2  addiu       $a2, $zero, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c10ec) {
            ctx->pc = 0x1C19D0u;
            goto label_1c19d0;
        }
    }
    ctx->pc = 0x1C10F4u;
label_1c10f4:
    // 0x1c10f4: 0xc0b6dac  jal         func_2DB6B0
label_1c10f8:
    if (ctx->pc == 0x1C10F8u) {
        ctx->pc = 0x1C10FCu;
        goto label_1c10fc;
    }
    ctx->pc = 0x1C10F4u;
    SET_GPR_U32(ctx, 31, 0x1C10FCu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1C10F4u, 0x1C10FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C10FCu;
label_1c10fc:
    // 0x1c10fc: 0xc0b6dac  jal         func_2DB6B0
label_1c1100:
    if (ctx->pc == 0x1C1100u) {
        ctx->pc = 0x1C1100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C10FCu;
        // 0x1c1100: 0x8450054a  lh          $s0, 0x54A($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1354)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1104u;
        goto label_1c1104;
    }
    ctx->pc = 0x1C10FCu;
    SET_GPR_U32(ctx, 31, 0x1C1104u);
    ctx->pc = 0x1C1100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C10FCu;
    // 0x1c1100: 0x8450054a  lh          $s0, 0x54A($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1354)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1C10FCu, 0x1C1104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1104u;
label_1c1104:
    // 0x1c1104: 0x84430548  lh          $v1, 0x548($v0)
    ctx->pc = 0x1c1104u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1352)));
label_1c1108:
    // 0x1c1108: 0x16030003  bne         $s0, $v1, . + 4 + (0x3 << 2)
label_1c110c:
    if (ctx->pc == 0x1C110Cu) {
        ctx->pc = 0x1C110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1108u;
        // 0x1c110c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1110u;
        goto label_1c1110;
    }
    ctx->pc = 0x1C1108u;
    {
        const bool branch_taken_0x1c1108 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1108u;
        // 0x1c110c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1108) {
            ctx->pc = 0x1C1118u;
            goto label_1c1118;
        }
    }
    ctx->pc = 0x1C1110u;
label_1c1110:
    // 0x1c1110: 0xc070902  jal         func_1C2408
label_1c1114:
    if (ctx->pc == 0x1C1114u) {
        ctx->pc = 0x1C1114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1110u;
        // 0x1c1114: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1118u;
        goto label_1c1118;
    }
    ctx->pc = 0x1C1110u;
    SET_GPR_U32(ctx, 31, 0x1C1118u);
    ctx->pc = 0x1C1114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1110u;
    // 0x1c1114: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2408u, 0x1C1110u, 0x1C1118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1118u;
label_1c1118:
    // 0x1c1118: 0xc0b6dac  jal         func_2DB6B0
label_1c111c:
    if (ctx->pc == 0x1C111Cu) {
        ctx->pc = 0x1C1120u;
        goto label_1c1120;
    }
    ctx->pc = 0x1C1118u;
    SET_GPR_U32(ctx, 31, 0x1C1120u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1C1118u, 0x1C1120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1120u;
label_1c1120:
    // 0x1c1120: 0x84510548  lh          $s1, 0x548($v0)
    ctx->pc = 0x1c1120u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1352)));
label_1c1124:
    // 0x1c1124: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1c1124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_1c1128:
    // 0x1c1128: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c1128u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1c112c:
    // 0x1c112c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c112cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c1130:
    // 0x1c1130: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x1c1130u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c1134:
    // 0x1c1134: 0x0  nop
    ctx->pc = 0x1c1134u;
    // NOP
label_1c1138:
    // 0x1c1138: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c1138u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1c113c:
    // 0x1c113c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1c113cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1c1140:
    // 0x1c1140: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c1140u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1c1144:
    // 0x1c1144: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x1c1144u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_1c1148:
    // 0x1c1148: 0xc0b6dac  jal         func_2DB6B0
label_1c114c:
    if (ctx->pc == 0x1C114Cu) {
        ctx->pc = 0x1C1150u;
        goto label_1c1150;
    }
    ctx->pc = 0x1C1148u;
    SET_GPR_U32(ctx, 31, 0x1C1150u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1C1148u, 0x1C1150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1150u;
label_1c1150:
    // 0x1c1150: 0xc0b6dac  jal         func_2DB6B0
label_1c1154:
    if (ctx->pc == 0x1C1154u) {
        ctx->pc = 0x1C1154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1150u;
        // 0x1c1154: 0x8450054a  lh          $s0, 0x54A($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1354)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1158u;
        goto label_1c1158;
    }
    ctx->pc = 0x1C1150u;
    SET_GPR_U32(ctx, 31, 0x1C1158u);
    ctx->pc = 0x1C1154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1150u;
    // 0x1c1154: 0x8450054a  lh          $s0, 0x54A($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1354)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1C1150u, 0x1C1158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1158u;
label_1c1158:
    // 0x1c1158: 0x84430548  lh          $v1, 0x548($v0)
    ctx->pc = 0x1c1158u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1352)));
label_1c115c:
    // 0x1c115c: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x1c115cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_1c1160:
    // 0x1c1160: 0x70182a  slt         $v1, $v1, $s0
    ctx->pc = 0x1c1160u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1c1164:
    // 0x1c1164: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1c1168:
    if (ctx->pc == 0x1C1168u) {
        ctx->pc = 0x1C116Cu;
        goto label_1c116c;
    }
    ctx->pc = 0x1C1164u;
    {
        const bool branch_taken_0x1c1164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1164) {
            ctx->pc = 0x1C1178u;
            goto label_1c1178;
        }
    }
    ctx->pc = 0x1C116Cu;
label_1c116c:
    // 0x1c116c: 0xc0b6dac  jal         func_2DB6B0
label_1c1170:
    if (ctx->pc == 0x1C1170u) {
        ctx->pc = 0x1C1174u;
        goto label_1c1174;
    }
    ctx->pc = 0x1C116Cu;
    SET_GPR_U32(ctx, 31, 0x1C1174u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1C116Cu, 0x1C1174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1174u;
label_1c1174:
    // 0x1c1174: 0x84500548  lh          $s0, 0x548($v0)
    ctx->pc = 0x1c1174u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1352)));
label_1c1178:
    // 0x1c1178: 0xc0b6dac  jal         func_2DB6B0
label_1c117c:
    if (ctx->pc == 0x1C117Cu) {
        ctx->pc = 0x1C1180u;
        goto label_1c1180;
    }
    ctx->pc = 0x1C1178u;
    SET_GPR_U32(ctx, 31, 0x1C1180u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1C1178u, 0x1C1180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1180u;
label_1c1180:
    // 0x1c1180: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c1180u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c1184:
    // 0x1c1184: 0x84620548  lh          $v0, 0x548($v1)
    ctx->pc = 0x1c1184u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1352)));
label_1c1188:
    // 0x1c1188: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1c1188u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1c118c:
    // 0x1c118c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c1190:
    if (ctx->pc == 0x1C1190u) {
        ctx->pc = 0x1C1190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C118Cu;
        // 0x1c1190: 0x94640548  lhu         $a0, 0x548($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1194u;
        goto label_1c1194;
    }
    ctx->pc = 0x1C118Cu;
    {
        const bool branch_taken_0x1c118c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C118Cu;
        // 0x1c1190: 0x94640548  lhu         $a0, 0x548($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c118c) {
            ctx->pc = 0x1C119Cu;
            goto label_1c119c;
        }
    }
    ctx->pc = 0x1C1194u;
label_1c1194:
    // 0x1c1194: 0x10000002  b           . + 4 + (0x2 << 2)
label_1c1198:
    if (ctx->pc == 0x1C1198u) {
        ctx->pc = 0x1C1198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1194u;
        // 0x1c1198: 0xa464054a  sh          $a0, 0x54A($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 1354), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C119Cu;
        goto label_1c119c;
    }
    ctx->pc = 0x1C1194u;
    {
        const bool branch_taken_0x1c1194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1194u;
        // 0x1c1198: 0xa464054a  sh          $a0, 0x54A($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 1354), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1194) {
            ctx->pc = 0x1C11A0u;
            goto label_1c11a0;
        }
    }
    ctx->pc = 0x1C119Cu;
label_1c119c:
    // 0x1c119c: 0xa470054a  sh          $s0, 0x54A($v1)
    ctx->pc = 0x1c119cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1354), (uint16_t)GPR_U32(ctx, 16));
label_1c11a0:
    // 0x1c11a0: 0xc0b6dac  jal         func_2DB6B0
label_1c11a4:
    if (ctx->pc == 0x1C11A4u) {
        ctx->pc = 0x1C11A8u;
        goto label_1c11a8;
    }
    ctx->pc = 0x1C11A0u;
    SET_GPR_U32(ctx, 31, 0x1C11A8u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1C11A0u, 0x1C11A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11A8u;
label_1c11a8:
    // 0x1c11a8: 0xac4005f4  sw          $zero, 0x5F4($v0)
    ctx->pc = 0x1c11a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1524), GPR_U32(ctx, 0));
label_1c11ac:
    // 0x1c11ac: 0xc04b14c  jal         func_12C530
label_1c11b0:
    if (ctx->pc == 0x1C11B0u) {
        ctx->pc = 0x1C11B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11ACu;
        // 0x1c11b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C11B4u;
        goto label_1c11b4;
    }
    ctx->pc = 0x1C11ACu;
    SET_GPR_U32(ctx, 31, 0x1C11B4u);
    ctx->pc = 0x1C11B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11ACu;
    // 0x1c11b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C530u, 0x1C11ACu, 0x1C11B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11B4u;
label_1c11b4:
    // 0x1c11b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1c11b8:
    if (ctx->pc == 0x1C11B8u) {
        ctx->pc = 0x1C11B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11B4u;
        // 0x1c11b8: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C11BCu;
        goto label_1c11bc;
    }
    ctx->pc = 0x1C11B4u;
    {
        const bool branch_taken_0x1c11b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C11B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11B4u;
        // 0x1c11b8: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c11b4) {
            ctx->pc = 0x1C11D0u;
            goto label_1c11d0;
        }
    }
    ctx->pc = 0x1C11BCu;
label_1c11bc:
    // 0x1c11bc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c11bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c11c0:
    // 0x1c11c0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c11c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1c11c4:
    // 0x1c11c4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c11c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c11c8:
    // 0x1c11c8: 0x10000201  b           . + 4 + (0x201 << 2)
label_1c11cc:
    if (ctx->pc == 0x1C11CCu) {
        ctx->pc = 0x1C11CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11C8u;
        // 0x1c11cc: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C11D0u;
        goto label_1c11d0;
    }
    ctx->pc = 0x1C11C8u;
    {
        const bool branch_taken_0x1c11c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C11CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11C8u;
        // 0x1c11cc: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c11c8) {
            ctx->pc = 0x1C19D0u;
            goto label_1c19d0;
        }
    }
    ctx->pc = 0x1C11D0u;
label_1c11d0:
    // 0x1c11d0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c11d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c11d4:
    // 0x1c11d4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c11d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1c11d8:
    // 0x1c11d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c11d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c11dc:
    // 0x1c11dc: 0x100001fc  b           . + 4 + (0x1FC << 2)
label_1c11e0:
    if (ctx->pc == 0x1C11E0u) {
        ctx->pc = 0x1C11E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11DCu;
        // 0x1c11e0: 0x240600d3  addiu       $a2, $zero, 0xD3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 211));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C11E4u;
        goto label_1c11e4;
    }
    ctx->pc = 0x1C11DCu;
    {
        const bool branch_taken_0x1c11dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C11E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11DCu;
        // 0x1c11e0: 0x240600d3  addiu       $a2, $zero, 0xD3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 211));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c11dc) {
            ctx->pc = 0x1C19D0u;
            goto label_1c19d0;
        }
    }
    ctx->pc = 0x1C11E4u;
label_1c11e4:
    // 0x1c11e4: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1c11e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_1c11e8:
    // 0x1c11e8: 0x24519b70  addiu       $s1, $v0, -0x6490
    ctx->pc = 0x1c11e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
label_1c11ec:
    // 0x1c11ec: 0xc07eaec  jal         func_1FABB0
label_1c11f0:
    if (ctx->pc == 0x1C11F0u) {
        ctx->pc = 0x1C11F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11ECu;
        // 0x1c11f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C11F4u;
        goto label_1c11f4;
    }
    ctx->pc = 0x1C11ECu;
    SET_GPR_U32(ctx, 31, 0x1C11F4u);
    ctx->pc = 0x1C11F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11ECu;
    // 0x1c11f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FABB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FABB0u, 0x1C11ECu, 0x1C11F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11F4u;
label_1c11f4:
    // 0x1c11f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c11f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c11f8:
    // 0x1c11f8: 0xc07ebb8  jal         func_1FAEE0
label_1c11fc:
    if (ctx->pc == 0x1C11FCu) {
        ctx->pc = 0x1C11FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11F8u;
        // 0x1c11fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1200u;
        goto label_1c1200;
    }
    ctx->pc = 0x1C11F8u;
    SET_GPR_U32(ctx, 31, 0x1C1200u);
    ctx->pc = 0x1C11FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11F8u;
    // 0x1c11fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAEE0u, 0x1C11F8u, 0x1C1200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1200u;
label_1c1200:
    // 0x1c1200: 0x202802b  sltu        $s0, $s0, $v0
    ctx->pc = 0x1c1200u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1c1204:
    // 0x1c1204: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
label_1c1208:
    if (ctx->pc == 0x1C1208u) {
        ctx->pc = 0x1C1208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1204u;
        // 0x1c1208: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C120Cu;
        goto label_1c120c;
    }
    ctx->pc = 0x1C1204u;
    {
        const bool branch_taken_0x1c1204 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1204) {
            ctx->pc = 0x1C1208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1204u;
            // 0x1c1208: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C121Cu;
            goto label_1c121c;
        }
    }
    ctx->pc = 0x1C120Cu;
label_1c120c:
    // 0x1c120c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c120cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c1210:
    // 0x1c1210: 0xc070902  jal         func_1C2408
label_1c1214:
    if (ctx->pc == 0x1C1214u) {
        ctx->pc = 0x1C1214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1210u;
        // 0x1c1214: 0x2405012c  addiu       $a1, $zero, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1218u;
        goto label_1c1218;
    }
    ctx->pc = 0x1C1210u;
    SET_GPR_U32(ctx, 31, 0x1C1218u);
    ctx->pc = 0x1C1214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1210u;
    // 0x1c1214: 0x2405012c  addiu       $a1, $zero, 0x12C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2408u, 0x1C1210u, 0x1C1218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1218u;
label_1c1218:
    // 0x1c1218: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c1218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c121c:
    // 0x1c121c: 0xc07ead4  jal         func_1FAB50
label_1c1220:
    if (ctx->pc == 0x1C1220u) {
        ctx->pc = 0x1C1220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C121Cu;
        // 0x1c1220: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1224u;
        goto label_1c1224;
    }
    ctx->pc = 0x1C121Cu;
    SET_GPR_U32(ctx, 31, 0x1C1224u);
    ctx->pc = 0x1C1220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C121Cu;
    // 0x1c1220: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAB50u, 0x1C121Cu, 0x1C1224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1224u;
label_1c1224:
    // 0x1c1224: 0xc04b14c  jal         func_12C530
label_1c1228:
    if (ctx->pc == 0x1C1228u) {
        ctx->pc = 0x1C1228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1224u;
        // 0x1c1228: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C122Cu;
        goto label_1c122c;
    }
    ctx->pc = 0x1C1224u;
    SET_GPR_U32(ctx, 31, 0x1C122Cu);
    ctx->pc = 0x1C1228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1224u;
    // 0x1c1228: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C530u, 0x1C1224u, 0x1C122Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C122Cu;
label_1c122c:
    // 0x1c122c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1c1230:
    if (ctx->pc == 0x1C1230u) {
        ctx->pc = 0x1C1230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C122Cu;
        // 0x1c1230: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1234u;
        goto label_1c1234;
    }
    ctx->pc = 0x1C122Cu;
    {
        const bool branch_taken_0x1c122c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C122Cu;
        // 0x1c1230: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c122c) {
            ctx->pc = 0x1C1248u;
            goto label_1c1248;
        }
    }
    ctx->pc = 0x1C1234u;
label_1c1234:
    // 0x1c1234: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c1234u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c1238:
    // 0x1c1238: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c1238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1c123c:
    // 0x1c123c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c123cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c1240:
    // 0x1c1240: 0x100001e3  b           . + 4 + (0x1E3 << 2)
label_1c1244:
    if (ctx->pc == 0x1C1244u) {
        ctx->pc = 0x1C1244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1240u;
        // 0x1c1244: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1248u;
        goto label_1c1248;
    }
    ctx->pc = 0x1C1240u;
    {
        const bool branch_taken_0x1c1240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1240u;
        // 0x1c1244: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1240) {
            ctx->pc = 0x1C19D0u;
            goto label_1c19d0;
        }
    }
    ctx->pc = 0x1C1248u;
label_1c1248:
    // 0x1c1248: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c1248u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c124c:
    // 0x1c124c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c124cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1c1250:
    // 0x1c1250: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1254:
    // 0x1c1254: 0x100001de  b           . + 4 + (0x1DE << 2)
label_1c1258:
    if (ctx->pc == 0x1C1258u) {
        ctx->pc = 0x1C1258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1254u;
        // 0x1c1258: 0x240600d4  addiu       $a2, $zero, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C125Cu;
        goto label_1c125c;
    }
    ctx->pc = 0x1C1254u;
    {
        const bool branch_taken_0x1c1254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1254u;
        // 0x1c1258: 0x240600d4  addiu       $a2, $zero, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1254) {
            ctx->pc = 0x1C19D0u;
            goto label_1c19d0;
        }
    }
    ctx->pc = 0x1C125Cu;
label_1c125c:
    // 0x1c125c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1c125cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_1c1260:
    // 0x1c1260: 0x24519b70  addiu       $s1, $v0, -0x6490
    ctx->pc = 0x1c1260u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
label_1c1264:
    // 0x1c1264: 0xc07eaec  jal         func_1FABB0
label_1c1268:
    if (ctx->pc == 0x1C1268u) {
        ctx->pc = 0x1C1268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1264u;
        // 0x1c1268: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C126Cu;
        goto label_1c126c;
    }
    ctx->pc = 0x1C1264u;
    SET_GPR_U32(ctx, 31, 0x1C126Cu);
    ctx->pc = 0x1C1268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1264u;
    // 0x1c1268: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FABB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FABB0u, 0x1C1264u, 0x1C126Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C126Cu;
label_1c126c:
    // 0x1c126c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c126cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c1270:
    // 0x1c1270: 0xc07ebb8  jal         func_1FAEE0
label_1c1274:
    if (ctx->pc == 0x1C1274u) {
        ctx->pc = 0x1C1274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1270u;
        // 0x1c1274: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1278u;
        goto label_1c1278;
    }
    ctx->pc = 0x1C1270u;
    SET_GPR_U32(ctx, 31, 0x1C1278u);
    ctx->pc = 0x1C1274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1270u;
    // 0x1c1274: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAEE0u, 0x1C1270u, 0x1C1278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1278u;
label_1c1278:
    // 0x1c1278: 0x202802b  sltu        $s0, $s0, $v0
    ctx->pc = 0x1c1278u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1c127c:
    // 0x1c127c: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
label_1c1280:
    if (ctx->pc == 0x1C1280u) {
        ctx->pc = 0x1C1280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C127Cu;
        // 0x1c1280: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1284u;
        goto label_1c1284;
    }
    ctx->pc = 0x1C127Cu;
    {
        const bool branch_taken_0x1c127c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c127c) {
            ctx->pc = 0x1C1280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C127Cu;
            // 0x1c1280: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1294u;
            goto label_1c1294;
        }
    }
    ctx->pc = 0x1C1284u;
label_1c1284:
    // 0x1c1284: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c1288:
    // 0x1c1288: 0xc070902  jal         func_1C2408
label_1c128c:
    if (ctx->pc == 0x1C128Cu) {
        ctx->pc = 0x1C128Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1288u;
        // 0x1c128c: 0x240502bc  addiu       $a1, $zero, 0x2BC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 700));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1290u;
        goto label_1c1290;
    }
    ctx->pc = 0x1C1288u;
    SET_GPR_U32(ctx, 31, 0x1C1290u);
    ctx->pc = 0x1C128Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1288u;
    // 0x1c128c: 0x240502bc  addiu       $a1, $zero, 0x2BC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 700));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2408u, 0x1C1288u, 0x1C1290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1290u;
label_1c1290:
    // 0x1c1290: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c1290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c1294:
    // 0x1c1294: 0xc07ead4  jal         func_1FAB50
label_1c1298:
    if (ctx->pc == 0x1C1298u) {
        ctx->pc = 0x1C1298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1294u;
        // 0x1c1298: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C129Cu;
        goto label_1c129c;
    }
    ctx->pc = 0x1C1294u;
    SET_GPR_U32(ctx, 31, 0x1C129Cu);
    ctx->pc = 0x1C1298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1294u;
    // 0x1c1298: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAB50u, 0x1C1294u, 0x1C129Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C129Cu;
label_1c129c:
    // 0x1c129c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c129cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c12a0:
    // 0x1c12a0: 0xc07ead4  jal         func_1FAB50
label_1c12a4:
    if (ctx->pc == 0x1C12A4u) {
        ctx->pc = 0x1C12A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C12A0u;
        // 0x1c12a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C12A8u;
        goto label_1c12a8;
    }
    ctx->pc = 0x1C12A0u;
    SET_GPR_U32(ctx, 31, 0x1C12A8u);
    ctx->pc = 0x1C12A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C12A0u;
    // 0x1c12a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAB50u, 0x1C12A0u, 0x1C12A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C12A8u;
label_1c12a8:
    // 0x1c12a8: 0xc04b14c  jal         func_12C530
label_1c12ac:
    if (ctx->pc == 0x1C12ACu) {
        ctx->pc = 0x1C12ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C12A8u;
        // 0x1c12ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C12B0u;
        goto label_1c12b0;
    }
    ctx->pc = 0x1C12A8u;
    SET_GPR_U32(ctx, 31, 0x1C12B0u);
    ctx->pc = 0x1C12ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C12A8u;
    // 0x1c12ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C530u, 0x1C12A8u, 0x1C12B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C12B0u;
label_1c12b0:
    // 0x1c12b0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1c12b4:
    if (ctx->pc == 0x1C12B4u) {
        ctx->pc = 0x1C12B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C12B0u;
        // 0x1c12b4: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C12B8u;
        goto label_1c12b8;
    }
    ctx->pc = 0x1C12B0u;
    {
        const bool branch_taken_0x1c12b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C12B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C12B0u;
        // 0x1c12b4: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c12b0) {
            ctx->pc = 0x1C12CCu;
            goto label_1c12cc;
        }
    }
    ctx->pc = 0x1C12B8u;
label_1c12b8:
    // 0x1c12b8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c12b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c12bc:
    // 0x1c12bc: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c12bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1c12c0:
    // 0x1c12c0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c12c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c12c4:
    // 0x1c12c4: 0x100001c2  b           . + 4 + (0x1C2 << 2)
label_1c12c8:
    if (ctx->pc == 0x1C12C8u) {
        ctx->pc = 0x1C12C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C12C4u;
        // 0x1c12c8: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C12CCu;
        goto label_1c12cc;
    }
    ctx->pc = 0x1C12C4u;
    {
        const bool branch_taken_0x1c12c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C12C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C12C4u;
        // 0x1c12c8: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c12c4) {
            ctx->pc = 0x1C19D0u;
            goto label_1c19d0;
        }
    }
    ctx->pc = 0x1C12CCu;
label_1c12cc:
    // 0x1c12cc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c12ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c12d0:
    // 0x1c12d0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c12d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1c12d4:
    // 0x1c12d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c12d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c12d8:
    // 0x1c12d8: 0x100001bd  b           . + 4 + (0x1BD << 2)
label_1c12dc:
    if (ctx->pc == 0x1C12DCu) {
        ctx->pc = 0x1C12DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C12D8u;
        // 0x1c12dc: 0x240600df  addiu       $a2, $zero, 0xDF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C12E0u;
        goto label_1c12e0;
    }
    ctx->pc = 0x1C12D8u;
    {
        const bool branch_taken_0x1c12d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C12DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C12D8u;
        // 0x1c12dc: 0x240600df  addiu       $a2, $zero, 0xDF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c12d8) {
            ctx->pc = 0x1C19D0u;
            goto label_1c19d0;
        }
    }
    ctx->pc = 0x1C12E0u;
label_1c12e0:
    // 0x1c12e0: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1c12e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_1c12e4:
    // 0x1c12e4: 0x24519b70  addiu       $s1, $v0, -0x6490
    ctx->pc = 0x1c12e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
label_1c12e8:
    // 0x1c12e8: 0xc07eaec  jal         func_1FABB0
label_1c12ec:
    if (ctx->pc == 0x1C12ECu) {
        ctx->pc = 0x1C12ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C12E8u;
        // 0x1c12ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C12F0u;
        goto label_1c12f0;
    }
    ctx->pc = 0x1C12E8u;
    SET_GPR_U32(ctx, 31, 0x1C12F0u);
    ctx->pc = 0x1C12ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C12E8u;
    // 0x1c12ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FABB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FABB0u, 0x1C12E8u, 0x1C12F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C12F0u;
label_1c12f0:
    // 0x1c12f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c12f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c12f4:
    // 0x1c12f4: 0xc07ebb8  jal         func_1FAEE0
label_1c12f8:
    if (ctx->pc == 0x1C12F8u) {
        ctx->pc = 0x1C12F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C12F4u;
        // 0x1c12f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C12FCu;
        goto label_1c12fc;
    }
    ctx->pc = 0x1C12F4u;
    SET_GPR_U32(ctx, 31, 0x1C12FCu);
    ctx->pc = 0x1C12F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C12F4u;
    // 0x1c12f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAEE0u, 0x1C12F4u, 0x1C12FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C12FCu;
label_1c12fc:
    // 0x1c12fc: 0x202802b  sltu        $s0, $s0, $v0
    ctx->pc = 0x1c12fcu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1c1300:
    // 0x1c1300: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
label_1c1304:
    if (ctx->pc == 0x1C1304u) {
        ctx->pc = 0x1C1304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1300u;
        // 0x1c1304: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1308u;
        goto label_1c1308;
    }
    ctx->pc = 0x1C1300u;
    {
        const bool branch_taken_0x1c1300 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1300) {
            ctx->pc = 0x1C1304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1300u;
            // 0x1c1304: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1318u;
            goto label_1c1318;
        }
    }
    ctx->pc = 0x1C1308u;
label_1c1308:
    // 0x1c1308: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c130c:
    // 0x1c130c: 0xc070902  jal         func_1C2408
label_1c1310:
    if (ctx->pc == 0x1C1310u) {
        ctx->pc = 0x1C1310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C130Cu;
        // 0x1c1310: 0x240505dc  addiu       $a1, $zero, 0x5DC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1314u;
        goto label_1c1314;
    }
    ctx->pc = 0x1C130Cu;
    SET_GPR_U32(ctx, 31, 0x1C1314u);
    ctx->pc = 0x1C1310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C130Cu;
    // 0x1c1310: 0x240505dc  addiu       $a1, $zero, 0x5DC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2408u, 0x1C130Cu, 0x1C1314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1314u;
label_1c1314:
    // 0x1c1314: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c1314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c1318:
    // 0x1c1318: 0xc07ead4  jal         func_1FAB50
label_1c131c:
    if (ctx->pc == 0x1C131Cu) {
        ctx->pc = 0x1C131Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1318u;
        // 0x1c131c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1320u;
        goto label_1c1320;
    }
    ctx->pc = 0x1C1318u;
    SET_GPR_U32(ctx, 31, 0x1C1320u);
    ctx->pc = 0x1C131Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1318u;
    // 0x1c131c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAB50u, 0x1C1318u, 0x1C1320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1320u;
label_1c1320:
    // 0x1c1320: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c1320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c1324:
    // 0x1c1324: 0xc07ead4  jal         func_1FAB50
label_1c1328:
    if (ctx->pc == 0x1C1328u) {
        ctx->pc = 0x1C1328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1324u;
        // 0x1c1328: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C132Cu;
        goto label_1c132c;
    }
    ctx->pc = 0x1C1324u;
    SET_GPR_U32(ctx, 31, 0x1C132Cu);
    ctx->pc = 0x1C1328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1324u;
    // 0x1c1328: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAB50u, 0x1C1324u, 0x1C132Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C132Cu;
label_1c132c:
    // 0x1c132c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c132cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c1330:
    // 0x1c1330: 0xc07ead4  jal         func_1FAB50
label_1c1334:
    if (ctx->pc == 0x1C1334u) {
        ctx->pc = 0x1C1334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1330u;
        // 0x1c1334: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1338u;
        goto label_1c1338;
    }
    ctx->pc = 0x1C1330u;
    SET_GPR_U32(ctx, 31, 0x1C1338u);
    ctx->pc = 0x1C1334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1330u;
    // 0x1c1334: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAB50u, 0x1C1330u, 0x1C1338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1338u;
label_1c1338:
    // 0x1c1338: 0xc04b14c  jal         func_12C530
label_1c133c:
    if (ctx->pc == 0x1C133Cu) {
        ctx->pc = 0x1C133Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1338u;
        // 0x1c133c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1340u;
        goto label_1c1340;
    }
    ctx->pc = 0x1C1338u;
    SET_GPR_U32(ctx, 31, 0x1C1340u);
    ctx->pc = 0x1C133Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1338u;
    // 0x1c133c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C530u, 0x1C1338u, 0x1C1340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1340u;
label_1c1340:
    // 0x1c1340: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1c1344:
    if (ctx->pc == 0x1C1344u) {
        ctx->pc = 0x1C1344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1340u;
        // 0x1c1344: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1348u;
        goto label_1c1348;
    }
    ctx->pc = 0x1C1340u;
    {
        const bool branch_taken_0x1c1340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1340u;
        // 0x1c1344: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1340) {
            ctx->pc = 0x1C135Cu;
            goto label_1c135c;
        }
    }
    ctx->pc = 0x1C1348u;
label_1c1348:
    // 0x1c1348: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c1348u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c134c:
    // 0x1c134c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c134cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1c1350:
    // 0x1c1350: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c1350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c1354:
    // 0x1c1354: 0x1000019e  b           . + 4 + (0x19E << 2)
label_1c1358:
    if (ctx->pc == 0x1C1358u) {
        ctx->pc = 0x1C1358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1354u;
        // 0x1c1358: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C135Cu;
        goto label_1c135c;
    }
    ctx->pc = 0x1C1354u;
    {
        const bool branch_taken_0x1c1354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1354u;
        // 0x1c1358: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1354) {
            ctx->pc = 0x1C19D0u;
            goto label_1c19d0;
        }
    }
    ctx->pc = 0x1C135Cu;
label_1c135c:
    // 0x1c135c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c135cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c1360:
    // 0x1c1360: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c1360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1c1364:
    // 0x1c1364: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1368:
    // 0x1c1368: 0x10000199  b           . + 4 + (0x199 << 2)
label_1c136c:
    if (ctx->pc == 0x1C136Cu) {
        ctx->pc = 0x1C136Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1368u;
        // 0x1c136c: 0x240600df  addiu       $a2, $zero, 0xDF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1370u;
        goto label_1c1370;
    }
    ctx->pc = 0x1C1368u;
    {
        const bool branch_taken_0x1c1368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C136Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1368u;
        // 0x1c136c: 0x240600df  addiu       $a2, $zero, 0xDF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1368) {
            ctx->pc = 0x1C19D0u;
            goto label_1c19d0;
        }
    }
    ctx->pc = 0x1C1370u;
label_1c1370:
    // 0x1c1370: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1c1370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_1c1374:
    // 0x1c1374: 0x2450b000  addiu       $s0, $v0, -0x5000
    ctx->pc = 0x1c1374u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946816));
label_1c1378:
    // 0x1c1378: 0xc441b000  lwc1        $f1, -0x5000($v0)
    ctx->pc = 0x1c1378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294946816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c137c:
    // 0x1c137c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1c137cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c1380:
    // 0x1c1380: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1c1380u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c1384:
    // 0x1c1384: 0x0  nop
    ctx->pc = 0x1c1384u;
    // NOP
label_1c1388:
    // 0x1c1388: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1c138c:
    if (ctx->pc == 0x1C138Cu) {
        ctx->pc = 0x1C1390u;
        goto label_1c1390;
    }
    ctx->pc = 0x1C1388u;
    {
        const bool branch_taken_0x1c1388 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c1388) {
            ctx->pc = 0x1C139Cu;
            goto label_1c139c;
        }
    }
    ctx->pc = 0x1C1390u;
label_1c1390:
    // 0x1c1390: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c1394:
    // 0x1c1394: 0xc070902  jal         func_1C2408
label_1c1398:
    if (ctx->pc == 0x1C1398u) {
        ctx->pc = 0x1C1398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1394u;
        // 0x1c1398: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C139Cu;
        goto label_1c139c;
    }
    ctx->pc = 0x1C1394u;
    SET_GPR_U32(ctx, 31, 0x1C139Cu);
    ctx->pc = 0x1C1398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1394u;
    // 0x1c1398: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2408u, 0x1C1394u, 0x1C139Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C139Cu;
label_1c139c:
    // 0x1c139c: 0x3c0142f0  lui         $at, 0x42F0
    ctx->pc = 0x1c139cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17136 << 16));
label_1c13a0:
    // 0x1c13a0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c13a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c13a4:
    // 0x1c13a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c13a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c13a8:
    // 0x1c13a8: 0xc0aa65e  jal         func_2A9978
label_1c13ac:
    if (ctx->pc == 0x1C13ACu) {
        ctx->pc = 0x1C13ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C13A8u;
        // 0x1c13ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C13B0u;
        goto label_1c13b0;
    }
    ctx->pc = 0x1C13A8u;
    SET_GPR_U32(ctx, 31, 0x1C13B0u);
    ctx->pc = 0x1C13ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C13A8u;
    // 0x1c13ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9978u, 0x1C13A8u, 0x1C13B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C13B0u;
label_1c13b0:
    // 0x1c13b0: 0xc04b14c  jal         func_12C530
label_1c13b4:
    if (ctx->pc == 0x1C13B4u) {
        ctx->pc = 0x1C13B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C13B0u;
        // 0x1c13b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C13B8u;
        goto label_1c13b8;
    }
    ctx->pc = 0x1C13B0u;
    SET_GPR_U32(ctx, 31, 0x1C13B8u);
    ctx->pc = 0x1C13B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C13B0u;
    // 0x1c13b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C530u, 0x1C13B0u, 0x1C13B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C13B8u;
label_1c13b8:
    // 0x1c13b8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1c13bc:
    if (ctx->pc == 0x1C13BCu) {
        ctx->pc = 0x1C13BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C13B8u;
        // 0x1c13bc: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C13C0u;
        goto label_1c13c0;
    }
    ctx->pc = 0x1C13B8u;
    {
        const bool branch_taken_0x1c13b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C13BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C13B8u;
        // 0x1c13bc: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c13b8) {
            ctx->pc = 0x1C13D4u;
            goto label_1c13d4;
        }
    }
    ctx->pc = 0x1C13C0u;
label_1c13c0:
    // 0x1c13c0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c13c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c13c4:
    // 0x1c13c4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c13c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1c13c8:
    // 0x1c13c8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c13c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c13cc:
    // 0x1c13cc: 0x10000180  b           . + 4 + (0x180 << 2)
label_1c13d0:
    if (ctx->pc == 0x1C13D0u) {
        ctx->pc = 0x1C13D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C13CCu;
        // 0x1c13d0: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C13D4u;
        goto label_1c13d4;
    }
    ctx->pc = 0x1C13CCu;
    {
        const bool branch_taken_0x1c13cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C13D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C13CCu;
        // 0x1c13d0: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c13cc) {
            ctx->pc = 0x1C19D0u;
            goto label_1c19d0;
        }
    }
    ctx->pc = 0x1C13D4u;
label_1c13d4:
    // 0x1c13d4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c13d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c13d8:
    // 0x1c13d8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c13d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1c13dc:
    // 0x1c13dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c13dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c13e0:
    // 0x1c13e0: 0x1000017b  b           . + 4 + (0x17B << 2)
label_1c13e4:
    if (ctx->pc == 0x1C13E4u) {
        ctx->pc = 0x1C13E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C13E0u;
        // 0x1c13e4: 0x240600de  addiu       $a2, $zero, 0xDE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 222));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C13E8u;
        goto label_1c13e8;
    }
    ctx->pc = 0x1C13E0u;
    {
        const bool branch_taken_0x1c13e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C13E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C13E0u;
        // 0x1c13e4: 0x240600de  addiu       $a2, $zero, 0xDE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 222));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c13e0) {
            ctx->pc = 0x1C19D0u;
            goto label_1c19d0;
        }
    }
    ctx->pc = 0x1C13E8u;
label_1c13e8:
    // 0x1c13e8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1c13e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_1c13ec:
    // 0x1c13ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c13ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c13f0:
    // 0x1c13f0: 0xc07ea5a  jal         func_1FA968
label_1c13f4:
    if (ctx->pc == 0x1C13F4u) {
        ctx->pc = 0x1C13F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C13F0u;
        // 0x1c13f4: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C13F8u;
        goto label_1c13f8;
    }
    ctx->pc = 0x1C13F0u;
    SET_GPR_U32(ctx, 31, 0x1C13F8u);
    ctx->pc = 0x1C13F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C13F0u;
    // 0x1c13f4: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA968u, 0x1C13F0u, 0x1C13F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C13F8u;
label_1c13f8:
    // 0x1c13f8: 0xc04b14c  jal         func_12C530
label_1c13fc:
    if (ctx->pc == 0x1C13FCu) {
        ctx->pc = 0x1C13FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C13F8u;
        // 0x1c13fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1400u;
        goto label_1c1400;
    }
    ctx->pc = 0x1C13F8u;
    SET_GPR_U32(ctx, 31, 0x1C1400u);
    ctx->pc = 0x1C13FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C13F8u;
    // 0x1c13fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C530u, 0x1C13F8u, 0x1C1400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1400u;
label_1c1400:
    // 0x1c1400: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1c1404:
    if (ctx->pc == 0x1C1404u) {
        ctx->pc = 0x1C1404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1400u;
        // 0x1c1404: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1408u;
        goto label_1c1408;
    }
    ctx->pc = 0x1C1400u;
    {
        const bool branch_taken_0x1c1400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1400u;
        // 0x1c1404: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1400) {
            ctx->pc = 0x1C141Cu;
            goto label_1c141c;
        }
    }
    ctx->pc = 0x1C1408u;
label_1c1408:
    // 0x1c1408: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c1408u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c140c:
    // 0x1c140c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c140cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1c1410:
    // 0x1c1410: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c1410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c1414:
    // 0x1c1414: 0x1000016e  b           . + 4 + (0x16E << 2)
label_1c1418:
    if (ctx->pc == 0x1C1418u) {
        ctx->pc = 0x1C1418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1414u;
        // 0x1c1418: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C141Cu;
        goto label_1c141c;
    }
    ctx->pc = 0x1C1414u;
    {
        const bool branch_taken_0x1c1414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1414u;
        // 0x1c1418: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1414) {
            ctx->pc = 0x1C19D0u;
            goto label_1c19d0;
        }
    }
    ctx->pc = 0x1C141Cu;
label_1c141c:
    // 0x1c141c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c141cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c1420:
    // 0x1c1420: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c1420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1c1424:
    // 0x1c1424: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1428:
    // 0x1c1428: 0x10000169  b           . + 4 + (0x169 << 2)
label_1c142c:
    if (ctx->pc == 0x1C142Cu) {
        ctx->pc = 0x1C142Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1428u;
        // 0x1c142c: 0x240600d3  addiu       $a2, $zero, 0xD3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 211));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1430u;
        goto label_1c1430;
    }
    ctx->pc = 0x1C1428u;
    {
        const bool branch_taken_0x1c1428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C142Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1428u;
        // 0x1c142c: 0x240600d3  addiu       $a2, $zero, 0xD3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 211));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1428) {
            ctx->pc = 0x1C19D0u;
            goto label_1c19d0;
        }
    }
    ctx->pc = 0x1C1430u;
label_1c1430:
    // 0x1c1430: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1c1430u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_1c1434:
    // 0x1c1434: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c1434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c1438:
    // 0x1c1438: 0xc07ea86  jal         func_1FAA18
label_1c143c:
    if (ctx->pc == 0x1C143Cu) {
        ctx->pc = 0x1C143Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1438u;
        // 0x1c143c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1440u;
        goto label_1c1440;
    }
    ctx->pc = 0x1C1438u;
    SET_GPR_U32(ctx, 31, 0x1C1440u);
    ctx->pc = 0x1C143Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1438u;
    // 0x1c143c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAA18u, 0x1C1438u, 0x1C1440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1440u;
label_1c1440:
    // 0x1c1440: 0xc04b14c  jal         func_12C530
label_1c1444:
    if (ctx->pc == 0x1C1444u) {
        ctx->pc = 0x1C1444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1440u;
        // 0x1c1444: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1448u;
        goto label_1c1448;
    }
    ctx->pc = 0x1C1440u;
    SET_GPR_U32(ctx, 31, 0x1C1448u);
    ctx->pc = 0x1C1444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1440u;
    // 0x1c1444: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C530u, 0x1C1440u, 0x1C1448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1448u;
label_1c1448:
    // 0x1c1448: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1c144c:
    if (ctx->pc == 0x1C144Cu) {
        ctx->pc = 0x1C144Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1448u;
        // 0x1c144c: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1450u;
        goto label_1c1450;
    }
    ctx->pc = 0x1C1448u;
    {
        const bool branch_taken_0x1c1448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C144Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1448u;
        // 0x1c144c: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1448) {
            ctx->pc = 0x1C1464u;
            goto label_1c1464;
        }
    }
    ctx->pc = 0x1C1450u;
label_1c1450:
    // 0x1c1450: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c1450u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c1454:
    // 0x1c1454: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c1454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1c1458:
    // 0x1c1458: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c1458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c145c:
    // 0x1c145c: 0x1000015c  b           . + 4 + (0x15C << 2)
label_1c1460:
    if (ctx->pc == 0x1C1460u) {
        ctx->pc = 0x1C1460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C145Cu;
        // 0x1c1460: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1464u;
        goto label_1c1464;
    }
    ctx->pc = 0x1C145Cu;
    {
        const bool branch_taken_0x1c145c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C145Cu;
        // 0x1c1460: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c145c) {
            ctx->pc = 0x1C19D0u;
            goto label_1c19d0;
        }
    }
    ctx->pc = 0x1C1464u;
label_1c1464:
    // 0x1c1464: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c1464u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c1468:
    // 0x1c1468: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c1468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1c146c:
    // 0x1c146c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c146cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1470:
    // 0x1c1470: 0x10000157  b           . + 4 + (0x157 << 2)
label_1c1474:
    if (ctx->pc == 0x1C1474u) {
        ctx->pc = 0x1C1474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1470u;
        // 0x1c1474: 0x240600d3  addiu       $a2, $zero, 0xD3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 211));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1478u;
        goto label_1c1478;
    }
    ctx->pc = 0x1C1470u;
    {
        const bool branch_taken_0x1c1470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1470u;
        // 0x1c1474: 0x240600d3  addiu       $a2, $zero, 0xD3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 211));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1470) {
            ctx->pc = 0x1C19D0u;
            goto label_1c19d0;
        }
    }
    ctx->pc = 0x1C1478u;
label_1c1478:
    // 0x1c1478: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c147c:
    // 0x1c147c: 0xc070902  jal         func_1C2408
label_1c1480:
    if (ctx->pc == 0x1C1480u) {
        ctx->pc = 0x1C1480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C147Cu;
        // 0x1c1480: 0x24050bb8  addiu       $a1, $zero, 0xBB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1484u;
        goto label_1c1484;
    }
    ctx->pc = 0x1C147Cu;
    SET_GPR_U32(ctx, 31, 0x1C1484u);
    ctx->pc = 0x1C1480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C147Cu;
    // 0x1c1480: 0x24050bb8  addiu       $a1, $zero, 0xBB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2408u, 0x1C147Cu, 0x1C1484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1484u;
label_1c1484:
    // 0x1c1484: 0xc04b14c  jal         func_12C530
label_1c1488:
    if (ctx->pc == 0x1C1488u) {
        ctx->pc = 0x1C1488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1484u;
        // 0x1c1488: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C148Cu;
        goto label_1c148c;
    }
    ctx->pc = 0x1C1484u;
    SET_GPR_U32(ctx, 31, 0x1C148Cu);
    ctx->pc = 0x1C1488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1484u;
    // 0x1c1488: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C530u, 0x1C1484u, 0x1C148Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C148Cu;
label_1c148c:
    // 0x1c148c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1c1490:
    if (ctx->pc == 0x1C1490u) {
        ctx->pc = 0x1C1490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C148Cu;
        // 0x1c1490: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1494u;
        goto label_1c1494;
    }
    ctx->pc = 0x1C148Cu;
    {
        const bool branch_taken_0x1c148c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C148Cu;
        // 0x1c1490: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c148c) {
            ctx->pc = 0x1C14A8u;
            goto label_1c14a8;
        }
    }
    ctx->pc = 0x1C1494u;
label_1c1494:
    // 0x1c1494: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c1494u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c1498:
    // 0x1c1498: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c1498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1c149c:
    // 0x1c149c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c149cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c14a0:
    // 0x1c14a0: 0x1000014b  b           . + 4 + (0x14B << 2)
label_1c14a4:
    if (ctx->pc == 0x1C14A4u) {
        ctx->pc = 0x1C14A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C14A0u;
        // 0x1c14a4: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C14A8u;
        goto label_1c14a8;
    }
    ctx->pc = 0x1C14A0u;
    {
        const bool branch_taken_0x1c14a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C14A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C14A0u;
        // 0x1c14a4: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c14a0) {
            ctx->pc = 0x1C19D0u;
            goto label_1c19d0;
        }
    }
    ctx->pc = 0x1C14A8u;
label_1c14a8:
    // 0x1c14a8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c14a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c14ac:
    // 0x1c14ac: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c14acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1c14b0:
    // 0x1c14b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c14b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c14b4:
    // 0x1c14b4: 0x10000146  b           . + 4 + (0x146 << 2)
label_1c14b8:
    if (ctx->pc == 0x1C14B8u) {
        ctx->pc = 0x1C14B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C14B4u;
        // 0x1c14b8: 0x240600dc  addiu       $a2, $zero, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C14BCu;
        goto label_1c14bc;
    }
    ctx->pc = 0x1C14B4u;
    {
        const bool branch_taken_0x1c14b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C14B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C14B4u;
        // 0x1c14b8: 0x240600dc  addiu       $a2, $zero, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c14b4) {
            ctx->pc = 0x1C19D0u;
            goto label_1c19d0;
        }
    }
    ctx->pc = 0x1C14BCu;
label_1c14bc:
    // 0x1c14bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c14bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c14c0:
    // 0x1c14c0: 0xc070902  jal         func_1C2408
label_1c14c4:
    if (ctx->pc == 0x1C14C4u) {
        ctx->pc = 0x1C14C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C14C0u;
        // 0x1c14c4: 0x240500c8  addiu       $a1, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C14C8u;
        goto label_1c14c8;
    }
    ctx->pc = 0x1C14C0u;
    SET_GPR_U32(ctx, 31, 0x1C14C8u);
    ctx->pc = 0x1C14C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C14C0u;
    // 0x1c14c4: 0x240500c8  addiu       $a1, $zero, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2408u, 0x1C14C0u, 0x1C14C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C14C8u;
label_1c14c8:
    // 0x1c14c8: 0xc04b14c  jal         func_12C530
label_1c14cc:
    if (ctx->pc == 0x1C14CCu) {
        ctx->pc = 0x1C14CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C14C8u;
        // 0x1c14cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C14D0u;
        goto label_1c14d0;
    }
    ctx->pc = 0x1C14C8u;
    SET_GPR_U32(ctx, 31, 0x1C14D0u);
    ctx->pc = 0x1C14CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C14C8u;
    // 0x1c14cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C530u, 0x1C14C8u, 0x1C14D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C14D0u;
label_1c14d0:
    // 0x1c14d0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1c14d4:
    if (ctx->pc == 0x1C14D4u) {
        ctx->pc = 0x1C14D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C14D0u;
        // 0x1c14d4: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C14D8u;
        goto label_1c14d8;
    }
    ctx->pc = 0x1C14D0u;
    {
        const bool branch_taken_0x1c14d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C14D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C14D0u;
        // 0x1c14d4: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c14d0) {
            ctx->pc = 0x1C14ECu;
            goto label_1c14ec;
        }
    }
    ctx->pc = 0x1C14D8u;
label_1c14d8:
    // 0x1c14d8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c14d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c14dc:
    // 0x1c14dc: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c14dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1c14e0:
    // 0x1c14e0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c14e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c14e4:
    // 0x1c14e4: 0x1000013a  b           . + 4 + (0x13A << 2)
label_1c14e8:
    if (ctx->pc == 0x1C14E8u) {
        ctx->pc = 0x1C14E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C14E4u;
        // 0x1c14e8: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C14ECu;
        goto label_1c14ec;
    }
    ctx->pc = 0x1C14E4u;
    {
        const bool branch_taken_0x1c14e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C14E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C14E4u;
        // 0x1c14e8: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c14e4) {
            ctx->pc = 0x1C19D0u;
            goto label_1c19d0;
        }
    }
    ctx->pc = 0x1C14ECu;
label_1c14ec:
    // 0x1c14ec: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c14ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c14f0:
    // 0x1c14f0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c14f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1c14f4:
    // 0x1c14f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c14f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c14f8:
    // 0x1c14f8: 0x10000135  b           . + 4 + (0x135 << 2)
label_1c14fc:
    if (ctx->pc == 0x1C14FCu) {
        ctx->pc = 0x1C14FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C14F8u;
        // 0x1c14fc: 0x240600dc  addiu       $a2, $zero, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1500u;
        goto label_1c1500;
    }
    ctx->pc = 0x1C14F8u;
    {
        const bool branch_taken_0x1c14f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C14FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C14F8u;
        // 0x1c14fc: 0x240600dc  addiu       $a2, $zero, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c14f8) {
            ctx->pc = 0x1C19D0u;
            goto label_1c19d0;
        }
    }
    ctx->pc = 0x1C1500u;
label_1c1500:
    // 0x1c1500: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c1504:
    // 0x1c1504: 0xc070902  jal         func_1C2408
label_1c1508:
    if (ctx->pc == 0x1C1508u) {
        ctx->pc = 0x1C1508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1504u;
        // 0x1c1508: 0x240500c8  addiu       $a1, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C150Cu;
        goto label_1c150c;
    }
    ctx->pc = 0x1C1504u;
    SET_GPR_U32(ctx, 31, 0x1C150Cu);
    ctx->pc = 0x1C1508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1504u;
    // 0x1c1508: 0x240500c8  addiu       $a1, $zero, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2408u, 0x1C1504u, 0x1C150Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C150Cu;
label_1c150c:
    // 0x1c150c: 0xc04b14c  jal         func_12C530
label_1c1510:
    if (ctx->pc == 0x1C1510u) {
        ctx->pc = 0x1C1510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C150Cu;
        // 0x1c1510: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1514u;
        goto label_1c1514;
    }
    ctx->pc = 0x1C150Cu;
    SET_GPR_U32(ctx, 31, 0x1C1514u);
    ctx->pc = 0x1C1510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C150Cu;
    // 0x1c1510: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C530u, 0x1C150Cu, 0x1C1514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1514u;
label_1c1514:
    // 0x1c1514: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1c1518:
    if (ctx->pc == 0x1C1518u) {
        ctx->pc = 0x1C1518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1514u;
        // 0x1c1518: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C151Cu;
        goto label_1c151c;
    }
    ctx->pc = 0x1C1514u;
    {
        const bool branch_taken_0x1c1514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1514u;
        // 0x1c1518: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1514) {
            ctx->pc = 0x1C1530u;
            goto label_1c1530;
        }
    }
    ctx->pc = 0x1C151Cu;
label_1c151c:
    // 0x1c151c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c151cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c1520:
    // 0x1c1520: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c1520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1c1524:
    // 0x1c1524: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c1524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c1528:
    // 0x1c1528: 0x10000129  b           . + 4 + (0x129 << 2)
label_1c152c:
    if (ctx->pc == 0x1C152Cu) {
        ctx->pc = 0x1C152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1528u;
        // 0x1c152c: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1530u;
        goto label_1c1530;
    }
    ctx->pc = 0x1C1528u;
    {
        const bool branch_taken_0x1c1528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1528u;
        // 0x1c152c: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1528) {
            ctx->pc = 0x1C19D0u;
            goto label_1c19d0;
        }
    }
    ctx->pc = 0x1C1530u;
label_1c1530:
    // 0x1c1530: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c1530u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c1534:
    // 0x1c1534: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c1534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1c1538:
    // 0x1c1538: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c153c:
    // 0x1c153c: 0x10000124  b           . + 4 + (0x124 << 2)
label_1c1540:
    if (ctx->pc == 0x1C1540u) {
        ctx->pc = 0x1C1540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C153Cu;
        // 0x1c1540: 0x240600dc  addiu       $a2, $zero, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1544u;
        goto label_1c1544;
    }
    ctx->pc = 0x1C153Cu;
    {
        const bool branch_taken_0x1c153c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C153Cu;
        // 0x1c1540: 0x240600dc  addiu       $a2, $zero, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c153c) {
            ctx->pc = 0x1C19D0u;
            goto label_1c19d0;
        }
    }
    ctx->pc = 0x1C1544u;
label_1c1544:
    // 0x1c1544: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c1548:
    // 0x1c1548: 0xc070902  jal         func_1C2408
label_1c154c:
    if (ctx->pc == 0x1C154Cu) {
        ctx->pc = 0x1C154Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1548u;
        // 0x1c154c: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1550u;
        goto label_1c1550;
    }
    ctx->pc = 0x1C1548u;
    SET_GPR_U32(ctx, 31, 0x1C1550u);
    ctx->pc = 0x1C154Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1548u;
    // 0x1c154c: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2408u, 0x1C1548u, 0x1C1550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1550u;
label_1c1550:
    // 0x1c1550: 0xc04b14c  jal         func_12C530
label_1c1554:
    if (ctx->pc == 0x1C1554u) {
        ctx->pc = 0x1C1554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1550u;
        // 0x1c1554: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1558u;
        goto label_1c1558;
    }
    ctx->pc = 0x1C1550u;
    SET_GPR_U32(ctx, 31, 0x1C1558u);
    ctx->pc = 0x1C1554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1550u;
    // 0x1c1554: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C530u, 0x1C1550u, 0x1C1558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1558u;
label_1c1558:
    // 0x1c1558: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1c155c:
    if (ctx->pc == 0x1C155Cu) {
        ctx->pc = 0x1C155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1558u;
        // 0x1c155c: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1560u;
        goto label_1c1560;
    }
    ctx->pc = 0x1C1558u;
    {
        const bool branch_taken_0x1c1558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1558u;
        // 0x1c155c: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1558) {
            ctx->pc = 0x1C1574u;
            goto label_1c1574;
        }
    }
    ctx->pc = 0x1C1560u;
label_1c1560:
    // 0x1c1560: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c1560u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c1564:
    // 0x1c1564: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c1564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1c1568:
    // 0x1c1568: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c1568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c156c:
    // 0x1c156c: 0x10000118  b           . + 4 + (0x118 << 2)
label_1c1570:
    if (ctx->pc == 0x1C1570u) {
        ctx->pc = 0x1C1570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C156Cu;
        // 0x1c1570: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1574u;
        goto label_1c1574;
    }
    ctx->pc = 0x1C156Cu;
    {
        const bool branch_taken_0x1c156c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C156Cu;
        // 0x1c1570: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c156c) {
            ctx->pc = 0x1C19D0u;
            goto label_1c19d0;
        }
    }
    ctx->pc = 0x1C1574u;
label_1c1574:
    // 0x1c1574: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c1574u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c1578:
    // 0x1c1578: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c1578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1c157c:
    // 0x1c157c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c157cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1580:
    // 0x1c1580: 0x10000113  b           . + 4 + (0x113 << 2)
label_1c1584:
    if (ctx->pc == 0x1C1584u) {
        ctx->pc = 0x1C1584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1580u;
        // 0x1c1584: 0x240600dc  addiu       $a2, $zero, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1588u;
        goto label_1c1588;
    }
    ctx->pc = 0x1C1580u;
    {
        const bool branch_taken_0x1c1580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1580u;
        // 0x1c1584: 0x240600dc  addiu       $a2, $zero, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1580) {
            ctx->pc = 0x1C19D0u;
            goto label_1c19d0;
        }
    }
    ctx->pc = 0x1C1588u;
label_1c1588:
    // 0x1c1588: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c158c:
    // 0x1c158c: 0xc070902  jal         func_1C2408
label_1c1590:
    if (ctx->pc == 0x1C1590u) {
        ctx->pc = 0x1C1590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C158Cu;
        // 0x1c1590: 0x240500c8  addiu       $a1, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1594u;
        goto label_1c1594;
    }
    ctx->pc = 0x1C158Cu;
    SET_GPR_U32(ctx, 31, 0x1C1594u);
    ctx->pc = 0x1C1590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C158Cu;
    // 0x1c1590: 0x240500c8  addiu       $a1, $zero, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2408u, 0x1C158Cu, 0x1C1594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1594u;
label_1c1594:
    // 0x1c1594: 0xc04b14c  jal         func_12C530
label_1c1598:
    if (ctx->pc == 0x1C1598u) {
        ctx->pc = 0x1C1598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1594u;
        // 0x1c1598: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C159Cu;
        goto label_1c159c;
    }
    ctx->pc = 0x1C1594u;
    SET_GPR_U32(ctx, 31, 0x1C159Cu);
    ctx->pc = 0x1C1598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1594u;
    // 0x1c1598: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C530u, 0x1C1594u, 0x1C159Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C159Cu;
label_1c159c:
    // 0x1c159c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1c15a0:
    if (ctx->pc == 0x1C15A0u) {
        ctx->pc = 0x1C15A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C159Cu;
        // 0x1c15a0: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C15A4u;
        goto label_1c15a4;
    }
    ctx->pc = 0x1C159Cu;
    {
        const bool branch_taken_0x1c159c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C15A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C159Cu;
        // 0x1c15a0: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c159c) {
            ctx->pc = 0x1C15B8u;
            goto label_1c15b8;
        }
    }
    ctx->pc = 0x1C15A4u;
label_1c15a4:
    // 0x1c15a4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c15a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c15a8:
    // 0x1c15a8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c15a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1c15ac:
    // 0x1c15ac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c15acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c15b0:
    // 0x1c15b0: 0x10000107  b           . + 4 + (0x107 << 2)
label_1c15b4:
    if (ctx->pc == 0x1C15B4u) {
        ctx->pc = 0x1C15B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C15B0u;
        // 0x1c15b4: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C15B8u;
        goto label_1c15b8;
    }
    ctx->pc = 0x1C15B0u;
    {
        const bool branch_taken_0x1c15b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C15B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C15B0u;
        // 0x1c15b4: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c15b0) {
            ctx->pc = 0x1C19D0u;
            goto label_1c19d0;
        }
    }
    ctx->pc = 0x1C15B8u;
label_1c15b8:
    // 0x1c15b8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c15b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c15bc:
    // 0x1c15bc: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c15bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1c15c0:
    // 0x1c15c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c15c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c15c4:
    // 0x1c15c4: 0x10000102  b           . + 4 + (0x102 << 2)
label_1c15c8:
    if (ctx->pc == 0x1C15C8u) {
        ctx->pc = 0x1C15C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C15C4u;
        // 0x1c15c8: 0x240600d4  addiu       $a2, $zero, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C15CCu;
        goto label_1c15cc;
    }
    ctx->pc = 0x1C15C4u;
    {
        const bool branch_taken_0x1c15c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C15C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C15C4u;
        // 0x1c15c8: 0x240600d4  addiu       $a2, $zero, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c15c4) {
            ctx->pc = 0x1C19D0u;
            goto label_1c19d0;
        }
    }
    ctx->pc = 0x1C15CCu;
label_1c15cc:
    // 0x1c15cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c15ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c15d0:
    // 0x1c15d0: 0xc070902  jal         func_1C2408
label_1c15d4:
    if (ctx->pc == 0x1C15D4u) {
        ctx->pc = 0x1C15D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C15D0u;
        // 0x1c15d4: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C15D8u;
        goto label_1c15d8;
    }
    ctx->pc = 0x1C15D0u;
    SET_GPR_U32(ctx, 31, 0x1C15D8u);
    ctx->pc = 0x1C15D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C15D0u;
    // 0x1c15d4: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2408u, 0x1C15D0u, 0x1C15D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C15D8u;
label_1c15d8:
    // 0x1c15d8: 0xc04b14c  jal         func_12C530
label_1c15dc:
    if (ctx->pc == 0x1C15DCu) {
        ctx->pc = 0x1C15DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C15D8u;
        // 0x1c15dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C15E0u;
        goto label_1c15e0;
    }
    ctx->pc = 0x1C15D8u;
    SET_GPR_U32(ctx, 31, 0x1C15E0u);
    ctx->pc = 0x1C15DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C15D8u;
    // 0x1c15dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C530u, 0x1C15D8u, 0x1C15E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C15E0u;
label_1c15e0:
    // 0x1c15e0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1c15e4:
    if (ctx->pc == 0x1C15E4u) {
        ctx->pc = 0x1C15E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C15E0u;
        // 0x1c15e4: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C15E8u;
        goto label_1c15e8;
    }
    ctx->pc = 0x1C15E0u;
    {
        const bool branch_taken_0x1c15e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C15E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C15E0u;
        // 0x1c15e4: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c15e0) {
            ctx->pc = 0x1C15FCu;
            goto label_1c15fc;
        }
    }
    ctx->pc = 0x1C15E8u;
label_1c15e8:
    // 0x1c15e8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c15e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c15ec:
    // 0x1c15ec: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c15ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1c15f0:
    // 0x1c15f0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c15f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c15f4:
    // 0x1c15f4: 0x100000f6  b           . + 4 + (0xF6 << 2)
label_1c15f8:
    if (ctx->pc == 0x1C15F8u) {
        ctx->pc = 0x1C15F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C15F4u;
        // 0x1c15f8: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C15FCu;
        goto label_1c15fc;
    }
    ctx->pc = 0x1C15F4u;
    {
        const bool branch_taken_0x1c15f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C15F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C15F4u;
        // 0x1c15f8: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c15f4) {
            ctx->pc = 0x1C19D0u;
            goto label_1c19d0;
        }
    }
    ctx->pc = 0x1C15FCu;
label_1c15fc:
    // 0x1c15fc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c15fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c1600:
    // 0x1c1600: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c1600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1c1604:
    // 0x1c1604: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1608:
    // 0x1c1608: 0x100000f1  b           . + 4 + (0xF1 << 2)
label_1c160c:
    if (ctx->pc == 0x1C160Cu) {
        ctx->pc = 0x1C160Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1608u;
        // 0x1c160c: 0x240600de  addiu       $a2, $zero, 0xDE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 222));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1610u;
        goto label_1c1610;
    }
    ctx->pc = 0x1C1608u;
    {
        const bool branch_taken_0x1c1608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C160Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1608u;
        // 0x1c160c: 0x240600de  addiu       $a2, $zero, 0xDE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 222));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1608) {
            ctx->pc = 0x1C19D0u;
            goto label_1c19d0;
        }
    }
    ctx->pc = 0x1C1610u;
label_1c1610:
    // 0x1c1610: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c1614:
    // 0x1c1614: 0xc070902  jal         func_1C2408
label_1c1618:
    if (ctx->pc == 0x1C1618u) {
        ctx->pc = 0x1C1618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1614u;
        // 0x1c1618: 0x240507d0  addiu       $a1, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C161Cu;
        goto label_1c161c;
    }
    ctx->pc = 0x1C1614u;
    SET_GPR_U32(ctx, 31, 0x1C161Cu);
    ctx->pc = 0x1C1618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1614u;
    // 0x1c1618: 0x240507d0  addiu       $a1, $zero, 0x7D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2408u, 0x1C1614u, 0x1C161Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C161Cu;
label_1c161c:
    // 0x1c161c: 0xc04b14c  jal         func_12C530
label_1c1620:
    if (ctx->pc == 0x1C1620u) {
        ctx->pc = 0x1C1620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C161Cu;
        // 0x1c1620: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1624u;
        goto label_1c1624;
    }
    ctx->pc = 0x1C161Cu;
    SET_GPR_U32(ctx, 31, 0x1C1624u);
    ctx->pc = 0x1C1620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C161Cu;
    // 0x1c1620: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C530u, 0x1C161Cu, 0x1C1624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1624u;
label_1c1624:
    // 0x1c1624: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1c1628:
    if (ctx->pc == 0x1C1628u) {
        ctx->pc = 0x1C1628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1624u;
        // 0x1c1628: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C162Cu;
        goto label_1c162c;
    }
    ctx->pc = 0x1C1624u;
    {
        const bool branch_taken_0x1c1624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1624u;
        // 0x1c1628: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1624) {
            ctx->pc = 0x1C1640u;
            goto label_1c1640;
        }
    }
    ctx->pc = 0x1C162Cu;
label_1c162c:
    // 0x1c162c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c162cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c1630:
    // 0x1c1630: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c1630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1c1634:
    // 0x1c1634: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c1634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c1638:
    // 0x1c1638: 0x100000e5  b           . + 4 + (0xE5 << 2)
label_1c163c:
    if (ctx->pc == 0x1C163Cu) {
        ctx->pc = 0x1C163Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1638u;
        // 0x1c163c: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1640u;
        goto label_1c1640;
    }
    ctx->pc = 0x1C1638u;
    {
        const bool branch_taken_0x1c1638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C163Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1638u;
        // 0x1c163c: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1638) {
            ctx->pc = 0x1C19D0u;
            goto label_1c19d0;
        }
    }
    ctx->pc = 0x1C1640u;
label_1c1640:
    // 0x1c1640: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c1640u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c1644:
    // 0x1c1644: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c1644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1c1648:
    // 0x1c1648: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c164c:
    // 0x1c164c: 0x100000e0  b           . + 4 + (0xE0 << 2)
label_1c1650:
    if (ctx->pc == 0x1C1650u) {
        ctx->pc = 0x1C1650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C164Cu;
        // 0x1c1650: 0x240600dc  addiu       $a2, $zero, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1654u;
        goto label_1c1654;
    }
    ctx->pc = 0x1C164Cu;
    {
        const bool branch_taken_0x1c164c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C164Cu;
        // 0x1c1650: 0x240600dc  addiu       $a2, $zero, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c164c) {
            ctx->pc = 0x1C19D0u;
            goto label_1c19d0;
        }
    }
    ctx->pc = 0x1C1654u;
label_1c1654:
    // 0x1c1654: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1c1654u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_1c1658:
    // 0x1c1658: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c165c:
    // 0x1c165c: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x1c165cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
label_1c1660:
    // 0x1c1660: 0xc07eaac  jal         func_1FAAB0
label_1c1664:
    if (ctx->pc == 0x1C1664u) {
        ctx->pc = 0x1C1664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1660u;
        // 0x1c1664: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1668u;
        goto label_1c1668;
    }
    ctx->pc = 0x1C1660u;
    SET_GPR_U32(ctx, 31, 0x1C1668u);
    ctx->pc = 0x1C1664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1660u;
    // 0x1c1664: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAAB0u, 0x1C1660u, 0x1C1668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1668u;
label_1c1668:
    // 0x1c1668: 0xc04b14c  jal         func_12C530
label_1c166c:
    if (ctx->pc == 0x1C166Cu) {
        ctx->pc = 0x1C166Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1668u;
        // 0x1c166c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1670u;
        goto label_1c1670;
    }
    ctx->pc = 0x1C1668u;
    SET_GPR_U32(ctx, 31, 0x1C1670u);
    ctx->pc = 0x1C166Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1668u;
    // 0x1c166c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C530u, 0x1C1668u, 0x1C1670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1670u;
label_1c1670:
    // 0x1c1670: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1c1674:
    if (ctx->pc == 0x1C1674u) {
        ctx->pc = 0x1C1674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1670u;
        // 0x1c1674: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1678u;
        goto label_1c1678;
    }
    ctx->pc = 0x1C1670u;
    {
        const bool branch_taken_0x1c1670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1670u;
        // 0x1c1674: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1670) {
            ctx->pc = 0x1C168Cu;
            goto label_1c168c;
        }
    }
    ctx->pc = 0x1C1678u;
label_1c1678:
    // 0x1c1678: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c1678u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c167c:
    // 0x1c167c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c167cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1c1680:
    // 0x1c1680: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c1680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c1684:
    // 0x1c1684: 0x100000d2  b           . + 4 + (0xD2 << 2)
label_1c1688:
    if (ctx->pc == 0x1C1688u) {
        ctx->pc = 0x1C1688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1684u;
        // 0x1c1688: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C168Cu;
        goto label_1c168c;
    }
    ctx->pc = 0x1C1684u;
    {
        const bool branch_taken_0x1c1684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1684u;
        // 0x1c1688: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1684) {
            ctx->pc = 0x1C19D0u;
            goto label_1c19d0;
        }
    }
    ctx->pc = 0x1C168Cu;
label_1c168c:
    // 0x1c168c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c168cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c1690:
    // 0x1c1690: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c1690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1c1694:
    // 0x1c1694: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1698:
    // 0x1c1698: 0x100000cd  b           . + 4 + (0xCD << 2)
label_1c169c:
    if (ctx->pc == 0x1C169Cu) {
        ctx->pc = 0x1C169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1698u;
        // 0x1c169c: 0x240600dc  addiu       $a2, $zero, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C16A0u;
        goto label_1c16a0;
    }
    ctx->pc = 0x1C1698u;
    {
        const bool branch_taken_0x1c1698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1698u;
        // 0x1c169c: 0x240600dc  addiu       $a2, $zero, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1698) {
            ctx->pc = 0x1C19D0u;
            goto label_1c19d0;
        }
    }
    ctx->pc = 0x1C16A0u;
label_1c16a0:
    // 0x1c16a0: 0xc04b1c2  jal         func_12C708
label_1c16a4:
    if (ctx->pc == 0x1C16A4u) {
        ctx->pc = 0x1C16A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C16A0u;
        // 0x1c16a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C16A8u;
        goto label_1c16a8;
    }
    ctx->pc = 0x1C16A0u;
    SET_GPR_U32(ctx, 31, 0x1C16A8u);
    ctx->pc = 0x1C16A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C16A0u;
    // 0x1c16a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C708u, 0x1C16A0u, 0x1C16A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C16A8u;
label_1c16a8:
    // 0x1c16a8: 0xc04b14c  jal         func_12C530
label_1c16ac:
    if (ctx->pc == 0x1C16ACu) {
        ctx->pc = 0x1C16ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C16A8u;
        // 0x1c16ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C16B0u;
        goto label_1c16b0;
    }
    ctx->pc = 0x1C16A8u;
    SET_GPR_U32(ctx, 31, 0x1C16B0u);
    ctx->pc = 0x1C16ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C16A8u;
    // 0x1c16ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C530u, 0x1C16A8u, 0x1C16B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C16B0u;
label_1c16b0:
    // 0x1c16b0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1c16b4:
    if (ctx->pc == 0x1C16B4u) {
        ctx->pc = 0x1C16B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C16B0u;
        // 0x1c16b4: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C16B8u;
        goto label_1c16b8;
    }
    ctx->pc = 0x1C16B0u;
    {
        const bool branch_taken_0x1c16b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C16B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C16B0u;
        // 0x1c16b4: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c16b0) {
            ctx->pc = 0x1C16E4u;
            goto label_1c16e4;
        }
    }
    ctx->pc = 0x1C16B8u;
label_1c16b8:
    // 0x1c16b8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c16b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c16bc:
    // 0x1c16bc: 0x2604ee00  addiu       $a0, $s0, -0x1200
    ctx->pc = 0x1c16bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
label_1c16c0:
    // 0x1c16c0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c16c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c16c4:
    // 0x1c16c4: 0x240600c8  addiu       $a2, $zero, 0xC8
    ctx->pc = 0x1c16c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_1c16c8:
    // 0x1c16c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c16c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c16cc:
    // 0x1c16cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c16ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c16d0:
    // 0x1c16d0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c16d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c16d4:
    // 0x1c16d4: 0xc0b2e92  jal         func_2CBA48
label_1c16d8:
    if (ctx->pc == 0x1C16D8u) {
        ctx->pc = 0x1C16D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C16D4u;
        // 0x1c16d8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C16DCu;
        goto label_1c16dc;
    }
    ctx->pc = 0x1C16D4u;
    SET_GPR_U32(ctx, 31, 0x1C16DCu);
    ctx->pc = 0x1C16D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C16D4u;
    // 0x1c16d8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1C16D4u, 0x1C16DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C16DCu;
label_1c16dc:
    // 0x1c16dc: 0x1000000b  b           . + 4 + (0xB << 2)
label_1c16e0:
    if (ctx->pc == 0x1C16E0u) {
        ctx->pc = 0x1C16E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C16DCu;
        // 0x1c16e0: 0x2604ee00  addiu       $a0, $s0, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C16E4u;
        goto label_1c16e4;
    }
    ctx->pc = 0x1C16DCu;
    {
        const bool branch_taken_0x1c16dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C16E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C16DCu;
        // 0x1c16e0: 0x2604ee00  addiu       $a0, $s0, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c16dc) {
            ctx->pc = 0x1C170Cu;
            goto label_1c170c;
        }
    }
    ctx->pc = 0x1C16E4u;
label_1c16e4:
    // 0x1c16e4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c16e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c16e8:
    // 0x1c16e8: 0x2604ee00  addiu       $a0, $s0, -0x1200
    ctx->pc = 0x1c16e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
label_1c16ec:
    // 0x1c16ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c16ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c16f0:
    // 0x1c16f0: 0x240600df  addiu       $a2, $zero, 0xDF
    ctx->pc = 0x1c16f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
label_1c16f4:
    // 0x1c16f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c16f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c16f8:
    // 0x1c16f8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c16f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c16fc:
    // 0x1c16fc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c16fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1700:
    // 0x1c1700: 0xc0b2e92  jal         func_2CBA48
label_1c1704:
    if (ctx->pc == 0x1C1704u) {
        ctx->pc = 0x1C1704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1700u;
        // 0x1c1704: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1708u;
        goto label_1c1708;
    }
    ctx->pc = 0x1C1700u;
    SET_GPR_U32(ctx, 31, 0x1C1708u);
    ctx->pc = 0x1C1704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1700u;
    // 0x1c1704: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1C1700u, 0x1C1708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1708u;
label_1c1708:
    // 0x1c1708: 0x2604ee00  addiu       $a0, $s0, -0x1200
    ctx->pc = 0x1c1708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
label_1c170c:
    // 0x1c170c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c170cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1710:
    // 0x1c1710: 0x100000ae  b           . + 4 + (0xAE << 2)
label_1c1714:
    if (ctx->pc == 0x1C1714u) {
        ctx->pc = 0x1C1714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1710u;
        // 0x1c1714: 0x240600fc  addiu       $a2, $zero, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1718u;
        goto label_1c1718;
    }
    ctx->pc = 0x1C1710u;
    {
        const bool branch_taken_0x1c1710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1710u;
        // 0x1c1714: 0x240600fc  addiu       $a2, $zero, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1710) {
            ctx->pc = 0x1C19CCu;
            goto label_1c19cc;
        }
    }
    ctx->pc = 0x1C1718u;
label_1c1718:
    // 0x1c1718: 0xc04b14c  jal         func_12C530
label_1c171c:
    if (ctx->pc == 0x1C171Cu) {
        ctx->pc = 0x1C171Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1718u;
        // 0x1c171c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1720u;
        goto label_1c1720;
    }
    ctx->pc = 0x1C1718u;
    SET_GPR_U32(ctx, 31, 0x1C1720u);
    ctx->pc = 0x1C171Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1718u;
    // 0x1c171c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C530u, 0x1C1718u, 0x1C1720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1720u;
label_1c1720:
    // 0x1c1720: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1c1724:
    if (ctx->pc == 0x1C1724u) {
        ctx->pc = 0x1C1724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1720u;
        // 0x1c1724: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1728u;
        goto label_1c1728;
    }
    ctx->pc = 0x1C1720u;
    {
        const bool branch_taken_0x1c1720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1720u;
        // 0x1c1724: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1720) {
            ctx->pc = 0x1C173Cu;
            goto label_1c173c;
        }
    }
    ctx->pc = 0x1C1728u;
label_1c1728:
    // 0x1c1728: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c1728u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c172c:
    // 0x1c172c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c172cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1c1730:
    // 0x1c1730: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c1730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c1734:
    // 0x1c1734: 0x100000a6  b           . + 4 + (0xA6 << 2)
label_1c1738:
    if (ctx->pc == 0x1C1738u) {
        ctx->pc = 0x1C1738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1734u;
        // 0x1c1738: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C173Cu;
        goto label_1c173c;
    }
    ctx->pc = 0x1C1734u;
    {
        const bool branch_taken_0x1c1734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1734u;
        // 0x1c1738: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1734) {
            ctx->pc = 0x1C19D0u;
            goto label_1c19d0;
        }
    }
    ctx->pc = 0x1C173Cu;
label_1c173c:
    // 0x1c173c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c173cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c1740:
    // 0x1c1740: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c1740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1c1744:
    // 0x1c1744: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1748:
    // 0x1c1748: 0x100000a1  b           . + 4 + (0xA1 << 2)
label_1c174c:
    if (ctx->pc == 0x1C174Cu) {
        ctx->pc = 0x1C174Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1748u;
        // 0x1c174c: 0x240600d3  addiu       $a2, $zero, 0xD3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 211));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1750u;
        goto label_1c1750;
    }
    ctx->pc = 0x1C1748u;
    {
        const bool branch_taken_0x1c1748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C174Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1748u;
        // 0x1c174c: 0x240600d3  addiu       $a2, $zero, 0xD3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 211));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1748) {
            ctx->pc = 0x1C19D0u;
            goto label_1c19d0;
        }
    }
    ctx->pc = 0x1C1750u;
label_1c1750:
    // 0x1c1750: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c1754:
    // 0x1c1754: 0xc070902  jal         func_1C2408
label_1c1758:
    if (ctx->pc == 0x1C1758u) {
        ctx->pc = 0x1C1758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1754u;
        // 0x1c1758: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C175Cu;
        goto label_1c175c;
    }
    ctx->pc = 0x1C1754u;
    SET_GPR_U32(ctx, 31, 0x1C175Cu);
    ctx->pc = 0x1C1758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1754u;
    // 0x1c1758: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2408u, 0x1C1754u, 0x1C175Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C175Cu;
label_1c175c:
    // 0x1c175c: 0xc04b14c  jal         func_12C530
label_1c1760:
    if (ctx->pc == 0x1C1760u) {
        ctx->pc = 0x1C1760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C175Cu;
        // 0x1c1760: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1764u;
        goto label_1c1764;
    }
    ctx->pc = 0x1C175Cu;
    SET_GPR_U32(ctx, 31, 0x1C1764u);
    ctx->pc = 0x1C1760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C175Cu;
    // 0x1c1760: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C530u, 0x1C175Cu, 0x1C1764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1764u;
label_1c1764:
    // 0x1c1764: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1c1768:
    if (ctx->pc == 0x1C1768u) {
        ctx->pc = 0x1C1768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1764u;
        // 0x1c1768: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C176Cu;
        goto label_1c176c;
    }
    ctx->pc = 0x1C1764u;
    {
        const bool branch_taken_0x1c1764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1764u;
        // 0x1c1768: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1764) {
            ctx->pc = 0x1C1780u;
            goto label_1c1780;
        }
    }
    ctx->pc = 0x1C176Cu;
label_1c176c:
    // 0x1c176c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c176cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c1770:
    // 0x1c1770: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c1770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1c1774:
    // 0x1c1774: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c1774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c1778:
    // 0x1c1778: 0x10000095  b           . + 4 + (0x95 << 2)
label_1c177c:
    if (ctx->pc == 0x1C177Cu) {
        ctx->pc = 0x1C177Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1778u;
        // 0x1c177c: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1780u;
        goto label_1c1780;
    }
    ctx->pc = 0x1C1778u;
    {
        const bool branch_taken_0x1c1778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C177Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1778u;
        // 0x1c177c: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1778) {
            ctx->pc = 0x1C19D0u;
            goto label_1c19d0;
        }
    }
    ctx->pc = 0x1C1780u;
label_1c1780:
    // 0x1c1780: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c1780u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c1784:
    // 0x1c1784: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c1784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1c1788:
    // 0x1c1788: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c178c:
    // 0x1c178c: 0x10000090  b           . + 4 + (0x90 << 2)
label_1c1790:
    if (ctx->pc == 0x1C1790u) {
        ctx->pc = 0x1C1790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C178Cu;
        // 0x1c1790: 0x240600dc  addiu       $a2, $zero, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1794u;
        goto label_1c1794;
    }
    ctx->pc = 0x1C178Cu;
    {
        const bool branch_taken_0x1c178c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C178Cu;
        // 0x1c1790: 0x240600dc  addiu       $a2, $zero, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c178c) {
            ctx->pc = 0x1C19D0u;
            goto label_1c19d0;
        }
    }
    ctx->pc = 0x1C1794u;
label_1c1794:
    // 0x1c1794: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c1798:
    // 0x1c1798: 0xc070902  jal         func_1C2408
label_1c179c:
    if (ctx->pc == 0x1C179Cu) {
        ctx->pc = 0x1C179Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1798u;
        // 0x1c179c: 0x240501f4  addiu       $a1, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C17A0u;
        goto label_1c17a0;
    }
    ctx->pc = 0x1C1798u;
    SET_GPR_U32(ctx, 31, 0x1C17A0u);
    ctx->pc = 0x1C179Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1798u;
    // 0x1c179c: 0x240501f4  addiu       $a1, $zero, 0x1F4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2408u, 0x1C1798u, 0x1C17A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C17A0u;
label_1c17a0:
    // 0x1c17a0: 0xc04b14c  jal         func_12C530
label_1c17a4:
    if (ctx->pc == 0x1C17A4u) {
        ctx->pc = 0x1C17A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C17A0u;
        // 0x1c17a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C17A8u;
        goto label_1c17a8;
    }
    ctx->pc = 0x1C17A0u;
    SET_GPR_U32(ctx, 31, 0x1C17A8u);
    ctx->pc = 0x1C17A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C17A0u;
    // 0x1c17a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C530u, 0x1C17A0u, 0x1C17A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C17A8u;
label_1c17a8:
    // 0x1c17a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1c17ac:
    if (ctx->pc == 0x1C17ACu) {
        ctx->pc = 0x1C17ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C17A8u;
        // 0x1c17ac: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C17B0u;
        goto label_1c17b0;
    }
    ctx->pc = 0x1C17A8u;
    {
        const bool branch_taken_0x1c17a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C17ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C17A8u;
        // 0x1c17ac: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c17a8) {
            ctx->pc = 0x1C17C4u;
            goto label_1c17c4;
        }
    }
    ctx->pc = 0x1C17B0u;
label_1c17b0:
    // 0x1c17b0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c17b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c17b4:
    // 0x1c17b4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c17b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1c17b8:
    // 0x1c17b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c17b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c17bc:
    // 0x1c17bc: 0x10000084  b           . + 4 + (0x84 << 2)
label_1c17c0:
    if (ctx->pc == 0x1C17C0u) {
        ctx->pc = 0x1C17C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C17BCu;
        // 0x1c17c0: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C17C4u;
        goto label_1c17c4;
    }
    ctx->pc = 0x1C17BCu;
    {
        const bool branch_taken_0x1c17bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C17C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C17BCu;
        // 0x1c17c0: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c17bc) {
            ctx->pc = 0x1C19D0u;
            goto label_1c19d0;
        }
    }
    ctx->pc = 0x1C17C4u;
label_1c17c4:
    // 0x1c17c4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c17c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c17c8:
    // 0x1c17c8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c17c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1c17cc:
    // 0x1c17cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c17ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c17d0:
    // 0x1c17d0: 0x1000007f  b           . + 4 + (0x7F << 2)
label_1c17d4:
    if (ctx->pc == 0x1C17D4u) {
        ctx->pc = 0x1C17D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C17D0u;
        // 0x1c17d4: 0x240600de  addiu       $a2, $zero, 0xDE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 222));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C17D8u;
        goto label_1c17d8;
    }
    ctx->pc = 0x1C17D0u;
    {
        const bool branch_taken_0x1c17d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C17D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C17D0u;
        // 0x1c17d4: 0x240600de  addiu       $a2, $zero, 0xDE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 222));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c17d0) {
            ctx->pc = 0x1C19D0u;
            goto label_1c19d0;
        }
    }
    ctx->pc = 0x1C17D8u;
label_1c17d8:
    // 0x1c17d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c17d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c17dc:
    // 0x1c17dc: 0xc070902  jal         func_1C2408
label_1c17e0:
    if (ctx->pc == 0x1C17E0u) {
        ctx->pc = 0x1C17E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C17DCu;
        // 0x1c17e0: 0x240500c8  addiu       $a1, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C17E4u;
        goto label_1c17e4;
    }
    ctx->pc = 0x1C17DCu;
    SET_GPR_U32(ctx, 31, 0x1C17E4u);
    ctx->pc = 0x1C17E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C17DCu;
    // 0x1c17e0: 0x240500c8  addiu       $a1, $zero, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2408u, 0x1C17DCu, 0x1C17E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C17E4u;
label_1c17e4:
    // 0x1c17e4: 0xc04b14c  jal         func_12C530
label_1c17e8:
    if (ctx->pc == 0x1C17E8u) {
        ctx->pc = 0x1C17E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C17E4u;
        // 0x1c17e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C17ECu;
        goto label_1c17ec;
    }
    ctx->pc = 0x1C17E4u;
    SET_GPR_U32(ctx, 31, 0x1C17ECu);
    ctx->pc = 0x1C17E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C17E4u;
    // 0x1c17e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C530u, 0x1C17E4u, 0x1C17ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C17ECu;
label_1c17ec:
    // 0x1c17ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1c17f0:
    if (ctx->pc == 0x1C17F0u) {
        ctx->pc = 0x1C17F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C17ECu;
        // 0x1c17f0: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C17F4u;
        goto label_1c17f4;
    }
    ctx->pc = 0x1C17ECu;
    {
        const bool branch_taken_0x1c17ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C17F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C17ECu;
        // 0x1c17f0: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c17ec) {
            ctx->pc = 0x1C1808u;
            goto label_1c1808;
        }
    }
    ctx->pc = 0x1C17F4u;
label_1c17f4:
    // 0x1c17f4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c17f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c17f8:
    // 0x1c17f8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c17f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1c17fc:
    // 0x1c17fc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c17fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c1800:
    // 0x1c1800: 0x10000073  b           . + 4 + (0x73 << 2)
label_1c1804:
    if (ctx->pc == 0x1C1804u) {
        ctx->pc = 0x1C1804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1800u;
        // 0x1c1804: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1808u;
        goto label_1c1808;
    }
    ctx->pc = 0x1C1800u;
    {
        const bool branch_taken_0x1c1800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1800u;
        // 0x1c1804: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1800) {
            ctx->pc = 0x1C19D0u;
            goto label_1c19d0;
        }
    }
    ctx->pc = 0x1C1808u;
label_1c1808:
    // 0x1c1808: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c1808u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c180c:
    // 0x1c180c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c180cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1c1810:
    // 0x1c1810: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1814:
    // 0x1c1814: 0x1000006e  b           . + 4 + (0x6E << 2)
label_1c1818:
    if (ctx->pc == 0x1C1818u) {
        ctx->pc = 0x1C1818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1814u;
        // 0x1c1818: 0x240600d4  addiu       $a2, $zero, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C181Cu;
        goto label_1c181c;
    }
    ctx->pc = 0x1C1814u;
    {
        const bool branch_taken_0x1c1814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1814u;
        // 0x1c1818: 0x240600d4  addiu       $a2, $zero, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1814) {
            ctx->pc = 0x1C19D0u;
            goto label_1c19d0;
        }
    }
    ctx->pc = 0x1C181Cu;
label_1c181c:
    // 0x1c181c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1c181cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_1c1820:
    // 0x1c1820: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x1c1820u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
label_1c1824:
    // 0x1c1824: 0x24427a24  addiu       $v0, $v0, 0x7A24
    ctx->pc = 0x1c1824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31268));
label_1c1828:
    // 0x1c1828: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c1828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c182c:
    // 0x1c182c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1c182cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1c1830:
    // 0x1c1830: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1c1830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_1c1834:
    // 0x1c1834: 0xc04b14c  jal         func_12C530
label_1c1838:
    if (ctx->pc == 0x1C1838u) {
        ctx->pc = 0x1C1838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1834u;
        // 0x1c1838: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C183Cu;
        goto label_1c183c;
    }
    ctx->pc = 0x1C1834u;
    SET_GPR_U32(ctx, 31, 0x1C183Cu);
    ctx->pc = 0x1C1838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1834u;
    // 0x1c1838: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C530u, 0x1C1834u, 0x1C183Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C183Cu;
label_1c183c:
    // 0x1c183c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1c1840:
    if (ctx->pc == 0x1C1840u) {
        ctx->pc = 0x1C1840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C183Cu;
        // 0x1c1840: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1844u;
        goto label_1c1844;
    }
    ctx->pc = 0x1C183Cu;
    {
        const bool branch_taken_0x1c183c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C183Cu;
        // 0x1c1840: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c183c) {
            ctx->pc = 0x1C1858u;
            goto label_1c1858;
        }
    }
    ctx->pc = 0x1C1844u;
label_1c1844:
    // 0x1c1844: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c1844u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c1848:
    // 0x1c1848: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c1848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1c184c:
    // 0x1c184c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c184cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c1850:
    // 0x1c1850: 0x1000005f  b           . + 4 + (0x5F << 2)
label_1c1854:
    if (ctx->pc == 0x1C1854u) {
        ctx->pc = 0x1C1854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1850u;
        // 0x1c1854: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1858u;
        goto label_1c1858;
    }
    ctx->pc = 0x1C1850u;
    {
        const bool branch_taken_0x1c1850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1850u;
        // 0x1c1854: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1850) {
            ctx->pc = 0x1C19D0u;
            goto label_1c19d0;
        }
    }
    ctx->pc = 0x1C1858u;
label_1c1858:
    // 0x1c1858: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c1858u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c185c:
    // 0x1c185c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c185cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1c1860:
    // 0x1c1860: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1864:
    // 0x1c1864: 0x1000005a  b           . + 4 + (0x5A << 2)
label_1c1868:
    if (ctx->pc == 0x1C1868u) {
        ctx->pc = 0x1C1868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1864u;
        // 0x1c1868: 0x240600df  addiu       $a2, $zero, 0xDF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C186Cu;
        goto label_1c186c;
    }
    ctx->pc = 0x1C1864u;
    {
        const bool branch_taken_0x1c1864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1864u;
        // 0x1c1868: 0x240600df  addiu       $a2, $zero, 0xDF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1864) {
            ctx->pc = 0x1C19D0u;
            goto label_1c19d0;
        }
    }
    ctx->pc = 0x1C186Cu;
label_1c186c:
    // 0x1c186c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1c186cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_1c1870:
    // 0x1c1870: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x1c1870u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
label_1c1874:
    // 0x1c1874: 0x24427a24  addiu       $v0, $v0, 0x7A24
    ctx->pc = 0x1c1874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31268));
label_1c1878:
    // 0x1c1878: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c1878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c187c:
    // 0x1c187c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1c187cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1c1880:
    // 0x1c1880: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1c1880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_1c1884:
    // 0x1c1884: 0xc04b14c  jal         func_12C530
label_1c1888:
    if (ctx->pc == 0x1C1888u) {
        ctx->pc = 0x1C1888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1884u;
        // 0x1c1888: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C188Cu;
        goto label_1c188c;
    }
    ctx->pc = 0x1C1884u;
    SET_GPR_U32(ctx, 31, 0x1C188Cu);
    ctx->pc = 0x1C1888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1884u;
    // 0x1c1888: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C530u, 0x1C1884u, 0x1C188Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C188Cu;
label_1c188c:
    // 0x1c188c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1c1890:
    if (ctx->pc == 0x1C1890u) {
        ctx->pc = 0x1C1890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C188Cu;
        // 0x1c1890: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1894u;
        goto label_1c1894;
    }
    ctx->pc = 0x1C188Cu;
    {
        const bool branch_taken_0x1c188c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C188Cu;
        // 0x1c1890: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c188c) {
            ctx->pc = 0x1C18A8u;
            goto label_1c18a8;
        }
    }
    ctx->pc = 0x1C1894u;
label_1c1894:
    // 0x1c1894: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c1894u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c1898:
    // 0x1c1898: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c1898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1c189c:
    // 0x1c189c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c189cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c18a0:
    // 0x1c18a0: 0x1000004b  b           . + 4 + (0x4B << 2)
label_1c18a4:
    if (ctx->pc == 0x1C18A4u) {
        ctx->pc = 0x1C18A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C18A0u;
        // 0x1c18a4: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C18A8u;
        goto label_1c18a8;
    }
    ctx->pc = 0x1C18A0u;
    {
        const bool branch_taken_0x1c18a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C18A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C18A0u;
        // 0x1c18a4: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c18a0) {
            ctx->pc = 0x1C19D0u;
            goto label_1c19d0;
        }
    }
    ctx->pc = 0x1C18A8u;
label_1c18a8:
    // 0x1c18a8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c18a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c18ac:
    // 0x1c18ac: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c18acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1c18b0:
    // 0x1c18b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c18b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c18b4:
    // 0x1c18b4: 0x10000046  b           . + 4 + (0x46 << 2)
label_1c18b8:
    if (ctx->pc == 0x1C18B8u) {
        ctx->pc = 0x1C18B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C18B4u;
        // 0x1c18b8: 0x240600df  addiu       $a2, $zero, 0xDF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C18BCu;
        goto label_1c18bc;
    }
    ctx->pc = 0x1C18B4u;
    {
        const bool branch_taken_0x1c18b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C18B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C18B4u;
        // 0x1c18b8: 0x240600df  addiu       $a2, $zero, 0xDF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c18b4) {
            ctx->pc = 0x1C19D0u;
            goto label_1c19d0;
        }
    }
    ctx->pc = 0x1C18BCu;
label_1c18bc:
    // 0x1c18bc: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1c18bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_1c18c0:
    // 0x1c18c0: 0x3c050200  lui         $a1, 0x200
    ctx->pc = 0x1c18c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
label_1c18c4:
    // 0x1c18c4: 0x24427a24  addiu       $v0, $v0, 0x7A24
    ctx->pc = 0x1c18c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31268));
label_1c18c8:
    // 0x1c18c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c18c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c18cc:
    // 0x1c18cc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1c18ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1c18d0:
    // 0x1c18d0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1c18d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_1c18d4:
    // 0x1c18d4: 0xc04b14c  jal         func_12C530
label_1c18d8:
    if (ctx->pc == 0x1C18D8u) {
        ctx->pc = 0x1C18D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C18D4u;
        // 0x1c18d8: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C18DCu;
        goto label_1c18dc;
    }
    ctx->pc = 0x1C18D4u;
    SET_GPR_U32(ctx, 31, 0x1C18DCu);
    ctx->pc = 0x1C18D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C18D4u;
    // 0x1c18d8: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C530u, 0x1C18D4u, 0x1C18DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C18DCu;
label_1c18dc:
    // 0x1c18dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1c18e0:
    if (ctx->pc == 0x1C18E0u) {
        ctx->pc = 0x1C18E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C18DCu;
        // 0x1c18e0: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C18E4u;
        goto label_1c18e4;
    }
    ctx->pc = 0x1C18DCu;
    {
        const bool branch_taken_0x1c18dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C18E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C18DCu;
        // 0x1c18e0: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c18dc) {
            ctx->pc = 0x1C18F8u;
            goto label_1c18f8;
        }
    }
    ctx->pc = 0x1C18E4u;
label_1c18e4:
    // 0x1c18e4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c18e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c18e8:
    // 0x1c18e8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c18e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1c18ec:
    // 0x1c18ec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c18ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c18f0:
    // 0x1c18f0: 0x10000037  b           . + 4 + (0x37 << 2)
label_1c18f4:
    if (ctx->pc == 0x1C18F4u) {
        ctx->pc = 0x1C18F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C18F0u;
        // 0x1c18f4: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C18F8u;
        goto label_1c18f8;
    }
    ctx->pc = 0x1C18F0u;
    {
        const bool branch_taken_0x1c18f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C18F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C18F0u;
        // 0x1c18f4: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c18f0) {
            ctx->pc = 0x1C19D0u;
            goto label_1c19d0;
        }
    }
    ctx->pc = 0x1C18F8u;
label_1c18f8:
    // 0x1c18f8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c18f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c18fc:
    // 0x1c18fc: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c18fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1c1900:
    // 0x1c1900: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1904:
    // 0x1c1904: 0x10000032  b           . + 4 + (0x32 << 2)
label_1c1908:
    if (ctx->pc == 0x1C1908u) {
        ctx->pc = 0x1C1908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1904u;
        // 0x1c1908: 0x240600df  addiu       $a2, $zero, 0xDF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C190Cu;
        goto label_1c190c;
    }
    ctx->pc = 0x1C1904u;
    {
        const bool branch_taken_0x1c1904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1904u;
        // 0x1c1908: 0x240600df  addiu       $a2, $zero, 0xDF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1904) {
            ctx->pc = 0x1C19D0u;
            goto label_1c19d0;
        }
    }
    ctx->pc = 0x1C190Cu;
label_1c190c:
    // 0x1c190c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1c190cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_1c1910:
    // 0x1c1910: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x1c1910u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
label_1c1914:
    // 0x1c1914: 0x24427a24  addiu       $v0, $v0, 0x7A24
    ctx->pc = 0x1c1914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31268));
label_1c1918:
    // 0x1c1918: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c1918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c191c:
    // 0x1c191c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1c191cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1c1920:
    // 0x1c1920: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1c1920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_1c1924:
    // 0x1c1924: 0xc04b14c  jal         func_12C530
label_1c1928:
    if (ctx->pc == 0x1C1928u) {
        ctx->pc = 0x1C1928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1924u;
        // 0x1c1928: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C192Cu;
        goto label_1c192c;
    }
    ctx->pc = 0x1C1924u;
    SET_GPR_U32(ctx, 31, 0x1C192Cu);
    ctx->pc = 0x1C1928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1924u;
    // 0x1c1928: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C530u, 0x1C1924u, 0x1C192Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C192Cu;
label_1c192c:
    // 0x1c192c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1c1930:
    if (ctx->pc == 0x1C1930u) {
        ctx->pc = 0x1C1930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C192Cu;
        // 0x1c1930: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1934u;
        goto label_1c1934;
    }
    ctx->pc = 0x1C192Cu;
    {
        const bool branch_taken_0x1c192c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C192Cu;
        // 0x1c1930: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c192c) {
            ctx->pc = 0x1C1948u;
            goto label_1c1948;
        }
    }
    ctx->pc = 0x1C1934u;
label_1c1934:
    // 0x1c1934: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c1934u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c1938:
    // 0x1c1938: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c1938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1c193c:
    // 0x1c193c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c193cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c1940:
    // 0x1c1940: 0x10000023  b           . + 4 + (0x23 << 2)
label_1c1944:
    if (ctx->pc == 0x1C1944u) {
        ctx->pc = 0x1C1944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1940u;
        // 0x1c1944: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1948u;
        goto label_1c1948;
    }
    ctx->pc = 0x1C1940u;
    {
        const bool branch_taken_0x1c1940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1940u;
        // 0x1c1944: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1940) {
            ctx->pc = 0x1C19D0u;
            goto label_1c19d0;
        }
    }
    ctx->pc = 0x1C1948u;
label_1c1948:
    // 0x1c1948: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c1948u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c194c:
    // 0x1c194c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c194cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1c1950:
    // 0x1c1950: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1954:
    // 0x1c1954: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1c1958:
    if (ctx->pc == 0x1C1958u) {
        ctx->pc = 0x1C1958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1954u;
        // 0x1c1958: 0x240600df  addiu       $a2, $zero, 0xDF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C195Cu;
        goto label_1c195c;
    }
    ctx->pc = 0x1C1954u;
    {
        const bool branch_taken_0x1c1954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1954u;
        // 0x1c1958: 0x240600df  addiu       $a2, $zero, 0xDF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1954) {
            ctx->pc = 0x1C19D0u;
            goto label_1c19d0;
        }
    }
    ctx->pc = 0x1C195Cu;
label_1c195c:
    // 0x1c195c: 0xc0c73f8  jal         func_31CFE0
label_1c1960:
    if (ctx->pc == 0x1C1960u) {
        ctx->pc = 0x1C1964u;
        goto label_1c1964;
    }
    ctx->pc = 0x1C195Cu;
    SET_GPR_U32(ctx, 31, 0x1C1964u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x1C195Cu, 0x1C1964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1964u;
label_1c1964:
    // 0x1c1964: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c1964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1c1968:
    // 0x1c1968: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1c196c:
    if (ctx->pc == 0x1C196Cu) {
        ctx->pc = 0x1C196Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1968u;
        // 0x1c196c: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1970u;
        goto label_1c1970;
    }
    ctx->pc = 0x1C1968u;
    {
        const bool branch_taken_0x1c1968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C196Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1968u;
        // 0x1c196c: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1968) {
            ctx->pc = 0x1C199Cu;
            goto label_1c199c;
        }
    }
    ctx->pc = 0x1C1970u;
label_1c1970:
    // 0x1c1970: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c1970u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c1974:
    // 0x1c1974: 0x2604ee00  addiu       $a0, $s0, -0x1200
    ctx->pc = 0x1c1974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
label_1c1978:
    // 0x1c1978: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c197c:
    // 0x1c197c: 0x240600f8  addiu       $a2, $zero, 0xF8
    ctx->pc = 0x1c197cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
label_1c1980:
    // 0x1c1980: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c1980u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1984:
    // 0x1c1984: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c1984u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1988:
    // 0x1c1988: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c1988u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c198c:
    // 0x1c198c: 0xc0b2e92  jal         func_2CBA48
label_1c1990:
    if (ctx->pc == 0x1C1990u) {
        ctx->pc = 0x1C1990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C198Cu;
        // 0x1c1990: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1994u;
        goto label_1c1994;
    }
    ctx->pc = 0x1C198Cu;
    SET_GPR_U32(ctx, 31, 0x1C1994u);
    ctx->pc = 0x1C1990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C198Cu;
    // 0x1c1990: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1C198Cu, 0x1C1994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1994u;
label_1c1994:
    // 0x1c1994: 0x1000000b  b           . + 4 + (0xB << 2)
label_1c1998:
    if (ctx->pc == 0x1C1998u) {
        ctx->pc = 0x1C1998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1994u;
        // 0x1c1998: 0x2604ee00  addiu       $a0, $s0, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C199Cu;
        goto label_1c199c;
    }
    ctx->pc = 0x1C1994u;
    {
        const bool branch_taken_0x1c1994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1994u;
        // 0x1c1998: 0x2604ee00  addiu       $a0, $s0, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1994) {
            ctx->pc = 0x1C19C4u;
            goto label_1c19c4;
        }
    }
    ctx->pc = 0x1C199Cu;
label_1c199c:
    // 0x1c199c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c199cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c19a0:
    // 0x1c19a0: 0x2604ee00  addiu       $a0, $s0, -0x1200
    ctx->pc = 0x1c19a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
label_1c19a4:
    // 0x1c19a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c19a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c19a8:
    // 0x1c19a8: 0x240600f9  addiu       $a2, $zero, 0xF9
    ctx->pc = 0x1c19a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 249));
label_1c19ac:
    // 0x1c19ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c19acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c19b0:
    // 0x1c19b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c19b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c19b4:
    // 0x1c19b4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c19b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c19b8:
    // 0x1c19b8: 0xc0b2e92  jal         func_2CBA48
label_1c19bc:
    if (ctx->pc == 0x1C19BCu) {
        ctx->pc = 0x1C19BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C19B8u;
        // 0x1c19bc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C19C0u;
        goto label_1c19c0;
    }
    ctx->pc = 0x1C19B8u;
    SET_GPR_U32(ctx, 31, 0x1C19C0u);
    ctx->pc = 0x1C19BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C19B8u;
    // 0x1c19bc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1C19B8u, 0x1C19C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C19C0u;
label_1c19c0:
    // 0x1c19c0: 0x2604ee00  addiu       $a0, $s0, -0x1200
    ctx->pc = 0x1c19c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
label_1c19c4:
    // 0x1c19c4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c19c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c19c8:
    // 0x1c19c8: 0x24060108  addiu       $a2, $zero, 0x108
    ctx->pc = 0x1c19c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
label_1c19cc:
    // 0x1c19cc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1c19ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c19d0:
    // 0x1c19d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c19d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c19d4:
    // 0x1c19d4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c19d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c19d8:
    // 0x1c19d8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c19d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c19dc:
    // 0x1c19dc: 0xc0b2e92  jal         func_2CBA48
label_1c19e0:
    if (ctx->pc == 0x1C19E0u) {
        ctx->pc = 0x1C19E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C19DCu;
        // 0x1c19e0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C19E4u;
        goto label_1c19e4;
    }
    ctx->pc = 0x1C19DCu;
    SET_GPR_U32(ctx, 31, 0x1C19E4u);
    ctx->pc = 0x1C19E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C19DCu;
    // 0x1c19e0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1C19DCu, 0x1C19E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C19E4u;
label_1c19e4:
    // 0x1c19e4: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1c19e8:
    if (ctx->pc == 0x1C19E8u) {
        ctx->pc = 0x1C19E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C19E4u;
        // 0x1c19e8: 0x964402fe  lhu         $a0, 0x2FE($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 766)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C19ECu;
        goto label_1c19ec;
    }
    ctx->pc = 0x1C19E4u;
    {
        const bool branch_taken_0x1c19e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C19E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C19E4u;
        // 0x1c19e8: 0x964402fe  lhu         $a0, 0x2FE($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 766)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c19e4) {
            ctx->pc = 0x1C1A60u;
            goto label_1c1a60;
        }
    }
    ctx->pc = 0x1C19ECu;
label_1c19ec:
    // 0x1c19ec: 0x8e440680  lw          $a0, 0x680($s2)
    ctx->pc = 0x1c19ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1664)));
label_1c19f0:
    // 0x1c19f0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1c19f4:
    if (ctx->pc == 0x1C19F4u) {
        ctx->pc = 0x1C19F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C19F0u;
        // 0x1c19f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C19F8u;
        goto label_1c19f8;
    }
    ctx->pc = 0x1C19F0u;
    {
        const bool branch_taken_0x1c19f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C19F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C19F0u;
        // 0x1c19f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c19f0) {
            ctx->pc = 0x1C1A00u;
            goto label_1c1a00;
        }
    }
    ctx->pc = 0x1C19F8u;
label_1c19f8:
    // 0x1c19f8: 0xc07f5c6  jal         func_1FD718
label_1c19fc:
    if (ctx->pc == 0x1C19FCu) {
        ctx->pc = 0x1C19FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C19F8u;
        // 0x1c19fc: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1A00u;
        goto label_1c1a00;
    }
    ctx->pc = 0x1C19F8u;
    SET_GPR_U32(ctx, 31, 0x1C1A00u);
    ctx->pc = 0x1C19FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C19F8u;
    // 0x1c19fc: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD718u, 0x1C19F8u, 0x1C1A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1A00u;
label_1c1a00:
    // 0x1c1a00: 0x8e430214  lw          $v1, 0x214($s2)
    ctx->pc = 0x1c1a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
label_1c1a04:
    // 0x1c1a04: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1c1a04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1c1a08:
    // 0x1c1a08: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x1c1a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1c1a0c:
    // 0x1c1a0c: 0x40f809  jalr        $v0
label_1c1a10:
    if (ctx->pc == 0x1C1A10u) {
        ctx->pc = 0x1C1A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1A0Cu;
        // 0x1c1a10: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1A14u;
        goto label_1c1a14;
    }
    ctx->pc = 0x1C1A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C1A14u);
        ctx->pc = 0x1C1A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1A0Cu;
        // 0x1c1a10: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1A0Cu, 0x1C1A14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C1A14u;
label_1c1a14:
    // 0x1c1a14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c1a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1c1a18:
    // 0x1c1a18: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c1a18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c1a1c:
    // 0x1c1a1c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c1a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1a20:
    // 0x1c1a20: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1c1a20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c1a24:
    // 0x1c1a24: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1c1a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1c1a28:
    // 0x1c1a28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c1a28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1a2c:
    // 0x1c1a2c: 0xc0c1a0e  jal         func_306838
label_1c1a30:
    if (ctx->pc == 0x1C1A30u) {
        ctx->pc = 0x1C1A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1A2Cu;
        // 0x1c1a30: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1A34u;
        goto label_1c1a34;
    }
    ctx->pc = 0x1C1A2Cu;
    SET_GPR_U32(ctx, 31, 0x1C1A34u);
    ctx->pc = 0x1C1A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1A2Cu;
    // 0x1c1a30: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x1C1A2Cu, 0x1C1A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1A34u;
label_1c1a34:
    // 0x1c1a34: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1c1a34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1c1a38:
    // 0x1c1a38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1a3c:
    // 0x1c1a3c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c1a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1c1a40:
    // 0x1c1a40: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c1a40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c1a44:
    // 0x1c1a44: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1c1a44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c1a48:
    // 0x1c1a48: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c1a48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1a4c:
    // 0x1c1a4c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c1a4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1a50:
    // 0x1c1a50: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c1a50u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1a54:
    // 0x1c1a54: 0xc0b2e92  jal         func_2CBA48
label_1c1a58:
    if (ctx->pc == 0x1C1A58u) {
        ctx->pc = 0x1C1A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1A54u;
        // 0x1c1a58: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1A5Cu;
        goto label_1c1a5c;
    }
    ctx->pc = 0x1C1A54u;
    SET_GPR_U32(ctx, 31, 0x1C1A5Cu);
    ctx->pc = 0x1C1A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1A54u;
    // 0x1c1a58: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1C1A54u, 0x1C1A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1A5Cu;
label_1c1a5c:
    // 0x1c1a5c: 0x964402fe  lhu         $a0, 0x2FE($s2)
    ctx->pc = 0x1c1a5cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 766)));
label_1c1a60:
    // 0x1c1a60: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1c1a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_1c1a64:
    // 0x1c1a64: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1c1a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1c1a68:
    // 0x1c1a68: 0xac447ab0  sw          $a0, 0x7AB0($v0)
    ctx->pc = 0x1c1a68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31408), GPR_U32(ctx, 4));
label_1c1a6c:
    // 0x1c1a6c: 0xa6430568  sh          $v1, 0x568($s2)
    ctx->pc = 0x1c1a6cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1384), (uint16_t)GPR_U32(ctx, 3));
label_1c1a70:
    // 0x1c1a70: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x1c1a70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
label_1c1a74:
    // 0x1c1a74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c1a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1c1a78:
    // 0x1c1a78: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x1c1a78u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_1c1a7c:
    // 0x1c1a7c: 0xc6400104  lwc1        $f0, 0x104($s2)
    ctx->pc = 0x1c1a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c1a80:
    // 0x1c1a80: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x1c1a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
label_1c1a84:
    // 0x1c1a84: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x1c1a84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_1c1a88:
    // 0x1c1a88: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c1a88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c1a8c:
    // 0x1c1a8c: 0x0  nop
    ctx->pc = 0x1c1a8cu;
    // NOP
label_1c1a90:
    // 0x1c1a90: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c1a90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1c1a94:
    // 0x1c1a94: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1c1a94u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1c1a98:
    // 0x1c1a98: 0xc07df52  jal         func_1F7D48
label_1c1a9c:
    if (ctx->pc == 0x1C1A9Cu) {
        ctx->pc = 0x1C1A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1A98u;
        // 0x1c1a9c: 0xe6400104  swc1        $f0, 0x104($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1AA0u;
        goto label_1c1aa0;
    }
    ctx->pc = 0x1C1A98u;
    SET_GPR_U32(ctx, 31, 0x1C1AA0u);
    ctx->pc = 0x1C1A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1A98u;
    // 0x1c1a9c: 0xe6400104  swc1        $f0, 0x104($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x1C1A98u, 0x1C1AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1AA0u;
label_1c1aa0:
    // 0x1c1aa0: 0x86420568  lh          $v0, 0x568($s2)
    ctx->pc = 0x1c1aa0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1384)));
label_1c1aa4:
    // 0x1c1aa4: 0x96430568  lhu         $v1, 0x568($s2)
    ctx->pc = 0x1c1aa4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1384)));
label_1c1aa8:
    // 0x1c1aa8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1c1aac:
    if (ctx->pc == 0x1C1AACu) {
        ctx->pc = 0x1C1AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1AA8u;
        // 0x1c1aac: 0xe6400104  swc1        $f0, 0x104($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1AB0u;
        goto label_1c1ab0;
    }
    ctx->pc = 0x1C1AA8u;
    {
        const bool branch_taken_0x1c1aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1AA8u;
        // 0x1c1aac: 0xe6400104  swc1        $f0, 0x104($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1aa8) {
            ctx->pc = 0x1C1AD4u;
            goto label_1c1ad4;
        }
    }
    ctx->pc = 0x1C1AB0u;
label_1c1ab0:
    // 0x1c1ab0: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1c1ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1c1ab4:
    // 0x1c1ab4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1c1ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_1c1ab8:
    // 0x1c1ab8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c1ab8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1c1abc:
    // 0x1c1abc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c1abcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c1ac0:
    // 0x1c1ac0: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x1c1ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_1c1ac4:
    // 0x1c1ac4: 0xa6420568  sh          $v0, 0x568($s2)
    ctx->pc = 0x1c1ac4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1384), (uint16_t)GPR_U32(ctx, 2));
label_1c1ac8:
    // 0x1c1ac8: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1c1ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c1acc:
    // 0x1c1acc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c1accu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1c1ad0:
    // 0x1c1ad0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1c1ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_1c1ad4:
    // 0x1c1ad4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c1ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1c1ad8:
    // 0x1c1ad8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c1ad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c1adc:
    // 0x1c1adc: 0x100000aa  b           . + 4 + (0xAA << 2)
label_1c1ae0:
    if (ctx->pc == 0x1C1AE0u) {
        ctx->pc = 0x1C1AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1ADCu;
        // 0x1c1ae0: 0xc640024c  lwc1        $f0, 0x24C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1AE4u;
        goto label_1c1ae4;
    }
    ctx->pc = 0x1C1ADCu;
    {
        const bool branch_taken_0x1c1adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1ADCu;
        // 0x1c1ae0: 0xc640024c  lwc1        $f0, 0x24C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1adc) {
            ctx->pc = 0x1C1D88u;
            goto label_1c1d88;
        }
    }
    ctx->pc = 0x1C1AE4u;
label_1c1ae4:
    // 0x1c1ae4: 0xc0c73f8  jal         func_31CFE0
label_1c1ae8:
    if (ctx->pc == 0x1C1AE8u) {
        ctx->pc = 0x1C1AECu;
        goto label_1c1aec;
    }
    ctx->pc = 0x1C1AE4u;
    SET_GPR_U32(ctx, 31, 0x1C1AECu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x1C1AE4u, 0x1C1AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1AECu;
label_1c1aec:
    // 0x1c1aec: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1c1aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1c1af0:
    // 0x1c1af0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1c1af0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1c1af4:
    // 0x1c1af4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_1c1af8:
    if (ctx->pc == 0x1C1AF8u) {
        ctx->pc = 0x1C1AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1AF4u;
        // 0x1c1af8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1AFCu;
        goto label_1c1afc;
    }
    ctx->pc = 0x1C1AF4u;
    {
        const bool branch_taken_0x1c1af4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1af4) {
            ctx->pc = 0x1C1AF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1AF4u;
            // 0x1c1af8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1AFCu;
            goto label_1c1afc;
        }
    }
    ctx->pc = 0x1C1AFCu;
label_1c1afc:
    // 0x1c1afc: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x1c1afcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
label_1c1b00:
    // 0x1c1b00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c1b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1c1b04:
    // 0x1c1b04: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x1c1b04u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_1c1b08:
    // 0x1c1b08: 0x2010  mfhi        $a0
    ctx->pc = 0x1c1b08u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_1c1b0c:
    // 0x1c1b0c: 0x2484001e  addiu       $a0, $a0, 0x1E
    ctx->pc = 0x1c1b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30));
label_1c1b10:
    // 0x1c1b10: 0x10000162  b           . + 4 + (0x162 << 2)
label_1c1b14:
    if (ctx->pc == 0x1C1B14u) {
        ctx->pc = 0x1C1B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B10u;
        // 0x1c1b14: 0xa644056a  sh          $a0, 0x56A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 1386), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1B18u;
        goto label_1c1b18;
    }
    ctx->pc = 0x1C1B10u;
    {
        const bool branch_taken_0x1c1b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B10u;
        // 0x1c1b14: 0xa644056a  sh          $a0, 0x56A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 1386), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1b10) {
            ctx->pc = 0x1C209Cu;
            goto label_1c209c;
        }
    }
    ctx->pc = 0x1C1B18u;
label_1c1b18:
    // 0x1c1b18: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x1c1b18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
label_1c1b1c:
    // 0x1c1b1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c1b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c1b20:
    // 0x1c1b20: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1c1b20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1c1b24:
    // 0x1c1b24: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1c1b28:
    if (ctx->pc == 0x1C1B28u) {
        ctx->pc = 0x1C1B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B24u;
        // 0x1c1b28: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1B2Cu;
        goto label_1c1b2c;
    }
    ctx->pc = 0x1C1B24u;
    {
        const bool branch_taken_0x1c1b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B24u;
        // 0x1c1b28: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1b24) {
            ctx->pc = 0x1C1B38u;
            goto label_1c1b38;
        }
    }
    ctx->pc = 0x1C1B2Cu;
label_1c1b2c:
    // 0x1c1b2c: 0x8e420278  lw          $v0, 0x278($s2)
    ctx->pc = 0x1c1b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
label_1c1b30:
    // 0x1c1b30: 0x10000002  b           . + 4 + (0x2 << 2)
label_1c1b34:
    if (ctx->pc == 0x1C1B34u) {
        ctx->pc = 0x1C1B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B30u;
        // 0x1c1b34: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1B38u;
        goto label_1c1b38;
    }
    ctx->pc = 0x1C1B30u;
    {
        const bool branch_taken_0x1c1b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B30u;
        // 0x1c1b34: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1b30) {
            ctx->pc = 0x1C1B3Cu;
            goto label_1c1b3c;
        }
    }
    ctx->pc = 0x1C1B38u;
label_1c1b38:
    // 0x1c1b38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c1b38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1b3c:
    // 0x1c1b3c: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_1c1b40:
    if (ctx->pc == 0x1C1B40u) {
        ctx->pc = 0x1C1B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B3Cu;
        // 0x1c1b40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1B44u;
        goto label_1c1b44;
    }
    ctx->pc = 0x1C1B3Cu;
    {
        const bool branch_taken_0x1c1b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B3Cu;
        // 0x1c1b40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1b3c) {
            ctx->pc = 0x1C1C04u;
            goto label_1c1c04;
        }
    }
    ctx->pc = 0x1C1B44u;
label_1c1b44:
    // 0x1c1b44: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x1c1b44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
label_1c1b48:
    // 0x1c1b48: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1c1b48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1c1b4c:
    // 0x1c1b4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1c1b50:
    if (ctx->pc == 0x1C1B50u) {
        ctx->pc = 0x1C1B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B4Cu;
        // 0x1c1b50: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1B54u;
        goto label_1c1b54;
    }
    ctx->pc = 0x1C1B4Cu;
    {
        const bool branch_taken_0x1c1b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B4Cu;
        // 0x1c1b50: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1b4c) {
            ctx->pc = 0x1C1B60u;
            goto label_1c1b60;
        }
    }
    ctx->pc = 0x1C1B54u;
label_1c1b54:
    // 0x1c1b54: 0x8e420278  lw          $v0, 0x278($s2)
    ctx->pc = 0x1c1b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
label_1c1b58:
    // 0x1c1b58: 0x10000002  b           . + 4 + (0x2 << 2)
label_1c1b5c:
    if (ctx->pc == 0x1C1B5Cu) {
        ctx->pc = 0x1C1B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B58u;
        // 0x1c1b5c: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1B60u;
        goto label_1c1b60;
    }
    ctx->pc = 0x1C1B58u;
    {
        const bool branch_taken_0x1c1b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B58u;
        // 0x1c1b5c: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1b58) {
            ctx->pc = 0x1C1B64u;
            goto label_1c1b64;
        }
    }
    ctx->pc = 0x1C1B60u;
label_1c1b60:
    // 0x1c1b60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c1b60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1b64:
    // 0x1c1b64: 0xc4400100  lwc1        $f0, 0x100($v0)
    ctx->pc = 0x1c1b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c1b68:
    // 0x1c1b68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c1b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c1b6c:
    // 0x1c1b6c: 0x3c01be32  lui         $at, 0xBE32
    ctx->pc = 0x1c1b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48690 << 16));
label_1c1b70:
    // 0x1c1b70: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x1c1b70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
label_1c1b74:
    // 0x1c1b74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c1b74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c1b78:
    // 0x1c1b78: 0x0  nop
    ctx->pc = 0x1c1b78u;
    // NOP
label_1c1b7c:
    // 0x1c1b7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c1b7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1c1b80:
    // 0x1c1b80: 0xe4400100  swc1        $f0, 0x100($v0)
    ctx->pc = 0x1c1b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
label_1c1b84:
    // 0x1c1b84: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x1c1b84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
label_1c1b88:
    // 0x1c1b88: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1c1b88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1c1b8c:
    // 0x1c1b8c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1c1b90:
    if (ctx->pc == 0x1C1B90u) {
        ctx->pc = 0x1C1B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B8Cu;
        // 0x1c1b90: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1B94u;
        goto label_1c1b94;
    }
    ctx->pc = 0x1C1B8Cu;
    {
        const bool branch_taken_0x1c1b8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B8Cu;
        // 0x1c1b90: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1b8c) {
            ctx->pc = 0x1C1BA0u;
            goto label_1c1ba0;
        }
    }
    ctx->pc = 0x1C1B94u;
label_1c1b94:
    // 0x1c1b94: 0x8e420278  lw          $v0, 0x278($s2)
    ctx->pc = 0x1c1b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
label_1c1b98:
    // 0x1c1b98: 0x10000002  b           . + 4 + (0x2 << 2)
label_1c1b9c:
    if (ctx->pc == 0x1C1B9Cu) {
        ctx->pc = 0x1C1B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B98u;
        // 0x1c1b9c: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1BA0u;
        goto label_1c1ba0;
    }
    ctx->pc = 0x1C1B98u;
    {
        const bool branch_taken_0x1c1b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B98u;
        // 0x1c1b9c: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1b98) {
            ctx->pc = 0x1C1BA4u;
            goto label_1c1ba4;
        }
    }
    ctx->pc = 0x1C1BA0u;
label_1c1ba0:
    // 0x1c1ba0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c1ba0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1ba4:
    // 0x1c1ba4: 0xc4410100  lwc1        $f1, 0x100($v0)
    ctx->pc = 0x1c1ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c1ba8:
    // 0x1c1ba8: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x1c1ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
label_1c1bac:
    // 0x1c1bac: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1c1bacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1c1bb0:
    // 0x1c1bb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c1bb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c1bb4:
    // 0x1c1bb4: 0x0  nop
    ctx->pc = 0x1c1bb4u;
    // NOP
label_1c1bb8:
    // 0x1c1bb8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c1bb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c1bbc:
    // 0x1c1bbc: 0x0  nop
    ctx->pc = 0x1c1bbcu;
    // NOP
label_1c1bc0:
    // 0x1c1bc0: 0x45000136  bc1f        . + 4 + (0x136 << 2)
label_1c1bc4:
    if (ctx->pc == 0x1C1BC4u) {
        ctx->pc = 0x1C1BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1BC0u;
        // 0x1c1bc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1BC8u;
        goto label_1c1bc8;
    }
    ctx->pc = 0x1C1BC0u;
    {
        const bool branch_taken_0x1c1bc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C1BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1BC0u;
        // 0x1c1bc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1bc0) {
            ctx->pc = 0x1C209Cu;
            goto label_1c209c;
        }
    }
    ctx->pc = 0x1C1BC8u;
label_1c1bc8:
    // 0x1c1bc8: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x1c1bc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
label_1c1bcc:
    // 0x1c1bcc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1c1bccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1c1bd0:
    // 0x1c1bd0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1c1bd4:
    if (ctx->pc == 0x1C1BD4u) {
        ctx->pc = 0x1C1BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1BD0u;
        // 0x1c1bd4: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1BD8u;
        goto label_1c1bd8;
    }
    ctx->pc = 0x1C1BD0u;
    {
        const bool branch_taken_0x1c1bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1BD0u;
        // 0x1c1bd4: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1bd0) {
            ctx->pc = 0x1C1BE4u;
            goto label_1c1be4;
        }
    }
    ctx->pc = 0x1C1BD8u;
label_1c1bd8:
    // 0x1c1bd8: 0x8e420278  lw          $v0, 0x278($s2)
    ctx->pc = 0x1c1bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
label_1c1bdc:
    // 0x1c1bdc: 0x10000005  b           . + 4 + (0x5 << 2)
label_1c1be0:
    if (ctx->pc == 0x1C1BE0u) {
        ctx->pc = 0x1C1BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1BDCu;
        // 0x1c1be0: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1BE4u;
        goto label_1c1be4;
    }
    ctx->pc = 0x1C1BDCu;
    {
        const bool branch_taken_0x1c1bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1BDCu;
        // 0x1c1be0: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1bdc) {
            ctx->pc = 0x1C1BF4u;
            goto label_1c1bf4;
        }
    }
    ctx->pc = 0x1C1BE4u;
label_1c1be4:
    // 0x1c1be4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c1be4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1be8:
    // 0x1c1be8: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x1c1be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
label_1c1bec:
    // 0x1c1bec: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1c1becu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1c1bf0:
    // 0x1c1bf0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c1bf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c1bf4:
    // 0x1c1bf4: 0x0  nop
    ctx->pc = 0x1c1bf4u;
    // NOP
label_1c1bf8:
    // 0x1c1bf8: 0xe4400100  swc1        $f0, 0x100($v0)
    ctx->pc = 0x1c1bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
label_1c1bfc:
    // 0x1c1bfc: 0x100000bb  b           . + 4 + (0xBB << 2)
label_1c1c00:
    if (ctx->pc == 0x1C1C00u) {
        ctx->pc = 0x1C1C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1BFCu;
        // 0x1c1c00: 0x924202f6  lbu         $v0, 0x2F6($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1C04u;
        goto label_1c1c04;
    }
    ctx->pc = 0x1C1BFCu;
    {
        const bool branch_taken_0x1c1bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1BFCu;
        // 0x1c1c00: 0x924202f6  lbu         $v0, 0x2F6($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1bfc) {
            ctx->pc = 0x1C1EECu;
            goto label_1c1eec;
        }
    }
    ctx->pc = 0x1C1C04u;
label_1c1c04:
    // 0x1c1c04: 0x100000b9  b           . + 4 + (0xB9 << 2)
label_1c1c08:
    if (ctx->pc == 0x1C1C08u) {
        ctx->pc = 0x1C1C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C04u;
        // 0x1c1c08: 0x924202f6  lbu         $v0, 0x2F6($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1C0Cu;
        goto label_1c1c0c;
    }
    ctx->pc = 0x1C1C04u;
    {
        const bool branch_taken_0x1c1c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C04u;
        // 0x1c1c08: 0x924202f6  lbu         $v0, 0x2F6($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1c04) {
            ctx->pc = 0x1C1EECu;
            goto label_1c1eec;
        }
    }
    ctx->pc = 0x1C1C0Cu;
label_1c1c0c:
    // 0x1c1c0c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1c1c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1c1c10:
    // 0x1c1c10: 0x240600fa  addiu       $a2, $zero, 0xFA
    ctx->pc = 0x1c1c10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1c1c14:
    // 0x1c1c14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1c14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1c18:
    // 0x1c1c18: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c1c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1c1c1c:
    // 0x1c1c1c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1c1c1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c1c20:
    // 0x1c1c20: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c1c20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1c24:
    // 0x1c1c24: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c1c24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1c28:
    // 0x1c1c28: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c1c28u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1c2c:
    // 0x1c1c2c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1c1c2cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1c30:
    // 0x1c1c30: 0xc0b2e92  jal         func_2CBA48
label_1c1c34:
    if (ctx->pc == 0x1C1C34u) {
        ctx->pc = 0x1C1C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C30u;
        // 0x1c1c34: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1C38u;
        goto label_1c1c38;
    }
    ctx->pc = 0x1C1C30u;
    SET_GPR_U32(ctx, 31, 0x1C1C38u);
    ctx->pc = 0x1C1C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1C30u;
    // 0x1c1c34: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1C1C30u, 0x1C1C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1C38u;
label_1c1c38:
    // 0x1c1c38: 0x8e460560  lw          $a2, 0x560($s2)
    ctx->pc = 0x1c1c38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1376)));
label_1c1c3c:
    // 0x1c1c3c: 0x28c20900  slti        $v0, $a2, 0x900
    ctx->pc = 0x1c1c3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2304) ? 1 : 0);
label_1c1c40:
    // 0x1c1c40: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1c1c44:
    if (ctx->pc == 0x1C1C44u) {
        ctx->pc = 0x1C1C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C40u;
        // 0x1c1c44: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1C48u;
        goto label_1c1c48;
    }
    ctx->pc = 0x1C1C40u;
    {
        const bool branch_taken_0x1c1c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C40u;
        // 0x1c1c44: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1c40) {
            ctx->pc = 0x1C1C54u;
            goto label_1c1c54;
        }
    }
    ctx->pc = 0x1C1C48u;
label_1c1c48:
    // 0x1c1c48: 0x8e4500f0  lw          $a1, 0xF0($s2)
    ctx->pc = 0x1c1c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_1c1c4c:
    // 0x1c1c4c: 0x10000027  b           . + 4 + (0x27 << 2)
label_1c1c50:
    if (ctx->pc == 0x1C1C50u) {
        ctx->pc = 0x1C1C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C4Cu;
        // 0x1c1c50: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1C54u;
        goto label_1c1c54;
    }
    ctx->pc = 0x1C1C4Cu;
    {
        const bool branch_taken_0x1c1c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C4Cu;
        // 0x1c1c50: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1c4c) {
            ctx->pc = 0x1C1CECu;
            goto label_1c1cec;
        }
    }
    ctx->pc = 0x1C1C54u;
label_1c1c54:
    // 0x1c1c54: 0x28c20940  slti        $v0, $a2, 0x940
    ctx->pc = 0x1c1c54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2368) ? 1 : 0);
label_1c1c58:
    // 0x1c1c58: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1c1c5c:
    if (ctx->pc == 0x1C1C5Cu) {
        ctx->pc = 0x1C1C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C58u;
        // 0x1c1c5c: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1C60u;
        goto label_1c1c60;
    }
    ctx->pc = 0x1C1C58u;
    {
        const bool branch_taken_0x1c1c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C58u;
        // 0x1c1c5c: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1c58) {
            ctx->pc = 0x1C1C80u;
            goto label_1c1c80;
        }
    }
    ctx->pc = 0x1C1C60u;
label_1c1c60:
    // 0x1c1c60: 0x24c5f700  addiu       $a1, $a2, -0x900
    ctx->pc = 0x1c1c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964992));
label_1c1c64:
    // 0x1c1c64: 0xc07ee4a  jal         func_1FB928
label_1c1c68:
    if (ctx->pc == 0x1C1C68u) {
        ctx->pc = 0x1C1C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C64u;
        // 0x1c1c68: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1C6Cu;
        goto label_1c1c6c;
    }
    ctx->pc = 0x1C1C64u;
    SET_GPR_U32(ctx, 31, 0x1C1C6Cu);
    ctx->pc = 0x1C1C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1C64u;
    // 0x1c1c68: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB928u, 0x1C1C64u, 0x1C1C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1C6Cu;
label_1c1c6c:
    // 0x1c1c6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c1c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c1c70:
    // 0x1c1c70: 0x1043001a  beq         $v0, $v1, . + 4 + (0x1A << 2)
label_1c1c74:
    if (ctx->pc == 0x1C1C74u) {
        ctx->pc = 0x1C1C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C70u;
        // 0x1c1c74: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1C78u;
        goto label_1c1c78;
    }
    ctx->pc = 0x1C1C70u;
    {
        const bool branch_taken_0x1c1c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C1C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C70u;
        // 0x1c1c74: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1c70) {
            ctx->pc = 0x1C1CDCu;
            goto label_1c1cdc;
        }
    }
    ctx->pc = 0x1C1C78u;
label_1c1c78:
    // 0x1c1c78: 0x10000024  b           . + 4 + (0x24 << 2)
label_1c1c7c:
    if (ctx->pc == 0x1C1C7Cu) {
        ctx->pc = 0x1C1C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C78u;
        // 0x1c1c7c: 0xa24202f6  sb          $v0, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1C80u;
        goto label_1c1c80;
    }
    ctx->pc = 0x1C1C78u;
    {
        const bool branch_taken_0x1c1c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C78u;
        // 0x1c1c7c: 0xa24202f6  sb          $v0, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1c78) {
            ctx->pc = 0x1C1D0Cu;
            goto label_1c1d0c;
        }
    }
    ctx->pc = 0x1C1C80u;
label_1c1c80:
    // 0x1c1c80: 0x28c20a00  slti        $v0, $a2, 0xA00
    ctx->pc = 0x1c1c80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2560) ? 1 : 0);
label_1c1c84:
    // 0x1c1c84: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1c1c88:
    if (ctx->pc == 0x1C1C88u) {
        ctx->pc = 0x1C1C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C84u;
        // 0x1c1c88: 0x240209c2  addiu       $v0, $zero, 0x9C2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2498));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1C8Cu;
        goto label_1c1c8c;
    }
    ctx->pc = 0x1C1C84u;
    {
        const bool branch_taken_0x1c1c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C84u;
        // 0x1c1c88: 0x240209c2  addiu       $v0, $zero, 0x9C2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2498));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1c84) {
            ctx->pc = 0x1C1CBCu;
            goto label_1c1cbc;
        }
    }
    ctx->pc = 0x1C1C8Cu;
label_1c1c8c:
    // 0x1c1c8c: 0x54c20009  bnel        $a2, $v0, . + 4 + (0x9 << 2)
label_1c1c90:
    if (ctx->pc == 0x1C1C90u) {
        ctx->pc = 0x1C1C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C8Cu;
        // 0x1c1c90: 0x924202f6  lbu         $v0, 0x2F6($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1C94u;
        goto label_1c1c94;
    }
    ctx->pc = 0x1C1C8Cu;
    {
        const bool branch_taken_0x1c1c8c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c1c8c) {
            ctx->pc = 0x1C1C90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1C8Cu;
            // 0x1c1c90: 0x924202f6  lbu         $v0, 0x2F6($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1CB4u;
            goto label_1c1cb4;
        }
    }
    ctx->pc = 0x1C1C94u;
label_1c1c94:
    // 0x1c1c94: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1c1c94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_1c1c98:
    // 0x1c1c98: 0x8e4500f0  lw          $a1, 0xF0($s2)
    ctx->pc = 0x1c1c98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_1c1c9c:
    // 0x1c1c9c: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x1c1c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
label_1c1ca0:
    // 0x1c1ca0: 0x240603d2  addiu       $a2, $zero, 0x3D2
    ctx->pc = 0x1c1ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 978));
label_1c1ca4:
    // 0x1c1ca4: 0xc0a48fa  jal         func_2923E8
label_1c1ca8:
    if (ctx->pc == 0x1C1CA8u) {
        ctx->pc = 0x1C1CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1CA4u;
        // 0x1c1ca8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1CACu;
        goto label_1c1cac;
    }
    ctx->pc = 0x1C1CA4u;
    SET_GPR_U32(ctx, 31, 0x1C1CACu);
    ctx->pc = 0x1C1CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1CA4u;
    // 0x1c1ca8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2923E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2923E8u, 0x1C1CA4u, 0x1C1CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1CACu;
label_1c1cac:
    // 0x1c1cac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c1cacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c1cb0:
    // 0x1c1cb0: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x1c1cb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
label_1c1cb4:
    // 0x1c1cb4: 0x10000014  b           . + 4 + (0x14 << 2)
label_1c1cb8:
    if (ctx->pc == 0x1C1CB8u) {
        ctx->pc = 0x1C1CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1CB4u;
        // 0x1c1cb8: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1CBCu;
        goto label_1c1cbc;
    }
    ctx->pc = 0x1C1CB4u;
    {
        const bool branch_taken_0x1c1cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1CB4u;
        // 0x1c1cb8: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1cb4) {
            ctx->pc = 0x1C1D08u;
            goto label_1c1d08;
        }
    }
    ctx->pc = 0x1C1CBCu;
label_1c1cbc:
    // 0x1c1cbc: 0x28c20b00  slti        $v0, $a2, 0xB00
    ctx->pc = 0x1c1cbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2816) ? 1 : 0);
label_1c1cc0:
    // 0x1c1cc0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1c1cc4:
    if (ctx->pc == 0x1C1CC4u) {
        ctx->pc = 0x1C1CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1CC0u;
        // 0x1c1cc4: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1CC8u;
        goto label_1c1cc8;
    }
    ctx->pc = 0x1C1CC0u;
    {
        const bool branch_taken_0x1c1cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1CC0u;
        // 0x1c1cc4: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1cc0) {
            ctx->pc = 0x1C1D0Cu;
            goto label_1c1d0c;
        }
    }
    ctx->pc = 0x1C1CC8u;
label_1c1cc8:
    // 0x1c1cc8: 0x24c5f600  addiu       $a1, $a2, -0xA00
    ctx->pc = 0x1c1cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964736));
label_1c1ccc:
    // 0x1c1ccc: 0xc07ebd6  jal         func_1FAF58
label_1c1cd0:
    if (ctx->pc == 0x1C1CD0u) {
        ctx->pc = 0x1C1CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1CCCu;
        // 0x1c1cd0: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1CD4u;
        goto label_1c1cd4;
    }
    ctx->pc = 0x1C1CCCu;
    SET_GPR_U32(ctx, 31, 0x1C1CD4u);
    ctx->pc = 0x1C1CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1CCCu;
    // 0x1c1cd0: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x1C1CCCu, 0x1C1CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1CD4u;
label_1c1cd4:
    // 0x1c1cd4: 0x440000c  bltz        $v0, . + 4 + (0xC << 2)
label_1c1cd8:
    if (ctx->pc == 0x1C1CD8u) {
        ctx->pc = 0x1C1CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1CD4u;
        // 0x1c1cd8: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1CDCu;
        goto label_1c1cdc;
    }
    ctx->pc = 0x1C1CD4u;
    {
        const bool branch_taken_0x1c1cd4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1C1CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1CD4u;
        // 0x1c1cd8: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1cd4) {
            ctx->pc = 0x1C1D08u;
            goto label_1c1d08;
        }
    }
    ctx->pc = 0x1C1CDCu;
label_1c1cdc:
    // 0x1c1cdc: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1c1cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_1c1ce0:
    // 0x1c1ce0: 0x8e4500f0  lw          $a1, 0xF0($s2)
    ctx->pc = 0x1c1ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_1c1ce4:
    // 0x1c1ce4: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x1c1ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
label_1c1ce8:
    // 0x1c1ce8: 0x240603d7  addiu       $a2, $zero, 0x3D7
    ctx->pc = 0x1c1ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 983));
label_1c1cec:
    // 0x1c1cec: 0xc0a48fa  jal         func_2923E8
label_1c1cf0:
    if (ctx->pc == 0x1C1CF0u) {
        ctx->pc = 0x1C1CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1CECu;
        // 0x1c1cf0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1CF4u;
        goto label_1c1cf4;
    }
    ctx->pc = 0x1C1CECu;
    SET_GPR_U32(ctx, 31, 0x1C1CF4u);
    ctx->pc = 0x1C1CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1CECu;
    // 0x1c1cf0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2923E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2923E8u, 0x1C1CECu, 0x1C1CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1CF4u;
label_1c1cf4:
    // 0x1c1cf4: 0x924302f6  lbu         $v1, 0x2F6($s2)
    ctx->pc = 0x1c1cf4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
label_1c1cf8:
    // 0x1c1cf8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c1cf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c1cfc:
    // 0x1c1cfc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c1cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1c1d00:
    // 0x1c1d00: 0x10000002  b           . + 4 + (0x2 << 2)
label_1c1d04:
    if (ctx->pc == 0x1C1D04u) {
        ctx->pc = 0x1C1D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D00u;
        // 0x1c1d04: 0xa24302f6  sb          $v1, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1D08u;
        goto label_1c1d08;
    }
    ctx->pc = 0x1C1D00u;
    {
        const bool branch_taken_0x1c1d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D00u;
        // 0x1c1d04: 0xa24302f6  sb          $v1, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1d00) {
            ctx->pc = 0x1C1D0Cu;
            goto label_1c1d0c;
        }
    }
    ctx->pc = 0x1C1D08u;
label_1c1d08:
    // 0x1c1d08: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x1c1d08u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_1c1d0c:
    // 0x1c1d0c: 0x120000e3  beqz        $s0, . + 4 + (0xE3 << 2)
label_1c1d10:
    if (ctx->pc == 0x1C1D10u) {
        ctx->pc = 0x1C1D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D0Cu;
        // 0x1c1d10: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1D14u;
        goto label_1c1d14;
    }
    ctx->pc = 0x1C1D0Cu;
    {
        const bool branch_taken_0x1c1d0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D0Cu;
        // 0x1c1d10: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1d0c) {
            ctx->pc = 0x1C209Cu;
            goto label_1c209c;
        }
    }
    ctx->pc = 0x1C1D14u;
label_1c1d14:
    // 0x1c1d14: 0x92420676  lbu         $v0, 0x676($s2)
    ctx->pc = 0x1c1d14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1654)));
label_1c1d18:
    // 0x1c1d18: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c1d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1c1d1c:
    // 0x1c1d1c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_1c1d20:
    if (ctx->pc == 0x1C1D20u) {
        ctx->pc = 0x1C1D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D1Cu;
        // 0x1c1d20: 0x92020676  lbu         $v0, 0x676($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1654)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1D24u;
        goto label_1c1d24;
    }
    ctx->pc = 0x1C1D1Cu;
    {
        const bool branch_taken_0x1c1d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C1D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D1Cu;
        // 0x1c1d20: 0x92020676  lbu         $v0, 0x676($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1654)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1d1c) {
            ctx->pc = 0x1C1D2Cu;
            goto label_1c1d2c;
        }
    }
    ctx->pc = 0x1C1D24u;
label_1c1d24:
    // 0x1c1d24: 0x10000002  b           . + 4 + (0x2 << 2)
label_1c1d28:
    if (ctx->pc == 0x1C1D28u) {
        ctx->pc = 0x1C1D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D24u;
        // 0x1c1d28: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1D2Cu;
        goto label_1c1d2c;
    }
    ctx->pc = 0x1C1D24u;
    {
        const bool branch_taken_0x1c1d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D24u;
        // 0x1c1d28: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1d24) {
            ctx->pc = 0x1C1D30u;
            goto label_1c1d30;
        }
    }
    ctx->pc = 0x1C1D2Cu;
label_1c1d2c:
    // 0x1c1d2c: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x1c1d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
label_1c1d30:
    // 0x1c1d30: 0xa2020676  sb          $v0, 0x676($s0)
    ctx->pc = 0x1c1d30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1654), (uint8_t)GPR_U32(ctx, 2));
label_1c1d34:
    // 0x1c1d34: 0x92420676  lbu         $v0, 0x676($s2)
    ctx->pc = 0x1c1d34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1654)));
label_1c1d38:
    // 0x1c1d38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c1d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c1d3c:
    // 0x1c1d3c: 0x210bb  dsra        $v0, $v0, 2
    ctx->pc = 0x1c1d3cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 2);
label_1c1d40:
    // 0x1c1d40: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c1d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1c1d44:
    // 0x1c1d44: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_1c1d48:
    if (ctx->pc == 0x1C1D48u) {
        ctx->pc = 0x1C1D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D44u;
        // 0x1c1d48: 0x92020676  lbu         $v0, 0x676($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1654)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1D4Cu;
        goto label_1c1d4c;
    }
    ctx->pc = 0x1C1D44u;
    {
        const bool branch_taken_0x1c1d44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C1D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D44u;
        // 0x1c1d48: 0x92020676  lbu         $v0, 0x676($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1654)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1d44) {
            ctx->pc = 0x1C1D58u;
            goto label_1c1d58;
        }
    }
    ctx->pc = 0x1C1D4Cu;
label_1c1d4c:
    // 0x1c1d4c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1c1d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_1c1d50:
    // 0x1c1d50: 0x100000d2  b           . + 4 + (0xD2 << 2)
label_1c1d54:
    if (ctx->pc == 0x1C1D54u) {
        ctx->pc = 0x1C1D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D50u;
        // 0x1c1d54: 0xa2020676  sb          $v0, 0x676($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1654), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1D58u;
        goto label_1c1d58;
    }
    ctx->pc = 0x1C1D50u;
    {
        const bool branch_taken_0x1c1d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D50u;
        // 0x1c1d54: 0xa2020676  sb          $v0, 0x676($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1654), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1d50) {
            ctx->pc = 0x1C209Cu;
            goto label_1c209c;
        }
    }
    ctx->pc = 0x1C1D58u;
label_1c1d58:
    // 0x1c1d58: 0x304200fb  andi        $v0, $v0, 0xFB
    ctx->pc = 0x1c1d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)251);
label_1c1d5c:
    // 0x1c1d5c: 0x100000cf  b           . + 4 + (0xCF << 2)
label_1c1d60:
    if (ctx->pc == 0x1C1D60u) {
        ctx->pc = 0x1C1D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D5Cu;
        // 0x1c1d60: 0xa2020676  sb          $v0, 0x676($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1654), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1D64u;
        goto label_1c1d64;
    }
    ctx->pc = 0x1C1D5Cu;
    {
        const bool branch_taken_0x1c1d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D5Cu;
        // 0x1c1d60: 0xa2020676  sb          $v0, 0x676($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1654), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1d5c) {
            ctx->pc = 0x1C209Cu;
            goto label_1c209c;
        }
    }
    ctx->pc = 0x1C1D64u;
label_1c1d64:
    // 0x1c1d64: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1c1d64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c1d68:
    // 0x1c1d68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c1d6c:
    // 0x1c1d6c: 0xa2500660  sb          $s0, 0x660($s2)
    ctx->pc = 0x1c1d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1632), (uint8_t)GPR_U32(ctx, 16));
label_1c1d70:
    // 0x1c1d70: 0xc06dda0  jal         func_1B7680
label_1c1d74:
    if (ctx->pc == 0x1C1D74u) {
        ctx->pc = 0x1C1D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D70u;
        // 0x1c1d74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1D78u;
        goto label_1c1d78;
    }
    ctx->pc = 0x1C1D70u;
    SET_GPR_U32(ctx, 31, 0x1C1D78u);
    ctx->pc = 0x1C1D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1D70u;
    // 0x1c1d74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7680u, 0x1C1D70u, 0x1C1D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1D78u;
label_1c1d78:
    // 0x1c1d78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c1d78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1c1d7c:
    // 0x1c1d7c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c1d7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c1d80:
    // 0x1c1d80: 0xc640024c  lwc1        $f0, 0x24C($s2)
    ctx->pc = 0x1c1d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c1d84:
    // 0x1c1d84: 0xa2500675  sb          $s0, 0x675($s2)
    ctx->pc = 0x1c1d84u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1653), (uint8_t)GPR_U32(ctx, 16));
label_1c1d88:
    // 0x1c1d88: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c1d88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c1d8c:
    // 0x1c1d8c: 0x0  nop
    ctx->pc = 0x1c1d8cu;
    // NOP
label_1c1d90:
    // 0x1c1d90: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1c1d94:
    if (ctx->pc == 0x1C1D94u) {
        ctx->pc = 0x1C1D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D90u;
        // 0x1c1d94: 0xe641024c  swc1        $f1, 0x24C($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1D98u;
        goto label_1c1d98;
    }
    ctx->pc = 0x1C1D90u;
    {
        const bool branch_taken_0x1c1d90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c1d90) {
            ctx->pc = 0x1C1D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1D90u;
            // 0x1c1d94: 0xe641024c  swc1        $f1, 0x24C($s2) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1D98u;
            goto label_1c1d98;
        }
    }
    ctx->pc = 0x1C1D98u;
label_1c1d98:
    // 0x1c1d98: 0xc640024c  lwc1        $f0, 0x24C($s2)
    ctx->pc = 0x1c1d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c1d9c:
    // 0x1c1d9c: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1c1d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_1c1da0:
    // 0x1c1da0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1c1da0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1c1da4:
    // 0x1c1da4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c1da4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c1da8:
    // 0x1c1da8: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x1c1da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_1c1dac:
    // 0x1c1dac: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1c1dacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1c1db0:
    // 0x1c1db0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c1db0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c1db4:
    // 0x1c1db4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c1db4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1c1db8:
    // 0x1c1db8: 0x8e430250  lw          $v1, 0x250($s2)
    ctx->pc = 0x1c1db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
label_1c1dbc:
    // 0x1c1dbc: 0x34620010  ori         $v0, $v1, 0x10
    ctx->pc = 0x1c1dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_1c1dc0:
    // 0x1c1dc0: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1c1dc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c1dc4:
    // 0x1c1dc4: 0xae420250  sw          $v0, 0x250($s2)
    ctx->pc = 0x1c1dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 2));
label_1c1dc8:
    // 0x1c1dc8: 0x450000b4  bc1f        . + 4 + (0xB4 << 2)
label_1c1dcc:
    if (ctx->pc == 0x1C1DCCu) {
        ctx->pc = 0x1C1DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1DC8u;
        // 0x1c1dcc: 0xe640024c  swc1        $f0, 0x24C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1DD0u;
        goto label_1c1dd0;
    }
    ctx->pc = 0x1C1DC8u;
    {
        const bool branch_taken_0x1c1dc8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C1DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1DC8u;
        // 0x1c1dcc: 0xe640024c  swc1        $f0, 0x24C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1dc8) {
            ctx->pc = 0x1C209Cu;
            goto label_1c209c;
        }
    }
    ctx->pc = 0x1C1DD0u;
label_1c1dd0:
    // 0x1c1dd0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1c1dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1c1dd4:
    // 0x1c1dd4: 0x34630012  ori         $v1, $v1, 0x12
    ctx->pc = 0x1c1dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)18);
label_1c1dd8:
    // 0x1c1dd8: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x1c1dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
label_1c1ddc:
    // 0x1c1ddc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c1ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c1de0:
    // 0x1c1de0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1c1de0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1c1de4:
    // 0x1c1de4: 0xa24402f4  sb          $a0, 0x2F4($s2)
    ctx->pc = 0x1c1de4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 4));
label_1c1de8:
    // 0x1c1de8: 0xae430250  sw          $v1, 0x250($s2)
    ctx->pc = 0x1c1de8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 3));
label_1c1dec:
    // 0x1c1dec: 0xae40024c  sw          $zero, 0x24C($s2)
    ctx->pc = 0x1c1decu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 588), GPR_U32(ctx, 0));
label_1c1df0:
    // 0x1c1df0: 0xa24002f5  sb          $zero, 0x2F5($s2)
    ctx->pc = 0x1c1df0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 0));
label_1c1df4:
    // 0x1c1df4: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x1c1df4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
label_1c1df8:
    // 0x1c1df8: 0x100000a8  b           . + 4 + (0xA8 << 2)
label_1c1dfc:
    if (ctx->pc == 0x1C1DFCu) {
        ctx->pc = 0x1C1DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1DF8u;
        // 0x1c1dfc: 0xa24002f7  sb          $zero, 0x2F7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1E00u;
        goto label_1c1e00;
    }
    ctx->pc = 0x1C1DF8u;
    {
        const bool branch_taken_0x1c1df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1DF8u;
        // 0x1c1dfc: 0xa24002f7  sb          $zero, 0x2F7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1df8) {
            ctx->pc = 0x1C209Cu;
            goto label_1c209c;
        }
    }
    ctx->pc = 0x1C1E00u;
label_1c1e00:
    // 0x1c1e00: 0x8e420560  lw          $v0, 0x560($s2)
    ctx->pc = 0x1c1e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1376)));
label_1c1e04:
    // 0x1c1e04: 0xae400678  sw          $zero, 0x678($s2)
    ctx->pc = 0x1c1e04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1656), GPR_U32(ctx, 0));
label_1c1e08:
    // 0x1c1e08: 0x28420940  slti        $v0, $v0, 0x940
    ctx->pc = 0x1c1e08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2368) ? 1 : 0);
label_1c1e0c:
    // 0x1c1e0c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1c1e10:
    if (ctx->pc == 0x1C1E10u) {
        ctx->pc = 0x1C1E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E0Cu;
        // 0x1c1e10: 0x240403c6  addiu       $a0, $zero, 0x3C6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 966));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1E14u;
        goto label_1c1e14;
    }
    ctx->pc = 0x1C1E0Cu;
    {
        const bool branch_taken_0x1c1e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E0Cu;
        // 0x1c1e10: 0x240403c6  addiu       $a0, $zero, 0x3C6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 966));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1e0c) {
            ctx->pc = 0x1C1E18u;
            goto label_1c1e18;
        }
    }
    ctx->pc = 0x1C1E14u;
label_1c1e14:
    // 0x1c1e14: 0x240403c7  addiu       $a0, $zero, 0x3C7
    ctx->pc = 0x1c1e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 967));
label_1c1e18:
    // 0x1c1e18: 0xc0c3ea6  jal         func_30FA98
label_1c1e1c:
    if (ctx->pc == 0x1C1E1Cu) {
        ctx->pc = 0x1C1E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E18u;
        // 0x1c1e1c: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1E20u;
        goto label_1c1e20;
    }
    ctx->pc = 0x1C1E18u;
    SET_GPR_U32(ctx, 31, 0x1C1E20u);
    ctx->pc = 0x1C1E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1E18u;
    // 0x1c1e1c: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x1C1E18u, 0x1C1E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1E20u;
label_1c1e20:
    // 0x1c1e20: 0xae420678  sw          $v0, 0x678($s2)
    ctx->pc = 0x1c1e20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1656), GPR_U32(ctx, 2));
label_1c1e24:
    // 0x1c1e24: 0x8e450678  lw          $a1, 0x678($s2)
    ctx->pc = 0x1c1e24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1656)));
label_1c1e28:
    // 0x1c1e28: 0x50a0002e  beql        $a1, $zero, . + 4 + (0x2E << 2)
label_1c1e2c:
    if (ctx->pc == 0x1C1E2Cu) {
        ctx->pc = 0x1C1E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E28u;
        // 0x1c1e2c: 0x924202f6  lbu         $v0, 0x2F6($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1E30u;
        goto label_1c1e30;
    }
    ctx->pc = 0x1C1E28u;
    {
        const bool branch_taken_0x1c1e28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1e28) {
            ctx->pc = 0x1C1E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1E28u;
            // 0x1c1e2c: 0x924202f6  lbu         $v0, 0x2F6($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1EE4u;
            goto label_1c1ee4;
        }
    }
    ctx->pc = 0x1C1E30u;
label_1c1e30:
    // 0x1c1e30: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x1c1e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_1c1e34:
    // 0x1c1e34: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x1c1e34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_1c1e38:
    // 0x1c1e38: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x1c1e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_1c1e3c:
    // 0x1c1e3c: 0x40f809  jalr        $v0
label_1c1e40:
    if (ctx->pc == 0x1C1E40u) {
        ctx->pc = 0x1C1E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E3Cu;
        // 0x1c1e40: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1E44u;
        goto label_1c1e44;
    }
    ctx->pc = 0x1C1E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C1E44u);
        ctx->pc = 0x1C1E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E3Cu;
        // 0x1c1e40: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1E3Cu, 0x1C1E44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C1E44u;
label_1c1e44:
    // 0x1c1e44: 0x8e440678  lw          $a0, 0x678($s2)
    ctx->pc = 0x1c1e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1656)));
label_1c1e48:
    // 0x1c1e48: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x1c1e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_1c1e4c:
    // 0x1c1e4c: 0x8c8205b8  lw          $v0, 0x5B8($a0)
    ctx->pc = 0x1c1e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1464)));
label_1c1e50:
    // 0x1c1e50: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c1e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1c1e54:
    // 0x1c1e54: 0xac8205b8  sw          $v0, 0x5B8($a0)
    ctx->pc = 0x1c1e54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1464), GPR_U32(ctx, 2));
label_1c1e58:
    // 0x1c1e58: 0x8e510678  lw          $s1, 0x678($s2)
    ctx->pc = 0x1c1e58u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1656)));
label_1c1e5c:
    // 0x1c1e5c: 0x8e430214  lw          $v1, 0x214($s2)
    ctx->pc = 0x1c1e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
label_1c1e60:
    // 0x1c1e60: 0x8e300214  lw          $s0, 0x214($s1)
    ctx->pc = 0x1c1e60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_1c1e64:
    // 0x1c1e64: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1c1e64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1c1e68:
    // 0x1c1e68: 0x86050070  lh          $a1, 0x70($s0)
    ctx->pc = 0x1c1e68u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 112)));
label_1c1e6c:
    // 0x1c1e6c: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x1c1e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1c1e70:
    // 0x1c1e70: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x1c1e70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1c1e74:
    // 0x1c1e74: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x1c1e74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_1c1e78:
    // 0x1c1e78: 0x40f809  jalr        $v0
label_1c1e7c:
    if (ctx->pc == 0x1C1E7Cu) {
        ctx->pc = 0x1C1E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E78u;
        // 0x1c1e7c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1E80u;
        goto label_1c1e80;
    }
    ctx->pc = 0x1C1E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C1E80u);
        ctx->pc = 0x1C1E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E78u;
        // 0x1c1e7c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1E78u, 0x1C1E80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C1E80u;
label_1c1e80:
    // 0x1c1e80: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1c1e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1c1e84:
    // 0x1c1e84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c1e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c1e88:
    // 0x1c1e88: 0x60f809  jalr        $v1
label_1c1e8c:
    if (ctx->pc == 0x1C1E8Cu) {
        ctx->pc = 0x1C1E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E88u;
        // 0x1c1e8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1E90u;
        goto label_1c1e90;
    }
    ctx->pc = 0x1C1E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C1E90u);
        ctx->pc = 0x1C1E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E88u;
        // 0x1c1e8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1E88u, 0x1C1E90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C1E90u;
label_1c1e90:
    // 0x1c1e90: 0x8e420560  lw          $v0, 0x560($s2)
    ctx->pc = 0x1c1e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1376)));
label_1c1e94:
    // 0x1c1e94: 0x28420940  slti        $v0, $v0, 0x940
    ctx->pc = 0x1c1e94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2368) ? 1 : 0);
label_1c1e98:
    // 0x1c1e98: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_1c1e9c:
    if (ctx->pc == 0x1C1E9Cu) {
        ctx->pc = 0x1C1E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E98u;
        // 0x1c1e9c: 0x8e420678  lw          $v0, 0x678($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1656)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1EA0u;
        goto label_1c1ea0;
    }
    ctx->pc = 0x1C1E98u;
    {
        const bool branch_taken_0x1c1e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1e98) {
            ctx->pc = 0x1C1E9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1E98u;
            // 0x1c1e9c: 0x8e420678  lw          $v0, 0x678($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1656)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1ECCu;
            goto label_1c1ecc;
        }
    }
    ctx->pc = 0x1C1EA0u;
label_1c1ea0:
    // 0x1c1ea0: 0x8e430678  lw          $v1, 0x678($s2)
    ctx->pc = 0x1c1ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1656)));
label_1c1ea4:
    // 0x1c1ea4: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x1c1ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
label_1c1ea8:
    // 0x1c1ea8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1c1ea8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1c1eac:
    // 0x1c1eac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c1eacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c1eb0:
    // 0x1c1eb0: 0x3c01bf49  lui         $at, 0xBF49
    ctx->pc = 0x1c1eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48969 << 16));
label_1c1eb4:
    // 0x1c1eb4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1c1eb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1c1eb8:
    // 0x1c1eb8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c1eb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c1ebc:
    // 0x1c1ebc: 0xe4600100  swc1        $f0, 0x100($v1)
    ctx->pc = 0x1c1ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 256), bits); }
label_1c1ec0:
    // 0x1c1ec0: 0x8e420678  lw          $v0, 0x678($s2)
    ctx->pc = 0x1c1ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1656)));
label_1c1ec4:
    // 0x1c1ec4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1c1ec8:
    if (ctx->pc == 0x1C1EC8u) {
        ctx->pc = 0x1C1EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1EC4u;
        // 0x1c1ec8: 0xe4410104  swc1        $f1, 0x104($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1ECCu;
        goto label_1c1ecc;
    }
    ctx->pc = 0x1C1EC4u;
    {
        const bool branch_taken_0x1c1ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1EC4u;
        // 0x1c1ec8: 0xe4410104  swc1        $f1, 0x104($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1ec4) {
            ctx->pc = 0x1C1EE0u;
            goto label_1c1ee0;
        }
    }
    ctx->pc = 0x1C1ECCu;
label_1c1ecc:
    // 0x1c1ecc: 0x3c013fb2  lui         $at, 0x3FB2
    ctx->pc = 0x1c1eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16306 << 16));
label_1c1ed0:
    // 0x1c1ed0: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x1c1ed0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
label_1c1ed4:
    // 0x1c1ed4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c1ed4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c1ed8:
    // 0x1c1ed8: 0x0  nop
    ctx->pc = 0x1c1ed8u;
    // NOP
label_1c1edc:
    // 0x1c1edc: 0xe4400100  swc1        $f0, 0x100($v0)
    ctx->pc = 0x1c1edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
label_1c1ee0:
    // 0x1c1ee0: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x1c1ee0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
label_1c1ee4:
    // 0x1c1ee4: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1c1ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1c1ee8:
    // 0x1c1ee8: 0xa6430568  sh          $v1, 0x568($s2)
    ctx->pc = 0x1c1ee8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1384), (uint16_t)GPR_U32(ctx, 3));
label_1c1eec:
    // 0x1c1eec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c1eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1c1ef0:
    // 0x1c1ef0: 0x1000006a  b           . + 4 + (0x6A << 2)
label_1c1ef4:
    if (ctx->pc == 0x1C1EF4u) {
        ctx->pc = 0x1C1EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1EF0u;
        // 0x1c1ef4: 0xa24202f6  sb          $v0, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1EF8u;
        goto label_1c1ef8;
    }
    ctx->pc = 0x1C1EF0u;
    {
        const bool branch_taken_0x1c1ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1EF0u;
        // 0x1c1ef4: 0xa24202f6  sb          $v0, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1ef0) {
            ctx->pc = 0x1C209Cu;
            goto label_1c209c;
        }
    }
    ctx->pc = 0x1C1EF8u;
label_1c1ef8:
    // 0x1c1ef8: 0x86420568  lh          $v0, 0x568($s2)
    ctx->pc = 0x1c1ef8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1384)));
label_1c1efc:
    // 0x1c1efc: 0x4430021  bgezl       $v0, . + 4 + (0x21 << 2)
label_1c1f00:
    if (ctx->pc == 0x1C1F00u) {
        ctx->pc = 0x1C1F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1EFCu;
        // 0x1c1f00: 0x96420568  lhu         $v0, 0x568($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1F04u;
        goto label_1c1f04;
    }
    ctx->pc = 0x1C1EFCu;
    {
        const bool branch_taken_0x1c1efc = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x1c1efc) {
            ctx->pc = 0x1C1F00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1EFCu;
            // 0x1c1f00: 0x96420568  lhu         $v0, 0x568($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1F84u;
            goto label_1c1f84;
        }
    }
    ctx->pc = 0x1C1F04u;
label_1c1f04:
    // 0x1c1f04: 0x8e500560  lw          $s0, 0x560($s2)
    ctx->pc = 0x1c1f04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1376)));
label_1c1f08:
    // 0x1c1f08: 0x2a020940  slti        $v0, $s0, 0x940
    ctx->pc = 0x1c1f08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2368) ? 1 : 0);
label_1c1f0c:
    // 0x1c1f0c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_1c1f10:
    if (ctx->pc == 0x1C1F10u) {
        ctx->pc = 0x1C1F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1F0Cu;
        // 0x1c1f10: 0x2610f600  addiu       $s0, $s0, -0xA00 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1F14u;
        goto label_1c1f14;
    }
    ctx->pc = 0x1C1F0Cu;
    {
        const bool branch_taken_0x1c1f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1f0c) {
            ctx->pc = 0x1C1F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1F0Cu;
            // 0x1c1f10: 0x2610f600  addiu       $s0, $s0, -0xA00 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964736));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1F48u;
            goto label_1c1f48;
        }
    }
    ctx->pc = 0x1C1F14u;
label_1c1f14:
    // 0x1c1f14: 0x2610f700  addiu       $s0, $s0, -0x900
    ctx->pc = 0x1c1f14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964992));
label_1c1f18:
    // 0x1c1f18: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1c1f18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_1c1f1c:
    // 0x1c1f1c: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x1c1f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
label_1c1f20:
    // 0x1c1f20: 0xc07ee2e  jal         func_1FB8B8
label_1c1f24:
    if (ctx->pc == 0x1C1F24u) {
        ctx->pc = 0x1C1F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1F20u;
        // 0x1c1f24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1F28u;
        goto label_1c1f28;
    }
    ctx->pc = 0x1C1F20u;
    SET_GPR_U32(ctx, 31, 0x1C1F28u);
    ctx->pc = 0x1C1F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1F20u;
    // 0x1c1f24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB8B8u, 0x1C1F20u, 0x1C1F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1F28u;
label_1c1f28:
    // 0x1c1f28: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1c1f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_1c1f2c:
    // 0x1c1f2c: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x1c1f2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_1c1f30:
    // 0x1c1f30: 0x8c44d6e8  lw          $a0, -0x2918($v0)
    ctx->pc = 0x1c1f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956776)));
label_1c1f34:
    // 0x1c1f34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c1f34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1f38:
    // 0x1c1f38: 0xc051a5e  jal         func_146978
label_1c1f3c:
    if (ctx->pc == 0x1C1F3Cu) {
        ctx->pc = 0x1C1F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1F38u;
        // 0x1c1f3c: 0x24841cb0  addiu       $a0, $a0, 0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1F40u;
        goto label_1c1f40;
    }
    ctx->pc = 0x1C1F38u;
    SET_GPR_U32(ctx, 31, 0x1C1F40u);
    ctx->pc = 0x1C1F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1F38u;
    // 0x1c1f3c: 0x24841cb0  addiu       $a0, $a0, 0x1CB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146978u, 0x1C1F38u, 0x1C1F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1F40u;
label_1c1f40:
    // 0x1c1f40: 0x1000000d  b           . + 4 + (0xD << 2)
label_1c1f44:
    if (ctx->pc == 0x1C1F44u) {
        ctx->pc = 0x1C1F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1F40u;
        // 0x1c1f44: 0x924202f6  lbu         $v0, 0x2F6($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1F48u;
        goto label_1c1f48;
    }
    ctx->pc = 0x1C1F40u;
    {
        const bool branch_taken_0x1c1f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1F40u;
        // 0x1c1f44: 0x924202f6  lbu         $v0, 0x2F6($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1f40) {
            ctx->pc = 0x1C1F78u;
            goto label_1c1f78;
        }
    }
    ctx->pc = 0x1C1F48u;
label_1c1f48:
    // 0x1c1f48: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1c1f48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1c1f4c:
    // 0x1c1f4c: 0x2484ec58  addiu       $a0, $a0, -0x13A8
    ctx->pc = 0x1c1f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962264));
label_1c1f50:
    // 0x1c1f50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c1f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1f54:
    // 0x1c1f54: 0xc0b26de  jal         func_2C9B78
label_1c1f58:
    if (ctx->pc == 0x1C1F58u) {
        ctx->pc = 0x1C1F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1F54u;
        // 0x1c1f58: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1F5Cu;
        goto label_1c1f5c;
    }
    ctx->pc = 0x1C1F54u;
    SET_GPR_U32(ctx, 31, 0x1C1F5Cu);
    ctx->pc = 0x1C1F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1F54u;
    // 0x1c1f58: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9B78u, 0x1C1F54u, 0x1C1F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1F5Cu;
label_1c1f5c:
    // 0x1c1f5c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1c1f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_1c1f60:
    // 0x1c1f60: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x1c1f60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_1c1f64:
    // 0x1c1f64: 0x8c44d6e8  lw          $a0, -0x2918($v0)
    ctx->pc = 0x1c1f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956776)));
label_1c1f68:
    // 0x1c1f68: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c1f68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c1f6c:
    // 0x1c1f6c: 0xc051a5e  jal         func_146978
label_1c1f70:
    if (ctx->pc == 0x1C1F70u) {
        ctx->pc = 0x1C1F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1F6Cu;
        // 0x1c1f70: 0x24841cb0  addiu       $a0, $a0, 0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1F74u;
        goto label_1c1f74;
    }
    ctx->pc = 0x1C1F6Cu;
    SET_GPR_U32(ctx, 31, 0x1C1F74u);
    ctx->pc = 0x1C1F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1F6Cu;
    // 0x1c1f70: 0x24841cb0  addiu       $a0, $a0, 0x1CB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146978u, 0x1C1F6Cu, 0x1C1F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1F74u;
label_1c1f74:
    // 0x1c1f74: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x1c1f74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
label_1c1f78:
    // 0x1c1f78: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c1f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1c1f7c:
    // 0x1c1f7c: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x1c1f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_1c1f80:
    // 0x1c1f80: 0x96420568  lhu         $v0, 0x568($s2)
    ctx->pc = 0x1c1f80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1384)));
label_1c1f84:
    // 0x1c1f84: 0x8e430678  lw          $v1, 0x678($s2)
    ctx->pc = 0x1c1f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1656)));
label_1c1f88:
    // 0x1c1f88: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c1f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1c1f8c:
    // 0x1c1f8c: 0x10600043  beqz        $v1, . + 4 + (0x43 << 2)
label_1c1f90:
    if (ctx->pc == 0x1C1F90u) {
        ctx->pc = 0x1C1F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1F8Cu;
        // 0x1c1f90: 0xa6420568  sh          $v0, 0x568($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 1384), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1F94u;
        goto label_1c1f94;
    }
    ctx->pc = 0x1C1F8Cu;
    {
        const bool branch_taken_0x1c1f8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1F8Cu;
        // 0x1c1f90: 0xa6420568  sh          $v0, 0x568($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 1384), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1f8c) {
            ctx->pc = 0x1C209Cu;
            goto label_1c209c;
        }
    }
    ctx->pc = 0x1C1F94u;
label_1c1f94:
    // 0x1c1f94: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x1c1f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
label_1c1f98:
    // 0x1c1f98: 0x3c013e38  lui         $at, 0x3E38
    ctx->pc = 0x1c1f98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15928 << 16));
label_1c1f9c:
    // 0x1c1f9c: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1c1f9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_1c1fa0:
    // 0x1c1fa0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c1fa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c1fa4:
    // 0x1c1fa4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1c1fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c1fa8:
    // 0x1c1fa8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c1fa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1c1fac:
    // 0x1c1fac: 0x1000003b  b           . + 4 + (0x3B << 2)
label_1c1fb0:
    if (ctx->pc == 0x1C1FB0u) {
        ctx->pc = 0x1C1FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1FACu;
        // 0x1c1fb0: 0xe4400004  swc1        $f0, 0x4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1FB4u;
        goto label_1c1fb4;
    }
    ctx->pc = 0x1C1FACu;
    {
        const bool branch_taken_0x1c1fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1FACu;
        // 0x1c1fb0: 0xe4400004  swc1        $f0, 0x4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1fac) {
            ctx->pc = 0x1C209Cu;
            goto label_1c209c;
        }
    }
    ctx->pc = 0x1C1FB4u;
label_1c1fb4:
    // 0x1c1fb4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1c1fb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c1fb8:
    // 0x1c1fb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c1fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c1fbc:
    // 0x1c1fbc: 0xa2500660  sb          $s0, 0x660($s2)
    ctx->pc = 0x1c1fbcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1632), (uint8_t)GPR_U32(ctx, 16));
label_1c1fc0:
    // 0x1c1fc0: 0xc06dda0  jal         func_1B7680
label_1c1fc4:
    if (ctx->pc == 0x1C1FC4u) {
        ctx->pc = 0x1C1FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1FC0u;
        // 0x1c1fc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1FC8u;
        goto label_1c1fc8;
    }
    ctx->pc = 0x1C1FC0u;
    SET_GPR_U32(ctx, 31, 0x1C1FC8u);
    ctx->pc = 0x1C1FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1FC0u;
    // 0x1c1fc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7680u, 0x1C1FC0u, 0x1C1FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1FC8u;
label_1c1fc8:
    // 0x1c1fc8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c1fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1c1fcc:
    // 0x1c1fcc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c1fccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c1fd0:
    // 0x1c1fd0: 0xc640024c  lwc1        $f0, 0x24C($s2)
    ctx->pc = 0x1c1fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c1fd4:
    // 0x1c1fd4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c1fd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c1fd8:
    // 0x1c1fd8: 0x0  nop
    ctx->pc = 0x1c1fd8u;
    // NOP
label_1c1fdc:
    // 0x1c1fdc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1c1fe0:
    if (ctx->pc == 0x1C1FE0u) {
        ctx->pc = 0x1C1FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1FDCu;
        // 0x1c1fe0: 0xa2500675  sb          $s0, 0x675($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1653), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1FE4u;
        goto label_1c1fe4;
    }
    ctx->pc = 0x1C1FDCu;
    {
        const bool branch_taken_0x1c1fdc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C1FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1FDCu;
        // 0x1c1fe0: 0xa2500675  sb          $s0, 0x675($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1653), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1fdc) {
            ctx->pc = 0x1C1FE8u;
            goto label_1c1fe8;
        }
    }
    ctx->pc = 0x1C1FE4u;
label_1c1fe4:
    // 0x1c1fe4: 0xe641024c  swc1        $f1, 0x24C($s2)
    ctx->pc = 0x1c1fe4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
label_1c1fe8:
    // 0x1c1fe8: 0xc640024c  lwc1        $f0, 0x24C($s2)
    ctx->pc = 0x1c1fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c1fec:
    // 0x1c1fec: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1c1fecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_1c1ff0:
    // 0x1c1ff0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1c1ff0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1c1ff4:
    // 0x1c1ff4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c1ff4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c1ff8:
    // 0x1c1ff8: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1c1ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_1c1ffc:
    // 0x1c1ffc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c1ffcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1c2000:
    // 0x1c2000: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c2000u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c2004:
    // 0x1c2004: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c2004u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1c2008:
    // 0x1c2008: 0x8e430250  lw          $v1, 0x250($s2)
    ctx->pc = 0x1c2008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
label_1c200c:
    // 0x1c200c: 0x34620010  ori         $v0, $v1, 0x10
    ctx->pc = 0x1c200cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_1c2010:
    // 0x1c2010: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1c2010u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c2014:
    // 0x1c2014: 0xae420250  sw          $v0, 0x250($s2)
    ctx->pc = 0x1c2014u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 2));
label_1c2018:
    // 0x1c2018: 0x45000020  bc1f        . + 4 + (0x20 << 2)
label_1c201c:
    if (ctx->pc == 0x1C201Cu) {
        ctx->pc = 0x1C201Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2018u;
        // 0x1c201c: 0xe640024c  swc1        $f0, 0x24C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2020u;
        goto label_1c2020;
    }
    ctx->pc = 0x1C2018u;
    {
        const bool branch_taken_0x1c2018 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C201Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2018u;
        // 0x1c201c: 0xe640024c  swc1        $f0, 0x24C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2018) {
            ctx->pc = 0x1C209Cu;
            goto label_1c209c;
        }
    }
    ctx->pc = 0x1C2020u;
label_1c2020:
    // 0x1c2020: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1c2020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1c2024:
    // 0x1c2024: 0x924402f6  lbu         $a0, 0x2F6($s2)
    ctx->pc = 0x1c2024u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
label_1c2028:
    // 0x1c2028: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x1c2028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
label_1c202c:
    // 0x1c202c: 0x34630012  ori         $v1, $v1, 0x12
    ctx->pc = 0x1c202cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)18);
label_1c2030:
    // 0x1c2030: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1c2030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1c2034:
    // 0x1c2034: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1c2034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1c2038:
    // 0x1c2038: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1c2038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1c203c:
    // 0x1c203c: 0xae430250  sw          $v1, 0x250($s2)
    ctx->pc = 0x1c203cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 3));
label_1c2040:
    // 0x1c2040: 0xa6420568  sh          $v0, 0x568($s2)
    ctx->pc = 0x1c2040u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1384), (uint16_t)GPR_U32(ctx, 2));
label_1c2044:
    // 0x1c2044: 0xa24402f6  sb          $a0, 0x2F6($s2)
    ctx->pc = 0x1c2044u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 4));
label_1c2048:
    // 0x1c2048: 0x10000014  b           . + 4 + (0x14 << 2)
label_1c204c:
    if (ctx->pc == 0x1C204Cu) {
        ctx->pc = 0x1C204Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2048u;
        // 0x1c204c: 0xae40024c  sw          $zero, 0x24C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 588), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2050u;
        goto label_1c2050;
    }
    ctx->pc = 0x1C2048u;
    {
        const bool branch_taken_0x1c2048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C204Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2048u;
        // 0x1c204c: 0xae40024c  sw          $zero, 0x24C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 588), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2048) {
            ctx->pc = 0x1C209Cu;
            goto label_1c209c;
        }
    }
    ctx->pc = 0x1C2050u;
label_1c2050:
    // 0x1c2050: 0x96420568  lhu         $v0, 0x568($s2)
    ctx->pc = 0x1c2050u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1384)));
label_1c2054:
    // 0x1c2054: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c2054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1c2058:
    // 0x1c2058: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1c2058u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1c205c:
    // 0x1c205c: 0x461000f  bgez        $v1, . + 4 + (0xF << 2)
label_1c2060:
    if (ctx->pc == 0x1C2060u) {
        ctx->pc = 0x1C2060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C205Cu;
        // 0x1c2060: 0xa6420568  sh          $v0, 0x568($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 1384), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2064u;
        goto label_1c2064;
    }
    ctx->pc = 0x1C205Cu;
    {
        const bool branch_taken_0x1c205c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1C2060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C205Cu;
        // 0x1c2060: 0xa6420568  sh          $v0, 0x568($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 1384), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c205c) {
            ctx->pc = 0x1C209Cu;
            goto label_1c209c;
        }
    }
    ctx->pc = 0x1C2064u;
label_1c2064:
    // 0x1c2064: 0x8e440678  lw          $a0, 0x678($s2)
    ctx->pc = 0x1c2064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1656)));
label_1c2068:
    // 0x1c2068: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1c206c:
    if (ctx->pc == 0x1C206Cu) {
        ctx->pc = 0x1C206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2068u;
        // 0x1c206c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2070u;
        goto label_1c2070;
    }
    ctx->pc = 0x1C2068u;
    {
        const bool branch_taken_0x1c2068 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2068u;
        // 0x1c206c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2068) {
            ctx->pc = 0x1C207Cu;
            goto label_1c207c;
        }
    }
    ctx->pc = 0x1C2070u;
label_1c2070:
    // 0x1c2070: 0xc0c49c2  jal         func_312708
label_1c2074:
    if (ctx->pc == 0x1C2074u) {
        ctx->pc = 0x1C2078u;
        goto label_1c2078;
    }
    ctx->pc = 0x1C2070u;
    SET_GPR_U32(ctx, 31, 0x1C2078u);
    ctx->pc = 0x312708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312708u, 0x1C2070u, 0x1C2078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2078u;
label_1c2078:
    // 0x1c2078: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c2078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c207c:
    // 0x1c207c: 0xa24002f5  sb          $zero, 0x2F5($s2)
    ctx->pc = 0x1c207cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 0));
label_1c2080:
    // 0x1c2080: 0xa24202f4  sb          $v0, 0x2F4($s2)
    ctx->pc = 0x1c2080u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 2));
label_1c2084:
    // 0x1c2084: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x1c2084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_1c2088:
    // 0x1c2088: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x1c2088u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
label_1c208c:
    // 0x1c208c: 0x240530f0  addiu       $a1, $zero, 0x30F0
    ctx->pc = 0x1c208cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12528));
label_1c2090:
    // 0x1c2090: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x1c2090u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
label_1c2094:
    // 0x1c2094: 0xc0abb10  jal         func_2AEC40
label_1c2098:
    if (ctx->pc == 0x1C2098u) {
        ctx->pc = 0x1C2098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2094u;
        // 0x1c2098: 0x8c6423a4  lw          $a0, 0x23A4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C209Cu;
        goto label_1c209c;
    }
    ctx->pc = 0x1C2094u;
    SET_GPR_U32(ctx, 31, 0x1C209Cu);
    ctx->pc = 0x1C2098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2094u;
    // 0x1c2098: 0x8c6423a4  lw          $a0, 0x23A4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEC40u, 0x1C2094u, 0x1C209Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C209Cu;
label_1c209c:
    // 0x1c209c: 0xc0708de  jal         func_1C2378
label_1c20a0:
    if (ctx->pc == 0x1C20A0u) {
        ctx->pc = 0x1C20A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C209Cu;
        // 0x1c20a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C20A4u;
        goto label_1c20a4;
    }
    ctx->pc = 0x1C209Cu;
    SET_GPR_U32(ctx, 31, 0x1C20A4u);
    ctx->pc = 0x1C20A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C209Cu;
    // 0x1c20a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2378u, 0x1C209Cu, 0x1C20A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20A4u;
label_1c20a4:
    // 0x1c20a4: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1c20a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1c20a8:
    // 0x1c20a8: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1c20a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1c20ac:
    // 0x1c20ac: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1c20acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1c20b0:
    // 0x1c20b0: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x1c20b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1c20b4:
    // 0x1c20b4: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x1c20b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1c20b8:
    // 0x1c20b8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1c20b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1c20bc:
    // 0x1c20bc: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x1c20bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1c20c0:
    // 0x1c20c0: 0x3e00008  jr          $ra
label_1c20c4:
    if (ctx->pc == 0x1C20C4u) {
        ctx->pc = 0x1C20C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C20C0u;
        // 0x1c20c4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C20C8u;
        goto label_fallthrough_0x1c20c0;
    }
    ctx->pc = 0x1C20C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C20C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C20C0u;
        // 0x1c20c4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C20C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c20c0:
    ctx->pc = 0x1C20C8u;
}
