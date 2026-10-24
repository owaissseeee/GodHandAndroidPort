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

// Function: func_0013B5F0
// Address: 0x13b5f0 - 0x13b9b8
void func_0013B5F0_0x13b5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0013B5F0_0x13b5f0");
#endif

    switch (ctx->pc) {
        case 0x13b608u: goto label_13b608;
        case 0x13b6a4u: goto label_13b6a4;
        case 0x13b6f8u: goto label_13b6f8;
        case 0x13b720u: goto label_13b720;
        case 0x13b738u: goto label_13b738;
        case 0x13b760u: goto label_13b760;
        case 0x13b924u: goto label_13b924;
        case 0x13b938u: goto label_13b938;
        default: break;
    }

    ctx->pc = 0x13b5f0u;

    // 0x13b5f0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x13b5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x13b5f4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x13b5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x13b5f8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x13b5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x13b5fc: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x13b5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x13b600: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x13B600u;
    SET_GPR_U32(ctx, 31, 0x13B608u);
    ctx->pc = 0x13B604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B600u;
    // 0x13b604: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x13B600u, 0x13B608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B608u;
label_13b608:
    // 0x13b608: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13b608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b60c: 0x508000e6  beql        $a0, $zero, . + 4 + (0xE6 << 2)
    ctx->pc = 0x13B60Cu;
    {
        const bool branch_taken_0x13b60c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b60c) {
            ctx->pc = 0x13B610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B60Cu;
            // 0x13b610: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B9A8u;
            goto label_13b9a8;
        }
    }
    ctx->pc = 0x13B614u;
    // 0x13b614: 0xdc8202f0  ld          $v0, 0x2F0($a0)
    ctx->pc = 0x13b614u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 752)));
    // 0x13b618: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x13b618u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x13b61c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x13b61cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x13b620: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x13b620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x13b624: 0x50400040  beql        $v0, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x13B624u;
    {
        const bool branch_taken_0x13b624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b624) {
            ctx->pc = 0x13B628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B624u;
            // 0x13b628: 0x8e050470  lw          $a1, 0x470($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B728u;
            goto label_13b728;
        }
    }
    ctx->pc = 0x13B62Cu;
    // 0x13b62c: 0x8e020470  lw          $v0, 0x470($s0)
    ctx->pc = 0x13b62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1136)));
    // 0x13b630: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x13b630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x13b634: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x13b634u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13b638: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x13b638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x13b63c: 0xdc8202f0  ld          $v0, 0x2F0($a0)
    ctx->pc = 0x13b63cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 752)));
    // 0x13b640: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x13b640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x13b644: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x13b644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x13b648: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x13b648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x13b64c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13B64Cu;
    {
        const bool branch_taken_0x13b64c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x13B650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B64Cu;
        // 0x13b650: 0xc60104a0  lwc1        $f1, 0x4A0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b64c) {
            ctx->pc = 0x13B668u;
            goto label_13b668;
        }
    }
    ctx->pc = 0x13B654u;
    // 0x13b654: 0x3c013ea0  lui         $at, 0x3EA0
    ctx->pc = 0x13b654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16032 << 16));
    // 0x13b658: 0x3421d97c  ori         $at, $at, 0xD97C
    ctx->pc = 0x13b658u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55676);
    // 0x13b65c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13b65cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13b660: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13B660u;
    {
        const bool branch_taken_0x13b660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b660) {
            ctx->pc = 0x13B674u;
            goto label_13b674;
        }
    }
    ctx->pc = 0x13B668u;
label_13b668:
    // 0x13b668: 0x3c013e56  lui         $at, 0x3E56
    ctx->pc = 0x13b668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15958 << 16));
    // 0x13b66c: 0x34217750  ori         $at, $at, 0x7750
    ctx->pc = 0x13b66cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30544);
    // 0x13b670: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13b670u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13b674:
    // 0x13b674: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x13b674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x13b678: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x13b678u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x13b67c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13b67cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13b680: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x13b680u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13b684: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x13b684u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b688: 0x0  nop
    ctx->pc = 0x13b688u;
    // NOP
    // 0x13b68c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x13B68Cu;
    {
        const bool branch_taken_0x13b68c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13B690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B68Cu;
        // 0x13b690: 0xe60004a0  swc1        $f0, 0x4A0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1184), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b68c) {
            ctx->pc = 0x13B69Cu;
            goto label_13b69c;
        }
    }
    ctx->pc = 0x13B694u;
    // 0x13b694: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x13b694u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x13b698: 0xe60004a0  swc1        $f0, 0x4A0($s0)
    ctx->pc = 0x13b698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1184), bits); }
