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

// Function: ignore__9streambufi
// Address: 0x38b168 - 0x38b1f0
void ignore__9streambufi_0x38b168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ignore__9streambufi_0x38b168");
#endif

    switch (ctx->pc) {
        case 0x38b198u: goto label_38b198;
        case 0x38b1c8u: goto label_38b1c8;
        default: break;
    }

    ctx->pc = 0x38b168u;

    // 0x38b168: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x38b168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x38b16c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x38b16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x38b170: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x38b170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x38b174: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x38b174u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b178: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x38b178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x38b17c: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x38b17cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x38b180: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38b180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38b184: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38b184u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b188: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x38b188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x38b18c: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x38b18cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38b190: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x38b190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x38b194: 0x0  nop
    ctx->pc = 0x38b194u;
    // NOP
label_38b198:
    // 0x38b198: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x38b198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x38b19c: 0x432023  subu        $a0, $v0, $v1
    ctx->pc = 0x38b19cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38b1a0: 0x18800005  blez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38B1A0u;
    {
        const bool branch_taken_0x38b1a0 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x38B1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B1A0u;
        // 0x38b1a4: 0x204102a  slt         $v0, $s0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b1a0) {
            ctx->pc = 0x38B1B8u;
            goto label_38b1b8;
        }
    }
    ctx->pc = 0x38B1A8u;
    // 0x38b1a8: 0x202200b  movn        $a0, $s0, $v0
    ctx->pc = 0x38b1a8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 16));
    // 0x38b1ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x38b1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x38b1b0: 0x2048023  subu        $s0, $s0, $a0
    ctx->pc = 0x38b1b0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x38b1b4: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x38b1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_38b1b8:
    // 0x38b1b8: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x38B1B8u;
    {
        const bool branch_taken_0x38b1b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x38B1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B1B8u;
        // 0x38b1bc: 0x2501023  subu        $v0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38b1b8) {
            ctx->pc = 0x38B1D4u;
            goto label_38b1d4;
        }
    }
    ctx->pc = 0x38B1C0u;
    // 0x38b1c0: 0xc0e316e  jal         func_38C5B8
    ctx->pc = 0x38B1C0u;
    SET_GPR_U32(ctx, 31, 0x38B1C8u);
    ctx->pc = 0x38B1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38B1C0u;
    // 0x38b1c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C5B8u, 0x38B1C0u, 0x38B1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38B1C8u;
label_38b1c8:
    // 0x38b1c8: 0x5453fff3  bnel        $v0, $s3, . + 4 + (-0xD << 2)
    ctx->pc = 0x38B1C8u;
    {
        const bool branch_taken_0x38b1c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x38b1c8) {
            ctx->pc = 0x38B1CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38B1C8u;
            // 0x38b1cc: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38B198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38b198;
        }
    }
    ctx->pc = 0x38B1D0u;
    // 0x38b1d0: 0x2501023  subu        $v0, $s2, $s0
    ctx->pc = 0x38b1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_38b1d4:
    // 0x38b1d4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x38b1d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38b1d8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x38b1d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38b1dc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x38b1dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38b1e0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x38b1e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38b1e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38b1e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38b1e8: 0x3e00008  jr          $ra
    ctx->pc = 0x38B1E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38B1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38B1E8u;
        // 0x38b1ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38B1E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38B1F0u;
}
