#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r205_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r205
{
// Function: func_00799640
// Address: 0x799640 - 0x799748
void func_00799640_0x799640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799640_0x799640");
#endif

    switch (ctx->pc) {
        case 0x799640u: goto label_799640;
        case 0x799644u: goto label_799644;
        case 0x799648u: goto label_799648;
        case 0x79964cu: goto label_79964c;
        case 0x799650u: goto label_799650;
        case 0x799654u: goto label_799654;
        case 0x799658u: goto label_799658;
        case 0x79965cu: goto label_79965c;
        case 0x799660u: goto label_799660;
        case 0x799664u: goto label_799664;
        case 0x799668u: goto label_799668;
        case 0x79966cu: goto label_79966c;
        case 0x799670u: goto label_799670;
        case 0x799674u: goto label_799674;
        case 0x799678u: goto label_799678;
        case 0x79967cu: goto label_79967c;
        case 0x799680u: goto label_799680;
        case 0x799684u: goto label_799684;
        case 0x799688u: goto label_799688;
        case 0x79968cu: goto label_79968c;
        case 0x799690u: goto label_799690;
        case 0x799694u: goto label_799694;
        case 0x799698u: goto label_799698;
        case 0x79969cu: goto label_79969c;
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
        default: break;
    }

    ctx->pc = 0x799640u;

label_799640:
    // 0x799640: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x799640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_799644:
    // 0x799644: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x799644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799648:
    // 0x799648: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x799648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_79964c:
    // 0x79964c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x79964cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_799650:
    // 0x799650: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x799650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_799654:
    // 0x799654: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x799654u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_799658:
    // 0x799658: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x799658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_79965c:
    // 0x79965c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x79965cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799660:
    // 0x799660: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x799660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_799664:
    // 0x799664: 0x3c130058  lui         $s3, 0x58
    ctx->pc = 0x799664u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)88 << 16));
label_799668:
    // 0x799668: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x799668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_79966c:
    // 0x79966c: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x79966cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
label_799670:
    // 0x799670: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x799670u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
label_799674:
    // 0x799674: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x799674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
label_799678:
    // 0x799678: 0xafbd0030  sw          $sp, 0x30($sp)
    ctx->pc = 0x799678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 29));
label_79967c:
    // 0x79967c: 0x6ba20037  ldl         $v0, 0x37($sp)
    ctx->pc = 0x79967cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_799680:
    // 0x799680: 0x6fa20030  ldr         $v0, 0x30($sp)
    ctx->pc = 0x799680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_799684:
    // 0x799684: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x799684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_799688:
    // 0x799688: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x799688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_79968c:
    // 0x79968c: 0x0  nop
    ctx->pc = 0x79968cu;
    // NOP
label_799690:
    // 0x799690: 0xc0a57ca  jal         func_295F28
label_799694:
    if (ctx->pc == 0x799694u) {
        ctx->pc = 0x799694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799690u;
        // 0x799694: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799698u;
        goto label_799698;
    }
    ctx->pc = 0x799690u;
    SET_GPR_U32(ctx, 31, 0x799698u);
    ctx->pc = 0x799694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799690u;
    // 0x799694: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F28u, 0x799690u, 0x799698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799698u;
label_799698:
    // 0x799698: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
label_79969c:
    if (ctx->pc == 0x79969Cu) {
        ctx->pc = 0x79969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799698u;
        // 0x79969c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996A0u;
        goto label_7996a0;
    }
    ctx->pc = 0x799698u;
    {
        const bool branch_taken_0x799698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799698) {
            ctx->pc = 0x79969Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799698u;
            // 0x79969c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7996ECu;
            goto label_7996ec;
        }
    }
    ctx->pc = 0x7996A0u;
label_7996a0:
    // 0x7996a0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x7996a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_7996a4:
    // 0x7996a4: 0x266464f0  addiu       $a0, $s3, 0x64F0
    ctx->pc = 0x7996a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 25840));
label_7996a8:
    // 0x7996a8: 0xc0a421a  jal         func_290868
label_7996ac:
    if (ctx->pc == 0x7996ACu) {
        ctx->pc = 0x7996ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996A8u;
        // 0x7996ac: 0x90450000  lbu         $a1, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996B0u;
        goto label_7996b0;
    }
    ctx->pc = 0x7996A8u;
    SET_GPR_U32(ctx, 31, 0x7996B0u);
    ctx->pc = 0x7996ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996A8u;
    // 0x7996ac: 0x90450000  lbu         $a1, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x7996A8u, 0x7996B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996B0u;
label_7996b0:
    // 0x7996b0: 0xc0b6dac  jal         func_2DB6B0
label_7996b4:
    if (ctx->pc == 0x7996B4u) {
        ctx->pc = 0x7996B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996B0u;
        // 0x7996b4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996B8u;
        goto label_7996b8;
    }
    ctx->pc = 0x7996B0u;
    SET_GPR_U32(ctx, 31, 0x7996B8u);
    ctx->pc = 0x7996B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996B0u;
    // 0x7996b4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x7996B0u, 0x7996B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996B8u;
