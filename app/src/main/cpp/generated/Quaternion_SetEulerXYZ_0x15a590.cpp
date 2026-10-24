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

// Function: Quaternion_SetEulerXYZ
// Address: 0x15a590 - 0x15a6a0
void Quaternion_SetEulerXYZ_0x15a590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Quaternion_SetEulerXYZ_0x15a590");
#endif

    switch (ctx->pc) {
        case 0x15a5e0u: goto label_15a5e0;
        case 0x15a5ecu: goto label_15a5ec;
        case 0x15a5f8u: goto label_15a5f8;
        case 0x15a604u: goto label_15a604;
        case 0x15a610u: goto label_15a610;
        case 0x15a61cu: goto label_15a61c;
        default: break;
    }

    ctx->pc = 0x15a590u;

    // 0x15a590: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15a590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15a594: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x15a594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x15a598: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15a598u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15a59c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x15a59cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x15a5a0: 0xc4b40000  lwc1        $f20, 0x0($a1)
    ctx->pc = 0x15a5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15a5a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15a5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x15a5a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15a5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15a5ac: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x15a5acu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x15a5b0: 0xe7b90048  swc1        $f25, 0x48($sp)
    ctx->pc = 0x15a5b0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x15a5b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15a5b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a5b8: 0xe7b80040  swc1        $f24, 0x40($sp)
    ctx->pc = 0x15a5b8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x15a5bc: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x15a5bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x15a5c0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x15a5c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x15a5c4: 0xe7b70038  swc1        $f23, 0x38($sp)
    ctx->pc = 0x15a5c4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x15a5c8: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x15a5c8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x15a5cc: 0xc4b60004  lwc1        $f22, 0x4($a1)
    ctx->pc = 0x15a5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x15a5d0: 0xc4b70008  lwc1        $f23, 0x8($a1)
    ctx->pc = 0x15a5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x15a5d4: 0x4600b582  mul.s       $f22, $f22, $f0
    ctx->pc = 0x15a5d4u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x15a5d8: 0xc0e867e  jal         func_3A19F8
    ctx->pc = 0x15A5D8u;
    SET_GPR_U32(ctx, 31, 0x15A5E0u);
    ctx->pc = 0x15A5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A5D8u;
    // 0x15a5dc: 0x4600bdc2  mul.s       $f23, $f23, $f0 (Delay Slot)
    ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A19F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A19F8u, 0x15A5D8u, 0x15A5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A5E0u;
label_15a5e0:
    // 0x15a5e0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x15a5e0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x15a5e4: 0xc0e863c  jal         func_3A18F0
    ctx->pc = 0x15A5E4u;
    SET_GPR_U32(ctx, 31, 0x15A5ECu);
    ctx->pc = 0x15A5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A5E4u;
    // 0x15a5e8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18F0u, 0x15A5E4u, 0x15A5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A5ECu;
label_15a5ec:
    // 0x15a5ec: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x15a5ecu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x15a5f0: 0xc0e867e  jal         func_3A19F8
    ctx->pc = 0x15A5F0u;
    SET_GPR_U32(ctx, 31, 0x15A5F8u);
    ctx->pc = 0x15A5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A5F0u;
    // 0x15a5f4: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A19F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A19F8u, 0x15A5F0u, 0x15A5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A5F8u;
label_15a5f8:
    // 0x15a5f8: 0x46000646  mov.s       $f25, $f0
    ctx->pc = 0x15a5f8u;
    ctx->f[25] = FPU_MOV_S(ctx->f[0]);
    // 0x15a5fc: 0xc0e863c  jal         func_3A18F0
    ctx->pc = 0x15A5FCu;
    SET_GPR_U32(ctx, 31, 0x15A604u);
    ctx->pc = 0x15A600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A5FCu;
    // 0x15a600: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18F0u, 0x15A5FCu, 0x15A604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A604u;
