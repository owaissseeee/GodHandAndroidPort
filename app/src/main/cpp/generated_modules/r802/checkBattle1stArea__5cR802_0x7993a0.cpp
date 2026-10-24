#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r802_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r802
{
// Function: checkBattle1stArea__5cR802
// Address: 0x7993a0 - 0x799c30
void checkBattle1stArea__5cR802_0x7993a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("checkBattle1stArea__5cR802_0x7993a0");
#endif

    switch (ctx->pc) {
        case 0x799410u: goto label_799410;
        case 0x79941cu: goto label_79941c;
        case 0x799428u: goto label_799428;
        case 0x799438u: goto label_799438;
        case 0x799460u: goto label_799460;
        case 0x799470u: goto label_799470;
        case 0x799484u: goto label_799484;
        case 0x799494u: goto label_799494;
        case 0x7994a8u: goto label_7994a8;
        case 0x7994b8u: goto label_7994b8;
        case 0x7994d8u: goto label_7994d8;
        case 0x7994e8u: goto label_7994e8;
        case 0x799508u: goto label_799508;
        case 0x799514u: goto label_799514;
        case 0x799520u: goto label_799520;
        case 0x79952cu: goto label_79952c;
        case 0x799534u: goto label_799534;
        case 0x79954cu: goto label_79954c;
        case 0x799554u: goto label_799554;
        case 0x79956cu: goto label_79956c;
        case 0x799574u: goto label_799574;
        case 0x79958cu: goto label_79958c;
        case 0x799594u: goto label_799594;
        case 0x79959cu: goto label_79959c;
        case 0x7995a8u: goto label_7995a8;
        case 0x7995b4u: goto label_7995b4;
        case 0x7995bcu: goto label_7995bc;
        case 0x7995ccu: goto label_7995cc;
        case 0x7995f8u: goto label_7995f8;
        case 0x799608u: goto label_799608;
        case 0x799628u: goto label_799628;
        case 0x799648u: goto label_799648;
        case 0x799678u: goto label_799678;
        case 0x7996a0u: goto label_7996a0;
        case 0x7996d0u: goto label_7996d0;
        case 0x7996f8u: goto label_7996f8;
        case 0x799728u: goto label_799728;
        case 0x799750u: goto label_799750;
        case 0x799780u: goto label_799780;
        case 0x799878u: goto label_799878;
        case 0x799908u: goto label_799908;
        case 0x799998u: goto label_799998;
        case 0x799a28u: goto label_799a28;
        case 0x799a74u: goto label_799a74;
        case 0x799aa0u: goto label_799aa0;
        case 0x799accu: goto label_799acc;
        case 0x799af0u: goto label_799af0;
        case 0x799b0cu: goto label_799b0c;
        case 0x799b28u: goto label_799b28;
        case 0x799b44u: goto label_799b44;
        case 0x799b60u: goto label_799b60;
        case 0x799b68u: goto label_799b68;
        case 0x799b74u: goto label_799b74;
        case 0x799b7cu: goto label_799b7c;
        case 0x799b88u: goto label_799b88;
        case 0x799b94u: goto label_799b94;
        case 0x799ba0u: goto label_799ba0;
        case 0x799bc8u: goto label_799bc8;
        case 0x799bd0u: goto label_799bd0;
        case 0x799be4u: goto label_799be4;
        case 0x799bf0u: goto label_799bf0;
        default: break;
    }

    ctx->pc = 0x7993a0u;

    // 0x7993a0: 0x27bdf970  addiu       $sp, $sp, -0x690
    ctx->pc = 0x7993a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965616));
    // 0x7993a4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x7993a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x7993a8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x7993a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x7993ac: 0x7fb00660  sq          $s0, 0x660($sp)
    ctx->pc = 0x7993acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1632), GPR_VEC(ctx, 16));
    // 0x7993b0: 0x7fb10650  sq          $s1, 0x650($sp)
    ctx->pc = 0x7993b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1616), GPR_VEC(ctx, 17));
    // 0x7993b4: 0x7fb20640  sq          $s2, 0x640($sp)
    ctx->pc = 0x7993b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1600), GPR_VEC(ctx, 18));
    // 0x7993b8: 0x7fb30630  sq          $s3, 0x630($sp)
    ctx->pc = 0x7993b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1584), GPR_VEC(ctx, 19));
    // 0x7993bc: 0x7fb40620  sq          $s4, 0x620($sp)
    ctx->pc = 0x7993bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1568), GPR_VEC(ctx, 20));
    // 0x7993c0: 0x7fb50610  sq          $s5, 0x610($sp)
    ctx->pc = 0x7993c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1552), GPR_VEC(ctx, 21));
    // 0x7993c4: 0x7fb60600  sq          $s6, 0x600($sp)
    ctx->pc = 0x7993c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1536), GPR_VEC(ctx, 22));
    // 0x7993c8: 0x7fb705f0  sq          $s7, 0x5F0($sp)
    ctx->pc = 0x7993c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1520), GPR_VEC(ctx, 23));
    // 0x7993cc: 0x7fbe05e0  sq          $fp, 0x5E0($sp)
    ctx->pc = 0x7993ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1504), GPR_VEC(ctx, 30));
    // 0x7993d0: 0xffbf05d0  sd          $ra, 0x5D0($sp)
    ctx->pc = 0x7993d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1488), GPR_U64(ctx, 31));
    // 0x7993d4: 0xe7b70688  swc1        $f23, 0x688($sp)
    ctx->pc = 0x7993d4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1672), bits); }
    // 0x7993d8: 0xe7b60680  swc1        $f22, 0x680($sp)
    ctx->pc = 0x7993d8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1664), bits); }
    // 0x7993dc: 0xe7b50678  swc1        $f21, 0x678($sp)
    ctx->pc = 0x7993dcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1656), bits); }
    // 0x7993e0: 0xe7b40670  swc1        $f20, 0x670($sp)
    ctx->pc = 0x7993e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1648), bits); }
    // 0x7993e4: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x7993e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x7993e8: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x7993e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x7993ec: 0x3c13003c  lui         $s3, 0x3C
    ctx->pc = 0x7993ecu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
    // 0x7993f0: 0x3c140060  lui         $s4, 0x60
    ctx->pc = 0x7993f0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)96 << 16));
    // 0x7993f4: 0x3c12007a  lui         $s2, 0x7A
    ctx->pc = 0x7993f4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)122 << 16));
    // 0x7993f8: 0x3c150075  lui         $s5, 0x75
    ctx->pc = 0x7993f8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)117 << 16));
    // 0x7993fc: 0x3c16007a  lui         $s6, 0x7A
    ctx->pc = 0x7993fcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)122 << 16));
    // 0x799400: 0x3c17007a  lui         $s7, 0x7A
    ctx->pc = 0x799400u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)122 << 16));
    // 0x799404: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x799404u;
    {
        const bool branch_taken_0x799404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799404u;
        // 0x799408: 0x3c1e007a  lui         $fp, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799404) {
            ctx->pc = 0x79941Cu;
            goto label_79941c;
        }
    }
    ctx->pc = 0x79940Cu;
    // 0x79940c: 0x0  nop
    ctx->pc = 0x79940cu;
    // NOP
