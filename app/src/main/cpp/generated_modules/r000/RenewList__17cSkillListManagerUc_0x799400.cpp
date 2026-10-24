#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r000_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r000
{
// Function: RenewList__17cSkillListManagerUc
// Address: 0x799400 - 0x799b28
void RenewList__17cSkillListManagerUc_0x799400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RenewList__17cSkillListManagerUc_0x799400");
#endif

    switch (ctx->pc) {
        case 0x79943cu: goto label_79943c;
        case 0x799458u: goto label_799458;
        case 0x7994a8u: goto label_7994a8;
        case 0x7994f4u: goto label_7994f4;
        case 0x799510u: goto label_799510;
        case 0x79951cu: goto label_79951c;
        case 0x79955cu: goto label_79955c;
        case 0x79956cu: goto label_79956c;
        case 0x7995b0u: goto label_7995b0;
        case 0x7995f0u: goto label_7995f0;
        case 0x79960cu: goto label_79960c;
        case 0x799618u: goto label_799618;
        case 0x799650u: goto label_799650;
        case 0x79966cu: goto label_79966c;
        case 0x799680u: goto label_799680;
        case 0x7996c0u: goto label_7996c0;
        case 0x7996dcu: goto label_7996dc;
        case 0x7996e8u: goto label_7996e8;
        case 0x799718u: goto label_799718;
        case 0x79973cu: goto label_79973c;
        case 0x799750u: goto label_799750;
        case 0x799770u: goto label_799770;
        case 0x79977cu: goto label_79977c;
        case 0x7997ccu: goto label_7997cc;
        case 0x7997e8u: goto label_7997e8;
        case 0x7997f8u: goto label_7997f8;
        case 0x799814u: goto label_799814;
        case 0x799848u: goto label_799848;
        case 0x799908u: goto label_799908;
        case 0x799928u: goto label_799928;
        case 0x799978u: goto label_799978;
        case 0x7999ccu: goto label_7999cc;
        case 0x799a4cu: goto label_799a4c;
        case 0x799aa0u: goto label_799aa0;
        default: break;
    }

    ctx->pc = 0x799400u;

    // 0x799400: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x799400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x799404: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x799404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x799408: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x799408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x79940c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x79940cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x799410: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x799410u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799414: 0x30b400ff  andi        $s4, $a1, 0xFF
    ctx->pc = 0x799414u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x799418: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x799418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x79941c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x79941cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x799420: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x799420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x799424: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x799424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x799428: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79942c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x79942cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x799430: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x799434: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x799434u;
    SET_GPR_U32(ctx, 31, 0x79943Cu);
    ctx->pc = 0x799438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799434u;
    // 0x799438: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x799434u, 0x79943Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79943Cu;
label_79943c:
    // 0x79943c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x79943cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x799440: 0x106001b1  beqz        $v1, . + 4 + (0x1B1 << 2)
    ctx->pc = 0x799440u;
    {
        const bool branch_taken_0x799440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799440u;
        // 0x799444: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799440) {
            ctx->pc = 0x799B08u;
            goto label_799b08;
        }
    }
    ctx->pc = 0x799448u;
    // 0x799448: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x799448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x79944c: 0x1040013b  beqz        $v0, . + 4 + (0x13B << 2)
    ctx->pc = 0x79944Cu;
    {
        const bool branch_taken_0x79944c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79944Cu;
        // 0x799450: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79944c) {
            ctx->pc = 0x79993Cu;
            goto label_79993c;
        }
    }
    ctx->pc = 0x799454u;
    // 0x799454: 0x2e820011  sltiu       $v0, $s4, 0x11
    ctx->pc = 0x799454u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_799458:
    // 0x799458: 0x10400133  beqz        $v0, . + 4 + (0x133 << 2)
    ctx->pc = 0x799458u;
    {
        const bool branch_taken_0x799458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79945Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799458u;
        // 0x79945c: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799458) {
            ctx->pc = 0x799928u;
            goto label_799928;
        }
    }
    ctx->pc = 0x799460u;
    // 0x799460: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x799460u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x799464: 0x2442c880  addiu       $v0, $v0, -0x3780
    ctx->pc = 0x799464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953088));
    // 0x799468: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x799468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x79946c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79946cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x799470: 0x800008  jr          $a0
    ctx->pc = 0x799470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x799478u: goto label_799478;
            case 0x7994C4u: goto label_7994c4;
            case 0x7995C0u: goto label_7995c0;
            case 0x799690u: goto label_799690;
            case 0x79979Cu: goto label_79979c;
            case 0x79981Cu: goto label_79981c;
            case 0x799830u: goto label_799830;
            case 0x799850u: goto label_799850;
            case 0x799864u: goto label_799864;
            case 0x799878u: goto label_799878;
            case 0x79988Cu: goto label_79988c;
            case 0x7998A0u: goto label_7998a0;
            case 0x7998B4u: goto label_7998b4;
            case 0x7998C8u: goto label_7998c8;
            case 0x7998DCu: goto label_7998dc;
            case 0x7998F0u: goto label_7998f0;
            case 0x799910u: goto label_799910;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799470u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x799478u;
label_799478:
    // 0x799478: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x799478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x79947c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x79947cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x799480: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x799480u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x799484: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x799484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x799488: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x799488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x79948c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79948cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x799490: 0x104000b7  beqz        $v0, . + 4 + (0xB7 << 2)
    ctx->pc = 0x799490u;
    {
        const bool branch_taken_0x799490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799490u;
        // 0x799494: 0x3c150057  lui         $s5, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799490) {
            ctx->pc = 0x799770u;
            goto label_799770;
        }
    }
    ctx->pc = 0x799498u;
    // 0x799498: 0x26b29b70  addiu       $s2, $s5, -0x6490
    ctx->pc = 0x799498u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941552));
    // 0x79949c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79949cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994a0: 0xc07ebd6  jal         func_1FAF58
    ctx->pc = 0x7994A0u;
    SET_GPR_U32(ctx, 31, 0x7994A8u);
    ctx->pc = 0x7994A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994A0u;
    // 0x7994a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x7994A0u, 0x7994A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994A8u;
