#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sceCdRead
// Address: 0x399728 - 0x399910
void sceCdRead_0x399728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceCdRead_0x399728");
#endif

    switch (ctx->pc) {
        case 0x399778u: goto label_399778;
        case 0x39978cu: goto label_39978c;
        case 0x399824u: goto label_399824;
        case 0x399838u: goto label_399838;
        case 0x399844u: goto label_399844;
        case 0x399850u: goto label_399850;
        case 0x399864u: goto label_399864;
        case 0x3998a8u: goto label_3998a8;
        case 0x3998c4u: goto label_3998c4;
        case 0x3998e0u: goto label_3998e0;
        default: break;
    }

    ctx->pc = 0x399728u;

    // 0x399728: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x399728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x39972c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x39972cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x399730: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x399730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x399734: 0x3c150040  lui         $s5, 0x40
    ctx->pc = 0x399734u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
    // 0x399738: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x399738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x39973c: 0x8ea28678  lw          $v0, -0x7988($s5)
    ctx->pc = 0x39973cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F8678u));
    // 0x399740: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x399740u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399744: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x399744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x399748: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x399748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x39974c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x39974cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399750: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x399750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x399754: 0x24728740  addiu       $s2, $v1, -0x78C0
    ctx->pc = 0x399754u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936384));
    // 0x399758: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x399758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x39975c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x39975cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399760: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x399760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x399764: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x399764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x399768: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x399768u;
    {
        const bool branch_taken_0x399768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39976Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399768u;
        // 0x39976c: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399768) {
            ctx->pc = 0x399784u;
            goto label_399784;
        }
    }
    ctx->pc = 0x399770u;
    // 0x399770: 0xc0e6342  jal         func_398D08
    ctx->pc = 0x399770u;
    SET_GPR_U32(ctx, 31, 0x399778u);
    ctx->pc = 0x398D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398D08u, 0x399770u, 0x399778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399778u;
label_399778:
    // 0x399778: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x399778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x39977c: 0x10430059  beq         $v0, $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x39977Cu;
    {
        const bool branch_taken_0x39977c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x399780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39977Cu;
        // 0x399780: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39977c) {
            ctx->pc = 0x3998E4u;
            goto label_3998e4;
        }
    }
    ctx->pc = 0x399784u;
label_399784:
    // 0x399784: 0xc0e62ec  jal         func_398BB0
    ctx->pc = 0x399784u;
    SET_GPR_U32(ctx, 31, 0x39978Cu);
    ctx->pc = 0x399788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399784u;
    // 0x399788: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398BB0u, 0x399784u, 0x39978Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39978Cu;
label_39978c:
    // 0x39978c: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x39978Cu;
    {
        const bool branch_taken_0x39978c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x399790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39978Cu;
        // 0x399790: 0x3c080040  lui         $t0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39978c) {
            ctx->pc = 0x3998C4u;
            goto label_3998c4;
        }
    }
    ctx->pc = 0x399794u;
    // 0x399794: 0xae530000  sw          $s3, 0x0($s2)
    ctx->pc = 0x399794u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
    // 0x399798: 0xae510004  sw          $s1, 0x4($s2)
    ctx->pc = 0x399798u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
    // 0x39979c: 0x3c130040  lui         $s3, 0x40
    ctx->pc = 0x39979cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
    // 0x3997a0: 0xae540008  sw          $s4, 0x8($s2)
    ctx->pc = 0x3997a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 20));
    // 0x3997a4: 0x26649740  addiu       $a0, $s3, -0x68C0
    ctx->pc = 0x3997a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294940480));
    // 0x3997a8: 0x25059800  addiu       $a1, $t0, -0x6800
    ctx->pc = 0x3997a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 4294940672));
    // 0x3997ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3997acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3997b0: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x3997b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3997b4: 0xa242000c  sb          $v0, 0xC($s2)
    ctx->pc = 0x3997b4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x3997b8: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x3997b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x3997bc: 0xa243000d  sb          $v1, 0xD($s2)
    ctx->pc = 0x3997bcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 13), (uint8_t)GPR_U32(ctx, 3));
    // 0x3997c0: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x3997c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3997c4: 0xae440010  sw          $a0, 0x10($s2)
    ctx->pc = 0x3997c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 4));
    // 0x3997c8: 0xa242000e  sb          $v0, 0xE($s2)
    ctx->pc = 0x3997c8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 14), (uint8_t)GPR_U32(ctx, 2));
    // 0x3997cc: 0xae450014  sw          $a1, 0x14($s2)
    ctx->pc = 0x3997ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 5));
    // 0x3997d0: 0x92070002  lbu         $a3, 0x2($s0)
    ctx->pc = 0x3997d0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3997d4: 0x10e60008  beq         $a3, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x3997D4u;
    {
        const bool branch_taken_0x3997d4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x3997D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3997D4u;
        // 0x3997d8: 0x28e20002  slti        $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3997d4) {
            ctx->pc = 0x3997F8u;
            goto label_3997f8;
        }
    }
    ctx->pc = 0x3997DCu;
    // 0x3997dc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3997DCu;
    {
        const bool branch_taken_0x3997dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3997E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3997DCu;
        // 0x3997e0: 0x112ac0  sll         $a1, $s1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3997dc) {
            ctx->pc = 0x399808u;
            goto label_399808;
        }
    }
    ctx->pc = 0x3997E4u;
    // 0x3997e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3997e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3997e8: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3997E8u;
    {
        const bool branch_taken_0x3997e8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x3997ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3997E8u;
        // 0x3997ec: 0x24020924  addiu       $v0, $zero, 0x924 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2340));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3997e8) {
            ctx->pc = 0x399804u;
            goto label_399804;
        }
    }
    ctx->pc = 0x3997F0u;
    // 0x3997f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3997F0u;
    {
        const bool branch_taken_0x3997f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3997f0) {
            ctx->pc = 0x399808u;
            goto label_399808;
        }
    }
    ctx->pc = 0x3997F8u;
