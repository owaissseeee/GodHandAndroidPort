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

// Function: func_0028E858
// Address: 0x28e858 - 0x28e9d0
void func_0028E858_0x28e858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0028E858_0x28e858");
#endif

    switch (ctx->pc) {
        case 0x28e858u: goto label_28e858;
        case 0x28e85cu: goto label_28e85c;
        case 0x28e860u: goto label_28e860;
        case 0x28e864u: goto label_28e864;
        case 0x28e868u: goto label_28e868;
        case 0x28e86cu: goto label_28e86c;
        case 0x28e870u: goto label_28e870;
        case 0x28e874u: goto label_28e874;
        case 0x28e878u: goto label_28e878;
        case 0x28e87cu: goto label_28e87c;
        case 0x28e880u: goto label_28e880;
        case 0x28e884u: goto label_28e884;
        case 0x28e888u: goto label_28e888;
        case 0x28e88cu: goto label_28e88c;
        case 0x28e890u: goto label_28e890;
        case 0x28e894u: goto label_28e894;
        case 0x28e898u: goto label_28e898;
        case 0x28e89cu: goto label_28e89c;
        case 0x28e8a0u: goto label_28e8a0;
        case 0x28e8a4u: goto label_28e8a4;
        case 0x28e8a8u: goto label_28e8a8;
        case 0x28e8acu: goto label_28e8ac;
        case 0x28e8b0u: goto label_28e8b0;
        case 0x28e8b4u: goto label_28e8b4;
        case 0x28e8b8u: goto label_28e8b8;
        case 0x28e8bcu: goto label_28e8bc;
        case 0x28e8c0u: goto label_28e8c0;
        case 0x28e8c4u: goto label_28e8c4;
        case 0x28e8c8u: goto label_28e8c8;
        case 0x28e8ccu: goto label_28e8cc;
        case 0x28e8d0u: goto label_28e8d0;
        case 0x28e8d4u: goto label_28e8d4;
        case 0x28e8d8u: goto label_28e8d8;
        case 0x28e8dcu: goto label_28e8dc;
        case 0x28e8e0u: goto label_28e8e0;
        case 0x28e8e4u: goto label_28e8e4;
        case 0x28e8e8u: goto label_28e8e8;
        case 0x28e8ecu: goto label_28e8ec;
        case 0x28e8f0u: goto label_28e8f0;
        case 0x28e8f4u: goto label_28e8f4;
        case 0x28e8f8u: goto label_28e8f8;
        case 0x28e8fcu: goto label_28e8fc;
        case 0x28e900u: goto label_28e900;
        case 0x28e904u: goto label_28e904;
        case 0x28e908u: goto label_28e908;
        case 0x28e90cu: goto label_28e90c;
        case 0x28e910u: goto label_28e910;
        case 0x28e914u: goto label_28e914;
        case 0x28e918u: goto label_28e918;
        case 0x28e91cu: goto label_28e91c;
        case 0x28e920u: goto label_28e920;
        case 0x28e924u: goto label_28e924;
        case 0x28e928u: goto label_28e928;
        case 0x28e92cu: goto label_28e92c;
        case 0x28e930u: goto label_28e930;
        case 0x28e934u: goto label_28e934;
        case 0x28e938u: goto label_28e938;
        case 0x28e93cu: goto label_28e93c;
        case 0x28e940u: goto label_28e940;
        case 0x28e944u: goto label_28e944;
        case 0x28e948u: goto label_28e948;
        case 0x28e94cu: goto label_28e94c;
        case 0x28e950u: goto label_28e950;
        case 0x28e954u: goto label_28e954;
        case 0x28e958u: goto label_28e958;
        case 0x28e95cu: goto label_28e95c;
        case 0x28e960u: goto label_28e960;
        case 0x28e964u: goto label_28e964;
        case 0x28e968u: goto label_28e968;
        case 0x28e96cu: goto label_28e96c;
        case 0x28e970u: goto label_28e970;
        case 0x28e974u: goto label_28e974;
        case 0x28e978u: goto label_28e978;
        case 0x28e97cu: goto label_28e97c;
        case 0x28e980u: goto label_28e980;
        case 0x28e984u: goto label_28e984;
        case 0x28e988u: goto label_28e988;
        case 0x28e98cu: goto label_28e98c;
        case 0x28e990u: goto label_28e990;
        case 0x28e994u: goto label_28e994;
        case 0x28e998u: goto label_28e998;
        case 0x28e99cu: goto label_28e99c;
        case 0x28e9a0u: goto label_28e9a0;
        case 0x28e9a4u: goto label_28e9a4;
        case 0x28e9a8u: goto label_28e9a8;
        case 0x28e9acu: goto label_28e9ac;
        case 0x28e9b0u: goto label_28e9b0;
        case 0x28e9b4u: goto label_28e9b4;
        case 0x28e9b8u: goto label_28e9b8;
        case 0x28e9bcu: goto label_28e9bc;
        case 0x28e9c0u: goto label_28e9c0;
        case 0x28e9c4u: goto label_28e9c4;
        case 0x28e9c8u: goto label_28e9c8;
        case 0x28e9ccu: goto label_28e9cc;
        default: break;
    }

    ctx->pc = 0x28e858u;

