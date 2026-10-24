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

// Function: func_001871B0
// Address: 0x1871b0 - 0x1873f0
void func_001871B0_0x1871b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001871B0_0x1871b0");
#endif

    switch (ctx->pc) {
        case 0x187280u: goto label_187280;
        case 0x1872a0u: goto label_1872a0;
        case 0x1872b4u: goto label_1872b4;
        case 0x1872c8u: goto label_1872c8;
        case 0x1872dcu: goto label_1872dc;
        case 0x1872f0u: goto label_1872f0;
        case 0x187360u: goto label_187360;
        case 0x18736cu: goto label_18736c;
        case 0x187378u: goto label_187378;
        case 0x187388u: goto label_187388;
        case 0x187394u: goto label_187394;
        case 0x1873a0u: goto label_1873a0;
        case 0x1873c8u: goto label_1873c8;
        default: break;
    }

    ctx->pc = 0x1871b0u;

    // 0x1871b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1871b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1871b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1871b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1871b8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1871b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1871bc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1871bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1871c0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1871c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1871c4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1871c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1871c8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1871c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1871cc: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1871ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1871d0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1871d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1871d4: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x1871d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1871d8: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x1871d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1871dc: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x1871dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x1871e0: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1871E0u;
    {
        const bool branch_taken_0x1871e0 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x1871E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1871E0u;
        // 0x1871e4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1871e0) {
            ctx->pc = 0x1871ECu;
            goto label_1871ec;
        }
    }
    ctx->pc = 0x1871E8u;
    // 0x1871e8: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x1871e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1871ec:
    // 0x1871ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1871ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1871f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1871F0u;
    {
        const bool branch_taken_0x1871f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1871F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1871F0u;
        // 0x1871f4: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1871f0) {
            ctx->pc = 0x187208u;
            goto label_187208;
        }
    }
    ctx->pc = 0x1871F8u;
    // 0x1871f8: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x1871f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x1871fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1871fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x187200: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x187200u;
    {
        const bool branch_taken_0x187200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187200u;
        // 0x187204: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187200) {
            ctx->pc = 0x18720Cu;
            goto label_18720c;
        }
    }
    ctx->pc = 0x187208u;
label_187208:
    // 0x187208: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x187208u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18720c:
    // 0x18720c: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x18720cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x187210: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x187210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187214: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x187214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x187218: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x187218u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x18721c: 0x926202b4  lbu         $v0, 0x2B4($s3)
    ctx->pc = 0x18721cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x187220: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x187220u;
    {
        const bool branch_taken_0x187220 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x187224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187220u;
        // 0x187224: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187220) {
            ctx->pc = 0x187230u;
            goto label_187230;
        }
    }
    ctx->pc = 0x187228u;
    // 0x187228: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x187228u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18722c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18722cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_187230:
    // 0x187230: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x187230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x187234: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x187234u;
    {
        const bool branch_taken_0x187234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x187238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187234u;
        // 0x187238: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187234) {
            ctx->pc = 0x18724Cu;
            goto label_18724c;
        }
    }
    ctx->pc = 0x18723Cu;
    // 0x18723c: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x18723cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x187240: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x187240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x187244: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x187244u;
    {
        const bool branch_taken_0x187244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187244u;
        // 0x187248: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187244) {
            ctx->pc = 0x187250u;
            goto label_187250;
        }
    }
    ctx->pc = 0x18724Cu;
