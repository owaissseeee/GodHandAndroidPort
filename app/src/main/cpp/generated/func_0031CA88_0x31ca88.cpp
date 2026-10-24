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

// Function: func_0031CA88
// Address: 0x31ca88 - 0x31cb80
void func_0031CA88_0x31ca88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031CA88_0x31ca88");
#endif

    switch (ctx->pc) {
        case 0x31cad8u: goto label_31cad8;
        case 0x31cb4cu: goto label_31cb4c;
        case 0x31cb60u: goto label_31cb60;
        default: break;
    }

    ctx->pc = 0x31ca88u;

    // 0x31ca88: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x31ca88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x31ca8c: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x31ca8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x31ca90: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x31ca90u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x31ca94: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x31ca94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x31ca98: 0x511c0  sll         $v0, $a1, 7
    ctx->pc = 0x31ca98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x31ca9c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x31ca9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x31caa0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x31caa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x31caa4: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x31caa4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31caa8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x31caa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x31caac: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x31caacu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x31cab0: 0x3a2e823  subu        $sp, $sp, $v0
    ctx->pc = 0x31cab0u;
    SET_GPR_S32(ctx, 29, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x31cab4: 0x71842  srl         $v1, $a3, 1
    ctx->pc = 0x31cab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x31cab8: 0x30ea0001  andi        $t2, $a3, 0x1
    ctx->pc = 0x31cab8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x31cabc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31cabcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x31cac0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x31cac0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31cac4: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x31cac4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cac8: 0x1435025  or          $t2, $t2, $v1
    ctx->pc = 0x31cac8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
    // 0x31cacc: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x31caccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cad0: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x31cad0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cad4: 0x0  nop
    ctx->pc = 0x31cad4u;
    // NOP
label_31cad8:
    // 0x31cad8: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x31cad8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31cadc: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x31cadcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x31cae0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31cae0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31cae4: 0x0  nop
    ctx->pc = 0x31cae4u;
    // NOP
    // 0x31cae8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31cae8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31caec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x31caecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31caf0: 0x0  nop
    ctx->pc = 0x31caf0u;
    // NOP
    // 0x31caf4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x31caf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x31caf8: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x31caf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x31cafc: 0x4e00006  bltz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x31CAFCu;
    {
        const bool branch_taken_0x31cafc = (GPR_S64(ctx, 7) < 0);
        ctx->pc = 0x31CB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CAFCu;
        // 0x31cb00: 0xe5010004  swc1        $f1, 0x4($t0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cafc) {
            ctx->pc = 0x31CB18u;
            goto label_31cb18;
        }
    }
    ctx->pc = 0x31CB04u;
    // 0x31cb04: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x31cb04u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31cb08: 0x0  nop
    ctx->pc = 0x31cb08u;
    // NOP
    // 0x31cb0c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31cb0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31cb10: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x31CB10u;
    {
        const bool branch_taken_0x31cb10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CB10u;
        // 0x31cb14: 0xe5000008  swc1        $f0, 0x8($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cb10) {
            ctx->pc = 0x31CB2Cu;
            goto label_31cb2c;
        }
    }
    ctx->pc = 0x31CB18u;
label_31cb18:
    // 0x31cb18: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x31cb18u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31cb1c: 0x0  nop
    ctx->pc = 0x31cb1cu;
    // NOP
    // 0x31cb20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31cb20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31cb24: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x31cb24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x31cb28: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x31cb28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
label_31cb2c:
    // 0x31cb2c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x31cb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x31cb30: 0xe502000c  swc1        $f2, 0xC($t0)
    ctx->pc = 0x31cb30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x31cb34: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x31cb34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x31cb38: 0x1520ffe7  bnez        $t1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x31CB38u;
    {
        const bool branch_taken_0x31cb38 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x31CB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CB38u;
        // 0x31cb3c: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cb38) {
            ctx->pc = 0x31CAD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31cad8;
        }
    }
    ctx->pc = 0x31CB40u;
    // 0x31cb40: 0x24b0ffff  addiu       $s0, $a1, -0x1
    ctx->pc = 0x31cb40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x31cb44: 0xc0c7296  jal         func_31CA58
    ctx->pc = 0x31CB44u;
    SET_GPR_U32(ctx, 31, 0x31CB4Cu);
    ctx->pc = 0x31CB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CB44u;
    // 0x31cb48: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CA58u, 0x31CB44u, 0x31CB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CB4Cu;
label_31cb4c:
    // 0x31cb4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31cb4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cb50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31cb50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cb54: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x31cb54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cb58: 0xc057c2e  jal         func_15F0B8
    ctx->pc = 0x31CB58u;
    SET_GPR_U32(ctx, 31, 0x31CB60u);
    ctx->pc = 0x31CB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CB58u;
    // 0x31cb5c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15F0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F0B8u, 0x31CB58u, 0x31CB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CB60u;
label_31cb60:
    // 0x31cb60: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x31cb60u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cb64: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x31cb64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31cb68: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x31cb68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31cb6c: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x31cb6cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31cb70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x31cb70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31cb74: 0x3e00008  jr          $ra
    ctx->pc = 0x31CB74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31CB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CB74u;
        // 0x31cb78: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31CB74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31CB7Cu;
    // 0x31cb7c: 0x0  nop
    ctx->pc = 0x31cb7cu;
    // NOP
    ctx->pc = 0x31cb80u;
}
