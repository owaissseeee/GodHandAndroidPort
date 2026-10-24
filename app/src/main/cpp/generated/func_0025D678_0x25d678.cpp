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

// Function: func_0025D678
// Address: 0x25d678 - 0x25db70
void func_0025D678_0x25d678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0025D678_0x25d678");
#endif

    switch (ctx->pc) {
        case 0x25d678u: goto label_25d678;
        case 0x25d67cu: goto label_25d67c;
        case 0x25d680u: goto label_25d680;
        case 0x25d684u: goto label_25d684;
        case 0x25d688u: goto label_25d688;
        case 0x25d68cu: goto label_25d68c;
        case 0x25d690u: goto label_25d690;
        case 0x25d694u: goto label_25d694;
        case 0x25d698u: goto label_25d698;
        case 0x25d69cu: goto label_25d69c;
        case 0x25d6a0u: goto label_25d6a0;
        case 0x25d6a4u: goto label_25d6a4;
        case 0x25d6a8u: goto label_25d6a8;
        case 0x25d6acu: goto label_25d6ac;
        case 0x25d6b0u: goto label_25d6b0;
        case 0x25d6b4u: goto label_25d6b4;
        case 0x25d6b8u: goto label_25d6b8;
        case 0x25d6bcu: goto label_25d6bc;
        case 0x25d6c0u: goto label_25d6c0;
        case 0x25d6c4u: goto label_25d6c4;
        case 0x25d6c8u: goto label_25d6c8;
        case 0x25d6ccu: goto label_25d6cc;
        case 0x25d6d0u: goto label_25d6d0;
        case 0x25d6d4u: goto label_25d6d4;
        case 0x25d6d8u: goto label_25d6d8;
        case 0x25d6dcu: goto label_25d6dc;
        case 0x25d6e0u: goto label_25d6e0;
        case 0x25d6e4u: goto label_25d6e4;
        case 0x25d6e8u: goto label_25d6e8;
        case 0x25d6ecu: goto label_25d6ec;
        case 0x25d6f0u: goto label_25d6f0;
        case 0x25d6f4u: goto label_25d6f4;
        case 0x25d6f8u: goto label_25d6f8;
        case 0x25d6fcu: goto label_25d6fc;
        case 0x25d700u: goto label_25d700;
        case 0x25d704u: goto label_25d704;
        case 0x25d708u: goto label_25d708;
        case 0x25d70cu: goto label_25d70c;
        case 0x25d710u: goto label_25d710;
        case 0x25d714u: goto label_25d714;
        case 0x25d718u: goto label_25d718;
        case 0x25d71cu: goto label_25d71c;
        case 0x25d720u: goto label_25d720;
        case 0x25d724u: goto label_25d724;
        case 0x25d728u: goto label_25d728;
        case 0x25d72cu: goto label_25d72c;
        case 0x25d730u: goto label_25d730;
        case 0x25d734u: goto label_25d734;
        case 0x25d738u: goto label_25d738;
        case 0x25d73cu: goto label_25d73c;
        case 0x25d740u: goto label_25d740;
        case 0x25d744u: goto label_25d744;
        case 0x25d748u: goto label_25d748;
        case 0x25d74cu: goto label_25d74c;
        case 0x25d750u: goto label_25d750;
        case 0x25d754u: goto label_25d754;
        case 0x25d758u: goto label_25d758;
        case 0x25d75cu: goto label_25d75c;
        case 0x25d760u: goto label_25d760;
        case 0x25d764u: goto label_25d764;
        case 0x25d768u: goto label_25d768;
        case 0x25d76cu: goto label_25d76c;
        case 0x25d770u: goto label_25d770;
        case 0x25d774u: goto label_25d774;
        case 0x25d778u: goto label_25d778;
        case 0x25d77cu: goto label_25d77c;
        case 0x25d780u: goto label_25d780;
        case 0x25d784u: goto label_25d784;
        case 0x25d788u: goto label_25d788;
        case 0x25d78cu: goto label_25d78c;
        case 0x25d790u: goto label_25d790;
        case 0x25d794u: goto label_25d794;
        case 0x25d798u: goto label_25d798;
        case 0x25d79cu: goto label_25d79c;
        case 0x25d7a0u: goto label_25d7a0;
        case 0x25d7a4u: goto label_25d7a4;
        case 0x25d7a8u: goto label_25d7a8;
        case 0x25d7acu: goto label_25d7ac;
        case 0x25d7b0u: goto label_25d7b0;
        case 0x25d7b4u: goto label_25d7b4;
        case 0x25d7b8u: goto label_25d7b8;
        case 0x25d7bcu: goto label_25d7bc;
        case 0x25d7c0u: goto label_25d7c0;
        case 0x25d7c4u: goto label_25d7c4;
        case 0x25d7c8u: goto label_25d7c8;
        case 0x25d7ccu: goto label_25d7cc;
        case 0x25d7d0u: goto label_25d7d0;
        case 0x25d7d4u: goto label_25d7d4;
        case 0x25d7d8u: goto label_25d7d8;
        case 0x25d7dcu: goto label_25d7dc;
        case 0x25d7e0u: goto label_25d7e0;
        case 0x25d7e4u: goto label_25d7e4;
        case 0x25d7e8u: goto label_25d7e8;
        case 0x25d7ecu: goto label_25d7ec;
        case 0x25d7f0u: goto label_25d7f0;
        case 0x25d7f4u: goto label_25d7f4;
        case 0x25d7f8u: goto label_25d7f8;
        case 0x25d7fcu: goto label_25d7fc;
        case 0x25d800u: goto label_25d800;
        case 0x25d804u: goto label_25d804;
        case 0x25d808u: goto label_25d808;
        case 0x25d80cu: goto label_25d80c;
        case 0x25d810u: goto label_25d810;
        case 0x25d814u: goto label_25d814;
        case 0x25d818u: goto label_25d818;
        case 0x25d81cu: goto label_25d81c;
        case 0x25d820u: goto label_25d820;
        case 0x25d824u: goto label_25d824;
        case 0x25d828u: goto label_25d828;
        case 0x25d82cu: goto label_25d82c;
        case 0x25d830u: goto label_25d830;
        case 0x25d834u: goto label_25d834;
        case 0x25d838u: goto label_25d838;
        case 0x25d83cu: goto label_25d83c;
        case 0x25d840u: goto label_25d840;
        case 0x25d844u: goto label_25d844;
        case 0x25d848u: goto label_25d848;
        case 0x25d84cu: goto label_25d84c;
        case 0x25d850u: goto label_25d850;
        case 0x25d854u: goto label_25d854;
        case 0x25d858u: goto label_25d858;
        case 0x25d85cu: goto label_25d85c;
        case 0x25d860u: goto label_25d860;
        case 0x25d864u: goto label_25d864;
        case 0x25d868u: goto label_25d868;
        case 0x25d86cu: goto label_25d86c;
        case 0x25d870u: goto label_25d870;
        case 0x25d874u: goto label_25d874;
        case 0x25d878u: goto label_25d878;
        case 0x25d87cu: goto label_25d87c;
        case 0x25d880u: goto label_25d880;
        case 0x25d884u: goto label_25d884;
        case 0x25d888u: goto label_25d888;
        case 0x25d88cu: goto label_25d88c;
        case 0x25d890u: goto label_25d890;
        case 0x25d894u: goto label_25d894;
        case 0x25d898u: goto label_25d898;
        case 0x25d89cu: goto label_25d89c;
        case 0x25d8a0u: goto label_25d8a0;
        case 0x25d8a4u: goto label_25d8a4;
        case 0x25d8a8u: goto label_25d8a8;
        case 0x25d8acu: goto label_25d8ac;
        case 0x25d8b0u: goto label_25d8b0;
        case 0x25d8b4u: goto label_25d8b4;
        case 0x25d8b8u: goto label_25d8b8;
        case 0x25d8bcu: goto label_25d8bc;
        case 0x25d8c0u: goto label_25d8c0;
        case 0x25d8c4u: goto label_25d8c4;
        case 0x25d8c8u: goto label_25d8c8;
        case 0x25d8ccu: goto label_25d8cc;
        case 0x25d8d0u: goto label_25d8d0;
        case 0x25d8d4u: goto label_25d8d4;
        case 0x25d8d8u: goto label_25d8d8;
        case 0x25d8dcu: goto label_25d8dc;
        case 0x25d8e0u: goto label_25d8e0;
        case 0x25d8e4u: goto label_25d8e4;
        case 0x25d8e8u: goto label_25d8e8;
        case 0x25d8ecu: goto label_25d8ec;
        case 0x25d8f0u: goto label_25d8f0;
        case 0x25d8f4u: goto label_25d8f4;
        case 0x25d8f8u: goto label_25d8f8;
        case 0x25d8fcu: goto label_25d8fc;
        case 0x25d900u: goto label_25d900;
        case 0x25d904u: goto label_25d904;
        case 0x25d908u: goto label_25d908;
        case 0x25d90cu: goto label_25d90c;
        case 0x25d910u: goto label_25d910;
        case 0x25d914u: goto label_25d914;
        case 0x25d918u: goto label_25d918;
        case 0x25d91cu: goto label_25d91c;
        case 0x25d920u: goto label_25d920;
        case 0x25d924u: goto label_25d924;
        case 0x25d928u: goto label_25d928;
        case 0x25d92cu: goto label_25d92c;
        case 0x25d930u: goto label_25d930;
        case 0x25d934u: goto label_25d934;
        case 0x25d938u: goto label_25d938;
        case 0x25d93cu: goto label_25d93c;
        case 0x25d940u: goto label_25d940;
        case 0x25d944u: goto label_25d944;
        case 0x25d948u: goto label_25d948;
        case 0x25d94cu: goto label_25d94c;
        case 0x25d950u: goto label_25d950;
        case 0x25d954u: goto label_25d954;
        case 0x25d958u: goto label_25d958;
        case 0x25d95cu: goto label_25d95c;
        case 0x25d960u: goto label_25d960;
        case 0x25d964u: goto label_25d964;
        case 0x25d968u: goto label_25d968;
        case 0x25d96cu: goto label_25d96c;
        case 0x25d970u: goto label_25d970;
        case 0x25d974u: goto label_25d974;
        case 0x25d978u: goto label_25d978;
        case 0x25d97cu: goto label_25d97c;
        case 0x25d980u: goto label_25d980;
        case 0x25d984u: goto label_25d984;
        case 0x25d988u: goto label_25d988;
        case 0x25d98cu: goto label_25d98c;
        case 0x25d990u: goto label_25d990;
        case 0x25d994u: goto label_25d994;
        case 0x25d998u: goto label_25d998;
        case 0x25d99cu: goto label_25d99c;
        case 0x25d9a0u: goto label_25d9a0;
        case 0x25d9a4u: goto label_25d9a4;
        case 0x25d9a8u: goto label_25d9a8;
        case 0x25d9acu: goto label_25d9ac;
        case 0x25d9b0u: goto label_25d9b0;
        case 0x25d9b4u: goto label_25d9b4;
        case 0x25d9b8u: goto label_25d9b8;
        case 0x25d9bcu: goto label_25d9bc;
        case 0x25d9c0u: goto label_25d9c0;
        case 0x25d9c4u: goto label_25d9c4;
        case 0x25d9c8u: goto label_25d9c8;
        case 0x25d9ccu: goto label_25d9cc;
        case 0x25d9d0u: goto label_25d9d0;
        case 0x25d9d4u: goto label_25d9d4;
        case 0x25d9d8u: goto label_25d9d8;
        case 0x25d9dcu: goto label_25d9dc;
        case 0x25d9e0u: goto label_25d9e0;
        case 0x25d9e4u: goto label_25d9e4;
        case 0x25d9e8u: goto label_25d9e8;
        case 0x25d9ecu: goto label_25d9ec;
        case 0x25d9f0u: goto label_25d9f0;
        case 0x25d9f4u: goto label_25d9f4;
        case 0x25d9f8u: goto label_25d9f8;
        case 0x25d9fcu: goto label_25d9fc;
        case 0x25da00u: goto label_25da00;
        case 0x25da04u: goto label_25da04;
        case 0x25da08u: goto label_25da08;
        case 0x25da0cu: goto label_25da0c;
        case 0x25da10u: goto label_25da10;
        case 0x25da14u: goto label_25da14;
        case 0x25da18u: goto label_25da18;
        case 0x25da1cu: goto label_25da1c;
        case 0x25da20u: goto label_25da20;
        case 0x25da24u: goto label_25da24;
        case 0x25da28u: goto label_25da28;
        case 0x25da2cu: goto label_25da2c;
        case 0x25da30u: goto label_25da30;
        case 0x25da34u: goto label_25da34;
        case 0x25da38u: goto label_25da38;
        case 0x25da3cu: goto label_25da3c;
        case 0x25da40u: goto label_25da40;
        case 0x25da44u: goto label_25da44;
        case 0x25da48u: goto label_25da48;
        case 0x25da4cu: goto label_25da4c;
        case 0x25da50u: goto label_25da50;
        case 0x25da54u: goto label_25da54;
        case 0x25da58u: goto label_25da58;
        case 0x25da5cu: goto label_25da5c;
        case 0x25da60u: goto label_25da60;
        case 0x25da64u: goto label_25da64;
        case 0x25da68u: goto label_25da68;
        case 0x25da6cu: goto label_25da6c;
        case 0x25da70u: goto label_25da70;
        case 0x25da74u: goto label_25da74;
        case 0x25da78u: goto label_25da78;
        case 0x25da7cu: goto label_25da7c;
        case 0x25da80u: goto label_25da80;
        case 0x25da84u: goto label_25da84;
        case 0x25da88u: goto label_25da88;
        case 0x25da8cu: goto label_25da8c;
        case 0x25da90u: goto label_25da90;
        case 0x25da94u: goto label_25da94;
        case 0x25da98u: goto label_25da98;
        case 0x25da9cu: goto label_25da9c;
        case 0x25daa0u: goto label_25daa0;
        case 0x25daa4u: goto label_25daa4;
        case 0x25daa8u: goto label_25daa8;
        case 0x25daacu: goto label_25daac;
        case 0x25dab0u: goto label_25dab0;
        case 0x25dab4u: goto label_25dab4;
        case 0x25dab8u: goto label_25dab8;
        case 0x25dabcu: goto label_25dabc;
        case 0x25dac0u: goto label_25dac0;
        case 0x25dac4u: goto label_25dac4;
        case 0x25dac8u: goto label_25dac8;
        case 0x25daccu: goto label_25dacc;
        case 0x25dad0u: goto label_25dad0;
        case 0x25dad4u: goto label_25dad4;
        case 0x25dad8u: goto label_25dad8;
        case 0x25dadcu: goto label_25dadc;
        case 0x25dae0u: goto label_25dae0;
        case 0x25dae4u: goto label_25dae4;
        case 0x25dae8u: goto label_25dae8;
        case 0x25daecu: goto label_25daec;
        case 0x25daf0u: goto label_25daf0;
        case 0x25daf4u: goto label_25daf4;
        case 0x25daf8u: goto label_25daf8;
        case 0x25dafcu: goto label_25dafc;
        case 0x25db00u: goto label_25db00;
        case 0x25db04u: goto label_25db04;
        case 0x25db08u: goto label_25db08;
        case 0x25db0cu: goto label_25db0c;
        case 0x25db10u: goto label_25db10;
        case 0x25db14u: goto label_25db14;
        case 0x25db18u: goto label_25db18;
        case 0x25db1cu: goto label_25db1c;
        case 0x25db20u: goto label_25db20;
        case 0x25db24u: goto label_25db24;
        case 0x25db28u: goto label_25db28;
        case 0x25db2cu: goto label_25db2c;
        case 0x25db30u: goto label_25db30;
        case 0x25db34u: goto label_25db34;
        case 0x25db38u: goto label_25db38;
        case 0x25db3cu: goto label_25db3c;
        case 0x25db40u: goto label_25db40;
        case 0x25db44u: goto label_25db44;
        case 0x25db48u: goto label_25db48;
        case 0x25db4cu: goto label_25db4c;
        case 0x25db50u: goto label_25db50;
        case 0x25db54u: goto label_25db54;
        case 0x25db58u: goto label_25db58;
        case 0x25db5cu: goto label_25db5c;
        case 0x25db60u: goto label_25db60;
        case 0x25db64u: goto label_25db64;
        case 0x25db68u: goto label_25db68;
        case 0x25db6cu: goto label_25db6c;
        default: break;
    }

    ctx->pc = 0x25d678u;

