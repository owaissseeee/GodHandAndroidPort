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

// Function: kFindAddress
// Address: 0x3b64a8 - 0x3b64e8
void kFindAddress_0x3b64a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kFindAddress_0x3b64a8");
#endif

    switch (ctx->pc) {
        case 0x3b64c0u: goto label_3b64c0;
        default: break;
    }

    ctx->pc = 0x3b64a8u;

    // 0x3b64a8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3b64a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b64ac: 0x1046000b  beq         $v0, $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x3B64ACu;
    {
        const bool branch_taken_0x3b64ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x3B64B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B64ACu;
        // 0x3b64b0: 0x85102b  sltu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b64ac) {
            ctx->pc = 0x3B64DCu;
            goto label_3b64dc;
        }
    }
    ctx->pc = 0x3B64B4u;
    // 0x3b64b4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3B64B4u;
    {
        const bool branch_taken_0x3b64b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b64b4) {
            ctx->pc = 0x3B64B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B64B4u;
            // 0x3b64b8: 0x2200a  movz        $a0, $zero, $v0 (Delay Slot)
            if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B64E0u;
            goto label_3b64e0;
        }
    }
    ctx->pc = 0x3B64BCu;
    // 0x3b64bc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3b64bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_3b64c0:
    // 0x3b64c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3b64c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b64c4: 0x10460005  beq         $v0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B64C4u;
    {
        const bool branch_taken_0x3b64c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x3B64C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B64C4u;
        // 0x3b64c8: 0x85102b  sltu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b64c4) {
            ctx->pc = 0x3B64DCu;
            goto label_3b64dc;
        }
    }
    ctx->pc = 0x3B64CCu;
    // 0x3b64cc: 0x5440fffc  bnel        $v0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x3B64CCu;
    {
        const bool branch_taken_0x3b64cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b64cc) {
            ctx->pc = 0x3B64D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B64CCu;
            // 0x3b64d0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B64C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b64c0;
        }
    }
    ctx->pc = 0x3B64D4u;
    // 0x3b64d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3B64D4u;
    {
        const bool branch_taken_0x3b64d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B64D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B64D4u;
        // 0x3b64d8: 0x2200a  movz        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b64d4) {
            ctx->pc = 0x3B64E0u;
            goto label_3b64e0;
        }
    }
    ctx->pc = 0x3B64DCu;
label_3b64dc:
    // 0x3b64dc: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x3b64dcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_3b64e0:
    // 0x3b64e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3B64E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B64E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B64E0u;
        // 0x3b64e4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B64E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B64E8u;
}
