#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r023_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r023
{
// Function: ending__5cR023
// Address: 0x799358 - 0x799510
void ending__5cR023_0x799358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ending__5cR023_0x799358");
#endif

    switch (ctx->pc) {
        case 0x799358u: goto label_799358;
        case 0x79935cu: goto label_79935c;
        case 0x799360u: goto label_799360;
        case 0x799364u: goto label_799364;
        case 0x799368u: goto label_799368;
        case 0x79936cu: goto label_79936c;
        case 0x799370u: goto label_799370;
        case 0x799374u: goto label_799374;
        case 0x799378u: goto label_799378;
        case 0x79937cu: goto label_79937c;
        case 0x799380u: goto label_799380;
        case 0x799384u: goto label_799384;
        case 0x799388u: goto label_799388;
        case 0x79938cu: goto label_79938c;
        case 0x799390u: goto label_799390;
        case 0x799394u: goto label_799394;
        case 0x799398u: goto label_799398;
        case 0x79939cu: goto label_79939c;
        case 0x7993a0u: goto label_7993a0;
        case 0x7993a4u: goto label_7993a4;
        case 0x7993a8u: goto label_7993a8;
        case 0x7993acu: goto label_7993ac;
        case 0x7993b0u: goto label_7993b0;
        case 0x7993b4u: goto label_7993b4;
        case 0x7993b8u: goto label_7993b8;
        case 0x7993bcu: goto label_7993bc;
        case 0x7993c0u: goto label_7993c0;
        case 0x7993c4u: goto label_7993c4;
        case 0x7993c8u: goto label_7993c8;
        case 0x7993ccu: goto label_7993cc;
        case 0x7993d0u: goto label_7993d0;
        case 0x7993d4u: goto label_7993d4;
        case 0x7993d8u: goto label_7993d8;
        case 0x7993dcu: goto label_7993dc;
        case 0x7993e0u: goto label_7993e0;
        case 0x7993e4u: goto label_7993e4;
        case 0x7993e8u: goto label_7993e8;
        case 0x7993ecu: goto label_7993ec;
        case 0x7993f0u: goto label_7993f0;
        case 0x7993f4u: goto label_7993f4;
        case 0x7993f8u: goto label_7993f8;
        case 0x7993fcu: goto label_7993fc;
        case 0x799400u: goto label_799400;
        case 0x799404u: goto label_799404;
        case 0x799408u: goto label_799408;
        case 0x79940cu: goto label_79940c;
        case 0x799410u: goto label_799410;
        case 0x799414u: goto label_799414;
        case 0x799418u: goto label_799418;
        case 0x79941cu: goto label_79941c;
        case 0x799420u: goto label_799420;
        case 0x799424u: goto label_799424;
        case 0x799428u: goto label_799428;
        case 0x79942cu: goto label_79942c;
        case 0x799430u: goto label_799430;
        case 0x799434u: goto label_799434;
        case 0x799438u: goto label_799438;
        case 0x79943cu: goto label_79943c;
        case 0x799440u: goto label_799440;
        case 0x799444u: goto label_799444;
        case 0x799448u: goto label_799448;
        case 0x79944cu: goto label_79944c;
        case 0x799450u: goto label_799450;
        case 0x799454u: goto label_799454;
        case 0x799458u: goto label_799458;
        case 0x79945cu: goto label_79945c;
        case 0x799460u: goto label_799460;
        case 0x799464u: goto label_799464;
        case 0x799468u: goto label_799468;
        case 0x79946cu: goto label_79946c;
        case 0x799470u: goto label_799470;
        case 0x799474u: goto label_799474;
        case 0x799478u: goto label_799478;
        case 0x79947cu: goto label_79947c;
        case 0x799480u: goto label_799480;
        case 0x799484u: goto label_799484;
        case 0x799488u: goto label_799488;
        case 0x79948cu: goto label_79948c;
        case 0x799490u: goto label_799490;
        case 0x799494u: goto label_799494;
        case 0x799498u: goto label_799498;
        case 0x79949cu: goto label_79949c;
        case 0x7994a0u: goto label_7994a0;
        case 0x7994a4u: goto label_7994a4;
        case 0x7994a8u: goto label_7994a8;
        case 0x7994acu: goto label_7994ac;
        case 0x7994b0u: goto label_7994b0;
        case 0x7994b4u: goto label_7994b4;
        case 0x7994b8u: goto label_7994b8;
        case 0x7994bcu: goto label_7994bc;
        case 0x7994c0u: goto label_7994c0;
        case 0x7994c4u: goto label_7994c4;
        case 0x7994c8u: goto label_7994c8;
        case 0x7994ccu: goto label_7994cc;
        case 0x7994d0u: goto label_7994d0;
        case 0x7994d4u: goto label_7994d4;
        case 0x7994d8u: goto label_7994d8;
        case 0x7994dcu: goto label_7994dc;
        case 0x7994e0u: goto label_7994e0;
        case 0x7994e4u: goto label_7994e4;
        case 0x7994e8u: goto label_7994e8;
        case 0x7994ecu: goto label_7994ec;
        case 0x7994f0u: goto label_7994f0;
        case 0x7994f4u: goto label_7994f4;
        case 0x7994f8u: goto label_7994f8;
        case 0x7994fcu: goto label_7994fc;
        case 0x799500u: goto label_799500;
        case 0x799504u: goto label_799504;
        case 0x799508u: goto label_799508;
        case 0x79950cu: goto label_79950c;
        default: break;
    }

    ctx->pc = 0x799358u;

label_799358:
    // 0x799358: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x799358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_79935c:
    // 0x79935c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79935cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799360:
    // 0x799360: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x799360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_799364:
    // 0x799364: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x799364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799368:
    // 0x799368: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x799368u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
label_79936c:
    // 0x79936c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x79936cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_799370:
    // 0x799370: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x799370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_799374:
    // 0x799374: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x799374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_799378:
    // 0x799378: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x799378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_79937c:
    // 0x79937c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x79937cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_799380:
    // 0x799380: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x799380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_799384:
    // 0x799384: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_799388:
    // 0x799388: 0xc0ad2fa  jal         func_2B4BE8
label_79938c:
    if (ctx->pc == 0x79938Cu) {
        ctx->pc = 0x79938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799388u;
        // 0x79938c: 0x260479d0  addiu       $a0, $s0, 0x79D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 31184));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799390u;
        goto label_799390;
    }
    ctx->pc = 0x799388u;
    SET_GPR_U32(ctx, 31, 0x799390u);
    ctx->pc = 0x79938Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799388u;
    // 0x79938c: 0x260479d0  addiu       $a0, $s0, 0x79D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 31184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4BE8u, 0x799388u, 0x799390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799390u;
label_799390:
    // 0x799390: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x799390u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799394:
    // 0x799394: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x799394u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799398:
    // 0x799398: 0x3c14003c  lui         $s4, 0x3C
    ctx->pc = 0x799398u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
label_79939c:
    // 0x79939c: 0x3c100074  lui         $s0, 0x74
    ctx->pc = 0x79939cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)116 << 16));
