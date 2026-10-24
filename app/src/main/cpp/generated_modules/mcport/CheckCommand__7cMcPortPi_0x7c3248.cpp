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
// Function: CheckCommand__7cMcPortPi
// Address: 0x7c3248 - 0x7c32a0
void CheckCommand__7cMcPortPi_0x7c3248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckCommand__7cMcPortPi_0x7c3248");
#endif

    switch (ctx->pc) {
        case 0x7c3270u: goto label_7c3270;
        default: break;
    }

    ctx->pc = 0x7c3248u;

    // 0x7c3248: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7c3248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7c324c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7c324cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7c3250: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7c3250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7c3254: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7c3254u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3258: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x7c3258u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c325c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c325cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c3260: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x7c3260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c3264: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x7c3264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x7c3268: 0xc1f377e  jal         func_7CDDF8
    ctx->pc = 0x7C3268u;
    SET_GPR_U32(ctx, 31, 0x7C3270u);
    ctx->pc = 0x7C326Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C3268u;
    // 0x7c326c: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CDDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CDDF8u, 0x7C3268u, 0x7C3270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3270u;
label_7c3270:
    // 0x7c3270: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C3270u;
    {
        const bool branch_taken_0x7c3270 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C3274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3270u;
        // 0x7c3274: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c3270) {
            ctx->pc = 0x7C3280u;
            goto label_7c3280;
        }
    }
    ctx->pc = 0x7C3278u;
    // 0x7c3278: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x7c3278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x7c327c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x7c327cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_7c3280:
    // 0x7c3280: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x7c3280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x7c3284: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7c3284u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7c3288: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7c3288u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c328c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x7c328cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x7c3290: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c3290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c3294: 0x3e00008  jr          $ra
    ctx->pc = 0x7C3294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C3298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3294u;
        // 0x7c3298: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C3294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C329Cu;
    // 0x7c329c: 0x0  nop
    ctx->pc = 0x7c329cu;
    // NOP
    ctx->pc = 0x7c32a0u;
}
} // namespace gh_mcport
