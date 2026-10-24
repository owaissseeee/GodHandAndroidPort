#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r405_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r405
{
// Function: checkGondola0Exec__5cR405
// Address: 0x7996a0 - 0x7998a0
void checkGondola0Exec__5cR405_0x7996a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("checkGondola0Exec__5cR405_0x7996a0");
#endif

    switch (ctx->pc) {
        case 0x7996a0u: goto label_7996a0;
        case 0x7996a4u: goto label_7996a4;
        case 0x7996a8u: goto label_7996a8;
        case 0x7996acu: goto label_7996ac;
        case 0x7996b0u: goto label_7996b0;
        case 0x7996b4u: goto label_7996b4;
        case 0x7996b8u: goto label_7996b8;
        case 0x7996bcu: goto label_7996bc;
        case 0x7996c0u: goto label_7996c0;
        case 0x7996c4u: goto label_7996c4;
        case 0x7996c8u: goto label_7996c8;
        case 0x7996ccu: goto label_7996cc;
        case 0x7996d0u: goto label_7996d0;
        case 0x7996d4u: goto label_7996d4;
        case 0x7996d8u: goto label_7996d8;
        case 0x7996dcu: goto label_7996dc;
        case 0x7996e0u: goto label_7996e0;
        case 0x7996e4u: goto label_7996e4;
        case 0x7996e8u: goto label_7996e8;
        case 0x7996ecu: goto label_7996ec;
        case 0x7996f0u: goto label_7996f0;
        case 0x7996f4u: goto label_7996f4;
        case 0x7996f8u: goto label_7996f8;
        case 0x7996fcu: goto label_7996fc;
        case 0x799700u: goto label_799700;
        case 0x799704u: goto label_799704;
        case 0x799708u: goto label_799708;
        case 0x79970cu: goto label_79970c;
        case 0x799710u: goto label_799710;
        case 0x799714u: goto label_799714;
        case 0x799718u: goto label_799718;
        case 0x79971cu: goto label_79971c;
        case 0x799720u: goto label_799720;
        case 0x799724u: goto label_799724;
        case 0x799728u: goto label_799728;
        case 0x79972cu: goto label_79972c;
        case 0x799730u: goto label_799730;
        case 0x799734u: goto label_799734;
        case 0x799738u: goto label_799738;
        case 0x79973cu: goto label_79973c;
        case 0x799740u: goto label_799740;
        case 0x799744u: goto label_799744;
        case 0x799748u: goto label_799748;
        case 0x79974cu: goto label_79974c;
        case 0x799750u: goto label_799750;
        case 0x799754u: goto label_799754;
        case 0x799758u: goto label_799758;
        case 0x79975cu: goto label_79975c;
        case 0x799760u: goto label_799760;
        case 0x799764u: goto label_799764;
        case 0x799768u: goto label_799768;
        case 0x79976cu: goto label_79976c;
        case 0x799770u: goto label_799770;
        case 0x799774u: goto label_799774;
        case 0x799778u: goto label_799778;
        case 0x79977cu: goto label_79977c;
        case 0x799780u: goto label_799780;
        case 0x799784u: goto label_799784;
        case 0x799788u: goto label_799788;
        case 0x79978cu: goto label_79978c;
        case 0x799790u: goto label_799790;
        case 0x799794u: goto label_799794;
        case 0x799798u: goto label_799798;
        case 0x79979cu: goto label_79979c;
        case 0x7997a0u: goto label_7997a0;
        case 0x7997a4u: goto label_7997a4;
        case 0x7997a8u: goto label_7997a8;
        case 0x7997acu: goto label_7997ac;
        case 0x7997b0u: goto label_7997b0;
        case 0x7997b4u: goto label_7997b4;
        case 0x7997b8u: goto label_7997b8;
        case 0x7997bcu: goto label_7997bc;
        case 0x7997c0u: goto label_7997c0;
        case 0x7997c4u: goto label_7997c4;
        case 0x7997c8u: goto label_7997c8;
        case 0x7997ccu: goto label_7997cc;
        case 0x7997d0u: goto label_7997d0;
        case 0x7997d4u: goto label_7997d4;
        case 0x7997d8u: goto label_7997d8;
        case 0x7997dcu: goto label_7997dc;
        case 0x7997e0u: goto label_7997e0;
        case 0x7997e4u: goto label_7997e4;
        case 0x7997e8u: goto label_7997e8;
        case 0x7997ecu: goto label_7997ec;
        case 0x7997f0u: goto label_7997f0;
        case 0x7997f4u: goto label_7997f4;
        case 0x7997f8u: goto label_7997f8;
        case 0x7997fcu: goto label_7997fc;
        case 0x799800u: goto label_799800;
        case 0x799804u: goto label_799804;
        case 0x799808u: goto label_799808;
        case 0x79980cu: goto label_79980c;
        case 0x799810u: goto label_799810;
        case 0x799814u: goto label_799814;
        case 0x799818u: goto label_799818;
        case 0x79981cu: goto label_79981c;
        case 0x799820u: goto label_799820;
        case 0x799824u: goto label_799824;
        case 0x799828u: goto label_799828;
        case 0x79982cu: goto label_79982c;
        case 0x799830u: goto label_799830;
        case 0x799834u: goto label_799834;
        case 0x799838u: goto label_799838;
        case 0x79983cu: goto label_79983c;
        case 0x799840u: goto label_799840;
        case 0x799844u: goto label_799844;
        case 0x799848u: goto label_799848;
        case 0x79984cu: goto label_79984c;
        case 0x799850u: goto label_799850;
        case 0x799854u: goto label_799854;
        case 0x799858u: goto label_799858;
        case 0x79985cu: goto label_79985c;
        case 0x799860u: goto label_799860;
        case 0x799864u: goto label_799864;
        case 0x799868u: goto label_799868;
        case 0x79986cu: goto label_79986c;
        case 0x799870u: goto label_799870;
        case 0x799874u: goto label_799874;
        case 0x799878u: goto label_799878;
        case 0x79987cu: goto label_79987c;
        case 0x799880u: goto label_799880;
        case 0x799884u: goto label_799884;
        case 0x799888u: goto label_799888;
        case 0x79988cu: goto label_79988c;
        case 0x799890u: goto label_799890;
        case 0x799894u: goto label_799894;
        case 0x799898u: goto label_799898;
        case 0x79989cu: goto label_79989c;
        default: break;
    }

    ctx->pc = 0x7996a0u;

label_7996a0:
    // 0x7996a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x7996a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_7996a4:
    // 0x7996a4: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x7996a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_7996a8:
    // 0x7996a8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x7996a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_7996ac:
    // 0x7996ac: 0x3c10005f  lui         $s0, 0x5F
    ctx->pc = 0x7996acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)95 << 16));
