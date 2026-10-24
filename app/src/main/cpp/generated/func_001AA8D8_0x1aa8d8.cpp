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

// Function: func_001AA8D8
// Address: 0x1aa8d8 - 0x1aab10
void func_001AA8D8_0x1aa8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001AA8D8_0x1aa8d8");
#endif

    switch (ctx->pc) {
        case 0x1aa9a4u: goto label_1aa9a4;
        case 0x1aa9b8u: goto label_1aa9b8;
        case 0x1aa9d8u: goto label_1aa9d8;
        case 0x1aa9ecu: goto label_1aa9ec;
        case 0x1aaa00u: goto label_1aaa00;
        case 0x1aaa14u: goto label_1aaa14;
        case 0x1aaa84u: goto label_1aaa84;
        case 0x1aaa90u: goto label_1aaa90;
        case 0x1aaa9cu: goto label_1aaa9c;
        case 0x1aaaacu: goto label_1aaaac;
        case 0x1aaab8u: goto label_1aaab8;
        case 0x1aaac4u: goto label_1aaac4;
        case 0x1aaaecu: goto label_1aaaec;
        default: break;
    }

    ctx->pc = 0x1aa8d8u;

    // 0x1aa8d8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1aa8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1aa8dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1aa8dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa8e0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1aa8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1aa8e4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1aa8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1aa8e8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1aa8e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa8ec: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1aa8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1aa8f0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1aa8f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa8f4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1aa8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1aa8f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1aa8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1aa8fc: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x1aa8fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1aa900: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x1aa900u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x1aa904: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AA904u;
    {
        const bool branch_taken_0x1aa904 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x1AA908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA904u;
        // 0x1aa908: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa904) {
            ctx->pc = 0x1AA910u;
            goto label_1aa910;
        }
    }
    ctx->pc = 0x1AA90Cu;
    // 0x1aa90c: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x1aa90cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1aa910:
    // 0x1aa910: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1aa910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1aa914: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AA914u;
    {
        const bool branch_taken_0x1aa914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA914u;
        // 0x1aa918: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa914) {
            ctx->pc = 0x1AA92Cu;
            goto label_1aa92c;
        }
    }
    ctx->pc = 0x1AA91Cu;
    // 0x1aa91c: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x1aa91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x1aa920: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aa920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1aa924: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AA924u;
    {
        const bool branch_taken_0x1aa924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA924u;
        // 0x1aa928: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa924) {
            ctx->pc = 0x1AA930u;
            goto label_1aa930;
        }
    }
    ctx->pc = 0x1AA92Cu;
label_1aa92c:
    // 0x1aa92c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1aa92cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa930:
    // 0x1aa930: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x1aa930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x1aa934: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1aa934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa938: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1aa938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1aa93c: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x1aa93cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x1aa940: 0x926202b4  lbu         $v0, 0x2B4($s3)
    ctx->pc = 0x1aa940u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x1aa944: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AA944u;
    {
        const bool branch_taken_0x1aa944 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x1AA948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA944u;
        // 0x1aa948: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa944) {
            ctx->pc = 0x1AA954u;
            goto label_1aa954;
        }
    }
    ctx->pc = 0x1AA94Cu;
    // 0x1aa94c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1aa94cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1aa950: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1aa950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aa954:
    // 0x1aa954: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1aa954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1aa958: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AA958u;
    {
        const bool branch_taken_0x1aa958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA958u;
        // 0x1aa95c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa958) {
            ctx->pc = 0x1AA970u;
            goto label_1aa970;
        }
    }
    ctx->pc = 0x1AA960u;
    // 0x1aa960: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x1aa960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x1aa964: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aa964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1aa968: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AA968u;
    {
        const bool branch_taken_0x1aa968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA968u;
        // 0x1aa96c: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa968) {
            ctx->pc = 0x1AA974u;
            goto label_1aa974;
        }
    }
    ctx->pc = 0x1AA970u;