label_18724c:
    // 0x18724c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x18724cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_187250:
    // 0x187250: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x187250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x187254: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x187254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x187258: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x187258u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x18725c: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x18725cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x187260: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x187260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x187264: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x187264u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x187268: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x187268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x18726c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x18726cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x187270: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x187270u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x187274: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x187274u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x187278: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x187278u;
    SET_GPR_U32(ctx, 31, 0x187280u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x187278u, 0x187280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187280u;
label_187280:
    // 0x187280: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x187280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x187284: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x187284u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x187288: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x187288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x18728c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x18728cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x187290: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x187290u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x187294: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x187294u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x187298: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x187298u;
    SET_GPR_U32(ctx, 31, 0x1872A0u);
    ctx->pc = 0x18729Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187298u;
    // 0x18729c: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x187298u, 0x1872A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1872A0u;
label_1872a0:
    // 0x1872a0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1872a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1872a4: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1872a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1872a8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1872a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1872ac: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1872ACu;
    SET_GPR_U32(ctx, 31, 0x1872B4u);
    ctx->pc = 0x1872B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1872ACu;
    // 0x1872b0: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1872ACu, 0x1872B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1872B4u;
label_1872b4:
    // 0x1872b4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1872b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1872b8: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1872b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1872bc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1872bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1872c0: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1872C0u;
    SET_GPR_U32(ctx, 31, 0x1872C8u);
    ctx->pc = 0x1872C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1872C0u;
    // 0x1872c4: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1872C0u, 0x1872C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1872C8u;
label_1872c8:
    // 0x1872c8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1872c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1872cc: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1872ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1872d0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1872d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1872d4: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1872D4u;
    SET_GPR_U32(ctx, 31, 0x1872DCu);
    ctx->pc = 0x1872D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1872D4u;
    // 0x1872d8: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1872D4u, 0x1872DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1872DCu;
label_1872dc:
    // 0x1872dc: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1872dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1872e0: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1872e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1872e4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1872e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1872e8: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1872E8u;
    SET_GPR_U32(ctx, 31, 0x1872F0u);
    ctx->pc = 0x1872ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1872E8u;
    // 0x1872ec: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1872E8u, 0x1872F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1872F0u;
label_1872f0:
    // 0x1872f0: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1872f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1872f4: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1872f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1872f8: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x1872f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x1872fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1872fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187300: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x187300u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x187304: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x187304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x187308: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x187308u;
    {
        const bool branch_taken_0x187308 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x18730Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187308u;
        // 0x18730c: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x187308) {
            ctx->pc = 0x187314u;
            goto label_187314;
        }
    }
    ctx->pc = 0x187310u;
    // 0x187310: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x187310u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_187314:
    // 0x187314: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x187314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x187318: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x187318u;
    {
        const bool branch_taken_0x187318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18731Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187318u;
        // 0x18731c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187318) {
            ctx->pc = 0x187330u;
            goto label_187330;
        }
    }
    ctx->pc = 0x187320u;
    // 0x187320: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x187320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x187324: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x187324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x187328: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x187328u;
    {
        const bool branch_taken_0x187328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18732Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187328u;
        // 0x18732c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187328) {
            ctx->pc = 0x187334u;
            goto label_187334;
        }
    }
    ctx->pc = 0x187330u;
label_187330:
    // 0x187330: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x187330u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_187334:
    // 0x187334: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x187334u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x187338: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x187338u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x18733c: 0x2501018  mult        $v0, $s2, $s0
    ctx->pc = 0x18733cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x187340: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x187340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187344: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x187344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x187348: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x187348u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x18734c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x18734cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x187350: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x187350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x187354: 0x26100660  addiu       $s0, $s0, 0x660
    ctx->pc = 0x187354u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1632));
    // 0x187358: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x187358u;
    SET_GPR_U32(ctx, 31, 0x187360u);
    ctx->pc = 0x18735Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187358u;
    // 0x18735c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x187358u, 0x187360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187360u;
label_187360:
    // 0x187360: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x187360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187364: 0xc05ce66  jal         func_173998
    ctx->pc = 0x187364u;
    SET_GPR_U32(ctx, 31, 0x18736Cu);
    ctx->pc = 0x187368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187364u;
    // 0x187368: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173998u, 0x187364u, 0x18736Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18736Cu;
label_18736c:
    // 0x18736c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18736cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187370: 0xc051f18  jal         func_147C60
    ctx->pc = 0x187370u;
    SET_GPR_U32(ctx, 31, 0x187378u);
    ctx->pc = 0x187374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187370u;
    // 0x187374: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x187370u, 0x187378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187378u;
label_187378:
    // 0x187378: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x187378u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18737c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18737cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187380: 0xc051f22  jal         func_147C88
    ctx->pc = 0x187380u;
    SET_GPR_U32(ctx, 31, 0x187388u);
    ctx->pc = 0x187384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187380u;
    // 0x187384: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x187380u, 0x187388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187388u;
label_187388:
    // 0x187388: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x187388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18738c: 0xc05ce42  jal         func_173908
    ctx->pc = 0x18738Cu;
    SET_GPR_U32(ctx, 31, 0x187394u);
    ctx->pc = 0x187390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18738Cu;
    // 0x187390: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173908u, 0x18738Cu, 0x187394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187394u;
label_187394:
    // 0x187394: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x187394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x187398: 0xc05ce4e  jal         func_173938
    ctx->pc = 0x187398u;
    SET_GPR_U32(ctx, 31, 0x1873A0u);
    ctx->pc = 0x18739Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187398u;
    // 0x18739c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173938u, 0x187398u, 0x1873A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1873A0u;
label_1873a0:
    // 0x1873a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1873a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1873a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1873a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1873a8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1873a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1873ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1873acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1873b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1873b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1873b4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1873b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1873b8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1873b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1873bc: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1873bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1873c0: 0xc05ce5a  jal         func_173968
    ctx->pc = 0x1873C0u;
    SET_GPR_U32(ctx, 31, 0x1873C8u);
    ctx->pc = 0x1873C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1873C0u;
    // 0x1873c4: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173968u, 0x1873C0u, 0x1873C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1873C8u;
label_1873c8:
    // 0x1873c8: 0xe6140058  swc1        $f20, 0x58($s0)
    ctx->pc = 0x1873c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x1873cc: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1873ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1873d0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1873d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1873d4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1873d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1873d8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1873d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1873dc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1873dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1873e0: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x1873e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1873e4: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x1873e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1873e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1873E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1873ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1873E8u;
        // 0x1873ec: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1873E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1873F0u;
}