label_799410:
    // 0x799410: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799414: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799414u;
    SET_GPR_U32(ctx, 31, 0x79941Cu);
    ctx->pc = 0x799418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799414u;
    // 0x799418: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799414u, 0x79941Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79941Cu;
label_79941c:
    // 0x79941c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79941cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799420: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799420u;
    SET_GPR_U32(ctx, 31, 0x799428u);
    ctx->pc = 0x799424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799420u;
    // 0x799424: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799420u, 0x799428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799428u;
label_799428:
    // 0x799428: 0x10500006  beq         $v0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x799428u;
    {
        const bool branch_taken_0x799428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x79942Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799428u;
        // 0x79942c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799428) {
            ctx->pc = 0x799444u;
            goto label_799444;
        }
    }
    ctx->pc = 0x799430u;
    // 0x799430: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799430u;
    SET_GPR_U32(ctx, 31, 0x799438u);
    ctx->pc = 0x799434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799430u;
    // 0x799434: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799430u, 0x799438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799438u;
label_799438:
    // 0x799438: 0x1450fff5  bne         $v0, $s0, . + 4 + (-0xB << 2)
    ctx->pc = 0x799438u;
    {
        const bool branch_taken_0x799438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x79943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799438u;
        // 0x79943c: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799438) {
            ctx->pc = 0x799410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799410;
        }
    }
    ctx->pc = 0x799440u;
    // 0x799440: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x799440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_799444:
    // 0x799444: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x799444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x799448: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x799448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x79944c: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x79944cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x799450: 0xa3a30020  sb          $v1, 0x20($sp)
    ctx->pc = 0x799450u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x799454: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799458: 0xc0a57ca  jal         func_295F28
    ctx->pc = 0x799458u;
    SET_GPR_U32(ctx, 31, 0x799460u);
    ctx->pc = 0x79945Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799458u;
    // 0x79945c: 0xa3a50030  sb          $a1, 0x30($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F28u, 0x799458u, 0x799460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799460u;
label_799460:
    // 0x799460: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x799460u;
    {
        const bool branch_taken_0x799460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799460u;
        // 0x799464: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799460) {
            ctx->pc = 0x7995B4u;
            goto label_7995b4;
        }
    }
    ctx->pc = 0x799468u;
    // 0x799468: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799468u;
    SET_GPR_U32(ctx, 31, 0x799470u);
    ctx->pc = 0x79946Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799468u;
    // 0x79946c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799468u, 0x799470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799470u;
label_799470:
    // 0x799470: 0x14400050  bnez        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x799470u;
    {
        const bool branch_taken_0x799470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799470u;
        // 0x799474: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799470) {
            ctx->pc = 0x7995B4u;
            goto label_7995b4;
        }
    }
    ctx->pc = 0x799478u;
    // 0x799478: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x799478u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79947c: 0xc0a57ca  jal         func_295F28
    ctx->pc = 0x79947Cu;
    SET_GPR_U32(ctx, 31, 0x799484u);
    ctx->pc = 0x799480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79947Cu;
    // 0x799480: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F28u, 0x79947Cu, 0x799484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799484u;
label_799484:
    // 0x799484: 0x5440004b  bnel        $v0, $zero, . + 4 + (0x4B << 2)
    ctx->pc = 0x799484u;
    {
        const bool branch_taken_0x799484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799484) {
            ctx->pc = 0x799488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799484u;
            // 0x799488: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7995B4u;
            goto label_7995b4;
        }
    }
    ctx->pc = 0x79948Cu;
    // 0x79948c: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79948Cu;
    SET_GPR_U32(ctx, 31, 0x799494u);
    ctx->pc = 0x799490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79948Cu;
    // 0x799490: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79948Cu, 0x799494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799494u;
label_799494:
    // 0x799494: 0x54400047  bnel        $v0, $zero, . + 4 + (0x47 << 2)
    ctx->pc = 0x799494u;
    {
        const bool branch_taken_0x799494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799494) {
            ctx->pc = 0x799498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799494u;
            // 0x799498: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7995B4u;
            goto label_7995b4;
        }
    }
    ctx->pc = 0x79949Cu;
    // 0x79949c: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x79949cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x7994a0: 0xc0a57ca  jal         func_295F28
    ctx->pc = 0x7994A0u;
    SET_GPR_U32(ctx, 31, 0x7994A8u);
    ctx->pc = 0x7994A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994A0u;
    // 0x7994a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F28u, 0x7994A0u, 0x7994A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994A8u;
label_7994a8:
    // 0x7994a8: 0x54400042  bnel        $v0, $zero, . + 4 + (0x42 << 2)
    ctx->pc = 0x7994A8u;
    {
        const bool branch_taken_0x7994a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7994a8) {
            ctx->pc = 0x7994ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7994A8u;
            // 0x7994ac: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7995B4u;
            goto label_7995b4;
        }
    }
    ctx->pc = 0x7994B0u;
    // 0x7994b0: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x7994B0u;
    SET_GPR_U32(ctx, 31, 0x7994B8u);
    ctx->pc = 0x7994B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994B0u;
    // 0x7994b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x7994B0u, 0x7994B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994B8u;
label_7994b8:
    // 0x7994b8: 0x5440003e  bnel        $v0, $zero, . + 4 + (0x3E << 2)
    ctx->pc = 0x7994B8u;
    {
        const bool branch_taken_0x7994b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7994b8) {
            ctx->pc = 0x7994BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7994B8u;
            // 0x7994bc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7995B4u;
            goto label_7995b4;
        }
    }
    ctx->pc = 0x7994C0u;
    // 0x7994c0: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x7994c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x7994c4: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x7994c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x7994c8: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x7994c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x7994cc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x7994ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x7994d0: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x7994D0u;
    SET_GPR_U32(ctx, 31, 0x7994D8u);
    ctx->pc = 0x7994D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994D0u;
    // 0x7994d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x7994D0u, 0x7994D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994D8u;
label_7994d8:
    // 0x7994d8: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x7994d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x7994dc: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7994dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7994e0: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x7994E0u;
    SET_GPR_U32(ctx, 31, 0x7994E8u);
    ctx->pc = 0x7994E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994E0u;
    // 0x7994e4: 0x24a5ae20  addiu       $a1, $a1, -0x51E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x7994E0u, 0x7994E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994E8u;
label_7994e8:
    // 0x7994e8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x7994e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7994ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7994ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994f0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x7994f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994f4: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x7994f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x7994f8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x7994f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7994fc: 0x2684ee00  addiu       $a0, $s4, -0x1200
    ctx->pc = 0x7994fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962688));
    // 0x799500: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x799500u;
    SET_GPR_U32(ctx, 31, 0x799508u);
    ctx->pc = 0x799504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799500u;
    // 0x799504: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799500u, 0x799508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799508u;
label_799508:
    // 0x799508: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79950c: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x79950Cu;
    SET_GPR_U32(ctx, 31, 0x799514u);
    ctx->pc = 0x799510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79950Cu;
    // 0x799510: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x79950Cu, 0x799514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799514u;
label_799514:
    // 0x799514: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799518: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x799518u;
    SET_GPR_U32(ctx, 31, 0x799520u);
    ctx->pc = 0x79951Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799518u;
    // 0x79951c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x799518u, 0x799520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799520u;