label_7996b0:
    // 0x7996b0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x7996b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_7996b4:
    // 0x7996b4: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x7996b4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
label_7996b8:
    // 0x7996b8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x7996b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_7996bc:
    // 0x7996bc: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x7996bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_7996c0:
    // 0x7996c0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x7996c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_7996c4:
    // 0x7996c4: 0x3c14007a  lui         $s4, 0x7A
    ctx->pc = 0x7996c4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)122 << 16));
label_7996c8:
    // 0x7996c8: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x7996c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_7996cc:
    // 0x7996cc: 0x3c15007a  lui         $s5, 0x7A
    ctx->pc = 0x7996ccu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)122 << 16));
label_7996d0:
    // 0x7996d0: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x7996d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_7996d4:
    // 0x7996d4: 0x3c16007a  lui         $s6, 0x7A
    ctx->pc = 0x7996d4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)122 << 16));
label_7996d8:
    // 0x7996d8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x7996d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_7996dc:
    // 0x7996dc: 0x3c170060  lui         $s7, 0x60
    ctx->pc = 0x7996dcu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)96 << 16));
label_7996e0:
    // 0x7996e0: 0x10000005  b           . + 4 + (0x5 << 2)
label_7996e4:
    if (ctx->pc == 0x7996E4u) {
        ctx->pc = 0x7996E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996E0u;
        // 0x7996e4: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996E8u;
        goto label_7996e8;
    }
    ctx->pc = 0x7996E0u;
    {
        const bool branch_taken_0x7996e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996E0u;
        // 0x7996e4: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996e0) {
            ctx->pc = 0x7996F8u;
            goto label_7996f8;
        }
    }
    ctx->pc = 0x7996E8u;