label_13b69c:
    // 0x13b69c: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x13B69Cu;
    SET_GPR_U32(ctx, 31, 0x13B6A4u);
    ctx->pc = 0x13B6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B69Cu;
    // 0x13b6a0: 0xc60c04a0  lwc1        $f12, 0x4A0($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x13B69Cu, 0x13B6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B6A4u;
label_13b6a4:
    // 0x13b6a4: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x13b6a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x13b6a8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x13b6a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x13b6ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13b6acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13b6b0: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x13b6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13b6b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x13b6b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x13b6b8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x13b6b8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x13b6bc: 0x26020500  addiu       $v0, $s0, 0x500
    ctx->pc = 0x13b6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1280));
    // 0x13b6c0: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x13b6c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13b6c4: 0x10510007  beq         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13B6C4u;
    {
        const bool branch_taken_0x13b6c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x13B6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B6C4u;
        // 0x13b6c8: 0xe7a20044  swc1        $f2, 0x44($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b6c4) {
            ctx->pc = 0x13B6E4u;
            goto label_13b6e4;
        }
    }
    ctx->pc = 0x13B6CCu;
    // 0x13b6cc: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x13b6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b6d0: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x13b6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b6d4: 0xe6000500  swc1        $f0, 0x500($s0)
    ctx->pc = 0x13b6d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1280), bits); }
    // 0x13b6d8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x13b6d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x13b6dc: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x13b6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b6e0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x13b6e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_13b6e4:
    // 0x13b6e4: 0x8e050470  lw          $a1, 0x470($s0)
    ctx->pc = 0x13b6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1136)));
    // 0x13b6e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13b6e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b6ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13b6ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b6f0: 0xc051dca  jal         func_147728
    ctx->pc = 0x13B6F0u;
    SET_GPR_U32(ctx, 31, 0x13B6F8u);
    ctx->pc = 0x13B6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B6F0u;
    // 0x13b6f4: 0x24a50100  addiu       $a1, $a1, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x13B6F0u, 0x13B6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B6F8u;
label_13b6f8:
    // 0x13b6f8: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x13b6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13b6fc: 0x26040210  addiu       $a0, $s0, 0x210
    ctx->pc = 0x13b6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    // 0x13b700: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x13b700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b704: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13b704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b708: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x13b708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b70c: 0x26060480  addiu       $a2, $s0, 0x480
    ctx->pc = 0x13b70cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    // 0x13b710: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x13b710u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x13b714: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x13b714u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x13b718: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x13B718u;
    SET_GPR_U32(ctx, 31, 0x13B720u);
    ctx->pc = 0x13B71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B718u;
    // 0x13b71c: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x13B718u, 0x13B720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B720u;
label_13b720:
    // 0x13b720: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x13B720u;
    {
        const bool branch_taken_0x13b720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B720u;
        // 0x13b724: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b720) {
            ctx->pc = 0x13B768u;
            goto label_13b768;
        }
    }
    ctx->pc = 0x13B728u;
label_13b728:
    // 0x13b728: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13b728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b72c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13b72cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b730: 0xc051dca  jal         func_147728
    ctx->pc = 0x13B730u;
    SET_GPR_U32(ctx, 31, 0x13B738u);
    ctx->pc = 0x13B734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B730u;
    // 0x13b734: 0x24a50100  addiu       $a1, $a1, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x13B730u, 0x13B738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B738u;
label_13b738:
    // 0x13b738: 0xc6020500  lwc1        $f2, 0x500($s0)
    ctx->pc = 0x13b738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13b73c: 0x26040210  addiu       $a0, $s0, 0x210
    ctx->pc = 0x13b73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    // 0x13b740: 0xc6010504  lwc1        $f1, 0x504($s0)
    ctx->pc = 0x13b740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b744: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13b744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b748: 0xc6000508  lwc1        $f0, 0x508($s0)
    ctx->pc = 0x13b748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b74c: 0x26060480  addiu       $a2, $s0, 0x480
    ctx->pc = 0x13b74cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    // 0x13b750: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x13b750u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x13b754: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x13b754u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x13b758: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x13B758u;
    SET_GPR_U32(ctx, 31, 0x13B760u);
    ctx->pc = 0x13B75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B758u;
    // 0x13b75c: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x13B758u, 0x13B760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B760u;
