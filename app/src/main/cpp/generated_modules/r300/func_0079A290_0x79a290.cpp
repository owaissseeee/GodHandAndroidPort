#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r300_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r300
{
// Function: func_0079A290
// Address: 0x79a290 - 0x79a5d8
void func_0079A290_0x79a290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A290_0x79a290");
#endif

    switch (ctx->pc) {
        case 0x79a2dcu: goto label_79a2dc;
        case 0x79a2e8u: goto label_79a2e8;
        case 0x79a2f4u: goto label_79a2f4;
        case 0x79a320u: goto label_79a320;
        case 0x79a32cu: goto label_79a32c;
        case 0x79a33cu: goto label_79a33c;
        case 0x79a35cu: goto label_79a35c;
        case 0x79a3c0u: goto label_79a3c0;
        case 0x79a3ecu: goto label_79a3ec;
        case 0x79a408u: goto label_79a408;
        case 0x79a424u: goto label_79a424;
        case 0x79a42cu: goto label_79a42c;
        case 0x79a448u: goto label_79a448;
        case 0x79a450u: goto label_79a450;
        case 0x79a46cu: goto label_79a46c;
        case 0x79a47cu: goto label_79a47c;
        case 0x79a488u: goto label_79a488;
        case 0x79a494u: goto label_79a494;
        case 0x79a4c0u: goto label_79a4c0;
        case 0x79a4e0u: goto label_79a4e0;
        case 0x79a4ecu: goto label_79a4ec;
        case 0x79a4f8u: goto label_79a4f8;
        case 0x79a504u: goto label_79a504;
        case 0x79a51cu: goto label_79a51c;
        case 0x79a528u: goto label_79a528;
        case 0x79a534u: goto label_79a534;
        case 0x79a540u: goto label_79a540;
        case 0x79a550u: goto label_79a550;
        case 0x79a558u: goto label_79a558;
        case 0x79a564u: goto label_79a564;
        case 0x79a570u: goto label_79a570;
        case 0x79a578u: goto label_79a578;
        case 0x79a59cu: goto label_79a59c;
        default: break;
    }

    ctx->pc = 0x79a290u;

    // 0x79a290: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x79a290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x79a294: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a298: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x79a298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x79a29c: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x79a29cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x79a2a0: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x79a2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x79a2a4: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x79a2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x79a2a8: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x79a2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x79a2ac: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x79a2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x79a2b0: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x79a2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x79a2b4: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x79a2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x79a2b8: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x79a2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x79a2bc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x79a2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x79a2c0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x79a2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x79a2c4: 0xe7b60120  swc1        $f22, 0x120($sp)
    ctx->pc = 0x79a2c4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x79a2c8: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x79a2c8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x79a2cc: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x79a2ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x79a2d0: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79a2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79a2d4: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A2D4u;
    SET_GPR_U32(ctx, 31, 0x79A2DCu);
    ctx->pc = 0x79A2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2D4u;
    // 0x79a2d8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A2D4u, 0x79A2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2DCu;
label_79a2dc:
    // 0x79a2dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x79a2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a2e0: 0xc1e69ba  jal         func_79A6E8
    ctx->pc = 0x79A2E0u;
    SET_GPR_U32(ctx, 31, 0x79A2E8u);
    ctx->pc = 0x79A2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2E0u;
    // 0x79a2e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A6E8u, 0x79A2E0u, 0x79A2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2E8u;
label_79a2e8:
    // 0x79a2e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x79a2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a2ec: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x79A2ECu;
    SET_GPR_U32(ctx, 31, 0x79A2F4u);
    ctx->pc = 0x79A2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2ECu;
    // 0x79a2f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x79A2ECu, 0x79A2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2F4u;
label_79a2f4:
    // 0x79a2f4: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x79a2f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a2f8: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x79a2f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79a2fc: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x79a2fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x79a300: 0x3c16007a  lui         $s6, 0x7A
    ctx->pc = 0x79a300u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)122 << 16));
    // 0x79a304: 0x27b70040  addiu       $s7, $sp, 0x40
    ctx->pc = 0x79a304u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x79a308: 0x27be0050  addiu       $fp, $sp, 0x50
    ctx->pc = 0x79a308u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x79a30c: 0x27b20060  addiu       $s2, $sp, 0x60
    ctx->pc = 0x79a30cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x79a310: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x79a310u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79a314: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79A314u;
    {
        const bool branch_taken_0x79a314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A314u;
        // 0x79a318: 0x27b50030  addiu       $s5, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a314) {
            ctx->pc = 0x79A32Cu;
            goto label_79a32c;
        }
    }
    ctx->pc = 0x79A31Cu;
    // 0x79a31c: 0x0  nop
    ctx->pc = 0x79a31cu;
    // NOP