label_7993a0:
    // 0x7993a0: 0x3c150074  lui         $s5, 0x74
    ctx->pc = 0x7993a0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)116 << 16));
label_7993a4:
    // 0x7993a4: 0x10000005  b           . + 4 + (0x5 << 2)
label_7993a8:
    if (ctx->pc == 0x7993A8u) {
        ctx->pc = 0x7993A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993A4u;
        // 0x7993a8: 0x3c160074  lui         $s6, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993ACu;
        goto label_7993ac;
    }
    ctx->pc = 0x7993A4u;
    {
        const bool branch_taken_0x7993a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993A4u;
        // 0x7993a8: 0x3c160074  lui         $s6, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993a4) {
            ctx->pc = 0x7993BCu;
            goto label_7993bc;
        }
    }
    ctx->pc = 0x7993ACu;
label_7993ac:
    // 0x7993ac: 0x0  nop
    ctx->pc = 0x7993acu;
    // NOP
label_7993b0:
    // 0x7993b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7993b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7993b4:
    // 0x7993b4: 0xc0b56a8  jal         func_2D5AA0
label_7993b8:
    if (ctx->pc == 0x7993B8u) {
        ctx->pc = 0x7993B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993B4u;
        // 0x7993b8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993BCu;
        goto label_7993bc;
    }
    ctx->pc = 0x7993B4u;
    SET_GPR_U32(ctx, 31, 0x7993BCu);
    ctx->pc = 0x7993B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993B4u;
    // 0x7993b8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7993B4u, 0x7993BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993BCu;
