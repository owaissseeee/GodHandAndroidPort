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

// Function: func_0025C830
// Address: 0x25c830 - 0x25ccc0
void func_0025C830_0x25c830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0025C830_0x25c830");
#endif

    switch (ctx->pc) {
        case 0x25c830u: goto label_25c830;
        case 0x25c834u: goto label_25c834;
        case 0x25c838u: goto label_25c838;
        case 0x25c83cu: goto label_25c83c;
        case 0x25c840u: goto label_25c840;
        case 0x25c844u: goto label_25c844;
        case 0x25c848u: goto label_25c848;
        case 0x25c84cu: goto label_25c84c;
        case 0x25c850u: goto label_25c850;
        case 0x25c854u: goto label_25c854;
        case 0x25c858u: goto label_25c858;
        case 0x25c85cu: goto label_25c85c;
        case 0x25c860u: goto label_25c860;
        case 0x25c864u: goto label_25c864;
        case 0x25c868u: goto label_25c868;
        case 0x25c86cu: goto label_25c86c;
        case 0x25c870u: goto label_25c870;
        case 0x25c874u: goto label_25c874;
        case 0x25c878u: goto label_25c878;
        case 0x25c87cu: goto label_25c87c;
        case 0x25c880u: goto label_25c880;
        case 0x25c884u: goto label_25c884;
        case 0x25c888u: goto label_25c888;
        case 0x25c88cu: goto label_25c88c;
        case 0x25c890u: goto label_25c890;
        case 0x25c894u: goto label_25c894;
        case 0x25c898u: goto label_25c898;
        case 0x25c89cu: goto label_25c89c;
        case 0x25c8a0u: goto label_25c8a0;
        case 0x25c8a4u: goto label_25c8a4;
        case 0x25c8a8u: goto label_25c8a8;
        case 0x25c8acu: goto label_25c8ac;
        case 0x25c8b0u: goto label_25c8b0;
        case 0x25c8b4u: goto label_25c8b4;
        case 0x25c8b8u: goto label_25c8b8;
        case 0x25c8bcu: goto label_25c8bc;
        case 0x25c8c0u: goto label_25c8c0;
        case 0x25c8c4u: goto label_25c8c4;
        case 0x25c8c8u: goto label_25c8c8;
        case 0x25c8ccu: goto label_25c8cc;
        case 0x25c8d0u: goto label_25c8d0;
        case 0x25c8d4u: goto label_25c8d4;
        case 0x25c8d8u: goto label_25c8d8;
        case 0x25c8dcu: goto label_25c8dc;
        case 0x25c8e0u: goto label_25c8e0;
        case 0x25c8e4u: goto label_25c8e4;
        case 0x25c8e8u: goto label_25c8e8;
        case 0x25c8ecu: goto label_25c8ec;
        case 0x25c8f0u: goto label_25c8f0;
        case 0x25c8f4u: goto label_25c8f4;
        case 0x25c8f8u: goto label_25c8f8;
        case 0x25c8fcu: goto label_25c8fc;
        case 0x25c900u: goto label_25c900;
        case 0x25c904u: goto label_25c904;
        case 0x25c908u: goto label_25c908;
        case 0x25c90cu: goto label_25c90c;
        case 0x25c910u: goto label_25c910;
        case 0x25c914u: goto label_25c914;
        case 0x25c918u: goto label_25c918;
        case 0x25c91cu: goto label_25c91c;
        case 0x25c920u: goto label_25c920;
        case 0x25c924u: goto label_25c924;
        case 0x25c928u: goto label_25c928;
        case 0x25c92cu: goto label_25c92c;
        case 0x25c930u: goto label_25c930;
        case 0x25c934u: goto label_25c934;
        case 0x25c938u: goto label_25c938;
        case 0x25c93cu: goto label_25c93c;
        case 0x25c940u: goto label_25c940;
        case 0x25c944u: goto label_25c944;
        case 0x25c948u: goto label_25c948;
        case 0x25c94cu: goto label_25c94c;
        case 0x25c950u: goto label_25c950;
        case 0x25c954u: goto label_25c954;
        case 0x25c958u: goto label_25c958;
        case 0x25c95cu: goto label_25c95c;
        case 0x25c960u: goto label_25c960;
        case 0x25c964u: goto label_25c964;
        case 0x25c968u: goto label_25c968;
        case 0x25c96cu: goto label_25c96c;
        case 0x25c970u: goto label_25c970;
        case 0x25c974u: goto label_25c974;
        case 0x25c978u: goto label_25c978;
        case 0x25c97cu: goto label_25c97c;
        case 0x25c980u: goto label_25c980;
        case 0x25c984u: goto label_25c984;
        case 0x25c988u: goto label_25c988;
        case 0x25c98cu: goto label_25c98c;
        case 0x25c990u: goto label_25c990;
        case 0x25c994u: goto label_25c994;
        case 0x25c998u: goto label_25c998;
        case 0x25c99cu: goto label_25c99c;
        case 0x25c9a0u: goto label_25c9a0;
        case 0x25c9a4u: goto label_25c9a4;
        case 0x25c9a8u: goto label_25c9a8;
        case 0x25c9acu: goto label_25c9ac;
        case 0x25c9b0u: goto label_25c9b0;
        case 0x25c9b4u: goto label_25c9b4;
        case 0x25c9b8u: goto label_25c9b8;
        case 0x25c9bcu: goto label_25c9bc;
        case 0x25c9c0u: goto label_25c9c0;
        case 0x25c9c4u: goto label_25c9c4;
        case 0x25c9c8u: goto label_25c9c8;
        case 0x25c9ccu: goto label_25c9cc;
        case 0x25c9d0u: goto label_25c9d0;
        case 0x25c9d4u: goto label_25c9d4;
        case 0x25c9d8u: goto label_25c9d8;
        case 0x25c9dcu: goto label_25c9dc;
        case 0x25c9e0u: goto label_25c9e0;
        case 0x25c9e4u: goto label_25c9e4;
        case 0x25c9e8u: goto label_25c9e8;
        case 0x25c9ecu: goto label_25c9ec;
        case 0x25c9f0u: goto label_25c9f0;
        case 0x25c9f4u: goto label_25c9f4;
        case 0x25c9f8u: goto label_25c9f8;
        case 0x25c9fcu: goto label_25c9fc;
        case 0x25ca00u: goto label_25ca00;
        case 0x25ca04u: goto label_25ca04;
        case 0x25ca08u: goto label_25ca08;
        case 0x25ca0cu: goto label_25ca0c;
        case 0x25ca10u: goto label_25ca10;
        case 0x25ca14u: goto label_25ca14;
        case 0x25ca18u: goto label_25ca18;
        case 0x25ca1cu: goto label_25ca1c;
        case 0x25ca20u: goto label_25ca20;
        case 0x25ca24u: goto label_25ca24;
        case 0x25ca28u: goto label_25ca28;
        case 0x25ca2cu: goto label_25ca2c;
        case 0x25ca30u: goto label_25ca30;
        case 0x25ca34u: goto label_25ca34;
        case 0x25ca38u: goto label_25ca38;
        case 0x25ca3cu: goto label_25ca3c;
        case 0x25ca40u: goto label_25ca40;
        case 0x25ca44u: goto label_25ca44;
        case 0x25ca48u: goto label_25ca48;
        case 0x25ca4cu: goto label_25ca4c;
        case 0x25ca50u: goto label_25ca50;
        case 0x25ca54u: goto label_25ca54;
        case 0x25ca58u: goto label_25ca58;
        case 0x25ca5cu: goto label_25ca5c;
        case 0x25ca60u: goto label_25ca60;
        case 0x25ca64u: goto label_25ca64;
        case 0x25ca68u: goto label_25ca68;
        case 0x25ca6cu: goto label_25ca6c;
        case 0x25ca70u: goto label_25ca70;
        case 0x25ca74u: goto label_25ca74;
        case 0x25ca78u: goto label_25ca78;
        case 0x25ca7cu: goto label_25ca7c;
        case 0x25ca80u: goto label_25ca80;
        case 0x25ca84u: goto label_25ca84;
        case 0x25ca88u: goto label_25ca88;
        case 0x25ca8cu: goto label_25ca8c;
        case 0x25ca90u: goto label_25ca90;
        case 0x25ca94u: goto label_25ca94;
        case 0x25ca98u: goto label_25ca98;
        case 0x25ca9cu: goto label_25ca9c;
        case 0x25caa0u: goto label_25caa0;
        case 0x25caa4u: goto label_25caa4;
        case 0x25caa8u: goto label_25caa8;
        case 0x25caacu: goto label_25caac;
        case 0x25cab0u: goto label_25cab0;
        case 0x25cab4u: goto label_25cab4;
        case 0x25cab8u: goto label_25cab8;
        case 0x25cabcu: goto label_25cabc;
        case 0x25cac0u: goto label_25cac0;
        case 0x25cac4u: goto label_25cac4;
        case 0x25cac8u: goto label_25cac8;
        case 0x25caccu: goto label_25cacc;
        case 0x25cad0u: goto label_25cad0;
        case 0x25cad4u: goto label_25cad4;
        case 0x25cad8u: goto label_25cad8;
        case 0x25cadcu: goto label_25cadc;
        case 0x25cae0u: goto label_25cae0;
        case 0x25cae4u: goto label_25cae4;
        case 0x25cae8u: goto label_25cae8;
        case 0x25caecu: goto label_25caec;
        case 0x25caf0u: goto label_25caf0;
        case 0x25caf4u: goto label_25caf4;
        case 0x25caf8u: goto label_25caf8;
        case 0x25cafcu: goto label_25cafc;
        case 0x25cb00u: goto label_25cb00;
        case 0x25cb04u: goto label_25cb04;
        case 0x25cb08u: goto label_25cb08;
        case 0x25cb0cu: goto label_25cb0c;
        case 0x25cb10u: goto label_25cb10;
        case 0x25cb14u: goto label_25cb14;
        case 0x25cb18u: goto label_25cb18;
        case 0x25cb1cu: goto label_25cb1c;
        case 0x25cb20u: goto label_25cb20;
        case 0x25cb24u: goto label_25cb24;
        case 0x25cb28u: goto label_25cb28;
        case 0x25cb2cu: goto label_25cb2c;
        case 0x25cb30u: goto label_25cb30;
        case 0x25cb34u: goto label_25cb34;
        case 0x25cb38u: goto label_25cb38;
        case 0x25cb3cu: goto label_25cb3c;
        case 0x25cb40u: goto label_25cb40;
        case 0x25cb44u: goto label_25cb44;
        case 0x25cb48u: goto label_25cb48;
        case 0x25cb4cu: goto label_25cb4c;
        case 0x25cb50u: goto label_25cb50;
        case 0x25cb54u: goto label_25cb54;
        case 0x25cb58u: goto label_25cb58;
        case 0x25cb5cu: goto label_25cb5c;
        case 0x25cb60u: goto label_25cb60;
        case 0x25cb64u: goto label_25cb64;
        case 0x25cb68u: goto label_25cb68;
        case 0x25cb6cu: goto label_25cb6c;
        case 0x25cb70u: goto label_25cb70;
        case 0x25cb74u: goto label_25cb74;
        case 0x25cb78u: goto label_25cb78;
        case 0x25cb7cu: goto label_25cb7c;
        case 0x25cb80u: goto label_25cb80;
        case 0x25cb84u: goto label_25cb84;
        case 0x25cb88u: goto label_25cb88;
        case 0x25cb8cu: goto label_25cb8c;
        case 0x25cb90u: goto label_25cb90;
        case 0x25cb94u: goto label_25cb94;
        case 0x25cb98u: goto label_25cb98;
        case 0x25cb9cu: goto label_25cb9c;
        case 0x25cba0u: goto label_25cba0;
        case 0x25cba4u: goto label_25cba4;
        case 0x25cba8u: goto label_25cba8;
        case 0x25cbacu: goto label_25cbac;
        case 0x25cbb0u: goto label_25cbb0;
        case 0x25cbb4u: goto label_25cbb4;
        case 0x25cbb8u: goto label_25cbb8;
        case 0x25cbbcu: goto label_25cbbc;
        case 0x25cbc0u: goto label_25cbc0;
        case 0x25cbc4u: goto label_25cbc4;
        case 0x25cbc8u: goto label_25cbc8;
        case 0x25cbccu: goto label_25cbcc;
        case 0x25cbd0u: goto label_25cbd0;
        case 0x25cbd4u: goto label_25cbd4;
        case 0x25cbd8u: goto label_25cbd8;
        case 0x25cbdcu: goto label_25cbdc;
        case 0x25cbe0u: goto label_25cbe0;
        case 0x25cbe4u: goto label_25cbe4;
        case 0x25cbe8u: goto label_25cbe8;
        case 0x25cbecu: goto label_25cbec;
        case 0x25cbf0u: goto label_25cbf0;
        case 0x25cbf4u: goto label_25cbf4;
        case 0x25cbf8u: goto label_25cbf8;
        case 0x25cbfcu: goto label_25cbfc;
        case 0x25cc00u: goto label_25cc00;
        case 0x25cc04u: goto label_25cc04;
        case 0x25cc08u: goto label_25cc08;
        case 0x25cc0cu: goto label_25cc0c;
        case 0x25cc10u: goto label_25cc10;
        case 0x25cc14u: goto label_25cc14;
        case 0x25cc18u: goto label_25cc18;
        case 0x25cc1cu: goto label_25cc1c;
        case 0x25cc20u: goto label_25cc20;
        case 0x25cc24u: goto label_25cc24;
        case 0x25cc28u: goto label_25cc28;
        case 0x25cc2cu: goto label_25cc2c;
        case 0x25cc30u: goto label_25cc30;
        case 0x25cc34u: goto label_25cc34;
        case 0x25cc38u: goto label_25cc38;
        case 0x25cc3cu: goto label_25cc3c;
        case 0x25cc40u: goto label_25cc40;
        case 0x25cc44u: goto label_25cc44;
        case 0x25cc48u: goto label_25cc48;
        case 0x25cc4cu: goto label_25cc4c;
        case 0x25cc50u: goto label_25cc50;
        case 0x25cc54u: goto label_25cc54;
        case 0x25cc58u: goto label_25cc58;
        case 0x25cc5cu: goto label_25cc5c;
        case 0x25cc60u: goto label_25cc60;
        case 0x25cc64u: goto label_25cc64;
        case 0x25cc68u: goto label_25cc68;
        case 0x25cc6cu: goto label_25cc6c;
        case 0x25cc70u: goto label_25cc70;
        case 0x25cc74u: goto label_25cc74;
        case 0x25cc78u: goto label_25cc78;
        case 0x25cc7cu: goto label_25cc7c;
        case 0x25cc80u: goto label_25cc80;
        case 0x25cc84u: goto label_25cc84;
        case 0x25cc88u: goto label_25cc88;
        case 0x25cc8cu: goto label_25cc8c;
        case 0x25cc90u: goto label_25cc90;
        case 0x25cc94u: goto label_25cc94;
        case 0x25cc98u: goto label_25cc98;
        case 0x25cc9cu: goto label_25cc9c;
        case 0x25cca0u: goto label_25cca0;
        case 0x25cca4u: goto label_25cca4;
        case 0x25cca8u: goto label_25cca8;
        case 0x25ccacu: goto label_25ccac;
        case 0x25ccb0u: goto label_25ccb0;
        case 0x25ccb4u: goto label_25ccb4;
        case 0x25ccb8u: goto label_25ccb8;
        case 0x25ccbcu: goto label_25ccbc;
        default: break;
    }

    ctx->pc = 0x25c830u;

