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

// Function: func_001A86F8
// Address: 0x1a86f8 - 0x1a8730
void func_001A86F8_0x1a86f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A86F8_0x1a86f8");
#endif

    switch (ctx->pc) {
        case 0x1a870cu: goto label_1a870c;
        default: break;
    }

    ctx->pc = 0x1a86f8u;

    // 0x1a86f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a86f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a86fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a86fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a8700: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a8700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a8704: 0xc06dba4  jal         func_1B6E90
    ctx->pc = 0x1A8704u;
    SET_GPR_U32(ctx, 31, 0x1A870Cu);
    ctx->pc = 0x1A8708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8704u;
    // 0x1a8708: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E90u, 0x1A8704u, 0x1A870Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A870Cu;
label_1a870c:
    // 0x1a870c: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x1a870cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x1a8710: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a8710u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8714: 0x24637880  addiu       $v1, $v1, 0x7880
    ctx->pc = 0x1a8714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30848));
    // 0x1a8718: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a8718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a871c: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x1a871cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x1a8720: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a8720u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8724: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8724u;
        // 0x1a8728: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A872Cu;
    // 0x1a872c: 0x0  nop
    ctx->pc = 0x1a872cu;
    // NOP
    ctx->pc = 0x1a8730u;
}
