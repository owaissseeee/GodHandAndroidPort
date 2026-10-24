#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r604_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r604
{
// Function: func_0079A660
// Address: 0x79a660 - 0x79a6e8
void func_0079A660_0x79a660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A660_0x79a660");
#endif

    switch (ctx->pc) {
        case 0x79a690u: goto label_79a690;
        case 0x79a6c0u: goto label_79a6c0;
        case 0x79a6d0u: goto label_79a6d0;
        default: break;
    }

    ctx->pc = 0x79a660u;

    // 0x79a660: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79a660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79a664: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x79a664u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x79a668: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x79a668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x79a66c: 0x8044b498  lb          $a0, -0x4B68($v0)
    ctx->pc = 0x79a66cu;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x79B498u));
    // 0x79a670: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a674: 0x2446b498  addiu       $a2, $v0, -0x4B68
    ctx->pc = 0x79a674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947992));
    // 0x79a678: 0x24684c58  addiu       $t0, $v1, 0x4C58
    ctx->pc = 0x79a678u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x79a67c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a67cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a680: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x79A680u;
    {
        const bool branch_taken_0x79a680 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A680u;
        // 0x79a684: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a680) {
            ctx->pc = 0x79A6B8u;
            goto label_79a6b8;
        }
    }
    ctx->pc = 0x79A688u;
    // 0x79a688: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a688u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a68c: 0x0  nop
    ctx->pc = 0x79a68cu;
    // NOP
label_79a690:
    // 0x79a690: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a690u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79a694: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a694u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79a698: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a69c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a6a0: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a6a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a6a4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A6A4u;
    {
        const bool branch_taken_0x79a6a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6A4u;
        // 0x79a6a8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a6a4) {
            ctx->pc = 0x79A6B8u;
            goto label_79a6b8;
        }
    }
    ctx->pc = 0x79A6ACu;
    // 0x79a6ac: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a6acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a6b0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A6B0u;
    {
        const bool branch_taken_0x79a6b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a6b0) {
            ctx->pc = 0x79A6B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A6B0u;
            // 0x79a6b4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a690;
        }
    }
    ctx->pc = 0x79A6B8u;
label_79a6b8:
    // 0x79a6b8: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79A6B8u;
    SET_GPR_U32(ctx, 31, 0x79A6C0u);
    ctx->pc = 0x79A6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6B8u;
    // 0x79a6bc: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79A6B8u, 0x79A6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6C0u;
label_79a6c0:
    // 0x79a6c0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x79A6C0u;
    {
        const bool branch_taken_0x79a6c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a6c0) {
            ctx->pc = 0x79A6C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A6C0u;
            // 0x79a6c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A6D8u;
            goto label_79a6d8;
        }
    }
    ctx->pc = 0x79A6C8u;
    // 0x79a6c8: 0xc0601a2  jal         func_180688
    ctx->pc = 0x79A6C8u;
    SET_GPR_U32(ctx, 31, 0x79A6D0u);
    ctx->pc = 0x79A6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A6C8u;
    // 0x79a6cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180688u, 0x79A6C8u, 0x79A6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A6D0u;
label_79a6d0:
    // 0x79a6d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79A6D0u;
    {
        const bool branch_taken_0x79a6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6D0u;
        // 0x79a6d4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a6d0) {
            ctx->pc = 0x79A6DCu;
            goto label_79a6dc;
        }
    }
    ctx->pc = 0x79A6D8u;
label_79a6d8:
    // 0x79a6d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a6d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79a6dc:
    // 0x79a6dc: 0x3e00008  jr          $ra
    ctx->pc = 0x79A6DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A6DCu;
        // 0x79a6e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A6DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A6E4u;
    // 0x79a6e4: 0x0  nop
    ctx->pc = 0x79a6e4u;
    // NOP
    ctx->pc = 0x79a6e8u;
}
} // namespace gh_r604
