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

// Function: func_001AD0D0
// Address: 0x1ad0d0 - 0x1ad5c8
void func_001AD0D0_0x1ad0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001AD0D0_0x1ad0d0");
#endif

    switch (ctx->pc) {
        case 0x1ad194u: goto label_1ad194;
        case 0x1ad1b4u: goto label_1ad1b4;
        case 0x1ad20cu: goto label_1ad20c;
        case 0x1ad22cu: goto label_1ad22c;
        case 0x1ad56cu: goto label_1ad56c;
        case 0x1ad584u: goto label_1ad584;
        default: break;
    }

    ctx->pc = 0x1ad0d0u;

    // 0x1ad0d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ad0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ad0d4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1ad0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1ad0d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ad0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ad0dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ad0dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad0e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ad0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ad0e4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1ad0e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad0e8: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x1ad0e8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1ad0ec: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1ad0ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1ad0f0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1ad0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1ad0f4: 0x923002f5  lbu         $s0, 0x2F5($s1)
    ctx->pc = 0x1ad0f4u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
    // 0x1ad0f8: 0x12120097  beq         $s0, $s2, . + 4 + (0x97 << 2)
    ctx->pc = 0x1AD0F8u;
    {
        const bool branch_taken_0x1ad0f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x1AD0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD0F8u;
        // 0x1ad0fc: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad0f8) {
            ctx->pc = 0x1AD358u;
            goto label_1ad358;
        }
    }
    ctx->pc = 0x1AD100u;
    // 0x1ad100: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AD100u;
    {
        const bool branch_taken_0x1ad100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad100) {
            ctx->pc = 0x1AD104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD100u;
            // 0x1ad104: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD118u;
            goto label_1ad118;
        }
    }
    ctx->pc = 0x1AD108u;
    // 0x1ad108: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AD108u;
    {
        const bool branch_taken_0x1ad108 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD108u;
        // 0x1ad10c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad108) {
            ctx->pc = 0x1AD130u;
            goto label_1ad130;
        }
    }
    ctx->pc = 0x1AD110u;
    // 0x1ad110: 0x10000126  b           . + 4 + (0x126 << 2)
    ctx->pc = 0x1AD110u;
    {
        const bool branch_taken_0x1ad110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD110u;
        // 0x1ad114: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad110) {
            ctx->pc = 0x1AD5ACu;
            goto label_1ad5ac;
        }
    }
    ctx->pc = 0x1AD118u;
label_1ad118:
    // 0x1ad118: 0x12020103  beq         $s0, $v0, . + 4 + (0x103 << 2)
    ctx->pc = 0x1AD118u;
    {
        const bool branch_taken_0x1ad118 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AD11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD118u;
        // 0x1ad11c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad118) {
            ctx->pc = 0x1AD528u;
            goto label_1ad528;
        }
    }
    ctx->pc = 0x1AD120u;
    // 0x1ad120: 0x12020116  beq         $s0, $v0, . + 4 + (0x116 << 2)
    ctx->pc = 0x1AD120u;
    {
        const bool branch_taken_0x1ad120 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ad120) {
            ctx->pc = 0x1AD57Cu;
            goto label_1ad57c;
        }
    }
    ctx->pc = 0x1AD128u;
    // 0x1ad128: 0x1000011f  b           . + 4 + (0x11F << 2)
    ctx->pc = 0x1AD128u;
    {
        const bool branch_taken_0x1ad128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD128u;
        // 0x1ad12c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad128) {
            ctx->pc = 0x1AD5A8u;
            goto label_1ad5a8;
        }
    }
    ctx->pc = 0x1AD130u;