label_7994a8:
    // 0x7994a8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x7994a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7994ac: 0x144300b1  bne         $v0, $v1, . + 4 + (0xB1 << 2)
    ctx->pc = 0x7994ACu;
    {
        const bool branch_taken_0x7994ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x7994B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994ACu;
        // 0x7994b0: 0x26a49b70  addiu       $a0, $s5, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994ac) {
            ctx->pc = 0x799774u;
            goto label_799774;
        }
    }
    ctx->pc = 0x7994B4u;
    // 0x7994b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7994b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7994b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994bc: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x7994BCu;
    {
        const bool branch_taken_0x7994bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994BCu;
        // 0x7994c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994bc) {
            ctx->pc = 0x799768u;
            goto label_799768;
        }
    }
    ctx->pc = 0x7994C4u;
label_7994c4:
    // 0x7994c4: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x7994c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x7994c8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x7994c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x7994cc: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x7994ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x7994d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x7994d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x7994d4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x7994d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x7994d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x7994d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x7994dc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x7994DCu;
    {
        const bool branch_taken_0x7994dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994DCu;
        // 0x7994e0: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994dc) {
            ctx->pc = 0x799510u;
            goto label_799510;
        }
    }
    ctx->pc = 0x7994E4u;
    // 0x7994e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7994e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994e8: 0x24529b70  addiu       $s2, $v0, -0x6490
    ctx->pc = 0x7994e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x7994ec: 0xc07ebd6  jal         func_1FAF58
    ctx->pc = 0x7994ECu;
    SET_GPR_U32(ctx, 31, 0x7994F4u);
    ctx->pc = 0x7994F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994ECu;
    // 0x7994f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x7994ECu, 0x7994F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994F4u;
label_7994f4:
    // 0x7994f4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x7994f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7994f8: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x7994F8u;
    {
        const bool branch_taken_0x7994f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x7994FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994F8u;
        // 0x7994fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994f8) {
            ctx->pc = 0x799514u;
            goto label_799514;
        }
    }
    ctx->pc = 0x799500u;
    // 0x799500: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799504: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x799504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799508: 0xc07ebc8  jal         func_1FAF20
    ctx->pc = 0x799508u;
    SET_GPR_U32(ctx, 31, 0x799510u);
    ctx->pc = 0x79950Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799508u;
    // 0x79950c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF20u, 0x799508u, 0x799510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799510u;
label_799510:
    // 0x799510: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_799514:
    // 0x799514: 0xc1e66ca  jal         func_799B28
    ctx->pc = 0x799514u;
    SET_GPR_U32(ctx, 31, 0x79951Cu);
    ctx->pc = 0x799518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799514u;
    // 0x799518: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799B28u, 0x799514u, 0x79951Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79951Cu;
label_79951c:
    // 0x79951c: 0x54400103  bnel        $v0, $zero, . + 4 + (0x103 << 2)
    ctx->pc = 0x79951Cu;
    {
        const bool branch_taken_0x79951c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79951c) {
            ctx->pc = 0x799520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79951Cu;
            // 0x799520: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79992Cu;
            goto label_79992c;
        }
    }
    ctx->pc = 0x799524u;
    // 0x799524: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x799524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x799528: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x799528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79952c: 0x2029818  mult        $s3, $s0, $v0
    ctx->pc = 0x79952cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x799530: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x799530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x799534: 0x9062000c  lbu         $v0, 0xC($v1)
    ctx->pc = 0x799534u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x799538: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x799538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x79953c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79953cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x799540: 0x104000f9  beqz        $v0, . + 4 + (0xF9 << 2)
    ctx->pc = 0x799540u;
    {
        const bool branch_taken_0x799540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799540u;
        // 0x799544: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799540) {
            ctx->pc = 0x799928u;
            goto label_799928;
        }
    }
    ctx->pc = 0x799548u;
    // 0x799548: 0x94650012  lhu         $a1, 0x12($v1)
    ctx->pc = 0x799548u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x79954c: 0x24529b70  addiu       $s2, $v0, -0x6490
    ctx->pc = 0x79954cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x799550: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x799550u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799554: 0xc07eff4  jal         func_1FBFD0
    ctx->pc = 0x799554u;
    SET_GPR_U32(ctx, 31, 0x79955Cu);
    ctx->pc = 0x799558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799554u;
    // 0x799558: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBFD0u, 0x799554u, 0x79955Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79955Cu;
label_79955c:
    // 0x79955c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x79955Cu;
    {
        const bool branch_taken_0x79955c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79955Cu;
        // 0x799560: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79955c) {
            ctx->pc = 0x79958Cu;
            goto label_79958c;
        }
    }
    ctx->pc = 0x799564u;
    // 0x799564: 0xc07e9b0  jal         func_1FA6C0
    ctx->pc = 0x799564u;
    SET_GPR_U32(ctx, 31, 0x79956Cu);
    ctx->pc = 0x799568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799564u;
    // 0x799568: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x799564u, 0x79956Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79956Cu;