label_25c830:
    // 0x25c830: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25c830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_25c834:
    // 0x25c834: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x25c834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_25c838:
    // 0x25c838: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25c838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25c83c:
    // 0x25c83c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25c83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_25c840:
    // 0x25c840: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25c840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25c844:
    // 0x25c844: 0xc0b6dac  jal         func_2DB6B0
label_25c848:
    if (ctx->pc == 0x25C848u) {
        ctx->pc = 0x25C848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C844u;
        // 0x25c848: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C84Cu;
        goto label_25c84c;
    }
    ctx->pc = 0x25C844u;
    SET_GPR_U32(ctx, 31, 0x25C84Cu);
    ctx->pc = 0x25C848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C844u;
    // 0x25c848: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x25C844u, 0x25C84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C84Cu;
label_25c84c:
    // 0x25c84c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25c84cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25c850:
    // 0x25c850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25c850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25c854:
    // 0x25c854: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x25c854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c858:
    // 0x25c858: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x25c858u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_25c85c:
    // 0x25c85c: 0xc0560a2  jal         func_158288
label_25c860:
    if (ctx->pc == 0x25C860u) {
        ctx->pc = 0x25C860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C85Cu;
        // 0x25c860: 0xe60005a8  swc1        $f0, 0x5A8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1448), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C864u;
        goto label_25c864;
    }
    ctx->pc = 0x25C85Cu;
    SET_GPR_U32(ctx, 31, 0x25C864u);
    ctx->pc = 0x25C860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C85Cu;
    // 0x25c860: 0xe60005a8  swc1        $f0, 0x5A8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1448), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x25C85Cu, 0x25C864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C864u;
