#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r102_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r102
{
// Function: func_0079A2A0
// Address: 0x79a2a0 - 0x79a548
void func_0079A2A0_0x79a2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A2A0_0x79a2a0");
#endif

    switch (ctx->pc) {
        case 0x79a2f8u: goto label_79a2f8;
        case 0x79a32cu: goto label_79a32c;
        case 0x79a390u: goto label_79a390;
        case 0x79a408u: goto label_79a408;
        case 0x79a468u: goto label_79a468;
        case 0x79a4e0u: goto label_79a4e0;
        case 0x79a51cu: goto label_79a51c;
        default: break;
    }

    ctx->pc = 0x79a2a0u;

    // 0x79a2a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x79a2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x79a2a4: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79a2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79a2a8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x79a2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x79a2ac: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x79a2acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x79a2b0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x79a2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x79a2b4: 0x2448bf38  addiu       $t0, $v0, -0x40C8
    ctx->pc = 0x79a2b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950712));
    // 0x79a2b8: 0x8045bf38  lb          $a1, -0x40C8($v0)
    ctx->pc = 0x79a2b8u;
    SET_GPR_S32(ctx, 5, (int8_t)FAST_READ8(0x79BF38u));
    // 0x79a2bc: 0x24694c58  addiu       $t1, $v1, 0x4C58
    ctx->pc = 0x79a2bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x79a2c0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x79a2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x79a2c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x79a2c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a2c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x79a2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x79a2cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a2ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a2d0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x79a2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x79a2d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a2d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a2d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79a2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x79a2dc: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x79a2dcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x79a2e0: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x79a2e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x79a2e4: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x79A2E4u;
    {
        const bool branch_taken_0x79a2e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2E4u;
        // 0x79a2e8: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2e4) {
            ctx->pc = 0x79A320u;
            goto label_79a320;
        }
    }
    ctx->pc = 0x79A2ECu;
    // 0x79a2ec: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x79a2ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a2f0: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x79a2f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x79a2f4: 0x0  nop
    ctx->pc = 0x79a2f4u;
    // NOP
label_79a2f8:
    // 0x79a2f8: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x79a2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x79a2fc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a2fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a300: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x79a300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x79a304: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a308: 0x28c30008  slti        $v1, $a2, 0x8
    ctx->pc = 0x79a308u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a30c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A30Cu;
    {
        const bool branch_taken_0x79a30c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A30Cu;
        // 0x79a310: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a30c) {
            ctx->pc = 0x79A320u;
            goto label_79a320;
        }
    }
    ctx->pc = 0x79A314u;
    // 0x79a314: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x79a314u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x79a318: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A318u;
    {
        const bool branch_taken_0x79a318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a318) {
            ctx->pc = 0x79A31Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A318u;
            // 0x79a31c: 0x80a20000  lb          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A2F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a2f8;
        }
    }
    ctx->pc = 0x79A320u;
label_79a320:
    // 0x79a320: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x79a320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a324: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79A324u;
    SET_GPR_U32(ctx, 31, 0x79A32Cu);
    ctx->pc = 0x79A328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A324u;
    // 0x79a328: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79A324u, 0x79A32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A32Cu;
label_79a32c:
    // 0x79a32c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79a32cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a330: 0x12000077  beqz        $s0, . + 4 + (0x77 << 2)
    ctx->pc = 0x79A330u;
    {
        const bool branch_taken_0x79a330 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A330u;
        // 0x79a334: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a330) {
            ctx->pc = 0x79A510u;
            goto label_79a510;
        }
    }
    ctx->pc = 0x79A338u;
    // 0x79a338: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x79a338u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x79a33c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x79a33cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79a340: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A340u;
    {
        const bool branch_taken_0x79a340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A340u;
        // 0x79a344: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a340) {
            ctx->pc = 0x79A354u;
            goto label_79a354;
        }
    }
    ctx->pc = 0x79A348u;
    // 0x79a348: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x79a348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x79a34c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79A34Cu;
    {
        const bool branch_taken_0x79a34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A34Cu;
        // 0x79a350: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a34c) {
            ctx->pc = 0x79A358u;
            goto label_79a358;
        }
    }
    ctx->pc = 0x79A354u;
label_79a354:
    // 0x79a354: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x79a354u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a358:
    // 0x79a358: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x79A358u;
    {
        const bool branch_taken_0x79a358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A358u;
        // 0x79a35c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a358) {
            ctx->pc = 0x79A510u;
            goto label_79a510;
        }
    }
    ctx->pc = 0x79A360u;
    // 0x79a360: 0x16220039  bne         $s1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x79A360u;
    {
        const bool branch_taken_0x79a360 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x79A364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A360u;
        // 0x79a364: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a360) {
            ctx->pc = 0x79A448u;
            goto label_79a448;
        }
    }
    ctx->pc = 0x79A368u;
    // 0x79a368: 0x3c01beb2  lui         $at, 0xBEB2
    ctx->pc = 0x79a368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48818 << 16));
    // 0x79a36c: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x79a36cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x79a370: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x79a370u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x79a374: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x79a374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
    // 0x79a378: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x79a378u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x79a37c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79a37cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79a380: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x79a380u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a384: 0x24110008  addiu       $s1, $zero, 0x8
    ctx->pc = 0x79a384u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x79a388: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x79a388u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x79a38c: 0x0  nop
    ctx->pc = 0x79a38cu;
    // NOP