label_7993bc:
    // 0x7993bc: 0x8e027a80  lw          $v0, 0x7A80($s0)
    ctx->pc = 0x7993bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 31360)));
label_7993c0:
    // 0x7993c0: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x7993c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
label_7993c4:
    // 0x7993c4: 0x267179d0  addiu       $s1, $s3, 0x79D0
    ctx->pc = 0x7993c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 31184));
label_7993c8:
    // 0x7993c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x7993c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_7993cc:
    // 0x7993cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x7993ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_7993d0:
    // 0x7993d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7993d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_7993d4:
    // 0x7993d4: 0xc0ad3b2  jal         func_2B4EC8
label_7993d8:
    if (ctx->pc == 0x7993D8u) {
        ctx->pc = 0x7993D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993D4u;
        // 0x7993d8: 0xae027a80  sw          $v0, 0x7A80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 31360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993DCu;
        goto label_7993dc;
    }
    ctx->pc = 0x7993D4u;
    SET_GPR_U32(ctx, 31, 0x7993DCu);
    ctx->pc = 0x7993D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993D4u;
    // 0x7993d8: 0xae027a80  sw          $v0, 0x7A80($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 31360), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4EC8u, 0x7993D4u, 0x7993DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993DCu;
label_7993dc:
    // 0x7993dc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_7993e0:
    if (ctx->pc == 0x7993E0u) {
        ctx->pc = 0x7993E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993DCu;
        // 0x7993e0: 0x8e822f84  lw          $v0, 0x2F84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7993E4u;
        goto label_7993e4;
    }
    ctx->pc = 0x7993DCu;
    {
        const bool branch_taken_0x7993dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7993E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993DCu;
        // 0x7993e0: 0x8e822f84  lw          $v0, 0x2F84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993dc) {
            ctx->pc = 0x7993B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7993b0;
        }
    }
    ctx->pc = 0x7993E4u;
label_7993e4:
    // 0x7993e4: 0x26b07470  addiu       $s0, $s5, 0x7470
    ctx->pc = 0x7993e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 29808));
label_7993e8:
    // 0x7993e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7993e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7993ec:
    // 0x7993ec: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x7993ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_7993f0:
    // 0x7993f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7993f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7993f4:
    // 0x7993f4: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x7993f4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
label_7993f8:
    // 0x7993f8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x7993f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7993fc:
    // 0x7993fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7993fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799400:
    // 0x799400: 0xc0c1c82  jal         func_307208
label_799404:
    if (ctx->pc == 0x799404u) {
        ctx->pc = 0x799404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799400u;
        // 0x799404: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799408u;
        goto label_799408;
    }
    ctx->pc = 0x799400u;
    SET_GPR_U32(ctx, 31, 0x799408u);
    ctx->pc = 0x799404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799400u;
    // 0x799404: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x799400u, 0x799408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799408u;
label_799408:
    // 0x799408: 0x8e822f84  lw          $v0, 0x2F84($s4)
    ctx->pc = 0x799408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
label_79940c:
    // 0x79940c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79940cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_799410:
    // 0x799410: 0xc0b56a8  jal         func_2D5AA0
label_799414:
    if (ctx->pc == 0x799414u) {
        ctx->pc = 0x799414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799410u;
        // 0x799414: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799418u;
        goto label_799418;
    }
    ctx->pc = 0x799410u;
    SET_GPR_U32(ctx, 31, 0x799418u);
    ctx->pc = 0x799414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799410u;
    // 0x799414: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799410u, 0x799418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799418u;