label_7996b8:
    // 0x7996b8: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x7996b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_7996bc:
    // 0x7996bc: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x7996bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_7996c0:
    // 0x7996c0: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x7996c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_7996c4:
    // 0x7996c4: 0xa0f809  jalr        $a1
label_7996c8:
    if (ctx->pc == 0x7996C8u) {
        ctx->pc = 0x7996C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996C4u;
        // 0x7996c8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996CCu;
        goto label_7996cc;
    }
    ctx->pc = 0x7996C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x7996CCu);
        ctx->pc = 0x7996C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996C4u;
        // 0x7996c8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7996C4u, 0x7996CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7996CCu;
label_7996cc:
    // 0x7996cc: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x7996ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_7996d0:
    // 0x7996d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x7996d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_7996d4:
    // 0x7996d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7996d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7996d8:
    // 0x7996d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7996d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7996dc:
    // 0x7996dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7996dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7996e0:
    // 0x7996e0: 0xc09ba62  jal         func_26E988
label_7996e4:
    if (ctx->pc == 0x7996E4u) {
        ctx->pc = 0x7996E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996E0u;
        // 0x7996e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996E8u;
        goto label_7996e8;
    }
    ctx->pc = 0x7996E0u;
    SET_GPR_U32(ctx, 31, 0x7996E8u);
    ctx->pc = 0x7996E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996E0u;
    // 0x7996e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26E988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E988u, 0x7996E0u, 0x7996E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996E8u;
label_7996e8:
    // 0x7996e8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x7996e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_7996ec:
    // 0x7996ec: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x7996ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_7996f0:
    // 0x7996f0: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_7996f4:
    if (ctx->pc == 0x7996F4u) {
        ctx->pc = 0x7996F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996F0u;
        // 0x7996f4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7996F8u;
        goto label_7996f8;
    }
    ctx->pc = 0x7996F0u;
    {
        const bool branch_taken_0x7996f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7996F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996F0u;
        // 0x7996f4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996f0) {
            ctx->pc = 0x799690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799690;
        }
    }
    ctx->pc = 0x7996F8u;
label_7996f8:
    // 0x7996f8: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x7996f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_7996fc:
    // 0x7996fc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x7996fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_799700:
    // 0x799700: 0x2610ea60  addiu       $s0, $s0, -0x15A0
    ctx->pc = 0x799700u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
label_799704:
    // 0x799704: 0xc0b0a7e  jal         func_2C29F8
label_799708:
    if (ctx->pc == 0x799708u) {
        ctx->pc = 0x799708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799704u;
        // 0x799708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79970Cu;
        goto label_79970c;
    }
    ctx->pc = 0x799704u;
    SET_GPR_U32(ctx, 31, 0x79970Cu);
    ctx->pc = 0x799708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799704u;
    // 0x799708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799704u, 0x79970Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79970Cu;
label_79970c:
    // 0x79970c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79970cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799710:
    // 0x799710: 0xc0b0a7e  jal         func_2C29F8
label_799714:
    if (ctx->pc == 0x799714u) {
        ctx->pc = 0x799714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799710u;
        // 0x799714: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799718u;
        goto label_799718;
    }
    ctx->pc = 0x799710u;
    SET_GPR_U32(ctx, 31, 0x799718u);
    ctx->pc = 0x799714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799710u;
    // 0x799714: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799710u, 0x799718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799718u;
label_799718:
    // 0x799718: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x799718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_79971c:
    // 0x79971c: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x79971cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
label_799720:
    // 0x799720: 0xc0b5692  jal         func_2D5A48
label_799724:
    if (ctx->pc == 0x799724u) {
        ctx->pc = 0x799724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799720u;
        // 0x799724: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799728u;
        goto label_799728;
    }
    ctx->pc = 0x799720u;
    SET_GPR_U32(ctx, 31, 0x799728u);
    ctx->pc = 0x799724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799720u;
    // 0x799724: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799720u, 0x799728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799728u;
label_799728:
    // 0x799728: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x799728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_79972c:
    // 0x79972c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x79972cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_799730:
    // 0x799730: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x799730u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_799734:
    // 0x799734: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x799734u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_799738:
    // 0x799738: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x799738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_79973c:
    // 0x79973c: 0x3e00008  jr          $ra
label_799740:
    if (ctx->pc == 0x799740u) {
        ctx->pc = 0x799740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79973Cu;
        // 0x799740: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799744u;
        goto label_799744;
    }
    ctx->pc = 0x79973Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79973Cu;
        // 0x799740: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79973Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799744u;
label_799744:
    // 0x799744: 0x0  nop
    ctx->pc = 0x799744u;
    // NOP
    ctx->pc = 0x799748u;
}
} // namespace gh_r205