label_13b760:
    // 0x13b760: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x13b760u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13b764: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x13b764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_13b768:
    // 0x13b768: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x13b768u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x13b76c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13b76cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b770: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x13b770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x13b774: 0x804401f2  lb          $a0, 0x1F2($v0)
    ctx->pc = 0x13b774u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 498)));
    // 0x13b778: 0x804301f3  lb          $v1, 0x1F3($v0)
    ctx->pc = 0x13b778u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 499)));
    // 0x13b77c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x13b77cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13b780: 0x0  nop
    ctx->pc = 0x13b780u;
    // NOP
    // 0x13b784: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x13b784u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x13b788: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13b788u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13b78c: 0x0  nop
    ctx->pc = 0x13b78cu;
    // NOP
    // 0x13b790: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13b790u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13b794: 0x46050834  c.lt.s      $f1, $f5
    ctx->pc = 0x13b794u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b798: 0x0  nop
    ctx->pc = 0x13b798u;
    // NOP
    // 0x13b79c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x13B79Cu;
    {
        const bool branch_taken_0x13b79c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13B7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B79Cu;
        // 0x13b7a0: 0x46002906  mov.s       $f4, $f5 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b79c) {
            ctx->pc = 0x13B7A8u;
            goto label_13b7a8;
        }
    }
    ctx->pc = 0x13B7A4u;
    // 0x13b7a4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x13b7a4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_13b7a8:
    // 0x13b7a8: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x13b7a8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x13b7ac: 0x46051034  c.lt.s      $f2, $f5
    ctx->pc = 0x13b7acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b7b0: 0x0  nop
    ctx->pc = 0x13b7b0u;
    // NOP
    // 0x13b7b4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x13B7B4u;
    {
        const bool branch_taken_0x13b7b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13b7b4) {
            ctx->pc = 0x13B7B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B7B4u;
            // 0x13b7b8: 0x46001087  neg.s       $f2, $f2 (Delay Slot)
            ctx->f[2] = FPU_NEG_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B7BCu;
            goto label_13b7bc;
        }
    }
    ctx->pc = 0x13B7BCu;
label_13b7bc:
    // 0x13b7bc: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x13b7bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x13b7c0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x13b7c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x13b7c4: 0x0  nop
    ctx->pc = 0x13b7c4u;
    // NOP
    // 0x13b7c8: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x13b7c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b7cc: 0x0  nop
    ctx->pc = 0x13b7ccu;
    // NOP
    // 0x13b7d0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x13B7D0u;
    {
        const bool branch_taken_0x13b7d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13b7d0) {
            ctx->pc = 0x13B7ECu;
            goto label_13b7ec;
        }
    }
    ctx->pc = 0x13B7D8u;
    // 0x13b7d8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x13b7d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x13b7dc: 0x3c014288  lui         $at, 0x4288
    ctx->pc = 0x13b7dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17032 << 16));
    // 0x13b7e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13b7e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13b7e4: 0x0  nop
    ctx->pc = 0x13b7e4u;
    // NOP
    // 0x13b7e8: 0x46000903  div.s       $f4, $f1, $f0
    ctx->pc = 0x13b7e8u;
    ctx->f[4] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
label_13b7ec:
    // 0x13b7ec: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x13b7ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b7f0: 0x0  nop
    ctx->pc = 0x13b7f0u;
    // NOP
    // 0x13b7f4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x13B7F4u;
    {
        const bool branch_taken_0x13b7f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13B7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B7F4u;
        // 0x13b7f8: 0x2882003d  slti        $v0, $a0, 0x3D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)61) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b7f4) {
            ctx->pc = 0x13B810u;
            goto label_13b810;
        }
    }
    ctx->pc = 0x13B7FCu;
    // 0x13b7fc: 0x46031041  sub.s       $f1, $f2, $f3
    ctx->pc = 0x13b7fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x13b800: 0x3c014288  lui         $at, 0x4288
    ctx->pc = 0x13b800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17032 << 16));
    // 0x13b804: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13b804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13b808: 0x0  nop
    ctx->pc = 0x13b808u;
    // NOP
    // 0x13b80c: 0x46000943  div.s       $f5, $f1, $f0
    ctx->pc = 0x13b80cu;
    ctx->f[5] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