label_25d678:
    // 0x25d678: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x25d678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_25d67c:
    // 0x25d67c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x25d67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_25d680:
    // 0x25d680: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25d680u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25d684:
    // 0x25d684: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x25d684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_25d688:
    // 0x25d688: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25d688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_25d68c:
    // 0x25d68c: 0xc0b6dac  jal         func_2DB6B0
label_25d690:
    if (ctx->pc == 0x25D690u) {
        ctx->pc = 0x25D690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D68Cu;
        // 0x25d690: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D694u;
        goto label_25d694;
    }
    ctx->pc = 0x25D68Cu;
    SET_GPR_U32(ctx, 31, 0x25D694u);
    ctx->pc = 0x25D690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D68Cu;
    // 0x25d690: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x25D68Cu, 0x25D694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D694u;
label_25d694:
    // 0x25d694: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25d694u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25d698:
    // 0x25d698: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25d698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25d69c:
    // 0x25d69c: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x25d69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_25d6a0:
    // 0x25d6a0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x25d6a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_25d6a4:
    // 0x25d6a4: 0xc0560a2  jal         func_158288
label_25d6a8:
    if (ctx->pc == 0x25D6A8u) {
        ctx->pc = 0x25D6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D6A4u;
        // 0x25d6a8: 0xe60005a8  swc1        $f0, 0x5A8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1448), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D6ACu;
        goto label_25d6ac;
    }
    ctx->pc = 0x25D6A4u;
    SET_GPR_U32(ctx, 31, 0x25D6ACu);
    ctx->pc = 0x25D6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D6A4u;
    // 0x25d6a8: 0xe60005a8  swc1        $f0, 0x5A8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1448), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x25D6A4u, 0x25D6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D6ACu;