label_799418:
    // 0x799418: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_79941c:
    // 0x79941c: 0xc0ad35a  jal         func_2B4D68
label_799420:
    if (ctx->pc == 0x799420u) {
        ctx->pc = 0x799420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79941Cu;
        // 0x799420: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799424u;
        goto label_799424;
    }
    ctx->pc = 0x79941Cu;
    SET_GPR_U32(ctx, 31, 0x799424u);
    ctx->pc = 0x799420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79941Cu;
    // 0x799420: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4D68u, 0x79941Cu, 0x799424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799424u;
label_799424:
    // 0x799424: 0x26c77a2c  addiu       $a3, $s6, 0x7A2C
    ctx->pc = 0x799424u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 31276));
label_799428:
    // 0x799428: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x799428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_79942c:
    // 0x79942c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x79942cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_799430:
    // 0x799430: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x799430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_799434:
    // 0x799434: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
label_799438:
    if (ctx->pc == 0x799438u) {
        ctx->pc = 0x799438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799434u;
        // 0x799438: 0x8e822f84  lw          $v0, 0x2F84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79943Cu;
        goto label_79943c;
    }
    ctx->pc = 0x799434u;
    {
        const bool branch_taken_0x799434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799434u;
        // 0x799438: 0x8e822f84  lw          $v0, 0x2F84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799434) {
            ctx->pc = 0x7994DCu;
            goto label_7994dc;
        }
    }
    ctx->pc = 0x79943Cu;
label_79943c:
    // 0x79943c: 0x8ce20054  lw          $v0, 0x54($a3)
    ctx->pc = 0x79943cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 84)));
label_799440:
    // 0x799440: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x799440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_799444:
    // 0x799444: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x799444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799448:
    // 0x799448: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79944c:
    // 0x79944c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x79944cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_799450:
    // 0x799450: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799450u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799454:
    // 0x799454: 0xace20054  sw          $v0, 0x54($a3)
    ctx->pc = 0x799454u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 84), GPR_U32(ctx, 2));
label_799458:
    // 0x799458: 0xc0c3970  jal         func_30E5C0
label_79945c:
    if (ctx->pc == 0x79945Cu) {
        ctx->pc = 0x79945Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799458u;
        // 0x79945c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799460u;
        goto label_799460;
    }
    ctx->pc = 0x799458u;
    SET_GPR_U32(ctx, 31, 0x799460u);
    ctx->pc = 0x79945Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799458u;
    // 0x79945c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E5C0u, 0x799458u, 0x799460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799460u;
label_799460:
    // 0x799460: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799464:
    // 0x799464: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x799464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_799468:
    // 0x799468: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799468u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79946c:
    // 0x79946c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79946cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799470:
    // 0x799470: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x799470u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
label_799474:
    // 0x799474: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799478:
    // 0x799478: 0xc0c1c82  jal         func_307208
label_79947c:
    if (ctx->pc == 0x79947Cu) {
        ctx->pc = 0x79947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799478u;
        // 0x79947c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799480u;
        goto label_799480;
    }
    ctx->pc = 0x799478u;
    SET_GPR_U32(ctx, 31, 0x799480u);
    ctx->pc = 0x79947Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799478u;
    // 0x79947c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x799478u, 0x799480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799480u;
label_799480:
    // 0x799480: 0xc0b6dac  jal         func_2DB6B0
label_799484:
    if (ctx->pc == 0x799484u) {
        ctx->pc = 0x799488u;
        goto label_799488;
    }
    ctx->pc = 0x799480u;
    SET_GPR_U32(ctx, 31, 0x799488u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799480u, 0x799488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799488u;
label_799488:
    // 0x799488: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x799488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_79948c:
    // 0x79948c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x79948cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_799490:
    // 0x799490: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x799490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_799494:
    // 0x799494: 0xa0f809  jalr        $a1
label_799498:
    if (ctx->pc == 0x799498u) {
        ctx->pc = 0x799498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799494u;
        // 0x799498: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79949Cu;
        goto label_79949c;
    }
    ctx->pc = 0x799494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x79949Cu);
        ctx->pc = 0x799498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799494u;
        // 0x799498: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799494u, 0x79949Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79949Cu;
