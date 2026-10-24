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

// Function: func_002DC390
// Address: 0x2dc390 - 0x2dc420
void func_002DC390_0x2dc390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002DC390_0x2dc390");
#endif

    switch (ctx->pc) {
        case 0x2dc3a4u: goto label_2dc3a4;
        case 0x2dc3bcu: goto label_2dc3bc;
        case 0x2dc3e0u: goto label_2dc3e0;
        case 0x2dc410u: goto label_2dc410;
        default: break;
    }

    ctx->pc = 0x2dc390u;

    // 0x2dc390: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dc390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dc394: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2dc394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2dc398: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dc398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dc39c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2DC39Cu;
    SET_GPR_U32(ctx, 31, 0x2DC3A4u);
    ctx->pc = 0x2DC3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC39Cu;
    // 0x2dc3a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2DC39Cu, 0x2DC3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC3A4u;
label_2dc3a4:
    // 0x2dc3a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dc3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc3a8: 0x8482054a  lh          $v0, 0x54A($a0)
    ctx->pc = 0x2dc3a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1354)));
    // 0x2dc3ac: 0x58400019  blezl       $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2DC3ACu;
    {
        const bool branch_taken_0x2dc3ac = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2dc3ac) {
            ctx->pc = 0x2DC3B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC3ACu;
            // 0x2dc3b0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC414u;
            goto label_2dc414;
        }
    }
    ctx->pc = 0x2DC3B4u;
    // 0x2dc3b4: 0xc042da6  jal         func_10B698
    ctx->pc = 0x2DC3B4u;
    SET_GPR_U32(ctx, 31, 0x2DC3BCu);
    ctx->pc = 0x10B698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B698u, 0x2DC3B4u, 0x2DC3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC3BCu;
label_2dc3bc:
    // 0x2dc3bc: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2DC3BCu;
    {
        const bool branch_taken_0x2dc3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc3bc) {
            ctx->pc = 0x2DC3C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC3BCu;
            // 0x2dc3c0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC414u;
            goto label_2dc414;
        }
    }
    ctx->pc = 0x2DC3C4u;
    // 0x2dc3c4: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2dc3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2dc3c8: 0x244464f0  addiu       $a0, $v0, 0x64F0
    ctx->pc = 0x2dc3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x2dc3cc: 0x8c830514  lw          $v1, 0x514($a0)
    ctx->pc = 0x2dc3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586A04u));
    // 0x2dc3d0: 0x5c600010  bgtzl       $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2DC3D0u;
    {
        const bool branch_taken_0x2dc3d0 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x2dc3d0) {
            ctx->pc = 0x2DC3D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC3D0u;
            // 0x2dc3d4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC414u;
            goto label_2dc414;
        }
    }
    ctx->pc = 0x2DC3D8u;
    // 0x2dc3d8: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x2DC3D8u;
    SET_GPR_U32(ctx, 31, 0x2DC3E0u);
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x2DC3D8u, 0x2DC3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC3E0u;
label_2dc3e0:
    // 0x2dc3e0: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2DC3E0u;
    {
        const bool branch_taken_0x2dc3e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc3e0) {
            ctx->pc = 0x2DC3E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC3E0u;
            // 0x2dc3e4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC414u;
            goto label_2dc414;
        }
    }
    ctx->pc = 0x2DC3E8u;
    // 0x2dc3e8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2dc3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2dc3ec: 0x3c08002e  lui         $t0, 0x2E
    ctx->pc = 0x2dc3ecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)46 << 16));
    // 0x2dc3f0: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x2dc3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
    // 0x2dc3f4: 0x2508c420  addiu       $t0, $t0, -0x3BE0
    ctx->pc = 0x2dc3f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294951968));
    // 0x2dc3f8: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2dc3f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc3fc: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2dc3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2dc400: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2dc400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2dc404: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2dc404u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc408: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x2DC408u;
    SET_GPR_U32(ctx, 31, 0x2DC410u);
    ctx->pc = 0x2DC40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC408u;
    // 0x2dc40c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x2DC408u, 0x2DC410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC410u;
label_2dc410:
    // 0x2dc410: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2dc410u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2dc414:
    // 0x2dc414: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dc414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc418: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC418u;
        // 0x2dc41c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC420u;
}
