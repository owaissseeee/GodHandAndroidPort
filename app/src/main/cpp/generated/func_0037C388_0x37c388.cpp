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

// Function: func_0037C388
// Address: 0x37c388 - 0x37c420
void func_0037C388_0x37c388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037C388_0x37c388");
#endif

    switch (ctx->pc) {
        case 0x37c3b0u: goto label_37c3b0;
        case 0x37c3f0u: goto label_37c3f0;
        default: break;
    }

    ctx->pc = 0x37c388u;

    // 0x37c388: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x37c388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37c38c: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x37c38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x37c390: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x37c390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x37c394: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x37c394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x37c398: 0x2450cf20  addiu       $s0, $v0, -0x30E0
    ctx->pc = 0x37c398u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954784));
    // 0x37c39c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x37c39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x37c3a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37c3a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c3a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37c3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37c3a8: 0x26120ff0  addiu       $s2, $s0, 0xFF0
    ctx->pc = 0x37c3a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4080));
    // 0x37c3ac: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x37c3acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x76CF20u));
label_37c3b0:
    // 0x37c3b0: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x37C3B0u;
    {
        const bool branch_taken_0x37c3b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c3b0) {
            ctx->pc = 0x37C3B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37C3B0u;
            // 0x37c3b4: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37C3FCu;
            goto label_37c3fc;
        }
    }
    ctx->pc = 0x37C3B8u;
    // 0x37c3b8: 0x92020005  lbu         $v0, 0x5($s0)
    ctx->pc = 0x37c3b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x37c3bc: 0x9223000d  lbu         $v1, 0xD($s1)
    ctx->pc = 0x37c3bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
    // 0x37c3c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x37c3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x37c3c4: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x37C3C4u;
    {
        const bool branch_taken_0x37c3c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c3c4) {
            ctx->pc = 0x37C3C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37C3C4u;
            // 0x37c3c8: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37C3FCu;
            goto label_37c3fc;
        }
    }
    ctx->pc = 0x37C3CCu;
    // 0x37c3cc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x37c3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x37c3d0: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x37C3D0u;
    {
        const bool branch_taken_0x37c3d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c3d0) {
            ctx->pc = 0x37C3D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37C3D0u;
            // 0x37c3d4: 0x86250010  lh          $a1, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37C3E8u;
            goto label_37c3e8;
        }
    }
    ctx->pc = 0x37C3D8u;
    // 0x37c3d8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x37c3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x37c3dc: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x37C3DCu;
    {
        const bool branch_taken_0x37c3dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x37c3dc) {
            ctx->pc = 0x37C3E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37C3DCu;
            // 0x37c3e0: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37C3FCu;
            goto label_37c3fc;
        }
    }
    ctx->pc = 0x37C3E4u;
    // 0x37c3e4: 0x86250010  lh          $a1, 0x10($s1)
    ctx->pc = 0x37c3e4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
label_37c3e8:
    // 0x37c3e8: 0xc0df62e  jal         func_37D8B8
    ctx->pc = 0x37C3E8u;
    SET_GPR_U32(ctx, 31, 0x37C3F0u);
    ctx->pc = 0x37C3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C3E8u;
    // 0x37c3ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D8B8u, 0x37C3E8u, 0x37C3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C3F0u;
label_37c3f0:
    // 0x37c3f0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x37c3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x37c3f4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37C3F4u;
    {
        const bool branch_taken_0x37c3f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37C3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C3F4u;
        // 0x37c3f8: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c3f4) {
            ctx->pc = 0x37C408u;
            goto label_37c408;
        }
    }
    ctx->pc = 0x37C3FCu;
label_37c3fc:
    // 0x37c3fc: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x37c3fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x37c400: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x37C400u;
    {
        const bool branch_taken_0x37c400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37c400) {
            ctx->pc = 0x37C404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37C400u;
            // 0x37c404: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37C3B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37c3b0;
        }
    }
    ctx->pc = 0x37C408u;
label_37c408:
    // 0x37c408: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x37c408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37c40c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x37c40cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37c410: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x37c410u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37c414: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37c414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37c418: 0x3e00008  jr          $ra
    ctx->pc = 0x37C418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C418u;
        // 0x37c41c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37C420u;
}
