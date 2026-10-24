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

// Function: func_00384590
// Address: 0x384590 - 0x384828
void func_00384590_0x384590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00384590_0x384590");
#endif

    switch (ctx->pc) {
        case 0x3845fcu: goto label_3845fc;
        case 0x384618u: goto label_384618;
        case 0x384634u: goto label_384634;
        case 0x38468cu: goto label_38468c;
        case 0x3846b8u: goto label_3846b8;
        case 0x3846d4u: goto label_3846d4;
        case 0x3846f0u: goto label_3846f0;
        case 0x384700u: goto label_384700;
        case 0x384710u: goto label_384710;
        case 0x38472cu: goto label_38472c;
        case 0x384748u: goto label_384748;
        case 0x384768u: goto label_384768;
        case 0x384790u: goto label_384790;
        case 0x3847b0u: goto label_3847b0;
        case 0x3847d8u: goto label_3847d8;
        case 0x3847f4u: goto label_3847f4;
        default: break;
    }

    ctx->pc = 0x384590u;

    // 0x384590: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x384590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x384594: 0x7fb70140  sq          $s7, 0x140($sp)
    ctx->pc = 0x384594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 23));
    // 0x384598: 0x7fb001b0  sq          $s0, 0x1B0($sp)
    ctx->pc = 0x384598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 16));
    // 0x38459c: 0x7fb101a0  sq          $s1, 0x1A0($sp)
    ctx->pc = 0x38459cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 17));
    // 0x3845a0: 0x7fb20190  sq          $s2, 0x190($sp)
    ctx->pc = 0x3845a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 18));
    // 0x3845a4: 0x7fb30180  sq          $s3, 0x180($sp)
    ctx->pc = 0x3845a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 19));
    // 0x3845a8: 0x7fb40170  sq          $s4, 0x170($sp)
    ctx->pc = 0x3845a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 20));
    // 0x3845ac: 0x7fb50160  sq          $s5, 0x160($sp)
    ctx->pc = 0x3845acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 21));
    // 0x3845b0: 0x7fb60150  sq          $s6, 0x150($sp)
    ctx->pc = 0x3845b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 22));
    // 0x3845b4: 0x7fbe0130  sq          $fp, 0x130($sp)
    ctx->pc = 0x3845b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 30));
    // 0x3845b8: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x3845b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x3845bc: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x3845bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x3845c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3845c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3845c4: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x3845C4u;
    {
        const bool branch_taken_0x3845c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3845C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3845C4u;
        // 0x3845c8: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3845c4) {
            ctx->pc = 0x384648u;
            goto label_384648;
        }
    }
    ctx->pc = 0x3845CCu;
    // 0x3845cc: 0x24b000a4  addiu       $s0, $a1, 0xA4
    ctx->pc = 0x3845ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 164));
    // 0x3845d0: 0x8cbe00a4  lw          $fp, 0xA4($a1)
    ctx->pc = 0x3845d0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 164)));
    // 0x3845d4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x3845d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3845d8: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3845d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x3845dc: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x3845dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3845e0: 0x24e7cbc8  addiu       $a3, $a3, -0x3438
    ctx->pc = 0x3845e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953928));
    // 0x3845e4: 0x8e160004  lw          $s6, 0x4($s0)
    ctx->pc = 0x3845e4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3845e8: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x3845e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3845ec: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x3845ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x3845f0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3845f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3845f4: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3845F4u;
    SET_GPR_U32(ctx, 31, 0x3845FCu);
    ctx->pc = 0x3845F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3845F4u;
    // 0x3845f8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3845F4u, 0x3845FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3845FCu;
label_3845fc:
    // 0x3845fc: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x3845fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x384600: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x384600u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x384604: 0x24e7cbd8  addiu       $a3, $a3, -0x3428
    ctx->pc = 0x384604u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953944));
    // 0x384608: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x384608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x38460c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x38460cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x384610: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x384610u;
    SET_GPR_U32(ctx, 31, 0x384618u);
    ctx->pc = 0x384614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384610u;
    // 0x384614: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x384610u, 0x384618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384618u;