label_79a320:
    // 0x79a320: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a324: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A324u;
    SET_GPR_U32(ctx, 31, 0x79A32Cu);
    ctx->pc = 0x79A328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A324u;
    // 0x79a328: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A324u, 0x79A32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A32Cu;
label_79a32c:
    // 0x79a32c: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x79a32cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x79a330: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a334: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79A334u;
    SET_GPR_U32(ctx, 31, 0x79A33Cu);
    ctx->pc = 0x79A338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A334u;
    // 0x79a338: 0x24448658  addiu       $a0, $v0, -0x79A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79A334u, 0x79A33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A33Cu;
label_79a33c:
    // 0x79a33c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79a33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79a340: 0x28630007  slti        $v1, $v1, 0x7
    ctx->pc = 0x79a340u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x79a344: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x79A344u;
    {
        const bool branch_taken_0x79a344 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A344u;
        // 0x79a348: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a344) {
            ctx->pc = 0x79A320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a320;
        }
    }
    ctx->pc = 0x79A34Cu;
    // 0x79a34c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x79a34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x79a350: 0x26106ab0  addiu       $s0, $s0, 0x6AB0
    ctx->pc = 0x79a350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27312));
    // 0x79a354: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A354u;
    SET_GPR_U32(ctx, 31, 0x79A35Cu);
    ctx->pc = 0x79A358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A354u;
    // 0x79a358: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A354u, 0x79A35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A35Cu;
label_79a35c:
    // 0x79a35c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79a35cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79a360: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79a360u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79a364: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79a364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79a368: 0x3c0141f6  lui         $at, 0x41F6
    ctx->pc = 0x79a368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16886 << 16));
    // 0x79a36c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x79a36cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x79a370: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79a370u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79a374: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x79a374u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a378: 0x3c0142d0  lui         $at, 0x42D0
    ctx->pc = 0x79a378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17104 << 16));
    // 0x79a37c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x79a37cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x79a380: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79a380u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79a384: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x79a384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a388: 0x3c014014  lui         $at, 0x4014
    ctx->pc = 0x79a388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16404 << 16));
    // 0x79a38c: 0x34218ffb  ori         $at, $at, 0x8FFB
    ctx->pc = 0x79a38cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36859);
    // 0x79a390: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79a390u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79a394: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a398: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x79a398u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x79a39c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x79a39cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x79a3a0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x79a3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x79a3a4: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x79a3a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x79a3a8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x79a3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x79a3ac: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x79a3acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x79a3b0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x79a3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x79a3b4: 0x8c44264c  lw          $a0, 0x264C($v0)
    ctx->pc = 0x79a3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C264Cu));
    // 0x79a3b8: 0xc0b016c  jal         func_2C05B0
    ctx->pc = 0x79A3B8u;
    SET_GPR_U32(ctx, 31, 0x79A3C0u);
    ctx->pc = 0x79A3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3B8u;
    // 0x79a3bc: 0xe623000c  swc1        $f3, 0xC($s1) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x79A3B8u, 0x79A3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3C0u;