label_7996e8:
    // 0x7996e8: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x7996e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_7996ec:
    // 0x7996ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7996ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7996f0:
    // 0x7996f0: 0xc0b56a8  jal         func_2D5AA0
label_7996f4:
    if (ctx->pc == 0x7996F4u) {
        ctx->pc = 0x7996F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996F0u;
        // 0x7996f4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996F8u;
        goto label_7996f8;
    }
    ctx->pc = 0x7996F0u;
    SET_GPR_U32(ctx, 31, 0x7996F8u);
    ctx->pc = 0x7996F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996F0u;
    // 0x7996f4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7996F0u, 0x7996F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996F8u;
label_7996f8:
    // 0x7996f8: 0x8e82a800  lw          $v0, -0x5800($s4)
    ctx->pc = 0x7996f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294944768)));
label_7996fc:
    // 0x7996fc: 0xc0693c4  jal         func_1A4F10
label_799700:
    if (ctx->pc == 0x799700u) {
        ctx->pc = 0x799700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996FCu;
        // 0x799700: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799704u;
        goto label_799704;
    }
    ctx->pc = 0x7996FCu;
    SET_GPR_U32(ctx, 31, 0x799704u);
    ctx->pc = 0x799700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996FCu;
    // 0x799700: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F10u, 0x7996FCu, 0x799704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799704u;
label_799704:
    // 0x799704: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
label_799708:
    if (ctx->pc == 0x799708u) {
        ctx->pc = 0x799708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799704u;
        // 0x799708: 0x8e82a800  lw          $v0, -0x5800($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294944768)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79970Cu;
        goto label_79970c;
    }
    ctx->pc = 0x799704u;
    {
        const bool branch_taken_0x799704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799704u;
        // 0x799708: 0x8e82a800  lw          $v0, -0x5800($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294944768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799704) {
            ctx->pc = 0x7996E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7996e8;
        }
    }
    ctx->pc = 0x79970Cu;
label_79970c:
    // 0x79970c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79970cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799710:
    // 0x799710: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x799710u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799714:
    // 0x799714: 0xc0693ca  jal         func_1A4F28
label_799718:
    if (ctx->pc == 0x799718u) {
        ctx->pc = 0x799718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799714u;
        // 0x799718: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79971Cu;
        goto label_79971c;
    }
    ctx->pc = 0x799714u;
    SET_GPR_U32(ctx, 31, 0x79971Cu);
    ctx->pc = 0x799718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799714u;
    // 0x799718: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F28u, 0x799714u, 0x79971Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79971Cu;
label_79971c:
    // 0x79971c: 0x26a7a6c8  addiu       $a3, $s5, -0x5938
    ctx->pc = 0x79971cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 4294944456));
label_799720:
    // 0x799720: 0x68e20007  ldl         $v0, 0x7($a3)
    ctx->pc = 0x799720u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_799724:
    // 0x799724: 0x6ce20000  ldr         $v0, 0x0($a3)
    ctx->pc = 0x799724u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_799728:
    // 0x799728: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x799728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_79972c:
    // 0x79972c: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x79972cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_799730:
    // 0x799730: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x799730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_799734:
    // 0x799734: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x799734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
label_799738:
    // 0x799738: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x799738u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_79973c:
    // 0x79973c: 0x8e038658  lw          $v1, -0x79A8($s0)
    ctx->pc = 0x79973cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936152)));