label_384618:
    // 0x384618: 0x8e080010  lw          $t0, 0x10($s0)
    ctx->pc = 0x384618u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x38461c: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x38461cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x384620: 0x24e7cbe8  addiu       $a3, $a3, -0x3418
    ctx->pc = 0x384620u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953960));
    // 0x384624: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x384624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x384628: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x384628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x38462c: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x38462Cu;
    SET_GPR_U32(ctx, 31, 0x384634u);
    ctx->pc = 0x384630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38462Cu;
    // 0x384630: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x38462Cu, 0x384634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384634u;
label_384634:
    // 0x384634: 0x27b50100  addiu       $s5, $sp, 0x100
    ctx->pc = 0x384634u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x384638: 0x27b20104  addiu       $s2, $sp, 0x104
    ctx->pc = 0x384638u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x38463c: 0x27b30108  addiu       $s3, $sp, 0x108
    ctx->pc = 0x38463cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x384640: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x384640u;
    {
        const bool branch_taken_0x384640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384640u;
        // 0x384644: 0x27b4010c  addiu       $s4, $sp, 0x10C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384640) {
            ctx->pc = 0x384748u;
            goto label_384748;
        }
    }
    ctx->pc = 0x384648u;
label_384648:
    // 0x384648: 0x24b10034  addiu       $s1, $a1, 0x34
    ctx->pc = 0x384648u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 52));
    // 0x38464c: 0x27b00100  addiu       $s0, $sp, 0x100
    ctx->pc = 0x38464cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x384650: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x384650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x384654: 0x27b20104  addiu       $s2, $sp, 0x104
    ctx->pc = 0x384654u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x384658: 0x8e360004  lw          $s6, 0x4($s1)
    ctx->pc = 0x384658u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x38465c: 0x27b30108  addiu       $s3, $sp, 0x108
    ctx->pc = 0x38465cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x384660: 0x27b4010c  addiu       $s4, $sp, 0x10C
    ctx->pc = 0x384660u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x384664: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x384664u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x384668: 0x8cbe0034  lw          $fp, 0x34($a1)
    ctx->pc = 0x384668u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x38466c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x38466cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384670: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x384670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x384674: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x384674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384678: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x384678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38467c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x38467cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384680: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x384680u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384684: 0xc0e01c8  jal         func_380720
    ctx->pc = 0x384684u;
    SET_GPR_U32(ctx, 31, 0x38468Cu);
    ctx->pc = 0x384688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384684u;
    // 0x384688: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380720u, 0x384684u, 0x38468Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38468Cu;
label_38468c:
    // 0x38468c: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x38468cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384690: 0x8fa80100  lw          $t0, 0x100($sp)
    ctx->pc = 0x384690u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x384694: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x384694u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x384698: 0x8fa90104  lw          $t1, 0x104($sp)
    ctx->pc = 0x384698u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x38469c: 0x24e7cbf8  addiu       $a3, $a3, -0x3408
    ctx->pc = 0x38469cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953976));
    // 0x3846a0: 0x8faa0108  lw          $t2, 0x108($sp)
    ctx->pc = 0x3846a0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x3846a4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3846a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3846a8: 0x8fab010c  lw          $t3, 0x10C($sp)
    ctx->pc = 0x3846a8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x3846ac: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x3846acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3846b0: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3846B0u;
    SET_GPR_U32(ctx, 31, 0x3846B8u);
    ctx->pc = 0x3846B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3846B0u;
    // 0x3846b4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3846B0u, 0x3846B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3846B8u;
