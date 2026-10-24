#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r301_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r301
{
// Function: Initialize__16r301CannonGameId
// Address: 0x79d2b8 - 0x79d3f8
void Initialize__16r301CannonGameId_0x79d2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__16r301CannonGameId_0x79d2b8");
#endif

    switch (ctx->pc) {
        case 0x79d2f8u: goto label_79d2f8;
        case 0x79d328u: goto label_79d328;
        case 0x79d340u: goto label_79d340;
        case 0x79d36cu: goto label_79d36c;
        case 0x79d37cu: goto label_79d37c;
        case 0x79d384u: goto label_79d384;
        case 0x79d388u: goto label_79d388;
        case 0x79d394u: goto label_79d394;
        case 0x79d3a4u: goto label_79d3a4;
        case 0x79d3bcu: goto label_79d3bc;
        case 0x79d3ccu: goto label_79d3cc;
        default: break;
    }

    ctx->pc = 0x79d2b8u;

    // 0x79d2b8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x79d2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x79d2bc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79d2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79d2c0: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x79d2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x79d2c4: 0x3c06007a  lui         $a2, 0x7A
    ctx->pc = 0x79d2c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)122 << 16));
    // 0x79d2c8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x79d2c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d2cc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79d2ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79d2d0: 0x8c442388  lw          $a0, 0x2388($v0)
    ctx->pc = 0x79d2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2388u));
    // 0x79d2d4: 0x24c6df50  addiu       $a2, $a2, -0x20B0
    ctx->pc = 0x79d2d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958928));
    // 0x79d2d8: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x79d2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x79d2dc: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x79d2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x79d2e0: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x79d2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x79d2e4: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x79d2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x79d2e8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x79d2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x79d2ec: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x79d2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x79d2f0: 0xc0ab3ea  jal         func_2ACFA8
    ctx->pc = 0x79D2F0u;
    SET_GPR_U32(ctx, 31, 0x79D2F8u);
    ctx->pc = 0x79D2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D2F0u;
    // 0x79d2f4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACFA8u, 0x79D2F0u, 0x79D2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D2F8u;
label_79d2f8:
    // 0x79d2f8: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x79d2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x79d2fc: 0x3c070075  lui         $a3, 0x75
    ctx->pc = 0x79d2fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)117 << 16));
    // 0x79d300: 0x24703f20  addiu       $s0, $v1, 0x3F20
    ctx->pc = 0x79d300u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 16160));
    // 0x79d304: 0x24e74220  addiu       $a3, $a3, 0x4220
    ctx->pc = 0x79d304u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16928));
    // 0x79d308: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79d308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d30c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x79d30cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d310: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x79d310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x79d314: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79d314u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d318: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79d318u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d31c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79d31cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d320: 0xc08032c  jal         func_200CB0
    ctx->pc = 0x79D320u;
    SET_GPR_U32(ctx, 31, 0x79D328u);
    ctx->pc = 0x79D324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D320u;
    // 0x79d324: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200CB0u, 0x79D320u, 0x79D328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D328u;
label_79d328:
    // 0x79d328: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79D328u;
    {
        const bool branch_taken_0x79d328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79D32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D328u;
        // 0x79d32c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d328) {
            ctx->pc = 0x79D338u;
            goto label_79d338;
        }
    }
    ctx->pc = 0x79D330u;
    // 0x79d330: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x79D330u;
    {
        const bool branch_taken_0x79d330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D330u;
        // 0x79d334: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d330) {
            ctx->pc = 0x79D3D4u;
            goto label_79d3d4;
        }
    }
    ctx->pc = 0x79D338u;
label_79d338:
    // 0x79d338: 0xc080458  jal         func_201160
    ctx->pc = 0x79D338u;
    SET_GPR_U32(ctx, 31, 0x79D340u);
    ctx->pc = 0x79D33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D338u;
    // 0x79d33c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201160u, 0x79D338u, 0x79D340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D340u;