label_799740:
    // 0x799740: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799744:
    // 0x799744: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_799748:
    // 0x799748: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x799748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_79974c:
    // 0x79974c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x79974cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_799750:
    // 0x799750: 0xc0b0e6c  jal         func_2C39B0
label_799754:
    if (ctx->pc == 0x799754u) {
        ctx->pc = 0x799754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799750u;
        // 0x799754: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799758u;
        goto label_799758;
    }
    ctx->pc = 0x799750u;
    SET_GPR_U32(ctx, 31, 0x799758u);
    ctx->pc = 0x799754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799750u;
    // 0x799754: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x799750u, 0x799758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799758u;
label_799758:
    // 0x799758: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x799758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_79975c:
    // 0x79975c: 0xc0b0fb6  jal         func_2C3ED8
label_799760:
    if (ctx->pc == 0x799760u) {
        ctx->pc = 0x799760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79975Cu;
        // 0x799760: 0x26c5a6d8  addiu       $a1, $s6, -0x5928 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294944472));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799764u;
        goto label_799764;
    }
    ctx->pc = 0x79975Cu;
    SET_GPR_U32(ctx, 31, 0x799764u);
    ctx->pc = 0x799760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79975Cu;
    // 0x799760: 0x26c5a6d8  addiu       $a1, $s6, -0x5928 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294944472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x79975Cu, 0x799764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799764u;
label_799764:
    // 0x799764: 0x26e4ee00  addiu       $a0, $s7, -0x1200
    ctx->pc = 0x799764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294962688));
label_799768:
    // 0x799768: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_79976c:
    // 0x79976c: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x79976cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_799770:
    // 0x799770: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799770u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799774:
    // 0x799774: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799774u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799778:
    // 0x799778: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799778u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79977c:
    // 0x79977c: 0xc0b2e28  jal         func_2CB8A0
label_799780:
    if (ctx->pc == 0x799780u) {
        ctx->pc = 0x799780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79977Cu;
        // 0x799780: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799784u;
        goto label_799784;
    }
    ctx->pc = 0x79977Cu;
    SET_GPR_U32(ctx, 31, 0x799784u);
    ctx->pc = 0x799780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79977Cu;
    // 0x799780: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79977Cu, 0x799784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799784u;
label_799784:
    // 0x799784: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x799784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_799788:
    // 0x799788: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x799788u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_79978c:
    // 0x79978c: 0x0  nop
    ctx->pc = 0x79978cu;
    // NOP
label_799790:
    // 0x799790: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x799790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_799794:
    // 0x799794: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799798:
    // 0x799798: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x799798u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_79979c:
    // 0x79979c: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x79979cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
label_7997a0:
    // 0x7997a0: 0xc0a56f0  jal         func_295BC0
label_7997a4:
    if (ctx->pc == 0x7997A4u) {
        ctx->pc = 0x7997A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997A0u;
        // 0x7997a4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997A8u;
        goto label_7997a8;
    }
    ctx->pc = 0x7997A0u;
    SET_GPR_U32(ctx, 31, 0x7997A8u);
    ctx->pc = 0x7997A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997A0u;
    // 0x7997a4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x7997A0u, 0x7997A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997A8u;
label_7997a8:
    // 0x7997a8: 0x2e220003  sltiu       $v0, $s1, 0x3
    ctx->pc = 0x7997a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_7997ac:
    // 0x7997ac: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_7997b0:
    if (ctx->pc == 0x7997B0u) {
        ctx->pc = 0x7997B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997ACu;
        // 0x7997b0: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997B4u;
        goto label_7997b4;
    }
    ctx->pc = 0x7997ACu;
    {
        const bool branch_taken_0x7997ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7997ac) {
            ctx->pc = 0x7997B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7997ACu;
            // 0x7997b0: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799790;
        }
    }
    ctx->pc = 0x7997B4u;
label_7997b4:
    // 0x7997b4: 0x8e84a800  lw          $a0, -0x5800($s4)
    ctx->pc = 0x7997b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294944768)));