label_25c864:
    // 0x25c864: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x25c864u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_25c868:
    // 0x25c868: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25c868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25c86c:
    // 0x25c86c: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x25c86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
label_25c870:
    // 0x25c870: 0xc04d476  jal         func_1351D8
label_25c874:
    if (ctx->pc == 0x25C874u) {
        ctx->pc = 0x25C874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C870u;
        // 0x25c874: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C878u;
        goto label_25c878;
    }
    ctx->pc = 0x25C870u;
    SET_GPR_U32(ctx, 31, 0x25C878u);
    ctx->pc = 0x25C874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C870u;
    // 0x25c874: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x25C870u, 0x25C878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C878u;
label_25c878:
    // 0x25c878: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x25c878u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_25c87c:
    // 0x25c87c: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x25c87cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_25c880:
    // 0x25c880: 0x10400108  beqz        $v0, . + 4 + (0x108 << 2)
label_25c884:
    if (ctx->pc == 0x25C884u) {
        ctx->pc = 0x25C884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C880u;
        // 0x25c884: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C888u;
        goto label_25c888;
    }
    ctx->pc = 0x25C880u;
    {
        const bool branch_taken_0x25c880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C880u;
        // 0x25c884: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c880) {
            ctx->pc = 0x25CCA4u;
            goto label_25cca4;
        }
    }
    ctx->pc = 0x25C888u;
label_25c888:
    // 0x25c888: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25c888u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_25c88c:
    // 0x25c88c: 0x244239e0  addiu       $v0, $v0, 0x39E0
    ctx->pc = 0x25c88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14816));
label_25c890:
    // 0x25c890: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25c890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25c894:
    // 0x25c894: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25c894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25c898:
    // 0x25c898: 0x800008  jr          $a0
label_25c89c:
    if (ctx->pc == 0x25C89Cu) {
        ctx->pc = 0x25C8A0u;
        goto label_25c8a0;
    }
    ctx->pc = 0x25C898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25C8A0u: goto label_25c8a0;
            case 0x25C8E4u: goto label_25c8e4;
            case 0x25C96Cu: goto label_25c96c;
            case 0x25C9ACu: goto label_25c9ac;
            case 0x25CA64u: goto label_25ca64;
            case 0x25CAACu: goto label_25caac;
            case 0x25CBC4u: goto label_25cbc4;
            case 0x25CC10u: goto label_25cc10;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C898u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25C8A0u;
label_25c8a0:
    // 0x25c8a0: 0xc09ac7a  jal         func_26B1E8
label_25c8a4:
    if (ctx->pc == 0x25C8A4u) {
        ctx->pc = 0x25C8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C8A0u;
        // 0x25c8a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C8A8u;
        goto label_25c8a8;
    }
    ctx->pc = 0x25C8A0u;
    SET_GPR_U32(ctx, 31, 0x25C8A8u);
    ctx->pc = 0x25C8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C8A0u;
    // 0x25c8a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B1E8u, 0x25C8A0u, 0x25C8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C8A8u;
label_25c8a8:
    // 0x25c8a8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25c8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_25c8ac:
    // 0x25c8ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25c8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25c8b0:
    // 0x25c8b0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25c8b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25c8b4:
    // 0x25c8b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25c8b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25c8b8:
    // 0x25c8b8: 0x8c451820  lw          $a1, 0x1820($v0)
    ctx->pc = 0x25c8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6176)));
label_25c8bc:
    // 0x25c8bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25c8bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25c8c0:
    // 0x25c8c0: 0x8c461824  lw          $a2, 0x1824($v0)
    ctx->pc = 0x25c8c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6180)));
label_25c8c4:
    // 0x25c8c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25c8c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25c8c8:
    // 0x25c8c8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x25c8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_25c8cc:
    // 0x25c8cc: 0xc0aa15e  jal         func_2A8578