label_28e858:
    // 0x28e858: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x28e858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_28e85c:
    // 0x28e85c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28e85cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e860:
    // 0x28e860: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x28e860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_28e864:
    // 0x28e864: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x28e864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_28e868:
    // 0x28e868: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x28e868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_28e86c:
    // 0x28e86c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28e86cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28e870:
    // 0x28e870: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x28e870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_28e874:
    // 0x28e874: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x28e874u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
label_28e878:
    // 0x28e878: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28e878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_28e87c:
    // 0x28e87c: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x28e87cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28e880:
    // 0x28e880: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x28e880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_28e884:
    // 0x28e884: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x28e884u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_28e888:
    // 0x28e888: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x28e888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_28e88c:
    // 0x28e88c: 0x40f809  jalr        $v0
label_28e890:
    if (ctx->pc == 0x28E890u) {
        ctx->pc = 0x28E890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E88Cu;
        // 0x28e890: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E894u;
        goto label_28e894;
    }
    ctx->pc = 0x28E88Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28E894u);
        ctx->pc = 0x28E890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E88Cu;
        // 0x28e890: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E88Cu, 0x28E894u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28E894u;
label_28e894:
    // 0x28e894: 0xc0b6dac  jal         func_2DB6B0
label_28e898:
    if (ctx->pc == 0x28E898u) {
        ctx->pc = 0x28E898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E894u;
        // 0x28e898: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E89Cu;
        goto label_28e89c;
    }
    ctx->pc = 0x28E894u;
    SET_GPR_U32(ctx, 31, 0x28E89Cu);
    ctx->pc = 0x28E898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E894u;
    // 0x28e898: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x28E894u, 0x28E89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E89Cu;
label_28e89c:
    // 0x28e89c: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x28e89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_28e8a0:
    // 0x28e8a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28e8a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e8a4:
    // 0x28e8a4: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x28e8a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_28e8a8:
    // 0x28e8a8: 0x8c660064  lw          $a2, 0x64($v1)
    ctx->pc = 0x28e8a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_28e8ac:
    // 0x28e8ac: 0xc0f809  jalr        $a2
label_28e8b0:
    if (ctx->pc == 0x28E8B0u) {
        ctx->pc = 0x28E8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E8ACu;
        // 0x28e8b0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E8B4u;
        goto label_28e8b4;
    }
    ctx->pc = 0x28E8ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x28E8B4u);
        ctx->pc = 0x28E8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E8ACu;
        // 0x28e8b0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E8ACu, 0x28E8B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28E8B4u;
label_28e8b4:
    // 0x28e8b4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x28e8b4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e8b8:
    // 0x28e8b8: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x28e8b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
label_28e8bc:
    // 0x28e8bc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x28e8bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28e8c0:
    // 0x28e8c0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x28e8c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e8c4:
    // 0x28e8c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28e8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28e8c8:
    // 0x28e8c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28e8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28e8cc:
    // 0x28e8cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28e8ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e8d0:
    // 0x28e8d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28e8d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e8d4:
    // 0x28e8d4: 0xc0b2e92  jal         func_2CBA48
label_28e8d8:
    if (ctx->pc == 0x28E8D8u) {
        ctx->pc = 0x28E8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E8D4u;
        // 0x28e8d8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E8DCu;
        goto label_28e8dc;
    }
    ctx->pc = 0x28E8D4u;
    SET_GPR_U32(ctx, 31, 0x28E8DCu);
    ctx->pc = 0x28E8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E8D4u;
    // 0x28e8d8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x28E8D4u, 0x28E8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E8DCu;
