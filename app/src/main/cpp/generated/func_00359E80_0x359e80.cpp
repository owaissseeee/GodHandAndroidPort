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

// Function: func_00359E80
// Address: 0x359e80 - 0x359ec0
void func_00359E80_0x359e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00359E80_0x359e80");
#endif

    switch (ctx->pc) {
        case 0x359e94u: goto label_359e94;
        case 0x359eacu: goto label_359eac;
        default: break;
    }

    ctx->pc = 0x359e80u;

    // 0x359e80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x359e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x359e84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x359e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x359e88: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x359e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x359e8c: 0xc0d37b2  jal         func_34DEC8
    ctx->pc = 0x359E8Cu;
    SET_GPR_U32(ctx, 31, 0x359E94u);
    ctx->pc = 0x359E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359E8Cu;
    // 0x359e90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DEC8u, 0x359E8Cu, 0x359E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359E94u;
label_359e94:
    // 0x359e94: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x359e94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x359e98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x359e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359e9c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x359E9Cu;
    {
        const bool branch_taken_0x359e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x359EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359E9Cu;
        // 0x359ea0: 0x34a50111  ori         $a1, $a1, 0x111 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)273);
        ctx->in_delay_slot = false;
        if (branch_taken_0x359e9c) {
            ctx->pc = 0x359EACu;
            goto label_359eac;
        }
    }
    ctx->pc = 0x359EA4u;
    // 0x359ea4: 0xc0d375c  jal         func_34DD70
    ctx->pc = 0x359EA4u;
    SET_GPR_U32(ctx, 31, 0x359EACu);
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x359EA4u, 0x359EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359EACu;
label_359eac:
    // 0x359eac: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x359eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x359eb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x359eb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359eb4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x359eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x359eb8: 0x3e00008  jr          $ra
    ctx->pc = 0x359EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359EB8u;
        // 0x359ebc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359EC0u;
}