label_25d6ac:
    // 0x25d6ac: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x25d6acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_25d6b0:
    // 0x25d6b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25d6b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_25d6b4:
    // 0x25d6b4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x25d6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_25d6b8:
    // 0x25d6b8: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x25d6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
label_25d6bc:
    // 0x25d6bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25d6bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25d6c0:
    // 0x25d6c0: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x25d6c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
label_25d6c4:
    // 0x25d6c4: 0xc04d476  jal         func_1351D8
label_25d6c8:
    if (ctx->pc == 0x25D6C8u) {
        ctx->pc = 0x25D6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D6C4u;
        // 0x25d6c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D6CCu;
        goto label_25d6cc;
    }
    ctx->pc = 0x25D6C4u;
    SET_GPR_U32(ctx, 31, 0x25D6CCu);
    ctx->pc = 0x25D6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D6C4u;
    // 0x25d6c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x25D6C4u, 0x25D6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D6CCu;
label_25d6cc:
    // 0x25d6cc: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x25d6ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_25d6d0:
    // 0x25d6d0: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x25d6d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_25d6d4:
    // 0x25d6d4: 0x104000ed  beqz        $v0, . + 4 + (0xED << 2)
label_25d6d8:
    if (ctx->pc == 0x25D6D8u) {
        ctx->pc = 0x25D6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D6D4u;
        // 0x25d6d8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D6DCu;
        goto label_25d6dc;
    }
    ctx->pc = 0x25D6D4u;
    {
        const bool branch_taken_0x25d6d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D6D4u;
        // 0x25d6d8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d6d4) {
            ctx->pc = 0x25DA8Cu;
            goto label_25da8c;
        }
    }
    ctx->pc = 0x25D6DCu;
label_25d6dc:
    // 0x25d6dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25d6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_25d6e0:
    // 0x25d6e0: 0x24423a40  addiu       $v0, $v0, 0x3A40
    ctx->pc = 0x25d6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14912));
label_25d6e4:
    // 0x25d6e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25d6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25d6e8:
    // 0x25d6e8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25d6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25d6ec:
    // 0x25d6ec: 0x800008  jr          $a0
label_25d6f0:
    if (ctx->pc == 0x25D6F0u) {
        ctx->pc = 0x25D6F4u;
        goto label_25d6f4;
    }
    ctx->pc = 0x25D6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25D6F4u: goto label_25d6f4;
            case 0x25D73Cu: goto label_25d73c;
            case 0x25D774u: goto label_25d774;
            case 0x25D7BCu: goto label_25d7bc;
            case 0x25D86Cu: goto label_25d86c;
            case 0x25D8BCu: goto label_25d8bc;
            case 0x25D9A8u: goto label_25d9a8;
            case 0x25D9F8u: goto label_25d9f8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D6ECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25D6F4u;
label_25d6f4:
    // 0x25d6f4: 0xc09ac7a  jal         func_26B1E8
label_25d6f8:
    if (ctx->pc == 0x25D6F8u) {
        ctx->pc = 0x25D6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D6F4u;
        // 0x25d6f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D6FCu;
        goto label_25d6fc;
    }
    ctx->pc = 0x25D6F4u;
    SET_GPR_U32(ctx, 31, 0x25D6FCu);
    ctx->pc = 0x25D6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D6F4u;
    // 0x25d6f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B1E8u, 0x25D6F4u, 0x25D6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D6FCu;
label_25d6fc:
    // 0x25d6fc: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25d6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_25d700:
    // 0x25d700: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25d700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25d704:
    // 0x25d704: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25d704u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25d708:
    // 0x25d708: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25d708u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25d70c:
    // 0x25d70c: 0x8c4531e4  lw          $a1, 0x31E4($v0)
    ctx->pc = 0x25d70cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12772)));
label_25d710:
    // 0x25d710: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25d710u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25d714:
    // 0x25d714: 0x8c4631e8  lw          $a2, 0x31E8($v0)
    ctx->pc = 0x25d714u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12776)));
label_25d718:
    // 0x25d718: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25d718u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25d71c:
    // 0x25d71c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x25d71cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_25d720:
    // 0x25d720: 0xc0aa15e  jal         func_2A8578
label_25d724:
    if (ctx->pc == 0x25D724u) {
        ctx->pc = 0x25D724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D720u;
        // 0x25d724: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D728u;
        goto label_25d728;
    }
    ctx->pc = 0x25D720u;
    SET_GPR_U32(ctx, 31, 0x25D728u);
    ctx->pc = 0x25D724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D720u;
    // 0x25d724: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x25D720u, 0x25D728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D728u;
label_25d728:
    // 0x25d728: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x25d728u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_25d72c:
    // 0x25d72c: 0xae0016ec  sw          $zero, 0x16EC($s0)
    ctx->pc = 0x25d72cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5868), GPR_U32(ctx, 0));
label_25d730:
    // 0x25d730: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25d730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_25d734:
    // 0x25d734: 0xa600056a  sh          $zero, 0x56A($s0)
    ctx->pc = 0x25d734u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 0));
