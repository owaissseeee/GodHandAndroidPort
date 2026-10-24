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

// Function: func_0026E6B0
// Address: 0x26e6b0 - 0x26e7a0
void func_0026E6B0_0x26e6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0026E6B0_0x26e6b0");
#endif

    switch (ctx->pc) {
        case 0x26e728u: goto label_26e728;
        case 0x26e73cu: goto label_26e73c;
        case 0x26e768u: goto label_26e768;
        default: break;
    }

    ctx->pc = 0x26e6b0u;

    // 0x26e6b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x26e6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x26e6b4: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x26e6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x26e6b8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x26e6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x26e6bc: 0x24030501  addiu       $v1, $zero, 0x501
    ctx->pc = 0x26e6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1281));
    // 0x26e6c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26e6c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e6c4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x26e6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x26e6c8: 0x94447a50  lhu         $a0, 0x7A50($v0)
    ctx->pc = 0x26e6c8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x747A50u));
    // 0x26e6cc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x26e6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x26e6d0: 0x1483002c  bne         $a0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x26E6D0u;
    {
        const bool branch_taken_0x26e6d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x26E6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E6D0u;
        // 0x26e6d4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e6d0) {
            ctx->pc = 0x26E784u;
            goto label_26e784;
        }
    }
    ctx->pc = 0x26E6D8u;
    // 0x26e6d8: 0xc60116c0  lwc1        $f1, 0x16C0($s0)
    ctx->pc = 0x26e6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26e6dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26e6dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26e6e0: 0x0  nop
    ctx->pc = 0x26e6e0u;
    // NOP
    // 0x26e6e4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x26e6e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26e6e8: 0x0  nop
    ctx->pc = 0x26e6e8u;
    // NOP
    // 0x26e6ec: 0x45010026  bc1t        . + 4 + (0x26 << 2)
    ctx->pc = 0x26E6ECu;
    {
        const bool branch_taken_0x26e6ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x26E6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E6ECu;
        // 0x26e6f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e6ec) {
            ctx->pc = 0x26E788u;
            goto label_26e788;
        }
    }
    ctx->pc = 0x26E6F4u;
    // 0x26e6f4: 0x8e0216d8  lw          $v0, 0x16D8($s0)
    ctx->pc = 0x26e6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5848)));
    // 0x26e6f8: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x26E6F8u;
    {
        const bool branch_taken_0x26e6f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E6F8u;
        // 0x26e6fc: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e6f8) {
            ctx->pc = 0x26E784u;
            goto label_26e784;
        }
    }
    ctx->pc = 0x26E700u;
    // 0x26e700: 0x8e021644  lw          $v0, 0x1644($s0)
    ctx->pc = 0x26e700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5700)));
    // 0x26e704: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26e704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26e708: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x26E708u;
    {
        const bool branch_taken_0x26e708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E708u;
        // 0x26e70c: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e708) {
            ctx->pc = 0x26E784u;
            goto label_26e784;
        }
    }
    ctx->pc = 0x26E710u;
    // 0x26e710: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x26e710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x26e714: 0x245164f0  addiu       $s1, $v0, 0x64F0
    ctx->pc = 0x26e714u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x26e718: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x26e718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x26e71c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26e71cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26e720: 0xc0a4b72  jal         func_292DC8
    ctx->pc = 0x26E720u;
    SET_GPR_U32(ctx, 31, 0x26E728u);
    ctx->pc = 0x26E724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E720u;
    // 0x26e724: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292DC8u, 0x26E720u, 0x26E728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E728u;
label_26e728:
    // 0x26e728: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26e728u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e72c: 0x12400016  beqz        $s2, . + 4 + (0x16 << 2)
    ctx->pc = 0x26E72Cu;
    {
        const bool branch_taken_0x26e72c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E72Cu;
        // 0x26e730: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e72c) {
            ctx->pc = 0x26E788u;
            goto label_26e788;
        }
    }
    ctx->pc = 0x26E734u;
    // 0x26e734: 0xc0a529a  jal         func_294A68
    ctx->pc = 0x26E734u;
    SET_GPR_U32(ctx, 31, 0x26E73Cu);
    ctx->pc = 0x26E738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E734u;
    // 0x26e738: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294A68u, 0x26E734u, 0x26E73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E73Cu;
label_26e73c:
    // 0x26e73c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x26E73Cu;
    {
        const bool branch_taken_0x26e73c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E73Cu;
        // 0x26e740: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e73c) {
            ctx->pc = 0x26E788u;
            goto label_26e788;
        }
    }
    ctx->pc = 0x26E744u;
    // 0x26e744: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x26e744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x26e748: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x26e748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x26e74c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26e74cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26e750: 0xa2220540  sb          $v0, 0x540($s1)
    ctx->pc = 0x26e750u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1344), (uint8_t)GPR_U32(ctx, 2));
    // 0x26e754: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26e754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e758: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x26e758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x26e75c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26e75cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e760: 0xc09ba62  jal         func_26E988
    ctx->pc = 0x26E760u;
    SET_GPR_U32(ctx, 31, 0x26E768u);
    ctx->pc = 0x26E764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E760u;
    // 0x26e764: 0x8e4500f0  lw          $a1, 0xF0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26E988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E988u, 0x26E760u, 0x26E768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E768u;
label_26e768:
    // 0x26e768: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x26e768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x26e76c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x26e76cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x26e770: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x26e770u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x26e774: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26e774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26e778: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x26e778u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x26e77c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26E77Cu;
    {
        const bool branch_taken_0x26e77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E77Cu;
        // 0x26e780: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e77c) {
            ctx->pc = 0x26E788u;
            goto label_26e788;
        }
    }
    ctx->pc = 0x26E784u;
label_26e784:
    // 0x26e784: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26e784u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26e788:
    // 0x26e788: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x26e788u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26e78c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x26e78cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26e790: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x26e790u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26e794: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26e794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26e798: 0x3e00008  jr          $ra
    ctx->pc = 0x26E798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E798u;
        // 0x26e79c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26E798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26E7A0u;
}