label_15a604:
    // 0x15a604: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x15a604u;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
    // 0x15a608: 0xc0e867e  jal         func_3A19F8
    ctx->pc = 0x15A608u;
    SET_GPR_U32(ctx, 31, 0x15A610u);
    ctx->pc = 0x15A60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A608u;
    // 0x15a60c: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A19F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A19F8u, 0x15A608u, 0x15A610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A610u;
label_15a610:
    // 0x15a610: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x15a610u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x15a614: 0xc0e863c  jal         func_3A18F0
    ctx->pc = 0x15A614u;
    SET_GPR_U32(ctx, 31, 0x15A61Cu);
    ctx->pc = 0x15A618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A614u;
    // 0x15a618: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18F0u, 0x15A614u, 0x15A61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A61Cu;
label_15a61c:
    // 0x15a61c: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x15a61cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x15a620: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15a620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a624: 0x4616a882  mul.s       $f2, $f21, $f22
    ctx->pc = 0x15a624u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[22]);
    // 0x15a628: 0xc7b70038  lwc1        $f23, 0x38($sp)
    ctx->pc = 0x15a628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x15a62c: 0x4618a0c2  mul.s       $f3, $f20, $f24
    ctx->pc = 0x15a62cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[24]);
    // 0x15a630: 0x4619a942  mul.s       $f5, $f21, $f25
    ctx->pc = 0x15a630u;
    ctx->f[5] = FPU_MUL_S(ctx->f[21], ctx->f[25]);
    // 0x15a634: 0x4618ad42  mul.s       $f21, $f21, $f24
    ctx->pc = 0x15a634u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[24]);
    // 0x15a638: 0x4619a502  mul.s       $f20, $f20, $f25
    ctx->pc = 0x15a638u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[25]);
    // 0x15a63c: 0x46191182  mul.s       $f6, $f2, $f25
    ctx->pc = 0x15a63cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[25]);
    // 0x15a640: 0x46180902  mul.s       $f4, $f1, $f24
    ctx->pc = 0x15a640u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
    // 0x15a644: 0x4616a502  mul.s       $f20, $f20, $f22
    ctx->pc = 0x15a644u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x15a648: 0x46181082  mul.s       $f2, $f2, $f24
    ctx->pc = 0x15a648u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[24]);
    // 0x15a64c: 0x461618c2  mul.s       $f3, $f3, $f22
    ctx->pc = 0x15a64cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[22]);
    // 0x15a650: 0xc7b80040  lwc1        $f24, 0x40($sp)
    ctx->pc = 0x15a650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x15a654: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x15a654u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x15a658: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x15a658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x15a65c: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x15a65cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x15a660: 0x46190842  mul.s       $f1, $f1, $f25
    ctx->pc = 0x15a660u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[25]);
    // 0x15a664: 0x460518c1  sub.s       $f3, $f3, $f5
    ctx->pc = 0x15a664u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
    // 0x15a668: 0xc7b90048  lwc1        $f25, 0x48($sp)
    ctx->pc = 0x15a668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x15a66c: 0x4614ad41  sub.s       $f21, $f21, $f20
    ctx->pc = 0x15a66cu;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
    // 0x15a670: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x15a670u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x15a674: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x15a674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15a678: 0x46062100  add.s       $f4, $f4, $f6
    ctx->pc = 0x15a678u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
    // 0x15a67c: 0xe6030008  swc1        $f3, 0x8($s0)
    ctx->pc = 0x15a67cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x15a680: 0xe6150000  swc1        $f21, 0x0($s0)
    ctx->pc = 0x15a680u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x15a684: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x15a684u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x15a688: 0xe604000c  swc1        $f4, 0xC($s0)
    ctx->pc = 0x15a688u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x15a68c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15a68cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15a690: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x15a690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x15a694: 0x3e00008  jr          $ra
    ctx->pc = 0x15A694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A694u;
        // 0x15a698: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A69Cu;
    // 0x15a69c: 0x0  nop
    ctx->pc = 0x15a69cu;
    // NOP
    ctx->pc = 0x15a6a0u;
}