label_25d738:
    // 0x25d738: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x25d738u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_25d73c:
    // 0x25d73c: 0x26230550  addiu       $v1, $s1, 0x550
    ctx->pc = 0x25d73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
label_25d740:
    // 0x25d740: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x25d740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_25d744:
    // 0x25d744: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x25d744u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_25d748:
    // 0x25d748: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x25d748u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_25d74c:
    // 0x25d74c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x25d74cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_25d750:
    // 0x25d750: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x25d750u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_25d754:
    // 0x25d754: 0xc055f06  jal         func_157C18
label_25d758:
    if (ctx->pc == 0x25D758u) {
        ctx->pc = 0x25D758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D754u;
        // 0x25d758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D75Cu;
        goto label_25d75c;
    }
    ctx->pc = 0x25D754u;
    SET_GPR_U32(ctx, 31, 0x25D75Cu);
    ctx->pc = 0x25D758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D754u;
    // 0x25d758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25D754u, 0x25D75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D75Cu;
label_25d75c:
    // 0x25d75c: 0x10400088  beqz        $v0, . + 4 + (0x88 << 2)
label_25d760:
    if (ctx->pc == 0x25D760u) {
        ctx->pc = 0x25D764u;
        goto label_25d764;
    }
    ctx->pc = 0x25D75Cu;
    {
        const bool branch_taken_0x25d75c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d75c) {
            ctx->pc = 0x25D980u;
            goto label_25d980;
        }
    }
    ctx->pc = 0x25D764u;
label_25d764:
    // 0x25d764: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x25d764u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_25d768:
    // 0x25d768: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25d768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_25d76c:
    // 0x25d76c: 0x10000084  b           . + 4 + (0x84 << 2)
label_25d770:
    if (ctx->pc == 0x25D770u) {
        ctx->pc = 0x25D770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D76Cu;
        // 0x25d770: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D774u;
        goto label_25d774;
    }
    ctx->pc = 0x25D76Cu;
    {
        const bool branch_taken_0x25d76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D76Cu;
        // 0x25d770: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d76c) {
            ctx->pc = 0x25D980u;
            goto label_25d980;
        }
    }
    ctx->pc = 0x25D774u;
label_25d774:
    // 0x25d774: 0xc09ac7a  jal         func_26B1E8
label_25d778:
    if (ctx->pc == 0x25D778u) {
        ctx->pc = 0x25D778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D774u;
        // 0x25d778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D77Cu;
        goto label_25d77c;
    }
    ctx->pc = 0x25D774u;
    SET_GPR_U32(ctx, 31, 0x25D77Cu);
    ctx->pc = 0x25D778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D774u;
    // 0x25d778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B1E8u, 0x25D774u, 0x25D77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D77Cu;
label_25d77c:
    // 0x25d77c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25d77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_25d780:
    // 0x25d780: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25d780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25d784:
    // 0x25d784: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25d784u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25d788:
    // 0x25d788: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25d788u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25d78c:
    // 0x25d78c: 0x8c4531ec  lw          $a1, 0x31EC($v0)
    ctx->pc = 0x25d78cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12780)));
label_25d790:
    // 0x25d790: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25d790u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25d794:
    // 0x25d794: 0x8c4631f0  lw          $a2, 0x31F0($v0)
    ctx->pc = 0x25d794u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12784)));
label_25d798:
    // 0x25d798: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25d798u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25d79c:
    // 0x25d79c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x25d79cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_25d7a0:
    // 0x25d7a0: 0xc0aa15e  jal         func_2A8578
label_25d7a4:
    if (ctx->pc == 0x25D7A4u) {
        ctx->pc = 0x25D7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D7A0u;
        // 0x25d7a4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D7A8u;
        goto label_25d7a8;
    }
    ctx->pc = 0x25D7A0u;
    SET_GPR_U32(ctx, 31, 0x25D7A8u);
    ctx->pc = 0x25D7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D7A0u;
    // 0x25d7a4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x25D7A0u, 0x25D7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D7A8u;
label_25d7a8:
    // 0x25d7a8: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x25d7a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_25d7ac:
    // 0x25d7ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25d7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25d7b0:
    // 0x25d7b0: 0xae0305f0  sw          $v1, 0x5F0($s0)
    ctx->pc = 0x25d7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 3));
label_25d7b4:
    // 0x25d7b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25d7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_25d7b8:
    // 0x25d7b8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x25d7b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_25d7bc:
    // 0x25d7bc: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x25d7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_25d7c0:
    // 0x25d7c0: 0x26220550  addiu       $v0, $s1, 0x550
    ctx->pc = 0x25d7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
label_25d7c4:
    // 0x25d7c4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x25d7c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_25d7c8:
    // 0x25d7c8: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x25d7c8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_25d7cc:
    // 0x25d7cc: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x25d7ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_25d7d0:
    // 0x25d7d0: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x25d7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_25d7d4:
    // 0x25d7d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25d7d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_25d7d8:
    // 0x25d7d8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25d7d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_25d7dc:
    // 0x25d7dc: 0xc055f06  jal         func_157C18
label_25d7e0:
    if (ctx->pc == 0x25D7E0u) {
        ctx->pc = 0x25D7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D7DCu;
        // 0x25d7e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D7E4u;
        goto label_25d7e4;
    }
    ctx->pc = 0x25D7DCu;
    SET_GPR_U32(ctx, 31, 0x25D7E4u);
    ctx->pc = 0x25D7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D7DCu;
    // 0x25d7e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25D7DCu, 0x25D7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D7E4u;
label_25d7e4:
    // 0x25d7e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25d7e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25d7e8:
    // 0x25d7e8: 0xc053e7c  jal         func_14F9F0
label_25d7ec:
    if (ctx->pc == 0x25D7ECu) {
        ctx->pc = 0x25D7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D7E8u;
        // 0x25d7ec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D7F0u;
        goto label_25d7f0;
    }
    ctx->pc = 0x25D7E8u;
    SET_GPR_U32(ctx, 31, 0x25D7F0u);
    ctx->pc = 0x25D7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D7E8u;
    // 0x25d7ec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x25D7E8u, 0x25D7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D7F0u;
label_25d7f0:
    // 0x25d7f0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25d7f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_25d7f4:
    // 0x25d7f4: 0xc053e4a  jal         func_14F928
label_25d7f8:
    if (ctx->pc == 0x25D7F8u) {
        ctx->pc = 0x25D7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D7F4u;
        // 0x25d7f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D7FCu;
        goto label_25d7fc;
    }
    ctx->pc = 0x25D7F4u;
    SET_GPR_U32(ctx, 31, 0x25D7FCu);
    ctx->pc = 0x25D7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D7F4u;
    // 0x25d7f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x25D7F4u, 0x25D7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D7FCu;
label_25d7fc:
    // 0x25d7fc: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x25d7fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_25d800:
    // 0x25d800: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25d800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_25d804:
    // 0x25d804: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_25d808:
    if (ctx->pc == 0x25D808u) {
        ctx->pc = 0x25D808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D804u;
        // 0x25d808: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D80Cu;
        goto label_25d80c;
    }
    ctx->pc = 0x25D804u;
    {
        const bool branch_taken_0x25d804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D804u;
        // 0x25d808: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d804) {
            ctx->pc = 0x25D85Cu;
            goto label_25d85c;
        }
    }
    ctx->pc = 0x25D80Cu;
label_25d80c:
    // 0x25d80c: 0x8e0205f0  lw          $v0, 0x5F0($s0)
    ctx->pc = 0x25d80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
label_25d810:
    // 0x25d810: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_25d814:
    if (ctx->pc == 0x25D814u) {
        ctx->pc = 0x25D814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D810u;
        // 0x25d814: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D818u;
        goto label_25d818;
    }
    ctx->pc = 0x25D810u;
    {
        const bool branch_taken_0x25d810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D810u;
        // 0x25d814: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d810) {
            ctx->pc = 0x25D860u;
            goto label_25d860;
        }
    }
    ctx->pc = 0x25D818u;
