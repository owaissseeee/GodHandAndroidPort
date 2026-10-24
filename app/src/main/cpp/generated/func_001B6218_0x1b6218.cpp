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

// Function: func_001B6218
// Address: 0x1b6218 - 0x1b6458
void func_001B6218_0x1b6218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B6218_0x1b6218");
#endif

    switch (ctx->pc) {
        case 0x1b62e8u: goto label_1b62e8;
        case 0x1b6308u: goto label_1b6308;
        case 0x1b631cu: goto label_1b631c;
        case 0x1b6330u: goto label_1b6330;
        case 0x1b6344u: goto label_1b6344;
        case 0x1b6358u: goto label_1b6358;
        case 0x1b63c8u: goto label_1b63c8;
        case 0x1b63d4u: goto label_1b63d4;
        case 0x1b63e0u: goto label_1b63e0;
        case 0x1b63f0u: goto label_1b63f0;
        case 0x1b63fcu: goto label_1b63fc;
        case 0x1b6408u: goto label_1b6408;
        case 0x1b6430u: goto label_1b6430;
        default: break;
    }

    ctx->pc = 0x1b6218u;

    // 0x1b6218: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1b6218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1b621c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b621cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6220: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1b6220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1b6224: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1b6224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1b6228: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b6228u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b622c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1b622cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1b6230: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1b6230u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6234: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1b6234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1b6238: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b6238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b623c: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x1b623cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1b6240: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x1b6240u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1b6244: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x1b6244u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x1b6248: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B6248u;
    {
        const bool branch_taken_0x1b6248 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x1B624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6248u;
        // 0x1b624c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6248) {
            ctx->pc = 0x1B6254u;
            goto label_1b6254;
        }
    }
    ctx->pc = 0x1B6250u;
    // 0x1b6250: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x1b6250u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1b6254:
    // 0x1b6254: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b6254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b6258: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B6258u;
    {
        const bool branch_taken_0x1b6258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B625Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6258u;
        // 0x1b625c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6258) {
            ctx->pc = 0x1B6270u;
            goto label_1b6270;
        }
    }
    ctx->pc = 0x1B6260u;
    // 0x1b6260: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x1b6260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x1b6264: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b6264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b6268: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B6268u;
    {
        const bool branch_taken_0x1b6268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6268u;
        // 0x1b626c: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6268) {
            ctx->pc = 0x1B6274u;
            goto label_1b6274;
        }
    }
    ctx->pc = 0x1B6270u;
label_1b6270:
    // 0x1b6270: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1b6270u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b6274:
    // 0x1b6274: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x1b6274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x1b6278: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b6278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b627c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1b627cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1b6280: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x1b6280u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x1b6284: 0x926202b4  lbu         $v0, 0x2B4($s3)
    ctx->pc = 0x1b6284u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x1b6288: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B6288u;
    {
        const bool branch_taken_0x1b6288 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x1B628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6288u;
        // 0x1b628c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6288) {
            ctx->pc = 0x1B6298u;
            goto label_1b6298;
        }
    }
    ctx->pc = 0x1B6290u;
    // 0x1b6290: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1b6290u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b6294: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b6294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b6298:
    // 0x1b6298: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1b6298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1b629c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B629Cu;
    {
        const bool branch_taken_0x1b629c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B62A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B629Cu;
        // 0x1b62a0: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b629c) {
            ctx->pc = 0x1B62B4u;
            goto label_1b62b4;
        }
    }
    ctx->pc = 0x1B62A4u;
    // 0x1b62a4: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x1b62a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x1b62a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b62a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b62ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B62ACu;
    {
        const bool branch_taken_0x1b62ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B62B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B62ACu;
        // 0x1b62b0: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b62ac) {
            ctx->pc = 0x1B62B8u;
            goto label_1b62b8;
        }
    }
    ctx->pc = 0x1B62B4u;