label_1ad130:
    // 0x1ad130: 0x9222060d  lbu         $v0, 0x60D($s1)
    ctx->pc = 0x1ad130u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1549)));
    // 0x1ad134: 0x5052011d  beql        $v0, $s2, . + 4 + (0x11D << 2)
    ctx->pc = 0x1AD134u;
    {
        const bool branch_taken_0x1ad134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x1ad134) {
            ctx->pc = 0x1AD138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD134u;
            // 0x1ad138: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD5ACu;
            goto label_1ad5ac;
        }
    }
    ctx->pc = 0x1AD13Cu;
    // 0x1ad13c: 0x8e220600  lw          $v0, 0x600($s1)
    ctx->pc = 0x1ad13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1ad140: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1AD140u;
    {
        const bool branch_taken_0x1ad140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD140u;
        // 0x1ad144: 0xa232060e  sb          $s2, 0x60E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1550), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad140) {
            ctx->pc = 0x1AD1BCu;
            goto label_1ad1bc;
        }
    }
    ctx->pc = 0x1AD148u;
    // 0x1ad148: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ad148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1ad14c: 0x26300630  addiu       $s0, $s1, 0x630
    ctx->pc = 0x1ad14cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1584));
    // 0x1ad150: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ad150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ad154: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1ad154u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1ad158: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad15c: 0xc6200790  lwc1        $f0, 0x790($s1)
    ctx->pc = 0x1ad15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ad160: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ad160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad164: 0xc7b50000  lwc1        $f21, 0x0($sp)
    ctx->pc = 0x1ad164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ad168: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1ad168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ad16c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1ad16cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1ad170: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ad170u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1ad174: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ad174u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ad178: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x1ad178u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1ad17c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1ad17cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1ad180: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1ad180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1ad184: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1ad184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1ad188: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x1ad188u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad18c: 0xc071a26  jal         func_1C6898
    ctx->pc = 0x1AD18Cu;
    SET_GPR_U32(ctx, 31, 0x1AD194u);
    ctx->pc = 0x1AD190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD18Cu;
    // 0x1ad190: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6898u, 0x1AD18Cu, 0x1AD194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD194u;
label_1ad194:
    // 0x1ad194: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1ad194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1ad198: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1ad198u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1ad19c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad1a0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1ad1a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1ad1a4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1ad1a4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1ad1a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ad1a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad1ac: 0xc071f54  jal         func_1C7D50
    ctx->pc = 0x1AD1ACu;
    SET_GPR_U32(ctx, 31, 0x1AD1B4u);
    ctx->pc = 0x1AD1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD1ACu;
    // 0x1ad1b0: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7D50u, 0x1AD1ACu, 0x1AD1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD1B4u;
label_1ad1b4:
    // 0x1ad1b4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1AD1B4u;
    {
        const bool branch_taken_0x1ad1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD1B4u;
        // 0x1ad1b8: 0x8e2305b8  lw          $v1, 0x5B8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad1b4) {
            ctx->pc = 0x1AD230u;
            goto label_1ad230;
        }
    }
    ctx->pc = 0x1AD1BCu;
label_1ad1bc:
    // 0x1ad1bc: 0xc6200790  lwc1        $f0, 0x790($s1)
    ctx->pc = 0x1ad1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ad1c0: 0x26300630  addiu       $s0, $s1, 0x630
    ctx->pc = 0x1ad1c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1584));
    // 0x1ad1c4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ad1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1ad1c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad1cc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1ad1ccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1ad1d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ad1d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ad1d4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1ad1d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1ad1d8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1ad1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ad1dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ad1dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad1e0: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1ad1e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1ad1e4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ad1e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1ad1e8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ad1e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ad1ec: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1ad1ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ad1f0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1ad1f0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1ad1f4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1ad1f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1ad1f8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1ad1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1ad1fc: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x1ad1fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1ad200: 0xe7b5000c  swc1        $f21, 0xC($sp)
    ctx->pc = 0x1ad200u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1ad204: 0xc071a26  jal         func_1C6898
    ctx->pc = 0x1AD204u;
    SET_GPR_U32(ctx, 31, 0x1AD20Cu);
    ctx->pc = 0x1AD208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD204u;
    // 0x1ad208: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6898u, 0x1AD204u, 0x1AD20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD20Cu;
