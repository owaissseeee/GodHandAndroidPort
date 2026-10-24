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

// Function: func_002AF380
// Address: 0x2af380 - 0x2af3f8
void func_002AF380_0x2af380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002AF380_0x2af380");
#endif

    switch (ctx->pc) {
        case 0x2af3a4u: goto label_2af3a4;
        case 0x2af3b0u: goto label_2af3b0;
        case 0x2af3b8u: goto label_2af3b8;
        default: break;
    }

    ctx->pc = 0x2af380u;

    // 0x2af380: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x2af380u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2af384: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2af384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2af388: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2af388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2af38c: 0x8c4423a4  lw          $a0, 0x23A4($v0)
    ctx->pc = 0x2af38cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C23A4u));
    // 0x2af390: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2af390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2af394: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2af394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2af398: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2af398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2af39c: 0xc0abab4  jal         func_2AEAD0
    ctx->pc = 0x2AF39Cu;
    SET_GPR_U32(ctx, 31, 0x2AF3A4u);
    ctx->pc = 0x2AF3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF39Cu;
    // 0x2af3a0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEAD0u, 0x2AF39Cu, 0x2AF3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF3A4u;
label_2af3a4:
    // 0x2af3a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2AF3A4u;
    {
        const bool branch_taken_0x2af3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF3A4u;
        // 0x2af3a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af3a4) {
            ctx->pc = 0x2AF3C0u;
            goto label_2af3c0;
        }
    }
    ctx->pc = 0x2AF3ACu;
    // 0x2af3ac: 0x0  nop
    ctx->pc = 0x2af3acu;
    // NOP
label_2af3b0:
    // 0x2af3b0: 0xc0abc7e  jal         func_2AF1F8
    ctx->pc = 0x2AF3B0u;
    SET_GPR_U32(ctx, 31, 0x2AF3B8u);
    ctx->pc = 0x2AF3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AF3B0u;
    // 0x2af3b4: 0x96040000  lhu         $a0, 0x0($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF1F8u, 0x2AF3B0u, 0x2AF3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF3B8u;
label_2af3b8:
    // 0x2af3b8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2af3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2af3bc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2af3bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2af3c0:
    // 0x2af3c0: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x2af3c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2af3c4: 0x313c2  srl         $v0, $v1, 15
    ctx->pc = 0x2af3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 15));
    // 0x2af3c8: 0x5040fff9  beql        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2AF3C8u;
    {
        const bool branch_taken_0x2af3c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af3c8) {
            ctx->pc = 0x2AF3CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF3C8u;
            // 0x2af3cc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF3B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2af3b0;
        }
    }
    ctx->pc = 0x2AF3D0u;
    // 0x2af3d0: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2af3d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2af3d4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2af3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2af3d8: 0x1462fff5  bne         $v1, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2AF3D8u;
    {
        const bool branch_taken_0x2af3d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AF3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF3D8u;
        // 0x2af3dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af3d8) {
            ctx->pc = 0x2AF3B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2af3b0;
        }
    }
    ctx->pc = 0x2AF3E0u;
    // 0x2af3e0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2af3e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2af3e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2af3e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2af3e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2af3e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2af3ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF3ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF3ECu;
        // 0x2af3f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF3ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF3F4u;
    // 0x2af3f4: 0x0  nop
    ctx->pc = 0x2af3f4u;
    // NOP
    ctx->pc = 0x2af3f8u;
}