label_3997f8:
    // 0x3997f8: 0x24020918  addiu       $v0, $zero, 0x918
    ctx->pc = 0x3997f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2328));
    // 0x3997fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3997FCu;
    {
        const bool branch_taken_0x3997fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x399800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3997FCu;
        // 0x399800: 0x2222818  mult        $a1, $s1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3997fc) {
            ctx->pc = 0x399808u;
            goto label_399808;
        }
    }
    ctx->pc = 0x399804u;
label_399804:
    // 0x399804: 0x2222818  mult        $a1, $s1, $v0
    ctx->pc = 0x399804u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_399808:
    // 0x399808: 0x8ea28678  lw          $v0, -0x7988($s5)
    ctx->pc = 0x399808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936184)));
    // 0x39980c: 0x25109800  addiu       $s0, $t0, -0x6800
    ctx->pc = 0x39980cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 4294940672));
    // 0x399810: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x399810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x399814: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x399814u;
    {
        const bool branch_taken_0x399814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x399818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399814u;
        // 0x399818: 0xad009800  sw          $zero, -0x6800($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4294940672), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399814) {
            ctx->pc = 0x399824u;
            goto label_399824;
        }
    }
    ctx->pc = 0x39981Cu;
    // 0x39981c: 0xc0eca14  jal         func_3B2850
    ctx->pc = 0x39981Cu;
    SET_GPR_U32(ctx, 31, 0x399824u);
    ctx->pc = 0x399820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39981Cu;
    // 0x399820: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2850u, 0x39981Cu, 0x399824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399824u;
label_399824:
    // 0x399824: 0x26739740  addiu       $s3, $s3, -0x68C0
    ctx->pc = 0x399824u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294940480));
    // 0x399828: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x399828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x39982c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x39982cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399830: 0xc0eca14  jal         func_3B2850
    ctx->pc = 0x399830u;
    SET_GPR_U32(ctx, 31, 0x399838u);
    ctx->pc = 0x399834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399830u;
    // 0x399834: 0x3c140040  lui         $s4, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2850u, 0x399830u, 0x399838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399838u;
label_399838:
    // 0x399838: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x399838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39983c: 0xc0eca14  jal         func_3B2850
    ctx->pc = 0x39983Cu;
    SET_GPR_U32(ctx, 31, 0x399844u);
    ctx->pc = 0x399840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39983Cu;
    // 0x399840: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2850u, 0x39983Cu, 0x399844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399844u;
label_399844:
    // 0x399844: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x399844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399848: 0xc0eca14  jal         func_3B2850
    ctx->pc = 0x399848u;
    SET_GPR_U32(ctx, 31, 0x399850u);
    ctx->pc = 0x39984Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399848u;
    // 0x39984c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2850u, 0x399848u, 0x399850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399850u;