label_25c8d0:
    if (ctx->pc == 0x25C8D0u) {
        ctx->pc = 0x25C8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C8CCu;
        // 0x25c8d0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C8D4u;
        goto label_25c8d4;
    }
    ctx->pc = 0x25C8CCu;
    SET_GPR_U32(ctx, 31, 0x25C8D4u);
    ctx->pc = 0x25C8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C8CCu;
    // 0x25c8d0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x25C8CCu, 0x25C8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C8D4u;
label_25c8d4:
    // 0x25c8d4: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x25c8d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_25c8d8:
    // 0x25c8d8: 0xae0016ec  sw          $zero, 0x16EC($s0)
    ctx->pc = 0x25c8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5868), GPR_U32(ctx, 0));
label_25c8dc:
    // 0x25c8dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25c8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_25c8e0:
    // 0x25c8e0: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x25c8e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_25c8e4:
    // 0x25c8e4: 0x8e0316d0  lw          $v1, 0x16D0($s0)
    ctx->pc = 0x25c8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
label_25c8e8:
    // 0x25c8e8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x25c8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_25c8ec:
    // 0x25c8ec: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x25c8ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_25c8f0:
    // 0x25c8f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25c8f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25c8f4:
    // 0x25c8f4: 0x26250550  addiu       $a1, $s1, 0x550
    ctx->pc = 0x25c8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
label_25c8f8:
    // 0x25c8f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x25c8f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_25c8fc:
    // 0x25c8fc: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x25c8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_25c900:
    // 0x25c900: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x25c900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
label_25c904:
    // 0x25c904: 0xae0316d0  sw          $v1, 0x16D0($s0)
    ctx->pc = 0x25c904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 3));
label_25c908:
    // 0x25c908: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x25c908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_25c90c:
    // 0x25c90c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x25c90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c910:
    // 0x25c910: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x25c910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_25c914:
    // 0x25c914: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x25c914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_25c918:
    // 0x25c918: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x25c918u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_25c91c:
    // 0x25c91c: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x25c91cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_25c920:
    // 0x25c920: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x25c920u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_25c924:
    // 0x25c924: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x25c924u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_25c928:
    // 0x25c928: 0xc055f06  jal         func_157C18
label_25c92c:
    if (ctx->pc == 0x25C92Cu) {
        ctx->pc = 0x25C92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C928u;
        // 0x25c92c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C930u;
        goto label_25c930;
    }
    ctx->pc = 0x25C928u;
    SET_GPR_U32(ctx, 31, 0x25C930u);
    ctx->pc = 0x25C92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C928u;
    // 0x25c92c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25C928u, 0x25C930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C930u;
label_25c930:
    // 0x25c930: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_25c934:
    if (ctx->pc == 0x25C934u) {
        ctx->pc = 0x25C938u;
        goto label_25c938;
    }
    ctx->pc = 0x25C930u;
    {
        const bool branch_taken_0x25c930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c930) {
            ctx->pc = 0x25C944u;
            goto label_25c944;
        }
    }
    ctx->pc = 0x25C938u;
label_25c938:
    // 0x25c938: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x25c938u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_25c93c:
    // 0x25c93c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25c93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_25c940:
    // 0x25c940: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x25c940u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_25c944:
    // 0x25c944: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25c944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_25c948:
    // 0x25c948: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25c948u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_25c94c:
    // 0x25c94c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25c94cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25c950:
    // 0x25c950: 0xc053e7c  jal         func_14F9F0
label_25c954:
    if (ctx->pc == 0x25C954u) {
        ctx->pc = 0x25C954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C950u;
        // 0x25c954: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C958u;
        goto label_25c958;
    }
    ctx->pc = 0x25C950u;
    SET_GPR_U32(ctx, 31, 0x25C958u);
    ctx->pc = 0x25C954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C950u;
    // 0x25c954: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x25C950u, 0x25C958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C958u;
label_25c958:
    // 0x25c958: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25c958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25c95c:
    // 0x25c95c: 0xc053e4a  jal         func_14F928
label_25c960:
    if (ctx->pc == 0x25C960u) {
        ctx->pc = 0x25C960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C95Cu;
        // 0x25c960: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C964u;
        goto label_25c964;
    }
    ctx->pc = 0x25C95Cu;
    SET_GPR_U32(ctx, 31, 0x25C964u);
    ctx->pc = 0x25C960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C95Cu;
    // 0x25c960: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x25C95Cu, 0x25C964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C964u;
label_25c964:
    // 0x25c964: 0x100000d0  b           . + 4 + (0xD0 << 2)
label_25c968:
    if (ctx->pc == 0x25C968u) {
        ctx->pc = 0x25C968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C964u;
        // 0x25c968: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C96Cu;
        goto label_25c96c;
    }
    ctx->pc = 0x25C964u;
    {
        const bool branch_taken_0x25c964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C964u;
        // 0x25c968: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c964) {
            ctx->pc = 0x25CCA8u;
            goto label_25cca8;
        }
    }
    ctx->pc = 0x25C96Cu;
label_25c96c:
    // 0x25c96c: 0xc09ac7a  jal         func_26B1E8
label_25c970:
    if (ctx->pc == 0x25C970u) {
        ctx->pc = 0x25C970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C96Cu;
        // 0x25c970: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C974u;
        goto label_25c974;
    }
    ctx->pc = 0x25C96Cu;
    SET_GPR_U32(ctx, 31, 0x25C974u);
    ctx->pc = 0x25C970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C96Cu;
    // 0x25c970: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B1E8u, 0x25C96Cu, 0x25C974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C974u;
label_25c974:
    // 0x25c974: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25c974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_25c978:
    // 0x25c978: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25c978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25c97c:
    // 0x25c97c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25c97cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25c980:
    // 0x25c980: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25c980u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25c984:
    // 0x25c984: 0x8c451828  lw          $a1, 0x1828($v0)
    ctx->pc = 0x25c984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6184)));
label_25c988:
    // 0x25c988: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25c988u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25c98c:
    // 0x25c98c: 0x8c46182c  lw          $a2, 0x182C($v0)
    ctx->pc = 0x25c98cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6188)));
label_25c990:
    // 0x25c990: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25c990u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25c994:
    // 0x25c994: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x25c994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_25c998:
    // 0x25c998: 0xc0aa15e  jal         func_2A8578
label_25c99c:
    if (ctx->pc == 0x25C99Cu) {
        ctx->pc = 0x25C99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C998u;
        // 0x25c99c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C9A0u;
        goto label_25c9a0;
    }
    ctx->pc = 0x25C998u;
    SET_GPR_U32(ctx, 31, 0x25C9A0u);
    ctx->pc = 0x25C99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C998u;
    // 0x25c99c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x25C998u, 0x25C9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C9A0u;
label_25c9a0:
    // 0x25c9a0: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x25c9a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_25c9a4:
    // 0x25c9a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25c9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_25c9a8:
    // 0x25c9a8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x25c9a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_25c9ac:
    // 0x25c9ac: 0x8e0316d0  lw          $v1, 0x16D0($s0)
    ctx->pc = 0x25c9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
