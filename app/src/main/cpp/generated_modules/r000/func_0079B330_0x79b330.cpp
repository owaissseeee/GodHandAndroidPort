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
// Function: func_0079B330
// Address: 0x79b330 - 0x79b3d8
void func_0079B330_0x79b330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079B330_0x79b330");
#endif

    switch (ctx->pc) {
        case 0x79b35cu: goto label_79b35c;
        case 0x79b364u: goto label_79b364;
        case 0x79b37cu: goto label_79b37c;
        case 0x79b3a4u: goto label_79b3a4;
        case 0x79b3c8u: goto label_79b3c8;
        default: break;
    }

    ctx->pc = 0x79b330u;

    // 0x79b330: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79b330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79b334: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79b334u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79b338: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x79b338u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A84u));
    // 0x79b33c: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x79b33cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x79b340: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x79b340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79b344: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79b344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79b348: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x79b348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x79b34c: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x79B34Cu;
    {
        const bool branch_taken_0x79b34c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B34Cu;
        // 0x79b350: 0x24507a84  addiu       $s0, $v0, 0x7A84 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 31364));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b34c) {
            ctx->pc = 0x79B3C8u;
            goto label_79b3c8;
        }
    }
    ctx->pc = 0x79B354u;
    // 0x79b354: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79B354u;
    SET_GPR_U32(ctx, 31, 0x79B35Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79B354u, 0x79B35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B35Cu;
label_79b35c:
    // 0x79b35c: 0xc04aeae  jal         func_12BAB8
    ctx->pc = 0x79B35Cu;
    SET_GPR_U32(ctx, 31, 0x79B364u);
    ctx->pc = 0x79B360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B35Cu;
    // 0x79b360: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BAB8u, 0x79B35Cu, 0x79B364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B364u;
label_79b364:
    // 0x79b364: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x79B364u;
    {
        const bool branch_taken_0x79b364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B364u;
        // 0x79b368: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b364) {
            ctx->pc = 0x79B3C8u;
            goto label_79b3c8;
        }
    }
    ctx->pc = 0x79B36Cu;
    // 0x79b36c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x79b36cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79b370: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x79b370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    // 0x79b374: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x79B374u;
    SET_GPR_U32(ctx, 31, 0x79B37Cu);
    ctx->pc = 0x79B378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B374u;
    // 0x79b378: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x79B374u, 0x79B37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B37Cu;
label_79b37c:
    // 0x79b37c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x79B37Cu;
    {
        const bool branch_taken_0x79b37c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B37Cu;
        // 0x79b380: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b37c) {
            ctx->pc = 0x79B3C8u;
            goto label_79b3c8;
        }
    }
    ctx->pc = 0x79B384u;
    // 0x79b384: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x79b384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79b388: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x79b388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
    // 0x79b38c: 0x2406001d  addiu       $a2, $zero, 0x1D
    ctx->pc = 0x79b38cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x79b390: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79b390u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b394: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79b394u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b398: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79b398u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b39c: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x79B39Cu;
    SET_GPR_U32(ctx, 31, 0x79B3A4u);
    ctx->pc = 0x79B3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B39Cu;
    // 0x79b3a0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x79B39Cu, 0x79B3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B3A4u;
label_79b3a4:
    // 0x79b3a4: 0x8e02fa24  lw          $v0, -0x5DC($s0)
    ctx->pc = 0x79b3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965796)));
    // 0x79b3a8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x79b3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x79b3ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79B3ACu;
    {
        const bool branch_taken_0x79b3ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B3ACu;
        // 0x79b3b0: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b3ac) {
            ctx->pc = 0x79B3C8u;
            goto label_79b3c8;
        }
    }
    ctx->pc = 0x79B3B4u;
    // 0x79b3b4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x79b3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x79b3b8: 0x8c44d930  lw          $a0, -0x26D0($v0)
    ctx->pc = 0x79b3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957360)));
    // 0x79b3bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79b3bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b3c0: 0xc058008  jal         func_160020
    ctx->pc = 0x79B3C0u;
    SET_GPR_U32(ctx, 31, 0x79B3C8u);
    ctx->pc = 0x79B3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B3C0u;
    // 0x79b3c4: 0x24070033  addiu       $a3, $zero, 0x33 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160020u, 0x79B3C0u, 0x79B3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B3C8u;
label_79b3c8:
    // 0x79b3c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x79b3c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79b3cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79b3ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79b3d0: 0x3e00008  jr          $ra
    ctx->pc = 0x79B3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B3D0u;
        // 0x79b3d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B3D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B3D8u;
}
} // namespace gh_r000
