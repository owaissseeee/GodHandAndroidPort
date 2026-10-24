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

// Function: cSpline_getPoint
// Address: 0x2d4ef8 - 0x2d4fc0
void cSpline_getPoint_0x2d4ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSpline_getPoint_0x2d4ef8");
#endif

    switch (ctx->pc) {
        case 0x2d4f4cu: goto label_2d4f4c;
        case 0x2d4f5cu: goto label_2d4f5c;
        case 0x2d4f6cu: goto label_2d4f6c;
        case 0x2d4f7cu: goto label_2d4f7c;
        case 0x2d4f8cu: goto label_2d4f8c;
        case 0x2d4f9cu: goto label_2d4f9c;
        default: break;
    }

    ctx->pc = 0x2d4ef8u;

    // 0x2d4ef8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d4ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d4efc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2d4efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2d4f00: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2d4f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2d4f04: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2d4f04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4f08: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2d4f08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2d4f0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d4f0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4f10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d4f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d4f14: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2d4f14u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2d4f18: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x2d4f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2d4f1c: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x2d4f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2d4f20: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D4F20u;
    {
        const bool branch_taken_0x2d4f20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D4F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4F20u;
        // 0x2d4f24: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4f20) {
            ctx->pc = 0x2D4F40u;
            goto label_2d4f40;
        }
    }
    ctx->pc = 0x2D4F28u;
    // 0x2d4f28: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x2d4f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4f2c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2d4f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2d4f30: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2d4f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d4f34: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2d4f34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2d4f38: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2d4f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4f3c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2d4f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_2d4f40:
    // 0x2d4f40: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2d4f40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2d4f44: 0xc0c2ae8  jal         func_30ABA0
    ctx->pc = 0x2D4F44u;
    SET_GPR_U32(ctx, 31, 0x2D4F4Cu);
    ctx->pc = 0x2D4F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4F44u;
    // 0x2d4f48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30ABA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30ABA0u, 0x2D4F44u, 0x2D4F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4F4Cu;
label_2d4f4c:
    // 0x2d4f4c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d4f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4f50: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x2d4f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2d4f54: 0xc0c2928  jal         func_30A4A0
    ctx->pc = 0x2D4F54u;
    SET_GPR_U32(ctx, 31, 0x2D4F5Cu);
    ctx->pc = 0x2D4F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4F54u;
    // 0x2d4f58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A4A0u, 0x2D4F54u, 0x2D4F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4F5Cu;
label_2d4f5c:
    // 0x2d4f5c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d4f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4f60: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2d4f60u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2d4f64: 0xc0c2ae8  jal         func_30ABA0
    ctx->pc = 0x2D4F64u;
    SET_GPR_U32(ctx, 31, 0x2D4F6Cu);
    ctx->pc = 0x2D4F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4F64u;
    // 0x2d4f68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30ABA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30ABA0u, 0x2D4F64u, 0x2D4F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4F6Cu;
label_2d4f6c:
    // 0x2d4f6c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d4f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4f70: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x2d4f70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2d4f74: 0xc0c2928  jal         func_30A4A0
    ctx->pc = 0x2D4F74u;
    SET_GPR_U32(ctx, 31, 0x2D4F7Cu);
    ctx->pc = 0x2D4F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4F74u;
    // 0x2d4f78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A4A0u, 0x2D4F74u, 0x2D4F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4F7Cu;
label_2d4f7c:
    // 0x2d4f7c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2d4f7cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2d4f80: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d4f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4f84: 0xc0c2ae8  jal         func_30ABA0
    ctx->pc = 0x2D4F84u;
    SET_GPR_U32(ctx, 31, 0x2D4F8Cu);
    ctx->pc = 0x2D4F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4F84u;
    // 0x2d4f88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30ABA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30ABA0u, 0x2D4F84u, 0x2D4F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4F8Cu;
label_2d4f8c:
    // 0x2d4f8c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2d4f8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4f90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d4f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4f94: 0xc0c2928  jal         func_30A4A0
    ctx->pc = 0x2D4F94u;
    SET_GPR_U32(ctx, 31, 0x2D4F9Cu);
    ctx->pc = 0x2D4F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4F94u;
    // 0x2d4f98: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A4A0u, 0x2D4F94u, 0x2D4F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4F9Cu;
label_2d4f9c:
    // 0x2d4f9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d4f9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d4fa0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d4fa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d4fa4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2d4fa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d4fa8: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x2d4fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2d4fac: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2d4facu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d4fb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d4fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d4fb4: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2d4fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d4fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4FB8u;
        // 0x2d4fbc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4FC0u;
}