label_25c9b0:
    // 0x25c9b0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x25c9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_25c9b4:
    // 0x25c9b4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x25c9b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_25c9b8:
    // 0x25c9b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25c9b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25c9bc:
    // 0x25c9bc: 0x26250550  addiu       $a1, $s1, 0x550
    ctx->pc = 0x25c9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
label_25c9c0:
    // 0x25c9c0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x25c9c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_25c9c4:
    // 0x25c9c4: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x25c9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_25c9c8:
    // 0x25c9c8: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x25c9c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
label_25c9cc:
    // 0x25c9cc: 0xae0316d0  sw          $v1, 0x16D0($s0)
    ctx->pc = 0x25c9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 3));
label_25c9d0:
    // 0x25c9d0: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x25c9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_25c9d4:
    // 0x25c9d4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x25c9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25c9d8:
    // 0x25c9d8: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x25c9d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_25c9dc:
    // 0x25c9dc: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x25c9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_25c9e0:
    // 0x25c9e0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x25c9e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_25c9e4:
    // 0x25c9e4: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x25c9e4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_25c9e8:
    // 0x25c9e8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x25c9e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_25c9ec:
    // 0x25c9ec: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x25c9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_25c9f0:
    // 0x25c9f0: 0xc055f06  jal         func_157C18
label_25c9f4:
    if (ctx->pc == 0x25C9F4u) {
        ctx->pc = 0x25C9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C9F0u;
        // 0x25c9f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C9F8u;
        goto label_25c9f8;
    }
    ctx->pc = 0x25C9F0u;
    SET_GPR_U32(ctx, 31, 0x25C9F8u);
    ctx->pc = 0x25C9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C9F0u;
    // 0x25c9f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25C9F0u, 0x25C9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C9F8u;
label_25c9f8:
    // 0x25c9f8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_25c9fc:
    if (ctx->pc == 0x25C9FCu) {
        ctx->pc = 0x25C9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C9F8u;
        // 0x25c9fc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CA00u;
        goto label_25ca00;
    }
    ctx->pc = 0x25C9F8u;
    {
        const bool branch_taken_0x25c9f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C9F8u;
        // 0x25c9fc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c9f8) {
            ctx->pc = 0x25CA38u;
            goto label_25ca38;
        }
    }
    ctx->pc = 0x25CA00u;
label_25ca00:
    // 0x25ca00: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x25ca00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_25ca04:
    // 0x25ca04: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x25ca04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25ca08:
    // 0x25ca08: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x25ca08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25ca0c:
    // 0x25ca0c: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x25ca0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_25ca10:
    // 0x25ca10: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25ca10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25ca14:
    // 0x25ca14: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x25ca14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_25ca18:
    // 0x25ca18: 0x40f809  jalr        $v0
label_25ca1c:
    if (ctx->pc == 0x25CA1Cu) {
        ctx->pc = 0x25CA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CA18u;
        // 0x25ca1c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CA20u;
        goto label_25ca20;
    }
    ctx->pc = 0x25CA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25CA20u);
        ctx->pc = 0x25CA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CA18u;
        // 0x25ca1c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CA18u, 0x25CA20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25CA20u;
label_25ca20:
    // 0x25ca20: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x25ca20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
label_25ca24:
    // 0x25ca24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25ca24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_25ca28:
    // 0x25ca28: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25ca28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25ca2c:
    // 0x25ca2c: 0x2484b000  addiu       $a0, $a0, -0x5000
    ctx->pc = 0x25ca2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946816));
label_25ca30:
    // 0x25ca30: 0xc0aa65e  jal         func_2A9978
label_25ca34:
    if (ctx->pc == 0x25CA34u) {
        ctx->pc = 0x25CA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CA30u;
        // 0x25ca34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CA38u;
        goto label_25ca38;
    }
    ctx->pc = 0x25CA30u;
    SET_GPR_U32(ctx, 31, 0x25CA38u);
    ctx->pc = 0x25CA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CA30u;
    // 0x25ca34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9978u, 0x25CA30u, 0x25CA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CA38u;
label_25ca38:
    // 0x25ca38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25ca38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_25ca3c:
    // 0x25ca3c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25ca3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_25ca40:
    // 0x25ca40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ca40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25ca44:
    // 0x25ca44: 0xc053e7c  jal         func_14F9F0
label_25ca48:
    if (ctx->pc == 0x25CA48u) {
        ctx->pc = 0x25CA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CA44u;
        // 0x25ca48: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CA4Cu;
        goto label_25ca4c;
    }
    ctx->pc = 0x25CA44u;
    SET_GPR_U32(ctx, 31, 0x25CA4Cu);
    ctx->pc = 0x25CA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CA44u;
    // 0x25ca48: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x25CA44u, 0x25CA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CA4Cu;
label_25ca4c:
    // 0x25ca4c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25ca4cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_25ca50:
    // 0x25ca50: 0xc053e4a  jal         func_14F928
label_25ca54:
    if (ctx->pc == 0x25CA54u) {
        ctx->pc = 0x25CA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CA50u;
        // 0x25ca54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CA58u;
        goto label_25ca58;
    }
    ctx->pc = 0x25CA50u;
    SET_GPR_U32(ctx, 31, 0x25CA58u);
    ctx->pc = 0x25CA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CA50u;
    // 0x25ca54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x25CA50u, 0x25CA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CA58u;
label_25ca58:
    // 0x25ca58: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x25ca58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_25ca5c:
    // 0x25ca5c: 0x10000091  b           . + 4 + (0x91 << 2)
label_25ca60:
    if (ctx->pc == 0x25CA60u) {
        ctx->pc = 0x25CA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CA5Cu;
        // 0x25ca60: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CA64u;
        goto label_25ca64;
    }
    ctx->pc = 0x25CA5Cu;
    {
        const bool branch_taken_0x25ca5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CA5Cu;
        // 0x25ca60: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ca5c) {
            ctx->pc = 0x25CCA4u;
            goto label_25cca4;
        }
    }
    ctx->pc = 0x25CA64u;
label_25ca64:
    // 0x25ca64: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25ca64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_25ca68:
    // 0x25ca68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25ca68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25ca6c:
    // 0x25ca6c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25ca6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25ca70:
    // 0x25ca70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25ca70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25ca74:
    // 0x25ca74: 0x8c451838  lw          $a1, 0x1838($v0)
    ctx->pc = 0x25ca74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6200)));
label_25ca78:
    // 0x25ca78: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25ca78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25ca7c:
    // 0x25ca7c: 0x8c46183c  lw          $a2, 0x183C($v0)
    ctx->pc = 0x25ca7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6204)));
label_25ca80:
    // 0x25ca80: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25ca80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25ca84:
    // 0x25ca84: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x25ca84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_25ca88:
    // 0x25ca88: 0xc0aa15e  jal         func_2A8578
label_25ca8c:
    if (ctx->pc == 0x25CA8Cu) {
        ctx->pc = 0x25CA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CA88u;
        // 0x25ca8c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CA90u;
        goto label_25ca90;
    }
    ctx->pc = 0x25CA88u;
    SET_GPR_U32(ctx, 31, 0x25CA90u);
    ctx->pc = 0x25CA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CA88u;
    // 0x25ca8c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x25CA88u, 0x25CA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CA90u;