label_79956c:
    // 0x79956c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79956Cu;
    {
        const bool branch_taken_0x79956c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79956Cu;
        // 0x799570: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79956c) {
            ctx->pc = 0x79958Cu;
            goto label_79958c;
        }
    }
    ctx->pc = 0x799574u;
    // 0x799574: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x799574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x799578: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x799578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x79957c: 0x94430012  lhu         $v1, 0x12($v0)
    ctx->pc = 0x79957cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x799580: 0x546000ea  bnel        $v1, $zero, . + 4 + (0xEA << 2)
    ctx->pc = 0x799580u;
    {
        const bool branch_taken_0x799580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x799580) {
            ctx->pc = 0x799584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799580u;
            // 0x799584: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79992Cu;
            goto label_79992c;
        }
    }
    ctx->pc = 0x799588u;
    // 0x799588: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x799588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_79958c:
    // 0x79958c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x79958cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x799590: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x799590u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x799594: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x799594u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799598: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x799598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x79959c: 0x8445001a  lh          $a1, 0x1A($v0)
    ctx->pc = 0x79959cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 26)));
    // 0x7995a0: 0x10b20079  beq         $a1, $s2, . + 4 + (0x79 << 2)
    ctx->pc = 0x7995A0u;
    {
        const bool branch_taken_0x7995a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 18));
        ctx->pc = 0x7995A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995A0u;
        // 0x7995a4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995a0) {
            ctx->pc = 0x799788u;
            goto label_799788;
        }
    }
    ctx->pc = 0x7995A8u;
    // 0x7995a8: 0xc07ebd6  jal         func_1FAF58
    ctx->pc = 0x7995A8u;
    SET_GPR_U32(ctx, 31, 0x7995B0u);
    ctx->pc = 0x7995ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995A8u;
    // 0x7995ac: 0x26a49b70  addiu       $a0, $s5, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x7995A8u, 0x7995B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995B0u;
label_7995b0:
    // 0x7995b0: 0x105200dd  beq         $v0, $s2, . + 4 + (0xDD << 2)
    ctx->pc = 0x7995B0u;
    {
        const bool branch_taken_0x7995b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x7995B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995B0u;
        // 0x7995b4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995b0) {
            ctx->pc = 0x799928u;
            goto label_799928;
        }
    }
    ctx->pc = 0x7995B8u;
    // 0x7995b8: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x7995B8u;
    {
        const bool branch_taken_0x7995b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7995BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995B8u;
        // 0x7995bc: 0x24430001  addiu       $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995b8) {
            ctx->pc = 0x79978Cu;
            goto label_79978c;
        }
    }
    ctx->pc = 0x7995C0u;
label_7995c0:
    // 0x7995c0: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x7995c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x7995c4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x7995c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x7995c8: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x7995c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x7995cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x7995ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x7995d0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x7995d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x7995d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x7995d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x7995d8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x7995D8u;
    {
        const bool branch_taken_0x7995d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7995DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995D8u;
        // 0x7995dc: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995d8) {
            ctx->pc = 0x79960Cu;
            goto label_79960c;
        }
    }
    ctx->pc = 0x7995E0u;
    // 0x7995e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7995e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995e4: 0x24529b70  addiu       $s2, $v0, -0x6490
    ctx->pc = 0x7995e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x7995e8: 0xc07ebd6  jal         func_1FAF58
    ctx->pc = 0x7995E8u;
    SET_GPR_U32(ctx, 31, 0x7995F0u);
    ctx->pc = 0x7995ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995E8u;
    // 0x7995ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x7995E8u, 0x7995F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995F0u;
label_7995f0:
    // 0x7995f0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x7995f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7995f4: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x7995F4u;
    {
        const bool branch_taken_0x7995f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x7995F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995F4u;
        // 0x7995f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995f4) {
            ctx->pc = 0x799610u;
            goto label_799610;
        }
    }
    ctx->pc = 0x7995FCu;
    // 0x7995fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7995fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799600: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x799600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799604: 0xc07ebc8  jal         func_1FAF20
    ctx->pc = 0x799604u;
    SET_GPR_U32(ctx, 31, 0x79960Cu);
    ctx->pc = 0x799608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799604u;
    // 0x799608: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF20u, 0x799604u, 0x79960Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79960Cu;
label_79960c:
    // 0x79960c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79960cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_799610:
    // 0x799610: 0xc1e66ca  jal         func_799B28
    ctx->pc = 0x799610u;
    SET_GPR_U32(ctx, 31, 0x799618u);
    ctx->pc = 0x799614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799610u;
    // 0x799614: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799B28u, 0x799610u, 0x799618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799618u;
label_799618:
    // 0x799618: 0x544000c4  bnel        $v0, $zero, . + 4 + (0xC4 << 2)
    ctx->pc = 0x799618u;
    {
        const bool branch_taken_0x799618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799618) {
            ctx->pc = 0x79961Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799618u;
            // 0x79961c: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79992Cu;
            goto label_79992c;
        }
    }
    ctx->pc = 0x799620u;
    // 0x799620: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x799620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x799624: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x799624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x799628: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x799628u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x79962c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x79962cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x799630: 0x9062000c  lbu         $v0, 0xC($v1)
    ctx->pc = 0x799630u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x799634: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x799634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x799638: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x799638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x79963c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79963Cu;
    {
        const bool branch_taken_0x79963c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79963Cu;
        // 0x799640: 0x3c150057  lui         $s5, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79963c) {
            ctx->pc = 0x79965Cu;
            goto label_79965c;
        }
    }
    ctx->pc = 0x799644u;
    // 0x799644: 0x26a49b70  addiu       $a0, $s5, -0x6490
    ctx->pc = 0x799644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941552));
    // 0x799648: 0xc07ebd6  jal         func_1FAF58
    ctx->pc = 0x799648u;
    SET_GPR_U32(ctx, 31, 0x799650u);
    ctx->pc = 0x79964Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799648u;
    // 0x79964c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x799648u, 0x799650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799650u;
