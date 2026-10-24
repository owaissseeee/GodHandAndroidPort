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

// Function: func_001CE870
// Address: 0x1ce870 - 0x1cec68
void func_001CE870_0x1ce870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001CE870_0x1ce870");
#endif

    switch (ctx->pc) {
        case 0x1ce8b8u: goto label_1ce8b8;
        case 0x1ce934u: goto label_1ce934;
        case 0x1cea3cu: goto label_1cea3c;
        case 0x1ceb30u: goto label_1ceb30;
        case 0x1cebd8u: goto label_1cebd8;
        case 0x1cec08u: goto label_1cec08;
        case 0x1cec18u: goto label_1cec18;
        default: break;
    }

    ctx->pc = 0x1ce870u;

    // 0x1ce870: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1ce870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1ce874: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1ce874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x1ce878: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ce878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce87c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1ce87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1ce880: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1ce880u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1ce884: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x1ce884u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1ce888: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1ce888u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce88c: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1ce88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x1ce890: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1ce890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x1ce894: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x1ce894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    // 0x1ce898: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1ce898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x1ce89c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1ce89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x1ce8a0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1ce8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1ce8a4: 0xe7b800e0  swc1        $f24, 0xE0($sp)
    ctx->pc = 0x1ce8a4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1ce8a8: 0xe7b700d8  swc1        $f23, 0xD8($sp)
    ctx->pc = 0x1ce8a8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x1ce8ac: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x1ce8acu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1ce8b0: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x1CE8B0u;
    SET_GPR_U32(ctx, 31, 0x1CE8B8u);
    ctx->pc = 0x1CE8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE8B0u;
    // 0x1ce8b4: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1CE8B0u, 0x1CE8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE8B8u;
label_1ce8b8:
    // 0x1ce8b8: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x1ce8b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x1ce8bc: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x1ce8bcu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x1ce8c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CE8C0u;
    {
        const bool branch_taken_0x1ce8c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE8C0u;
        // 0x1ce8c4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce8c0) {
            ctx->pc = 0x1CE8D4u;
            goto label_1ce8d4;
        }
    }
    ctx->pc = 0x1CE8C8u;
    // 0x1ce8c8: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x1ce8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x1ce8cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CE8CCu;
    {
        const bool branch_taken_0x1ce8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE8CCu;
        // 0x1ce8d0: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce8cc) {
            ctx->pc = 0x1CE8D8u;
            goto label_1ce8d8;
        }
    }
    ctx->pc = 0x1CE8D4u;
label_1ce8d4:
    // 0x1ce8d4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ce8d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ce8d8:
    // 0x1ce8d8: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x1ce8d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1ce8dc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CE8DCu;
    {
        const bool branch_taken_0x1ce8dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE8DCu;
        // 0x1ce8e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce8dc) {
            ctx->pc = 0x1CE8F4u;
            goto label_1ce8f4;
        }
    }
    ctx->pc = 0x1CE8E4u;
    // 0x1ce8e4: 0x1062009b  beq         $v1, $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x1CE8E4u;
    {
        const bool branch_taken_0x1ce8e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ce8e4) {
            ctx->pc = 0x1CEB54u;
            goto label_1ceb54;
        }
    }
    ctx->pc = 0x1CE8ECu;
    // 0x1ce8ec: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x1CE8ECu;
    {
        const bool branch_taken_0x1ce8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE8ECu;
        // 0x1ce8f0: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce8ec) {
            ctx->pc = 0x1CEC30u;
            goto label_1cec30;
        }
    }
    ctx->pc = 0x1CE8F4u;
