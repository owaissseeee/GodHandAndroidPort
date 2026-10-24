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

// Function: AllocAndSetupObj_313580
// Address: 0x313580 - 0x3135f0
void AllocAndSetupObj_313580_0x313580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocAndSetupObj_313580_0x313580");
#endif

    switch (ctx->pc) {
        case 0x3135b4u: goto label_3135b4;
        case 0x3135ccu: goto label_3135cc;
        case 0x3135d4u: goto label_3135d4;
        default: break;
    }

    ctx->pc = 0x313580u;

    // 0x313580: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x313580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x313584: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x313584u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x313588: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x313588u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31358c: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x31358cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x313590: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x313590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x313594: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x313594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x313598: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x313598u;
    {
        const bool branch_taken_0x313598 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31359Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313598u;
        // 0x31359c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313598) {
            ctx->pc = 0x3135DCu;
            goto label_3135dc;
        }
    }
    ctx->pc = 0x3135A0u;
    // 0x3135a0: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x3135a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x3135a4: 0x240415b0  addiu       $a0, $zero, 0x15B0
    ctx->pc = 0x3135a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5552));
    // 0x3135a8: 0x24c64220  addiu       $a2, $a2, 0x4220
    ctx->pc = 0x3135a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16928));
    // 0x3135ac: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x3135ACu;
    SET_GPR_U32(ctx, 31, 0x3135B4u);
    ctx->pc = 0x3135B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3135ACu;
    // 0x3135b0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x3135ACu, 0x3135B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3135B4u;
label_3135b4:
    // 0x3135b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3135b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3135b8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3135B8u;
    {
        const bool branch_taken_0x3135b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3135BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3135B8u;
        // 0x3135bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3135b8) {
            ctx->pc = 0x3135DCu;
            goto label_3135dc;
        }
    }
    ctx->pc = 0x3135C0u;
    // 0x3135c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3135c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3135c4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x3135C4u;
    SET_GPR_U32(ctx, 31, 0x3135CCu);
    ctx->pc = 0x3135C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3135C4u;
    // 0x3135c8: 0x240615b0  addiu       $a2, $zero, 0x15B0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x3135C4u, 0x3135CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3135CCu;
label_3135cc:
    // 0x3135cc: 0xc09e01a  jal         func_278068
    ctx->pc = 0x3135CCu;
    SET_GPR_U32(ctx, 31, 0x3135D4u);
    ctx->pc = 0x3135D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3135CCu;
    // 0x3135d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278068u, 0x3135CCu, 0x3135D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3135D4u;
label_3135d4:
    // 0x3135d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3135D4u;
    {
        const bool branch_taken_0x3135d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3135D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3135D4u;
        // 0x3135d8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3135d4) {
            ctx->pc = 0x3135E4u;
            goto label_3135e4;
        }
    }
    ctx->pc = 0x3135DCu;
label_3135dc:
    // 0x3135dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3135dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3135e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3135e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3135e4:
    // 0x3135e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3135e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3135e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3135E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3135ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3135E8u;
        // 0x3135ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3135E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3135F0u;
}