label_25d818:
    // 0x25d818: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x25d818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
label_25d81c:
    // 0x25d81c: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x25d81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_25d820:
    // 0x25d820: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x25d820u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25d824:
    // 0x25d824: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25d824u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25d828:
    // 0x25d828: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25d828u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25d82c:
    // 0x25d82c: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x25d82cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_25d830:
    // 0x25d830: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x25d830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_25d834:
    // 0x25d834: 0x40f809  jalr        $v0
label_25d838:
    if (ctx->pc == 0x25D838u) {
        ctx->pc = 0x25D838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D834u;
        // 0x25d838: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D83Cu;
        goto label_25d83c;
    }
    ctx->pc = 0x25D834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25D83Cu);
        ctx->pc = 0x25D838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D834u;
        // 0x25d838: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D834u, 0x25D83Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25D83Cu;
label_25d83c:
    // 0x25d83c: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x25d83cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
label_25d840:
    // 0x25d840: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x25d840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_25d844:
    // 0x25d844: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25d844u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25d848:
    // 0x25d848: 0x2484b000  addiu       $a0, $a0, -0x5000
    ctx->pc = 0x25d848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946816));
label_25d84c:
    // 0x25d84c: 0xc0aa65e  jal         func_2A9978
label_25d850:
    if (ctx->pc == 0x25D850u) {
        ctx->pc = 0x25D850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D84Cu;
        // 0x25d850: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D854u;
        goto label_25d854;
    }
    ctx->pc = 0x25D84Cu;
    SET_GPR_U32(ctx, 31, 0x25D854u);
    ctx->pc = 0x25D850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D84Cu;
    // 0x25d850: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9978u, 0x25D84Cu, 0x25D854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D854u;
label_25d854:
    // 0x25d854: 0x10000003  b           . + 4 + (0x3 << 2)
label_25d858:
    if (ctx->pc == 0x25D858u) {
        ctx->pc = 0x25D858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D854u;
        // 0x25d858: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D85Cu;
        goto label_25d85c;
    }
    ctx->pc = 0x25D854u;
    {
        const bool branch_taken_0x25d854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D854u;
        // 0x25d858: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d854) {
            ctx->pc = 0x25D864u;
            goto label_25d864;
        }
    }
    ctx->pc = 0x25D85Cu;
label_25d85c:
    // 0x25d85c: 0xae0205f0  sw          $v0, 0x5F0($s0)
    ctx->pc = 0x25d85cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
label_25d860:
    // 0x25d860: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x25d860u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_25d864:
    // 0x25d864: 0x10000089  b           . + 4 + (0x89 << 2)
label_25d868:
    if (ctx->pc == 0x25D868u) {
        ctx->pc = 0x25D868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D864u;
        // 0x25d868: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D86Cu;
        goto label_25d86c;
    }
    ctx->pc = 0x25D864u;
    {
        const bool branch_taken_0x25d864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D864u;
        // 0x25d868: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d864) {
            ctx->pc = 0x25DA8Cu;
            goto label_25da8c;
        }
    }
    ctx->pc = 0x25D86Cu;
label_25d86c:
    // 0x25d86c: 0xc09ac7a  jal         func_26B1E8
label_25d870:
    if (ctx->pc == 0x25D870u) {
        ctx->pc = 0x25D870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D86Cu;
        // 0x25d870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D874u;
        goto label_25d874;
    }
    ctx->pc = 0x25D86Cu;
    SET_GPR_U32(ctx, 31, 0x25D874u);
    ctx->pc = 0x25D870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D86Cu;
    // 0x25d870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B1E8u, 0x25D86Cu, 0x25D874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D874u;
label_25d874:
    // 0x25d874: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25d874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_25d878:
    // 0x25d878: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25d878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25d87c:
    // 0x25d87c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25d87cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25d880:
    // 0x25d880: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25d880u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25d884:
    // 0x25d884: 0x8c4531f4  lw          $a1, 0x31F4($v0)
    ctx->pc = 0x25d884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12788)));
label_25d888:
    // 0x25d888: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25d888u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25d88c:
    // 0x25d88c: 0x8c4631f8  lw          $a2, 0x31F8($v0)
    ctx->pc = 0x25d88cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12792)));
label_25d890:
    // 0x25d890: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25d890u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25d894:
    // 0x25d894: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x25d894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_25d898:
    // 0x25d898: 0xc0aa15e  jal         func_2A8578
label_25d89c:
    if (ctx->pc == 0x25D89Cu) {
        ctx->pc = 0x25D89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D898u;
        // 0x25d89c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D8A0u;
        goto label_25d8a0;
    }
    ctx->pc = 0x25D898u;
    SET_GPR_U32(ctx, 31, 0x25D8A0u);
    ctx->pc = 0x25D89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D898u;
    // 0x25d89c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x25D898u, 0x25D8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D8A0u;
label_25d8a0:
    // 0x25d8a0: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x25d8a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_25d8a4:
    // 0x25d8a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25d8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25d8a8:
    // 0x25d8a8: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x25d8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_25d8ac:
    // 0x25d8ac: 0xae0305f0  sw          $v1, 0x5F0($s0)
    ctx->pc = 0x25d8acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 3));
label_25d8b0:
    // 0x25d8b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25d8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_25d8b4:
    // 0x25d8b4: 0xa604056e  sh          $a0, 0x56E($s0)
    ctx->pc = 0x25d8b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 4));
label_25d8b8:
    // 0x25d8b8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x25d8b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_25d8bc:
    // 0x25d8bc: 0x8602056e  lh          $v0, 0x56E($s0)
    ctx->pc = 0x25d8bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
label_25d8c0:
    // 0x25d8c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_25d8c4:
    if (ctx->pc == 0x25D8C4u) {
        ctx->pc = 0x25D8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D8C0u;
        // 0x25d8c4: 0x9603056e  lhu         $v1, 0x56E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D8C8u;
        goto label_25d8c8;
    }
    ctx->pc = 0x25D8C0u;
    {
        const bool branch_taken_0x25d8c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D8C0u;
        // 0x25d8c4: 0x9603056e  lhu         $v1, 0x56E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d8c0) {
            ctx->pc = 0x25D8E8u;
            goto label_25d8e8;
        }
    }
    ctx->pc = 0x25D8C8u;
label_25d8c8:
    // 0x25d8c8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x25d8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_25d8cc:
    // 0x25d8cc: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x25d8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_25d8d0:
    // 0x25d8d0: 0xa602056e  sh          $v0, 0x56E($s0)
    ctx->pc = 0x25d8d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 2));
label_25d8d4:
    // 0x25d8d4: 0x26230550  addiu       $v1, $s1, 0x550
    ctx->pc = 0x25d8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
label_25d8d8:
    // 0x25d8d8: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x25d8d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_25d8dc:
    // 0x25d8dc: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x25d8dcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_25d8e0:
    // 0x25d8e0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x25d8e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_25d8e4:
    // 0x25d8e4: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x25d8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_25d8e8:
    // 0x25d8e8: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x25d8e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_25d8ec:
    // 0x25d8ec: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x25d8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_25d8f0:
    // 0x25d8f0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_25d8f4:
    if (ctx->pc == 0x25D8F4u) {
        ctx->pc = 0x25D8F8u;
        goto label_25d8f8;
    }
    ctx->pc = 0x25D8F0u;
    {
        const bool branch_taken_0x25d8f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d8f0) {
            ctx->pc = 0x25D954u;
            goto label_25d954;
        }
    }
    ctx->pc = 0x25D8F8u;
label_25d8f8:
    // 0x25d8f8: 0x8e0205f0  lw          $v0, 0x5F0($s0)
    ctx->pc = 0x25d8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
