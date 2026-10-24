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

// Function: func_003264C8
// Address: 0x3264c8 - 0x326520
void func_003264C8_0x3264c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003264C8_0x3264c8");
#endif

    switch (ctx->pc) {
        case 0x3264ecu: goto label_3264ec;
        case 0x326500u: goto label_326500;
        default: break;
    }

    ctx->pc = 0x3264c8u;

    // 0x3264c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3264c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3264cc: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3264ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3264d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3264d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3264d4: 0x2450f9e8  addiu       $s0, $v0, -0x618
    ctx->pc = 0x3264d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965736));
    // 0x3264d8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3264d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3CF9E8u));
    // 0x3264dc: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3264DCu;
    {
        const bool branch_taken_0x3264dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3264E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3264DCu;
        // 0x3264e0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3264dc) {
            ctx->pc = 0x326500u;
            goto label_326500;
        }
    }
    ctx->pc = 0x3264E4u;
    // 0x3264e4: 0xc0cf1ca  jal         func_33C728
    ctx->pc = 0x3264E4u;
    SET_GPR_U32(ctx, 31, 0x3264ECu);
    ctx->pc = 0x33C728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C728u, 0x3264E4u, 0x3264ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3264ECu;
label_3264ec:
    // 0x3264ec: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x3264ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x3264f0: 0x2484f9f0  addiu       $a0, $a0, -0x610
    ctx->pc = 0x3264f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965744));
    // 0x3264f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3264f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3264f8: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x3264F8u;
    SET_GPR_U32(ctx, 31, 0x326500u);
    ctx->pc = 0x3264FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3264F8u;
    // 0x3264fc: 0x24060ac0  addiu       $a2, $zero, 0xAC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x3264F8u, 0x326500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326500u;
label_326500:
    // 0x326500: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x326500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x326504: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x326504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x326508: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x326508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32650c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x32650cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x326510: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x326510u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326514: 0x3e00008  jr          $ra
    ctx->pc = 0x326514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326514u;
        // 0x326518: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32651Cu;
    // 0x32651c: 0x0  nop
    ctx->pc = 0x32651cu;
    // NOP
    ctx->pc = 0x326520u;
}
