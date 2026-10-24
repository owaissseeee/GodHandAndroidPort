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

// Function: cPlCamera_followEnd
// Address: 0x13b450 - 0x13b5f0
void cPlCamera_followEnd_0x13b450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cPlCamera_followEnd_0x13b450");
#endif

    switch (ctx->pc) {
        case 0x13b464u: goto label_13b464;
        case 0x13b4acu: goto label_13b4ac;
        case 0x13b4e4u: goto label_13b4e4;
        case 0x13b548u: goto label_13b548;
        default: break;
    }

    ctx->pc = 0x13b450u;

    // 0x13b450: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x13b450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x13b454: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x13b454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x13b458: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x13b458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x13b45c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x13B45Cu;
    SET_GPR_U32(ctx, 31, 0x13B464u);
    ctx->pc = 0x13B460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B45Cu;
    // 0x13b460: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x13B45Cu, 0x13B464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B464u;
label_13b464:
    // 0x13b464: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x13B464u;
    {
        const bool branch_taken_0x13b464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B464u;
        // 0x13b468: 0x26030500  addiu       $v1, $s0, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b464) {
            ctx->pc = 0x13B5E0u;
            goto label_13b5e0;
        }
    }
    ctx->pc = 0x13B46Cu;
    // 0x13b46c: 0x8e020470  lw          $v0, 0x470($s0)
    ctx->pc = 0x13b46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1136)));
    // 0x13b470: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x13b470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x13b474: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13B474u;
    {
        const bool branch_taken_0x13b474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13b474) {
            ctx->pc = 0x13B494u;
            goto label_13b494;
        }
    }
    ctx->pc = 0x13B47Cu;
    // 0x13b47c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x13b47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b480: 0xe6000500  swc1        $f0, 0x500($s0)
    ctx->pc = 0x13b480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1280), bits); }
    // 0x13b484: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x13b484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b488: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x13b488u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x13b48c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x13b48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b490: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x13b490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_13b494:
    // 0x13b494: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x13b494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x13b498: 0x8e050470  lw          $a1, 0x470($s0)
    ctx->pc = 0x13b498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1136)));
    // 0x13b49c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13b49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b4a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13b4a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b4a4: 0xc051dca  jal         func_147728
    ctx->pc = 0x13B4A4u;
    SET_GPR_U32(ctx, 31, 0x13B4ACu);
    ctx->pc = 0x13B4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B4A4u;
    // 0x13b4a8: 0x24a50100  addiu       $a1, $a1, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x13B4A4u, 0x13B4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B4ACu;
label_13b4ac:
    // 0x13b4ac: 0x8e030470  lw          $v1, 0x470($s0)
    ctx->pc = 0x13b4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1136)));
    // 0x13b4b0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13b4b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b4b4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x13b4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13b4b8: 0x26060480  addiu       $a2, $s0, 0x480
    ctx->pc = 0x13b4b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    // 0x13b4bc: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x13b4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x13b4c0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x13b4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b4c4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x13b4c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x13b4c8: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x13b4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x13b4cc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x13b4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b4d0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x13b4d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x13b4d4: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x13b4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x13b4d8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x13b4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b4dc: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x13B4DCu;
    SET_GPR_U32(ctx, 31, 0x13B4E4u);
    ctx->pc = 0x13B4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B4DCu;
    // 0x13b4e0: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x13B4DCu, 0x13B4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B4E4u;