label_799650:
    // 0x799650: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x799650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799654: 0x544300b5  bnel        $v0, $v1, . + 4 + (0xB5 << 2)
    ctx->pc = 0x799654u;
    {
        const bool branch_taken_0x799654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x799654) {
            ctx->pc = 0x799658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799654u;
            // 0x799658: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79992Cu;
            goto label_79992c;
        }
    }
    ctx->pc = 0x79965Cu;
label_79965c:
    // 0x79965c: 0x26b29b70  addiu       $s2, $s5, -0x6490
    ctx->pc = 0x79965cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941552));
    // 0x799660: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x799660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799664: 0xc07ebd6  jal         func_1FAF58
    ctx->pc = 0x799664u;
    SET_GPR_U32(ctx, 31, 0x79966Cu);
    ctx->pc = 0x799668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799664u;
    // 0x799668: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x799664u, 0x79966Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79966Cu;
label_79966c:
    // 0x79966c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x79966cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799670: 0x10430044  beq         $v0, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x799670u;
    {
        const bool branch_taken_0x799670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x799674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799670u;
        // 0x799674: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799670) {
            ctx->pc = 0x799784u;
            goto label_799784;
        }
    }
    ctx->pc = 0x799678u;
    // 0x799678: 0xc07ebd6  jal         func_1FAF58
    ctx->pc = 0x799678u;
    SET_GPR_U32(ctx, 31, 0x799680u);
    ctx->pc = 0x79967Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799678u;
    // 0x79967c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x799678u, 0x799680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799680u;
label_799680:
    // 0x799680: 0x544000aa  bnel        $v0, $zero, . + 4 + (0xAA << 2)
    ctx->pc = 0x799680u;
    {
        const bool branch_taken_0x799680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799680) {
            ctx->pc = 0x799684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799680u;
            // 0x799684: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79992Cu;
            goto label_79992c;
        }
    }
    ctx->pc = 0x799688u;
    // 0x799688: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x799688u;
    {
        const bool branch_taken_0x799688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79968Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799688u;
        // 0x79968c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799688) {
            ctx->pc = 0x799788u;
            goto label_799788;
        }
    }
    ctx->pc = 0x799690u;
label_799690:
    // 0x799690: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x799690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x799694: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x799694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x799698: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x799698u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x79969c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x79969cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x7996a0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x7996a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x7996a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x7996a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x7996a8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x7996A8u;
    {
        const bool branch_taken_0x7996a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996A8u;
        // 0x7996ac: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996a8) {
            ctx->pc = 0x7996DCu;
            goto label_7996dc;
        }
    }
    ctx->pc = 0x7996B0u;
    // 0x7996b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7996b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996b4: 0x24529b70  addiu       $s2, $v0, -0x6490
    ctx->pc = 0x7996b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x7996b8: 0xc07ebd6  jal         func_1FAF58
    ctx->pc = 0x7996B8u;
    SET_GPR_U32(ctx, 31, 0x7996C0u);
    ctx->pc = 0x7996BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996B8u;
    // 0x7996bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x7996B8u, 0x7996C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996C0u;
label_7996c0:
    // 0x7996c0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x7996c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7996c4: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x7996C4u;
    {
        const bool branch_taken_0x7996c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x7996C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996C4u;
        // 0x7996c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996c4) {
            ctx->pc = 0x7996E0u;
            goto label_7996e0;
        }
    }
    ctx->pc = 0x7996CCu;
    // 0x7996cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7996ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7996d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996d4: 0xc07ebc8  jal         func_1FAF20
    ctx->pc = 0x7996D4u;
    SET_GPR_U32(ctx, 31, 0x7996DCu);
    ctx->pc = 0x7996D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996D4u;
    // 0x7996d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF20u, 0x7996D4u, 0x7996DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996DCu;
label_7996dc:
    // 0x7996dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7996dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_7996e0:
    // 0x7996e0: 0xc1e66ca  jal         func_799B28
    ctx->pc = 0x7996E0u;
    SET_GPR_U32(ctx, 31, 0x7996E8u);
    ctx->pc = 0x7996E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996E0u;
    // 0x7996e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799B28u, 0x7996E0u, 0x7996E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996E8u;
label_7996e8:
    // 0x7996e8: 0x54400090  bnel        $v0, $zero, . + 4 + (0x90 << 2)
    ctx->pc = 0x7996E8u;
    {
        const bool branch_taken_0x7996e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7996e8) {
            ctx->pc = 0x7996ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7996E8u;
            // 0x7996ec: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79992Cu;
            goto label_79992c;
        }
    }
    ctx->pc = 0x7996F0u;
    // 0x7996f0: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x7996f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x7996f4: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x7996f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x7996f8: 0x2039018  mult        $s2, $s0, $v1
    ctx->pc = 0x7996f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x7996fc: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x7996fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x799700: 0x24539b70  addiu       $s3, $v0, -0x6490
    ctx->pc = 0x799700u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x799704: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x799704u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799708: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x799708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79970c: 0x2463021  addu        $a2, $s2, $a2
    ctx->pc = 0x79970cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x799710: 0xc07eff4  jal         func_1FBFD0
    ctx->pc = 0x799710u;
    SET_GPR_U32(ctx, 31, 0x799718u);
    ctx->pc = 0x799714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799710u;
    // 0x799714: 0x94c50012  lhu         $a1, 0x12($a2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBFD0u, 0x799710u, 0x799718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799718u;