label_799520:
    // 0x799520: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799524: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x799524u;
    SET_GPR_U32(ctx, 31, 0x79952Cu);
    ctx->pc = 0x799528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799524u;
    // 0x799528: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x799524u, 0x79952Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79952Cu;
label_79952c:
    // 0x79952c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79952Cu;
    SET_GPR_U32(ctx, 31, 0x799534u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79952Cu, 0x799534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799534u;
label_799534:
    // 0x799534: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x799534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x799538: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79953c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x79953cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799540: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799540u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799544: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x799544u;
    SET_GPR_U32(ctx, 31, 0x79954Cu);
    ctx->pc = 0x799548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799544u;
    // 0x799548: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799544u, 0x79954Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79954Cu;
label_79954c:
    // 0x79954c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79954Cu;
    SET_GPR_U32(ctx, 31, 0x799554u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79954Cu, 0x799554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799554u;
label_799554:
    // 0x799554: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x799554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x799558: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79955c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x79955cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799560: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799560u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799564: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x799564u;
    SET_GPR_U32(ctx, 31, 0x79956Cu);
    ctx->pc = 0x799568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799564u;
    // 0x799568: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799564u, 0x79956Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79956Cu;
label_79956c:
    // 0x79956c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79956Cu;
    SET_GPR_U32(ctx, 31, 0x799574u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79956Cu, 0x799574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799574u;
label_799574:
    // 0x799574: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x799574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x799578: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79957c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79957cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x799580: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x799580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799584: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x799584u;
    SET_GPR_U32(ctx, 31, 0x79958Cu);
    ctx->pc = 0x799588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799584u;
    // 0x799588: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799584u, 0x79958Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79958Cu;
label_79958c:
    // 0x79958c: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x79958Cu;
    SET_GPR_U32(ctx, 31, 0x799594u);
    ctx->pc = 0x799590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79958Cu;
    // 0x799590: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x79958Cu, 0x799594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799594u;
label_799594:
    // 0x799594: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x799594u;
    SET_GPR_U32(ctx, 31, 0x79959Cu);
    ctx->pc = 0x799598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799594u;
    // 0x799598: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x799594u, 0x79959Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79959Cu;
label_79959c:
    // 0x79959c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79959Cu;
    {
        const bool branch_taken_0x79959c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7995A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79959Cu;
        // 0x7995a0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79959c) {
            ctx->pc = 0x7995B4u;
            goto label_7995b4;
        }
    }
    ctx->pc = 0x7995A4u;
    // 0x7995a4: 0x0  nop
    ctx->pc = 0x7995a4u;
    // NOP
label_7995a8:
    // 0x7995a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7995a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7995ac: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7995ACu;
    SET_GPR_U32(ctx, 31, 0x7995B4u);
    ctx->pc = 0x7995B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995ACu;
    // 0x7995b0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7995ACu, 0x7995B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995B4u;
label_7995b4:
    // 0x7995b4: 0xc1e64be  jal         func_7992F8
    ctx->pc = 0x7995B4u;
    SET_GPR_U32(ctx, 31, 0x7995BCu);
    ctx->pc = 0x7995B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995B4u;
    // 0x7995b8: 0x8e44af80  lw          $a0, -0x5080($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294946688)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7992F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7992F8u, 0x7995B4u, 0x7995BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995BCu;
label_7995bc:
    // 0x7995bc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x7995BCu;
    {
        const bool branch_taken_0x7995bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7995C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995BCu;
        // 0x7995c0: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995bc) {
            ctx->pc = 0x7995A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7995a8;
        }
    }
    ctx->pc = 0x7995C4u;
    // 0x7995c4: 0xc0b0f90  jal         func_2C3E40
    ctx->pc = 0x7995C4u;
    SET_GPR_U32(ctx, 31, 0x7995CCu);
    ctx->pc = 0x7995C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995C4u;
    // 0x7995c8: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E40u, 0x7995C4u, 0x7995CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995CCu;
label_7995cc:
    // 0x7995cc: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x7995CCu;
    {
        const bool branch_taken_0x7995cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x7995D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995CCu;
        // 0x7995d0: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995cc) {
            ctx->pc = 0x7995A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7995a8;
        }
    }
    ctx->pc = 0x7995D4u;
    // 0x7995d4: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x7995d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x7995d8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x7995d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x7995dc: 0x8c448658  lw          $a0, -0x79A8($v0)
    ctx->pc = 0x7995dcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5E8658u));
    // 0x7995e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7995e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995e4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x7995e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x7995e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x7995e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x7995ec: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x7995ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x7995f0: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x7995F0u;
    SET_GPR_U32(ctx, 31, 0x7995F8u);
    ctx->pc = 0x7995F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995F0u;
    // 0x7995f4: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x7995F0u, 0x7995F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995F8u;
label_7995f8:
    // 0x7995f8: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x7995f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x7995fc: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x7995fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x799600: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x799600u;
    SET_GPR_U32(ctx, 31, 0x799608u);
    ctx->pc = 0x799604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799600u;
    // 0x799604: 0x2445ae28  addiu       $a1, $v0, -0x51D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x799600u, 0x799608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799608u;
label_799608:
    // 0x799608: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79960c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79960cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799610: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799610u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799614: 0x2684ee00  addiu       $a0, $s4, -0x1200
    ctx->pc = 0x799614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962688));
    // 0x799618: 0x24060036  addiu       $a2, $zero, 0x36
    ctx->pc = 0x799618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x79961c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79961cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799620: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x799620u;
    SET_GPR_U32(ctx, 31, 0x799628u);
    ctx->pc = 0x799624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799620u;
    // 0x799624: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799620u, 0x799628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799628u;
label_799628:
    // 0x799628: 0x82c2ae30  lb          $v0, -0x51D0($s6)
    ctx->pc = 0x799628u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 4294946352)));
    // 0x79962c: 0x26a84c38  addiu       $t0, $s5, 0x4C38
    ctx->pc = 0x79962cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 19512));
    // 0x799630: 0x26c3ae30  addiu       $v1, $s6, -0x51D0
    ctx->pc = 0x799630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294946352));
    // 0x799634: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799638: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x799638u;
    {
        const bool branch_taken_0x799638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799638u;
        // 0x79963c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799638) {
            ctx->pc = 0x799670u;
            goto label_799670;
        }
    }
    ctx->pc = 0x799640u;
    // 0x799640: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799640u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799644: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799644u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799648:
    // 0x799648: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799648u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79964c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79964cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799650: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799654: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799658: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799658u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79965c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79965Cu;
    {
        const bool branch_taken_0x79965c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79965Cu;
        // 0x799660: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79965c) {
            ctx->pc = 0x799670u;
            goto label_799670;
        }
    }
    ctx->pc = 0x799664u;
    // 0x799664: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799664u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799668: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799668u;
    {
        const bool branch_taken_0x799668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799668) {
            ctx->pc = 0x79966Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799668u;
            // 0x79966c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799648;
        }
    }
    ctx->pc = 0x799670u;
label_799670:
    // 0x799670: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x799670u;
    SET_GPR_U32(ctx, 31, 0x799678u);
    ctx->pc = 0x799674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799670u;
    // 0x799674: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x799670u, 0x799678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799678u;