label_7997b8:
    // 0x7997b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7997b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7997bc:
    // 0x7997bc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x7997bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_7997c0:
    // 0x7997c0: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x7997c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_7997c4:
    // 0x7997c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7997c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7997c8:
    // 0x7997c8: 0xc1e678c  jal         func_799E30
label_7997cc:
    if (ctx->pc == 0x7997CCu) {
        ctx->pc = 0x7997CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997C8u;
        // 0x7997cc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997D0u;
        goto label_7997d0;
    }
    ctx->pc = 0x7997C8u;
    SET_GPR_U32(ctx, 31, 0x7997D0u);
    ctx->pc = 0x7997CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997C8u;
    // 0x7997cc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799E30u, 0x7997C8u, 0x7997D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997D0u;
label_7997d0:
    // 0x7997d0: 0xc0b101e  jal         func_2C4078
label_7997d4:
    if (ctx->pc == 0x7997D4u) {
        ctx->pc = 0x7997D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997D0u;
        // 0x7997d4: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997D8u;
        goto label_7997d8;
    }
    ctx->pc = 0x7997D0u;
    SET_GPR_U32(ctx, 31, 0x7997D8u);
    ctx->pc = 0x7997D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997D0u;
    // 0x7997d4: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x7997D0u, 0x7997D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997D8u;
label_7997d8:
    // 0x7997d8: 0xc0b0f04  jal         func_2C3C10
label_7997dc:
    if (ctx->pc == 0x7997DCu) {
        ctx->pc = 0x7997DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997D8u;
        // 0x7997dc: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997E0u;
        goto label_7997e0;
    }
    ctx->pc = 0x7997D8u;
    SET_GPR_U32(ctx, 31, 0x7997E0u);
    ctx->pc = 0x7997DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997D8u;
    // 0x7997dc: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x7997D8u, 0x7997E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997E0u;
label_7997e0:
    // 0x7997e0: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x7997e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_7997e4:
    // 0x7997e4: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x7997e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_7997e8:
    // 0x7997e8: 0xc0b56a8  jal         func_2D5AA0
label_7997ec:
    if (ctx->pc == 0x7997ECu) {
        ctx->pc = 0x7997ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997E8u;
        // 0x7997ec: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7997F0u;
        goto label_7997f0;
    }
    ctx->pc = 0x7997E8u;
    SET_GPR_U32(ctx, 31, 0x7997F0u);
    ctx->pc = 0x7997ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997E8u;
    // 0x7997ec: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7997E8u, 0x7997F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997F0u;
label_7997f0:
    // 0x7997f0: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x7997f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_7997f4:
    // 0x7997f4: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x7997f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_7997f8:
    // 0x7997f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x7997f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_7997fc:
    // 0x7997fc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x7997fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_799800:
    // 0x799800: 0xc0b6dac  jal         func_2DB6B0
label_799804:
    if (ctx->pc == 0x799804u) {
        ctx->pc = 0x799804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799800u;
        // 0x799804: 0xa3a20010  sb          $v0, 0x10($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799808u;
        goto label_799808;
    }
    ctx->pc = 0x799800u;
    SET_GPR_U32(ctx, 31, 0x799808u);
    ctx->pc = 0x799804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799800u;
    // 0x799804: 0xa3a20010  sb          $v0, 0x10($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799800u, 0x799808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799808u;
label_799808:
    // 0x799808: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x799808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_79980c:
    // 0x79980c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x79980cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_799810:
    // 0x799810: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x799810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_799814:
    // 0x799814: 0xa0f809  jalr        $a1
label_799818:
    if (ctx->pc == 0x799818u) {
        ctx->pc = 0x799818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799814u;
        // 0x799818: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79981Cu;
        goto label_79981c;
    }
    ctx->pc = 0x799814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x79981Cu);
        ctx->pc = 0x799818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799814u;
        // 0x799818: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799814u, 0x79981Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79981Cu;
label_79981c:
    // 0x79981c: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x79981cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
label_799820:
    // 0x799820: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x799820u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