label_799718:
    // 0x799718: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x799718u;
    {
        const bool branch_taken_0x799718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799718) {
            ctx->pc = 0x79971Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799718u;
            // 0x79971c: 0x26b29b70  addiu       $s2, $s5, -0x6490 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941552));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799744u;
            goto label_799744;
        }
    }
    ctx->pc = 0x799720u;
    // 0x799720: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x799720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x799724: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x799724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x799728: 0x94430012  lhu         $v1, 0x12($v0)
    ctx->pc = 0x799728u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x79972c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x79972Cu;
    {
        const bool branch_taken_0x79972c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79972Cu;
        // 0x799730: 0x26b29b70  addiu       $s2, $s5, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79972c) {
            ctx->pc = 0x799744u;
            goto label_799744;
        }
    }
    ctx->pc = 0x799734u;
    // 0x799734: 0xc07e9b0  jal         func_1FA6C0
    ctx->pc = 0x799734u;
    SET_GPR_U32(ctx, 31, 0x79973Cu);
    ctx->pc = 0x799738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799734u;
    // 0x799738: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x799734u, 0x79973Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79973Cu;
label_79973c:
    // 0x79973c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x79973Cu;
    {
        const bool branch_taken_0x79973c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79973Cu;
        // 0x799740: 0x26b29b70  addiu       $s2, $s5, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79973c) {
            ctx->pc = 0x799770u;
            goto label_799770;
        }
    }
    ctx->pc = 0x799744u;
label_799744:
    // 0x799744: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x799744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799748: 0xc07ebd6  jal         func_1FAF58
    ctx->pc = 0x799748u;
    SET_GPR_U32(ctx, 31, 0x799750u);
    ctx->pc = 0x79974Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799748u;
    // 0x79974c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x799748u, 0x799750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799750u;
label_799750:
    // 0x799750: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x799750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799754: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x799754u;
    {
        const bool branch_taken_0x799754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x799758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799754u;
        // 0x799758: 0x26a49b70  addiu       $a0, $s5, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799754) {
            ctx->pc = 0x799774u;
            goto label_799774;
        }
    }
    ctx->pc = 0x79975Cu;
    // 0x79975c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x79975cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799760: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x799760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799764: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x799764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_799768:
    // 0x799768: 0xc07ebc8  jal         func_1FAF20
    ctx->pc = 0x799768u;
    SET_GPR_U32(ctx, 31, 0x799770u);
    ctx->pc = 0x1FAF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF20u, 0x799768u, 0x799770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799770u;
label_799770:
    // 0x799770: 0x26a49b70  addiu       $a0, $s5, -0x6490
    ctx->pc = 0x799770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941552));
label_799774:
    // 0x799774: 0xc07ebd6  jal         func_1FAF58
    ctx->pc = 0x799774u;
    SET_GPR_U32(ctx, 31, 0x79977Cu);
    ctx->pc = 0x799778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799774u;
    // 0x799778: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x799774u, 0x79977Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79977Cu;
label_79977c:
    // 0x79977c: 0x442006b  bltzl       $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x79977Cu;
    {
        const bool branch_taken_0x79977c = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x79977c) {
            ctx->pc = 0x799780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79977Cu;
            // 0x799780: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79992Cu;
            goto label_79992c;
        }
    }
    ctx->pc = 0x799784u;
label_799784:
    // 0x799784: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x799784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_799788:
    // 0x799788: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x799788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_79978c:
    // 0x79978c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x79978cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x799790: 0xa0500014  sb          $s0, 0x14($v0)
    ctx->pc = 0x799790u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 20), (uint8_t)GPR_U32(ctx, 16));
    // 0x799794: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x799794u;
    {
        const bool branch_taken_0x799794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799794u;
        // 0x799798: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799794) {
            ctx->pc = 0x799928u;
            goto label_799928;
        }
    }
    ctx->pc = 0x79979Cu;
label_79979c:
    // 0x79979c: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x79979cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x7997a0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x7997a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x7997a4: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x7997a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x7997a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x7997a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x7997ac: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x7997acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x7997b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x7997b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x7997b4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x7997B4u;
    {
        const bool branch_taken_0x7997b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7997B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997B4u;
        // 0x7997b8: 0x3c150057  lui         $s5, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997b4) {
            ctx->pc = 0x7997E8u;
            goto label_7997e8;
        }
    }
    ctx->pc = 0x7997BCu;
    // 0x7997bc: 0x26b29b70  addiu       $s2, $s5, -0x6490
    ctx->pc = 0x7997bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941552));
    // 0x7997c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7997c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997c4: 0xc07ebd6  jal         func_1FAF58
    ctx->pc = 0x7997C4u;
    SET_GPR_U32(ctx, 31, 0x7997CCu);
    ctx->pc = 0x7997C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997C4u;
    // 0x7997c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x7997C4u, 0x7997CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997CCu;
label_7997cc:
    // 0x7997cc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x7997ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7997d0: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x7997D0u;
    {
        const bool branch_taken_0x7997d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x7997d0) {
            ctx->pc = 0x7997D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7997D0u;
            // 0x7997d4: 0x26b29b70  addiu       $s2, $s5, -0x6490 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941552));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7997ECu;
            goto label_7997ec;
        }
    }
    ctx->pc = 0x7997D8u;
    // 0x7997d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7997d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7997dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997e0: 0xc07ebc8  jal         func_1FAF20
    ctx->pc = 0x7997E0u;
    SET_GPR_U32(ctx, 31, 0x7997E8u);
    ctx->pc = 0x7997E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997E0u;
    // 0x7997e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF20u, 0x7997E0u, 0x7997E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997E8u;
label_7997e8:
    // 0x7997e8: 0x26b29b70  addiu       $s2, $s5, -0x6490
    ctx->pc = 0x7997e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941552));
label_7997ec:
    // 0x7997ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7997ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997f0: 0xc07ebd6  jal         func_1FAF58
    ctx->pc = 0x7997F0u;
    SET_GPR_U32(ctx, 31, 0x7997F8u);
    ctx->pc = 0x7997F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997F0u;
    // 0x7997f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF58u, 0x7997F0u, 0x7997F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997F8u;