label_13b810:
    // 0x13b810: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x13B810u;
    {
        const bool branch_taken_0x13b810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B810u;
        // 0x13b814: 0x2882ffc4  slti        $v0, $a0, -0x3C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967236) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b810) {
            ctx->pc = 0x13B848u;
            goto label_13b848;
        }
    }
    ctx->pc = 0x13B818u;
    // 0x13b818: 0x3c01bd32  lui         $at, 0xBD32
    ctx->pc = 0x13b818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48434 << 16));
    // 0x13b81c: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x13b81cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x13b820: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13b820u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13b824: 0xc6010494  lwc1        $f1, 0x494($s0)
    ctx->pc = 0x13b824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b828: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x13b828u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x13b82c: 0x3c01bf5f  lui         $at, 0xBF5F
    ctx->pc = 0x13b82cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48991 << 16));
    // 0x13b830: 0x342166f3  ori         $at, $at, 0x66F3
    ctx->pc = 0x13b830u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26355);
    // 0x13b834: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13b834u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13b838: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x13b838u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13b83c: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x13b83cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b840: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x13B840u;
    {
        const bool branch_taken_0x13b840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B840u;
        // 0x13b844: 0xe6010494  swc1        $f1, 0x494($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1172), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b840) {
            ctx->pc = 0x13B87Cu;
            goto label_13b87c;
        }
    }
    ctx->pc = 0x13B848u;
label_13b848:
    // 0x13b848: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x13B848u;
    {
        const bool branch_taken_0x13b848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B848u;
        // 0x13b84c: 0x24a274a0  addiu       $v0, $a1, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b848) {
            ctx->pc = 0x13B888u;
            goto label_13b888;
        }
    }
    ctx->pc = 0x13B850u;
    // 0x13b850: 0x3c013d32  lui         $at, 0x3D32
    ctx->pc = 0x13b850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15666 << 16));
    // 0x13b854: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x13b854u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x13b858: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13b858u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13b85c: 0xc6010494  lwc1        $f1, 0x494($s0)
    ctx->pc = 0x13b85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b860: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x13b860u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x13b864: 0x3c013f5f  lui         $at, 0x3F5F
    ctx->pc = 0x13b864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16223 << 16));
    // 0x13b868: 0x342166f3  ori         $at, $at, 0x66F3
    ctx->pc = 0x13b868u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26355);
    // 0x13b86c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13b86cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13b870: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x13b870u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13b874: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x13b874u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b878: 0xe6010494  swc1        $f1, 0x494($s0)
    ctx->pc = 0x13b878u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1172), bits); }
label_13b87c:
    // 0x13b87c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x13B87Cu;
    {
        const bool branch_taken_0x13b87c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13b87c) {
            ctx->pc = 0x13B880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B87Cu;
            // 0x13b880: 0xe6020494  swc1        $f2, 0x494($s0) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1172), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B884u;
            goto label_13b884;
        }
    }
    ctx->pc = 0x13B884u;
label_13b884:
    // 0x13b884: 0x24a274a0  addiu       $v0, $a1, 0x74A0
    ctx->pc = 0x13b884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 29856));
label_13b888:
    // 0x13b888: 0x804201f3  lb          $v0, 0x1F3($v0)
    ctx->pc = 0x13b888u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 499)));
    // 0x13b88c: 0x2843003d  slti        $v1, $v0, 0x3D
    ctx->pc = 0x13b88cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x13b890: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x13B890u;
    {
        const bool branch_taken_0x13b890 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B890u;
        // 0x13b894: 0x2842ffc4  slti        $v0, $v0, -0x3C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967236) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b890) {
            ctx->pc = 0x13B8C8u;
            goto label_13b8c8;
        }
    }
    ctx->pc = 0x13B898u;
    // 0x13b898: 0x3c01bd32  lui         $at, 0xBD32
    ctx->pc = 0x13b898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48434 << 16));
    // 0x13b89c: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x13b89cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x13b8a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13b8a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13b8a4: 0xc6010490  lwc1        $f1, 0x490($s0)
    ctx->pc = 0x13b8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b8a8: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x13b8a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x13b8ac: 0x3c01bf32  lui         $at, 0xBF32
    ctx->pc = 0x13b8acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48946 << 16));
    // 0x13b8b0: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x13b8b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x13b8b4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13b8b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13b8b8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x13b8b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13b8bc: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x13b8bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b8c0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x13B8C0u;
    {
        const bool branch_taken_0x13b8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B8C0u;
        // 0x13b8c4: 0xe6010490  swc1        $f1, 0x490($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b8c0) {
            ctx->pc = 0x13B8FCu;
            goto label_13b8fc;
        }
    }
    ctx->pc = 0x13B8C8u;