label_25ca90:
    // 0x25ca90: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x25ca90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_25ca94:
    // 0x25ca94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25ca94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25ca98:
    // 0x25ca98: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x25ca98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_25ca9c:
    // 0x25ca9c: 0xae0305f0  sw          $v1, 0x5F0($s0)
    ctx->pc = 0x25ca9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 3));
label_25caa0:
    // 0x25caa0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25caa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_25caa4:
    // 0x25caa4: 0xa604056e  sh          $a0, 0x56E($s0)
    ctx->pc = 0x25caa4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 4));
label_25caa8:
    // 0x25caa8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x25caa8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_25caac:
    // 0x25caac: 0x8e0316d0  lw          $v1, 0x16D0($s0)
    ctx->pc = 0x25caacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
label_25cab0:
    // 0x25cab0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x25cab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_25cab4:
    // 0x25cab4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x25cab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_25cab8:
    // 0x25cab8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25cab8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25cabc:
    // 0x25cabc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x25cabcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_25cac0:
    // 0x25cac0: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x25cac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_25cac4:
    // 0x25cac4: 0xae0316d0  sw          $v1, 0x16D0($s0)
    ctx->pc = 0x25cac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 3));
label_25cac8:
    // 0x25cac8: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x25cac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
label_25cacc:
    // 0x25cacc: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x25caccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_25cad0:
    // 0x25cad0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x25cad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25cad4:
    // 0x25cad4: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x25cad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_25cad8:
    // 0x25cad8: 0x8602056e  lh          $v0, 0x56E($s0)
    ctx->pc = 0x25cad8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
label_25cadc:
    // 0x25cadc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_25cae0:
    if (ctx->pc == 0x25CAE0u) {
        ctx->pc = 0x25CAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CADCu;
        // 0x25cae0: 0x9603056e  lhu         $v1, 0x56E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CAE4u;
        goto label_25cae4;
    }
    ctx->pc = 0x25CADCu;
    {
        const bool branch_taken_0x25cadc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CADCu;
        // 0x25cae0: 0x9603056e  lhu         $v1, 0x56E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cadc) {
            ctx->pc = 0x25CB04u;
            goto label_25cb04;
        }
    }
    ctx->pc = 0x25CAE4u;
label_25cae4:
    // 0x25cae4: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x25cae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_25cae8:
    // 0x25cae8: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x25cae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_25caec:
    // 0x25caec: 0xa602056e  sh          $v0, 0x56E($s0)
    ctx->pc = 0x25caecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 2));
label_25caf0:
    // 0x25caf0: 0x26230550  addiu       $v1, $s1, 0x550
    ctx->pc = 0x25caf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
label_25caf4:
    // 0x25caf4: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x25caf4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_25caf8:
    // 0x25caf8: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x25caf8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_25cafc:
    // 0x25cafc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x25cafcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_25cb00:
    // 0x25cb00: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x25cb00u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_25cb04:
    // 0x25cb04: 0xc055f06  jal         func_157C18
label_25cb08:
    if (ctx->pc == 0x25CB08u) {
        ctx->pc = 0x25CB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CB04u;
        // 0x25cb08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CB0Cu;
        goto label_25cb0c;
    }
    ctx->pc = 0x25CB04u;
    SET_GPR_U32(ctx, 31, 0x25CB0Cu);
    ctx->pc = 0x25CB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CB04u;
    // 0x25cb08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25CB04u, 0x25CB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CB0Cu;
label_25cb0c:
    // 0x25cb0c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_25cb10:
    if (ctx->pc == 0x25CB10u) {
        ctx->pc = 0x25CB14u;
        goto label_25cb14;
    }
    ctx->pc = 0x25CB0Cu;
    {
        const bool branch_taken_0x25cb0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cb0c) {
            ctx->pc = 0x25CB28u;
            goto label_25cb28;
        }
    }
    ctx->pc = 0x25CB14u;
label_25cb14:
    // 0x25cb14: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x25cb14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
label_25cb18:
    // 0x25cb18: 0x1840004f  blez        $v0, . + 4 + (0x4F << 2)
label_25cb1c:
    if (ctx->pc == 0x25CB1Cu) {
        ctx->pc = 0x25CB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CB18u;
        // 0x25cb1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CB20u;
        goto label_25cb20;
    }
    ctx->pc = 0x25CB18u;
    {
        const bool branch_taken_0x25cb18 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x25CB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CB18u;
        // 0x25cb1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cb18) {
            ctx->pc = 0x25CC58u;
            goto label_25cc58;
        }
    }
    ctx->pc = 0x25CB20u;
label_25cb20:
    // 0x25cb20: 0xc09c176  jal         func_2705D8
label_25cb24:
    if (ctx->pc == 0x25CB24u) {
        ctx->pc = 0x25CB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CB20u;
        // 0x25cb24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CB28u;
        goto label_25cb28;
    }
    ctx->pc = 0x25CB20u;
    SET_GPR_U32(ctx, 31, 0x25CB28u);
    ctx->pc = 0x25CB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CB20u;
    // 0x25cb24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x25CB20u, 0x25CB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CB28u;
label_25cb28:
    // 0x25cb28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25cb28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_25cb2c:
    // 0x25cb2c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25cb2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_25cb30:
    // 0x25cb30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25cb30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25cb34:
    // 0x25cb34: 0xc053e7c  jal         func_14F9F0
label_25cb38:
    if (ctx->pc == 0x25CB38u) {
        ctx->pc = 0x25CB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CB34u;
        // 0x25cb38: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CB3Cu;
        goto label_25cb3c;
    }
    ctx->pc = 0x25CB34u;
    SET_GPR_U32(ctx, 31, 0x25CB3Cu);
    ctx->pc = 0x25CB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CB34u;
    // 0x25cb38: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x25CB34u, 0x25CB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CB3Cu;
label_25cb3c:
    // 0x25cb3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25cb3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25cb40:
    // 0x25cb40: 0xc053e4a  jal         func_14F928
label_25cb44:
    if (ctx->pc == 0x25CB44u) {
        ctx->pc = 0x25CB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CB40u;
        // 0x25cb44: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CB48u;
        goto label_25cb48;
    }
    ctx->pc = 0x25CB40u;
    SET_GPR_U32(ctx, 31, 0x25CB48u);
    ctx->pc = 0x25CB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CB40u;
    // 0x25cb44: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x25CB40u, 0x25CB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CB48u;
label_25cb48:
    // 0x25cb48: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x25cb48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_25cb4c:
    // 0x25cb4c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25cb4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_25cb50:
    // 0x25cb50: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_25cb54:
    if (ctx->pc == 0x25CB54u) {
        ctx->pc = 0x25CB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CB50u;
        // 0x25cb54: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CB58u;
        goto label_25cb58;
    }
    ctx->pc = 0x25CB50u;
    {
        const bool branch_taken_0x25cb50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cb50) {
            ctx->pc = 0x25CB54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25CB50u;
            // 0x25cb54: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25CBA0u;
            goto label_25cba0;
        }
    }
    ctx->pc = 0x25CB58u;