label_79a390:
    // 0x79a390: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x79a390u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a394: 0x16600002  bnez        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x79A394u;
    {
        const bool branch_taken_0x79a394 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A394u;
        // 0x79a398: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a394) {
            ctx->pc = 0x79A3A0u;
            goto label_79a3a0;
        }
    }
    ctx->pc = 0x79A39Cu;
    // 0x79a39c: 0x283102a  slt         $v0, $s4, $v1
    ctx->pc = 0x79a39cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_79a3a0:
    // 0x79a3a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x79a3a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x79a3a4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A3A4u;
    {
        const bool branch_taken_0x79a3a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a3a4) {
            ctx->pc = 0x79A3A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A3A4u;
            // 0x79a3a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A3B8u;
            goto label_79a3b8;
        }
    }
    ctx->pc = 0x79A3ACu;
    // 0x79a3ac: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x79a3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x79a3b0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x79a3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x79a3b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x79a3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a3b8:
    // 0x79a3b8: 0xc4400100  lwc1        $f0, 0x100($v0)
    ctx->pc = 0x79a3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a3bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x79a3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a3c0: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x79a3c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x79a3c4: 0xe4400100  swc1        $f0, 0x100($v0)
    ctx->pc = 0x79a3c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x79a3c8: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x79a3c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x79a3cc: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x79a3ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x79a3d0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A3D0u;
    {
        const bool branch_taken_0x79a3d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3D0u;
        // 0x79a3d4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3d0) {
            ctx->pc = 0x79A3E4u;
            goto label_79a3e4;
        }
    }
    ctx->pc = 0x79A3D8u;
    // 0x79a3d8: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x79a3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x79a3dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79A3DCu;
    {
        const bool branch_taken_0x79a3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3DCu;
        // 0x79a3e0: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3dc) {
            ctx->pc = 0x79A3E8u;
            goto label_79a3e8;
        }
    }
    ctx->pc = 0x79A3E4u;
label_79a3e4:
    // 0x79a3e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x79a3e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a3e8:
    // 0x79a3e8: 0xc4400100  lwc1        $f0, 0x100($v0)
    ctx->pc = 0x79a3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a3ec: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x79a3ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79a3f0: 0x0  nop
    ctx->pc = 0x79a3f0u;
    // NOP
    // 0x79a3f4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x79A3F4u;
    {
        const bool branch_taken_0x79a3f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x79A3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3F4u;
        // 0x79a3f8: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3f4) {
            ctx->pc = 0x79A410u;
            goto label_79a410;
        }
    }
    ctx->pc = 0x79A3FCu;
    // 0x79a3fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a400: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A400u;
    SET_GPR_U32(ctx, 31, 0x79A408u);
    ctx->pc = 0x79A404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A400u;
    // 0x79a404: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A400u, 0x79A408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A408u;
label_79a408:
    // 0x79a408: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
    ctx->pc = 0x79A408u;
    {
        const bool branch_taken_0x79a408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A408u;
        // 0x79a40c: 0x920302b4  lbu         $v1, 0x2B4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a408) {
            ctx->pc = 0x79A390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a390;
        }
    }
    ctx->pc = 0x79A410u;
label_79a410:
    // 0x79a410: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x79a410u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x79a414: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x79a414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a418: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x79a418u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79a41c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A41Cu;
    {
        const bool branch_taken_0x79a41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A41Cu;
        // 0x79a420: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a41c) {
            ctx->pc = 0x79A430u;
            goto label_79a430;
        }
    }
    ctx->pc = 0x79A424u;
    // 0x79a424: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x79a424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x79a428: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79A428u;
    {
        const bool branch_taken_0x79a428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A428u;
        // 0x79a42c: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a428) {
            ctx->pc = 0x79A434u;
            goto label_79a434;
        }
    }
    ctx->pc = 0x79A430u;
label_79a430:
    // 0x79a430: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x79a430u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a434:
    // 0x79a434: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x79a434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
    // 0x79a438: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x79a438u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x79a43c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a43cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79a440: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x79A440u;
    {
        const bool branch_taken_0x79a440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A440u;
        // 0x79a444: 0xe4400100  swc1        $f0, 0x100($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a440) {
            ctx->pc = 0x79A510u;
            goto label_79a510;
        }
    }
    ctx->pc = 0x79A448u;
label_79a448:
    // 0x79a448: 0x3c013eb2  lui         $at, 0x3EB2
    ctx->pc = 0x79a448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16050 << 16));
    // 0x79a44c: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x79a44cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x79a450: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x79a450u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x79a454: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x79a454u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79a458: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x79a458u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a45c: 0x24110008  addiu       $s1, $zero, 0x8
    ctx->pc = 0x79a45cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x79a460: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x79a460u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x79a464: 0x0  nop
    ctx->pc = 0x79a464u;
    // NOP