label_79d340:
    // 0x79d340: 0x26700010  addiu       $s0, $s3, 0x10
    ctx->pc = 0x79d340u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x79d344: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79d344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79d348: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x79d348u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79d34c: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x79d34cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2384u));
    // 0x79d350: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x79d350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x79d354: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x79d354u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d358: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x79d358u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d35c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79d35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79d360: 0x267502cc  addiu       $s5, $s3, 0x2CC
    ctx->pc = 0x79d360u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 716));
    // 0x79d364: 0xc0ab33e  jal         func_2ACCF8
    ctx->pc = 0x79D364u;
    SET_GPR_U32(ctx, 31, 0x79D36Cu);
    ctx->pc = 0x79D368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D364u;
    // 0x79d368: 0x26710060  addiu       $s1, $s3, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACCF8u, 0x79D364u, 0x79D36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D36Cu;
label_79d36c:
    // 0x79d36c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79d36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d370: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x79d370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x79d374: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x79D374u;
    SET_GPR_U32(ctx, 31, 0x79D37Cu);
    ctx->pc = 0x79D378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D374u;
    // 0x79d378: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x79D374u, 0x79D37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D37Cu;
label_79d37c:
    // 0x79d37c: 0xc0aaefa  jal         func_2ABBE8
    ctx->pc = 0x79D37Cu;
    SET_GPR_U32(ctx, 31, 0x79D384u);
    ctx->pc = 0x79D380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D37Cu;
    // 0x79d380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBE8u, 0x79D37Cu, 0x79D384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D384u;
label_79d384:
    // 0x79d384: 0x0  nop
    ctx->pc = 0x79d384u;
    // NOP
label_79d388:
    // 0x79d388: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x79d388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d38c: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x79D38Cu;
    SET_GPR_U32(ctx, 31, 0x79D394u);
    ctx->pc = 0x79D390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D38Cu;
    // 0x79d390: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x79D38Cu, 0x79D394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D394u;
label_79d394:
    // 0x79d394: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x79d394u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x79d398: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79d398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d39c: 0xc0b576a  jal         func_2D5DA8
    ctx->pc = 0x79D39Cu;
    SET_GPR_U32(ctx, 31, 0x79D3A4u);
    ctx->pc = 0x79D3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D39Cu;
    // 0x79d3a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5DA8u, 0x79D39Cu, 0x79D3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D3A4u;
label_79d3a4:
    // 0x79d3a4: 0x2a420006  slti        $v0, $s2, 0x6
    ctx->pc = 0x79d3a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x79d3a8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79D3A8u;
    {
        const bool branch_taken_0x79d3a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79D3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D3A8u;
        // 0x79d3ac: 0x2631007c  addiu       $s1, $s1, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d3a8) {
            ctx->pc = 0x79D388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79d388;
        }
    }
    ctx->pc = 0x79D3B0u;
    // 0x79d3b0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x79d3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d3b4: 0xc0b5958  jal         func_2D6560
    ctx->pc = 0x79D3B4u;
    SET_GPR_U32(ctx, 31, 0x79D3BCu);
    ctx->pc = 0x79D3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D3B4u;
    // 0x79d3b8: 0x24051004  addiu       $a1, $zero, 0x1004 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6560u, 0x79D3B4u, 0x79D3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D3BCu;
label_79d3bc:
    // 0x79d3bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x79d3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d3c0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x79d3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x79d3c4: 0xc1e752a  jal         func_79D4A8
    ctx->pc = 0x79D3C4u;
    SET_GPR_U32(ctx, 31, 0x79D3CCu);
    ctx->pc = 0x79D3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D3C4u;
    // 0x79d3c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79D4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79D4A8u, 0x79D3C4u, 0x79D3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D3CCu;
label_79d3cc:
    // 0x79d3cc: 0xa6600348  sh          $zero, 0x348($s3)
    ctx->pc = 0x79d3ccu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 840), (uint16_t)GPR_U32(ctx, 0));
    // 0x79d3d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79d3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79d3d4:
    // 0x79d3d4: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x79d3d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x79d3d8: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x79d3d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x79d3dc: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x79d3dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x79d3e0: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x79d3e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79d3e4: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x79d3e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79d3e8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x79d3e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79d3ec: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x79d3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79d3f0: 0x3e00008  jr          $ra
    ctx->pc = 0x79D3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79D3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D3F0u;
        // 0x79d3f4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79D3F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79D3F8u;
}
} // namespace gh_r301
