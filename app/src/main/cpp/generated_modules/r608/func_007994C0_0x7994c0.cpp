#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r608_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r608
{
// Function: func_007994C0
// Address: 0x7994c0 - 0x7995f0
void func_007994C0_0x7994c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007994C0_0x7994c0");
#endif

    switch (ctx->pc) {
        case 0x799500u: goto label_799500;
        case 0x799510u: goto label_799510;
        case 0x799520u: goto label_799520;
        case 0x79954cu: goto label_79954c;
        case 0x799570u: goto label_799570;
        case 0x799580u: goto label_799580;
        case 0x799590u: goto label_799590;
        case 0x7995bcu: goto label_7995bc;
        case 0x7995c8u: goto label_7995c8;
        case 0x7995d4u: goto label_7995d4;
        default: break;
    }

    ctx->pc = 0x7994c0u;

    // 0x7994c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x7994c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x7994c4: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x7994c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x7994c8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x7994c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x7994cc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x7994ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x7994d0: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x7994d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x7994d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x7994d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x7994d8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x7994d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x7994dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x7994dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7994e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7994e4: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x7994e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x7994e8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7994e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x7994ec: 0x4400017  bltz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x7994ECu;
    {
        const bool branch_taken_0x7994ec = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x7994F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994ECu;
        // 0x7994f0: 0x3c11003c  lui         $s1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994ec) {
            ctx->pc = 0x79954Cu;
            goto label_79954c;
        }
    }
    ctx->pc = 0x7994F4u;
    // 0x7994f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x7994F4u;
    {
        const bool branch_taken_0x7994f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994F4u;
        // 0x7994f8: 0x3c13003c  lui         $s3, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994f4) {
            ctx->pc = 0x799510u;
            goto label_799510;
        }
    }
    ctx->pc = 0x7994FCu;
    // 0x7994fc: 0x0  nop
    ctx->pc = 0x7994fcu;
    // NOP
label_799500:
    // 0x799500: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x799500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799504: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799508: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799508u;
    SET_GPR_U32(ctx, 31, 0x799510u);
    ctx->pc = 0x79950Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799508u;
    // 0x79950c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799508u, 0x799510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799510u;
label_799510:
    // 0x799510: 0x2604ea60  addiu       $a0, $s0, -0x15A0
    ctx->pc = 0x799510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x799514: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x799514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x799518: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x799518u;
    SET_GPR_U32(ctx, 31, 0x799520u);
    ctx->pc = 0x79951Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799518u;
    // 0x79951c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x799518u, 0x799520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799520u;
label_799520:
    // 0x799520: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799520u;
    {
        const bool branch_taken_0x799520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799520u;
        // 0x799524: 0x8e428658  lw          $v0, -0x79A8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799520) {
            ctx->pc = 0x799500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799500;
        }
    }
    ctx->pc = 0x799528u;
    // 0x799528: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x799528u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x79952c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79952cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799530: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799530u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799534: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x799534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x799538: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799538u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79953c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x79953cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x799540: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x799540u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x799544: 0xc0b016c  jal         func_2C05B0
    ctx->pc = 0x799544u;
    SET_GPR_U32(ctx, 31, 0x79954Cu);
    ctx->pc = 0x799548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799544u;
    // 0x799548: 0x8e64264c  lw          $a0, 0x264C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 9804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x799544u, 0x79954Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79954Cu;
label_79954c:
    // 0x79954c: 0x8e428658  lw          $v0, -0x79A8($s2)
    ctx->pc = 0x79954cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
    // 0x799550: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x799550u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x799554: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x799554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x799558: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x799558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x79955c: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x79955Cu;
    {
        const bool branch_taken_0x79955c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79955Cu;
        // 0x799560: 0x2604ea60  addiu       $a0, $s0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79955c) {
            ctx->pc = 0x7995C0u;
            goto label_7995c0;
        }
    }
    ctx->pc = 0x799564u;
    // 0x799564: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x799564u;
    {
        const bool branch_taken_0x799564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799564u;
        // 0x799568: 0x3c13003c  lui         $s3, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799564) {
            ctx->pc = 0x799584u;
            goto label_799584;
        }
    }
    ctx->pc = 0x79956Cu;
    // 0x79956c: 0x0  nop
    ctx->pc = 0x79956cu;
    // NOP
label_799570:
    // 0x799570: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x799570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799574: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799578: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799578u;
    SET_GPR_U32(ctx, 31, 0x799580u);
    ctx->pc = 0x79957Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799578u;
    // 0x79957c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799578u, 0x799580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799580u;
label_799580:
    // 0x799580: 0x2604ea60  addiu       $a0, $s0, -0x15A0
    ctx->pc = 0x799580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
label_799584:
    // 0x799584: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x799584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x799588: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x799588u;
    SET_GPR_U32(ctx, 31, 0x799590u);
    ctx->pc = 0x79958Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799588u;
    // 0x79958c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x799588u, 0x799590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799590u;
label_799590:
    // 0x799590: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799590u;
    {
        const bool branch_taken_0x799590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799590u;
        // 0x799594: 0x8e428658  lw          $v0, -0x79A8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799590) {
            ctx->pc = 0x799570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799570;
        }
    }
    ctx->pc = 0x799598u;
    // 0x799598: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x799598u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x79959c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79959cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7995a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995a4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x7995a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x7995a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7995a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995ac: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x7995acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x7995b0: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x7995b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x7995b4: 0xc0b016c  jal         func_2C05B0
    ctx->pc = 0x7995B4u;
    SET_GPR_U32(ctx, 31, 0x7995BCu);
    ctx->pc = 0x7995B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995B4u;
    // 0x7995b8: 0x8e64264c  lw          $a0, 0x264C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 9804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x7995B4u, 0x7995BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995BCu;
label_7995bc:
    // 0x7995bc: 0x2604ea60  addiu       $a0, $s0, -0x15A0
    ctx->pc = 0x7995bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
label_7995c0:
    // 0x7995c0: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x7995C0u;
    SET_GPR_U32(ctx, 31, 0x7995C8u);
    ctx->pc = 0x7995C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995C0u;
    // 0x7995c4: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x7995C0u, 0x7995C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995C8u;
label_7995c8:
    // 0x7995c8: 0x8e232f84  lw          $v1, 0x2F84($s1)
    ctx->pc = 0x7995c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x7995cc: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x7995CCu;
    SET_GPR_U32(ctx, 31, 0x7995D4u);
    ctx->pc = 0x7995D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995CCu;
    // 0x7995d0: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x7995CCu, 0x7995D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995D4u;
label_7995d4:
    // 0x7995d4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x7995d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7995d8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x7995d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7995dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x7995dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7995e0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x7995e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7995e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7995e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7995e8: 0x3e00008  jr          $ra
    ctx->pc = 0x7995E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7995ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995E8u;
        // 0x7995ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7995E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7995F0u;
}
} // namespace gh_r608