label_25d8fc:
    // 0x25d8fc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_25d900:
    if (ctx->pc == 0x25D900u) {
        ctx->pc = 0x25D900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D8FCu;
        // 0x25d900: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D904u;
        goto label_25d904;
    }
    ctx->pc = 0x25D8FCu;
    {
        const bool branch_taken_0x25d8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D8FCu;
        // 0x25d900: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d8fc) {
            ctx->pc = 0x25D954u;
            goto label_25d954;
        }
    }
    ctx->pc = 0x25D904u;
label_25d904:
    // 0x25d904: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x25d904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_25d908:
    // 0x25d908: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x25d908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
label_25d90c:
    // 0x25d90c: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x25d90cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_25d910:
    // 0x25d910: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25d910u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25d914:
    // 0x25d914: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25d914u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25d918:
    // 0x25d918: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x25d918u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_25d91c:
    // 0x25d91c: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x25d91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_25d920:
    // 0x25d920: 0x40f809  jalr        $v0
label_25d924:
    if (ctx->pc == 0x25D924u) {
        ctx->pc = 0x25D924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D920u;
        // 0x25d924: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D928u;
        goto label_25d928;
    }
    ctx->pc = 0x25D920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25D928u);
        ctx->pc = 0x25D924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D920u;
        // 0x25d924: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D920u, 0x25D928u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25D928u;
label_25d928:
    // 0x25d928: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x25d928u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
label_25d92c:
    // 0x25d92c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25d92cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_25d930:
    // 0x25d930: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25d930u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25d934:
    // 0x25d934: 0x2484b000  addiu       $a0, $a0, -0x5000
    ctx->pc = 0x25d934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946816));
label_25d938:
    // 0x25d938: 0xc0aa65e  jal         func_2A9978
label_25d93c:
    if (ctx->pc == 0x25D93Cu) {
        ctx->pc = 0x25D93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D938u;
        // 0x25d93c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D940u;
        goto label_25d940;
    }
    ctx->pc = 0x25D938u;
    SET_GPR_U32(ctx, 31, 0x25D940u);
    ctx->pc = 0x25D93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D938u;
    // 0x25d93c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9978u, 0x25D938u, 0x25D940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D940u;
label_25d940:
    // 0x25d940: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x25d940u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
label_25d944:
    // 0x25d944: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x25d944u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_25d948:
    // 0x25d948: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_25d94c:
    if (ctx->pc == 0x25D94Cu) {
        ctx->pc = 0x25D94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D948u;
        // 0x25d94c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D950u;
        goto label_25d950;
    }
    ctx->pc = 0x25D948u;
    {
        const bool branch_taken_0x25d948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D948u;
        // 0x25d94c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d948) {
            ctx->pc = 0x25D954u;
            goto label_25d954;
        }
    }
    ctx->pc = 0x25D950u;
label_25d950:
    // 0x25d950: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x25d950u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
label_25d954:
    // 0x25d954: 0xc055f06  jal         func_157C18
label_25d958:
    if (ctx->pc == 0x25D958u) {
        ctx->pc = 0x25D958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D954u;
        // 0x25d958: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D95Cu;
        goto label_25d95c;
    }
    ctx->pc = 0x25D954u;
    SET_GPR_U32(ctx, 31, 0x25D95Cu);
    ctx->pc = 0x25D958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D954u;
    // 0x25d958: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25D954u, 0x25D95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D95Cu;
label_25d95c:
    // 0x25d95c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_25d960:
    if (ctx->pc == 0x25D960u) {
        ctx->pc = 0x25D964u;
        goto label_25d964;
    }
    ctx->pc = 0x25D95Cu;
    {
        const bool branch_taken_0x25d95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d95c) {
            ctx->pc = 0x25D980u;
            goto label_25d980;
        }
    }
    ctx->pc = 0x25D964u;
label_25d964:
    // 0x25d964: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x25d964u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
label_25d968:
    // 0x25d968: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x25d968u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_25d96c:
    // 0x25d96c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_25d970:
    if (ctx->pc == 0x25D970u) {
        ctx->pc = 0x25D970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D96Cu;
        // 0x25d970: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D974u;
        goto label_25d974;
    }
    ctx->pc = 0x25D96Cu;
    {
        const bool branch_taken_0x25d96c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D96Cu;
        // 0x25d970: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d96c) {
            ctx->pc = 0x25D978u;
            goto label_25d978;
        }
    }
    ctx->pc = 0x25D974u;
label_25d974:
    // 0x25d974: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x25d974u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
label_25d978:
    // 0x25d978: 0xc09c176  jal         func_2705D8
label_25d97c:
    if (ctx->pc == 0x25D97Cu) {
        ctx->pc = 0x25D97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D978u;
        // 0x25d97c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D980u;
        goto label_25d980;
    }
    ctx->pc = 0x25D978u;
    SET_GPR_U32(ctx, 31, 0x25D980u);
    ctx->pc = 0x25D97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D978u;
    // 0x25d97c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x25D978u, 0x25D980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D980u;
label_25d980:
    // 0x25d980: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25d980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_25d984:
    // 0x25d984: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25d984u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_25d988:
    // 0x25d988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25d988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25d98c:
    // 0x25d98c: 0xc053e7c  jal         func_14F9F0
label_25d990:
    if (ctx->pc == 0x25D990u) {
        ctx->pc = 0x25D990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D98Cu;
        // 0x25d990: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D994u;
        goto label_25d994;
    }
    ctx->pc = 0x25D98Cu;
    SET_GPR_U32(ctx, 31, 0x25D994u);
    ctx->pc = 0x25D990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D98Cu;
    // 0x25d990: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x25D98Cu, 0x25D994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D994u;
label_25d994:
    // 0x25d994: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25d994u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_25d998:
    // 0x25d998: 0xc053e4a  jal         func_14F928
label_25d99c:
    if (ctx->pc == 0x25D99Cu) {
        ctx->pc = 0x25D99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D998u;
        // 0x25d99c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D9A0u;
        goto label_25d9a0;
    }
    ctx->pc = 0x25D998u;
    SET_GPR_U32(ctx, 31, 0x25D9A0u);
    ctx->pc = 0x25D99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D998u;
    // 0x25d99c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x25D998u, 0x25D9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D9A0u;
label_25d9a0:
    // 0x25d9a0: 0x1000003b  b           . + 4 + (0x3B << 2)
label_25d9a4:
    if (ctx->pc == 0x25D9A4u) {
        ctx->pc = 0x25D9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D9A0u;
        // 0x25d9a4: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D9A8u;
        goto label_25d9a8;
    }
    ctx->pc = 0x25D9A0u;
    {
        const bool branch_taken_0x25d9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D9A0u;
        // 0x25d9a4: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d9a0) {
            ctx->pc = 0x25DA90u;
            goto label_25da90;
        }
    }
    ctx->pc = 0x25D9A8u;
label_25d9a8:
    // 0x25d9a8: 0xc09ac7a  jal         func_26B1E8
label_25d9ac:
    if (ctx->pc == 0x25D9ACu) {
        ctx->pc = 0x25D9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D9A8u;
        // 0x25d9ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D9B0u;
        goto label_25d9b0;
    }
    ctx->pc = 0x25D9A8u;
    SET_GPR_U32(ctx, 31, 0x25D9B0u);
    ctx->pc = 0x25D9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D9A8u;
    // 0x25d9ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B1E8u, 0x25D9A8u, 0x25D9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D9B0u;
label_25d9b0:
    // 0x25d9b0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x25d9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_25d9b4:
    // 0x25d9b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25d9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25d9b8:
    // 0x25d9b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x25d9b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25d9bc:
    // 0x25d9bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25d9bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25d9c0:
    // 0x25d9c0: 0x8c4531fc  lw          $a1, 0x31FC($v0)
    ctx->pc = 0x25d9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12796)));