label_799824:
    // 0x799824: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_799828:
    // 0x799828: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x799828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79982c:
    // 0x79982c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x79982cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_799830:
    // 0x799830: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x799830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_799834:
    // 0x799834: 0xc0a57e0  jal         func_295F80
label_799838:
    if (ctx->pc == 0x799838u) {
        ctx->pc = 0x799838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799834u;
        // 0x799838: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79983Cu;
        goto label_79983c;
    }
    ctx->pc = 0x799834u;
    SET_GPR_U32(ctx, 31, 0x79983Cu);
    ctx->pc = 0x799838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799834u;
    // 0x799838: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799834u, 0x79983Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79983Cu;
label_79983c:
    // 0x79983c: 0xc0c73f8  jal         func_31CFE0
label_799840:
    if (ctx->pc == 0x799840u) {
        ctx->pc = 0x799844u;
        goto label_799844;
    }
    ctx->pc = 0x79983Cu;
    SET_GPR_U32(ctx, 31, 0x799844u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x79983Cu, 0x799844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799844u;
label_799844:
    // 0x799844: 0x8e432f84  lw          $v1, 0x2F84($s2)
    ctx->pc = 0x799844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_799848:
    // 0x799848: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x799848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_79984c:
    // 0x79984c: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x79984cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_799850:
    // 0x799850: 0xc0b56a8  jal         func_2D5AA0
label_799854:
    if (ctx->pc == 0x799854u) {
        ctx->pc = 0x799854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799850u;
        // 0x799854: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799858u;
        goto label_799858;
    }
    ctx->pc = 0x799850u;
    SET_GPR_U32(ctx, 31, 0x799858u);
    ctx->pc = 0x799854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799850u;
    // 0x799854: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799850u, 0x799858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799858u;
label_799858:
    // 0x799858: 0x2e220003  sltiu       $v0, $s1, 0x3
    ctx->pc = 0x799858u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_79985c:
    // 0x79985c: 0x5440ffe6  bnel        $v0, $zero, . + 4 + (-0x1A << 2)
label_799860:
    if (ctx->pc == 0x799860u) {
        ctx->pc = 0x799860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79985Cu;
        // 0x799860: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799864u;
        goto label_799864;
    }
    ctx->pc = 0x79985Cu;
    {
        const bool branch_taken_0x79985c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79985c) {
            ctx->pc = 0x799860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79985Cu;
            // 0x799860: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7997F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7997f8;
        }
    }
    ctx->pc = 0x799864u;
label_799864:
    // 0x799864: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x799864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
label_799868:
    // 0x799868: 0xc0b5692  jal         func_2D5A48
label_79986c:
    if (ctx->pc == 0x79986Cu) {
        ctx->pc = 0x79986Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799868u;
        // 0x79986c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799870u;
        goto label_799870;
    }
    ctx->pc = 0x799868u;
    SET_GPR_U32(ctx, 31, 0x799870u);
    ctx->pc = 0x79986Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799868u;
    // 0x79986c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799868u, 0x799870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799870u;
label_799870:
    // 0x799870: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x799870u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_799874:
    // 0x799874: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x799874u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_799878:
    // 0x799878: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x799878u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_79987c:
    // 0x79987c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x79987cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_799880:
    // 0x799880: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x799880u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_799884:
    // 0x799884: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x799884u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_799888:
    // 0x799888: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x799888u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_79988c:
    // 0x79988c: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x79988cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_799890:
    // 0x799890: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x799890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_799894:
    // 0x799894: 0x3e00008  jr          $ra
label_799898:
    if (ctx->pc == 0x799898u) {
        ctx->pc = 0x799898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799894u;
        // 0x799898: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79989Cu;
        goto label_79989c;
    }
    ctx->pc = 0x799894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799894u;
        // 0x799898: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79989Cu;
label_79989c:
    // 0x79989c: 0x0  nop
    ctx->pc = 0x79989cu;
    // NOP
    ctx->pc = 0x7998a0u;
}
} // namespace gh_r405
