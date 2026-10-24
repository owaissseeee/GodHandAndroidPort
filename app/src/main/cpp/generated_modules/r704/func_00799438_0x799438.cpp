#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r704_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r704
{
// Function: func_00799438
// Address: 0x799438 - 0x7995f0
void func_00799438_0x799438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799438_0x799438");
#endif

    switch (ctx->pc) {
        case 0x79946cu: goto label_79946c;
        case 0x799484u: goto label_799484;
        case 0x799498u: goto label_799498;
        case 0x7994b8u: goto label_7994b8;
        case 0x7994d8u: goto label_7994d8;
        case 0x7994e4u: goto label_7994e4;
        case 0x7994f0u: goto label_7994f0;
        case 0x799504u: goto label_799504;
        case 0x799520u: goto label_799520;
        case 0x799528u: goto label_799528;
        case 0x799538u: goto label_799538;
        case 0x799544u: goto label_799544;
        case 0x799550u: goto label_799550;
        case 0x799558u: goto label_799558;
        case 0x799574u: goto label_799574;
        case 0x79957cu: goto label_79957c;
        case 0x799584u: goto label_799584;
        case 0x799598u: goto label_799598;
        case 0x7995acu: goto label_7995ac;
        case 0x7995c0u: goto label_7995c0;
        case 0x7995ccu: goto label_7995cc;
        default: break;
    }

    ctx->pc = 0x799438u;

    // 0x799438: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x799438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x79943c: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x79943cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x799440: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x799440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x799444: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799448: 0x24508658  addiu       $s0, $v0, -0x79A8
    ctx->pc = 0x799448u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936152));
    // 0x79944c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x79944cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x799450: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x799450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x799454: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x799454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x799458: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x799458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x79945c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x79945cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x799460: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x799464: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x799464u;
    SET_GPR_U32(ctx, 31, 0x79946Cu);
    ctx->pc = 0x799468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799464u;
    // 0x799468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799464u, 0x79946Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79946Cu;
label_79946c:
    // 0x79946c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79946cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799470: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x799470u;
    {
        const bool branch_taken_0x799470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799470u;
        // 0x799474: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799470) {
            ctx->pc = 0x79948Cu;
            goto label_79948c;
        }
    }
    ctx->pc = 0x799478u;
    // 0x799478: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x799478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    // 0x79947c: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79947Cu;
    SET_GPR_U32(ctx, 31, 0x799484u);
    ctx->pc = 0x799480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79947Cu;
    // 0x799480: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79947Cu, 0x799484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799484u;
label_799484:
    // 0x799484: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x799484u;
    {
        const bool branch_taken_0x799484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799484u;
        // 0x799488: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799484) {
            ctx->pc = 0x7995D0u;
            goto label_7995d0;
        }
    }
    ctx->pc = 0x79948Cu;
label_79948c:
    // 0x79948c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79948cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799490: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x799490u;
    SET_GPR_U32(ctx, 31, 0x799498u);
    ctx->pc = 0x799494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799490u;
    // 0x799494: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799490u, 0x799498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799498u;
label_799498:
    // 0x799498: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x799498u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x79949c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x79949cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7994a0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x7994a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x7994a4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x7994a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x7994a8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x7994a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7994ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7994acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7994b0: 0xc0b42ae  jal         func_2D0AB8
    ctx->pc = 0x7994B0u;
    SET_GPR_U32(ctx, 31, 0x7994B8u);
    ctx->pc = 0x7994B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994B0u;
    // 0x7994b4: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x7994B0u, 0x7994B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994B8u;
label_7994b8:
    // 0x7994b8: 0x3c120074  lui         $s2, 0x74
    ctx->pc = 0x7994b8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)116 << 16));
    // 0x7994bc: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x7994bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x7994c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7994c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7994c4: 0x3c104000  lui         $s0, 0x4000
    ctx->pc = 0x7994c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)16384 << 16));
    // 0x7994c8: 0x3c150058  lui         $s5, 0x58
    ctx->pc = 0x7994c8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)88 << 16));
    // 0x7994cc: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x7994ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x7994d0: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7994D0u;
    SET_GPR_U32(ctx, 31, 0x7994D8u);
    ctx->pc = 0x7994D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994D0u;
    // 0x7994d4: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7994D0u, 0x7994D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994D8u;
