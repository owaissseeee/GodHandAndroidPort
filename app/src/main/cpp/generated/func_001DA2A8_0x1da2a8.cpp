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

// Function: func_001DA2A8
// Address: 0x1da2a8 - 0x1da4e8
void func_001DA2A8_0x1da2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DA2A8_0x1da2a8");
#endif

    switch (ctx->pc) {
        case 0x1da2f8u: goto label_1da2f8;
        case 0x1da338u: goto label_1da338;
        case 0x1da360u: goto label_1da360;
        case 0x1da398u: goto label_1da398;
        case 0x1da400u: goto label_1da400;
        case 0x1da45cu: goto label_1da45c;
        case 0x1da468u: goto label_1da468;
        case 0x1da474u: goto label_1da474;
        case 0x1da480u: goto label_1da480;
        default: break;
    }

    ctx->pc = 0x1da2a8u;

    // 0x1da2a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1da2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1da2ac: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1da2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1da2b0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1da2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1da2b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1da2b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da2b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1da2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1da2bc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1da2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1da2c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1da2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1da2c4: 0x92033025  lbu         $v1, 0x3025($s0)
    ctx->pc = 0x1da2c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12325)));
    // 0x1da2c8: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1da2c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1da2cc: 0x1040007e  beqz        $v0, . + 4 + (0x7E << 2)
    ctx->pc = 0x1DA2CCu;
    {
        const bool branch_taken_0x1da2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA2CCu;
        // 0x1da2d0: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da2cc) {
            ctx->pc = 0x1DA4C8u;
            goto label_1da4c8;
        }
    }
    ctx->pc = 0x1DA2D4u;
    // 0x1da2d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1da2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1da2d8: 0x2442b340  addiu       $v0, $v0, -0x4CC0
    ctx->pc = 0x1da2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947648));
    // 0x1da2dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1da2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1da2e0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1da2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1da2e4: 0x800008  jr          $a0
    ctx->pc = 0x1DA2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DA2ECu: goto label_1da2ec;
            case 0x1DA304u: goto label_1da304;
            case 0x1DA37Cu: goto label_1da37c;
            case 0x1DA3F8u: goto label_1da3f8;
            case 0x1DA498u: goto label_1da498;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA2E4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1DA2ECu;
label_1da2ec:
    // 0x1da2ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da2f0: 0xc077a16  jal         func_1DE858
    ctx->pc = 0x1DA2F0u;
    SET_GPR_U32(ctx, 31, 0x1DA2F8u);
    ctx->pc = 0x1DA2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA2F0u;
    // 0x1da2f4: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE858u, 0x1DA2F0u, 0x1DA2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA2F8u;
label_1da2f8:
    // 0x1da2f8: 0x92023025  lbu         $v0, 0x3025($s0)
    ctx->pc = 0x1da2f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12325)));
    // 0x1da2fc: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x1DA2FCu;
    {
        const bool branch_taken_0x1da2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA2FCu;
        // 0x1da300: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da2fc) {
            ctx->pc = 0x1DA488u;
            goto label_1da488;
        }
    }
    ctx->pc = 0x1DA304u;
label_1da304:
    // 0x1da304: 0x8e023028  lw          $v0, 0x3028($s0)
    ctx->pc = 0x1da304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12328)));
    // 0x1da308: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA308u;
    {
        const bool branch_taken_0x1da308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA308u;
        // 0x1da30c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da308) {
            ctx->pc = 0x1DA318u;
            goto label_1da318;
        }
    }
    ctx->pc = 0x1DA310u;
    // 0x1da310: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA310u;
    {
        const bool branch_taken_0x1da310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA310u;
        // 0x1da314: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da310) {
            ctx->pc = 0x1DA320u;
            goto label_1da320;
        }
    }
    ctx->pc = 0x1DA318u;
label_1da318:
    // 0x1da318: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1da318u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da31c: 0xae023028  sw          $v0, 0x3028($s0)
    ctx->pc = 0x1da31cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12328), GPR_U32(ctx, 2));
label_1da320:
    // 0x1da320: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1da320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1da324: 0x10400068  beqz        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x1DA324u;
    {
        const bool branch_taken_0x1da324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA324u;
        // 0x1da328: 0x3c130060  lui         $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da324) {
            ctx->pc = 0x1DA4C8u;
            goto label_1da4c8;
        }
    }
    ctx->pc = 0x1DA32Cu;
    // 0x1da32c: 0x26113004  addiu       $s1, $s0, 0x3004
    ctx->pc = 0x1da32cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12292));
    // 0x1da330: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x1da330u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1da334: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1da334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1da338:
    // 0x1da338: 0x2664ee00  addiu       $a0, $s3, -0x1200
    ctx->pc = 0x1da338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294962688));
    // 0x1da33c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1da33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1da340: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1da340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da344: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1da344u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1da348: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1da348u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da34c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1da34cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da350: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1da350u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da354: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1da354u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da358: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1DA358u;
    SET_GPR_U32(ctx, 31, 0x1DA360u);
    ctx->pc = 0x1DA35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA358u;
    // 0x1da35c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1DA358u, 0x1DA360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA360u;