label_1ad20c:
    // 0x1ad20c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1ad20cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1ad210: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1ad210u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1ad214: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ad214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad218: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1ad218u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1ad21c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1ad21cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1ad220: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ad220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad224: 0xc071f54  jal         func_1C7D50
    ctx->pc = 0x1AD224u;
    SET_GPR_U32(ctx, 31, 0x1AD22Cu);
    ctx->pc = 0x1AD228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD224u;
    // 0x1ad228: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7D50u, 0x1AD224u, 0x1AD22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD22Cu;
label_1ad22c:
    // 0x1ad22c: 0x8e2305b8  lw          $v1, 0x5B8($s1)
    ctx->pc = 0x1ad22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
label_1ad230:
    // 0x1ad230: 0x2404feff  addiu       $a0, $zero, -0x101
    ctx->pc = 0x1ad230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x1ad234: 0x922502b4  lbu         $a1, 0x2B4($s1)
    ctx->pc = 0x1ad234u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1ad238: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ad238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad23c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1ad23cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1ad240: 0xae2305b8  sw          $v1, 0x5B8($s1)
    ctx->pc = 0x1ad240u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1464), GPR_U32(ctx, 3));
    // 0x1ad244: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x1ad244u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1ad248: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD248u;
    {
        const bool branch_taken_0x1ad248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD248u;
        // 0x1ad24c: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad248) {
            ctx->pc = 0x1AD25Cu;
            goto label_1ad25c;
        }
    }
    ctx->pc = 0x1AD250u;
    // 0x1ad250: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1ad250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1ad254: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AD254u;
    {
        const bool branch_taken_0x1ad254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD254u;
        // 0x1ad258: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad254) {
            ctx->pc = 0x1AD260u;
            goto label_1ad260;
        }
    }
    ctx->pc = 0x1AD25Cu;
label_1ad25c:
    // 0x1ad25c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ad25cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad260:
    // 0x1ad260: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1AD260u;
    {
        const bool branch_taken_0x1ad260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD260u;
        // 0x1ad264: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad260) {
            ctx->pc = 0x1AD28Cu;
            goto label_1ad28c;
        }
    }
    ctx->pc = 0x1AD268u;
    // 0x1ad268: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1ad268u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1ad26c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1ad26cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ad270: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD270u;
    {
        const bool branch_taken_0x1ad270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD270u;
        // 0x1ad274: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad270) {
            ctx->pc = 0x1AD284u;
            goto label_1ad284;
        }
    }
    ctx->pc = 0x1AD278u;
    // 0x1ad278: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1ad278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1ad27c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AD27Cu;
    {
        const bool branch_taken_0x1ad27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD27Cu;
        // 0x1ad280: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad27c) {
            ctx->pc = 0x1AD288u;
            goto label_1ad288;
        }
    }
    ctx->pc = 0x1AD284u;
label_1ad284:
    // 0x1ad284: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ad284u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad288:
    // 0x1ad288: 0xac400104  sw          $zero, 0x104($v0)
    ctx->pc = 0x1ad288u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 0));
label_1ad28c:
    // 0x1ad28c: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1ad28cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1ad290: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ad290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ad294: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1ad294u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ad298: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD298u;
    {
        const bool branch_taken_0x1ad298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD298u;
        // 0x1ad29c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad298) {
            ctx->pc = 0x1AD2ACu;
            goto label_1ad2ac;
        }
    }
    ctx->pc = 0x1AD2A0u;
    // 0x1ad2a0: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1ad2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1ad2a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AD2A4u;
    {
        const bool branch_taken_0x1ad2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD2A4u;
        // 0x1ad2a8: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad2a4) {
            ctx->pc = 0x1AD2B0u;
            goto label_1ad2b0;
        }
    }
    ctx->pc = 0x1AD2ACu;
