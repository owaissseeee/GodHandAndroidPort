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

// Function: InitObjVtableC_198CA8
// Address: 0x198ca8 - 0x198ce0
void InitObjVtableC_198CA8_0x198ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitObjVtableC_198CA8_0x198ca8");
#endif

    switch (ctx->pc) {
        case 0x198cbcu: goto label_198cbc;
        default: break;
    }

    ctx->pc = 0x198ca8u;

    // 0x198ca8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x198ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x198cac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x198cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x198cb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x198cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x198cb4: 0xc06feb2  jal         func_1BFAC8
    ctx->pc = 0x198CB4u;
    SET_GPR_U32(ctx, 31, 0x198CBCu);
    ctx->pc = 0x198CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198CB4u;
    // 0x198cb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFAC8u, 0x198CB4u, 0x198CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198CBCu;
label_198cbc:
    // 0x198cbc: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x198cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x198cc0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x198cc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198cc4: 0x24635000  addiu       $v1, $v1, 0x5000
    ctx->pc = 0x198cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20480));
    // 0x198cc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x198cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198ccc: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x198cccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x198cd0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x198cd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x198CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198CD4u;
        // 0x198cd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198CDCu;
    // 0x198cdc: 0x0  nop
    ctx->pc = 0x198cdcu;
    // NOP
    ctx->pc = 0x198ce0u;
}
