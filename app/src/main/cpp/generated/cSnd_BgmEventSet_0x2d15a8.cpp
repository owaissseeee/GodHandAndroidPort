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

// Function: cSnd_BgmEventSet
// Address: 0x2d15a8 - 0x2d1610
void cSnd_BgmEventSet_0x2d15a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_BgmEventSet_0x2d15a8");
#endif

    switch (ctx->pc) {
        case 0x2d15ccu: goto label_2d15cc;
        case 0x2d15f4u: goto label_2d15f4;
        default: break;
    }

    ctx->pc = 0x2d15a8u;

    // 0x2d15a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d15a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d15ac: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2d15acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2d15b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2d15b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2d15b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2d15b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d15b8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2d15b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2d15bc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2d15bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d15c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d15c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d15c4: 0xc0b488a  jal         func_2D2228
    ctx->pc = 0x2D15C4u;
    SET_GPR_U32(ctx, 31, 0x2D15CCu);
    ctx->pc = 0x2D15C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D15C4u;
    // 0x2d15c8: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2228u, 0x2D15C4u, 0x2D15CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D15CCu;
label_2d15cc:
    // 0x2d15cc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D15CCu;
    {
        const bool branch_taken_0x2d15cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D15D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D15CCu;
        // 0x2d15d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d15cc) {
            ctx->pc = 0x2D15F4u;
            goto label_2d15f4;
        }
    }
    ctx->pc = 0x2D15D4u;
    // 0x2d15d4: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x2d15d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x2d15d8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d15d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d15dc: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2d15dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d15e0: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x2d15e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d15e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d15e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d15e8: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2d15e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d15ec: 0xc0b3270  jal         func_2CC9C0
    ctx->pc = 0x2D15ECu;
    SET_GPR_U32(ctx, 31, 0x2D15F4u);
    ctx->pc = 0x2D15F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D15ECu;
    // 0x2d15f0: 0x3508ffff  ori         $t0, $t0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC9C0u, 0x2D15ECu, 0x2D15F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D15F4u;
label_2d15f4:
    // 0x2d15f4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2d15f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d15f8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2d15f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d15fc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2d15fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1600: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d1600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1604: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1604u;
        // 0x2d1608: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D160Cu;
    // 0x2d160c: 0x0  nop
    ctx->pc = 0x2d160cu;
    // NOP
    ctx->pc = 0x2d1610u;
}
