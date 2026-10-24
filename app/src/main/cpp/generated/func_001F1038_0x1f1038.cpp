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

// Function: func_001F1038
// Address: 0x1f1038 - 0x1f1100
void func_001F1038_0x1f1038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F1038_0x1f1038");
#endif

    switch (ctx->pc) {
        case 0x1f1064u: goto label_1f1064;
        case 0x1f1090u: goto label_1f1090;
        case 0x1f109cu: goto label_1f109c;
        case 0x1f10bcu: goto label_1f10bc;
        case 0x1f10c8u: goto label_1f10c8;
        case 0x1f10e8u: goto label_1f10e8;
        default: break;
    }

    ctx->pc = 0x1f1038u;

    // 0x1f1038: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f1038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f103c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f103cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f1040: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f1040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f1044: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1f1044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1f1048: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f1048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f104c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f104cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1050: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1f1050u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1f1054: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x1f1054u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f1058: 0xa3a30020  sb          $v1, 0x20($sp)
    ctx->pc = 0x1f1058u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f105c: 0xc0a5780  jal         func_295E00
    ctx->pc = 0x1F105Cu;
    SET_GPR_U32(ctx, 31, 0x1F1064u);
    ctx->pc = 0x1F1060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F105Cu;
    // 0x1f1060: 0xa3a00000  sb          $zero, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E00u, 0x1F105Cu, 0x1F1064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1064u;
label_1f1064:
    // 0x1f1064: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x1f1064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x1f1068: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1f1068u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1f106c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1f106cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1f1070: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f1070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1074: 0x0  nop
    ctx->pc = 0x1f1074u;
    // NOP
    // 0x1f1078: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f1078u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f107c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1f107cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1f1080: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f1080u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f1084: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1f1084u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1f1088: 0xc0a574c  jal         func_295D30
    ctx->pc = 0x1F1088u;
    SET_GPR_U32(ctx, 31, 0x1F1090u);
    ctx->pc = 0x1F108Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1088u;
    // 0x1f108c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295D30u, 0x1F1088u, 0x1F1090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1090u;
label_1f1090:
    // 0x1f1090: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1f1090u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f1094: 0xc0a5780  jal         func_295E00
    ctx->pc = 0x1F1094u;
    SET_GPR_U32(ctx, 31, 0x1F109Cu);
    ctx->pc = 0x1F1098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1094u;
    // 0x1f1098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E00u, 0x1F1094u, 0x1F109Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F109Cu;
label_1f109c:
    // 0x1f109c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f109cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f10a0: 0x0  nop
    ctx->pc = 0x1f10a0u;
    // NOP
    // 0x1f10a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f10a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f10a8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1f10a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1f10ac: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f10acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f10b0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1f10b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1f10b4: 0xc0a574c  jal         func_295D30
    ctx->pc = 0x1F10B4u;
    SET_GPR_U32(ctx, 31, 0x1F10BCu);
    ctx->pc = 0x1F10B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F10B4u;
    // 0x1f10b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295D30u, 0x1F10B4u, 0x1F10BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F10BCu;
label_1f10bc:
    // 0x1f10bc: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1f10bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f10c0: 0xc0a5780  jal         func_295E00
    ctx->pc = 0x1F10C0u;
    SET_GPR_U32(ctx, 31, 0x1F10C8u);
    ctx->pc = 0x1F10C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F10C0u;
    // 0x1f10c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E00u, 0x1F10C0u, 0x1F10C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F10C8u;
label_1f10c8:
    // 0x1f10c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f10c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f10cc: 0x0  nop
    ctx->pc = 0x1f10ccu;
    // NOP
    // 0x1f10d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f10d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f10d4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1f10d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1f10d8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f10d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f10dc: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1f10dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1f10e0: 0xc0a574c  jal         func_295D30
    ctx->pc = 0x1F10E0u;
    SET_GPR_U32(ctx, 31, 0x1F10E8u);
    ctx->pc = 0x1F10E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F10E0u;
    // 0x1f10e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295D30u, 0x1F10E0u, 0x1F10E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F10E8u;
label_1f10e8:
    // 0x1f10e8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1f10e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f10ec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f10ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f10f0: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1f10f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f10f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F10F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F10F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F10F4u;
        // 0x1f10f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F10F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F10FCu;
    // 0x1f10fc: 0x0  nop
    ctx->pc = 0x1f10fcu;
    // NOP
    ctx->pc = 0x1f1100u;
}