label_79a3c0:
    // 0x79a3c0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x79a3c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x79a3c4: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x79a3c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x79a3c8: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x79a3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x79a3cc: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x79a3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x79a3d0: 0xa3a30030  sb          $v1, 0x30($sp)
    ctx->pc = 0x79a3d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 3));
    // 0x79a3d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a3d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a3d8: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x79a3d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x79a3dc: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x79a3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x79a3e0: 0xa3a60040  sb          $a2, 0x40($sp)
    ctx->pc = 0x79a3e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 6));
    // 0x79a3e4: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79A3E4u;
    SET_GPR_U32(ctx, 31, 0x79A3ECu);
    ctx->pc = 0x79A3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3E4u;
    // 0x79a3e8: 0xa3a70050  sb          $a3, 0x50($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79A3E4u, 0x79A3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3ECu;
label_79a3ec:
    // 0x79a3ec: 0x8ec3ae80  lw          $v1, -0x5180($s6)
    ctx->pc = 0x79a3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294946432)));
    // 0x79a3f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a3f4: 0x8c620114  lw          $v0, 0x114($v1)
    ctx->pc = 0x79a3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 276)));
    // 0x79a3f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a3fc: 0xac620114  sw          $v0, 0x114($v1)
    ctx->pc = 0x79a3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 276), GPR_U32(ctx, 2));
    // 0x79a400: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79A400u;
    SET_GPR_U32(ctx, 31, 0x79A408u);
    ctx->pc = 0x79A404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A400u;
    // 0x79a404: 0x93a50030  lbu         $a1, 0x30($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79A400u, 0x79A408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A408u;
label_79a408:
    // 0x79a408: 0x8ec3ae80  lw          $v1, -0x5180($s6)
    ctx->pc = 0x79a408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294946432)));
    // 0x79a40c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a40cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a410: 0x8c620114  lw          $v0, 0x114($v1)
    ctx->pc = 0x79a410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 276)));
    // 0x79a414: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a418: 0xac620114  sw          $v0, 0x114($v1)
    ctx->pc = 0x79a418u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 276), GPR_U32(ctx, 2));
    // 0x79a41c: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79A41Cu;
    SET_GPR_U32(ctx, 31, 0x79A424u);
    ctx->pc = 0x79A420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A41Cu;
    // 0x79a420: 0x93a50040  lbu         $a1, 0x40($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79A41Cu, 0x79A424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A424u;
label_79a424:
    // 0x79a424: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x79A424u;
    SET_GPR_U32(ctx, 31, 0x79A42Cu);
    ctx->pc = 0x79A428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A424u;
    // 0x79a428: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79A424u, 0x79A42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A42Cu;
label_79a42c:
    // 0x79a42c: 0x8ec3ae80  lw          $v1, -0x5180($s6)
    ctx->pc = 0x79a42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294946432)));
    // 0x79a430: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a434: 0x8c620114  lw          $v0, 0x114($v1)
    ctx->pc = 0x79a434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 276)));
    // 0x79a438: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a43c: 0xac620114  sw          $v0, 0x114($v1)
    ctx->pc = 0x79a43cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 276), GPR_U32(ctx, 2));
    // 0x79a440: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x79A440u;
    SET_GPR_U32(ctx, 31, 0x79A448u);
    ctx->pc = 0x79A444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A440u;
    // 0x79a444: 0x93a50050  lbu         $a1, 0x50($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x79A440u, 0x79A448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A448u;
label_79a448:
    // 0x79a448: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x79A448u;
    SET_GPR_U32(ctx, 31, 0x79A450u);
    ctx->pc = 0x79A44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A448u;
    // 0x79a44c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x79A448u, 0x79A450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A450u;
label_79a450:
    // 0x79a450: 0x8ec3ae80  lw          $v1, -0x5180($s6)
    ctx->pc = 0x79a450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294946432)));
    // 0x79a454: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x79a454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a458: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a45c: 0x8c620114  lw          $v0, 0x114($v1)
    ctx->pc = 0x79a45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 276)));
    // 0x79a460: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a464: 0xc1e69ba  jal         func_79A6E8
    ctx->pc = 0x79A464u;
    SET_GPR_U32(ctx, 31, 0x79A46Cu);
    ctx->pc = 0x79A468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A464u;
    // 0x79a468: 0xac620114  sw          $v0, 0x114($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 276), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A6E8u, 0x79A464u, 0x79A46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A46Cu;