label_1ad2ac:
    // 0x1ad2ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ad2acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad2b0:
    // 0x1ad2b0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1AD2B0u;
    {
        const bool branch_taken_0x1ad2b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD2B0u;
        // 0x1ad2b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad2b0) {
            ctx->pc = 0x1AD2DCu;
            goto label_1ad2dc;
        }
    }
    ctx->pc = 0x1AD2B8u;
    // 0x1ad2b8: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1ad2b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1ad2bc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1ad2bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ad2c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD2C0u;
    {
        const bool branch_taken_0x1ad2c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD2C0u;
        // 0x1ad2c4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad2c0) {
            ctx->pc = 0x1AD2D4u;
            goto label_1ad2d4;
        }
    }
    ctx->pc = 0x1AD2C8u;
    // 0x1ad2c8: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1ad2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1ad2cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AD2CCu;
    {
        const bool branch_taken_0x1ad2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD2CCu;
        // 0x1ad2d0: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad2cc) {
            ctx->pc = 0x1AD2D8u;
            goto label_1ad2d8;
        }
    }
    ctx->pc = 0x1AD2D4u;
label_1ad2d4:
    // 0x1ad2d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ad2d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad2d8:
    // 0x1ad2d8: 0xac400104  sw          $zero, 0x104($v0)
    ctx->pc = 0x1ad2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 0));
label_1ad2dc:
    // 0x1ad2dc: 0x3c013d20  lui         $at, 0x3D20
    ctx->pc = 0x1ad2dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15648 << 16));
    // 0x1ad2e0: 0x3421d97c  ori         $at, $at, 0xD97C
    ctx->pc = 0x1ad2e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55676);
    // 0x1ad2e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ad2e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ad2e8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1ad2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1ad2ec: 0x922402b4  lbu         $a0, 0x2B4($s1)
    ctx->pc = 0x1ad2ecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1ad2f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ad2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad2f4: 0xa623061c  sh          $v1, 0x61C($s1)
    ctx->pc = 0x1ad2f4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1564), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ad2f8: 0xe6200798  swc1        $f0, 0x798($s1)
    ctx->pc = 0x1ad2f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1944), bits); }
    // 0x1ad2fc: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x1ad2fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1ad300: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD300u;
    {
        const bool branch_taken_0x1ad300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD300u;
        // 0x1ad304: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad300) {
            ctx->pc = 0x1AD314u;
            goto label_1ad314;
        }
    }
    ctx->pc = 0x1AD308u;
    // 0x1ad308: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1ad308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1ad30c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AD30Cu;
    {
        const bool branch_taken_0x1ad30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD30Cu;
        // 0x1ad310: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad30c) {
            ctx->pc = 0x1AD318u;
            goto label_1ad318;
        }
    }
    ctx->pc = 0x1AD314u;
label_1ad314:
    // 0x1ad314: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ad314u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad318:
    // 0x1ad318: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1AD318u;
    {
        const bool branch_taken_0x1ad318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD318u;
        // 0x1ad31c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad318) {
            ctx->pc = 0x1AD348u;
            goto label_1ad348;
        }
    }
    ctx->pc = 0x1AD320u;
    // 0x1ad320: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1ad320u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1ad324: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1ad324u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ad328: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD328u;
    {
        const bool branch_taken_0x1ad328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD328u;
        // 0x1ad32c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad328) {
            ctx->pc = 0x1AD33Cu;
            goto label_1ad33c;
        }
    }
    ctx->pc = 0x1AD330u;
    // 0x1ad330: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1ad330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1ad334: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AD334u;
    {
        const bool branch_taken_0x1ad334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD334u;
        // 0x1ad338: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad334) {
            ctx->pc = 0x1AD340u;
            goto label_1ad340;
        }
    }
    ctx->pc = 0x1AD33Cu;
