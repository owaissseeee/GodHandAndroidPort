#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r505_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r505
{
// Function: __5cR505
// Address: 0x799280 - 0x799478
void ps2___5cR505_0x799280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___5cR505_0x799280");
#endif

    switch (ctx->pc) {
        case 0x7992d0u: goto label_7992d0;
        case 0x799304u: goto label_799304;
        case 0x79931cu: goto label_79931c;
        case 0x799350u: goto label_799350;
        case 0x79935cu: goto label_79935c;
        case 0x799368u: goto label_799368;
        case 0x799378u: goto label_799378;
        case 0x79937cu: goto label_79937c;
        case 0x7993d0u: goto label_7993d0;
        case 0x7993e8u: goto label_7993e8;
        case 0x799428u: goto label_799428;
        case 0x799440u: goto label_799440;
        case 0x799454u: goto label_799454;
        default: break;
    }

    ctx->pc = 0x799280u;

    // 0x799280: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x799280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x799284: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x799288: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x799288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x79928c: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x79928cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x799290: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x799290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x799294: 0x2448c120  addiu       $t0, $v0, -0x3EE0
    ctx->pc = 0x799294u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951200));
    // 0x799298: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x799298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x79929c: 0x24694c58  addiu       $t1, $v1, 0x4C58
    ctx->pc = 0x79929cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x7992a0: 0x8045c120  lb          $a1, -0x3EE0($v0)
    ctx->pc = 0x7992a0u;
    SET_GPR_S32(ctx, 5, (int8_t)FAST_READ8(0x79C120u));
    // 0x7992a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x7992a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992a8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x7992a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x7992ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7992acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992b0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x7992b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x7992b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7992b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7992b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7992bc: 0x3c130075  lui         $s3, 0x75
    ctx->pc = 0x7992bcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)117 << 16));
    // 0x7992c0: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x7992C0u;
    {
        const bool branch_taken_0x7992c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7992C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992C0u;
        // 0x7992c4: 0x3c14003c  lui         $s4, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992c0) {
            ctx->pc = 0x7992F8u;
            goto label_7992f8;
        }
    }
    ctx->pc = 0x7992C8u;
    // 0x7992c8: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x7992c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992cc: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x7992ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_7992d0:
    // 0x7992d0: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x7992d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x7992d4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x7992d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x7992d8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x7992d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x7992dc: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x7992dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x7992e0: 0x28c30008  slti        $v1, $a2, 0x8
    ctx->pc = 0x7992e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x7992e4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x7992E4u;
    {
        const bool branch_taken_0x7992e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7992E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992E4u;
        // 0x7992e8: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992e4) {
            ctx->pc = 0x7992F8u;
            goto label_7992f8;
        }
    }
    ctx->pc = 0x7992ECu;
    // 0x7992ec: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x7992ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x7992f0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x7992F0u;
    {
        const bool branch_taken_0x7992f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7992f0) {
            ctx->pc = 0x7992F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7992F0u;
            // 0x7992f4: 0x80a20000  lb          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7992D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7992d0;
        }
    }
    ctx->pc = 0x7992F8u;
label_7992f8:
    // 0x7992f8: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x7992f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992fc: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x7992FCu;
    SET_GPR_U32(ctx, 31, 0x799304u);
    ctx->pc = 0x799300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992FCu;
    // 0x799300: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x7992FCu, 0x799304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799304u;
label_799304:
    // 0x799304: 0x26510004  addiu       $s1, $s2, 0x4
    ctx->pc = 0x799304u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x799308: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x799308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x79930c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79930cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799310: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799314: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x799314u;
    SET_GPR_U32(ctx, 31, 0x79931Cu);
    ctx->pc = 0x799318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799314u;
    // 0x799318: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x799314u, 0x79931Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79931Cu;
label_79931c:
    // 0x79931c: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x79931cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x799320: 0x2610ea60  addiu       $s0, $s0, -0x15A0
    ctx->pc = 0x799320u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x799324: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x799324u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x799328: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x799328u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
    // 0x79932c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79932cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799330: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x799330u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
    // 0x799334: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799338: 0xa2400020  sb          $zero, 0x20($s2)
    ctx->pc = 0x799338u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x79933c: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x79933cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
    // 0x799340: 0xae400040  sw          $zero, 0x40($s2)
    ctx->pc = 0x799340u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 0));
    // 0x799344: 0xa2400044  sb          $zero, 0x44($s2)
    ctx->pc = 0x799344u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x799348: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x799348u;
    SET_GPR_U32(ctx, 31, 0x799350u);
    ctx->pc = 0x79934Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799348u;
    // 0x79934c: 0xa2400045  sb          $zero, 0x45($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 69), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799348u, 0x799350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799350u;
label_799350:
    // 0x799350: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799354: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x799354u;
    SET_GPR_U32(ctx, 31, 0x79935Cu);
    ctx->pc = 0x799358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799354u;
    // 0x799358: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799354u, 0x79935Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79935Cu;
label_79935c:
    // 0x79935c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79935cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799360: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x799360u;
    SET_GPR_U32(ctx, 31, 0x799368u);
    ctx->pc = 0x799364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799360u;
    // 0x799364: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799360u, 0x799368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799368u;
label_799368:
    // 0x799368: 0x8e634c38  lw          $v1, 0x4C38($s3)
    ctx->pc = 0x799368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 19512)));
    // 0x79936c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79936cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799370: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x799370u;
    {
        const bool branch_taken_0x799370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799370u;
        // 0x799374: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799370) {
            ctx->pc = 0x799380u;
            goto label_799380;
        }
    }
    ctx->pc = 0x799378u;
