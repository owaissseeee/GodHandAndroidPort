#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r508_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r508
{
// Function: initBridge__5cR508
// Address: 0x7992d0 - 0x799420
void initBridge__5cR508_0x7992d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("initBridge__5cR508_0x7992d0");
#endif

    switch (ctx->pc) {
        case 0x799318u: goto label_799318;
        case 0x79934cu: goto label_79934c;
        case 0x799370u: goto label_799370;
        case 0x7993a0u: goto label_7993a0;
        case 0x7993d8u: goto label_7993d8;
        case 0x7993e8u: goto label_7993e8;
        case 0x7993f0u: goto label_7993f0;
        case 0x799408u: goto label_799408;
        default: break;
    }

    ctx->pc = 0x7992d0u;

    // 0x7992d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x7992d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x7992d4: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x7992d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x7992d8: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x7992d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x7992dc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x7992dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x7992e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x7992e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x7992e4: 0x24489820  addiu       $t0, $v0, -0x67E0
    ctx->pc = 0x7992e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940704));
    // 0x7992e8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x7992e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x7992ec: 0x24694c58  addiu       $t1, $v1, 0x4C58
    ctx->pc = 0x7992ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x7992f0: 0x80459820  lb          $a1, -0x67E0($v0)
    ctx->pc = 0x7992f0u;
    SET_GPR_S32(ctx, 5, (int8_t)FAST_READ8(0x799820u));
    // 0x7992f4: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x7992f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7992f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7992fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7992fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799300: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799300u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799304: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799308: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x799308u;
    {
        const bool branch_taken_0x799308 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x79930Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799308u;
        // 0x79930c: 0x3c11007a  lui         $s1, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799308) {
            ctx->pc = 0x799340u;
            goto label_799340;
        }
    }
    ctx->pc = 0x799310u;
    // 0x799310: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x799310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799314: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x799314u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_799318:
    // 0x799318: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x799318u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x79931c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79931cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799320: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x799320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x799324: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799328: 0x28c30008  slti        $v1, $a2, 0x8
    ctx->pc = 0x799328u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79932c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79932Cu;
    {
        const bool branch_taken_0x79932c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79932Cu;
        // 0x799330: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79932c) {
            ctx->pc = 0x799340u;
            goto label_799340;
        }
    }
    ctx->pc = 0x799334u;
    // 0x799334: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x799334u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x799338: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799338u;
    {
        const bool branch_taken_0x799338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799338) {
            ctx->pc = 0x79933Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799338u;
            // 0x79933c: 0x80a20000  lb          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799318;
        }
    }
    ctx->pc = 0x799340u;
label_799340:
    // 0x799340: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x799340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799344: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799344u;
    SET_GPR_U32(ctx, 31, 0x79934Cu);
    ctx->pc = 0x799348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799344u;
    // 0x799348: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799344u, 0x79934Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79934Cu;
label_79934c:
    // 0x79934c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x79934cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x799350: 0x26484c58  addiu       $t0, $s2, 0x4C58
    ctx->pc = 0x799350u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 19544));
    // 0x799354: 0x26239830  addiu       $v1, $s1, -0x67D0
    ctx->pc = 0x799354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294940720));
    // 0x799358: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79935c: 0x82229830  lb          $v0, -0x67D0($s1)
    ctx->pc = 0x79935cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294940720)));
    // 0x799360: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x799360u;
    {
        const bool branch_taken_0x799360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799360u;
        // 0x799364: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799360) {
            ctx->pc = 0x799398u;
            goto label_799398;
        }
    }
    ctx->pc = 0x799368u;
    // 0x799368: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799368u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79936c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79936cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799370:
    // 0x799370: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799370u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799374: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799378: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79937c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79937cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799380: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799380u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799384: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799384u;
    {
        const bool branch_taken_0x799384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799384u;
        // 0x799388: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799384) {
            ctx->pc = 0x799398u;
            goto label_799398;
        }
    }
    ctx->pc = 0x79938Cu;
    // 0x79938c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79938cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799390: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799390u;
    {
        const bool branch_taken_0x799390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799390) {
            ctx->pc = 0x799394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799390u;
            // 0x799394: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799370;
        }
    }
    ctx->pc = 0x799398u;
label_799398:
    // 0x799398: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799398u;
    SET_GPR_U32(ctx, 31, 0x7993A0u);
    ctx->pc = 0x79939Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799398u;
    // 0x79939c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799398u, 0x7993A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993A0u;
label_7993a0:
    // 0x7993a0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x7993a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7993a4: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x7993A4u;
    {
        const bool branch_taken_0x7993a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993A4u;
        // 0x7993a8: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993a4) {
            ctx->pc = 0x799408u;
            goto label_799408;
        }
    }
    ctx->pc = 0x7993ACu;
    // 0x7993ac: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x7993ACu;
    {
        const bool branch_taken_0x7993ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993ACu;
        // 0x7993b0: 0x3c02005f  lui         $v0, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993ac) {
            ctx->pc = 0x799408u;
            goto label_799408;
        }
    }
    ctx->pc = 0x7993B4u;
    // 0x7993b4: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x7993b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936152)));
    // 0x7993b8: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x7993b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x7993bc: 0x4800008  bltz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x7993BCu;
    {
        const bool branch_taken_0x7993bc = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x7993C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993BCu;
        // 0x7993c0: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993bc) {
            ctx->pc = 0x7993E0u;
            goto label_7993e0;
        }
    }
    ctx->pc = 0x7993C4u;
    // 0x7993c4: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7993c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7993c8: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x7993c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    // 0x7993cc: 0x24a59420  addiu       $a1, $a1, -0x6BE0
    ctx->pc = 0x7993ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939680));
    // 0x7993d0: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x7993D0u;
    SET_GPR_U32(ctx, 31, 0x7993D8u);
    ctx->pc = 0x7993D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993D0u;
    // 0x7993d4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7993D0u, 0x7993D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993D8u;
label_7993d8:
    // 0x7993d8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x7993D8u;
    {
        const bool branch_taken_0x7993d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993D8u;
        // 0x7993dc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993d8) {
            ctx->pc = 0x79940Cu;
            goto label_79940c;
        }
    }
    ctx->pc = 0x7993E0u;
label_7993e0:
    // 0x7993e0: 0xc05edc6  jal         func_17B718
    ctx->pc = 0x7993E0u;
    SET_GPR_U32(ctx, 31, 0x7993E8u);
    ctx->pc = 0x7993E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993E0u;
    // 0x7993e4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B718u, 0x7993E0u, 0x7993E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993E8u;
label_7993e8:
    // 0x7993e8: 0xc05edc6  jal         func_17B718
    ctx->pc = 0x7993E8u;
    SET_GPR_U32(ctx, 31, 0x7993F0u);
    ctx->pc = 0x7993ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993E8u;
    // 0x7993ec: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B718u, 0x7993E8u, 0x7993F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993F0u;
label_7993f0:
    // 0x7993f0: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x7993f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x7993f4: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7993f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7993f8: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x7993f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x7993fc: 0x24a59838  addiu       $a1, $a1, -0x67C8
    ctx->pc = 0x7993fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940728));
    // 0x799400: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x799400u;
    SET_GPR_U32(ctx, 31, 0x799408u);
    ctx->pc = 0x799404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799400u;
    // 0x799404: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x799400u, 0x799408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799408u;
label_799408:
    // 0x799408: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x799408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_79940c:
    // 0x79940c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x79940cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799410: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x799410u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799414: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799418: 0x3e00008  jr          $ra
    ctx->pc = 0x799418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79941Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799418u;
        // 0x79941c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799420u;
}
} // namespace gh_r508
