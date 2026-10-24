#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r305_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r305
{
// Function: R305Move__Fv
// Address: 0x799538 - 0x799588
void R305Move__Fv_0x799538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R305Move__Fv_0x799538");
#endif

    switch (ctx->pc) {
        case 0x799558u: goto label_799558;
        case 0x799568u: goto label_799568;
        default: break;
    }

    ctx->pc = 0x799538u;

    // 0x799538: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x799538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x79953c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x79953cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x799540: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x799540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x799544: 0x2410001a  addiu       $s0, $zero, 0x1A
    ctx->pc = 0x799544u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x799548: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x799548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x79954c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x79954cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799550: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799554: 0x3c12007a  lui         $s2, 0x7A
    ctx->pc = 0x799554u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)122 << 16));
label_799558:
    // 0x799558: 0x8e44a800  lw          $a0, -0x5800($s2)
    ctx->pc = 0x799558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294944768)));
    // 0x79955c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x79955cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x799560: 0xc1e65fc  jal         func_7997F0
    ctx->pc = 0x799560u;
    SET_GPR_U32(ctx, 31, 0x799568u);
    ctx->pc = 0x799564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799560u;
    // 0x799564: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7997F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7997F0u, 0x799560u, 0x799568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799568u;
label_799568:
    // 0x799568: 0x601fffb  bgez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x799568u;
    {
        const bool branch_taken_0x799568 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x79956Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799568u;
        // 0x79956c: 0x26310090  addiu       $s1, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799568) {
            ctx->pc = 0x799558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799558;
        }
    }
    ctx->pc = 0x799570u;
    // 0x799570: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x799570u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799574: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x799574u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799578: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x799578u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79957c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79957cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799580: 0x3e00008  jr          $ra
    ctx->pc = 0x799580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799580u;
        // 0x799584: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799588u;
}
} // namespace gh_r305