label_1aa970:
    // 0x1aa970: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1aa970u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa974:
    // 0x1aa974: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x1aa974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x1aa978: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1aa978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1aa97c: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x1aa97cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x1aa980: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x1aa980u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1aa984: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1aa984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1aa988: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x1aa988u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1aa98c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1aa98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1aa990: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1aa990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1aa994: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1aa994u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1aa998: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1aa998u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1aa99c: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1AA99Cu;
    SET_GPR_U32(ctx, 31, 0x1AA9A4u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1AA99Cu, 0x1AA9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA9A4u;
label_1aa9a4:
    // 0x1aa9a4: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1aa9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa9a8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1aa9a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1aa9ac: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1aa9acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1aa9b0: 0xc0c7400  jal         func_31D000
    ctx->pc = 0x1AA9B0u;
    SET_GPR_U32(ctx, 31, 0x1AA9B8u);
    ctx->pc = 0x1AA9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA9B0u;
    // 0x1aa9b4: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D000u, 0x1AA9B0u, 0x1AA9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA9B8u;
label_1aa9b8:
    // 0x1aa9b8: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1aa9b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x1aa9bc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1aa9bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1aa9c0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1aa9c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1aa9c4: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1aa9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa9c8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1aa9c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1aa9cc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1aa9ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1aa9d0: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1AA9D0u;
    SET_GPR_U32(ctx, 31, 0x1AA9D8u);
    ctx->pc = 0x1AA9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA9D0u;
    // 0x1aa9d4: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1AA9D0u, 0x1AA9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA9D8u;
label_1aa9d8:
    // 0x1aa9d8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1aa9d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1aa9dc: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1aa9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa9e0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1aa9e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1aa9e4: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1AA9E4u;
    SET_GPR_U32(ctx, 31, 0x1AA9ECu);
    ctx->pc = 0x1AA9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA9E4u;
    // 0x1aa9e8: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1AA9E4u, 0x1AA9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA9ECu;
label_1aa9ec:
    // 0x1aa9ec: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1aa9ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1aa9f0: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1aa9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa9f4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1aa9f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1aa9f8: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1AA9F8u;
    SET_GPR_U32(ctx, 31, 0x1AAA00u);
    ctx->pc = 0x1AA9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA9F8u;
    // 0x1aa9fc: 0xe7a10020  swc1        $f1, 0x20($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1AA9F8u, 0x1AAA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAA00u;
label_1aaa00:
    // 0x1aaa00: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1aaa00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1aaa04: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1aaa04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aaa08: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1aaa08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1aaa0c: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1AAA0Cu;
    SET_GPR_U32(ctx, 31, 0x1AAA14u);
    ctx->pc = 0x1AAA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAA0Cu;
    // 0x1aaa10: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1AAA0Cu, 0x1AAA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAA14u;
label_1aaa14:
    // 0x1aaa14: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1aaa14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1aaa18: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1aaa18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aaa1c: 0x926302b4  lbu         $v1, 0x2B4($s3)
    ctx->pc = 0x1aaa1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 692)));
    // 0x1aaa20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1aaa20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaa24: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1aaa24u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1aaa28: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1aaa28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1aaa2c: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AAA2Cu;
    {
        const bool branch_taken_0x1aaa2c = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x1AAA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAA2Cu;
        // 0x1aaa30: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaa2c) {
            ctx->pc = 0x1AAA38u;
            goto label_1aaa38;
        }
    }
    ctx->pc = 0x1AAA34u;
    // 0x1aaa34: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x1aaa34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1aaa38:
    // 0x1aaa38: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1aaa38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1aaa3c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AAA3Cu;
    {
        const bool branch_taken_0x1aaa3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAA3Cu;
        // 0x1aaa40: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaa3c) {
            ctx->pc = 0x1AAA54u;
            goto label_1aaa54;
        }
    }
    ctx->pc = 0x1AAA44u;
    // 0x1aaa44: 0x8e630278  lw          $v1, 0x278($s3)
    ctx->pc = 0x1aaa44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 632)));
    // 0x1aaa48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aaa48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1aaa4c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AAA4Cu;
    {
        const bool branch_taken_0x1aaa4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAA4Cu;
        // 0x1aaa50: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaa4c) {
            ctx->pc = 0x1AAA58u;
            goto label_1aaa58;
        }
    }
    ctx->pc = 0x1AAA54u;