label_799678:
    // 0x799678: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x799678u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79967c: 0x26a84c38  addiu       $t0, $s5, 0x4C38
    ctx->pc = 0x79967cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 19512));
    // 0x799680: 0x82e2ae38  lb          $v0, -0x51C8($s7)
    ctx->pc = 0x799680u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 4294946360)));
    // 0x799684: 0x26e3ae38  addiu       $v1, $s7, -0x51C8
    ctx->pc = 0x799684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294946360));
    // 0x799688: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79968c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x79968Cu;
    {
        const bool branch_taken_0x79968c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79968Cu;
        // 0x799690: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79968c) {
            ctx->pc = 0x7996C8u;
            goto label_7996c8;
        }
    }
    ctx->pc = 0x799694u;
    // 0x799694: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799694u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799698: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799698u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79969c: 0x0  nop
    ctx->pc = 0x79969cu;
    // NOP
label_7996a0:
    // 0x7996a0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x7996a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x7996a4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x7996a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x7996a8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x7996a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x7996ac: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x7996acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x7996b0: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x7996b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x7996b4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x7996B4u;
    {
        const bool branch_taken_0x7996b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996B4u;
        // 0x7996b8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996b4) {
            ctx->pc = 0x7996C8u;
            goto label_7996c8;
        }
    }
    ctx->pc = 0x7996BCu;
    // 0x7996bc: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7996bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7996c0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x7996C0u;
    {
        const bool branch_taken_0x7996c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7996c0) {
            ctx->pc = 0x7996C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7996C0u;
            // 0x7996c4: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7996A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7996a0;
        }
    }
    ctx->pc = 0x7996C8u;
label_7996c8:
    // 0x7996c8: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x7996C8u;
    SET_GPR_U32(ctx, 31, 0x7996D0u);
    ctx->pc = 0x7996CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996C8u;
    // 0x7996cc: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x7996C8u, 0x7996D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996D0u;
label_7996d0:
    // 0x7996d0: 0xafa205c0  sw          $v0, 0x5C0($sp)
    ctx->pc = 0x7996d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1472), GPR_U32(ctx, 2));
    // 0x7996d4: 0x26a84c38  addiu       $t0, $s5, 0x4C38
    ctx->pc = 0x7996d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 19512));
    // 0x7996d8: 0x83c2ae40  lb          $v0, -0x51C0($fp)
    ctx->pc = 0x7996d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 4294946368)));
    // 0x7996dc: 0x27c3ae40  addiu       $v1, $fp, -0x51C0
    ctx->pc = 0x7996dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294946368));
    // 0x7996e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7996e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996e4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x7996E4u;
    {
        const bool branch_taken_0x7996e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996E4u;
        // 0x7996e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996e4) {
            ctx->pc = 0x799720u;
            goto label_799720;
        }
    }
    ctx->pc = 0x7996ECu;
    // 0x7996ec: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x7996ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996f0: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7996f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7996f4: 0x0  nop
    ctx->pc = 0x7996f4u;
    // NOP
label_7996f8:
    // 0x7996f8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x7996f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x7996fc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x7996fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799700: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799704: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799708: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799708u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79970c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79970Cu;
    {
        const bool branch_taken_0x79970c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79970Cu;
        // 0x799710: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79970c) {
            ctx->pc = 0x799720u;
            goto label_799720;
        }
    }
    ctx->pc = 0x799714u;
    // 0x799714: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799714u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799718: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799718u;
    {
        const bool branch_taken_0x799718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799718) {
            ctx->pc = 0x79971Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799718u;
            // 0x79971c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7996F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7996f8;
        }
    }
    ctx->pc = 0x799720u;
label_799720:
    // 0x799720: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x799720u;
    SET_GPR_U32(ctx, 31, 0x799728u);
    ctx->pc = 0x799724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799720u;
    // 0x799724: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x799720u, 0x799728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799728u;
label_799728:
    // 0x799728: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x799728u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
    // 0x79972c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x79972cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799730: 0x8082ae48  lb          $v0, -0x51B8($a0)
    ctx->pc = 0x799730u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x79AE48u));
    // 0x799734: 0x26a84c38  addiu       $t0, $s5, 0x4C38
    ctx->pc = 0x799734u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 19512));
    // 0x799738: 0x2483ae48  addiu       $v1, $a0, -0x51B8
    ctx->pc = 0x799738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946376));
    // 0x79973c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79973cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799740: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x799740u;
    {
        const bool branch_taken_0x799740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799740u;
        // 0x799744: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799740) {
            ctx->pc = 0x799778u;
            goto label_799778;
        }
    }
    ctx->pc = 0x799748u;
    // 0x799748: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799748u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79974c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79974cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799750:
    // 0x799750: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799750u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799754: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799754u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799758: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79975c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79975cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799760: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799760u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799764: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799764u;
    {
        const bool branch_taken_0x799764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799764u;
        // 0x799768: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799764) {
            ctx->pc = 0x799778u;
            goto label_799778;
        }
    }
    ctx->pc = 0x79976Cu;
    // 0x79976c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79976cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799770: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799770u;
    {
        const bool branch_taken_0x799770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799770) {
            ctx->pc = 0x799774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799770u;
            // 0x799774: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799750;
        }
    }
    ctx->pc = 0x799778u;
label_799778:
    // 0x799778: 0xc0b1508  jal         func_2C5420
    ctx->pc = 0x799778u;
    SET_GPR_U32(ctx, 31, 0x799780u);
    ctx->pc = 0x79977Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799778u;
    // 0x79977c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5420u, 0x799778u, 0x799780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799780u;