label_3846b8:
    // 0x3846b8: 0x8e280008  lw          $t0, 0x8($s1)
    ctx->pc = 0x3846b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3846bc: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3846bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x3846c0: 0x24e7cc18  addiu       $a3, $a3, -0x33E8
    ctx->pc = 0x3846c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954008));
    // 0x3846c4: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x3846c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3846c8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3846c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3846cc: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3846CCu;
    SET_GPR_U32(ctx, 31, 0x3846D4u);
    ctx->pc = 0x3846D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3846CCu;
    // 0x3846d0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3846CCu, 0x3846D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3846D4u;
label_3846d4:
    // 0x3846d4: 0x8e28000c  lw          $t0, 0xC($s1)
    ctx->pc = 0x3846d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3846d8: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3846d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x3846dc: 0x24e7cc28  addiu       $a3, $a3, -0x33D8
    ctx->pc = 0x3846dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954024));
    // 0x3846e0: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x3846e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3846e4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x3846e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3846e8: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3846E8u;
    SET_GPR_U32(ctx, 31, 0x3846F0u);
    ctx->pc = 0x3846ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3846E8u;
    // 0x3846ec: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3846E8u, 0x3846F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3846F0u;
label_3846f0:
    // 0x3846f0: 0xc62c0018  lwc1        $f12, 0x18($s1)
    ctx->pc = 0x3846f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3846f4: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x3846f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    // 0x3846f8: 0xc0c7b74  jal         func_31EDD0
    ctx->pc = 0x3846F8u;
    SET_GPR_U32(ctx, 31, 0x384700u);
    ctx->pc = 0x3846FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3846F8u;
    // 0x3846fc: 0x2610cc38  addiu       $s0, $s0, -0x33C8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EDD0u, 0x3846F8u, 0x384700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384700u;
label_384700:
    // 0x384700: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x384700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384704: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x384704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384708: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x384708u;
    SET_GPR_U32(ctx, 31, 0x384710u);
    ctx->pc = 0x38470Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384708u;
    // 0x38470c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x384708u, 0x384710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384710u;
label_384710:
    // 0x384710: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x384710u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x384714: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x384714u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384718: 0x24e7cbc0  addiu       $a3, $a3, -0x3440
    ctx->pc = 0x384718u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953920));
    // 0x38471c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x38471cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x384720: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x384720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x384724: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x384724u;
    SET_GPR_U32(ctx, 31, 0x38472Cu);
    ctx->pc = 0x384728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384724u;
    // 0x384728: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x384724u, 0x38472Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38472Cu;
label_38472c:
    // 0x38472c: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x38472cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x384730: 0x8e28001c  lw          $t0, 0x1C($s1)
    ctx->pc = 0x384730u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x384734: 0x24e7cc50  addiu       $a3, $a3, -0x33B0
    ctx->pc = 0x384734u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954064));
    // 0x384738: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x384738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x38473c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x38473cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x384740: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x384740u;
    SET_GPR_U32(ctx, 31, 0x384748u);
    ctx->pc = 0x384744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384740u;
    // 0x384744: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x384740u, 0x384748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384748u;
label_384748:
    // 0x384748: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x384748u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38474c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x38474cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384750: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x384750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384754: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x384754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384758: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x384758u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38475c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x38475cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384760: 0xc0e01c8  jal         func_380720
    ctx->pc = 0x384760u;
    SET_GPR_U32(ctx, 31, 0x384768u);
    ctx->pc = 0x384764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384760u;
    // 0x384764: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380720u, 0x384760u, 0x384768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384768u;
label_384768:
    // 0x384768: 0x8fa80100  lw          $t0, 0x100($sp)
    ctx->pc = 0x384768u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x38476c: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x38476cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x384770: 0x8fa90104  lw          $t1, 0x104($sp)
    ctx->pc = 0x384770u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x384774: 0x24e7cc60  addiu       $a3, $a3, -0x33A0
    ctx->pc = 0x384774u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954080));
    // 0x384778: 0x8faa0108  lw          $t2, 0x108($sp)
    ctx->pc = 0x384778u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x38477c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x38477cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x384780: 0x8fab010c  lw          $t3, 0x10C($sp)
    ctx->pc = 0x384780u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x384784: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x384784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x384788: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x384788u;
    SET_GPR_U32(ctx, 31, 0x384790u);
    ctx->pc = 0x38478Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384788u;
    // 0x38478c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x384788u, 0x384790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384790u;