label_25d9c4:
    // 0x25d9c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25d9c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25d9c8:
    // 0x25d9c8: 0x8c463200  lw          $a2, 0x3200($v0)
    ctx->pc = 0x25d9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12800)));
label_25d9cc:
    // 0x25d9cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25d9ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25d9d0:
    // 0x25d9d0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x25d9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_25d9d4:
    // 0x25d9d4: 0xc0aa15e  jal         func_2A8578
label_25d9d8:
    if (ctx->pc == 0x25D9D8u) {
        ctx->pc = 0x25D9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D9D4u;
        // 0x25d9d8: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D9DCu;
        goto label_25d9dc;
    }
    ctx->pc = 0x25D9D4u;
    SET_GPR_U32(ctx, 31, 0x25D9DCu);
    ctx->pc = 0x25D9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D9D4u;
    // 0x25d9d8: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x25D9D4u, 0x25D9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D9DCu;
label_25d9dc:
    // 0x25d9dc: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x25d9dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_25d9e0:
    // 0x25d9e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25d9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25d9e4:
    // 0x25d9e4: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x25d9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_25d9e8:
    // 0x25d9e8: 0xae0305f0  sw          $v1, 0x5F0($s0)
    ctx->pc = 0x25d9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 3));
label_25d9ec:
    // 0x25d9ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25d9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_25d9f0:
    // 0x25d9f0: 0xa604056e  sh          $a0, 0x56E($s0)
    ctx->pc = 0x25d9f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 4));
label_25d9f4:
    // 0x25d9f4: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x25d9f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_25d9f8:
    // 0x25d9f8: 0x8602056e  lh          $v0, 0x56E($s0)
    ctx->pc = 0x25d9f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
label_25d9fc:
    // 0x25d9fc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_25da00:
    if (ctx->pc == 0x25DA00u) {
        ctx->pc = 0x25DA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D9FCu;
        // 0x25da00: 0x9603056e  lhu         $v1, 0x56E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DA04u;
        goto label_25da04;
    }
    ctx->pc = 0x25D9FCu;
    {
        const bool branch_taken_0x25d9fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D9FCu;
        // 0x25da00: 0x9603056e  lhu         $v1, 0x56E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d9fc) {
            ctx->pc = 0x25DA24u;
            goto label_25da24;
        }
    }
    ctx->pc = 0x25DA04u;
label_25da04:
    // 0x25da04: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x25da04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_25da08:
    // 0x25da08: 0x26240550  addiu       $a0, $s1, 0x550
    ctx->pc = 0x25da08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
label_25da0c:
    // 0x25da0c: 0xa602056e  sh          $v0, 0x56E($s0)
    ctx->pc = 0x25da0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1390), (uint16_t)GPR_U32(ctx, 2));
label_25da10:
    // 0x25da10: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x25da10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_25da14:
    // 0x25da14: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x25da14u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_25da18:
    // 0x25da18: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x25da18u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_25da1c:
    // 0x25da1c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x25da1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_25da20:
    // 0x25da20: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x25da20u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_25da24:
    // 0x25da24: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x25da24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_25da28:
    // 0x25da28: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x25da28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_25da2c:
    // 0x25da2c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_25da30:
    if (ctx->pc == 0x25DA30u) {
        ctx->pc = 0x25DA34u;
        goto label_25da34;
    }
    ctx->pc = 0x25DA2Cu;
    {
        const bool branch_taken_0x25da2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25da2c) {
            ctx->pc = 0x25DA48u;
            goto label_25da48;
        }
    }
    ctx->pc = 0x25DA34u;
label_25da34:
    // 0x25da34: 0x8e0205f0  lw          $v0, 0x5F0($s0)
    ctx->pc = 0x25da34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
label_25da38:
    // 0x25da38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_25da3c:
    if (ctx->pc == 0x25DA3Cu) {
        ctx->pc = 0x25DA40u;
        goto label_25da40;
    }
    ctx->pc = 0x25DA38u;
    {
        const bool branch_taken_0x25da38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25da38) {
            ctx->pc = 0x25DA48u;
            goto label_25da48;
        }
    }
    ctx->pc = 0x25DA40u;
label_25da40:
    // 0x25da40: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x25da40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
label_25da44:
    // 0x25da44: 0xa600054a  sh          $zero, 0x54A($s0)
    ctx->pc = 0x25da44u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 0));
label_25da48:
    // 0x25da48: 0xc055f06  jal         func_157C18
label_25da4c:
    if (ctx->pc == 0x25DA4Cu) {
        ctx->pc = 0x25DA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DA48u;
        // 0x25da4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DA50u;
        goto label_25da50;
    }
    ctx->pc = 0x25DA48u;
    SET_GPR_U32(ctx, 31, 0x25DA50u);
    ctx->pc = 0x25DA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DA48u;
    // 0x25da4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x25DA48u, 0x25DA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DA50u;
label_25da50:
    // 0x25da50: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_25da54:
    if (ctx->pc == 0x25DA54u) {
        ctx->pc = 0x25DA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DA50u;
        // 0x25da54: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DA58u;
        goto label_25da58;
    }
    ctx->pc = 0x25DA50u;
    {
        const bool branch_taken_0x25da50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DA50u;
        // 0x25da54: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25da50) {
            ctx->pc = 0x25DA6Cu;
            goto label_25da6c;
        }
    }
    ctx->pc = 0x25DA58u;
label_25da58:
    // 0x25da58: 0xa600054a  sh          $zero, 0x54A($s0)
    ctx->pc = 0x25da58u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 0));
label_25da5c:
    // 0x25da5c: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x25da5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
label_25da60:
    // 0x25da60: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x25da60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
label_25da64:
    // 0x25da64: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x25da64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_25da68:
    // 0x25da68: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x25da68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_25da6c:
    // 0x25da6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25da6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_25da70:
    // 0x25da70: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25da70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_25da74:
    // 0x25da74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25da74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25da78:
    // 0x25da78: 0xc053e7c  jal         func_14F9F0
label_25da7c:
    if (ctx->pc == 0x25DA7Cu) {
        ctx->pc = 0x25DA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DA78u;
        // 0x25da7c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DA80u;
        goto label_25da80;
    }
    ctx->pc = 0x25DA78u;
    SET_GPR_U32(ctx, 31, 0x25DA80u);
    ctx->pc = 0x25DA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DA78u;
    // 0x25da7c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x25DA78u, 0x25DA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DA80u;
label_25da80:
    // 0x25da80: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25da80u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_25da84:
    // 0x25da84: 0xc053e4a  jal         func_14F928
label_25da88:
    if (ctx->pc == 0x25DA88u) {
        ctx->pc = 0x25DA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DA84u;
        // 0x25da88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DA8Cu;
        goto label_25da8c;
    }
    ctx->pc = 0x25DA84u;
    SET_GPR_U32(ctx, 31, 0x25DA8Cu);
    ctx->pc = 0x25DA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DA84u;
    // 0x25da88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x25DA84u, 0x25DA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DA8Cu;
label_25da8c:
    // 0x25da8c: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x25da8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_25da90:
    // 0x25da90: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x25da90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_25da94:
    // 0x25da94: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_25da98:
    if (ctx->pc == 0x25DA98u) {
        ctx->pc = 0x25DA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DA94u;
        // 0x25da98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DA9Cu;
        goto label_25da9c;
    }
    ctx->pc = 0x25DA94u;
    {
        const bool branch_taken_0x25da94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DA94u;
        // 0x25da98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25da94) {
            ctx->pc = 0x25DB54u;
            goto label_25db54;
        }
    }
    ctx->pc = 0x25DA9Cu;
label_25da9c:
    // 0x25da9c: 0x8602056a  lh          $v0, 0x56A($s0)
    ctx->pc = 0x25da9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1386)));
