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

// Function: ArenaEm_stepSecondWave
// Address: 0x1f1c50 - 0x1f1d00
void ArenaEm_stepSecondWave_0x1f1c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ArenaEm_stepSecondWave_0x1f1c50");
#endif

    switch (ctx->pc) {
        case 0x1f1c84u: goto label_1f1c84;
        case 0x1f1cc8u: goto label_1f1cc8;
        case 0x1f1cd0u: goto label_1f1cd0;
        default: break;
    }

    ctx->pc = 0x1f1c50u;

    // 0x1f1c50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f1c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f1c54: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f1c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1f1c58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f1c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f1c5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f1c5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1c60: 0x8e030b94  lw          $v1, 0xB94($s0)
    ctx->pc = 0x1f1c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2964)));
    // 0x1f1c64: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F1C64u;
    {
        const bool branch_taken_0x1f1c64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1C64u;
        // 0x1f1c68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1c64) {
            ctx->pc = 0x1F1C7Cu;
            goto label_1f1c7c;
        }
    }
    ctx->pc = 0x1F1C6Cu;
    // 0x1f1c6c: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F1C6Cu;
    {
        const bool branch_taken_0x1f1c6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f1c6c) {
            ctx->pc = 0x1F1C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1C6Cu;
            // 0x1f1c70: 0x8e020b88  lw          $v0, 0xB88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2952)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1C9Cu;
            goto label_1f1c9c;
        }
    }
    ctx->pc = 0x1F1C74u;
    // 0x1f1c74: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1F1C74u;
    {
        const bool branch_taken_0x1f1c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1C74u;
        // 0x1f1c78: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1c74) {
            ctx->pc = 0x1F1CF4u;
            goto label_1f1cf4;
        }
    }
    ctx->pc = 0x1F1C7Cu;
label_1f1c7c:
    // 0x1f1c7c: 0xc07be5e  jal         func_1EF978
    ctx->pc = 0x1F1C7Cu;
    SET_GPR_U32(ctx, 31, 0x1F1C84u);
    ctx->pc = 0x1F1C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1C7Cu;
    // 0x1f1c80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF978u, 0x1F1C7Cu, 0x1F1C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1C84u;
label_1f1c84:
    // 0x1f1c84: 0x8e020b94  lw          $v0, 0xB94($s0)
    ctx->pc = 0x1f1c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2964)));
    // 0x1f1c88: 0x24030708  addiu       $v1, $zero, 0x708
    ctx->pc = 0x1f1c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1800));
    // 0x1f1c8c: 0xae030ba0  sw          $v1, 0xBA0($s0)
    ctx->pc = 0x1f1c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2976), GPR_U32(ctx, 3));
    // 0x1f1c90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f1c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f1c94: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1F1C94u;
    {
        const bool branch_taken_0x1f1c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1C94u;
        // 0x1f1c98: 0xae020b94  sw          $v0, 0xB94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2964), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1c94) {
            ctx->pc = 0x1F1CF0u;
            goto label_1f1cf0;
        }
    }
    ctx->pc = 0x1F1C9Cu;
label_1f1c9c:
    // 0x1f1c9c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1f1c9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f1ca0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F1CA0u;
    {
        const bool branch_taken_0x1f1ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1CA0u;
        // 0x1f1ca4: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1ca0) {
            ctx->pc = 0x1F1CB8u;
            goto label_1f1cb8;
        }
    }
    ctx->pc = 0x1F1CA8u;
    // 0x1f1ca8: 0x8e020ba0  lw          $v0, 0xBA0($s0)
    ctx->pc = 0x1f1ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2976)));
    // 0x1f1cac: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F1CACu;
    {
        const bool branch_taken_0x1f1cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1CACu;
        // 0x1f1cb0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1cac) {
            ctx->pc = 0x1F1CECu;
            goto label_1f1cec;
        }
    }
    ctx->pc = 0x1F1CB4u;
    // 0x1f1cb4: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1f1cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_1f1cb8:
    // 0x1f1cb8: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x1f1cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f1cbc: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x1f1cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x1f1cc0: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x1F1CC0u;
    SET_GPR_U32(ctx, 31, 0x1F1CC8u);
    ctx->pc = 0x1F1CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1CC0u;
    // 0x1f1cc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x1F1CC0u, 0x1F1CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1CC8u;
label_1f1cc8:
    // 0x1f1cc8: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x1F1CC8u;
    SET_GPR_U32(ctx, 31, 0x1F1CD0u);
    ctx->pc = 0x1F1CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1CC8u;
    // 0x1f1ccc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x1F1CC8u, 0x1F1CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1CD0u;
label_1f1cd0:
    // 0x1f1cd0: 0x8e020b8c  lw          $v0, 0xB8C($s0)
    ctx->pc = 0x1f1cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2956)));
    // 0x1f1cd4: 0x8e030b94  lw          $v1, 0xB94($s0)
    ctx->pc = 0x1f1cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2964)));
    // 0x1f1cd8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f1cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f1cdc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f1cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f1ce0: 0xae020b8c  sw          $v0, 0xB8C($s0)
    ctx->pc = 0x1f1ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2956), GPR_U32(ctx, 2));
    // 0x1f1ce4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F1CE4u;
    {
        const bool branch_taken_0x1f1ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1CE4u;
        // 0x1f1ce8: 0xae030b94  sw          $v1, 0xB94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2964), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1ce4) {
            ctx->pc = 0x1F1CF0u;
            goto label_1f1cf0;
        }
    }
    ctx->pc = 0x1F1CECu;
label_1f1cec:
    // 0x1f1cec: 0xae020ba0  sw          $v0, 0xBA0($s0)
    ctx->pc = 0x1f1cecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2976), GPR_U32(ctx, 2));
label_1f1cf0:
    // 0x1f1cf0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f1cf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f1cf4:
    // 0x1f1cf4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f1cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f1cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1CF8u;
        // 0x1f1cfc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1CF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1D00u;
}