label_13b4e4:
    // 0x13b4e4: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x13b4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b4e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13b4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b4ec: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x13b4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13b4f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13b4f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b4f4: 0xc7a30048  lwc1        $f3, 0x48($sp)
    ctx->pc = 0x13b4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13b4f8: 0xc6060210  lwc1        $f6, 0x210($s0)
    ctx->pc = 0x13b4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x13b4fc: 0xc6050214  lwc1        $f5, 0x214($s0)
    ctx->pc = 0x13b4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x13b500: 0xc6040218  lwc1        $f4, 0x218($s0)
    ctx->pc = 0x13b500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x13b504: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x13b504u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x13b508: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x13b508u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x13b50c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x13b50cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x13b510: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13b510u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13b514: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x13b514u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x13b518: 0x8e050470  lw          $a1, 0x470($s0)
    ctx->pc = 0x13b518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1136)));
    // 0x13b51c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x13b51cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13b520: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x13b520u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x13b524: 0x24a50100  addiu       $a1, $a1, 0x100
    ctx->pc = 0x13b524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
    // 0x13b528: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x13b528u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x13b52c: 0x46013180  add.s       $f6, $f6, $f1
    ctx->pc = 0x13b52cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
    // 0x13b530: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x13b530u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x13b534: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x13b534u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x13b538: 0xe6060210  swc1        $f6, 0x210($s0)
    ctx->pc = 0x13b538u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 528), bits); }
    // 0x13b53c: 0xe6050214  swc1        $f5, 0x214($s0)
    ctx->pc = 0x13b53cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 532), bits); }
    // 0x13b540: 0xc051dca  jal         func_147728
    ctx->pc = 0x13B540u;
    SET_GPR_U32(ctx, 31, 0x13B548u);
    ctx->pc = 0x13B544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B540u;
    // 0x13b544: 0xe6040218  swc1        $f4, 0x218($s0) (Delay Slot)
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 536), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x13B540u, 0x13B548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B548u;
label_13b548:
    // 0x13b548: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x13b548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13b54c: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x13b54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x13b550: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x13b550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13b554: 0x260303d0  addiu       $v1, $s0, 0x3D0
    ctx->pc = 0x13b554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 976));
    // 0x13b558: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x13b558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b55c: 0xc6000210  lwc1        $f0, 0x210($s0)
    ctx->pc = 0x13b55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b560: 0xc6040214  lwc1        $f4, 0x214($s0)
    ctx->pc = 0x13b560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x13b564: 0xc6050218  lwc1        $f5, 0x218($s0)
    ctx->pc = 0x13b564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x13b568: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x13b568u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x13b56c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13b56cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13b570: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x13b570u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x13b574: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x13b574u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x13b578: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x13b578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x13b57c: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x13b57cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x13b580: 0xe4460004  swc1        $f6, 0x4($v0)
    ctx->pc = 0x13b580u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x13b584: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x13b584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x13b588: 0xe6020200  swc1        $f2, 0x200($s0)
    ctx->pc = 0x13b588u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 512), bits); }
    // 0x13b58c: 0xe6030204  swc1        $f3, 0x204($s0)
    ctx->pc = 0x13b58cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 516), bits); }
    // 0x13b590: 0xe6010208  swc1        $f1, 0x208($s0)
    ctx->pc = 0x13b590u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 520), bits); }
    // 0x13b594: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13B594u;
    {
        const bool branch_taken_0x13b594 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x13B598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B594u;
        // 0x13b598: 0xe446000c  swc1        $f6, 0xC($v0) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b594) {
            ctx->pc = 0x13B5B4u;
            goto label_13b5b4;
        }
    }
    ctx->pc = 0x13B59Cu;
    // 0x13b59c: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x13b59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b5a0: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x13b5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b5a4: 0xe60003d0  swc1        $f0, 0x3D0($s0)
    ctx->pc = 0x13b5a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 976), bits); }
    // 0x13b5a8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x13b5a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x13b5ac: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x13b5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b5b0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x13b5b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_13b5b4:
    // 0x13b5b4: 0x8e02052c  lw          $v0, 0x52C($s0)
    ctx->pc = 0x13b5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1324)));
    // 0x13b5b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13B5B8u;
    {
        const bool branch_taken_0x13b5b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B5B8u;
        // 0x13b5bc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b5b8) {
            ctx->pc = 0x13B5C8u;
            goto label_13b5c8;
        }
    }
    ctx->pc = 0x13B5C0u;
    // 0x13b5c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13B5C0u;
    {
        const bool branch_taken_0x13b5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B5C0u;
        // 0x13b5c4: 0xae02052c  sw          $v0, 0x52C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1324), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b5c0) {
            ctx->pc = 0x13B5E0u;
            goto label_13b5e0;
        }
    }
    ctx->pc = 0x13B5C8u;
label_13b5c8:
    // 0x13b5c8: 0x8e020528  lw          $v0, 0x528($s0)
    ctx->pc = 0x13b5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1320)));
    // 0x13b5cc: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x13b5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x13b5d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13b5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b5d4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13b5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13b5d8: 0xae0404f0  sw          $a0, 0x4F0($s0)
    ctx->pc = 0x13b5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1264), GPR_U32(ctx, 4));
    // 0x13b5dc: 0xae020528  sw          $v0, 0x528($s0)
    ctx->pc = 0x13b5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1320), GPR_U32(ctx, 2));
label_13b5e0:
    // 0x13b5e0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x13b5e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13b5e4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x13b5e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13b5e8: 0x3e00008  jr          $ra
    ctx->pc = 0x13B5E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B5E8u;
        // 0x13b5ec: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B5E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B5F0u;
}