label_1ad33c:
    // 0x1ad33c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ad33cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad340:
    // 0x1ad340: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AD340u;
    {
        const bool branch_taken_0x1ad340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD340u;
        // 0x1ad344: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad340) {
            ctx->pc = 0x1AD34Cu;
            goto label_1ad34c;
        }
    }
    ctx->pc = 0x1AD348u;
label_1ad348:
    // 0x1ad348: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ad348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ad34c:
    // 0x1ad34c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1ad34cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ad350: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x1ad350u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ad354: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1ad354u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_1ad358:
    // 0x1ad358: 0xc6200798  lwc1        $f0, 0x798($s1)
    ctx->pc = 0x1ad358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ad35c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ad35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad360: 0x3c013d56  lui         $at, 0x3D56
    ctx->pc = 0x1ad360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15702 << 16));
    // 0x1ad364: 0x34217750  ori         $at, $at, 0x7750
    ctx->pc = 0x1ad364u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30544);
    // 0x1ad368: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ad368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ad36c: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1ad36cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1ad370: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ad370u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ad374: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1ad374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1ad378: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1ad378u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ad37c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD37Cu;
    {
        const bool branch_taken_0x1ad37c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD37Cu;
        // 0x1ad380: 0xe6200798  swc1        $f0, 0x798($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1944), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad37c) {
            ctx->pc = 0x1AD390u;
            goto label_1ad390;
        }
    }
    ctx->pc = 0x1AD384u;
    // 0x1ad384: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1ad384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1ad388: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AD388u;
    {
        const bool branch_taken_0x1ad388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD388u;
        // 0x1ad38c: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad388) {
            ctx->pc = 0x1AD394u;
            goto label_1ad394;
        }
    }
    ctx->pc = 0x1AD390u;
label_1ad390:
    // 0x1ad390: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ad390u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad394:
    // 0x1ad394: 0xc4400108  lwc1        $f0, 0x108($v0)
    ctx->pc = 0x1ad394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ad398: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ad398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ad39c: 0xc6210798  lwc1        $f1, 0x798($s1)
    ctx->pc = 0x1ad39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ad3a0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ad3a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1ad3a4: 0xe4400108  swc1        $f0, 0x108($v0)
    ctx->pc = 0x1ad3a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 264), bits); }
    // 0x1ad3a8: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1ad3a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1ad3ac: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1ad3acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ad3b0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD3B0u;
    {
        const bool branch_taken_0x1ad3b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD3B0u;
        // 0x1ad3b4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad3b0) {
            ctx->pc = 0x1AD3C4u;
            goto label_1ad3c4;
        }
    }
    ctx->pc = 0x1AD3B8u;
    // 0x1ad3b8: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1ad3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1ad3bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AD3BCu;
    {
        const bool branch_taken_0x1ad3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD3BCu;
        // 0x1ad3c0: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad3bc) {
            ctx->pc = 0x1AD3C8u;
            goto label_1ad3c8;
        }
    }
    ctx->pc = 0x1AD3C4u;
label_1ad3c4:
    // 0x1ad3c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ad3c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad3c8:
    // 0x1ad3c8: 0xc4400108  lwc1        $f0, 0x108($v0)
    ctx->pc = 0x1ad3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ad3cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ad3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad3d0: 0xc6210798  lwc1        $f1, 0x798($s1)
    ctx->pc = 0x1ad3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ad3d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ad3d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ad3d8: 0xe4400108  swc1        $f0, 0x108($v0)
    ctx->pc = 0x1ad3d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 264), bits); }
    // 0x1ad3dc: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1ad3dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1ad3e0: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1ad3e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ad3e4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD3E4u;
    {
        const bool branch_taken_0x1ad3e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD3E4u;
        // 0x1ad3e8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad3e4) {
            ctx->pc = 0x1AD3F8u;
            goto label_1ad3f8;
        }
    }
    ctx->pc = 0x1AD3ECu;
    // 0x1ad3ec: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1ad3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1ad3f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AD3F0u;
    {
        const bool branch_taken_0x1ad3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD3F0u;
        // 0x1ad3f4: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad3f0) {
            ctx->pc = 0x1AD3FCu;
            goto label_1ad3fc;
        }
    }
    ctx->pc = 0x1AD3F8u;