label_384790:
    // 0x384790: 0x8fa60110  lw          $a2, 0x110($sp)
    ctx->pc = 0x384790u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x384794: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x384794u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384798: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x384798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38479c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x38479cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3847a0: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x3847a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3847a4: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x3847a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3847a8: 0xc0e01c8  jal         func_380720
    ctx->pc = 0x3847A8u;
    SET_GPR_U32(ctx, 31, 0x3847B0u);
    ctx->pc = 0x3847ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3847A8u;
    // 0x3847ac: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380720u, 0x3847A8u, 0x3847B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3847B0u;
label_3847b0:
    // 0x3847b0: 0x8fa80100  lw          $t0, 0x100($sp)
    ctx->pc = 0x3847b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3847b4: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3847b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x3847b8: 0x8fa90104  lw          $t1, 0x104($sp)
    ctx->pc = 0x3847b8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x3847bc: 0x24e7cc80  addiu       $a3, $a3, -0x3380
    ctx->pc = 0x3847bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954112));
    // 0x3847c0: 0x8faa0108  lw          $t2, 0x108($sp)
    ctx->pc = 0x3847c0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x3847c4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3847c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3847c8: 0x8fab010c  lw          $t3, 0x10C($sp)
    ctx->pc = 0x3847c8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x3847cc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3847ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3847d0: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3847D0u;
    SET_GPR_U32(ctx, 31, 0x3847D8u);
    ctx->pc = 0x3847D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3847D0u;
    // 0x3847d4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3847D0u, 0x3847D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3847D8u;
label_3847d8:
    // 0x3847d8: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3847d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x3847dc: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x3847dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3847e0: 0x24e7cca0  addiu       $a3, $a3, -0x3360
    ctx->pc = 0x3847e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954144));
    // 0x3847e4: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x3847e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3847e8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3847e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3847ec: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3847ECu;
    SET_GPR_U32(ctx, 31, 0x3847F4u);
    ctx->pc = 0x3847F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3847ECu;
    // 0x3847f0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3847ECu, 0x3847F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3847F4u;
label_3847f4:
    // 0x3847f4: 0x7bb001b0  lq          $s0, 0x1B0($sp)
    ctx->pc = 0x3847f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x3847f8: 0x7bb101a0  lq          $s1, 0x1A0($sp)
    ctx->pc = 0x3847f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x3847fc: 0x7bb20190  lq          $s2, 0x190($sp)
    ctx->pc = 0x3847fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x384800: 0x7bb30180  lq          $s3, 0x180($sp)
    ctx->pc = 0x384800u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x384804: 0x7bb40170  lq          $s4, 0x170($sp)
    ctx->pc = 0x384804u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x384808: 0x7bb50160  lq          $s5, 0x160($sp)
    ctx->pc = 0x384808u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x38480c: 0x7bb60150  lq          $s6, 0x150($sp)
    ctx->pc = 0x38480cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x384810: 0x7bb70140  lq          $s7, 0x140($sp)
    ctx->pc = 0x384810u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x384814: 0x7bbe0130  lq          $fp, 0x130($sp)
    ctx->pc = 0x384814u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x384818: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x384818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x38481c: 0x3e00008  jr          $ra
    ctx->pc = 0x38481Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38481Cu;
        // 0x384820: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38481Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x384824u;
    // 0x384824: 0x0  nop
    ctx->pc = 0x384824u;
    // NOP
    ctx->pc = 0x384828u;
}
