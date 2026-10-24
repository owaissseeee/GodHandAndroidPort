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

// Function: func_00305358
// Address: 0x305358 - 0x3053c0
void func_00305358_0x305358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00305358_0x305358");
#endif

    switch (ctx->pc) {
        case 0x30538cu: goto label_30538c;
        case 0x3053a0u: goto label_3053a0;
        default: break;
    }

    ctx->pc = 0x305358u;

    // 0x305358: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x305358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30535c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30535cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305360: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x305360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x305364: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x305364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x305368: 0x3c100045  lui         $s0, 0x45
    ctx->pc = 0x305368u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)69 << 16));
    // 0x30536c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x30536cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x305370: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x305370u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305374: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x305374u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305378: 0x2610fea0  addiu       $s0, $s0, -0x160
    ctx->pc = 0x305378u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966944));
    // 0x30537c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30537cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x305380: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x305380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305384: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x305384u;
    SET_GPR_U32(ctx, 31, 0x30538Cu);
    ctx->pc = 0x305388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305384u;
    // 0x305388: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x305384u, 0x30538Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30538Cu;
label_30538c:
    // 0x30538c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30538cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305390: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x305390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305394: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x305394u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x305398: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x305398u;
    SET_GPR_U32(ctx, 31, 0x3053A0u);
    ctx->pc = 0x30539Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305398u;
    // 0x30539c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x305398u, 0x3053A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3053A0u;
label_3053a0:
    // 0x3053a0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3053a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x3053a4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3053a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3053a8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3053a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3053ac: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3053acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3053b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3053b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3053b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3053B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3053B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3053B4u;
        // 0x3053b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3053B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3053BCu;
    // 0x3053bc: 0x0  nop
    ctx->pc = 0x3053bcu;
    // NOP
    ctx->pc = 0x3053c0u;
}
