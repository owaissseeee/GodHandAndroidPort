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

// Function: InitObjSetVtable4205E0_170538
// Address: 0x170538 - 0x170570
void InitObjSetVtable4205E0_170538_0x170538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitObjSetVtable4205E0_170538_0x170538");
#endif

    switch (ctx->pc) {
        case 0x17054cu: goto label_17054c;
        default: break;
    }

    ctx->pc = 0x170538u;

    // 0x170538: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x170538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17053c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17053cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x170540: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x170540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x170544: 0xc06feb2  jal         func_1BFAC8
    ctx->pc = 0x170544u;
    SET_GPR_U32(ctx, 31, 0x17054Cu);
    ctx->pc = 0x170548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170544u;
    // 0x170548: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFAC8u, 0x170544u, 0x17054Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17054Cu;
label_17054c:
    // 0x17054c: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x17054cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x170550: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x170550u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170554: 0x246305e0  addiu       $v1, $v1, 0x5E0
    ctx->pc = 0x170554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1504));
    // 0x170558: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x170558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17055c: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x17055cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x170560: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x170560u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170564: 0x3e00008  jr          $ra
    ctx->pc = 0x170564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170564u;
        // 0x170568: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17056Cu;
    // 0x17056c: 0x0  nop
    ctx->pc = 0x17056cu;
    // NOP
    ctx->pc = 0x170570u;
}