label_7997f8:
    // 0x7997f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x7997f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7997fc: 0x5443004b  bnel        $v0, $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x7997FCu;
    {
        const bool branch_taken_0x7997fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x7997fc) {
            ctx->pc = 0x799800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7997FCu;
            // 0x799800: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79992Cu;
            goto label_79992c;
        }
    }
    ctx->pc = 0x799804u;
    // 0x799804: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799808: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x799808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79980c: 0xc07ebc8  jal         func_1FAF20
    ctx->pc = 0x79980Cu;
    SET_GPR_U32(ctx, 31, 0x799814u);
    ctx->pc = 0x799810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79980Cu;
    // 0x799810: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAF20u, 0x79980Cu, 0x799814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799814u;
label_799814:
    // 0x799814: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x799814u;
    {
        const bool branch_taken_0x799814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799814u;
        // 0x799818: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799814) {
            ctx->pc = 0x79992Cu;
            goto label_79992c;
        }
    }
    ctx->pc = 0x79981Cu;
label_79981c:
    // 0x79981c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79981cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799820: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x799820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799824: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x799824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799828: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x799828u;
    {
        const bool branch_taken_0x799828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799828u;
        // 0x79982c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799828) {
            ctx->pc = 0x799900u;
            goto label_799900;
        }
    }
    ctx->pc = 0x799830u;
label_799830:
    // 0x799830: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799834: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x799834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799838: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x799838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79983c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x79983cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799840: 0xc1e66de  jal         func_799B78
    ctx->pc = 0x799840u;
    SET_GPR_U32(ctx, 31, 0x799848u);
    ctx->pc = 0x799844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799840u;
    // 0x799844: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799B78u, 0x799840u, 0x799848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799848u;
label_799848:
    // 0x799848: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x799848u;
    {
        const bool branch_taken_0x799848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799848u;
        // 0x79984c: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799848) {
            ctx->pc = 0x79992Cu;
            goto label_79992c;
        }
    }
    ctx->pc = 0x799850u;
label_799850:
    // 0x799850: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799854: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x799854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799858: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x799858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79985c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x79985Cu;
    {
        const bool branch_taken_0x79985c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79985Cu;
        // 0x799860: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79985c) {
            ctx->pc = 0x799900u;
            goto label_799900;
        }
    }
    ctx->pc = 0x799864u;
label_799864:
    // 0x799864: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799868: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x799868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79986c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x79986cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799870: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x799870u;
    {
        const bool branch_taken_0x799870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799870u;
        // 0x799874: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799870) {
            ctx->pc = 0x799900u;
            goto label_799900;
        }
    }
    ctx->pc = 0x799878u;
label_799878:
    // 0x799878: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79987c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79987cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799880: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x799880u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799884: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x799884u;
    {
        const bool branch_taken_0x799884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799884u;
        // 0x799888: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799884) {
            ctx->pc = 0x799900u;
            goto label_799900;
        }
    }
    ctx->pc = 0x79988Cu;
label_79988c:
    // 0x79988c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79988cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799890: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x799890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799894: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x799894u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799898: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x799898u;
    {
        const bool branch_taken_0x799898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79989Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799898u;
        // 0x79989c: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799898) {
            ctx->pc = 0x799900u;
            goto label_799900;
        }
    }
    ctx->pc = 0x7998A0u;
label_7998a0:
    // 0x7998a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7998a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7998a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998a8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x7998a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998ac: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x7998ACu;
    {
        const bool branch_taken_0x7998ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998ACu;
        // 0x7998b0: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998ac) {
            ctx->pc = 0x799900u;
            goto label_799900;
        }
    }
    ctx->pc = 0x7998B4u;
label_7998b4:
    // 0x7998b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7998b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7998b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998bc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x7998bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998c0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x7998C0u;
    {
        const bool branch_taken_0x7998c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998C0u;
        // 0x7998c4: 0x24070100  addiu       $a3, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998c0) {
            ctx->pc = 0x799900u;
            goto label_799900;
        }
    }
    ctx->pc = 0x7998C8u;
label_7998c8:
    // 0x7998c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7998c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7998ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998d0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x7998d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998d4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x7998D4u;
    {
        const bool branch_taken_0x7998d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998D4u;
        // 0x7998d8: 0x24070200  addiu       $a3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998d4) {
            ctx->pc = 0x799900u;
            goto label_799900;
        }
    }
    ctx->pc = 0x7998DCu;
label_7998dc:
    // 0x7998dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7998dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7998e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998e4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x7998e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998e8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x7998E8u;
    {
        const bool branch_taken_0x7998e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998E8u;
        // 0x7998ec: 0x24070400  addiu       $a3, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998e8) {
            ctx->pc = 0x799900u;
            goto label_799900;
        }
    }
    ctx->pc = 0x7998F0u;
label_7998f0:
    // 0x7998f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7998f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7998f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998f8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x7998f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998fc: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x7998fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_799900:
    // 0x799900: 0xc1e66de  jal         func_799B78
    ctx->pc = 0x799900u;
    SET_GPR_U32(ctx, 31, 0x799908u);
    ctx->pc = 0x799904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799900u;
    // 0x799904: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799B78u, 0x799900u, 0x799908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799908u;
label_799908:
    // 0x799908: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x799908u;
    {
        const bool branch_taken_0x799908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79990Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799908u;
        // 0x79990c: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799908) {
            ctx->pc = 0x79992Cu;
            goto label_79992c;
        }
    }
    ctx->pc = 0x799910u;
label_799910:
    // 0x799910: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799914: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x799914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799918: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x799918u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79991c: 0x24071000  addiu       $a3, $zero, 0x1000
    ctx->pc = 0x79991cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x799920: 0xc1e66de  jal         func_799B78
    ctx->pc = 0x799920u;
    SET_GPR_U32(ctx, 31, 0x799928u);
    ctx->pc = 0x799924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799920u;
    // 0x799924: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799B78u, 0x799920u, 0x799928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799928u;