label_1ce8f4:
    // 0x1ce8f4: 0x3c013c54  lui         $at, 0x3C54
    ctx->pc = 0x1ce8f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15444 << 16));
    // 0x1ce8f8: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x1ce8f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
    // 0x1ce8fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ce8fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce900: 0x26a464f0  addiu       $a0, $s5, 0x64F0
    ctx->pc = 0x1ce900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 25840));
    // 0x1ce904: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1ce904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1ce908: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ce908u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1ce90c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ce90cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ce910: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1ce910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1ce914: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x1ce914u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x1ce918: 0xae000640  sw          $zero, 0x640($s0)
    ctx->pc = 0x1ce918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1600), GPR_U32(ctx, 0));
    // 0x1ce91c: 0xae000644  sw          $zero, 0x644($s0)
    ctx->pc = 0x1ce91cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1604), GPR_U32(ctx, 0));
    // 0x1ce920: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x1ce920u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x1ce924: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x1ce924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1ce928: 0xe6000630  swc1        $f0, 0x630($s0)
    ctx->pc = 0x1ce928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1584), bits); }
    // 0x1ce92c: 0xc0a4b72  jal         func_292DC8
    ctx->pc = 0x1CE92Cu;
    SET_GPR_U32(ctx, 31, 0x1CE934u);
    ctx->pc = 0x1CE930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE92Cu;
    // 0x1ce930: 0xe6010648  swc1        $f1, 0x648($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1608), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x292DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292DC8u, 0x1CE92Cu, 0x1CE934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE934u;
label_1ce934:
    // 0x1ce934: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x1ce934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x1ce938: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ce938u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce93c: 0x1040006f  beqz        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x1CE93Cu;
    {
        const bool branch_taken_0x1ce93c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE93Cu;
        // 0x1ce940: 0xe6000660  swc1        $f0, 0x660($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1632), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce93c) {
            ctx->pc = 0x1CEAFCu;
            goto label_1ceafc;
        }
    }
    ctx->pc = 0x1CE944u;
    // 0x1ce944: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x1ce944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ce948: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x1ce948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1ce94c: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x1ce94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ce950: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CE950u;
    {
        const bool branch_taken_0x1ce950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CE954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE950u;
        // 0x1ce954: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce950) {
            ctx->pc = 0x1CE974u;
            goto label_1ce974;
        }
    }
    ctx->pc = 0x1CE958u;
    // 0x1ce958: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1ce958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce95c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1ce95cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1ce960: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1ce960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ce964: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1ce964u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1ce968: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1ce968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce96c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1ce96cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1ce970: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1ce970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ce974:
    // 0x1ce974: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1ce974u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ce978: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x1ce978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
    // 0x1ce97c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1ce97cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1ce980: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ce980u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ce984: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x1ce984u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ce988: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1ce988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1ce98c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ce98cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ce990: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1ce990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1ce994: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1ce994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ce998: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1ce998u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ce99c: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1ce99cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ce9a0: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1ce9a0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1ce9a4: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1ce9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ce9a8: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1ce9a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ce9ac: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1ce9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ce9b0: 0x26110640  addiu       $s1, $s0, 0x640
    ctx->pc = 0x1ce9b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1600));
    // 0x1ce9b4: 0x12340006  beq         $s1, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CE9B4u;
    {
        const bool branch_taken_0x1ce9b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        ctx->pc = 0x1CE9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE9B4u;
        // 0x1ce9b8: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce9b4) {
            ctx->pc = 0x1CE9D0u;
            goto label_1ce9d0;
        }
    }
    ctx->pc = 0x1CE9BCu;
    // 0x1ce9bc: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1ce9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ce9c0: 0xe6000640  swc1        $f0, 0x640($s0)
    ctx->pc = 0x1ce9c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1600), bits); }
    // 0x1ce9c4: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x1ce9c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1ce9c8: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1ce9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce9cc: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1ce9ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_1ce9d0:
    // 0x1ce9d0: 0xc6010640  lwc1        $f1, 0x640($s0)
    ctx->pc = 0x1ce9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ce9d4: 0xc6000648  lwc1        $f0, 0x648($s0)
    ctx->pc = 0x1ce9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce9d8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1ce9d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1ce9dc: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1ce9dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1ce9e0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1ce9e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ce9e4: 0x0  nop
    ctx->pc = 0x1ce9e4u;
    // NOP
    // 0x1ce9e8: 0x0  nop
    ctx->pc = 0x1ce9e8u;
    // NOP
    // 0x1ce9ec: 0x460105c4  c1          0x105C4
    ctx->pc = 0x1ce9ecu;
    ctx->f[23] = ps2FpuSqrt(ctx->fcr31, ctx->f[1]);
    // 0x1ce9f0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1ce9f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1ce9f4: 0xc6010644  lwc1        $f1, 0x644($s0)
    ctx->pc = 0x1ce9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ce9f8: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x1ce9f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ce9fc: 0x0  nop
    ctx->pc = 0x1ce9fcu;
    // NOP
    // 0x1cea00: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1CEA00u;
    {
        const bool branch_taken_0x1cea00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cea00) {
            ctx->pc = 0x1CEA04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CEA00u;
            // 0x1cea04: 0x46000847  neg.s       $f1, $f1 (Delay Slot)
            ctx->f[1] = FPU_NEG_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CEA08u;
            goto label_1cea08;
        }
    }
    ctx->pc = 0x1CEA08u;