label_7994d8:
    // 0x7994d8: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x7994d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x7994dc: 0xc0a5780  jal         func_295E00
    ctx->pc = 0x7994DCu;
    SET_GPR_U32(ctx, 31, 0x7994E4u);
    ctx->pc = 0x7994E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994DCu;
    // 0x7994e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E00u, 0x7994DCu, 0x7994E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994E4u;
label_7994e4:
    // 0x7994e4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x7994e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994e8: 0x8e427a8c  lw          $v0, 0x7A8C($s2)
    ctx->pc = 0x7994e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 31372)));
    // 0x7994ec: 0x0  nop
    ctx->pc = 0x7994ecu;
    // NOP
label_7994f0:
    // 0x7994f0: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x7994f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x7994f4: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x7994F4u;
    {
        const bool branch_taken_0x7994f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7994f4) {
            ctx->pc = 0x79957Cu;
            goto label_79957c;
        }
    }
    ctx->pc = 0x7994FCu;
    // 0x7994fc: 0xc0a5772  jal         func_295DC8
    ctx->pc = 0x7994FCu;
    SET_GPR_U32(ctx, 31, 0x799504u);
    ctx->pc = 0x799500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994FCu;
    // 0x799500: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DC8u, 0x7994FCu, 0x799504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799504u;
label_799504:
    // 0x799504: 0x1840001d  blez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x799504u;
    {
        const bool branch_taken_0x799504 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x799508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799504u;
        // 0x799508: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799504) {
            ctx->pc = 0x79957Cu;
            goto label_79957c;
        }
    }
    ctx->pc = 0x79950Cu;
    // 0x79950c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x79950cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x799510: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x799510u;
    {
        const bool branch_taken_0x799510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799510) {
            ctx->pc = 0x79957Cu;
            goto label_79957c;
        }
    }
    ctx->pc = 0x799518u;
    // 0x799518: 0xc0b0fa2  jal         func_2C3E88
    ctx->pc = 0x799518u;
    SET_GPR_U32(ctx, 31, 0x799520u);
    ctx->pc = 0x79951Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799518u;
    // 0x79951c: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E88u, 0x799518u, 0x799520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799520u;
label_799520:
    // 0x799520: 0xc0a5772  jal         func_295DC8
    ctx->pc = 0x799520u;
    SET_GPR_U32(ctx, 31, 0x799528u);
    ctx->pc = 0x799524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799520u;
    // 0x799524: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DC8u, 0x799520u, 0x799528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799528u;
label_799528:
    // 0x799528: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x799528u;
    {
        const bool branch_taken_0x799528 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x79952Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799528u;
        // 0x79952c: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799528) {
            ctx->pc = 0x79957Cu;
            goto label_79957c;
        }
    }
    ctx->pc = 0x799530u;
    // 0x799530: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x799530u;
    SET_GPR_U32(ctx, 31, 0x799538u);
    ctx->pc = 0x799534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799530u;
    // 0x799534: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x799530u, 0x799538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799538u;
label_799538:
    // 0x799538: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79953c: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x79953Cu;
    SET_GPR_U32(ctx, 31, 0x799544u);
    ctx->pc = 0x799540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79953Cu;
    // 0x799540: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79953Cu, 0x799544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799544u;
label_799544:
    // 0x799544: 0x93a50000  lbu         $a1, 0x0($sp)
    ctx->pc = 0x799544u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799548: 0xc0a421a  jal         func_290868
    ctx->pc = 0x799548u;
    SET_GPR_U32(ctx, 31, 0x799550u);
    ctx->pc = 0x79954Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799548u;
    // 0x79954c: 0x26a464f0  addiu       $a0, $s5, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x799548u, 0x799550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799550u;