label_79a46c:
    // 0x79a46c: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x79a46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79a470: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x79a470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79a474: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A474u;
    SET_GPR_U32(ctx, 31, 0x79A47Cu);
    ctx->pc = 0x79A478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A474u;
    // 0x79a478: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A474u, 0x79A47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A47Cu;
label_79a47c:
    // 0x79a47c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x79a47cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a480: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x79A480u;
    SET_GPR_U32(ctx, 31, 0x79A488u);
    ctx->pc = 0x79A484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A480u;
    // 0x79a484: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x79A480u, 0x79A488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A488u;
label_79a488:
    // 0x79a488: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x79a488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79a48c: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x79A48Cu;
    SET_GPR_U32(ctx, 31, 0x79A494u);
    ctx->pc = 0x79A490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A48Cu;
    // 0x79a490: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x79A48Cu, 0x79A494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A494u;
label_79a494:
    // 0x79a494: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x79a494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a498: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x79a498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x79a49c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x79a49cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a4a0: 0x2444ea60  addiu       $a0, $v0, -0x15A0
    ctx->pc = 0x79a4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961760));
    // 0x79a4a4: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x79a4a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x79a4a8: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x79a4a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x79a4ac: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79a4acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x79a4b0: 0x3c014348  lui         $at, 0x4348
    ctx->pc = 0x79a4b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17224 << 16));
    // 0x79a4b4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x79a4b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x79a4b8: 0xc0b0a92  jal         func_2C2A48
    ctx->pc = 0x79A4B8u;
    SET_GPR_U32(ctx, 31, 0x79A4C0u);
    ctx->pc = 0x79A4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4B8u;
    // 0x79a4bc: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x79A4B8u, 0x79A4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4C0u;
label_79a4c0:
    // 0x79a4c0: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x79a4c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x79a4c4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x79a4c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x79a4c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a4c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a4cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a4ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a4d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x79a4d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a4d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x79a4d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a4d8: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x79A4D8u;
    SET_GPR_U32(ctx, 31, 0x79A4E0u);
    ctx->pc = 0x79A4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4D8u;
    // 0x79a4dc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79A4D8u, 0x79A4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4E0u;
label_79a4e0:
    // 0x79a4e0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x79a4e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x79a4e4: 0xc0a5834  jal         func_2960D0
    ctx->pc = 0x79A4E4u;
    SET_GPR_U32(ctx, 31, 0x79A4ECu);
    ctx->pc = 0x79A4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4E4u;
    // 0x79a4e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2960D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2960D0u, 0x79A4E4u, 0x79A4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4ECu;
label_79a4ec:
    // 0x79a4ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x79a4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a4f0: 0xc0a581c  jal         func_296070
    ctx->pc = 0x79A4F0u;
    SET_GPR_U32(ctx, 31, 0x79A4F8u);
    ctx->pc = 0x79A4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4F0u;
    // 0x79a4f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296070u, 0x79A4F0u, 0x79A4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A4F8u;
label_79a4f8:
    // 0x79a4f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x79a4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a4fc: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x79A4FCu;
    SET_GPR_U32(ctx, 31, 0x79A504u);
    ctx->pc = 0x79A500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A4FCu;
    // 0x79a500: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79A4FCu, 0x79A504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A504u;
label_79a504:
    // 0x79a504: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a504u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a508: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a508u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a50c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x79a50cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a510: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79a510u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x79a514: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x79A514u;
    SET_GPR_U32(ctx, 31, 0x79A51Cu);
    ctx->pc = 0x79A518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A514u;
    // 0x79a518: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79A514u, 0x79A51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A51Cu;