label_79949c:
    // 0x79949c: 0xc0b6dac  jal         func_2DB6B0
label_7994a0:
    if (ctx->pc == 0x7994A0u) {
        ctx->pc = 0x7994A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79949Cu;
        // 0x7994a0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994A4u;
        goto label_7994a4;
    }
    ctx->pc = 0x79949Cu;
    SET_GPR_U32(ctx, 31, 0x7994A4u);
    ctx->pc = 0x7994A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79949Cu;
    // 0x7994a0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79949Cu, 0x7994A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994A4u;
label_7994a4:
    // 0x7994a4: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x7994a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_7994a8:
    // 0x7994a8: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x7994a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_7994ac:
    // 0x7994ac: 0x8c65008c  lw          $a1, 0x8C($v1)
    ctx->pc = 0x7994acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_7994b0:
    // 0x7994b0: 0xa0f809  jalr        $a1
label_7994b4:
    if (ctx->pc == 0x7994B4u) {
        ctx->pc = 0x7994B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994B0u;
        // 0x7994b4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994B8u;
        goto label_7994b8;
    }
    ctx->pc = 0x7994B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x7994B8u);
        ctx->pc = 0x7994B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994B0u;
        // 0x7994b4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7994B0u, 0x7994B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7994B8u;
label_7994b8:
    // 0x7994b8: 0xc44c0004  lwc1        $f12, 0x4($v0)
    ctx->pc = 0x7994b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_7994bc:
    // 0x7994bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x7994bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7994c0:
    // 0x7994c0: 0x8e842f84  lw          $a0, 0x2F84($s4)
    ctx->pc = 0x7994c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
label_7994c4:
    // 0x7994c4: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x7994c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_7994c8:
    // 0x7994c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7994c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7994cc:
    // 0x7994cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7994ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7994d0:
    // 0x7994d0: 0xc0b1152  jal         func_2C4548
label_7994d4:
    if (ctx->pc == 0x7994D4u) {
        ctx->pc = 0x7994D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994D0u;
        // 0x7994d4: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994D8u;
        goto label_7994d8;
    }
    ctx->pc = 0x7994D0u;
    SET_GPR_U32(ctx, 31, 0x7994D8u);
    ctx->pc = 0x7994D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994D0u;
    // 0x7994d4: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4548u, 0x7994D0u, 0x7994D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994D8u;
label_7994d8:
    // 0x7994d8: 0x8e822f84  lw          $v0, 0x2F84($s4)
    ctx->pc = 0x7994d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
label_7994dc:
    // 0x7994dc: 0xc0b5692  jal         func_2D5A48
label_7994e0:
    if (ctx->pc == 0x7994E0u) {
        ctx->pc = 0x7994E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994DCu;
        // 0x7994e0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7994E4u;
        goto label_7994e4;
    }
    ctx->pc = 0x7994DCu;
    SET_GPR_U32(ctx, 31, 0x7994E4u);
    ctx->pc = 0x7994E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994DCu;
    // 0x7994e0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x7994DCu, 0x7994E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994E4u;
label_7994e4:
    // 0x7994e4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x7994e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_7994e8:
    // 0x7994e8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x7994e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_7994ec:
    // 0x7994ec: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x7994ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_7994f0:
    // 0x7994f0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x7994f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_7994f4:
    // 0x7994f4: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x7994f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_7994f8:
    // 0x7994f8: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x7994f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_7994fc:
    // 0x7994fc: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x7994fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_799500:
    // 0x799500: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_799504:
    // 0x799504: 0x3e00008  jr          $ra
label_799508:
    if (ctx->pc == 0x799508u) {
        ctx->pc = 0x799508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799504u;
        // 0x799508: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79950Cu;
        goto label_79950c;
    }
    ctx->pc = 0x799504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799504u;
        // 0x799508: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79950Cu;
label_79950c:
    // 0x79950c: 0x0  nop
    ctx->pc = 0x79950cu;
    // NOP
    ctx->pc = 0x799510u;
}
} // namespace gh_r023