label_28e8dc:
    // 0x28e8dc: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x28e8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_28e8e0:
    // 0x28e8e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28e8e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28e8e4:
    // 0x28e8e4: 0x24053004  addiu       $a1, $zero, 0x3004
    ctx->pc = 0x28e8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12292));
label_28e8e8:
    // 0x28e8e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28e8e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e8ec:
    // 0x28e8ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28e8ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e8f0:
    // 0x28e8f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28e8f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e8f4:
    // 0x28e8f4: 0xc0b1032  jal         func_2C40C8
label_28e8f8:
    if (ctx->pc == 0x28E8F8u) {
        ctx->pc = 0x28E8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E8F4u;
        // 0x28e8f8: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E8FCu;
        goto label_28e8fc;
    }
    ctx->pc = 0x28E8F4u;
    SET_GPR_U32(ctx, 31, 0x28E8FCu);
    ctx->pc = 0x28E8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E8F4u;
    // 0x28e8f8: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x28E8F4u, 0x28E8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E8FCu;
label_28e8fc:
    // 0x28e8fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28e8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28e900:
    // 0x28e900: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28e900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28e904:
    // 0x28e904: 0xc0b2f08  jal         func_2CBC20
label_28e908:
    if (ctx->pc == 0x28E908u) {
        ctx->pc = 0x28E908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E904u;
        // 0x28e908: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E90Cu;
        goto label_28e90c;
    }
    ctx->pc = 0x28E904u;
    SET_GPR_U32(ctx, 31, 0x28E90Cu);
    ctx->pc = 0x28E908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E904u;
    // 0x28e908: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBC20u, 0x28E904u, 0x28E90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E90Cu;
label_28e90c:
    // 0x28e90c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x28e90cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_28e910:
    // 0x28e910: 0x8c6223a4  lw          $v0, 0x23A4($v1)
    ctx->pc = 0x28e910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9124)));
label_28e914:
    // 0x28e914: 0x84440bec  lh          $a0, 0xBEC($v0)
    ctx->pc = 0x28e914u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 3052)));
label_28e918:
    // 0x28e918: 0x14800021  bnez        $a0, . + 4 + (0x21 << 2)
label_28e91c:
    if (ctx->pc == 0x28E91Cu) {
        ctx->pc = 0x28E91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E918u;
        // 0x28e91c: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E920u;
        goto label_28e920;
    }
    ctx->pc = 0x28E918u;
    {
        const bool branch_taken_0x28e918 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E918u;
        // 0x28e91c: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e918) {
            ctx->pc = 0x28E9A0u;
            goto label_28e9a0;
        }
    }
    ctx->pc = 0x28E920u;
label_28e920:
    // 0x28e920: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x28e920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_28e924:
    // 0x28e924: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28e924u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e928:
    // 0x28e928: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28e928u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e92c:
    // 0x28e92c: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x28e92cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
label_28e930:
    // 0x28e930: 0x240a000f  addiu       $t2, $zero, 0xF
    ctx->pc = 0x28e930u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_28e934:
    // 0x28e934: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x28e934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
label_28e938:
    // 0x28e938: 0xc0c1c82  jal         func_307208
label_28e93c:
    if (ctx->pc == 0x28E93Cu) {
        ctx->pc = 0x28E93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E938u;
        // 0x28e93c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E940u;
        goto label_28e940;
    }
    ctx->pc = 0x28E938u;
    SET_GPR_U32(ctx, 31, 0x28E940u);
    ctx->pc = 0x28E93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E938u;
    // 0x28e93c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x28E938u, 0x28E940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E940u;
label_28e940:
    // 0x28e940: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x28e940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
label_28e944:
    // 0x28e944: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x28e944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_28e948:
    // 0x28e948: 0xc0b56a8  jal         func_2D5AA0
label_28e94c:
    if (ctx->pc == 0x28E94Cu) {
        ctx->pc = 0x28E94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E948u;
        // 0x28e94c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E950u;
        goto label_28e950;
    }
    ctx->pc = 0x28E948u;
    SET_GPR_U32(ctx, 31, 0x28E950u);
    ctx->pc = 0x28E94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E948u;
    // 0x28e94c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x28E948u, 0x28E950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E950u;
label_28e950:
    // 0x28e950: 0xc0b0f04  jal         func_2C3C10
