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

// Function: func_003BA370
// Address: 0x3ba370 - 0x3ba3d8
void func_003BA370_0x3ba370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003BA370_0x3ba370");
#endif

    switch (ctx->pc) {
        case 0x3ba388u: goto label_3ba388;
        default: break;
    }

    ctx->pc = 0x3ba370u;

    // 0x3ba370: 0x28a30003  slti        $v1, $a1, 0x3
    ctx->pc = 0x3ba370u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3ba374: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x3BA374u;
    {
        const bool branch_taken_0x3ba374 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BA378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA374u;
        // 0x3ba378: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba374) {
            ctx->pc = 0x3BA3D0u;
            goto label_3ba3d0;
        }
    }
    ctx->pc = 0x3BA37Cu;
    // 0x3ba37c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ba37cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ba380: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3BA380u;
    {
        const bool branch_taken_0x3ba380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA380u;
        // 0x3ba384: 0x24080077  addiu       $t0, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba380) {
            ctx->pc = 0x3BA38Cu;
            goto label_3ba38c;
        }
    }
    ctx->pc = 0x3BA388u;
label_3ba388:
    // 0x3ba388: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x3ba388u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_3ba38c:
    // 0x3ba38c: 0xe5102a  slt         $v0, $a3, $a1
    ctx->pc = 0x3ba38cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3ba390: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3BA390u;
    {
        const bool branch_taken_0x3ba390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA390u;
        // 0x3ba394: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba390) {
            ctx->pc = 0x3BA3D0u;
            goto label_3ba3d0;
        }
    }
    ctx->pc = 0x3BA398u;
    // 0x3ba398: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3ba398u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ba39c: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x3ba39cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3ba3a0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3ba3a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ba3a4: 0x14660004  bne         $v1, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BA3A4u;
    {
        const bool branch_taken_0x3ba3a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x3ba3a4) {
            ctx->pc = 0x3BA3B8u;
            goto label_3ba3b8;
        }
    }
    ctx->pc = 0x3BA3ACu;
    // 0x3ba3ac: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x3ba3acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x3ba3b0: 0x10480007  beq         $v0, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3BA3B0u;
    {
        const bool branch_taken_0x3ba3b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x3BA3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA3B0u;
        // 0x3ba3b4: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba3b0) {
            ctx->pc = 0x3BA3D0u;
            goto label_3ba3d0;
        }
    }
    ctx->pc = 0x3BA3B8u;
label_3ba3b8:
    // 0x3ba3b8: 0x5468fff3  bnel        $v1, $t0, . + 4 + (-0xD << 2)
    ctx->pc = 0x3BA3B8u;
    {
        const bool branch_taken_0x3ba3b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x3ba3b8) {
            ctx->pc = 0x3BA3BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BA3B8u;
            // 0x3ba3bc: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BA388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ba388;
        }
    }
    ctx->pc = 0x3BA3C0u;
    // 0x3ba3c0: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x3ba3c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x3ba3c4: 0x5446fff0  bnel        $v0, $a2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x3BA3C4u;
    {
        const bool branch_taken_0x3ba3c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x3ba3c4) {
            ctx->pc = 0x3BA3C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BA3C4u;
            // 0x3ba3c8: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BA388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ba388;
        }
    }
    ctx->pc = 0x3BA3CCu;
    // 0x3ba3cc: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x3ba3ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3ba3d0:
    // 0x3ba3d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3BA3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BA3D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BA3D8u;
}