label_1da360:
    // 0x1da360: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1da360u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1da364: 0x643fff4  bgezl       $s2, . + 4 + (-0xC << 2)
    ctx->pc = 0x1DA364u;
    {
        const bool branch_taken_0x1da364 = (GPR_S64(ctx, 18) >= 0);
        if (branch_taken_0x1da364) {
            ctx->pc = 0x1DA368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DA364u;
            // 0x1da368: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DA338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da338;
        }
    }
    ctx->pc = 0x1DA36Cu;
    // 0x1da36c: 0x92023025  lbu         $v0, 0x3025($s0)
    ctx->pc = 0x1da36cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12325)));
    // 0x1da370: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1da370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1da374: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1DA374u;
    {
        const bool branch_taken_0x1da374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA374u;
        // 0x1da378: 0xae03302c  sw          $v1, 0x302C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12332), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da374) {
            ctx->pc = 0x1DA48Cu;
            goto label_1da48c;
        }
    }
    ctx->pc = 0x1DA37Cu;
label_1da37c:
    // 0x1da37c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1da37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x1da380: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x1da380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x1da384: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1da384u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1da388: 0x24468170  addiu       $a2, $v0, -0x7E90
    ctx->pc = 0x1da388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934896));
    // 0x1da38c: 0x26043004  addiu       $a0, $s0, 0x3004
    ctx->pc = 0x1da38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12292));
    // 0x1da390: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1da390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1da394: 0x0  nop
    ctx->pc = 0x1da394u;
    // NOP
label_1da398:
    // 0x1da398: 0xc600302c  lwc1        $f0, 0x302C($s0)
    ctx->pc = 0x1da398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da39c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1da39cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1da3a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1da3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1da3a4: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x1da3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da3a8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1da3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1da3ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1da3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1da3b0: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1da3b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1da3b4: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1da3b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1da3b8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1da3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1da3bc: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x1da3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x1da3c0: 0x0  nop
    ctx->pc = 0x1da3c0u;
    // NOP
    // 0x1da3c4: 0x0  nop
    ctx->pc = 0x1da3c4u;
    // NOP
    // 0x1da3c8: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1da3c8u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x1da3cc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1da3ccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1da3d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1da3d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1da3d4: 0x4a1fff0  bgez        $a1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1DA3D4u;
    {
        const bool branch_taken_0x1da3d4 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x1DA3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA3D4u;
        // 0x1da3d8: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da3d4) {
            ctx->pc = 0x1DA398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da398;
        }
    }
    ctx->pc = 0x1DA3DCu;
    // 0x1da3dc: 0x8e02302c  lw          $v0, 0x302C($s0)
    ctx->pc = 0x1da3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12332)));
    // 0x1da3e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA3E0u;
    {
        const bool branch_taken_0x1da3e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA3E0u;
        // 0x1da3e4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da3e0) {
            ctx->pc = 0x1DA3F0u;
            goto label_1da3f0;
        }
    }
    ctx->pc = 0x1DA3E8u;
    // 0x1da3e8: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1DA3E8u;
    {
        const bool branch_taken_0x1da3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA3E8u;
        // 0x1da3ec: 0x92023025  lbu         $v0, 0x3025($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12325)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da3e8) {
            ctx->pc = 0x1DA48Cu;
            goto label_1da48c;
        }
    }
    ctx->pc = 0x1DA3F0u;
label_1da3f0:
    // 0x1da3f0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1DA3F0u;
    {
        const bool branch_taken_0x1da3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA3F0u;
        // 0x1da3f4: 0xae02302c  sw          $v0, 0x302C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12332), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da3f0) {
            ctx->pc = 0x1DA4C8u;
            goto label_1da4c8;
        }
    }
    ctx->pc = 0x1DA3F8u;
label_1da3f8:
    // 0x1da3f8: 0x26053004  addiu       $a1, $s0, 0x3004
    ctx->pc = 0x1da3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12292));
    // 0x1da3fc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1da3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1da400:
    // 0x1da400: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1da400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1da404: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1da404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1da408: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1da408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1da40c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1da40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1da410: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x1da410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x1da414: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1da414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1da418: 0x4c1fff9  bgez        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1DA418u;
    {
        const bool branch_taken_0x1da418 = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x1DA41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA418u;
        // 0x1da41c: 0xac620250  sw          $v0, 0x250($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da418) {
            ctx->pc = 0x1DA400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da400;
        }
    }
    ctx->pc = 0x1DA420u;
    // 0x1da420: 0x9e023020  lwu         $v0, 0x3020($s0)
    ctx->pc = 0x1da420u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12320)));
    // 0x1da424: 0x210bb  dsra        $v0, $v0, 2
    ctx->pc = 0x1da424u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 2);
    // 0x1da428: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1da428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1da42c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DA42Cu;
    {
        const bool branch_taken_0x1da42c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA42Cu;
        // 0x1da430: 0x8e043020  lw          $a0, 0x3020($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da42c) {
            ctx->pc = 0x1DA450u;
            goto label_1da450;
        }
    }
    ctx->pc = 0x1DA434u;
    // 0x1da434: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x1da434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1da438: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1da438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1da43c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1da43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1da440: 0xa2033024  sb          $v1, 0x3024($s0)
    ctx->pc = 0x1da440u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12324), (uint8_t)GPR_U32(ctx, 3));
    // 0x1da444: 0xae023020  sw          $v0, 0x3020($s0)
    ctx->pc = 0x1da444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12320), GPR_U32(ctx, 2));
    // 0x1da448: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1DA448u;
    {
        const bool branch_taken_0x1da448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA448u;
        // 0x1da44c: 0xa2003025  sb          $zero, 0x3025($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 12325), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da448) {
            ctx->pc = 0x1DA4C8u;
            goto label_1da4c8;
        }
    }
    ctx->pc = 0x1DA450u;
