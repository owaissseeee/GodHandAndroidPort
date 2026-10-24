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

// Function: func_0019F8D0
// Address: 0x19f8d0 - 0x19fb20
void func_0019F8D0_0x19f8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019F8D0_0x19f8d0");
#endif

    switch (ctx->pc) {
        case 0x19f9a0u: goto label_19f9a0;
        case 0x19f9c0u: goto label_19f9c0;
        case 0x19f9e0u: goto label_19f9e0;
        case 0x19f9f4u: goto label_19f9f4;
        case 0x19fa08u: goto label_19fa08;
        case 0x19fa1cu: goto label_19fa1c;
        case 0x19fa8cu: goto label_19fa8c;
        case 0x19fa98u: goto label_19fa98;
        case 0x19faa4u: goto label_19faa4;
        case 0x19fab4u: goto label_19fab4;
        case 0x19fac0u: goto label_19fac0;
        case 0x19faccu: goto label_19facc;
        case 0x19faf4u: goto label_19faf4;
        default: break;
    }

    ctx->pc = 0x19f8d0u;

    // 0x19f8d0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x19f8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x19f8d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19f8d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f8d8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x19f8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x19f8dc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x19f8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x19f8e0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x19f8e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f8e4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x19f8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x19f8e8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x19f8e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f8ec: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x19f8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x19f8f0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19f8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19f8f4: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x19f8f4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x19f8f8: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x19f8f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x19f8fc: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x19f8fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x19f900: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x19F900u;
    {
        const bool branch_taken_0x19f900 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x19F904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F900u;
        // 0x19f904: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f900) {
            ctx->pc = 0x19F90Cu;
            goto label_19f90c;
        }
    }
    ctx->pc = 0x19F908u;
    // 0x19f908: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x19f908u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_19f90c:
    // 0x19f90c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19f90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19f910: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19F910u;
    {
        const bool branch_taken_0x19f910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F910u;
        // 0x19f914: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f910) {
            ctx->pc = 0x19F928u;
            goto label_19f928;
        }
    }
    ctx->pc = 0x19F918u;
    // 0x19f918: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x19f918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x19f91c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19f91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19f920: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19F920u;
    {
        const bool branch_taken_0x19f920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F920u;
        // 0x19f924: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f920) {
            ctx->pc = 0x19F92Cu;
            goto label_19f92c;
        }
    }
    ctx->pc = 0x19F928u;
label_19f928:
    // 0x19f928: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19f928u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f92c:
    // 0x19f92c: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x19f92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x19f930: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19f930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f934: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x19f934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x19f938: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x19f938u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x19f93c: 0x926202b4  lbu         $v0, 0x2B4($s3)
    ctx->pc = 0x19f93cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x19f940: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x19F940u;
    {
        const bool branch_taken_0x19f940 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x19F944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F940u;
        // 0x19f944: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f940) {
            ctx->pc = 0x19F950u;
            goto label_19f950;
        }
    }
    ctx->pc = 0x19F948u;
    // 0x19f948: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x19f948u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19f94c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19f94cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19f950:
    // 0x19f950: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x19f950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x19f954: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19F954u;
    {
        const bool branch_taken_0x19f954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F954u;
        // 0x19f958: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f954) {
            ctx->pc = 0x19F96Cu;
            goto label_19f96c;
        }
    }
    ctx->pc = 0x19F95Cu;
    // 0x19f95c: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x19f95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x19f960: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19f960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19f964: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19F964u;
    {
        const bool branch_taken_0x19f964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F964u;
        // 0x19f968: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f964) {
            ctx->pc = 0x19F970u;
            goto label_19f970;
        }
    }
    ctx->pc = 0x19F96Cu;
label_19f96c:
    // 0x19f96c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19f96cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f970:
    // 0x19f970: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x19f970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x19f974: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x19f974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x19f978: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x19f978u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x19f97c: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x19f97cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19f980: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x19f980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19f984: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x19f984u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19f988: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x19f988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x19f98c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x19f98cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x19f990: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x19f990u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x19f994: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x19f994u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x19f998: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x19F998u;
    SET_GPR_U32(ctx, 31, 0x19F9A0u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x19F998u, 0x19F9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F9A0u;
label_19f9a0:
    // 0x19f9a0: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x19f9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19f9a4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x19f9a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x19f9a8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x19f9a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x19f9ac: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x19f9acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x19f9b0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x19f9b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x19f9b4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x19f9b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19f9b8: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x19F9B8u;
    SET_GPR_U32(ctx, 31, 0x19F9C0u);
    ctx->pc = 0x19F9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F9B8u;
    // 0x19f9bc: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x19F9B8u, 0x19F9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F9C0u;
label_19f9c0:
    // 0x19f9c0: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x19f9c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x19f9c4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x19f9c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x19f9c8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x19f9c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19f9cc: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x19f9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19f9d0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x19f9d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x19f9d4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x19f9d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19f9d8: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x19F9D8u;
    SET_GPR_U32(ctx, 31, 0x19F9E0u);
    ctx->pc = 0x19F9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F9D8u;
    // 0x19f9dc: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x19F9D8u, 0x19F9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F9E0u;
label_19f9e0:
    // 0x19f9e0: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x19f9e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x19f9e4: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x19f9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19f9e8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x19f9e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19f9ec: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x19F9ECu;
    SET_GPR_U32(ctx, 31, 0x19F9F4u);
    ctx->pc = 0x19F9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F9ECu;
    // 0x19f9f0: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x19F9ECu, 0x19F9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F9F4u;
label_19f9f4:
    // 0x19f9f4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x19f9f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x19f9f8: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x19f9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19f9fc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x19f9fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19fa00: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x19FA00u;
    SET_GPR_U32(ctx, 31, 0x19FA08u);
    ctx->pc = 0x19FA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FA00u;
    // 0x19fa04: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x19FA00u, 0x19FA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FA08u;
label_19fa08:
    // 0x19fa08: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x19fa08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x19fa0c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x19fa0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19fa10: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x19fa10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19fa14: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x19FA14u;
    SET_GPR_U32(ctx, 31, 0x19FA1Cu);
    ctx->pc = 0x19FA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FA14u;
    // 0x19fa18: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x19FA14u, 0x19FA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FA1Cu;
label_19fa1c:
    // 0x19fa1c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x19fa1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x19fa20: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x19fa20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19fa24: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x19fa24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x19fa28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19fa28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fa2c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x19fa2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19fa30: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x19fa30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x19fa34: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x19FA34u;
    {
        const bool branch_taken_0x19fa34 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x19FA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FA34u;
        // 0x19fa38: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fa34) {
            ctx->pc = 0x19FA40u;
            goto label_19fa40;
        }
    }
    ctx->pc = 0x19FA3Cu;
    // 0x19fa3c: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x19fa3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_19fa40:
    // 0x19fa40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19fa40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19fa44: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19FA44u;
    {
        const bool branch_taken_0x19fa44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FA44u;
        // 0x19fa48: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fa44) {
            ctx->pc = 0x19FA5Cu;
            goto label_19fa5c;
        }
    }
    ctx->pc = 0x19FA4Cu;
    // 0x19fa4c: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x19fa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x19fa50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19fa50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19fa54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19FA54u;
    {
        const bool branch_taken_0x19fa54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FA54u;
        // 0x19fa58: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fa54) {
            ctx->pc = 0x19FA60u;
            goto label_19fa60;
        }
    }
    ctx->pc = 0x19FA5Cu;