label_799928:
    // 0x799928: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x799928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_79992c:
    // 0x79992c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x79992cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x799930: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x799930u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x799934: 0x1440fec8  bnez        $v0, . + 4 + (-0x138 << 2)
    ctx->pc = 0x799934u;
    {
        const bool branch_taken_0x799934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799934u;
        // 0x799938: 0x2e820011  sltiu       $v0, $s4, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799934) {
            ctx->pc = 0x799458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799458;
        }
    }
    ctx->pc = 0x79993Cu;
label_79993c:
    // 0x79993c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x79993cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799940: 0x12820005  beq         $s4, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x799940u;
    {
        const bool branch_taken_0x799940 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x799944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799940u;
        // 0x799944: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799940) {
            ctx->pc = 0x799958u;
            goto label_799958;
        }
    }
    ctx->pc = 0x799948u;
    // 0x799948: 0x12820038  beq         $s4, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x799948u;
    {
        const bool branch_taken_0x799948 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x79994Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799948u;
        // 0x79994c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799948) {
            ctx->pc = 0x799A2Cu;
            goto label_799a2c;
        }
    }
    ctx->pc = 0x799950u;
    // 0x799950: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x799950u;
    {
        const bool branch_taken_0x799950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799950u;
        // 0x799954: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799950) {
            ctx->pc = 0x799B04u;
            goto label_799b04;
        }
    }
    ctx->pc = 0x799958u;
label_799958:
    // 0x799958: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x799958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x79995c: 0x26240094  addiu       $a0, $s1, 0x94
    ctx->pc = 0x79995cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 148));
    // 0x799960: 0x8c459b70  lw          $a1, -0x6490($v0)
    ctx->pc = 0x799960u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x569B70u));
    // 0x799964: 0x24a301b0  addiu       $v1, $a1, 0x1B0
    ctx->pc = 0x799964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 432));
    // 0x799968: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x799968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x79996c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x79996cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x799970: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x799970u;
    {
        const bool branch_taken_0x799970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799970u;
        // 0x799974: 0x24a20270  addiu       $v0, $a1, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799970) {
            ctx->pc = 0x7999CCu;
            goto label_7999cc;
        }
    }
    ctx->pc = 0x799978u;
label_799978:
    // 0x799978: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x799978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x79997c: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x79997cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x799980: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x799980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x799984: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x799984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x799988: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x799988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x79998c: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x79998cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x799990: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x799990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x799994: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x799994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x799998: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x799998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x79999c: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x79999cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7999a0: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x7999a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7999a4: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x7999a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7999a8: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x7999a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7999ac: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x7999acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7999b0: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x7999b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7999b4: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x7999b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7999b8: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x7999b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x7999bc: 0x1462ffee  bne         $v1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x7999BCu;
    {
        const bool branch_taken_0x7999bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x7999C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999BCu;
        // 0x7999c0: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999bc) {
            ctx->pc = 0x799978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799978;
        }
    }
    ctx->pc = 0x7999C4u;
    // 0x7999c4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x7999C4u;
    {
        const bool branch_taken_0x7999c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x7999c4) {
            ctx->pc = 0x7999F8u;
            goto label_7999f8;
        }
    }
    ctx->pc = 0x7999CCu;
label_7999cc:
    // 0x7999cc: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x7999ccu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7999d0: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x7999d0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x7999d4: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x7999d4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x7999d8: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x7999d8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x7999dc: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x7999dcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x7999e0: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x7999e0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x7999e4: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x7999e4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x7999e8: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x7999e8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x7999ec: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x7999ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x7999f0: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x7999F0u;
    {
        const bool branch_taken_0x7999f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x7999F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999F0u;
        // 0x7999f4: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999f0) {
            ctx->pc = 0x7999CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7999cc;
        }
    }
    ctx->pc = 0x7999F8u;
label_7999f8:
    // 0x7999f8: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x7999f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x7999fc: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x7999fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x799a00: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x799a00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x799a04: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x799a04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x799a08: 0x68660017  ldl         $a2, 0x17($v1)
    ctx->pc = 0x799a08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x799a0c: 0x6c660010  ldr         $a2, 0x10($v1)
    ctx->pc = 0x799a0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x799a10: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x799a10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799a14: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x799a14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799a18: 0xb085000f  sdl         $a1, 0xF($a0)
    ctx->pc = 0x799a18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799a1c: 0xb4850008  sdr         $a1, 0x8($a0)
    ctx->pc = 0x799a1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799a20: 0xb0860017  sdl         $a2, 0x17($a0)
    ctx->pc = 0x799a20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799a24: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x799A24u;
    {
        const bool branch_taken_0x799a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A24u;
        // 0x799a28: 0xb4860010  sdr         $a2, 0x10($a0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a24) {
            ctx->pc = 0x799AFCu;
            goto label_799afc;
        }
    }
    ctx->pc = 0x799A2Cu;
label_799a2c:
    // 0x799a2c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x799a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x799a30: 0x26240094  addiu       $a0, $s1, 0x94
    ctx->pc = 0x799a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 148));
    // 0x799a34: 0x8c439b70  lw          $v1, -0x6490($v0)
    ctx->pc = 0x799a34u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x569B70u));
    // 0x799a38: 0x246301b0  addiu       $v1, $v1, 0x1B0
    ctx->pc = 0x799a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 432));
    // 0x799a3c: 0x831025  or          $v0, $a0, $v1
    ctx->pc = 0x799a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x799a40: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x799a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x799a44: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x799A44u;
    {
        const bool branch_taken_0x799a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A44u;
        // 0x799a48: 0x26220154  addiu       $v0, $s1, 0x154 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 340));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a44) {
            ctx->pc = 0x799AA0u;
            goto label_799aa0;
        }
    }
    ctx->pc = 0x799A4Cu;
