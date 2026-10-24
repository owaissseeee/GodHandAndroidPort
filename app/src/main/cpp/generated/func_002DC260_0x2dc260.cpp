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

// Function: func_002DC260
// Address: 0x2dc260 - 0x2dc2f0
void func_002DC260_0x2dc260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002DC260_0x2dc260");
#endif

    switch (ctx->pc) {
        case 0x2dc274u: goto label_2dc274;
        case 0x2dc28cu: goto label_2dc28c;
        case 0x2dc2b0u: goto label_2dc2b0;
        case 0x2dc2e0u: goto label_2dc2e0;
        default: break;
    }

    ctx->pc = 0x2dc260u;

    // 0x2dc260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dc260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dc264: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2dc264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2dc268: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dc268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dc26c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2DC26Cu;
    SET_GPR_U32(ctx, 31, 0x2DC274u);
    ctx->pc = 0x2DC270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC26Cu;
    // 0x2dc270: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2DC26Cu, 0x2DC274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC274u;
label_2dc274:
    // 0x2dc274: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dc274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc278: 0x8482054a  lh          $v0, 0x54A($a0)
    ctx->pc = 0x2dc278u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1354)));
    // 0x2dc27c: 0x58400019  blezl       $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2DC27Cu;
    {
        const bool branch_taken_0x2dc27c = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2dc27c) {
            ctx->pc = 0x2DC280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC27Cu;
            // 0x2dc280: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC2E4u;
            goto label_2dc2e4;
        }
    }
    ctx->pc = 0x2DC284u;
    // 0x2dc284: 0xc042da6  jal         func_10B698
    ctx->pc = 0x2DC284u;
    SET_GPR_U32(ctx, 31, 0x2DC28Cu);
    ctx->pc = 0x10B698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B698u, 0x2DC284u, 0x2DC28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC28Cu;
label_2dc28c:
    // 0x2dc28c: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2DC28Cu;
    {
        const bool branch_taken_0x2dc28c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc28c) {
            ctx->pc = 0x2DC290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC28Cu;
            // 0x2dc290: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC2E4u;
            goto label_2dc2e4;
        }
    }
    ctx->pc = 0x2DC294u;
    // 0x2dc294: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2dc294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2dc298: 0x244464f0  addiu       $a0, $v0, 0x64F0
    ctx->pc = 0x2dc298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x2dc29c: 0x8c830514  lw          $v1, 0x514($a0)
    ctx->pc = 0x2dc29cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586A04u));
    // 0x2dc2a0: 0x5c600010  bgtzl       $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2DC2A0u;
    {
        const bool branch_taken_0x2dc2a0 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x2dc2a0) {
            ctx->pc = 0x2DC2A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC2A0u;
            // 0x2dc2a4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC2E4u;
            goto label_2dc2e4;
        }
    }
    ctx->pc = 0x2DC2A8u;
    // 0x2dc2a8: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x2DC2A8u;
    SET_GPR_U32(ctx, 31, 0x2DC2B0u);
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x2DC2A8u, 0x2DC2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC2B0u;
label_2dc2b0:
    // 0x2dc2b0: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2DC2B0u;
    {
        const bool branch_taken_0x2dc2b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc2b0) {
            ctx->pc = 0x2DC2B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC2B0u;
            // 0x2dc2b4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC2E4u;
            goto label_2dc2e4;
        }
    }
    ctx->pc = 0x2DC2B8u;
    // 0x2dc2b8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2dc2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2dc2bc: 0x3c08002e  lui         $t0, 0x2E
    ctx->pc = 0x2dc2bcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)46 << 16));
    // 0x2dc2c0: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x2dc2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
    // 0x2dc2c4: 0x2508c2f0  addiu       $t0, $t0, -0x3D10
    ctx->pc = 0x2dc2c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294951664));
    // 0x2dc2c8: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2dc2c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc2cc: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2dc2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2dc2d0: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2dc2d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2dc2d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2dc2d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc2d8: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x2DC2D8u;
    SET_GPR_U32(ctx, 31, 0x2DC2E0u);
    ctx->pc = 0x2DC2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC2D8u;
    // 0x2dc2dc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x2DC2D8u, 0x2DC2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC2E0u;
label_2dc2e0:
    // 0x2dc2e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2dc2e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2dc2e4:
    // 0x2dc2e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dc2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC2E8u;
        // 0x2dc2ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC2E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC2F0u;
}