label_1ad3f8:
    // 0x1ad3f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ad3f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad3fc:
    // 0x1ad3fc: 0xc4410108  lwc1        $f1, 0x108($v0)
    ctx->pc = 0x1ad3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ad400: 0x3c01bf75  lui         $at, 0xBF75
    ctx->pc = 0x1ad400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49013 << 16));
    // 0x1ad404: 0x3421be0b  ori         $at, $at, 0xBE0B
    ctx->pc = 0x1ad404u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48651);
    // 0x1ad408: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ad408u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ad40c: 0x0  nop
    ctx->pc = 0x1ad40cu;
    // NOP
    // 0x1ad410: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ad410u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ad414: 0x0  nop
    ctx->pc = 0x1ad414u;
    // NOP
    // 0x1ad418: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x1AD418u;
    {
        const bool branch_taken_0x1ad418 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AD41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD418u;
        // 0x1ad41c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad418) {
            ctx->pc = 0x1AD498u;
            goto label_1ad498;
        }
    }
    ctx->pc = 0x1AD420u;
    // 0x1ad420: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1ad420u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1ad424: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1ad424u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ad428: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD428u;
    {
        const bool branch_taken_0x1ad428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD428u;
        // 0x1ad42c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad428) {
            ctx->pc = 0x1AD43Cu;
            goto label_1ad43c;
        }
    }
    ctx->pc = 0x1AD430u;
    // 0x1ad430: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1ad430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1ad434: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1AD434u;
    {
        const bool branch_taken_0x1ad434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD434u;
        // 0x1ad438: 0x8c430004  lw          $v1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad434) {
            ctx->pc = 0x1AD44Cu;
            goto label_1ad44c;
        }
    }
    ctx->pc = 0x1AD43Cu;
label_1ad43c:
    // 0x1ad43c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1ad43cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad440: 0x3c01bf75  lui         $at, 0xBF75
    ctx->pc = 0x1ad440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49013 << 16));
    // 0x1ad444: 0x3421be0b  ori         $at, $at, 0xBE0B
    ctx->pc = 0x1ad444u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48651);
    // 0x1ad448: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ad448u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ad44c:
    // 0x1ad44c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ad44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ad450: 0xe4600108  swc1        $f0, 0x108($v1)
    ctx->pc = 0x1ad450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 264), bits); }
    // 0x1ad454: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1ad454u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1ad458: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1ad458u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ad45c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD45Cu;
    {
        const bool branch_taken_0x1ad45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD45Cu;
        // 0x1ad460: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad45c) {
            ctx->pc = 0x1AD470u;
            goto label_1ad470;
        }
    }
    ctx->pc = 0x1AD464u;
    // 0x1ad464: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1ad464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1ad468: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AD468u;
    {
        const bool branch_taken_0x1ad468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD468u;
        // 0x1ad46c: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad468) {
            ctx->pc = 0x1AD474u;
            goto label_1ad474;
        }
    }
    ctx->pc = 0x1AD470u;
label_1ad470:
    // 0x1ad470: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ad470u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad474:
    // 0x1ad474: 0x3c013f75  lui         $at, 0x3F75
    ctx->pc = 0x1ad474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16245 << 16));
    // 0x1ad478: 0x3421be0b  ori         $at, $at, 0xBE0B
    ctx->pc = 0x1ad478u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48651);
    // 0x1ad47c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ad47cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ad480: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x1ad480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x1ad484: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ad484u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ad488: 0xe4400108  swc1        $f0, 0x108($v0)
    ctx->pc = 0x1ad488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 264), bits); }
    // 0x1ad48c: 0xc6210798  lwc1        $f1, 0x798($s1)
    ctx->pc = 0x1ad48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ad490: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1ad490u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1ad494: 0xe6210798  swc1        $f1, 0x798($s1)
    ctx->pc = 0x1ad494u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1944), bits); }
