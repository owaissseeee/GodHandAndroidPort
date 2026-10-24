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

// Function: func_00323E80
// Address: 0x323e80 - 0x323ed8
void func_00323E80_0x323e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00323E80_0x323e80");
#endif

    switch (ctx->pc) {
        case 0x323ea4u: goto label_323ea4;
        case 0x323eb4u: goto label_323eb4;
        case 0x323ebcu: goto label_323ebc;
        default: break;
    }

    ctx->pc = 0x323e80u;

    // 0x323e80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x323e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x323e84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x323e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x323e88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x323e88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323e8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x323e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x323e90: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x323e90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323e94: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x323e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x323e98: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x323e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x323e9c: 0xc0c9220  jal         func_324880
    ctx->pc = 0x323E9Cu;
    SET_GPR_U32(ctx, 31, 0x323EA4u);
    ctx->pc = 0x323EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323E9Cu;
    // 0x323ea0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324880u, 0x323E9Cu, 0x323EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323EA4u;
label_323ea4:
    // 0x323ea4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x323ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323ea8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x323ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323eac: 0xc0c8fb6  jal         func_323ED8
    ctx->pc = 0x323EACu;
    SET_GPR_U32(ctx, 31, 0x323EB4u);
    ctx->pc = 0x323EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323EACu;
    // 0x323eb0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323ED8u, 0x323EACu, 0x323EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323EB4u;
label_323eb4:
    // 0x323eb4: 0xc0c9226  jal         func_324898
    ctx->pc = 0x323EB4u;
    SET_GPR_U32(ctx, 31, 0x323EBCu);
    ctx->pc = 0x323EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323EB4u;
    // 0x323eb8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324898u, 0x323EB4u, 0x323EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323EBCu;
label_323ebc:
    // 0x323ebc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x323ebcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x323ec0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x323ec0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323ec4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x323ec4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323ec8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x323ec8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323ecc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x323eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x323ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x323ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323ED0u;
        // 0x323ed4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323ED8u;
}
