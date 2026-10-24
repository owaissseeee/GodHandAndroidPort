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

// Function: func_003184E0
// Address: 0x3184e0 - 0x318518
void func_003184E0_0x3184e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003184E0_0x3184e0");
#endif

    switch (ctx->pc) {
        case 0x3184f4u: goto label_3184f4;
        default: break;
    }

    ctx->pc = 0x3184e0u;

    // 0x3184e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3184e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3184e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3184e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3184e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3184e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3184ec: 0xc053a64  jal         func_14E990
    ctx->pc = 0x3184ECu;
    SET_GPR_U32(ctx, 31, 0x3184F4u);
    ctx->pc = 0x3184F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3184ECu;
    // 0x3184f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E990u, 0x3184ECu, 0x3184F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3184F4u;
label_3184f4:
    // 0x3184f4: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x3184f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x3184f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3184f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3184fc: 0x24630c38  addiu       $v1, $v1, 0xC38
    ctx->pc = 0x3184fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3128));
    // 0x318500: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x318500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x318504: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x318504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x318508: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x318508u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31850c: 0x3e00008  jr          $ra
    ctx->pc = 0x31850Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x318510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31850Cu;
        // 0x318510: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31850Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x318514u;
    // 0x318514: 0x0  nop
    ctx->pc = 0x318514u;
    // NOP
    ctx->pc = 0x318518u;
}