label_1ad498:
    // 0x1ad498: 0x8622061c  lh          $v0, 0x61C($s1)
    ctx->pc = 0x1ad498u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1564)));
    // 0x1ad49c: 0x4430034  bgezl       $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1AD49Cu;
    {
        const bool branch_taken_0x1ad49c = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x1ad49c) {
            ctx->pc = 0x1AD4A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD49Cu;
            // 0x1ad4a0: 0x9622061c  lhu         $v0, 0x61C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1564)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD570u;
            goto label_1ad570;
        }
    }
    ctx->pc = 0x1AD4A4u;
    // 0x1ad4a4: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1ad4a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1ad4a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ad4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad4ac: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1ad4acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ad4b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD4B0u;
    {
        const bool branch_taken_0x1ad4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD4B0u;
        // 0x1ad4b4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad4b0) {
            ctx->pc = 0x1AD4C4u;
            goto label_1ad4c4;
        }
    }
    ctx->pc = 0x1AD4B8u;
    // 0x1ad4b8: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1ad4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1ad4bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AD4BCu;
    {
        const bool branch_taken_0x1ad4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD4BCu;
        // 0x1ad4c0: 0x8c430004  lw          $v1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad4bc) {
            ctx->pc = 0x1AD4C8u;
            goto label_1ad4c8;
        }
    }
    ctx->pc = 0x1AD4C4u;
label_1ad4c4:
    // 0x1ad4c4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1ad4c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad4c8:
    // 0x1ad4c8: 0x3c01bf75  lui         $at, 0xBF75
    ctx->pc = 0x1ad4c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49013 << 16));
    // 0x1ad4cc: 0x3421be0b  ori         $at, $at, 0xBE0B
    ctx->pc = 0x1ad4ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48651);
    // 0x1ad4d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ad4d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ad4d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ad4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ad4d8: 0xe4600108  swc1        $f0, 0x108($v1)
    ctx->pc = 0x1ad4d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 264), bits); }
    // 0x1ad4dc: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1ad4dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1ad4e0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1ad4e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ad4e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD4E4u;
    {
        const bool branch_taken_0x1ad4e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD4E4u;
        // 0x1ad4e8: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad4e4) {
            ctx->pc = 0x1AD4F8u;
            goto label_1ad4f8;
        }
    }
    ctx->pc = 0x1AD4ECu;
    // 0x1ad4ec: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1ad4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1ad4f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AD4F0u;
    {
        const bool branch_taken_0x1ad4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD4F0u;
        // 0x1ad4f4: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad4f0) {
            ctx->pc = 0x1AD4FCu;
            goto label_1ad4fc;
        }
    }
    ctx->pc = 0x1AD4F8u;
label_1ad4f8:
    // 0x1ad4f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ad4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad4fc:
    // 0x1ad4fc: 0x3c013f75  lui         $at, 0x3F75
    ctx->pc = 0x1ad4fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16245 << 16));
    // 0x1ad500: 0x3421be0b  ori         $at, $at, 0xBE0B
    ctx->pc = 0x1ad500u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48651);
    // 0x1ad504: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ad504u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ad508: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1ad508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ad50c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ad50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ad510: 0xe4800108  swc1        $f0, 0x108($a0)
    ctx->pc = 0x1ad510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 264), bits); }
    // 0x1ad514: 0xa622061c  sh          $v0, 0x61C($s1)
    ctx->pc = 0x1ad514u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1564), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ad518: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x1ad518u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ad51c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1ad51cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ad520: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1AD520u;
    {
        const bool branch_taken_0x1ad520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD520u;
        // 0x1ad524: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad520) {
            ctx->pc = 0x1AD56Cu;
            goto label_1ad56c;
        }
    }
    ctx->pc = 0x1AD528u;