label_1b62b4:
    // 0x1b62b4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1b62b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b62b8:
    // 0x1b62b8: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x1b62b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x1b62bc: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1b62bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1b62c0: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x1b62c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x1b62c4: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x1b62c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1b62c8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1b62c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b62cc: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x1b62ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1b62d0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1b62d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b62d4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1b62d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1b62d8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b62d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b62dc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1b62dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b62e0: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1B62E0u;
    SET_GPR_U32(ctx, 31, 0x1B62E8u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1B62E0u, 0x1B62E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B62E8u;
label_1b62e8:
    // 0x1b62e8: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1b62e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b62ec: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1b62ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1b62f0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1b62f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1b62f4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b62f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b62f8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1b62f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1b62fc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b62fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b6300: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x1B6300u;
    SET_GPR_U32(ctx, 31, 0x1B6308u);
    ctx->pc = 0x1B6304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6300u;
    // 0x1b6304: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x1B6300u, 0x1B6308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6308u;
label_1b6308:
    // 0x1b6308: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1b6308u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1b630c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1b630cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6310: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b6310u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b6314: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1B6314u;
    SET_GPR_U32(ctx, 31, 0x1B631Cu);
    ctx->pc = 0x1B6318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6314u;
    // 0x1b6318: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1B6314u, 0x1B631Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B631Cu;
label_1b631c:
    // 0x1b631c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1b631cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1b6320: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1b6320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6324: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b6324u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b6328: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1B6328u;
    SET_GPR_U32(ctx, 31, 0x1B6330u);
    ctx->pc = 0x1B632Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6328u;
    // 0x1b632c: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1B6328u, 0x1B6330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6330u;
label_1b6330:
    // 0x1b6330: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1b6330u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1b6334: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1b6334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6338: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b6338u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b633c: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1B633Cu;
    SET_GPR_U32(ctx, 31, 0x1B6344u);
    ctx->pc = 0x1B6340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B633Cu;
    // 0x1b6340: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1B633Cu, 0x1B6344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6344u;
label_1b6344:
    // 0x1b6344: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1b6344u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1b6348: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1b6348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b634c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b634cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b6350: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1B6350u;
    SET_GPR_U32(ctx, 31, 0x1B6358u);
    ctx->pc = 0x1B6354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6350u;
    // 0x1b6354: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1B6350u, 0x1B6358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6358u;
label_1b6358:
    // 0x1b6358: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1b6358u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1b635c: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1b635cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6360: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x1b6360u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x1b6364: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b6364u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6368: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b6368u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b636c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1b636cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1b6370: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B6370u;
    {
        const bool branch_taken_0x1b6370 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x1B6374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6370u;
        // 0x1b6374: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6370) {
            ctx->pc = 0x1B637Cu;
            goto label_1b637c;
        }
    }
    ctx->pc = 0x1B6378u;
    // 0x1b6378: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x1b6378u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1b637c:
    // 0x1b637c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b637cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b6380: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B6380u;
    {
        const bool branch_taken_0x1b6380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6380u;
        // 0x1b6384: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6380) {
            ctx->pc = 0x1B6398u;
            goto label_1b6398;
        }
    }
    ctx->pc = 0x1B6388u;
    // 0x1b6388: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x1b6388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x1b638c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b638cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b6390: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B6390u;
    {
        const bool branch_taken_0x1b6390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6390u;
        // 0x1b6394: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6390) {
            ctx->pc = 0x1B639Cu;
            goto label_1b639c;
        }
    }
    ctx->pc = 0x1B6398u;
label_1b6398:
    // 0x1b6398: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b6398u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b639c:
    // 0x1b639c: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x1b639cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1b63a0: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x1b63a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1b63a4: 0x2501018  mult        $v0, $s2, $s0
    ctx->pc = 0x1b63a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1b63a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b63a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b63ac: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x1b63acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x1b63b0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1b63b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1b63b4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1b63b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b63b8: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x1b63b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1b63bc: 0x26100610  addiu       $s0, $s0, 0x610
    ctx->pc = 0x1b63bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    // 0x1b63c0: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x1B63C0u;
    SET_GPR_U32(ctx, 31, 0x1B63C8u);
    ctx->pc = 0x1B63C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B63C0u;
    // 0x1b63c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1B63C0u, 0x1B63C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B63C8u;
label_1b63c8:
    // 0x1b63c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b63c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b63cc: 0xc05ce66  jal         func_173998
    ctx->pc = 0x1B63CCu;
    SET_GPR_U32(ctx, 31, 0x1B63D4u);
    ctx->pc = 0x1B63D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B63CCu;
    // 0x1b63d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173998u, 0x1B63CCu, 0x1B63D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B63D4u;
label_1b63d4:
    // 0x1b63d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b63d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b63d8: 0xc051f18  jal         func_147C60
    ctx->pc = 0x1B63D8u;
    SET_GPR_U32(ctx, 31, 0x1B63E0u);
    ctx->pc = 0x1B63DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B63D8u;
    // 0x1b63dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x1B63D8u, 0x1B63E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B63E0u;
label_1b63e0:
    // 0x1b63e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b63e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b63e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b63e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b63e8: 0xc051f22  jal         func_147C88
    ctx->pc = 0x1B63E8u;
    SET_GPR_U32(ctx, 31, 0x1B63F0u);
    ctx->pc = 0x1B63ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B63E8u;
    // 0x1b63ec: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x1B63E8u, 0x1B63F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B63F0u;
label_1b63f0:
    // 0x1b63f0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1b63f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b63f4: 0xc05ce42  jal         func_173908
    ctx->pc = 0x1B63F4u;
    SET_GPR_U32(ctx, 31, 0x1B63FCu);
    ctx->pc = 0x1B63F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B63F4u;
    // 0x1b63f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173908u, 0x1B63F4u, 0x1B63FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B63FCu;
label_1b63fc:
    // 0x1b63fc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1b63fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b6400: 0xc05ce4e  jal         func_173938
    ctx->pc = 0x1B6400u;
    SET_GPR_U32(ctx, 31, 0x1B6408u);
    ctx->pc = 0x1B6404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6400u;
    // 0x1b6404: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173938u, 0x1B6400u, 0x1B6408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6408u;
label_1b6408:
    // 0x1b6408: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b6408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b640c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b640cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6410: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1b6410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b6414: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b6414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6418: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b6418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b641c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1b641cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1b6420: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1b6420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1b6424: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1b6424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b6428: 0xc05ce5a  jal         func_173968
    ctx->pc = 0x1B6428u;
    SET_GPR_U32(ctx, 31, 0x1B6430u);
    ctx->pc = 0x1B642Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6428u;
    // 0x1b642c: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173968u, 0x1B6428u, 0x1B6430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6430u;
label_1b6430:
    // 0x1b6430: 0xe6140058  swc1        $f20, 0x58($s0)
    ctx->pc = 0x1b6430u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x1b6434: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1b6434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b6438: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1b6438u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b643c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1b643cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b6440: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1b6440u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b6444: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b6444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b6448: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x1b6448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1b644c: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x1b644cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b6450: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6450u;
        // 0x1b6454: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6458u;
}