label_25daa0:
    // 0x25daa0: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_25daa4:
    if (ctx->pc == 0x25DAA4u) {
        ctx->pc = 0x25DAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DAA0u;
        // 0x25daa4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DAA8u;
        goto label_25daa8;
    }
    ctx->pc = 0x25DAA0u;
    {
        const bool branch_taken_0x25daa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DAA0u;
        // 0x25daa4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25daa0) {
            ctx->pc = 0x25DB4Cu;
            goto label_25db4c;
        }
    }
    ctx->pc = 0x25DAA8u;
label_25daa8:
    // 0x25daa8: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x25daa8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_25daac:
    // 0x25daac: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x25daacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_25dab0:
    // 0x25dab0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_25dab4:
    if (ctx->pc == 0x25DAB4u) {
        ctx->pc = 0x25DAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DAB0u;
        // 0x25dab4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DAB8u;
        goto label_25dab8;
    }
    ctx->pc = 0x25DAB0u;
    {
        const bool branch_taken_0x25dab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DAB0u;
        // 0x25dab4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dab0) {
            ctx->pc = 0x25DAC4u;
            goto label_25dac4;
        }
    }
    ctx->pc = 0x25DAB8u;
label_25dab8:
    // 0x25dab8: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x25dab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_25dabc:
    // 0x25dabc: 0x10000002  b           . + 4 + (0x2 << 2)
label_25dac0:
    if (ctx->pc == 0x25DAC0u) {
        ctx->pc = 0x25DAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DABCu;
        // 0x25dac0: 0x8c510010  lw          $s1, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DAC4u;
        goto label_25dac4;
    }
    ctx->pc = 0x25DABCu;
    {
        const bool branch_taken_0x25dabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DABCu;
        // 0x25dac0: 0x8c510010  lw          $s1, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dabc) {
            ctx->pc = 0x25DAC8u;
            goto label_25dac8;
        }
    }
    ctx->pc = 0x25DAC4u;
label_25dac4:
    // 0x25dac4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x25dac4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25dac8:
    // 0x25dac8: 0x52200023  beql        $s1, $zero, . + 4 + (0x23 << 2)
label_25dacc:
    if (ctx->pc == 0x25DACCu) {
        ctx->pc = 0x25DACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DAC8u;
        // 0x25dacc: 0xa600056a  sh          $zero, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DAD0u;
        goto label_25dad0;
    }
    ctx->pc = 0x25DAC8u;
    {
        const bool branch_taken_0x25dac8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dac8) {
            ctx->pc = 0x25DACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25DAC8u;
            // 0x25dacc: 0xa600056a  sh          $zero, 0x56A($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25DB58u;
            goto label_25db58;
        }
    }
    ctx->pc = 0x25DAD0u;
label_25dad0:
    // 0x25dad0: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x25dad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
label_25dad4:
    // 0x25dad4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x25dad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_25dad8:
    // 0x25dad8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x25dad8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_25dadc:
    // 0x25dadc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25dadcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_25dae0:
    // 0x25dae0: 0xc0c7408  jal         func_31D020
label_25dae4:
    if (ctx->pc == 0x25DAE4u) {
        ctx->pc = 0x25DAE8u;
        goto label_25dae8;
    }
    ctx->pc = 0x25DAE0u;
    SET_GPR_U32(ctx, 31, 0x25DAE8u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x25DAE0u, 0x25DAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DAE8u;
label_25dae8:
    // 0x25dae8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x25dae8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_25daec:
    // 0x25daec: 0xc0c7408  jal         func_31D020
label_25daf0:
    if (ctx->pc == 0x25DAF0u) {
        ctx->pc = 0x25DAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DAECu;
        // 0x25daf0: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DAF4u;
        goto label_25daf4;
    }
    ctx->pc = 0x25DAECu;
    SET_GPR_U32(ctx, 31, 0x25DAF4u);
    ctx->pc = 0x25DAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DAECu;
    // 0x25daf0: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x25DAECu, 0x25DAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DAF4u;
label_25daf4:
    // 0x25daf4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x25daf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_25daf8:
    // 0x25daf8: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x25daf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_25dafc:
    // 0x25dafc: 0xc0c7400  jal         func_31D000
label_25db00:
    if (ctx->pc == 0x25DB00u) {
        ctx->pc = 0x25DB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DAFCu;
        // 0x25db00: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DB04u;
        goto label_25db04;
    }
    ctx->pc = 0x25DAFCu;
    SET_GPR_U32(ctx, 31, 0x25DB04u);
    ctx->pc = 0x25DB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DAFCu;
    // 0x25db00: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x25DAFCu, 0x25DB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DB04u;
label_25db04:
    // 0x25db04: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x25db04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_25db08:
    // 0x25db08: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x25db08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_25db0c:
    // 0x25db0c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x25db0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_25db10:
    // 0x25db10: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25db10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_25db14:
    // 0x25db14: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x25db14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_25db18:
    // 0x25db18: 0x26250080  addiu       $a1, $s1, 0x80
    ctx->pc = 0x25db18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_25db1c:
    // 0x25db1c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x25db1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25db20:
    // 0x25db20: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25db20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_25db24:
    // 0x25db24: 0xc0c28ac  jal         func_30A2B0
label_25db28:
    if (ctx->pc == 0x25DB28u) {
        ctx->pc = 0x25DB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DB24u;
        // 0x25db28: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DB2Cu;
        goto label_25db2c;
    }
    ctx->pc = 0x25DB24u;
    SET_GPR_U32(ctx, 31, 0x25DB2Cu);
    ctx->pc = 0x25DB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DB24u;
    // 0x25db28: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x25DB24u, 0x25DB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DB2Cu;
label_25db2c:
    // 0x25db2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25db2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_25db30:
    // 0x25db30: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25db30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25db34:
    // 0x25db34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x25db34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25db38:
    // 0x25db38: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x25db38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_25db3c:
    // 0x25db3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25db3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25db40:
    // 0x25db40: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x25db40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_25db44:
    // 0x25db44: 0xc0c1a0e  jal         func_306838
label_25db48:
    if (ctx->pc == 0x25DB48u) {
        ctx->pc = 0x25DB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DB44u;
        // 0x25db48: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DB4Cu;
        goto label_25db4c;
    }
    ctx->pc = 0x25DB44u;
    SET_GPR_U32(ctx, 31, 0x25DB4Cu);
    ctx->pc = 0x25DB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DB44u;
    // 0x25db48: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x25DB44u, 0x25DB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DB4Cu;
label_25db4c:
    // 0x25db4c: 0x10000002  b           . + 4 + (0x2 << 2)
label_25db50:
    if (ctx->pc == 0x25DB50u) {
        ctx->pc = 0x25DB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DB4Cu;
        // 0x25db50: 0xa600056a  sh          $zero, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DB54u;
        goto label_25db54;
    }
    ctx->pc = 0x25DB4Cu;
    {
        const bool branch_taken_0x25db4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DB4Cu;
        // 0x25db50: 0xa600056a  sh          $zero, 0x56A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25db4c) {
            ctx->pc = 0x25DB58u;
            goto label_25db58;
        }
    }
    ctx->pc = 0x25DB54u;
label_25db54:
    // 0x25db54: 0xa602056a  sh          $v0, 0x56A($s0)
    ctx->pc = 0x25db54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1386), (uint16_t)GPR_U32(ctx, 2));
label_25db58:
    // 0x25db58: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x25db58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25db5c:
    // 0x25db5c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x25db5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25db60:
    // 0x25db60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25db60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_25db64:
    // 0x25db64: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x25db64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_25db68:
    // 0x25db68: 0x3e00008  jr          $ra
label_25db6c:
    if (ctx->pc == 0x25DB6Cu) {
        ctx->pc = 0x25DB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DB68u;
        // 0x25db6c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25DB70u;
        goto label_fallthrough_0x25db68;
    }
    ctx->pc = 0x25DB68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25DB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DB68u;
        // 0x25db6c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25DB68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25db68:
    ctx->pc = 0x25DB70u;
}
