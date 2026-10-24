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

// Function: func_001C26B8
// Address: 0x1c26b8 - 0x1c2790
void func_001C26B8_0x1c26b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001C26B8_0x1c26b8");
#endif

    switch (ctx->pc) {
        case 0x1c26d0u: goto label_1c26d0;
        case 0x1c26e0u: goto label_1c26e0;
        case 0x1c2738u: goto label_1c2738;
        default: break;
    }

    ctx->pc = 0x1c26b8u;

    // 0x1c26b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c26b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c26bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c26bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c26c0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c26c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c26c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c26c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c26c8: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x1C26C8u;
    SET_GPR_U32(ctx, 31, 0x1C26D0u);
    ctx->pc = 0x1C26CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C26C8u;
    // 0x1c26cc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1C26C8u, 0x1C26D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C26D0u;
label_1c26d0:
    // 0x1c26d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c26d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c26d4: 0x8e2500f0  lw          $a1, 0xF0($s1)
    ctx->pc = 0x1c26d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1c26d8: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x1C26D8u;
    SET_GPR_U32(ctx, 31, 0x1C26E0u);
    ctx->pc = 0x1C26DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C26D8u;
    // 0x1c26dc: 0x8e0400f0  lw          $a0, 0xF0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x1C26D8u, 0x1C26E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C26E0u;
label_1c26e0:
    // 0x1c26e0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1c26e0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x1c26e4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1c26e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1c26e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c26e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c26ec: 0x0  nop
    ctx->pc = 0x1c26ecu;
    // NOP
    // 0x1c26f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c26f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c26f4: 0x0  nop
    ctx->pc = 0x1c26f4u;
    // NOP
    // 0x1c26f8: 0x45010020  bc1t        . + 4 + (0x20 << 2)
    ctx->pc = 0x1C26F8u;
    {
        const bool branch_taken_0x1c26f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C26FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C26F8u;
        // 0x1c26fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c26f8) {
            ctx->pc = 0x1C277Cu;
            goto label_1c277c;
        }
    }
    ctx->pc = 0x1C2700u;
    // 0x1c2700: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1c2700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1c2704: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c2704u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c2708: 0x0  nop
    ctx->pc = 0x1c2708u;
    // NOP
    // 0x1c270c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c270cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c2710: 0x0  nop
    ctx->pc = 0x1c2710u;
    // NOP
    // 0x1c2714: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x1C2714u;
    {
        const bool branch_taken_0x1c2714 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C2718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2714u;
        // 0x1c2718: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2714) {
            ctx->pc = 0x1C277Cu;
            goto label_1c277c;
        }
    }
    ctx->pc = 0x1C271Cu;
    // 0x1c271c: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x1c271cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c2720: 0x8e2500f0  lw          $a1, 0xF0($s1)
    ctx->pc = 0x1c2720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1c2724: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1c2724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1c2728: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1c2728u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1c272c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1c272cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c2730: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x1C2730u;
    SET_GPR_U32(ctx, 31, 0x1C2738u);
    ctx->pc = 0x1C2734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2730u;
    // 0x1c2734: 0x8e0400f0  lw          $a0, 0xF0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x1C2730u, 0x1C2738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2738u;
label_1c2738:
    // 0x1c2738: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1c2738u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x1c273c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c273cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c2740: 0x0  nop
    ctx->pc = 0x1c2740u;
    // NOP
    // 0x1c2744: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c2744u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c2748: 0x0  nop
    ctx->pc = 0x1c2748u;
    // NOP
    // 0x1c274c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C274Cu;
    {
        const bool branch_taken_0x1c274c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C2750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C274Cu;
        // 0x1c2750: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c274c) {
            ctx->pc = 0x1C2758u;
            goto label_1c2758;
        }
    }
    ctx->pc = 0x1C2754u;
    // 0x1c2754: 0x46000887  neg.s       $f2, $f1
    ctx->pc = 0x1c2754u;
    ctx->f[2] = FPU_NEG_S(ctx->f[1]);
label_1c2758:
    // 0x1c2758: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x1c2758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x1c275c: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x1c275cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x1c2760: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c2760u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c2764: 0x0  nop
    ctx->pc = 0x1c2764u;
    // NOP
    // 0x1c2768: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1c2768u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c276c: 0x0  nop
    ctx->pc = 0x1c276cu;
    // NOP
    // 0x1c2770: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C2770u;
    {
        const bool branch_taken_0x1c2770 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C2774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2770u;
        // 0x1c2774: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2770) {
            ctx->pc = 0x1C277Cu;
            goto label_1c277c;
        }
    }
    ctx->pc = 0x1C2778u;
    // 0x1c2778: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c2778u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c277c:
    // 0x1c277c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c277cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c2780: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c2780u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2784: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c2784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2788: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C278Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2788u;
        // 0x1c278c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2790u;
}
