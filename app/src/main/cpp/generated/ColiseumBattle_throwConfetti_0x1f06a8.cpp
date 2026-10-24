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

// Function: ColiseumBattle_throwConfetti
// Address: 0x1f06a8 - 0x1f0778
void ColiseumBattle_throwConfetti_0x1f06a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ColiseumBattle_throwConfetti_0x1f06a8");
#endif

    switch (ctx->pc) {
        case 0x1f06f0u: goto label_1f06f0;
        case 0x1f06f8u: goto label_1f06f8;
        case 0x1f070cu: goto label_1f070c;
        case 0x1f0738u: goto label_1f0738;
        case 0x1f074cu: goto label_1f074c;
        default: break;
    }

    ctx->pc = 0x1f06a8u;

    // 0x1f06a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f06a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f06ac: 0xe7b70058  swc1        $f23, 0x58($sp)
    ctx->pc = 0x1f06acu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1f06b0: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x1f06b0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1f06b4: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x1f06b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1f06b8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1f06b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1f06bc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f06bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1f06c0: 0x24100013  addiu       $s0, $zero, 0x13
    ctx->pc = 0x1f06c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1f06c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f06c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f06c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f06c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f06cc: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1f06ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1f06d0: 0x3c01c120  lui         $at, 0xC120
    ctx->pc = 0x1f06d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49440 << 16));
    // 0x1f06d4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1f06d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1f06d8: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1f06d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1f06dc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1f06dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1f06e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f06e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f06e4: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1f06e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1f06e8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1f06e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1f06ec: 0x0  nop
    ctx->pc = 0x1f06ecu;
    // NOP
label_1f06f0:
    // 0x1f06f0: 0xc0c7414  jal         func_31D050
    ctx->pc = 0x1F06F0u;
    SET_GPR_U32(ctx, 31, 0x1F06F8u);
    ctx->pc = 0x1F06F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F06F0u;
    // 0x1f06f4: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D050u, 0x1F06F0u, 0x1F06F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F06F8u;
label_1f06f8:
    // 0x1f06f8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1f06f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1f06fc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1f06fcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1f0700: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1f0700u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1f0704: 0xc0c7414  jal         func_31D050
    ctx->pc = 0x1F0704u;
    SET_GPR_U32(ctx, 31, 0x1F070Cu);
    ctx->pc = 0x1F0708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0704u;
    // 0x1f0708: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D050u, 0x1F0704u, 0x1F070Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F070Cu;
label_1f070c:
    // 0x1f070c: 0x3c01c048  lui         $at, 0xC048
    ctx->pc = 0x1f070cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49224 << 16));
    // 0x1f0710: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x1f0710u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x1f0714: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f0714u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f0718: 0x3c014048  lui         $at, 0x4048
    ctx->pc = 0x1f0718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16456 << 16));
    // 0x1f071c: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x1f071cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x1f0720: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1f0720u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1f0724: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1f0724u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1f0728: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1f0728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1f072c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1f072cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1f0730: 0xc0c7414  jal         func_31D050
    ctx->pc = 0x1F0730u;
    SET_GPR_U32(ctx, 31, 0x1F0738u);
    ctx->pc = 0x1F0734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0730u;
    // 0x1f0734: 0xe7b7000c  swc1        $f23, 0xC($sp) (Delay Slot)
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D050u, 0x1F0730u, 0x1F0738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0738u;
label_1f0738:
    // 0x1f0738: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1f0738u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1f073c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f073cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0740: 0x24050380  addiu       $a1, $zero, 0x380
    ctx->pc = 0x1f0740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 896));
    // 0x1f0744: 0xc07c126  jal         func_1F0498
    ctx->pc = 0x1F0744u;
    SET_GPR_U32(ctx, 31, 0x1F074Cu);
    ctx->pc = 0x1F0748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0744u;
    // 0x1f0748: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0498u, 0x1F0744u, 0x1F074Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F074Cu;
label_1f074c:
    // 0x1f074c: 0x601ffe8  bgez        $s0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1F074Cu;
    {
        const bool branch_taken_0x1f074c = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x1F0750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F074Cu;
        // 0x1f0750: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f074c) {
            ctx->pc = 0x1F06F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f06f0;
        }
    }
    ctx->pc = 0x1F0754u;
    // 0x1f0754: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1f0754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f0758: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f0758u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f075c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f075cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0760: 0xc7b70058  lwc1        $f23, 0x58($sp)
    ctx->pc = 0x1f0760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1f0764: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x1f0764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1f0768: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x1f0768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f076c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1f076cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f0770: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0770u;
        // 0x1f0774: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0778u;
}