label_1aaa54:
    // 0x1aaa54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1aaa54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aaa58:
    // 0x1aaa58: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x1aaa58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1aaa5c: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x1aaa5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1aaa60: 0x2501018  mult        $v0, $s2, $s0
    ctx->pc = 0x1aaa60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1aaa64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1aaa64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aaa68: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x1aaa68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x1aaa6c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1aaa6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1aaa70: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1aaa70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1aaa74: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x1aaa74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1aaa78: 0x26100400  addiu       $s0, $s0, 0x400
    ctx->pc = 0x1aaa78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1024));
    // 0x1aaa7c: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x1AAA7Cu;
    SET_GPR_U32(ctx, 31, 0x1AAA84u);
    ctx->pc = 0x1AAA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAA7Cu;
    // 0x1aaa80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1AAA7Cu, 0x1AAA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAA84u;
label_1aaa84:
    // 0x1aaa84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aaa84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaa88: 0xc05ce66  jal         func_173998
    ctx->pc = 0x1AAA88u;
    SET_GPR_U32(ctx, 31, 0x1AAA90u);
    ctx->pc = 0x1AAA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAA88u;
    // 0x1aaa8c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173998u, 0x1AAA88u, 0x1AAA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAA90u;
label_1aaa90:
    // 0x1aaa90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aaa90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaa94: 0xc051f18  jal         func_147C60
    ctx->pc = 0x1AAA94u;
    SET_GPR_U32(ctx, 31, 0x1AAA9Cu);
    ctx->pc = 0x1AAA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAA94u;
    // 0x1aaa98: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x1AAA94u, 0x1AAA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAA9Cu;
label_1aaa9c:
    // 0x1aaa9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aaa9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaaa0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1aaaa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaaa4: 0xc051f22  jal         func_147C88
    ctx->pc = 0x1AAAA4u;
    SET_GPR_U32(ctx, 31, 0x1AAAACu);
    ctx->pc = 0x1AAAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAAA4u;
    // 0x1aaaa8: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x1AAAA4u, 0x1AAAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAAACu;
label_1aaaac:
    // 0x1aaaac: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1aaaacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1aaab0: 0xc05ce42  jal         func_173908
    ctx->pc = 0x1AAAB0u;
    SET_GPR_U32(ctx, 31, 0x1AAAB8u);
    ctx->pc = 0x1AAAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAAB0u;
    // 0x1aaab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173908u, 0x1AAAB0u, 0x1AAAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAAB8u;
label_1aaab8:
    // 0x1aaab8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1aaab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1aaabc: 0xc05ce4e  jal         func_173938
    ctx->pc = 0x1AAABCu;
    SET_GPR_U32(ctx, 31, 0x1AAAC4u);
    ctx->pc = 0x1AAAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAABCu;
    // 0x1aaac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173938u, 0x1AAABCu, 0x1AAAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAAC4u;
label_1aaac4:
    // 0x1aaac4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1aaac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1aaac8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1aaac8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aaacc: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1aaaccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1aaad0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aaad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaad4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1aaad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaad8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1aaad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1aaadc: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1aaadcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1aaae0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1aaae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1aaae4: 0xc05ce5a  jal         func_173968
    ctx->pc = 0x1AAAE4u;
    SET_GPR_U32(ctx, 31, 0x1AAAECu);
    ctx->pc = 0x1AAAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAAE4u;
    // 0x1aaae8: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173968u, 0x1AAAE4u, 0x1AAAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAAECu;
label_1aaaec:
    // 0x1aaaec: 0xe6140058  swc1        $f20, 0x58($s0)
    ctx->pc = 0x1aaaecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x1aaaf0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1aaaf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1aaaf4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1aaaf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1aaaf8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1aaaf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1aaafc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1aaafcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1aab00: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1aab00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1aab04: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x1aab04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1aab08: 0x3e00008  jr          $ra
    ctx->pc = 0x1AAB08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAB08u;
        // 0x1aab0c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAB08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AAB10u;
}
