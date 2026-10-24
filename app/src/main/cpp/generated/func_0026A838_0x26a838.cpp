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

// Function: func_0026A838
// Address: 0x26a838 - 0x26a938
void func_0026A838_0x26a838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0026A838_0x26a838");
#endif

    switch (ctx->pc) {
        case 0x26a8c4u: goto label_26a8c4;
        case 0x26a8ccu: goto label_26a8cc;
        case 0x26a908u: goto label_26a908;
        case 0x26a91cu: goto label_26a91c;
        default: break;
    }

    ctx->pc = 0x26a838u;

    // 0x26a838: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x26a838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26a83c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x26a83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x26a840: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26a840u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a844: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x26a844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x26a848: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26a848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26a84c: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x26a84cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x26a850: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x26a850u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x26a854: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x26a854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x26a858: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x26a858u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x26a85c: 0x260206e4  addiu       $v0, $s0, 0x6E4
    ctx->pc = 0x26a85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1764));
    // 0x26a860: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x26a860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x26a864: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x26a864u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26a868: 0x5220002d  beql        $s1, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x26A868u;
    {
        const bool branch_taken_0x26a868 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a868) {
            ctx->pc = 0x26A86Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A868u;
            // 0x26a86c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A920u;
            goto label_26a920;
        }
    }
    ctx->pc = 0x26A870u;
    // 0x26a870: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x26a870u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x26a874: 0xc6000618  lwc1        $f0, 0x618($s0)
    ctx->pc = 0x26a874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a878: 0x0  nop
    ctx->pc = 0x26a878u;
    // NOP
    // 0x26a87c: 0x0  nop
    ctx->pc = 0x26a87cu;
    // NOP
    // 0x26a880: 0x46000004  c1          0x4
    ctx->pc = 0x26a880u;
    ctx->f[0] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x26a884: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x26a884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x26a888: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26a888u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26a88c: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x26a88cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x26a890: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x26a890u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x26a894: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x26a894u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x26a898: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x26a898u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x26a89c: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x26a89cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x26a8a0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26a8a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x26a8a4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26a8a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26a8a8: 0x46140542  mul.s       $f21, $f0, $f20
    ctx->pc = 0x26a8a8u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x26a8ac: 0x4602a834  c.lt.s      $f21, $f2
    ctx->pc = 0x26a8acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26a8b0: 0x0  nop
    ctx->pc = 0x26a8b0u;
    // NOP
    // 0x26a8b4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x26A8B4u;
    {
        const bool branch_taken_0x26a8b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26a8b4) {
            ctx->pc = 0x26A8B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A8B4u;
            // 0x26a8b8: 0x46001546  mov.s       $f21, $f2 (Delay Slot)
            ctx->f[21] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A8BCu;
            goto label_26a8bc;
        }
    }
    ctx->pc = 0x26A8BCu;
label_26a8bc:
    // 0x26a8bc: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x26A8BCu;
    SET_GPR_U32(ctx, 31, 0x26A8C4u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x26A8BCu, 0x26A8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A8C4u;
label_26a8c4:
    // 0x26a8c4: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x26A8C4u;
    SET_GPR_U32(ctx, 31, 0x26A8CCu);
    ctx->pc = 0x26A8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A8C4u;
    // 0x26a8c8: 0x46140502  mul.s       $f20, $f0, $f20 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x26A8C4u, 0x26A8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A8CCu;
label_26a8cc:
    // 0x26a8cc: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x26a8ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x26a8d0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x26a8d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x26a8d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26a8d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26a8d8: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x26a8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x26a8dc: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x26a8dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x26a8e0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x26a8e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x26a8e4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x26a8e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x26a8e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26a8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a8ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x26a8ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26a8f0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x26a8f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a8f4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x26a8f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26a8f8: 0xe7b50008  swc1        $f21, 0x8($sp)
    ctx->pc = 0x26a8f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x26a8fc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x26a8fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x26a900: 0xc07e0d4  jal         func_1F8350
    ctx->pc = 0x26A900u;
    SET_GPR_U32(ctx, 31, 0x26A908u);
    ctx->pc = 0x26A904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A900u;
    // 0x26a904: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8350u, 0x26A900u, 0x26A908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A908u;
label_26a908:
    // 0x26a908: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x26a908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
    // 0x26a90c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26a90cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26a910: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26a910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a914: 0xc06c5d8  jal         func_1B1760
    ctx->pc = 0x26A914u;
    SET_GPR_U32(ctx, 31, 0x26A91Cu);
    ctx->pc = 0x26A918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A914u;
    // 0x26a918: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1760u, 0x26A914u, 0x26A91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A91Cu;
label_26a91c:
    // 0x26a91c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x26a91cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_26a920:
    // 0x26a920: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x26a920u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26a924: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26a924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26a928: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x26a928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x26a92c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x26a92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26a930: 0x3e00008  jr          $ra
    ctx->pc = 0x26A930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A930u;
        // 0x26a934: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26A938u;
}