label_1cea08:
    // 0x1cea08: 0xc6000630  lwc1        $f0, 0x630($s0)
    ctx->pc = 0x1cea08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cea0c: 0x0  nop
    ctx->pc = 0x1cea0cu;
    // NOP
    // 0x1cea10: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1cea10u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x1cea14: 0x0  nop
    ctx->pc = 0x1cea14u;
    // NOP
    // 0x1cea18: 0x0  nop
    ctx->pc = 0x1cea18u;
    // NOP
    // 0x1cea1c: 0x46000004  c1          0x4
    ctx->pc = 0x1cea1cu;
    ctx->f[0] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x1cea20: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x1cea20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x1cea24: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cea24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cea28: 0xe6140644  swc1        $f20, 0x644($s0)
    ctx->pc = 0x1cea28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1604), bits); }
    // 0x1cea2c: 0x46010540  add.s       $f21, $f0, $f1
    ctx->pc = 0x1cea2cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cea30: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x1cea30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1cea34: 0xc04078a  jal         func_101E28
    ctx->pc = 0x1CEA34u;
    SET_GPR_U32(ctx, 31, 0x1CEA3Cu);
    ctx->pc = 0x1CEA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEA34u;
    // 0x1cea38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x1CEA34u, 0x1CEA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEA3Cu;
label_1cea3c:
    // 0x1cea3c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1cea3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cea40: 0x0  nop
    ctx->pc = 0x1cea40u;
    // NOP
    // 0x1cea44: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x1CEA44u;
    {
        const bool branch_taken_0x1cea44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CEA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEA44u;
        // 0x1cea48: 0x27a20040  addiu       $v0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cea44) {
            ctx->pc = 0x1CEA8Cu;
            goto label_1cea8c;
        }
    }
    ctx->pc = 0x1CEA4Cu;
    // 0x1cea4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cea4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cea50: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cea50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cea54: 0xc6010640  lwc1        $f1, 0x640($s0)
    ctx->pc = 0x1cea54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cea58: 0x0  nop
    ctx->pc = 0x1cea58u;
    // NOP
    // 0x1cea5c: 0x0  nop
    ctx->pc = 0x1cea5cu;
    // NOP
    // 0x1cea60: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x1cea60u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[0]);
    // 0x1cea64: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1cea64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1cea68: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x1cea68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1cea6c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1cea6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cea70: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1cea70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1cea74: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1cea74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1cea78: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x1cea78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cea7c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1cea7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1cea80: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x1cea80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1cea84: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1cea84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cea88: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1cea88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_1cea8c:
    // 0x1cea8c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1cea8cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cea90: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1cea90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cea94: 0x0  nop
    ctx->pc = 0x1cea94u;
    // NOP
    // 0x1cea98: 0x0  nop
    ctx->pc = 0x1cea98u;
    // NOP
    // 0x1cea9c: 0x4615b803  div.s       $f0, $f23, $f21
    ctx->pc = 0x1cea9cu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[23], ctx->f[21]);
    // 0x1ceaa0: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1ceaa0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ceaa4: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1ceaa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ceaa8: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1ceaa8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ceaac: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1ceaacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1ceab0: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1ceab0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1ceab4: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1ceab4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1ceab8: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1ceab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ceabc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1ceabcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ceac0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1ceac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ceac4: 0x12340006  beq         $s1, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CEAC4u;
    {
        const bool branch_taken_0x1ceac4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        ctx->pc = 0x1CEAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEAC4u;
        // 0x1ceac8: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceac4) {
            ctx->pc = 0x1CEAE0u;
            goto label_1ceae0;
        }
    }
    ctx->pc = 0x1CEACCu;
    // 0x1ceacc: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1ceaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cead0: 0xe6000640  swc1        $f0, 0x640($s0)
    ctx->pc = 0x1cead0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1600), bits); }
    // 0x1cead4: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x1cead4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1cead8: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1cead8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ceadc: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1ceadcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_1ceae0:
    // 0x1ceae0: 0xc6000630  lwc1        $f0, 0x630($s0)
    ctx->pc = 0x1ceae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ceae4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1ceae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1ceae8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ceae8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ceaec: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x1ceaecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x1ceaf0: 0x4601a841  sub.s       $f1, $f21, $f1
    ctx->pc = 0x1ceaf0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
    // 0x1ceaf4: 0xe6000644  swc1        $f0, 0x644($s0)
    ctx->pc = 0x1ceaf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1604), bits); }
    // 0x1ceaf8: 0xe6010660  swc1        $f1, 0x660($s0)
    ctx->pc = 0x1ceaf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1632), bits); }