label_79a468:
    // 0x79a468: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x79a468u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a46c: 0x16600002  bnez        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x79A46Cu;
    {
        const bool branch_taken_0x79a46c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A46Cu;
        // 0x79a470: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a46c) {
            ctx->pc = 0x79A478u;
            goto label_79a478;
        }
    }
    ctx->pc = 0x79A474u;
    // 0x79a474: 0x283102a  slt         $v0, $s4, $v1
    ctx->pc = 0x79a474u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_79a478:
    // 0x79a478: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x79a478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x79a47c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A47Cu;
    {
        const bool branch_taken_0x79a47c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a47c) {
            ctx->pc = 0x79A480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A47Cu;
            // 0x79a480: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A490u;
            goto label_79a490;
        }
    }
    ctx->pc = 0x79A484u;
    // 0x79a484: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x79a484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x79a488: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x79a488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x79a48c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x79a48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79a490:
    // 0x79a490: 0xc4400100  lwc1        $f0, 0x100($v0)
    ctx->pc = 0x79a490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a494: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x79a494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a498: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x79a498u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x79a49c: 0xe4400100  swc1        $f0, 0x100($v0)
    ctx->pc = 0x79a49cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 256), bits); }
    // 0x79a4a0: 0x920202b4  lbu         $v0, 0x2B4($s0)
    ctx->pc = 0x79a4a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x79a4a4: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x79a4a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x79a4a8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A4A8u;
    {
        const bool branch_taken_0x79a4a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4A8u;
        // 0x79a4ac: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a4a8) {
            ctx->pc = 0x79A4BCu;
            goto label_79a4bc;
        }
    }
    ctx->pc = 0x79A4B0u;
    // 0x79a4b0: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x79a4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x79a4b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79A4B4u;
    {
        const bool branch_taken_0x79a4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4B4u;
        // 0x79a4b8: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a4b4) {
            ctx->pc = 0x79A4C0u;
            goto label_79a4c0;
        }
    }
    ctx->pc = 0x79A4BCu;
label_79a4bc:
    // 0x79a4bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x79a4bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a4c0:
    // 0x79a4c0: 0xc4400100  lwc1        $f0, 0x100($v0)
    ctx->pc = 0x79a4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a4c4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x79a4c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79a4c8: 0x0  nop
    ctx->pc = 0x79a4c8u;
    // NOP
    // 0x79a4cc: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x79A4CCu;
    {
        const bool branch_taken_0x79a4cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x79A4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4CCu;
        // 0x79a4d0: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a4cc) {
            ctx->pc = 0x79A4E8u;
            goto label_79a4e8;
        }
    }
    ctx->pc = 0x79A4D4u;
    // 0x79a4d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a4d8: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A4D8u;
    SET_GPR_U32(ctx, 31, 0x79A4E0u);
    ctx->pc = 0x79A4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4D8u;
    // 0x79a4dc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A4D8u, 0x79A4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4E0u;
label_79a4e0:
    // 0x79a4e0: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
    ctx->pc = 0x79A4E0u;
    {
        const bool branch_taken_0x79a4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4E0u;
        // 0x79a4e4: 0x920302b4  lbu         $v1, 0x2B4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a4e0) {
            ctx->pc = 0x79A468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a468;
        }
    }
    ctx->pc = 0x79A4E8u;
label_79a4e8:
    // 0x79a4e8: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x79a4e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x79a4ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x79a4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a4f0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x79a4f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79a4f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A4F4u;
    {
        const bool branch_taken_0x79a4f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4F4u;
        // 0x79a4f8: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a4f4) {
            ctx->pc = 0x79A508u;
            goto label_79a508;
        }
    }
    ctx->pc = 0x79A4FCu;
    // 0x79a4fc: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x79a4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x79a500: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79A500u;
    {
        const bool branch_taken_0x79a500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A500u;
        // 0x79a504: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a500) {
            ctx->pc = 0x79A50Cu;
            goto label_79a50c;
        }
    }
    ctx->pc = 0x79A508u;
label_79a508:
    // 0x79a508: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x79a508u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a50c:
    // 0x79a50c: 0xac400100  sw          $zero, 0x100($v0)
    ctx->pc = 0x79a50cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 0));
label_79a510:
    // 0x79a510: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x79a510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79a514: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A514u;
    SET_GPR_U32(ctx, 31, 0x79A51Cu);
    ctx->pc = 0x79A518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A514u;
    // 0x79a518: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A514u, 0x79A51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A51Cu;
label_79a51c:
    // 0x79a51c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x79a51cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79a520: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x79a520u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79a524: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x79a524u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a528: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x79a528u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a52c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x79a52cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a530: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79a530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a534: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x79a534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x79a538: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x79a538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79a53c: 0x3e00008  jr          $ra
    ctx->pc = 0x79A53Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A53Cu;
        // 0x79a540: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A53Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A544u;
    // 0x79a544: 0x0  nop
    ctx->pc = 0x79a544u;
    // NOP
    ctx->pc = 0x79a548u;
}
} // namespace gh_r102