label_799378:
    // 0x799378: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x799378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_79937c:
    // 0x79937c: 0x8e634c38  lw          $v1, 0x4C38($s3)
    ctx->pc = 0x79937cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 19512)));
label_799380:
    // 0x799380: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x799380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x799384: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x799384u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x799388: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x799388u;
    {
        const bool branch_taken_0x799388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799388u;
        // 0x79938c: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799388) {
            ctx->pc = 0x7993B8u;
            goto label_7993b8;
        }
    }
    ctx->pc = 0x799390u;
    // 0x799390: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x799390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x799394: 0x90a202fd  lbu         $v0, 0x2FD($a1)
    ctx->pc = 0x799394u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 765)));
    // 0x799398: 0x5443fff8  bnel        $v0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x799398u;
    {
        const bool branch_taken_0x799398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x799398) {
            ctx->pc = 0x79939Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799398u;
            // 0x79939c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79937Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79937c;
        }
    }
    ctx->pc = 0x7993A0u;
    // 0x7993a0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x7993a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x7993a4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x7993a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x7993a8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x7993a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x7993ac: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x7993acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x7993b0: 0x14c3fff1  bne         $a2, $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x7993B0u;
    {
        const bool branch_taken_0x7993b0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x7993B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993B0u;
        // 0x7993b4: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993b0) {
            ctx->pc = 0x799378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799378;
        }
    }
    ctx->pc = 0x7993B8u;
label_7993b8:
    // 0x7993b8: 0x8e842f84  lw          $a0, 0x2F84($s4)
    ctx->pc = 0x7993b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    // 0x7993bc: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7993bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7993c0: 0x24a59840  addiu       $a1, $a1, -0x67C0
    ctx->pc = 0x7993c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940736));
    // 0x7993c4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x7993c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993c8: 0xc0b0e48  jal         func_2C3920
    ctx->pc = 0x7993C8u;
    SET_GPR_U32(ctx, 31, 0x7993D0u);
    ctx->pc = 0x7993CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993C8u;
    // 0x7993cc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3920u, 0x7993C8u, 0x7993D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993D0u;
label_7993d0:
    // 0x7993d0: 0x8e842f84  lw          $a0, 0x2F84($s4)
    ctx->pc = 0x7993d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    // 0x7993d4: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7993d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7993d8: 0x24a59918  addiu       $a1, $a1, -0x66E8
    ctx->pc = 0x7993d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940952));
    // 0x7993dc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x7993dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993e0: 0xc0b0e48  jal         func_2C3920
    ctx->pc = 0x7993E0u;
    SET_GPR_U32(ctx, 31, 0x7993E8u);
    ctx->pc = 0x7993E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993E0u;
    // 0x7993e4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3920u, 0x7993E0u, 0x7993E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993E8u;
label_7993e8:
    // 0x7993e8: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x7993E8u;
    {
        const bool branch_taken_0x7993e8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x7993ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993E8u;
        // 0x7993ec: 0x8e842f84  lw          $a0, 0x2F84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993e8) {
            ctx->pc = 0x79940Cu;
            goto label_79940c;
        }
    }
    ctx->pc = 0x7993F0u;
    // 0x7993f0: 0x24030058  addiu       $v1, $zero, 0x58
    ctx->pc = 0x7993f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x7993f4: 0x8c84001c  lw          $a0, 0x1C($a0)
    ctx->pc = 0x7993f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x7993f8: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x7993f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x7993fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x7993fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x799400: 0x90620050  lbu         $v0, 0x50($v1)
    ctx->pc = 0x799400u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x799404: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x799404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x799408: 0xa0620050  sb          $v0, 0x50($v1)
    ctx->pc = 0x799408u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 80), (uint8_t)GPR_U32(ctx, 2));
label_79940c:
    // 0x79940c: 0x8e842f84  lw          $a0, 0x2F84($s4)
    ctx->pc = 0x79940cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    // 0x799410: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799410u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799414: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799414u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799418: 0x24a59fd8  addiu       $a1, $a1, -0x6028
    ctx->pc = 0x799418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942680));
    // 0x79941c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x79941cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799420: 0xc0b0e48  jal         func_2C3920
    ctx->pc = 0x799420u;
    SET_GPR_U32(ctx, 31, 0x799428u);
    ctx->pc = 0x799424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799420u;
    // 0x799424: 0x3c10005d  lui         $s0, 0x5D (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)93 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3920u, 0x799420u, 0x799428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799428u;
label_799428:
    // 0x799428: 0x2610ae50  addiu       $s0, $s0, -0x51B0
    ctx->pc = 0x799428u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946384));
    // 0x79942c: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79942cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799430: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799434: 0x24a5c128  addiu       $a1, $a1, -0x3ED8
    ctx->pc = 0x799434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951208));
    // 0x799438: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x799438u;
    SET_GPR_U32(ctx, 31, 0x799440u);
    ctx->pc = 0x79943Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799438u;
    // 0x79943c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x799438u, 0x799440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799440u;
label_799440:
    // 0x799440: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799440u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799448: 0x24a5c138  addiu       $a1, $a1, -0x3EC8
    ctx->pc = 0x799448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951224));
    // 0x79944c: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x79944Cu;
    SET_GPR_U32(ctx, 31, 0x799454u);
    ctx->pc = 0x799450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79944Cu;
    // 0x799450: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x79944Cu, 0x799454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799454u;
label_799454:
    // 0x799454: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x799454u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799458: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x799458u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79945c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x79945cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799460: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x799460u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799464: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x799464u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799468: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x799468u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79946c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79946cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799470: 0x3e00008  jr          $ra
    ctx->pc = 0x799470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799470u;
        // 0x799474: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799478u;
}
} // namespace gh_r505