label_799780:
    // 0x799780: 0x1240010f  beqz        $s2, . + 4 + (0x10F << 2)
    ctx->pc = 0x799780u;
    {
        const bool branch_taken_0x799780 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x799784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799780u;
        // 0x799784: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799780) {
            ctx->pc = 0x799BC0u;
            goto label_799bc0;
        }
    }
    ctx->pc = 0x799788u;
    // 0x799788: 0x1220010d  beqz        $s1, . + 4 + (0x10D << 2)
    ctx->pc = 0x799788u;
    {
        const bool branch_taken_0x799788 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799788u;
        // 0x79978c: 0x8fa205c0  lw          $v0, 0x5C0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799788) {
            ctx->pc = 0x799BC0u;
            goto label_799bc0;
        }
    }
    ctx->pc = 0x799790u;
    // 0x799790: 0x1040010b  beqz        $v0, . + 4 + (0x10B << 2)
    ctx->pc = 0x799790u;
    {
        const bool branch_taken_0x799790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799790) {
            ctx->pc = 0x799BC0u;
            goto label_799bc0;
        }
    }
    ctx->pc = 0x799798u;
    // 0x799798: 0x12000109  beqz        $s0, . + 4 + (0x109 << 2)
    ctx->pc = 0x799798u;
    {
        const bool branch_taken_0x799798 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x79979Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799798u;
        // 0x79979c: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799798) {
            ctx->pc = 0x799BC0u;
            goto label_799bc0;
        }
    }
    ctx->pc = 0x7997A0u;
    // 0x7997a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7997a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7997a4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x7997a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x7997a8: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x7997a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
    // 0x7997ac: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x7997acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x7997b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7997b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7997b4: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x7997b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x7997b8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x7997b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x7997bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x7997bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7997c0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x7997c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x7997c4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x7997c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x7997c8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x7997c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x7997cc: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x7997ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x7997d0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x7997d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x7997d4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x7997d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x7997d8: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x7997d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x7997dc: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x7997dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x7997e0: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x7997e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7997e4: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x7997e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7997e8: 0xfba000b0  sqc2        $vf0, 0xB0($sp)
    ctx->pc = 0x7997e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7997ec: 0xfba000c0  sqc2        $vf0, 0xC0($sp)
    ctx->pc = 0x7997ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7997f0: 0xfba000d0  sqc2        $vf0, 0xD0($sp)
    ctx->pc = 0x7997f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7997f4: 0xfba000e0  sqc2        $vf0, 0xE0($sp)
    ctx->pc = 0x7997f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7997f8: 0xfba000f0  sqc2        $vf0, 0xF0($sp)
    ctx->pc = 0x7997f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7997fc: 0xfba00100  sqc2        $vf0, 0x100($sp)
    ctx->pc = 0x7997fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799800: 0xfba00110  sqc2        $vf0, 0x110($sp)
    ctx->pc = 0x799800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799804: 0xfba00120  sqc2        $vf0, 0x120($sp)
    ctx->pc = 0x799804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799808: 0xfba00130  sqc2        $vf0, 0x130($sp)
    ctx->pc = 0x799808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79980c: 0xfba00140  sqc2        $vf0, 0x140($sp)
    ctx->pc = 0x79980cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799810: 0xfba00150  sqc2        $vf0, 0x150($sp)
    ctx->pc = 0x799810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799814: 0xfba00160  sqc2        $vf0, 0x160($sp)
    ctx->pc = 0x799814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799818: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x799818u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x79981c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x79981cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799820: 0xa3a00041  sb          $zero, 0x41($sp)
    ctx->pc = 0x799820u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 65), (uint8_t)GPR_U32(ctx, 0));
    // 0x799824: 0x27a501ac  addiu       $a1, $sp, 0x1AC
    ctx->pc = 0x799824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 428));
    // 0x799828: 0xa3a00042  sb          $zero, 0x42($sp)
    ctx->pc = 0x799828u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 66), (uint8_t)GPR_U32(ctx, 0));
    // 0x79982c: 0x27a6030c  addiu       $a2, $sp, 0x30C
    ctx->pc = 0x79982cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 780));
    // 0x799830: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x799830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x799834: 0x27a7046c  addiu       $a3, $sp, 0x46C
    ctx->pc = 0x799834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1132));
    // 0x799838: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x799838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x79983c: 0x27b70040  addiu       $s7, $sp, 0x40
    ctx->pc = 0x79983cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x799840: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x799840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x799844: 0x27b601a0  addiu       $s6, $sp, 0x1A0
    ctx->pc = 0x799844u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x799848: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x799848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x79984c: 0x27b50300  addiu       $s5, $sp, 0x300
    ctx->pc = 0x79984cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x799850: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x799850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x799854: 0x27b40460  addiu       $s4, $sp, 0x460
    ctx->pc = 0x799854u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
    // 0x799858: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x799858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    // 0x79985c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x79985cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799860: 0xafa00170  sw          $zero, 0x170($sp)
    ctx->pc = 0x799860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 0));
    // 0x799864: 0x27a3004c  addiu       $v1, $sp, 0x4C
    ctx->pc = 0x799864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x799868: 0xafa00174  sw          $zero, 0x174($sp)
    ctx->pc = 0x799868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 0));
    // 0x79986c: 0xafa00178  sw          $zero, 0x178($sp)
    ctx->pc = 0x79986cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 0));
    // 0x799870: 0xafa0017c  sw          $zero, 0x17C($sp)
    ctx->pc = 0x799870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 0));
    // 0x799874: 0x0  nop
    ctx->pc = 0x799874u;
    // NOP
label_799878:
    // 0x799878: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x799878u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x79987c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x79987cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x799880: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x799880u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x799884: 0x0  nop
    ctx->pc = 0x799884u;
    // NOP
    // 0x799888: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x799888u;
    {
        const bool branch_taken_0x799888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79988Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799888u;
        // 0x79988c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799888) {
            ctx->pc = 0x799878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799878;
        }
    }
    ctx->pc = 0x799890u;
    // 0x799890: 0xfba001f0  sqc2        $vf0, 0x1F0($sp)
    ctx->pc = 0x799890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799894: 0xfba00200  sqc2        $vf0, 0x200($sp)
    ctx->pc = 0x799894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799898: 0xfba00210  sqc2        $vf0, 0x210($sp)
    ctx->pc = 0x799898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79989c: 0xfba00220  sqc2        $vf0, 0x220($sp)
    ctx->pc = 0x79989cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7998a0: 0xfba00230  sqc2        $vf0, 0x230($sp)
    ctx->pc = 0x7998a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7998a4: 0xfba00240  sqc2        $vf0, 0x240($sp)
    ctx->pc = 0x7998a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7998a8: 0xfba00250  sqc2        $vf0, 0x250($sp)
    ctx->pc = 0x7998a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7998ac: 0xfba00260  sqc2        $vf0, 0x260($sp)
    ctx->pc = 0x7998acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7998b0: 0xfba00270  sqc2        $vf0, 0x270($sp)
    ctx->pc = 0x7998b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7998b4: 0xfba00280  sqc2        $vf0, 0x280($sp)
    ctx->pc = 0x7998b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7998b8: 0xfba00290  sqc2        $vf0, 0x290($sp)
    ctx->pc = 0x7998b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7998bc: 0xfba002a0  sqc2        $vf0, 0x2A0($sp)
    ctx->pc = 0x7998bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7998c0: 0xfba002b0  sqc2        $vf0, 0x2B0($sp)
    ctx->pc = 0x7998c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7998c4: 0xfba002c0  sqc2        $vf0, 0x2C0($sp)
    ctx->pc = 0x7998c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7998c8: 0xa3a001a0  sb          $zero, 0x1A0($sp)
    ctx->pc = 0x7998c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 416), (uint8_t)GPR_U32(ctx, 0));
    // 0x7998cc: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x7998ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998d0: 0xa3a001a1  sb          $zero, 0x1A1($sp)
    ctx->pc = 0x7998d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 417), (uint8_t)GPR_U32(ctx, 0));
    // 0x7998d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x7998d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998d8: 0xa3a001a2  sb          $zero, 0x1A2($sp)
    ctx->pc = 0x7998d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 418), (uint8_t)GPR_U32(ctx, 0));
    // 0x7998dc: 0xafa001a4  sw          $zero, 0x1A4($sp)
    ctx->pc = 0x7998dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 0));
    // 0x7998e0: 0xafa001a8  sw          $zero, 0x1A8($sp)
    ctx->pc = 0x7998e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 0));
    // 0x7998e4: 0xafa001d0  sw          $zero, 0x1D0($sp)
    ctx->pc = 0x7998e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 0));
    // 0x7998e8: 0xafa001d4  sw          $zero, 0x1D4($sp)
    ctx->pc = 0x7998e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 0));
    // 0x7998ec: 0xafa001d8  sw          $zero, 0x1D8($sp)
    ctx->pc = 0x7998ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 0));
    // 0x7998f0: 0xafa001dc  sw          $zero, 0x1DC($sp)
    ctx->pc = 0x7998f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 0));
    // 0x7998f4: 0xafa002d0  sw          $zero, 0x2D0($sp)
    ctx->pc = 0x7998f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 720), GPR_U32(ctx, 0));
    // 0x7998f8: 0xafa002d4  sw          $zero, 0x2D4($sp)
    ctx->pc = 0x7998f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 724), GPR_U32(ctx, 0));
    // 0x7998fc: 0xafa002d8  sw          $zero, 0x2D8($sp)
    ctx->pc = 0x7998fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 728), GPR_U32(ctx, 0));
    // 0x799900: 0xafa002dc  sw          $zero, 0x2DC($sp)
    ctx->pc = 0x799900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 732), GPR_U32(ctx, 0));
    // 0x799904: 0x0  nop
    ctx->pc = 0x799904u;
    // NOP
