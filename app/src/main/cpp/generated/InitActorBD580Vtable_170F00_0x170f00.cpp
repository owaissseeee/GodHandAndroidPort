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

// Function: InitActorBD580Vtable_170F00
// Address: 0x170f00 - 0x170f38
void InitActorBD580Vtable_170F00_0x170f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitActorBD580Vtable_170F00_0x170f00");
#endif

    switch (ctx->pc) {
        case 0x170f14u: goto label_170f14;
        default: break;
    }

    ctx->pc = 0x170f00u;

    // 0x170f00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x170f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x170f04: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x170f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x170f08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x170f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x170f0c: 0xc06f560  jal         func_1BD580
    ctx->pc = 0x170F0Cu;
    SET_GPR_U32(ctx, 31, 0x170F14u);
    ctx->pc = 0x170F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170F0Cu;
    // 0x170f10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD580u, 0x170F0Cu, 0x170F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170F14u;
label_170f14:
    // 0x170f14: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x170f14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x170f18: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x170f18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170f1c: 0x24630920  addiu       $v1, $v1, 0x920
    ctx->pc = 0x170f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2336));
    // 0x170f20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x170f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170f24: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x170f24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x170f28: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x170f28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x170F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170F2Cu;
        // 0x170f30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170F34u;
    // 0x170f34: 0x0  nop
    ctx->pc = 0x170f34u;
    // NOP
    ctx->pc = 0x170f38u;
}
