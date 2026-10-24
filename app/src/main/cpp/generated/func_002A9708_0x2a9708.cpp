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

// Function: func_002A9708
// Address: 0x2a9708 - 0x2a9790
void func_002A9708_0x2a9708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A9708_0x2a9708");
#endif

    switch (ctx->pc) {
        case 0x2a9730u: goto label_2a9730;
        default: break;
    }

    ctx->pc = 0x2a9708u;

    // 0x2a9708: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2a9708u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a970c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x2a970cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2a9710: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x2a9710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2a9714: 0x24440007  addiu       $a0, $v0, 0x7
    ctx->pc = 0x2a9714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x2a9718: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x2a9718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2a971c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2a971cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2a9720: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a9720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a9724: 0x624024  and         $t0, $v1, $v0
    ctx->pc = 0x2a9724u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a9728: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x2A9728u;
    {
        const bool branch_taken_0x2a9728 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A972Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9728u;
        // 0x2a972c: 0x8cc70000  lw          $a3, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9728) {
            ctx->pc = 0x2A9754u;
            goto label_2a9754;
        }
    }
    ctx->pc = 0x2A9730u;
label_2a9730:
    // 0x2a9730: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2a9730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2a9734: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2a9734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2a9738: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2a9738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2a973c: 0x482023  subu        $a0, $v0, $t0
    ctx->pc = 0x2a973cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2a9740: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x2a9740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2a9744: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2a9744u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x2a9748: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2a9748u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2a974c: 0x14a0fff8  bnez        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2A974Cu;
    {
        const bool branch_taken_0x2a974c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A974Cu;
        // 0x2a9750: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a974c) {
            ctx->pc = 0x2A9730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a9730;
        }
    }
    ctx->pc = 0x2A9754u;
label_2a9754:
    // 0x2a9754: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2a9754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2a9758: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2a9758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a975c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2a975cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a9760: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2a9760u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2a9764: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2a9764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2a9768: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2a9768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a976c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a976cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a9770: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x2a9770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2a9774: 0x1021018  mult        $v0, $t0, $v0
    ctx->pc = 0x2a9774u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2a9778: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a9778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a977c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2a977cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2a9780: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2a9780u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2a9784: 0xacc40010  sw          $a0, 0x10($a2)
    ctx->pc = 0x2a9784u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 4));
    // 0x2a9788: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9788u;
        // 0x2a978c: 0xacc00014  sw          $zero, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9790u;
}
