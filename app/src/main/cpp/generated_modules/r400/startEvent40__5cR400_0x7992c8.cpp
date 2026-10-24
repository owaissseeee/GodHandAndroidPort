#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r400_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r400
{
// Function: startEvent40__5cR400
// Address: 0x7992c8 - 0x799458
void startEvent40__5cR400_0x7992c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("startEvent40__5cR400_0x7992c8");
#endif

    switch (ctx->pc) {
        case 0x799328u: goto label_799328;
        case 0x79935cu: goto label_79935c;
        case 0x799380u: goto label_799380;
        case 0x7993b0u: goto label_7993b0;
        case 0x7993ecu: goto label_7993ec;
        case 0x79942cu: goto label_79942c;
        case 0x79943cu: goto label_79943c;
        default: break;
    }

    ctx->pc = 0x7992c8u;

    // 0x7992c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x7992c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x7992cc: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x7992ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x7992d0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x7992d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x7992d4: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x7992d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x7992d8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x7992d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x7992dc: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7992dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7992e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x7992e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x7992e4: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x7992e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x7992e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7992e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7992ec: 0x24a89720  addiu       $t0, $a1, -0x68E0
    ctx->pc = 0x7992ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940448));
    // 0x7992f0: 0x8c448658  lw          $a0, -0x79A8($v0)
    ctx->pc = 0x7992f0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5E8658u));
    // 0x7992f4: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x7992f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992f8: 0x24694c58  addiu       $t1, $v1, 0x4C58
    ctx->pc = 0x7992f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x7992fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7992fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799300: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x799300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x799304: 0x3c10007a  lui         $s0, 0x7A
    ctx->pc = 0x799304u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    // 0x799308: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x799308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x79930c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x79930cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x799310: 0x80a29720  lb          $v0, -0x68E0($a1)
    ctx->pc = 0x799310u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x799720u));
    // 0x799314: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x799314u;
    {
        const bool branch_taken_0x799314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799314u;
        // 0x799318: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799314) {
            ctx->pc = 0x799350u;
            goto label_799350;
        }
    }
    ctx->pc = 0x79931Cu;
    // 0x79931c: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x79931cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799320: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x799320u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x799324: 0x0  nop
    ctx->pc = 0x799324u;
    // NOP
label_799328:
    // 0x799328: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x799328u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x79932c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79932cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799330: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x799330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x799334: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799338: 0x28c30008  slti        $v1, $a2, 0x8
    ctx->pc = 0x799338u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79933c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79933Cu;
    {
        const bool branch_taken_0x79933c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79933Cu;
        // 0x799340: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79933c) {
            ctx->pc = 0x799350u;
            goto label_799350;
        }
    }
    ctx->pc = 0x799344u;
    // 0x799344: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x799344u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x799348: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799348u;
    {
        const bool branch_taken_0x799348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799348) {
            ctx->pc = 0x79934Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799348u;
            // 0x79934c: 0x80a20000  lb          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799328;
        }
    }
    ctx->pc = 0x799350u;
label_799350:
    // 0x799350: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x799350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799354: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799354u;
    SET_GPR_U32(ctx, 31, 0x79935Cu);
    ctx->pc = 0x799358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799354u;
    // 0x799358: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799354u, 0x79935Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79935Cu;
label_79935c:
    // 0x79935c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x79935cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799360: 0x26484c58  addiu       $t0, $s2, 0x4C58
    ctx->pc = 0x799360u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 19544));
    // 0x799364: 0x82029728  lb          $v0, -0x68D8($s0)
    ctx->pc = 0x799364u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294940456)));
    // 0x799368: 0x26039728  addiu       $v1, $s0, -0x68D8
    ctx->pc = 0x799368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294940456));
    // 0x79936c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79936cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799370: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x799370u;
    {
        const bool branch_taken_0x799370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799370u;
        // 0x799374: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799370) {
            ctx->pc = 0x7993A8u;
            goto label_7993a8;
        }
    }
    ctx->pc = 0x799378u;
    // 0x799378: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799378u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79937c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79937cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799380:
    // 0x799380: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799380u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799384: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799384u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799388: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79938c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79938cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799390: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799390u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799394: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799394u;
    {
        const bool branch_taken_0x799394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799394u;
        // 0x799398: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799394) {
            ctx->pc = 0x7993A8u;
            goto label_7993a8;
        }
    }
    ctx->pc = 0x79939Cu;
    // 0x79939c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79939cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7993a0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x7993A0u;
    {
        const bool branch_taken_0x7993a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7993a0) {
            ctx->pc = 0x7993A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7993A0u;
            // 0x7993a4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799380;
        }
    }
    ctx->pc = 0x7993A8u;
