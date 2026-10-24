#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: SetIdColor__6cMcSysQ26cMcSys11eMcIdMarkNoUi
// Address: 0x7c8a58 - 0x7c8a98
void SetIdColor__6cMcSysQ26cMcSys11eMcIdMarkNoUi_0x7c8a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetIdColor__6cMcSysQ26cMcSys11eMcIdMarkNoUi_0x7c8a58");
#endif

    switch (ctx->pc) {
        case 0x7c8a80u: goto label_7c8a80;
        default: break;
    }

    ctx->pc = 0x7c8a58u;

    // 0x7c8a58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7c8a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7c8a5c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x7c8a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x7c8a60: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7c8a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7c8a64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c8a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c8a68: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x7c8a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x7c8a6c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7c8a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7c8a70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7C8A70u;
    {
        const bool branch_taken_0x7c8a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C8A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C8A70u;
        // 0x7c8a74: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c8a70) {
            ctx->pc = 0x7C8A84u;
            goto label_7c8a84;
        }
    }
    ctx->pc = 0x7C8A78u;
    // 0x7c8a78: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x7C8A78u;
    SET_GPR_U32(ctx, 31, 0x7C8A80u);
    ctx->pc = 0x7C8A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8A78u;
    // 0x7c8a7c: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x7C8A78u, 0x7C8A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8A80u;
label_7c8a80:
    // 0x7c8a80: 0xac50004c  sw          $s0, 0x4C($v0)
    ctx->pc = 0x7c8a80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 16));
label_7c8a84:
    // 0x7c8a84: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7c8a84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c8a88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c8a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c8a8c: 0x3e00008  jr          $ra
    ctx->pc = 0x7C8A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C8A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C8A8Cu;
        // 0x7c8a90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C8A8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C8A94u;
    // 0x7c8a94: 0x0  nop
    ctx->pc = 0x7c8a94u;
    // NOP
    ctx->pc = 0x7c8a98u;
}
} // namespace gh_mcport