label_1ceafc:
    // 0x1ceafc: 0xc60c0640  lwc1        $f12, 0x640($s0)
    ctx->pc = 0x1ceafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ceb00: 0xc60d0648  lwc1        $f13, 0x648($s0)
    ctx->pc = 0x1ceb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ceb04: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x1ceb04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x1ceb08: 0x460d6842  mul.s       $f1, $f13, $f13
    ctx->pc = 0x1ceb08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x1ceb0c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ceb0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ceb10: 0x0  nop
    ctx->pc = 0x1ceb10u;
    // NOP
    // 0x1ceb14: 0x0  nop
    ctx->pc = 0x1ceb14u;
    // NOP
    // 0x1ceb18: 0x46000004  c1          0x4
    ctx->pc = 0x1ceb18u;
    ctx->f[0] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x1ceb1c: 0x3c01be32  lui         $at, 0xBE32
    ctx->pc = 0x1ceb1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48690 << 16));
    // 0x1ceb20: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x1ceb20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x1ceb24: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ceb24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ceb28: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x1CEB28u;
    SET_GPR_U32(ctx, 31, 0x1CEB30u);
    ctx->pc = 0x1CEB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEB28u;
    // 0x1ceb2c: 0xe6010100  swc1        $f1, 0x100($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x1CEB28u, 0x1CEB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEB30u;
label_1ceb30:
    // 0x1ceb30: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x1ceb30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1ceb34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ceb34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ceb38: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ceb38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ceb3c: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x1ceb3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x1ceb40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ceb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ceb44: 0xa6030568  sh          $v1, 0x568($s0)
    ctx->pc = 0x1ceb44u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1384), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ceb48: 0xa2040531  sb          $a0, 0x531($s0)
    ctx->pc = 0x1ceb48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1329), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ceb4c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x1ceb4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ceb50: 0xae000108  sw          $zero, 0x108($s0)
    ctx->pc = 0x1ceb50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
label_1ceb54:
    // 0x1ceb54: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CEB54u;
    {
        const bool branch_taken_0x1ceb54 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEB54u;
        // 0x1ceb58: 0x27a30010  addiu       $v1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceb54) {
            ctx->pc = 0x1CEB78u;
            goto label_1ceb78;
        }
    }
    ctx->pc = 0x1CEB5Cu;
    // 0x1ceb5c: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x1ceb5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x1ceb60: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x1ceb60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x1ceb64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ceb64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ceb68: 0xc6410104  lwc1        $f1, 0x104($s2)
    ctx->pc = 0x1ceb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ceb6c: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x1ceb6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x1ceb70: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1ceb70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ceb74: 0xe6410104  swc1        $f1, 0x104($s2)
    ctx->pc = 0x1ceb74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