label_79a51c:
    // 0x79a51c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x79a51cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x79a520: 0xc0a5834  jal         func_2960D0
    ctx->pc = 0x79A520u;
    SET_GPR_U32(ctx, 31, 0x79A528u);
    ctx->pc = 0x79A524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A520u;
    // 0x79a524: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2960D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2960D0u, 0x79A520u, 0x79A528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A528u;
label_79a528:
    // 0x79a528: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x79a528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a52c: 0xc0a581c  jal         func_296070
    ctx->pc = 0x79A52Cu;
    SET_GPR_U32(ctx, 31, 0x79A534u);
    ctx->pc = 0x79A530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A52Cu;
    // 0x79a530: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296070u, 0x79A52Cu, 0x79A534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A534u;
label_79a534:
    // 0x79a534: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x79a534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a538: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x79A538u;
    SET_GPR_U32(ctx, 31, 0x79A540u);
    ctx->pc = 0x79A53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A538u;
    // 0x79a53c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79A538u, 0x79A540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A540u;
label_79a540:
    // 0x79a540: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x79a540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79a544: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79a544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79a548: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x79A548u;
    SET_GPR_U32(ctx, 31, 0x79A550u);
    ctx->pc = 0x79A54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A548u;
    // 0x79a54c: 0x2445add0  addiu       $a1, $v0, -0x5230 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x79A548u, 0x79A550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A550u;
label_79a550:
    // 0x79a550: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x79A550u;
    SET_GPR_U32(ctx, 31, 0x79A558u);
    ctx->pc = 0x79A554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A550u;
    // 0x79a554: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x79A550u, 0x79A558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A558u;
label_79a558:
    // 0x79a558: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x79a558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a55c: 0xc0a5834  jal         func_2960D0
    ctx->pc = 0x79A55Cu;
    SET_GPR_U32(ctx, 31, 0x79A564u);
    ctx->pc = 0x79A560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A55Cu;
    // 0x79a560: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2960D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2960D0u, 0x79A55Cu, 0x79A564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A564u;
label_79a564:
    // 0x79a564: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x79a564u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x79a568: 0xc0a5834  jal         func_2960D0
    ctx->pc = 0x79A568u;
    SET_GPR_U32(ctx, 31, 0x79A570u);
    ctx->pc = 0x79A56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A568u;
    // 0x79a56c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2960D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2960D0u, 0x79A568u, 0x79A570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A570u;
label_79a570:
    // 0x79a570: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x79A570u;
    SET_GPR_U32(ctx, 31, 0x79A578u);
    ctx->pc = 0x79A574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A570u;
    // 0x79a574: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79A570u, 0x79A578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A578u;
label_79a578:
    // 0x79a578: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x79a578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x79a57c: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x79a57cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x79a580: 0x8c448658  lw          $a0, -0x79A8($v0)
    ctx->pc = 0x79a580u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5E8658u));
    // 0x79a584: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x79a584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x79a588: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x79a588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x79a58c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x79a58cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x79a590: 0x8e632f84  lw          $v1, 0x2F84($s3)
    ctx->pc = 0x79a590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x79a594: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A594u;
    SET_GPR_U32(ctx, 31, 0x79A59Cu);
    ctx->pc = 0x79A598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A594u;
    // 0x79a598: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A594u, 0x79A59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A59Cu;
label_79a59c:
    // 0x79a59c: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x79a59cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x79a5a0: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x79a5a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x79a5a4: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x79a5a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x79a5a8: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x79a5a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x79a5ac: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x79a5acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x79a5b0: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x79a5b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x79a5b4: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x79a5b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x79a5b8: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x79a5b8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x79a5bc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x79a5bcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79a5c0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x79a5c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79a5c4: 0xc7b60120  lwc1        $f22, 0x120($sp)
    ctx->pc = 0x79a5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x79a5c8: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x79a5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x79a5cc: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x79a5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79a5d0: 0x3e00008  jr          $ra
    ctx->pc = 0x79A5D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5D0u;
        // 0x79a5d4: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A5D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A5D8u;
}
} // namespace gh_r300
