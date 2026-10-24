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

// Function: cIDBase_transTex
// Address: 0x2aaef0 - 0x2aaff0
void cIDBase_transTex_0x2aaef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cIDBase_transTex_0x2aaef0");
#endif

    switch (ctx->pc) {
        case 0x2aaf34u: goto label_2aaf34;
        case 0x2aafd8u: goto label_2aafd8;
        default: break;
    }

    ctx->pc = 0x2aaef0u;

    // 0x2aaef0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2aaef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2aaef4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2aaef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2aaef8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2aaef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2aaefc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2aaefcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaf00: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2aaf00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2aaf04: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2aaf04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaf08: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2aaf08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2aaf0c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2aaf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2aaf10: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AAF10u;
    {
        const bool branch_taken_0x2aaf10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AAF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAF10u;
        // 0x2aaf14: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaf10) {
            ctx->pc = 0x2AAF34u;
            goto label_2aaf34;
        }
    }
    ctx->pc = 0x2AAF18u;
    // 0x2aaf18: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2aaf18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2aaf1c: 0x9206008b  lbu         $a2, 0x8B($s0)
    ctx->pc = 0x2aaf1cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 139)));
    // 0x2aaf20: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x2aaf20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2384u));
    // 0x2aaf24: 0x9205008a  lbu         $a1, 0x8A($s0)
    ctx->pc = 0x2aaf24u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 138)));
    // 0x2aaf28: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2aaf28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2aaf2c: 0xc0ab372  jal         func_2ACDC8
    ctx->pc = 0x2AAF2Cu;
    SET_GPR_U32(ctx, 31, 0x2AAF34u);
    ctx->pc = 0x2AAF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAF2Cu;
    // 0x2aaf30: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACDC8u, 0x2AAF2Cu, 0x2AAF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAF34u;
label_2aaf34:
    // 0x2aaf34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2aaf34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaf38: 0x92430046  lbu         $v1, 0x46($s2)
    ctx->pc = 0x2aaf38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 70)));
    // 0x2aaf3c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2aaf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2aaf40: 0x54620002  bnel        $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AAF40u;
    {
        const bool branch_taken_0x2aaf40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2aaf40) {
            ctx->pc = 0x2AAF44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AAF40u;
            // 0x2aaf44: 0x92420046  lbu         $v0, 0x46($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 70)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AAF4Cu;
            goto label_2aaf4c;
        }
    }
    ctx->pc = 0x2AAF48u;
    // 0x2aaf48: 0x9202008d  lbu         $v0, 0x8D($s0)
    ctx->pc = 0x2aaf48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 141)));
label_2aaf4c:
    // 0x2aaf4c: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x2aaf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x2aaf50: 0x8602008e  lh          $v0, 0x8E($s0)
    ctx->pc = 0x2aaf50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 142)));
    // 0x2aaf54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2aaf54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaf58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2aaf58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2aaf5c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2aaf5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2aaf60: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x2aaf60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    // 0x2aaf64: 0xe7a5002c  swc1        $f5, 0x2C($sp)
    ctx->pc = 0x2aaf64u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2aaf68: 0xc6000058  lwc1        $f0, 0x58($s0)
    ctx->pc = 0x2aaf68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aaf6c: 0xc6020068  lwc1        $f2, 0x68($s0)
    ctx->pc = 0x2aaf6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aaf70: 0xc601005c  lwc1        $f1, 0x5C($s0)
    ctx->pc = 0x2aaf70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aaf74: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2aaf74u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2aaf78: 0xc603006c  lwc1        $f3, 0x6C($s0)
    ctx->pc = 0x2aaf78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2aaf7c: 0x92070089  lbu         $a3, 0x89($s0)
    ctx->pc = 0x2aaf7cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 137)));
    // 0x2aaf80: 0xc604007c  lwc1        $f4, 0x7C($s0)
    ctx->pc = 0x2aaf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2aaf84: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x2aaf84u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2aaf88: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x2aaf88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2aaf8c: 0xc6000080  lwc1        $f0, 0x80($s0)
    ctx->pc = 0x2aaf8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aaf90: 0x46001386  mov.s       $f14, $f2
    ctx->pc = 0x2aaf90u;
    ctx->f[14] = FPU_MOV_S(ctx->f[2]);
    // 0x2aaf94: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x2aaf94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2aaf98: 0x8e060064  lw          $a2, 0x64($s0)
    ctx->pc = 0x2aaf98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2aaf9c: 0x46001bc6  mov.s       $f15, $f3
    ctx->pc = 0x2aaf9cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[3]);
    // 0x2aafa0: 0xc60c0050  lwc1        $f12, 0x50($s0)
    ctx->pc = 0x2aafa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2aafa4: 0xc60d0054  lwc1        $f13, 0x54($s0)
    ctx->pc = 0x2aafa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2aafa8: 0xc6100060  lwc1        $f16, 0x60($s0)
    ctx->pc = 0x2aafa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x2aafac: 0xc6110070  lwc1        $f17, 0x70($s0)
    ctx->pc = 0x2aafacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x2aafb0: 0xc6120074  lwc1        $f18, 0x74($s0)
    ctx->pc = 0x2aafb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2aafb4: 0xc6130078  lwc1        $f19, 0x78($s0)
    ctx->pc = 0x2aafb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x2aafb8: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x2aafb8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2aafbc: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x2aafbcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2aafc0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2aafc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2aafc4: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x2aafc4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2aafc8: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2aafc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2aafcc: 0xe7a5001c  swc1        $f5, 0x1C($sp)
    ctx->pc = 0x2aafccu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2aafd0: 0xc0b17aa  jal         func_2C5EA8
    ctx->pc = 0x2AAFD0u;
    SET_GPR_U32(ctx, 31, 0x2AAFD8u);
    ctx->pc = 0x2AAFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAFD0u;
    // 0x2aafd4: 0xafa00028  sw          $zero, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5EA8u, 0x2AAFD0u, 0x2AAFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAFD8u;
label_2aafd8:
    // 0x2aafd8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2aafd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2aafdc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2aafdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2aafe0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2aafe0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2aafe4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2aafe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2aafe8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AAFE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AAFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAFE8u;
        // 0x2aafec: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AAFE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AAFF0u;
}