label_28e954:
    if (ctx->pc == 0x28E954u) {
        ctx->pc = 0x28E954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E950u;
        // 0x28e954: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E958u;
        goto label_28e958;
    }
    ctx->pc = 0x28E950u;
    SET_GPR_U32(ctx, 31, 0x28E958u);
    ctx->pc = 0x28E954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E950u;
    // 0x28e954: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x28E950u, 0x28E958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E958u;
label_28e958:
    // 0x28e958: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x28e958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_28e95c:
    // 0x28e95c: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x28e95cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_28e960:
    // 0x28e960: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x28e960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_28e964:
    // 0x28e964: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28e964u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28e968:
    // 0x28e968: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x28e968u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_28e96c:
    // 0x28e96c: 0x3c013fce  lui         $at, 0x3FCE
    ctx->pc = 0x28e96cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16334 << 16));
label_28e970:
    // 0x28e970: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x28e970u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
label_28e974:
    // 0x28e974: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28e974u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28e978:
    // 0x28e978: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28e978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_28e97c:
    // 0x28e97c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x28e97cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_28e980:
    // 0x28e980: 0xc7ac0008  lwc1        $f12, 0x8($sp)
    ctx->pc = 0x28e980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_28e984:
    // 0x28e984: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x28e984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
label_28e988:
    // 0x28e988: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x28e988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_28e98c:
    // 0x28e98c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x28e98cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_28e990:
    // 0x28e990: 0xc0b116a  jal         func_2C45A8
label_28e994:
    if (ctx->pc == 0x28E994u) {
        ctx->pc = 0x28E994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E990u;
        // 0x28e994: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E998u;
        goto label_28e998;
    }
    ctx->pc = 0x28E990u;
    SET_GPR_U32(ctx, 31, 0x28E998u);
    ctx->pc = 0x28E994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E990u;
    // 0x28e994: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C45A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C45A8u, 0x28E990u, 0x28E998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E998u;
label_28e998:
    // 0x28e998: 0x10000004  b           . + 4 + (0x4 << 2)
label_28e99c:
    if (ctx->pc == 0x28E99Cu) {
        ctx->pc = 0x28E99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E998u;
        // 0x28e99c: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E9A0u;
        goto label_28e9a0;
    }
    ctx->pc = 0x28E998u;
    {
        const bool branch_taken_0x28e998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E998u;
        // 0x28e99c: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e998) {
            ctx->pc = 0x28E9ACu;
            goto label_28e9ac;
        }
    }
    ctx->pc = 0x28E9A0u;
label_28e9a0:
    // 0x28e9a0: 0xc0b0f04  jal         func_2C3C10
label_28e9a4:
    if (ctx->pc == 0x28E9A4u) {
        ctx->pc = 0x28E9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E9A0u;
        // 0x28e9a4: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E9A8u;
        goto label_28e9a8;
    }
    ctx->pc = 0x28E9A0u;
    SET_GPR_U32(ctx, 31, 0x28E9A8u);
    ctx->pc = 0x28E9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E9A0u;
    // 0x28e9a4: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x28E9A0u, 0x28E9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E9A8u;
label_28e9a8:
    // 0x28e9a8: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x28e9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
label_28e9ac:
    // 0x28e9ac: 0xc0b5692  jal         func_2D5A48
label_28e9b0:
    if (ctx->pc == 0x28E9B0u) {
        ctx->pc = 0x28E9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E9ACu;
        // 0x28e9b0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E9B4u;
        goto label_28e9b4;
    }
    ctx->pc = 0x28E9ACu;
    SET_GPR_U32(ctx, 31, 0x28E9B4u);
    ctx->pc = 0x28E9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E9ACu;
    // 0x28e9b0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x28E9ACu, 0x28E9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E9B4u;
label_28e9b4:
    // 0x28e9b4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x28e9b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_28e9b8:
    // 0x28e9b8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x28e9b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_28e9bc:
    // 0x28e9bc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x28e9bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28e9c0:
    // 0x28e9c0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x28e9c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28e9c4:
    // 0x28e9c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28e9c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_28e9c8:
    // 0x28e9c8: 0x3e00008  jr          $ra
label_28e9cc:
    if (ctx->pc == 0x28E9CCu) {
        ctx->pc = 0x28E9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E9C8u;
        // 0x28e9cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28E9D0u;
        goto label_fallthrough_0x28e9c8;
    }
    ctx->pc = 0x28E9C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E9C8u;
        // 0x28e9cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E9C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x28e9c8:
    ctx->pc = 0x28E9D0u;
}