label_7993a8:
    // 0x7993a8: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x7993A8u;
    SET_GPR_U32(ctx, 31, 0x7993B0u);
    ctx->pc = 0x7993ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993A8u;
    // 0x7993ac: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x7993A8u, 0x7993B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993B0u;
label_7993b0:
    // 0x7993b0: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x7993B0u;
    {
        const bool branch_taken_0x7993b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993B0u;
        // 0x7993b4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993b0) {
            ctx->pc = 0x7993C8u;
            goto label_7993c8;
        }
    }
    ctx->pc = 0x7993B8u;
    // 0x7993b8: 0x8e2205b8  lw          $v0, 0x5B8($s1)
    ctx->pc = 0x7993b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x7993bc: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x7993bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x7993c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7993c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7993c4: 0xae2205b8  sw          $v0, 0x5B8($s1)
    ctx->pc = 0x7993c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1464), GPR_U32(ctx, 2));
label_7993c8:
    // 0x7993c8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7993C8u;
    {
        const bool branch_taken_0x7993c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993C8u;
        // 0x7993cc: 0x2403ffbf  addiu       $v1, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993c8) {
            ctx->pc = 0x7993DCu;
            goto label_7993dc;
        }
    }
    ctx->pc = 0x7993D0u;
    // 0x7993d0: 0x8e0205b8  lw          $v0, 0x5B8($s0)
    ctx->pc = 0x7993d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
    // 0x7993d4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7993d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7993d8: 0xae0205b8  sw          $v0, 0x5B8($s0)
    ctx->pc = 0x7993d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1464), GPR_U32(ctx, 2));
label_7993dc:
    // 0x7993dc: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x7993dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x7993e0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x7993e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x7993e4: 0xc0a58dc  jal         func_296370
    ctx->pc = 0x7993E4u;
    SET_GPR_U32(ctx, 31, 0x7993ECu);
    ctx->pc = 0x7993E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993E4u;
    // 0x7993e8: 0x24846af0  addiu       $a0, $a0, 0x6AF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296370u, 0x7993E4u, 0x7993ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993ECu;
label_7993ec:
    // 0x7993ec: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x7993ECu;
    {
        const bool branch_taken_0x7993ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x7993ec) {
            ctx->pc = 0x799400u;
            goto label_799400;
        }
    }
    ctx->pc = 0x7993F4u;
    // 0x7993f4: 0x8e2205b8  lw          $v0, 0x5B8($s1)
    ctx->pc = 0x7993f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1464)));
    // 0x7993f8: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x7993f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x7993fc: 0xae2205b8  sw          $v0, 0x5B8($s1)
    ctx->pc = 0x7993fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1464), GPR_U32(ctx, 2));
label_799400:
    // 0x799400: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x799400u;
    {
        const bool branch_taken_0x799400 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x799404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799400u;
        // 0x799404: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799400) {
            ctx->pc = 0x799418u;
            goto label_799418;
        }
    }
    ctx->pc = 0x799408u;
    // 0x799408: 0x8e0205b8  lw          $v0, 0x5B8($s0)
    ctx->pc = 0x799408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1464)));
    // 0x79940c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x79940cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x799410: 0xae0205b8  sw          $v0, 0x5B8($s0)
    ctx->pc = 0x799410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1464), GPR_U32(ctx, 2));
    // 0x799414: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x799414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_799418:
    // 0x799418: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79941c: 0x8c44264c  lw          $a0, 0x264C($v0)
    ctx->pc = 0x79941cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9804)));
    // 0x799420: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799420u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799424: 0xc0b016c  jal         func_2C05B0
    ctx->pc = 0x799424u;
    SET_GPR_U32(ctx, 31, 0x79942Cu);
    ctx->pc = 0x799428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799424u;
    // 0x799428: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x799424u, 0x79942Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79942Cu;
label_79942c:
    // 0x79942c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79942cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x799430: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x799430u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x799434: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799434u;
    SET_GPR_U32(ctx, 31, 0x79943Cu);
    ctx->pc = 0x799438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799434u;
    // 0x799438: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799434u, 0x79943Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79943Cu;
label_79943c:
    // 0x79943c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x79943cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799440: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x799440u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799444: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x799444u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799448: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79944c: 0x3e00008  jr          $ra
    ctx->pc = 0x79944Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79944Cu;
        // 0x799450: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79944Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799454u;
    // 0x799454: 0x0  nop
    ctx->pc = 0x799454u;
    // NOP
    ctx->pc = 0x799458u;
}
} // namespace gh_r400
