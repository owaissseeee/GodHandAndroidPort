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
// Function: Trans__6cMcSys
// Address: 0x7c8c18 - 0x7c8c78
void Trans__6cMcSys_0x7c8c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Trans__6cMcSys_0x7c8c18");
#endif

    switch (ctx->pc) {
        case 0x7c8c44u: goto label_7c8c44;
        case 0x7c8c64u: goto label_7c8c64;
        default: break;
    }

    ctx->pc = 0x7c8c18u;

    // 0x7c8c18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7c8c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7c8c1c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x7c8c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x7c8c20: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7c8c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7c8c24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c8c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c8c28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7c8c28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c8c2c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x7c8c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x7c8c30: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7c8c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7c8c34: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x7C8C34u;
    {
        const bool branch_taken_0x7c8c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c8c34) {
            ctx->pc = 0x7C8C38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C8C34u;
            // 0x7c8c38: 0x8e020074  lw          $v0, 0x74($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C8C48u;
            goto label_7c8c48;
        }
    }
    ctx->pc = 0x7C8C3Cu;
    // 0x7c8c3c: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x7C8C3Cu;
    SET_GPR_U32(ctx, 31, 0x7C8C44u);
    ctx->pc = 0x7C8C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8C3Cu;
    // 0x7c8c40: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x7C8C3Cu, 0x7C8C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8C44u;
label_7c8c44:
    // 0x7c8c44: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x7c8c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_7c8c48:
    // 0x7c8c48: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x7c8c48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x7c8c4c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7c8c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7c8c50: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C8C50u;
    {
        const bool branch_taken_0x7c8c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C8C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C8C50u;
        // 0x7c8c54: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c8c50) {
            ctx->pc = 0x7C8C68u;
            goto label_7c8c68;
        }
    }
    ctx->pc = 0x7C8C58u;
    // 0x7c8c58: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x7c8c58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x7c8c5c: 0xc0ab9c6  jal         func_2AE718
    ctx->pc = 0x7C8C5Cu;
    SET_GPR_U32(ctx, 31, 0x7C8C64u);
    ctx->pc = 0x7C8C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C8C5Cu;
    // 0x7c8c60: 0x24846900  addiu       $a0, $a0, 0x6900 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE718u, 0x7C8C5Cu, 0x7C8C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C8C64u;
label_7c8c64:
    // 0x7c8c64: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7c8c64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_7c8c68:
    // 0x7c8c68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c8c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c8c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x7C8C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C8C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C8C6Cu;
        // 0x7c8c70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C8C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C8C74u;
    // 0x7c8c74: 0x0  nop
    ctx->pc = 0x7c8c74u;
    // NOP
    ctx->pc = 0x7c8c78u;
}
} // namespace gh_mcport