label_13b8c8:
    // 0x13b8c8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x13B8C8u;
    {
        const bool branch_taken_0x13b8c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B8C8u;
        // 0x13b8cc: 0x26020490  addiu       $v0, $s0, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b8c8) {
            ctx->pc = 0x13B908u;
            goto label_13b908;
        }
    }
    ctx->pc = 0x13B8D0u;
    // 0x13b8d0: 0x3c013d32  lui         $at, 0x3D32
    ctx->pc = 0x13b8d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15666 << 16));
    // 0x13b8d4: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x13b8d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x13b8d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13b8d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13b8dc: 0xc6010490  lwc1        $f1, 0x490($s0)
    ctx->pc = 0x13b8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b8e0: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x13b8e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x13b8e4: 0x3c013f32  lui         $at, 0x3F32
    ctx->pc = 0x13b8e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16178 << 16));
    // 0x13b8e8: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x13b8e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x13b8ec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13b8ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13b8f0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x13b8f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13b8f4: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x13b8f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b8f8: 0xe6010490  swc1        $f1, 0x490($s0)
    ctx->pc = 0x13b8f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1168), bits); }
label_13b8fc:
    // 0x13b8fc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x13B8FCu;
    {
        const bool branch_taken_0x13b8fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13b8fc) {
            ctx->pc = 0x13B900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13B8FCu;
            // 0x13b900: 0xe6020490  swc1        $f2, 0x490($s0) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1168), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x13B904u;
            goto label_13b904;
        }
    }
    ctx->pc = 0x13B904u;
label_13b904:
    // 0x13b904: 0x26020490  addiu       $v0, $s0, 0x490
    ctx->pc = 0x13b904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
label_13b908:
    // 0x13b908: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x13b908u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13b90c: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x13b90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x13b910: 0x8e030470  lw          $v1, 0x470($s0)
    ctx->pc = 0x13b910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1136)));
    // 0x13b914: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x13b914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b918: 0xc46c0104  lwc1        $f12, 0x104($v1)
    ctx->pc = 0x13b918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13b91c: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x13B91Cu;
    SET_GPR_U32(ctx, 31, 0x13B924u);
    ctx->pc = 0x13B920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B91Cu;
    // 0x13b920: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x13B91Cu, 0x13B924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B924u;
label_13b924:
    // 0x13b924: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x13b924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x13b928: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13b928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b92c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13b92cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b930: 0xc051dca  jal         func_147728
    ctx->pc = 0x13B930u;
    SET_GPR_U32(ctx, 31, 0x13B938u);
    ctx->pc = 0x13B934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B930u;
    // 0x13b934: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x13B930u, 0x13B938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B938u;
label_13b938:
    // 0x13b938: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x13b938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13b93c: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x13b93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x13b940: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x13b940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13b944: 0x260303d0  addiu       $v1, $s0, 0x3D0
    ctx->pc = 0x13b944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 976));
    // 0x13b948: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x13b948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b94c: 0xc6000210  lwc1        $f0, 0x210($s0)
    ctx->pc = 0x13b94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b950: 0xc6040214  lwc1        $f4, 0x214($s0)
    ctx->pc = 0x13b950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x13b954: 0xc6050218  lwc1        $f5, 0x218($s0)
    ctx->pc = 0x13b954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x13b958: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x13b958u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x13b95c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13b95cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13b960: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x13b960u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x13b964: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x13b964u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x13b968: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x13b968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x13b96c: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x13b96cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x13b970: 0xe4460004  swc1        $f6, 0x4($v0)
    ctx->pc = 0x13b970u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x13b974: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x13b974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x13b978: 0xe6020200  swc1        $f2, 0x200($s0)
    ctx->pc = 0x13b978u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 512), bits); }
    // 0x13b97c: 0xe6030204  swc1        $f3, 0x204($s0)
    ctx->pc = 0x13b97cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 516), bits); }
    // 0x13b980: 0xe6010208  swc1        $f1, 0x208($s0)
    ctx->pc = 0x13b980u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 520), bits); }
    // 0x13b984: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13B984u;
    {
        const bool branch_taken_0x13b984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x13B988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B984u;
        // 0x13b988: 0xe446000c  swc1        $f6, 0xC($v0) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b984) {
            ctx->pc = 0x13B9A4u;
            goto label_13b9a4;
        }
    }
    ctx->pc = 0x13B98Cu;
    // 0x13b98c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x13b98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b990: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x13b990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b994: 0xe60003d0  swc1        $f0, 0x3D0($s0)
    ctx->pc = 0x13b994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 976), bits); }
    // 0x13b998: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x13b998u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x13b99c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x13b99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b9a0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x13b9a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_13b9a4:
    // 0x13b9a4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x13b9a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_13b9a8:
    // 0x13b9a8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x13b9a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13b9ac: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x13b9acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13b9b0: 0x3e00008  jr          $ra
    ctx->pc = 0x13B9B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B9B0u;
        // 0x13b9b4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B9B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B9B8u;
}