label_399850:
    // 0x399850: 0x8e828650  lw          $v0, -0x79B0($s4)
    ctx->pc = 0x399850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936144)));
    // 0x399854: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x399854u;
    {
        const bool branch_taken_0x399854 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x399858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399854u;
        // 0x399858: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399854) {
            ctx->pc = 0x399864u;
            goto label_399864;
        }
    }
    ctx->pc = 0x39985Cu;
    // 0x39985c: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x39985Cu;
    SET_GPR_U32(ctx, 31, 0x399864u);
    ctx->pc = 0x399860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39985Cu;
    // 0x399860: 0x2484e398  addiu       $a0, $a0, -0x1C68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x39985Cu, 0x399864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399864u;
label_399864:
    // 0x399864: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x399864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x399868: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x399868u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x39986c: 0xae0286a0  sw          $v0, -0x7960($s0)
    ctx->pc = 0x39986cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F86A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F86A0u, _value); } while (0);
    // 0x399870: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x399870u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x399874: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x399874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x399878: 0x3c0b003a  lui         $t3, 0x3A
    ctx->pc = 0x399878u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)58 << 16));
    // 0x39987c: 0xae228674  sw          $v0, -0x798C($s1)
    ctx->pc = 0x39987cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F8674u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F8674u, _value); } while (0);
    // 0x399880: 0x24849810  addiu       $a0, $a0, -0x67F0
    ctx->pc = 0x399880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940688));
    // 0x399884: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x399884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
    // 0x399888: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x399888u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39988c: 0x256b8580  addiu       $t3, $t3, -0x7A80
    ctx->pc = 0x39988cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294935936));
    // 0x399890: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x399890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x399894: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x399894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x399898: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x399898u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x39989c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x39989cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3998a0: 0xc0ecc4a  jal         func_3B3128
    ctx->pc = 0x3998A0u;
    SET_GPR_U32(ctx, 31, 0x3998A8u);
    ctx->pc = 0x3998A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3998A0u;
    // 0x3998a4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3128u, 0x3998A0u, 0x3998A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3998A8u;
label_3998a8:
    // 0x3998a8: 0x4430008  bgezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3998A8u;
    {
        const bool branch_taken_0x3998a8 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x3998a8) {
            ctx->pc = 0x3998ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3998A8u;
            // 0x3998ac: 0x8e828650  lw          $v0, -0x79B0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3998CCu;
            goto label_3998cc;
        }
    }
    ctx->pc = 0x3998B0u;
    // 0x3998b0: 0xae0086a0  sw          $zero, -0x7960($s0)
    ctx->pc = 0x3998b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294936224), GPR_U32(ctx, 0));
    // 0x3998b4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3998b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3998b8: 0xae208674  sw          $zero, -0x798C($s1)
    ctx->pc = 0x3998b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294936180), GPR_U32(ctx, 0));
    // 0x3998bc: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x3998BCu;
    SET_GPR_U32(ctx, 31, 0x3998C4u);
    ctx->pc = 0x3998C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3998BCu;
    // 0x3998c0: 0x8c448668  lw          $a0, -0x7998($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936168)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x3998BCu, 0x3998C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3998C4u;
label_3998c4:
    // 0x3998c4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3998C4u;
    {
        const bool branch_taken_0x3998c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3998C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3998C4u;
        // 0x3998c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3998c4) {
            ctx->pc = 0x3998E4u;
            goto label_3998e4;
        }
    }
    ctx->pc = 0x3998CCu;
label_3998cc:
    // 0x3998cc: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3998CCu;
    {
        const bool branch_taken_0x3998cc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x3998D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3998CCu;
        // 0x3998d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3998cc) {
            ctx->pc = 0x3998E4u;
            goto label_3998e4;
        }
    }
    ctx->pc = 0x3998D4u;
    // 0x3998d4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x3998d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x3998d8: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x3998D8u;
    SET_GPR_U32(ctx, 31, 0x3998E0u);
    ctx->pc = 0x3998DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3998D8u;
    // 0x3998dc: 0x2484e3b0  addiu       $a0, $a0, -0x1C50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x3998D8u, 0x3998E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3998E0u;
label_3998e0:
    // 0x3998e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3998e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3998e4:
    // 0x3998e4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3998e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3998e8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x3998e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3998ec: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x3998ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3998f0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x3998f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3998f4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x3998f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3998f8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x3998f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3998fc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3998fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x399900: 0x3e00008  jr          $ra
    ctx->pc = 0x399900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399900u;
        // 0x399904: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x399908u;
    // 0x399908: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x399908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x39990c: 0x0  nop
    ctx->pc = 0x39990cu;
    // NOP
    ctx->pc = 0x399910u;
}