label_799908:
    // 0x799908: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x799908u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x79990c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x79990cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x799910: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x799910u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x799914: 0x0  nop
    ctx->pc = 0x799914u;
    // NOP
    // 0x799918: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x799918u;
    {
        const bool branch_taken_0x799918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79991Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799918u;
        // 0x79991c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799918) {
            ctx->pc = 0x799908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799908;
        }
    }
    ctx->pc = 0x799920u;
    // 0x799920: 0xfba00350  sqc2        $vf0, 0x350($sp)
    ctx->pc = 0x799920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 848), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799924: 0xfba00360  sqc2        $vf0, 0x360($sp)
    ctx->pc = 0x799924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 864), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799928: 0xfba00370  sqc2        $vf0, 0x370($sp)
    ctx->pc = 0x799928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 880), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79992c: 0xfba00380  sqc2        $vf0, 0x380($sp)
    ctx->pc = 0x79992cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 896), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799930: 0xfba00390  sqc2        $vf0, 0x390($sp)
    ctx->pc = 0x799930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 912), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799934: 0xfba003a0  sqc2        $vf0, 0x3A0($sp)
    ctx->pc = 0x799934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 928), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799938: 0xfba003b0  sqc2        $vf0, 0x3B0($sp)
    ctx->pc = 0x799938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 944), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79993c: 0xfba003c0  sqc2        $vf0, 0x3C0($sp)
    ctx->pc = 0x79993cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 960), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799940: 0xfba003d0  sqc2        $vf0, 0x3D0($sp)
    ctx->pc = 0x799940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 976), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799944: 0xfba003e0  sqc2        $vf0, 0x3E0($sp)
    ctx->pc = 0x799944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 992), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799948: 0xfba003f0  sqc2        $vf0, 0x3F0($sp)
    ctx->pc = 0x799948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1008), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79994c: 0xfba00400  sqc2        $vf0, 0x400($sp)
    ctx->pc = 0x79994cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1024), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799950: 0xfba00410  sqc2        $vf0, 0x410($sp)
    ctx->pc = 0x799950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799954: 0xfba00420  sqc2        $vf0, 0x420($sp)
    ctx->pc = 0x799954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799958: 0xa3a00300  sb          $zero, 0x300($sp)
    ctx->pc = 0x799958u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 768), (uint8_t)GPR_U32(ctx, 0));
    // 0x79995c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x79995cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799960: 0xa3a00301  sb          $zero, 0x301($sp)
    ctx->pc = 0x799960u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 769), (uint8_t)GPR_U32(ctx, 0));
    // 0x799964: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x799964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799968: 0xa3a00302  sb          $zero, 0x302($sp)
    ctx->pc = 0x799968u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 770), (uint8_t)GPR_U32(ctx, 0));
    // 0x79996c: 0xafa00304  sw          $zero, 0x304($sp)
    ctx->pc = 0x79996cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 772), GPR_U32(ctx, 0));
    // 0x799970: 0xafa00308  sw          $zero, 0x308($sp)
    ctx->pc = 0x799970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 776), GPR_U32(ctx, 0));
    // 0x799974: 0xafa00330  sw          $zero, 0x330($sp)
    ctx->pc = 0x799974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 816), GPR_U32(ctx, 0));
    // 0x799978: 0xafa00334  sw          $zero, 0x334($sp)
    ctx->pc = 0x799978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 820), GPR_U32(ctx, 0));
    // 0x79997c: 0xafa00338  sw          $zero, 0x338($sp)
    ctx->pc = 0x79997cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 824), GPR_U32(ctx, 0));
    // 0x799980: 0xafa0033c  sw          $zero, 0x33C($sp)
    ctx->pc = 0x799980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 828), GPR_U32(ctx, 0));
    // 0x799984: 0xafa00430  sw          $zero, 0x430($sp)
    ctx->pc = 0x799984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1072), GPR_U32(ctx, 0));
    // 0x799988: 0xafa00434  sw          $zero, 0x434($sp)
    ctx->pc = 0x799988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1076), GPR_U32(ctx, 0));
    // 0x79998c: 0xafa00438  sw          $zero, 0x438($sp)
    ctx->pc = 0x79998cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1080), GPR_U32(ctx, 0));
    // 0x799990: 0xafa0043c  sw          $zero, 0x43C($sp)
    ctx->pc = 0x799990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1084), GPR_U32(ctx, 0));
    // 0x799994: 0x0  nop
    ctx->pc = 0x799994u;
    // NOP
