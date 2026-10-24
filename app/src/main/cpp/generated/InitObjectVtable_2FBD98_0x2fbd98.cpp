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

// Function: InitObjectVtable_2FBD98
// Address: 0x2fbd98 - 0x2fbdd8
void InitObjectVtable_2FBD98_0x2fbd98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitObjectVtable_2FBD98_0x2fbd98");
#endif

    switch (ctx->pc) {
        case 0x2fbdb4u: goto label_2fbdb4;
        default: break;
    }

    ctx->pc = 0x2fbd98u;

    // 0x2fbd98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fbd98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fbd9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fbd9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbda0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2fbda0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2fbda4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fbda4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbda8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fbda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fbdac: 0xc0ad708  jal         func_2B5C20
    ctx->pc = 0x2FBDACu;
    SET_GPR_U32(ctx, 31, 0x2FBDB4u);
    ctx->pc = 0x2FBDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBDACu;
    // 0x2fbdb0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5C20u, 0x2FBDACu, 0x2FBDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBDB4u;
label_2fbdb4:
    // 0x2fbdb4: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x2fbdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x2fbdb8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2fbdb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbdbc: 0x2463fb60  addiu       $v1, $v1, -0x4A0
    ctx->pc = 0x2fbdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966112));
    // 0x2fbdc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fbdc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fbdc4: 0xae0300f0  sw          $v1, 0xF0($s0)
    ctx->pc = 0x2fbdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
    // 0x2fbdc8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2fbdc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fbdcc: 0x3e00008  jr          $ra
    ctx->pc = 0x2FBDCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FBDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBDCCu;
        // 0x2fbdd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FBDCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FBDD4u;
    // 0x2fbdd4: 0x0  nop
    ctx->pc = 0x2fbdd4u;
    // NOP
    ctx->pc = 0x2fbdd8u;
}