label_1da450:
    // 0x1da450: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da454: 0xc0775dc  jal         func_1DD770
    ctx->pc = 0x1DA454u;
    SET_GPR_U32(ctx, 31, 0x1DA45Cu);
    ctx->pc = 0x1DA458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA454u;
    // 0x1da458: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD770u, 0x1DA454u, 0x1DA45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA45Cu;
label_1da45c:
    // 0x1da45c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da45cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da460: 0xc077610  jal         func_1DD840
    ctx->pc = 0x1DA460u;
    SET_GPR_U32(ctx, 31, 0x1DA468u);
    ctx->pc = 0x1DA464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA460u;
    // 0x1da464: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD840u, 0x1DA460u, 0x1DA468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA468u;
label_1da468:
    // 0x1da468: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da46c: 0xc077644  jal         func_1DD910
    ctx->pc = 0x1DA46Cu;
    SET_GPR_U32(ctx, 31, 0x1DA474u);
    ctx->pc = 0x1DA470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA46Cu;
    // 0x1da470: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD910u, 0x1DA46Cu, 0x1DA474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA474u;
label_1da474:
    // 0x1da474: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da478: 0xc077678  jal         func_1DD9E0
    ctx->pc = 0x1DA478u;
    SET_GPR_U32(ctx, 31, 0x1DA480u);
    ctx->pc = 0x1DA47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA478u;
    // 0x1da47c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD9E0u, 0x1DA478u, 0x1DA480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA480u;
label_1da480:
    // 0x1da480: 0x92023025  lbu         $v0, 0x3025($s0)
    ctx->pc = 0x1da480u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12325)));
    // 0x1da484: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1da484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1da488:
    // 0x1da488: 0xae033028  sw          $v1, 0x3028($s0)
    ctx->pc = 0x1da488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12328), GPR_U32(ctx, 3));
label_1da48c:
    // 0x1da48c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1da48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1da490: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1DA490u;
    {
        const bool branch_taken_0x1da490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA490u;
        // 0x1da494: 0xa2023025  sb          $v0, 0x3025($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 12325), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da490) {
            ctx->pc = 0x1DA4C8u;
            goto label_1da4c8;
        }
    }
    ctx->pc = 0x1DA498u;
label_1da498:
    // 0x1da498: 0x8e023028  lw          $v0, 0x3028($s0)
    ctx->pc = 0x1da498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12328)));
    // 0x1da49c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA49Cu;
    {
        const bool branch_taken_0x1da49c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA49Cu;
        // 0x1da4a0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da49c) {
            ctx->pc = 0x1DA4ACu;
            goto label_1da4ac;
        }
    }
    ctx->pc = 0x1DA4A4u;
    // 0x1da4a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA4A4u;
    {
        const bool branch_taken_0x1da4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA4A4u;
        // 0x1da4a8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da4a4) {
            ctx->pc = 0x1DA4B4u;
            goto label_1da4b4;
        }
    }
    ctx->pc = 0x1DA4ACu;
label_1da4ac:
    // 0x1da4ac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1da4acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da4b0: 0xae023028  sw          $v0, 0x3028($s0)
    ctx->pc = 0x1da4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12328), GPR_U32(ctx, 2));
label_1da4b4:
    // 0x1da4b4: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1da4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1da4b8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DA4B8u;
    {
        const bool branch_taken_0x1da4b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da4b8) {
            ctx->pc = 0x1DA4BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DA4B8u;
            // 0x1da4bc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DA4CCu;
            goto label_1da4cc;
        }
    }
    ctx->pc = 0x1DA4C0u;
    // 0x1da4c0: 0xa2003025  sb          $zero, 0x3025($s0)
    ctx->pc = 0x1da4c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12325), (uint8_t)GPR_U32(ctx, 0));
    // 0x1da4c4: 0xa2003024  sb          $zero, 0x3024($s0)
    ctx->pc = 0x1da4c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12324), (uint8_t)GPR_U32(ctx, 0));
label_1da4c8:
    // 0x1da4c8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1da4c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1da4cc:
    // 0x1da4cc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1da4ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1da4d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1da4d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1da4d4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1da4d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da4d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1da4d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da4dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA4DCu;
        // 0x1da4e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA4DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA4E4u;
    // 0x1da4e4: 0x0  nop
    ctx->pc = 0x1da4e4u;
    // NOP
    ctx->pc = 0x1da4e8u;
}