label_1ad528:
    // 0x1ad528: 0x8622061c  lh          $v0, 0x61C($s1)
    ctx->pc = 0x1ad528u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1564)));
    // 0x1ad52c: 0x4430010  bgezl       $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1AD52Cu;
    {
        const bool branch_taken_0x1ad52c = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x1ad52c) {
            ctx->pc = 0x1AD530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD52Cu;
            // 0x1ad530: 0x9622061c  lhu         $v0, 0x61C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1564)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD570u;
            goto label_1ad570;
        }
    }
    ctx->pc = 0x1AD534u;
    // 0x1ad534: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ad534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ad538: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1ad538u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1ad53c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1ad53cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ad540: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1ad540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1ad544: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1ad544u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ad548: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ad548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ad54c: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x1ad54cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ad550: 0x24060084  addiu       $a2, $zero, 0x84
    ctx->pc = 0x1ad550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x1ad554: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1ad554u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad558: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ad558u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad55c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ad55cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad560: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ad560u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad564: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1AD564u;
    SET_GPR_U32(ctx, 31, 0x1AD56Cu);
    ctx->pc = 0x1AD568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD564u;
    // 0x1ad568: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1AD564u, 0x1AD56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD56Cu;
label_1ad56c:
    // 0x1ad56c: 0x9622061c  lhu         $v0, 0x61C($s1)
    ctx->pc = 0x1ad56cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1564)));
label_1ad570:
    // 0x1ad570: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ad570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ad574: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1AD574u;
    {
        const bool branch_taken_0x1ad574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD574u;
        // 0x1ad578: 0xa622061c  sh          $v0, 0x61C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1564), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad574) {
            ctx->pc = 0x1AD5A4u;
            goto label_1ad5a4;
        }
    }
    ctx->pc = 0x1AD57Cu;
label_1ad57c:
    // 0x1ad57c: 0xc070fce  jal         func_1C3F38
    ctx->pc = 0x1AD57Cu;
    SET_GPR_U32(ctx, 31, 0x1AD584u);
    ctx->pc = 0x1AD580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD57Cu;
    // 0x1ad580: 0x26240630  addiu       $a0, $s1, 0x630 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3F38u, 0x1AD57Cu, 0x1AD584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD584u;
label_1ad584:
    // 0x1ad584: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AD584u;
    {
        const bool branch_taken_0x1ad584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad584) {
            ctx->pc = 0x1AD588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD584u;
            // 0x1ad588: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD5A8u;
            goto label_1ad5a8;
        }
    }
    ctx->pc = 0x1AD58Cu;
    // 0x1ad58c: 0xa232060d  sb          $s2, 0x60D($s1)
    ctx->pc = 0x1ad58cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1549), (uint8_t)GPR_U32(ctx, 18));
    // 0x1ad590: 0xa23002f4  sb          $s0, 0x2F4($s1)
    ctx->pc = 0x1ad590u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 16));
    // 0x1ad594: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1ad594u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ad598: 0xa220060e  sb          $zero, 0x60E($s1)
    ctx->pc = 0x1ad598u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1550), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ad59c: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x1ad59cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ad5a0: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1ad5a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_1ad5a4:
    // 0x1ad5a4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1ad5a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ad5a8:
    // 0x1ad5a8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1ad5a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ad5ac:
    // 0x1ad5ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ad5acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ad5b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ad5b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad5b4: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x1ad5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ad5b8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1ad5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ad5bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD5BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD5BCu;
        // 0x1ad5c0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD5BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD5C4u;
    // 0x1ad5c4: 0x0  nop
    ctx->pc = 0x1ad5c4u;
    // NOP
    ctx->pc = 0x1ad5c8u;
}