label_799550:
    // 0x799550: 0xc09d874  jal         func_2761D0
    ctx->pc = 0x799550u;
    SET_GPR_U32(ctx, 31, 0x799558u);
    ctx->pc = 0x799554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799550u;
    // 0x799554: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2761D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2761D0u, 0x799550u, 0x799558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799558u;
label_799558:
    // 0x799558: 0x8e427a8c  lw          $v0, 0x7A8C($s2)
    ctx->pc = 0x799558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 31372)));
    // 0x79955c: 0x240500bf  addiu       $a1, $zero, 0xBF
    ctx->pc = 0x79955cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
    // 0x799560: 0x8e232f84  lw          $v1, 0x2F84($s1)
    ctx->pc = 0x799560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799564: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x799564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x799568: 0xae427a8c  sw          $v0, 0x7A8C($s2)
    ctx->pc = 0x799568u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 31372), GPR_U32(ctx, 2));
    // 0x79956c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79956Cu;
    SET_GPR_U32(ctx, 31, 0x799574u);
    ctx->pc = 0x799570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79956Cu;
    // 0x799570: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79956Cu, 0x799574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799574u;
label_799574:
    // 0x799574: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x799574u;
    SET_GPR_U32(ctx, 31, 0x79957Cu);
    ctx->pc = 0x799578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799574u;
    // 0x799578: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x799574u, 0x79957Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79957Cu;
label_79957c:
    // 0x79957c: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79957Cu;
    SET_GPR_U32(ctx, 31, 0x799584u);
    ctx->pc = 0x799580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79957Cu;
    // 0x799580: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79957Cu, 0x799584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799584u;
label_799584:
    // 0x799584: 0x10540006  beq         $v0, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x799584u;
    {
        const bool branch_taken_0x799584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x799588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799584u;
        // 0x799588: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799584) {
            ctx->pc = 0x7995A0u;
            goto label_7995a0;
        }
    }
    ctx->pc = 0x79958Cu;
    // 0x79958c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79958cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799590: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799590u;
    SET_GPR_U32(ctx, 31, 0x799598u);
    ctx->pc = 0x799594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799590u;
    // 0x799594: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799590u, 0x799598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799598u;
label_799598:
    // 0x799598: 0x1000ffd5  b           . + 4 + (-0x2B << 2)
    ctx->pc = 0x799598u;
    {
        const bool branch_taken_0x799598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799598u;
        // 0x79959c: 0x8e427a8c  lw          $v0, 0x7A8C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 31372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799598) {
            ctx->pc = 0x7994F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7994f0;
        }
    }
    ctx->pc = 0x7995A0u;
label_7995a0:
    // 0x7995a0: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x7995a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x7995a4: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7995A4u;
    SET_GPR_U32(ctx, 31, 0x7995ACu);
    ctx->pc = 0x7995A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995A4u;
    // 0x7995a8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7995A4u, 0x7995ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995ACu;
label_7995ac:
    // 0x7995ac: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x7995acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x7995b0: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7995b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7995b4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x7995b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7995b8: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x7995B8u;
    SET_GPR_U32(ctx, 31, 0x7995C0u);
    ctx->pc = 0x7995BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995B8u;
    // 0x7995bc: 0x24a59380  addiu       $a1, $a1, -0x6C80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7995B8u, 0x7995C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995C0u;
label_7995c0:
    // 0x7995c0: 0x8e232f84  lw          $v1, 0x2F84($s1)
    ctx->pc = 0x7995c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x7995c4: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x7995C4u;
    SET_GPR_U32(ctx, 31, 0x7995CCu);
    ctx->pc = 0x7995C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995C4u;
    // 0x7995c8: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x7995C4u, 0x7995CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995CCu;
label_7995cc:
    // 0x7995cc: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x7995ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_7995d0:
    // 0x7995d0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x7995d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7995d4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x7995d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7995d8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x7995d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7995dc: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x7995dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7995e0: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x7995e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7995e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7995e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7995e8: 0x3e00008  jr          $ra
    ctx->pc = 0x7995E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7995ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995E8u;
        // 0x7995ec: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
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
} // namespace gh_r704
