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

// Function: cSndBgmNode_SetFlagsFade
// Address: 0x2cd548 - 0x2cd5c0
void cSndBgmNode_SetFlagsFade_0x2cd548(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSndBgmNode_SetFlagsFade_0x2cd548");
#endif

    if (__builtin_expect(ctx->pc != 0x2cd548u, 0)) {
        switch (ctx->pc) {
            case 0x2cd57cu: goto label_2cd57c;
            case 0x2cd590u: goto label_2cd590;
            case 0x2cd5a8u: goto label_2cd5a8;
            default: break;
        }
    }


    // 0x2cd548: 0x27bdffd0  addiu       $sp, $sp, -0x30
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cd54c: 0x63027  nor         $a2, $zero, $a2
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
    // 0x2cd550: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2cd550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2cd554: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2cd554u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2cd558: 0x80802d  daddu       $s0, $a0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd55c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cd55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cd560: 0x46006506  mov.s       $f20, $f12
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2cd564: 0xe61400c8  swc1        $f20, 0xC8($s0)
    ctx->pc = 0x2cd564u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 200), bits); }
    // 0x2cd568: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x2cd568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x2cd56c: 0x451025  or          $v0, $v0, $a1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2cd570: 0x461024  and         $v0, $v0, $a2
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2cd574: 0xc0dce96  jal         func_373A58
    SET_GPR_U32(ctx, 31, 0x2CD57Cu);
    ctx->pc = 0x2CD578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD574u;
    // 0x2cd578: 0xae020098  sw          $v0, 0x98($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_00373A58_0x373a58, 0x373a58u, 0x2cd57cu)) {
        return;
    }
label_2cd57c:
    // 0x2cd57c: 0x24030001  addiu       $v1, $zero, 0x1
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cd580: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CD580u;
    {
        const bool branch_taken_0x2cd580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2cd580) {
            ctx->pc = 0x2CD590u;
            goto label_2cd590;
        }
    }
    // 0x2cd588: 0xc0dcd3c  jal         func_3734F0
    SET_GPR_U32(ctx, 31, 0x2CD590u);
    ctx->pc = 0x2CD58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD588u;
    // 0x2cd58c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &UpdateStateAndClearFlag_3734F0_0x3734f0, 0x3734f0u, 0x2cd590u)) {
        return;
    }
label_2cd590:
    // 0x2cd590: 0x3c013f80  lui         $at, 0x3F80
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2cd594: 0x44816000  mtc1        $at, $f12
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cd598: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd59c: 0x4600a346  mov.s       $f13, $f20
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2cd5a0: 0xc0dcd78  jal         func_3735E0
    SET_GPR_U32(ctx, 31, 0x2CD5A8u);
    ctx->pc = 0x2CD5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD5A0u;
    // 0x2cd5a4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_003735E0_0x3735e0, 0x3735e0u, 0x2cd5a8u)) {
        return;
    }
label_2cd5a8:
    // 0x2cd5a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2cd5a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cd5ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cd5acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cd5b0: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2cd5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2cd5b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD5B4u;
        // 0x2cd5b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD5B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x2cd5bc: 0x0  nop
    // NOP
    ctx->pc = 0x2cd5c0u;
}