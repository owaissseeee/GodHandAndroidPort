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

// Function: AllocInitObj17EE40_317810
// Address: 0x317810 - 0x317880
void AllocInitObj17EE40_317810_0x317810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocInitObj17EE40_317810_0x317810");
#endif

    switch (ctx->pc) {
        case 0x317844u: goto label_317844;
        case 0x31785cu: goto label_31785c;
        case 0x317864u: goto label_317864;
        default: break;
    }

    ctx->pc = 0x317810u;

    // 0x317810: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x317810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x317814: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x317814u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x317818: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x317818u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31781c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x31781cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x317820: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x317820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x317824: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x317824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x317828: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x317828u;
    {
        const bool branch_taken_0x317828 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31782Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317828u;
        // 0x31782c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317828) {
            ctx->pc = 0x31786Cu;
            goto label_31786c;
        }
    }
    ctx->pc = 0x317830u;
    // 0x317830: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x317830u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x317834: 0x24040610  addiu       $a0, $zero, 0x610
    ctx->pc = 0x317834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1552));
    // 0x317838: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x317838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x31783c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x31783Cu;
    SET_GPR_U32(ctx, 31, 0x317844u);
    ctx->pc = 0x317840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31783Cu;
    // 0x317840: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x31783Cu, 0x317844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317844u;
label_317844:
    // 0x317844: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x317844u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317848: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x317848u;
    {
        const bool branch_taken_0x317848 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31784Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317848u;
        // 0x31784c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317848) {
            ctx->pc = 0x31786Cu;
            goto label_31786c;
        }
    }
    ctx->pc = 0x317850u;
    // 0x317850: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x317850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317854: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x317854u;
    SET_GPR_U32(ctx, 31, 0x31785Cu);
    ctx->pc = 0x317858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317854u;
    // 0x317858: 0x24060610  addiu       $a2, $zero, 0x610 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x317854u, 0x31785Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31785Cu;
label_31785c:
    // 0x31785c: 0xc05fb90  jal         func_17EE40
    ctx->pc = 0x31785Cu;
    SET_GPR_U32(ctx, 31, 0x317864u);
    ctx->pc = 0x317860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31785Cu;
    // 0x317860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EE40u, 0x31785Cu, 0x317864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317864u;
label_317864:
    // 0x317864: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x317864u;
    {
        const bool branch_taken_0x317864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317864u;
        // 0x317868: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317864) {
            ctx->pc = 0x317874u;
            goto label_317874;
        }
    }
    ctx->pc = 0x31786Cu;
label_31786c:
    // 0x31786c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31786cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317870: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x317870u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_317874:
    // 0x317874: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x317874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x317878: 0x3e00008  jr          $ra
    ctx->pc = 0x317878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31787Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317878u;
        // 0x31787c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x317880u;
}