label_25cb58:
    // 0x25cb58: 0x8e0205f0  lw          $v0, 0x5F0($s0)
    ctx->pc = 0x25cb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
label_25cb5c:
    // 0x25cb5c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_25cb60:
    if (ctx->pc == 0x25CB60u) {
        ctx->pc = 0x25CB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CB5Cu;
        // 0x25cb60: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CB64u;
        goto label_25cb64;
    }
    ctx->pc = 0x25CB5Cu;
    {
        const bool branch_taken_0x25cb5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CB5Cu;
        // 0x25cb60: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cb5c) {
            ctx->pc = 0x25CB9Cu;
            goto label_25cb9c;
        }
    }
    ctx->pc = 0x25CB64u;
label_25cb64:
    // 0x25cb64: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x25cb64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
label_25cb68:
    // 0x25cb68: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x25cb68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_25cb6c:
    // 0x25cb6c: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x25cb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_25cb70:
    // 0x25cb70: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x25cb70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25cb74:
    // 0x25cb74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25cb74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25cb78:
    // 0x25cb78: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x25cb78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_25cb7c:
    // 0x25cb7c: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x25cb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_25cb80:
    // 0x25cb80: 0x40f809  jalr        $v0
label_25cb84:
    if (ctx->pc == 0x25CB84u) {
        ctx->pc = 0x25CB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CB80u;
        // 0x25cb84: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CB88u;
        goto label_25cb88;
    }
    ctx->pc = 0x25CB80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25CB88u);
        ctx->pc = 0x25CB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CB80u;
        // 0x25cb84: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CB80u, 0x25CB88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25CB88u;
label_25cb88:
    // 0x25cb88: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x25cb88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
label_25cb8c:
    // 0x25cb8c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25cb8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_25cb90:
    // 0x25cb90: 0x2484b000  addiu       $a0, $a0, -0x5000
    ctx->pc = 0x25cb90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946816));
label_25cb94:
    // 0x25cb94: 0xc0aa65e  jal         func_2A9978
label_25cb98:
    if (ctx->pc == 0x25CB98u) {
        ctx->pc = 0x25CB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CB94u;
        // 0x25cb98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CB9Cu;
        goto label_25cb9c;
    }
    ctx->pc = 0x25CB94u;
    SET_GPR_U32(ctx, 31, 0x25CB9Cu);
    ctx->pc = 0x25CB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CB94u;
    // 0x25cb98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9978u, 0x25CB94u, 0x25CB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CB9Cu;
label_25cb9c:
    // 0x25cb9c: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x25cb9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_25cba0:
    // 0x25cba0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x25cba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_25cba4:
    // 0x25cba4: 0x50400040  beql        $v0, $zero, . + 4 + (0x40 << 2)
label_25cba8:
    if (ctx->pc == 0x25CBA8u) {
        ctx->pc = 0x25CBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CBA4u;
        // 0x25cba8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CBACu;
        goto label_25cbac;
    }
    ctx->pc = 0x25CBA4u;
    {
        const bool branch_taken_0x25cba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cba4) {
            ctx->pc = 0x25CBA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25CBA4u;
            // 0x25cba8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25CCA8u;
            goto label_25cca8;
        }
    }
    ctx->pc = 0x25CBACu;
label_25cbac:
    // 0x25cbac: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x25cbacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
label_25cbb0:
    // 0x25cbb0: 0x1840003c  blez        $v0, . + 4 + (0x3C << 2)
label_25cbb4:
    if (ctx->pc == 0x25CBB4u) {
        ctx->pc = 0x25CBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CBB0u;
        // 0x25cbb4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CBB8u;
        goto label_25cbb8;
    }
    ctx->pc = 0x25CBB0u;
    {
        const bool branch_taken_0x25cbb0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x25CBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CBB0u;
        // 0x25cbb4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cbb0) {
            ctx->pc = 0x25CCA4u;
            goto label_25cca4;
        }
    }
    ctx->pc = 0x25CBB8u;
label_25cbb8:
    // 0x25cbb8: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x25cbb8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_25cbbc:
    // 0x25cbbc: 0x10000039  b           . + 4 + (0x39 << 2)
label_25cbc0:
    if (ctx->pc == 0x25CBC0u) {
        ctx->pc = 0x25CBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CBBCu;
        // 0x25cbc0: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CBC4u;
        goto label_25cbc4;
    }
    ctx->pc = 0x25CBBCu;
    {
        const bool branch_taken_0x25cbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CBBCu;
        // 0x25cbc0: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cbbc) {
            ctx->pc = 0x25CCA4u;
            goto label_25cca4;
        }
    }
    ctx->pc = 0x25CBC4u;
label_25cbc4:
    // 0x25cbc4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25cbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_25cbc8:
    // 0x25cbc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25cbc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25cbcc:
    // 0x25cbcc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25cbccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25cbd0:
    // 0x25cbd0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25cbd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25cbd4:
    // 0x25cbd4: 0x8c451830  lw          $a1, 0x1830($v0)
    ctx->pc = 0x25cbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6192)));
label_25cbd8:
    // 0x25cbd8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25cbd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25cbdc:
    // 0x25cbdc: 0x8c461834  lw          $a2, 0x1834($v0)
    ctx->pc = 0x25cbdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6196)));
label_25cbe0:
    // 0x25cbe0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25cbe0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25cbe4:
    // 0x25cbe4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x25cbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_25cbe8:
    // 0x25cbe8: 0xc0aa15e  jal         func_2A8578
label_25cbec:
    if (ctx->pc == 0x25CBECu) {
        ctx->pc = 0x25CBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CBE8u;
        // 0x25cbec: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CBF0u;
        goto label_25cbf0;
    }
    ctx->pc = 0x25CBE8u;
    SET_GPR_U32(ctx, 31, 0x25CBF0u);
    ctx->pc = 0x25CBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CBE8u;
    // 0x25cbec: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x25CBE8u, 0x25CBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CBF0u;
label_25cbf0:
    // 0x25cbf0: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x25cbf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_25cbf4:
    // 0x25cbf4: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x25cbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_25cbf8:
    // 0x25cbf8: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x25cbf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_25cbfc:
    // 0x25cbfc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25cbfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25cc00:
    // 0x25cc00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25cc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_25cc04:
    // 0x25cc04: 0xa603056e  sh          $v1, 0x56E($s0)
    ctx->pc = 0x25cc04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 3));
label_25cc08:
    // 0x25cc08: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x25cc08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
label_25cc0c:
    // 0x25cc0c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x25cc0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_25cc10:
    // 0x25cc10: 0x8602056e  lh          $v0, 0x56E($s0)
    ctx->pc = 0x25cc10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
label_25cc14:
    // 0x25cc14: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_25cc18:
    if (ctx->pc == 0x25CC18u) {
        ctx->pc = 0x25CC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CC14u;
        // 0x25cc18: 0x9603056e  lhu         $v1, 0x56E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CC1Cu;
        goto label_25cc1c;
    }
    ctx->pc = 0x25CC14u;
    {
        const bool branch_taken_0x25cc14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CC14u;
        // 0x25cc18: 0x9603056e  lhu         $v1, 0x56E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cc14) {
            ctx->pc = 0x25CC3Cu;
            goto label_25cc3c;
        }
    }
    ctx->pc = 0x25CC1Cu;
