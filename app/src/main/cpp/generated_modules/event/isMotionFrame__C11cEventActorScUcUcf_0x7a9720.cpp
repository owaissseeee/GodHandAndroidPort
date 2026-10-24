#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: isMotionFrame__C11cEventActorScUcUcf
// Address: 0x7a9720 - 0x7a9780
void isMotionFrame__C11cEventActorScUcUcf_0x7a9720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("isMotionFrame__C11cEventActorScUcUcf_0x7a9720");
#endif

    switch (ctx->pc) {
        case 0x7a9764u: goto label_7a9764;
        default: break;
    }

    ctx->pc = 0x7a9720u;

    // 0x7a9720: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7a9720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7a9724: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x7a9724u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a9728: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7a9728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7a972c: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x7a972cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x7a9730: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x7a9730u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x7a9734: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x7a9734u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x7a9738: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7a9738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x7a973c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x7a973cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x7a9740: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x7A9740u;
    {
        const bool branch_taken_0x7a9740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9740u;
        // 0x7a9744: 0x30e700ff  andi        $a3, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9740) {
            ctx->pc = 0x7A976Cu;
            goto label_7a976c;
        }
    }
    ctx->pc = 0x7A9748u;
    // 0x7a9748: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x7a9748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x7a974c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x7a974cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x7a9750: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x7a9750u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x7a9754: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x7a9754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a9758: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x7a9758u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a975c: 0xc1eada4  jal         func_7AB690
    ctx->pc = 0x7A975Cu;
    SET_GPR_U32(ctx, 31, 0x7A9764u);
    ctx->pc = 0x7A9760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A975Cu;
    // 0x7a9760: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AB690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AB690u, 0x7A975Cu, 0x7A9764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A9764u;
label_7a9764:
    // 0x7a9764: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x7A9764u;
    {
        const bool branch_taken_0x7a9764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A9768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9764u;
        // 0x7a9768: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9764) {
            ctx->pc = 0x7A9774u;
            goto label_7a9774;
        }
    }
    ctx->pc = 0x7A976Cu;
label_7a976c:
    // 0x7a976c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x7a976cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a9770: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7a9770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7a9774:
    // 0x7a9774: 0x3e00008  jr          $ra
    ctx->pc = 0x7A9774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7A9778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9774u;
        // 0x7a9778: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A9774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7A977Cu;
    // 0x7a977c: 0x0  nop
    ctx->pc = 0x7a977cu;
    // NOP
    ctx->pc = 0x7a9780u;
}
} // namespace gh_event