label_1ceb78:
    // 0x1ceb78: 0x26020640  addiu       $v0, $s0, 0x640
    ctx->pc = 0x1ceb78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1600));
    // 0x1ceb7c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1ceb7cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ceb80: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1ceb80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ceb84: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1ceb84u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ceb88: 0x4408b000  mfc1        $t0, $f22
    ctx->pc = 0x1ceb88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1ceb8c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1ceb8cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1ceb90: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1ceb90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1ceb94: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1ceb94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ceb98: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1ceb98u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ceb9c: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1ceb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ceba0: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1ceba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1ceba4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1ceba4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ceba8: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x1ceba8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cebac: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1cebacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1cebb0: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1cebb0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1cebb4: 0xc6000630  lwc1        $f0, 0x630($s0)
    ctx->pc = 0x1cebb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cebb8: 0x26b164f0  addiu       $s1, $s5, 0x64F0
    ctx->pc = 0x1cebb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 25840));
    // 0x1cebbc: 0xc6010644  lwc1        $f1, 0x644($s0)
    ctx->pc = 0x1cebbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cebc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cebc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cebc4: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x1cebc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x1cebc8: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x1cebc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1cebcc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1cebccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1cebd0: 0xc0a4bdc  jal         func_292F70
    ctx->pc = 0x1CEBD0u;
    SET_GPR_U32(ctx, 31, 0x1CEBD8u);
    ctx->pc = 0x1CEBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEBD0u;
    // 0x1cebd4: 0xe6010644  swc1        $f1, 0x644($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1604), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F70u, 0x1CEBD0u, 0x1CEBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEBD8u;
label_1cebd8:
    // 0x1cebd8: 0xc6000660  lwc1        $f0, 0x660($s0)
    ctx->pc = 0x1cebd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cebdc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1cebdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cebe0: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x1cebe0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x1cebe4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1cebe4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cebe8: 0x0  nop
    ctx->pc = 0x1cebe8u;
    // NOP
    // 0x1cebec: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1CEBECu;
    {
        const bool branch_taken_0x1cebec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CEBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEBECu;
        // 0x1cebf0: 0xe6000660  swc1        $f0, 0x660($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1632), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cebec) {
            ctx->pc = 0x1CEC2Cu;
            goto label_1cec2c;
        }
    }
    ctx->pc = 0x1CEBF4u;
    // 0x1cebf4: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x1cebf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1cebf8: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1cebf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1cebfc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1cebfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cec00: 0xc0a4b72  jal         func_292DC8
    ctx->pc = 0x1CEC00u;
    SET_GPR_U32(ctx, 31, 0x1CEC08u);
    ctx->pc = 0x1CEC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEC00u;
    // 0x1cec04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292DC8u, 0x1CEC00u, 0x1CEC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEC08u;
label_1cec08:
    // 0x1cec08: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CEC08u;
    {
        const bool branch_taken_0x1cec08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cec08) {
            ctx->pc = 0x1CEC0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CEC08u;
            // 0x1cec0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CEC1Cu;
            goto label_1cec1c;
        }
    }
    ctx->pc = 0x1CEC10u;
    // 0x1cec10: 0xc0a25ac  jal         func_2896B0
    ctx->pc = 0x1CEC10u;
    SET_GPR_U32(ctx, 31, 0x1CEC18u);
    ctx->pc = 0x1CEC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEC10u;
    // 0x1cec14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2896B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2896B0u, 0x1CEC10u, 0x1CEC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEC18u;
label_1cec18:
    // 0x1cec18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cec18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cec1c:
    // 0x1cec1c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1cec1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cec20: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x1cec20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cec24: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x1cec24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cec28: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1cec28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_1cec2c:
    // 0x1cec2c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1cec2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1cec30:
    // 0x1cec30: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1cec30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1cec34: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1cec34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1cec38: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1cec38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1cec3c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1cec3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1cec40: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1cec40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1cec44: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1cec44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1cec48: 0xc7b800e0  lwc1        $f24, 0xE0($sp)
    ctx->pc = 0x1cec48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1cec4c: 0xc7b700d8  lwc1        $f23, 0xD8($sp)
    ctx->pc = 0x1cec4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1cec50: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x1cec50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1cec54: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x1cec54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1cec58: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x1cec58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cec5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CEC5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CEC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEC5Cu;
        // 0x1cec60: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEC5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CEC64u;
    // 0x1cec64: 0x0  nop
    ctx->pc = 0x1cec64u;
    // NOP
    ctx->pc = 0x1cec68u;
}
