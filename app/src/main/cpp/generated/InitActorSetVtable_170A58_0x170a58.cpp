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

// Function: InitActorSetVtable_170A58
// Address: 0x170a58 - 0x170a90
void InitActorSetVtable_170A58_0x170a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitActorSetVtable_170A58_0x170a58");
#endif

    switch (ctx->pc) {
        case 0x170a6cu: goto label_170a6c;
        default: break;
    }

    ctx->pc = 0x170a58u;

    // 0x170a58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x170a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x170a5c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x170a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x170a60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x170a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x170a64: 0xc06feb2  jal         func_1BFAC8
    ctx->pc = 0x170A64u;
    SET_GPR_U32(ctx, 31, 0x170A6Cu);
    ctx->pc = 0x170A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170A64u;
    // 0x170a68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFAC8u, 0x170A64u, 0x170A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170A6Cu;
label_170a6c:
    // 0x170a6c: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x170a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x170a70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x170a70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170a74: 0x24630780  addiu       $v1, $v1, 0x780
    ctx->pc = 0x170a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1920));
    // 0x170a78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x170a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170a7c: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x170a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x170a80: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x170a80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170a84: 0x3e00008  jr          $ra
    ctx->pc = 0x170A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170A84u;
        // 0x170a88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170A8Cu;
    // 0x170a8c: 0x0  nop
    ctx->pc = 0x170a8cu;
    // NOP
    ctx->pc = 0x170a90u;
}