label_799998:
    // 0x799998: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x799998u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x79999c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x79999cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x7999a0: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x7999a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x7999a4: 0x0  nop
    ctx->pc = 0x7999a4u;
    // NOP
    // 0x7999a8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x7999A8u;
    {
        const bool branch_taken_0x7999a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7999ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999A8u;
        // 0x7999ac: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999a8) {
            ctx->pc = 0x799998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799998;
        }
    }
    ctx->pc = 0x7999B0u;
    // 0x7999b0: 0xfba004b0  sqc2        $vf0, 0x4B0($sp)
    ctx->pc = 0x7999b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7999b4: 0xfba004c0  sqc2        $vf0, 0x4C0($sp)
    ctx->pc = 0x7999b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7999b8: 0xfba004d0  sqc2        $vf0, 0x4D0($sp)
    ctx->pc = 0x7999b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7999bc: 0xfba004e0  sqc2        $vf0, 0x4E0($sp)
    ctx->pc = 0x7999bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7999c0: 0xfba004f0  sqc2        $vf0, 0x4F0($sp)
    ctx->pc = 0x7999c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7999c4: 0xfba00500  sqc2        $vf0, 0x500($sp)
    ctx->pc = 0x7999c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7999c8: 0xfba00510  sqc2        $vf0, 0x510($sp)
    ctx->pc = 0x7999c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1296), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7999cc: 0xfba00520  sqc2        $vf0, 0x520($sp)
    ctx->pc = 0x7999ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1312), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7999d0: 0xfba00530  sqc2        $vf0, 0x530($sp)
    ctx->pc = 0x7999d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1328), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7999d4: 0xfba00540  sqc2        $vf0, 0x540($sp)
    ctx->pc = 0x7999d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1344), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7999d8: 0xfba00550  sqc2        $vf0, 0x550($sp)
    ctx->pc = 0x7999d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1360), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7999dc: 0xfba00560  sqc2        $vf0, 0x560($sp)
    ctx->pc = 0x7999dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1376), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7999e0: 0xfba00570  sqc2        $vf0, 0x570($sp)
    ctx->pc = 0x7999e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1392), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7999e4: 0xfba00580  sqc2        $vf0, 0x580($sp)
    ctx->pc = 0x7999e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1408), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7999e8: 0xa3a00460  sb          $zero, 0x460($sp)
    ctx->pc = 0x7999e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1120), (uint8_t)GPR_U32(ctx, 0));
    // 0x7999ec: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x7999ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7999f0: 0xa3a00461  sb          $zero, 0x461($sp)
    ctx->pc = 0x7999f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1121), (uint8_t)GPR_U32(ctx, 0));
    // 0x7999f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x7999f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7999f8: 0xa3a00462  sb          $zero, 0x462($sp)
    ctx->pc = 0x7999f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1122), (uint8_t)GPR_U32(ctx, 0));
    // 0x7999fc: 0xafa00464  sw          $zero, 0x464($sp)
    ctx->pc = 0x7999fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1124), GPR_U32(ctx, 0));
    // 0x799a00: 0xafa00468  sw          $zero, 0x468($sp)
    ctx->pc = 0x799a00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1128), GPR_U32(ctx, 0));
    // 0x799a04: 0xafa00490  sw          $zero, 0x490($sp)
    ctx->pc = 0x799a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 0));
    // 0x799a08: 0xafa00494  sw          $zero, 0x494($sp)
    ctx->pc = 0x799a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1172), GPR_U32(ctx, 0));
    // 0x799a0c: 0xafa00498  sw          $zero, 0x498($sp)
    ctx->pc = 0x799a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1176), GPR_U32(ctx, 0));
    // 0x799a10: 0xafa0049c  sw          $zero, 0x49C($sp)
    ctx->pc = 0x799a10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1180), GPR_U32(ctx, 0));
    // 0x799a14: 0xafa00590  sw          $zero, 0x590($sp)
    ctx->pc = 0x799a14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1424), GPR_U32(ctx, 0));
    // 0x799a18: 0xafa00594  sw          $zero, 0x594($sp)
    ctx->pc = 0x799a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1428), GPR_U32(ctx, 0));
    // 0x799a1c: 0xafa00598  sw          $zero, 0x598($sp)
    ctx->pc = 0x799a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1432), GPR_U32(ctx, 0));
    // 0x799a20: 0xafa0059c  sw          $zero, 0x59C($sp)
    ctx->pc = 0x799a20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1436), GPR_U32(ctx, 0));
    // 0x799a24: 0x0  nop
    ctx->pc = 0x799a24u;
    // NOP
label_799a28:
    // 0x799a28: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x799a28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x799a2c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x799a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x799a30: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x799a30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x799a34: 0x0  nop
    ctx->pc = 0x799a34u;
    // NOP
    // 0x799a38: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x799A38u;
    {
        const bool branch_taken_0x799a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A38u;
        // 0x799a3c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a38) {
            ctx->pc = 0x799A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799a28;
        }
    }
    ctx->pc = 0x799A40u;
    // 0x799a40: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x799a40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x799a44: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x799a44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x799a48: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x799a48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x799a4c: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x799a4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a50: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x799a50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x799a54: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x799a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a58: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x799a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a5c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x799a5cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x799a60: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x799a60u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x799a64: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799a68: 0x2407002d  addiu       $a3, $zero, 0x2D
    ctx->pc = 0x799a68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x799a6c: 0xc071a62  jal         func_1C6988
    ctx->pc = 0x799A6Cu;
    SET_GPR_U32(ctx, 31, 0x799A74u);
    ctx->pc = 0x799A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A6Cu;
    // 0x799a70: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6988u, 0x799A6Cu, 0x799A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A74u;
label_799a74:
    // 0x799a74: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799a74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x799a78: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x799a78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x799a7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x799a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a80: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x799a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a84: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x799a84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a88: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x799a88u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x799a8c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x799a8cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x799a90: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799a90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799a94: 0x2407002d  addiu       $a3, $zero, 0x2D
    ctx->pc = 0x799a94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x799a98: 0xc071a62  jal         func_1C6988
    ctx->pc = 0x799A98u;
    SET_GPR_U32(ctx, 31, 0x799AA0u);
    ctx->pc = 0x799A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A98u;
    // 0x799a9c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6988u, 0x799A98u, 0x799AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AA0u;
label_799aa0:
    // 0x799aa0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x799aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x799aa4: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x799aa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x799aa8: 0x8fa505c0  lw          $a1, 0x5C0($sp)
    ctx->pc = 0x799aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1472)));
    // 0x799aac: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x799aacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ab0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x799ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ab4: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x799ab4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x799ab8: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x799ab8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x799abc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799ac0: 0x2407002d  addiu       $a3, $zero, 0x2D
    ctx->pc = 0x799ac0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x799ac4: 0xc071a62  jal         func_1C6988
    ctx->pc = 0x799AC4u;
    SET_GPR_U32(ctx, 31, 0x799ACCu);
    ctx->pc = 0x799AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AC4u;
    // 0x799ac8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6988u, 0x799AC4u, 0x799ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799ACCu;
label_799acc:
    // 0x799acc: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x799accu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ad0: 0x2407002d  addiu       $a3, $zero, 0x2D
    ctx->pc = 0x799ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x799ad4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799ad4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ad8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x799ad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799adc: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x799adcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x799ae0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x799ae0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x799ae4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x799ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ae8: 0xc071a62  jal         func_1C6988
    ctx->pc = 0x799AE8u;
    SET_GPR_U32(ctx, 31, 0x799AF0u);
    ctx->pc = 0x799AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AE8u;
    // 0x799aec: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6988u, 0x799AE8u, 0x799AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AF0u;
label_799af0:
    // 0x799af0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x799af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799af4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x799af4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x799af8: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x799af8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x799afc: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x799afcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x799b00: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x799b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x799b04: 0xc071f54  jal         func_1C7D50
    ctx->pc = 0x799B04u;
    SET_GPR_U32(ctx, 31, 0x799B0Cu);
    ctx->pc = 0x799B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B04u;
    // 0x799b08: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7D50u, 0x799B04u, 0x799B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B0Cu;
label_799b0c:
    // 0x799b0c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x799b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b10: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x799b10u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x799b14: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x799b14u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x799b18: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x799b18u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x799b1c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x799b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x799b20: 0xc071f54  jal         func_1C7D50
    ctx->pc = 0x799B20u;
    SET_GPR_U32(ctx, 31, 0x799B28u);
    ctx->pc = 0x799B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B20u;
    // 0x799b24: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7D50u, 0x799B20u, 0x799B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B28u;
label_799b28:
    // 0x799b28: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x799b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b2c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x799b2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x799b30: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x799b30u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x799b34: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x799b34u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x799b38: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x799b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x799b3c: 0xc071f54  jal         func_1C7D50
    ctx->pc = 0x799B3Cu;
    SET_GPR_U32(ctx, 31, 0x799B44u);
    ctx->pc = 0x799B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B3Cu;
    // 0x799b40: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7D50u, 0x799B3Cu, 0x799B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B44u;