label_25cc1c:
    // 0x25cc1c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x25cc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_25cc20:
    // 0x25cc20: 0x26240550  addiu       $a0, $s1, 0x550
    ctx->pc = 0x25cc20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
label_25cc24:
    // 0x25cc24: 0xa602056e  sh          $v0, 0x56E($s0)
    ctx->pc = 0x25cc24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 2));
label_25cc28:
    // 0x25cc28: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x25cc28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_25cc2c:
    // 0x25cc2c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x25cc2cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_25cc30:
    // 0x25cc30: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x25cc30u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_25cc34:
    // 0x25cc34: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x25cc34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_25cc38:
    // 0x25cc38: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x25cc38u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_25cc3c:
    // 0x25cc3c: 0xc055f06  jal         func_157C18
label_25cc40:
    if (ctx->pc == 0x25CC40u) {
        ctx->pc = 0x25CC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CC3Cu;
        // 0x25cc40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CC44u;
        goto label_25cc44;
    }
    ctx->pc = 0x25CC3Cu;
    SET_GPR_U32(ctx, 31, 0x25CC44u);
    ctx->pc = 0x25CC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CC3Cu;
    // 0x25cc40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25CC3Cu, 0x25CC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CC44u;
label_25cc44:
    // 0x25cc44: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_25cc48:
    if (ctx->pc == 0x25CC48u) {
        ctx->pc = 0x25CC4Cu;
        goto label_25cc4c;
    }
    ctx->pc = 0x25CC44u;
    {
        const bool branch_taken_0x25cc44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cc44) {
            ctx->pc = 0x25CC84u;
            goto label_25cc84;
        }
    }
    ctx->pc = 0x25CC4Cu;
label_25cc4c:
    // 0x25cc4c: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x25cc4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
label_25cc50:
    // 0x25cc50: 0x1c40000a  bgtz        $v0, . + 4 + (0xA << 2)
label_25cc54:
    if (ctx->pc == 0x25CC54u) {
        ctx->pc = 0x25CC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CC50u;
        // 0x25cc54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CC58u;
        goto label_25cc58;
    }
    ctx->pc = 0x25CC50u;
    {
        const bool branch_taken_0x25cc50 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x25CC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CC50u;
        // 0x25cc54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cc50) {
            ctx->pc = 0x25CC7Cu;
            goto label_25cc7c;
        }
    }
    ctx->pc = 0x25CC58u;
label_25cc58:
    // 0x25cc58: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x25cc58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
label_25cc5c:
    // 0x25cc5c: 0xc097f8c  jal         func_25FE30
label_25cc60:
    if (ctx->pc == 0x25CC60u) {
        ctx->pc = 0x25CC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CC5Cu;
        // 0x25cc60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CC64u;
        goto label_25cc64;
    }
    ctx->pc = 0x25CC5Cu;
    SET_GPR_U32(ctx, 31, 0x25CC64u);
    ctx->pc = 0x25CC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CC5Cu;
    // 0x25cc60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FE30u, 0x25CC5Cu, 0x25CC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CC64u;
label_25cc64:
    // 0x25cc64: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x25cc64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_25cc68:
    // 0x25cc68: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x25cc68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_25cc6c:
    // 0x25cc6c: 0xa20302f5  sb          $v1, 0x2F5($s0)
    ctx->pc = 0x25cc6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
label_25cc70:
    // 0x25cc70: 0xa20302f4  sb          $v1, 0x2F4($s0)
    ctx->pc = 0x25cc70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 3));
label_25cc74:
    // 0x25cc74: 0x1000000b  b           . + 4 + (0xB << 2)
label_25cc78:
    if (ctx->pc == 0x25CC78u) {
        ctx->pc = 0x25CC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CC74u;
        // 0x25cc78: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CC7Cu;
        goto label_25cc7c;
    }
    ctx->pc = 0x25CC74u;
    {
        const bool branch_taken_0x25cc74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CC74u;
        // 0x25cc78: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cc74) {
            ctx->pc = 0x25CCA4u;
            goto label_25cca4;
        }
    }
    ctx->pc = 0x25CC7Cu;
label_25cc7c:
    // 0x25cc7c: 0xc09c176  jal         func_2705D8
label_25cc80:
    if (ctx->pc == 0x25CC80u) {
        ctx->pc = 0x25CC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CC7Cu;
        // 0x25cc80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CC84u;
        goto label_25cc84;
    }
    ctx->pc = 0x25CC7Cu;
    SET_GPR_U32(ctx, 31, 0x25CC84u);
    ctx->pc = 0x25CC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CC7Cu;
    // 0x25cc80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x25CC7Cu, 0x25CC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CC84u;
label_25cc84:
    // 0x25cc84: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25cc84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_25cc88:
    // 0x25cc88: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25cc88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_25cc8c:
    // 0x25cc8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25cc8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25cc90:
    // 0x25cc90: 0xc053e7c  jal         func_14F9F0
label_25cc94:
    if (ctx->pc == 0x25CC94u) {
        ctx->pc = 0x25CC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CC90u;
        // 0x25cc94: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CC98u;
        goto label_25cc98;
    }
    ctx->pc = 0x25CC90u;
    SET_GPR_U32(ctx, 31, 0x25CC98u);
    ctx->pc = 0x25CC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CC90u;
    // 0x25cc94: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x25CC90u, 0x25CC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CC98u;
label_25cc98:
    // 0x25cc98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25cc98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25cc9c:
    // 0x25cc9c: 0xc053e4a  jal         func_14F928
label_25cca0:
    if (ctx->pc == 0x25CCA0u) {
        ctx->pc = 0x25CCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CC9Cu;
        // 0x25cca0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CCA4u;
        goto label_25cca4;
    }
    ctx->pc = 0x25CC9Cu;
    SET_GPR_U32(ctx, 31, 0x25CCA4u);
    ctx->pc = 0x25CCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CC9Cu;
    // 0x25cca0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x25CC9Cu, 0x25CCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CCA4u;
label_25cca4:
    // 0x25cca4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x25cca4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25cca8:
    // 0x25cca8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25cca8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25ccac:
    // 0x25ccac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25ccacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25ccb0:
    // 0x25ccb0: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x25ccb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_25ccb4:
    // 0x25ccb4: 0x3e00008  jr          $ra
label_25ccb8:
    if (ctx->pc == 0x25CCB8u) {
        ctx->pc = 0x25CCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CCB4u;
        // 0x25ccb8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25CCBCu;
        goto label_25ccbc;
    }
    ctx->pc = 0x25CCB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CCB4u;
        // 0x25ccb8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CCB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25CCBCu;
label_25ccbc:
    // 0x25ccbc: 0x0  nop
    ctx->pc = 0x25ccbcu;
    // NOP
    ctx->pc = 0x25ccc0u;
}