label_19fa5c:
    // 0x19fa5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19fa5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19fa60:
    // 0x19fa60: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x19fa60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x19fa64: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x19fa64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x19fa68: 0x2501018  mult        $v0, $s2, $s0
    ctx->pc = 0x19fa68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19fa6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19fa6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19fa70: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x19fa70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x19fa74: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x19fa74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x19fa78: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x19fa78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x19fa7c: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x19fa7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x19fa80: 0x26100660  addiu       $s0, $s0, 0x660
    ctx->pc = 0x19fa80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1632));
    // 0x19fa84: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x19FA84u;
    SET_GPR_U32(ctx, 31, 0x19FA8Cu);
    ctx->pc = 0x19FA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FA84u;
    // 0x19fa88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x19FA84u, 0x19FA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FA8Cu;
label_19fa8c:
    // 0x19fa8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fa8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fa90: 0xc05ce66  jal         func_173998
    ctx->pc = 0x19FA90u;
    SET_GPR_U32(ctx, 31, 0x19FA98u);
    ctx->pc = 0x19FA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FA90u;
    // 0x19fa94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173998u, 0x19FA90u, 0x19FA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FA98u;
label_19fa98:
    // 0x19fa98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fa98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fa9c: 0xc051f18  jal         func_147C60
    ctx->pc = 0x19FA9Cu;
    SET_GPR_U32(ctx, 31, 0x19FAA4u);
    ctx->pc = 0x19FAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FA9Cu;
    // 0x19faa0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x19FA9Cu, 0x19FAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FAA4u;
label_19faa4:
    // 0x19faa4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19faa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19faa8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19faa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19faac: 0xc051f22  jal         func_147C88
    ctx->pc = 0x19FAACu;
    SET_GPR_U32(ctx, 31, 0x19FAB4u);
    ctx->pc = 0x19FAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FAACu;
    // 0x19fab0: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x19FAACu, 0x19FAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FAB4u;
label_19fab4:
    // 0x19fab4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x19fab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19fab8: 0xc05ce42  jal         func_173908
    ctx->pc = 0x19FAB8u;
    SET_GPR_U32(ctx, 31, 0x19FAC0u);
    ctx->pc = 0x19FABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FAB8u;
    // 0x19fabc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173908u, 0x19FAB8u, 0x19FAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FAC0u;
label_19fac0:
    // 0x19fac0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x19fac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19fac4: 0xc05ce4e  jal         func_173938
    ctx->pc = 0x19FAC4u;
    SET_GPR_U32(ctx, 31, 0x19FACCu);
    ctx->pc = 0x19FAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FAC4u;
    // 0x19fac8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173938u, 0x19FAC4u, 0x19FACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FACCu;
label_19facc:
    // 0x19facc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19faccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19fad0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19fad0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19fad4: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x19fad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19fad8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fadc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19fadcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fae0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x19fae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x19fae4: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x19fae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x19fae8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x19fae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x19faec: 0xc05ce5a  jal         func_173968
    ctx->pc = 0x19FAECu;
    SET_GPR_U32(ctx, 31, 0x19FAF4u);
    ctx->pc = 0x19FAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FAECu;
    // 0x19faf0: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173968u, 0x19FAECu, 0x19FAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FAF4u;
label_19faf4:
    // 0x19faf4: 0xe6140058  swc1        $f20, 0x58($s0)
    ctx->pc = 0x19faf4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x19faf8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x19faf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19fafc: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x19fafcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19fb00: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x19fb00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19fb04: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x19fb04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19fb08: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19fb08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19fb0c: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x19fb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x19fb10: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x19fb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19fb14: 0x3e00008  jr          $ra
    ctx->pc = 0x19FB14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FB14u;
        // 0x19fb18: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FB14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19FB1Cu;
    // 0x19fb1c: 0x0  nop
    ctx->pc = 0x19fb1cu;
    // NOP
    ctx->pc = 0x19fb20u;
}