label_799b44:
    // 0x799b44: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x799b44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x799b48: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x799b48u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x799b4c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x799b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b50: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x799b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x799b54: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x799b54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x799b58: 0xc071f54  jal         func_1C7D50
    ctx->pc = 0x799B58u;
    SET_GPR_U32(ctx, 31, 0x799B60u);
    ctx->pc = 0x799B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B58u;
    // 0x799b5c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7D50u, 0x799B58u, 0x799B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B60u;
label_799b60:
    // 0x799b60: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x799B60u;
    {
        const bool branch_taken_0x799b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x799b60) {
            ctx->pc = 0x799B74u;
            goto label_799b74;
        }
    }
    ctx->pc = 0x799B68u;
label_799b68:
    // 0x799b68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799b6c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799B6Cu;
    SET_GPR_U32(ctx, 31, 0x799B74u);
    ctx->pc = 0x799B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B6Cu;
    // 0x799b70: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799B6Cu, 0x799B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B74u;
label_799b74:
    // 0x799b74: 0xc070fce  jal         func_1C3F38
    ctx->pc = 0x799B74u;
    SET_GPR_U32(ctx, 31, 0x799B7Cu);
    ctx->pc = 0x799B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B74u;
    // 0x799b78: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3F38u, 0x799B74u, 0x799B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B7Cu;
label_799b7c:
    // 0x799b7c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x799b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b80: 0xc070fce  jal         func_1C3F38
    ctx->pc = 0x799B80u;
    SET_GPR_U32(ctx, 31, 0x799B88u);
    ctx->pc = 0x799B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B80u;
    // 0x799b84: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3F38u, 0x799B80u, 0x799B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B88u;
label_799b88:
    // 0x799b88: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x799b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b8c: 0xc070fce  jal         func_1C3F38
    ctx->pc = 0x799B8Cu;
    SET_GPR_U32(ctx, 31, 0x799B94u);
    ctx->pc = 0x799B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B8Cu;
    // 0x799b90: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3F38u, 0x799B8Cu, 0x799B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B94u;
label_799b94:
    // 0x799b94: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x799b94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b98: 0xc070fce  jal         func_1C3F38
    ctx->pc = 0x799B98u;
    SET_GPR_U32(ctx, 31, 0x799BA0u);
    ctx->pc = 0x799B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B98u;
    // 0x799b9c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3F38u, 0x799B98u, 0x799BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BA0u;
label_799ba0:
    // 0x799ba0: 0x5600fff1  bnel        $s0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x799BA0u;
    {
        const bool branch_taken_0x799ba0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x799ba0) {
            ctx->pc = 0x799BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799BA0u;
            // 0x799ba4: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799b68;
        }
    }
    ctx->pc = 0x799BA8u;
    // 0x799ba8: 0x5640ffef  bnel        $s2, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x799BA8u;
    {
        const bool branch_taken_0x799ba8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x799ba8) {
            ctx->pc = 0x799BACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799BA8u;
            // 0x799bac: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799b68;
        }
    }
    ctx->pc = 0x799BB0u;
    // 0x799bb0: 0x5620ffed  bnel        $s1, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x799BB0u;
    {
        const bool branch_taken_0x799bb0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x799bb0) {
            ctx->pc = 0x799BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799BB0u;
            // 0x799bb4: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799b68;
        }
    }
    ctx->pc = 0x799BB8u;
    // 0x799bb8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x799BB8u;
    {
        const bool branch_taken_0x799bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BB8u;
        // 0x799bbc: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bb8) {
            ctx->pc = 0x799B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799b68;
        }
    }
    ctx->pc = 0x799BC0u;
label_799bc0:
    // 0x799bc0: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x799BC0u;
    SET_GPR_U32(ctx, 31, 0x799BC8u);
    ctx->pc = 0x799BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BC0u;
    // 0x799bc4: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x799BC0u, 0x799BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BC8u;
label_799bc8:
    // 0x799bc8: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x799BC8u;
    SET_GPR_U32(ctx, 31, 0x799BD0u);
    ctx->pc = 0x799BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BC8u;
    // 0x799bcc: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x799BC8u, 0x799BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BD0u;
label_799bd0:
    // 0x799bd0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x799bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x799bd4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799bd8: 0x2444ae50  addiu       $a0, $v0, -0x51B0
    ctx->pc = 0x799bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946384));
    // 0x799bdc: 0xc04cccc  jal         func_133330
    ctx->pc = 0x799BDCu;
    SET_GPR_U32(ctx, 31, 0x799BE4u);
    ctx->pc = 0x799BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BDCu;
    // 0x799be0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133330u, 0x799BDCu, 0x799BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BE4u;
label_799be4:
    // 0x799be4: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x799be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799be8: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799BE8u;
    SET_GPR_U32(ctx, 31, 0x799BF0u);
    ctx->pc = 0x799BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799BE8u;
    // 0x799bec: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799BE8u, 0x799BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BF0u;
label_799bf0:
    // 0x799bf0: 0x7bb00660  lq          $s0, 0x660($sp)
    ctx->pc = 0x799bf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1632)));
    // 0x799bf4: 0x7bb10650  lq          $s1, 0x650($sp)
    ctx->pc = 0x799bf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1616)));
    // 0x799bf8: 0x7bb20640  lq          $s2, 0x640($sp)
    ctx->pc = 0x799bf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1600)));
    // 0x799bfc: 0x7bb30630  lq          $s3, 0x630($sp)
    ctx->pc = 0x799bfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1584)));
    // 0x799c00: 0x7bb40620  lq          $s4, 0x620($sp)
    ctx->pc = 0x799c00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1568)));
    // 0x799c04: 0x7bb50610  lq          $s5, 0x610($sp)
    ctx->pc = 0x799c04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1552)));
    // 0x799c08: 0x7bb60600  lq          $s6, 0x600($sp)
    ctx->pc = 0x799c08u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1536)));
    // 0x799c0c: 0x7bb705f0  lq          $s7, 0x5F0($sp)
    ctx->pc = 0x799c0cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1520)));
    // 0x799c10: 0x7bbe05e0  lq          $fp, 0x5E0($sp)
    ctx->pc = 0x799c10u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1504)));
    // 0x799c14: 0xdfbf05d0  ld          $ra, 0x5D0($sp)
    ctx->pc = 0x799c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1488)));
    // 0x799c18: 0xc7b70688  lwc1        $f23, 0x688($sp)
    ctx->pc = 0x799c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x799c1c: 0xc7b60680  lwc1        $f22, 0x680($sp)
    ctx->pc = 0x799c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x799c20: 0xc7b50678  lwc1        $f21, 0x678($sp)
    ctx->pc = 0x799c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x799c24: 0xc7b40670  lwc1        $f20, 0x670($sp)
    ctx->pc = 0x799c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x799c28: 0x3e00008  jr          $ra
    ctx->pc = 0x799C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C28u;
        // 0x799c2c: 0x27bd0690  addiu       $sp, $sp, 0x690 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1680));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799C30u;
}
} // namespace gh_r802
