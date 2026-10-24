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

// Function: espSys_sstClearSetFlag
// Address: 0x305be0 - 0x305c10
void espSys_sstClearSetFlag_0x305be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("espSys_sstClearSetFlag_0x305be0");
#endif

    switch (ctx->pc) {
        case 0x305bfcu: goto label_305bfc;
        default: break;
    }

    ctx->pc = 0x305be0u;

    // 0x305be0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x305be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x305be4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x305be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x305be8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x305be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x305bec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x305becu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305bf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x305bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x305bf4: 0xc0c18cc  jal         func_306330
    ctx->pc = 0x305BF4u;
    SET_GPR_U32(ctx, 31, 0x305BFCu);
    ctx->pc = 0x305BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305BF4u;
    // 0x305bf8: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306330u, 0x305BF4u, 0x305BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305BFCu;
label_305bfc:
    // 0x305bfc: 0xae000414  sw          $zero, 0x414($s0)
    ctx->pc = 0x305bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1044), GPR_U32(ctx, 0));
    // 0x305c00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x305c00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x305c04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x305c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x305c08: 0x3e00008  jr          $ra
    ctx->pc = 0x305C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305C08u;
        // 0x305c0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305C10u;
}