label_799a4c:
    // 0x799a4c: 0x68880007  ldl         $t0, 0x7($a0)
    ctx->pc = 0x799a4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x799a50: 0x6c880000  ldr         $t0, 0x0($a0)
    ctx->pc = 0x799a50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x799a54: 0x6885000f  ldl         $a1, 0xF($a0)
    ctx->pc = 0x799a54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x799a58: 0x6c850008  ldr         $a1, 0x8($a0)
    ctx->pc = 0x799a58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x799a5c: 0x68860017  ldl         $a2, 0x17($a0)
    ctx->pc = 0x799a5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x799a60: 0x6c860010  ldr         $a2, 0x10($a0)
    ctx->pc = 0x799a60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x799a64: 0x6887001f  ldl         $a3, 0x1F($a0)
    ctx->pc = 0x799a64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x799a68: 0x6c870018  ldr         $a3, 0x18($a0)
    ctx->pc = 0x799a68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x799a6c: 0xb0680007  sdl         $t0, 0x7($v1)
    ctx->pc = 0x799a6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799a70: 0xb4680000  sdr         $t0, 0x0($v1)
    ctx->pc = 0x799a70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799a74: 0xb065000f  sdl         $a1, 0xF($v1)
    ctx->pc = 0x799a74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799a78: 0xb4650008  sdr         $a1, 0x8($v1)
    ctx->pc = 0x799a78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799a7c: 0xb0660017  sdl         $a2, 0x17($v1)
    ctx->pc = 0x799a7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799a80: 0xb4660010  sdr         $a2, 0x10($v1)
    ctx->pc = 0x799a80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799a84: 0xb067001f  sdl         $a3, 0x1F($v1)
    ctx->pc = 0x799a84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799a88: 0xb4670018  sdr         $a3, 0x18($v1)
    ctx->pc = 0x799a88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799a8c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x799a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x799a90: 0x1482ffee  bne         $a0, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x799A90u;
    {
        const bool branch_taken_0x799a90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x799A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A90u;
        // 0x799a94: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a90) {
            ctx->pc = 0x799A4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799a4c;
        }
    }
    ctx->pc = 0x799A98u;
    // 0x799a98: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x799A98u;
    {
        const bool branch_taken_0x799a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x799a98) {
            ctx->pc = 0x799ACCu;
            goto label_799acc;
        }
    }
    ctx->pc = 0x799AA0u;
label_799aa0:
    // 0x799aa0: 0xdc880000  ld          $t0, 0x0($a0)
    ctx->pc = 0x799aa0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x799aa4: 0xdc850008  ld          $a1, 0x8($a0)
    ctx->pc = 0x799aa4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x799aa8: 0xdc860010  ld          $a2, 0x10($a0)
    ctx->pc = 0x799aa8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x799aac: 0xdc870018  ld          $a3, 0x18($a0)
    ctx->pc = 0x799aacu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x799ab0: 0xfc680000  sd          $t0, 0x0($v1)
    ctx->pc = 0x799ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 8));
    // 0x799ab4: 0xfc650008  sd          $a1, 0x8($v1)
    ctx->pc = 0x799ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 5));
    // 0x799ab8: 0xfc660010  sd          $a2, 0x10($v1)
    ctx->pc = 0x799ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 6));
    // 0x799abc: 0xfc670018  sd          $a3, 0x18($v1)
    ctx->pc = 0x799abcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 7));
    // 0x799ac0: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x799ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x799ac4: 0x1482fff6  bne         $a0, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x799AC4u;
    {
        const bool branch_taken_0x799ac4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x799AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AC4u;
        // 0x799ac8: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ac4) {
            ctx->pc = 0x799AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799aa0;
        }
    }
    ctx->pc = 0x799ACCu;
label_799acc:
    // 0x799acc: 0x68880007  ldl         $t0, 0x7($a0)
    ctx->pc = 0x799accu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x799ad0: 0x6c880000  ldr         $t0, 0x0($a0)
    ctx->pc = 0x799ad0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x799ad4: 0x6882000f  ldl         $v0, 0xF($a0)
    ctx->pc = 0x799ad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x799ad8: 0x6c820008  ldr         $v0, 0x8($a0)
    ctx->pc = 0x799ad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x799adc: 0x68850017  ldl         $a1, 0x17($a0)
    ctx->pc = 0x799adcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x799ae0: 0x6c850010  ldr         $a1, 0x10($a0)
    ctx->pc = 0x799ae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x799ae4: 0xb0680007  sdl         $t0, 0x7($v1)
    ctx->pc = 0x799ae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799ae8: 0xb4680000  sdr         $t0, 0x0($v1)
    ctx->pc = 0x799ae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799aec: 0xb062000f  sdl         $v0, 0xF($v1)
    ctx->pc = 0x799aecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799af0: 0xb4620008  sdr         $v0, 0x8($v1)
    ctx->pc = 0x799af0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799af4: 0xb0650017  sdl         $a1, 0x17($v1)
    ctx->pc = 0x799af4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x799af8: 0xb4650010  sdr         $a1, 0x10($v1)
    ctx->pc = 0x799af8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_799afc:
    // 0x799afc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x799afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799b00: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x799b00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_799b04:
    // 0x799b04: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x799b04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_799b08:
    // 0x799b08: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x799b08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x799b0c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x799b0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799b10: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x799b10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799b14: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x799b14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799b18: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x799b18u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799b1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799b20: 0x3e00008  jr          $ra
    ctx->pc = 0x799B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799B20u;
        // 0x799b24: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799B20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799B28u;
}
} // namespace gh_r000
