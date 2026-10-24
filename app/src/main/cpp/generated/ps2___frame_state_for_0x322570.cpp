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

// Function: __frame_state_for
// Address: 0x322570 - 0x322748
void ps2___frame_state_for_0x322570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___frame_state_for_0x322570");
#endif

    switch (ctx->pc) {
        case 0x3225a4u: goto label_3225a4;
        case 0x3225b8u: goto label_3225b8;
        case 0x3225dcu: goto label_3225dc;
        case 0x322618u: goto label_322618;
        case 0x322628u: goto label_322628;
        case 0x322668u: goto label_322668;
        case 0x3226a0u: goto label_3226a0;
        case 0x3226b0u: goto label_3226b0;
        case 0x3226d4u: goto label_3226d4;
        default: break;
    }

    ctx->pc = 0x322570u;

    // 0x322570: 0x27bdfc40  addiu       $sp, $sp, -0x3C0
    ctx->pc = 0x322570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966336));
    // 0x322574: 0xffb60390  sd          $s6, 0x390($sp)
    ctx->pc = 0x322574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 912), GPR_U64(ctx, 22));
    // 0x322578: 0xffb703a0  sd          $s7, 0x3A0($sp)
    ctx->pc = 0x322578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 928), GPR_U64(ctx, 23));
    // 0x32257c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x32257cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322580: 0xffb20350  sd          $s2, 0x350($sp)
    ctx->pc = 0x322580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 848), GPR_U64(ctx, 18));
    // 0x322584: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x322584u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322588: 0xffbf03b0  sd          $ra, 0x3B0($sp)
    ctx->pc = 0x322588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 944), GPR_U64(ctx, 31));
    // 0x32258c: 0xffb50380  sd          $s5, 0x380($sp)
    ctx->pc = 0x32258cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 896), GPR_U64(ctx, 21));
    // 0x322590: 0xffb40370  sd          $s4, 0x370($sp)
    ctx->pc = 0x322590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 880), GPR_U64(ctx, 20));
    // 0x322594: 0xffb30360  sd          $s3, 0x360($sp)
    ctx->pc = 0x322594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 864), GPR_U64(ctx, 19));
    // 0x322598: 0xffb10340  sd          $s1, 0x340($sp)
    ctx->pc = 0x322598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 832), GPR_U64(ctx, 17));
    // 0x32259c: 0xc0c87d2  jal         func_321F48
    ctx->pc = 0x32259Cu;
    SET_GPR_U32(ctx, 31, 0x3225A4u);
    ctx->pc = 0x3225A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32259Cu;
    // 0x3225a0: 0xffb00330  sd          $s0, 0x330($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 816), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321F48u, 0x32259Cu, 0x3225A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3225A4u;
label_3225a4:
    // 0x3225a4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3225a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3225a8: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x3225A8u;
    {
        const bool branch_taken_0x3225a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3225ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3225A8u;
        // 0x3225ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3225a8) {
            ctx->pc = 0x3225C4u;
            goto label_3225c4;
        }
    }
    ctx->pc = 0x3225B0u;
    // 0x3225b0: 0xc0c880c  jal         func_322030
    ctx->pc = 0x3225B0u;
    SET_GPR_U32(ctx, 31, 0x3225B8u);
    ctx->pc = 0x3225B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3225B0u;
    // 0x3225b4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322030u, 0x3225B0u, 0x3225B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3225B8u;
label_3225b8:
    // 0x3225b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3225b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3225bc: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3225BCu;
    {
        const bool branch_taken_0x3225bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3225C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3225BCu;
        // 0x3225c0: 0x27b40020  addiu       $s4, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3225bc) {
            ctx->pc = 0x3225CCu;
            goto label_3225cc;
        }
    }
    ctx->pc = 0x3225C4u;
label_3225c4:
    // 0x3225c4: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x3225C4u;
    {
        const bool branch_taken_0x3225c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3225C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3225C4u;
        // 0x3225c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3225c4) {
            ctx->pc = 0x32271Cu;
            goto label_32271c;
        }
    }
    ctx->pc = 0x3225CCu;
label_3225cc:
    // 0x3225cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3225ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3225d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3225d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3225d4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x3225D4u;
    SET_GPR_U32(ctx, 31, 0x3225DCu);
    ctx->pc = 0x3225D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3225D4u;
    // 0x3225d8: 0x240602f8  addiu       $a2, $zero, 0x2F8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x3225D4u, 0x3225DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3225DCu;
label_3225dc:
    // 0x3225dc: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x3225dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3225e0: 0x97a40010  lhu         $a0, 0x10($sp)
    ctx->pc = 0x3225e0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3225e4: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x3225e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x3225e8: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x3225e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3225ec: 0xa7a402ba  sh          $a0, 0x2BA($sp)
    ctx->pc = 0x3225ecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 698), (uint16_t)GPR_U32(ctx, 4));
    // 0x3225f0: 0x2431823  subu        $v1, $s2, $v1
    ctx->pc = 0x3225f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x3225f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3225f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3225f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3225f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3225fc: 0x24710004  addiu       $s1, $v1, 0x4
    ctx->pc = 0x3225fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x322600: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x322600u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x322604: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x322604u;
    {
        const bool branch_taken_0x322604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322604u;
        // 0x322608: 0xafa50024  sw          $a1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322604) {
            ctx->pc = 0x322640u;
            goto label_322640;
        }
    }
    ctx->pc = 0x32260Cu;
    // 0x32260c: 0x26530010  addiu       $s3, $s2, 0x10
    ctx->pc = 0x32260cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x322610: 0x27b50300  addiu       $s5, $sp, 0x300
    ctx->pc = 0x322610u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x322614: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x322614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_322618:
    // 0x322618: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x322618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32261c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x32261cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322620: 0xc0c884e  jal         func_322138
    ctx->pc = 0x322620u;
    SET_GPR_U32(ctx, 31, 0x322628u);
    ctx->pc = 0x322624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322620u;
    // 0x322624: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322138u, 0x322620u, 0x322628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322628u;
label_322628:
    // 0x322628: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x322628u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32262c: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x32262cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x322630: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x322630u;
    {
        const bool branch_taken_0x322630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x322634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322630u;
        // 0x322634: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322630) {
            ctx->pc = 0x322618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322618;
        }
    }
    ctx->pc = 0x322638u;
    // 0x322638: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x322638u;
    {
        const bool branch_taken_0x322638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32263Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322638u;
        // 0x32263c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322638) {
            ctx->pc = 0x32264Cu;
            goto label_32264c;
        }
    }
    ctx->pc = 0x322640u;
label_322640:
    // 0x322640: 0x26530010  addiu       $s3, $s2, 0x10
    ctx->pc = 0x322640u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x322644: 0x27b50300  addiu       $s5, $sp, 0x300
    ctx->pc = 0x322644u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x322648: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x322648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_32264c:
    // 0x32264c: 0x2403007a  addiu       $v1, $zero, 0x7A
    ctx->pc = 0x32264cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x322650: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x322650u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x322654: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x322654u;
    {
        const bool branch_taken_0x322654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x322658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322654u;
        // 0x322658: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322654) {
            ctx->pc = 0x322670u;
            goto label_322670;
        }
    }
    ctx->pc = 0x32265Cu;
    // 0x32265c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32265cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322660: 0xc0c864e  jal         func_321938
    ctx->pc = 0x322660u;
    SET_GPR_U32(ctx, 31, 0x322668u);
    ctx->pc = 0x322664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322660u;
    // 0x322664: 0x27a50320  addiu       $a1, $sp, 0x320 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321938u, 0x322660u, 0x322668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322668u;
label_322668:
    // 0x322668: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x322668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x32266c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x32266cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_322670:
    // 0x322670: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x322670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x322674: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x322674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x322678: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x322678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x32267c: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x32267cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x322680: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x322680u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x322684: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x322684u;
    {
        const bool branch_taken_0x322684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322684u;
        // 0x322688: 0xafa50324  sw          $a1, 0x324($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 804), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322684) {
            ctx->pc = 0x3226CCu;
            goto label_3226cc;
        }
    }
    ctx->pc = 0x32268Cu;
    // 0x32268c: 0x2c5102b  sltu        $v0, $s6, $a1
    ctx->pc = 0x32268cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x322690: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x322690u;
    {
        const bool branch_taken_0x322690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x322694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322690u;
        // 0x322694: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322690) {
            ctx->pc = 0x3226D0u;
            goto label_3226d0;
        }
    }
    ctx->pc = 0x322698u;
    // 0x322698: 0x27b20324  addiu       $s2, $sp, 0x324
    ctx->pc = 0x322698u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 804));
    // 0x32269c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32269cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3226a0:
    // 0x3226a0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3226a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3226a4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3226a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3226a8: 0xc0c884e  jal         func_322138
    ctx->pc = 0x3226A8u;
    SET_GPR_U32(ctx, 31, 0x3226B0u);
    ctx->pc = 0x3226ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3226A8u;
    // 0x3226ac: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322138u, 0x3226A8u, 0x3226B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3226B0u;
label_3226b0:
    // 0x3226b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3226b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3226b4: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x3226b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3226b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3226B8u;
    {
        const bool branch_taken_0x3226b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3226BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3226B8u;
        // 0x3226bc: 0x8fa20324  lw          $v0, 0x324($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 804)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3226b8) {
            ctx->pc = 0x3226CCu;
            goto label_3226cc;
        }
    }
    ctx->pc = 0x3226C0u;
    // 0x3226c0: 0x2c2102b  sltu        $v0, $s6, $v0
    ctx->pc = 0x3226c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3226c4: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x3226C4u;
    {
        const bool branch_taken_0x3226c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3226C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3226C4u;
        // 0x3226c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3226c4) {
            ctx->pc = 0x3226A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3226a0;
        }
    }
    ctx->pc = 0x3226CCu;
label_3226cc:
    // 0x3226cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3226ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3226d0:
    // 0x3226d0: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x3226d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3226d4:
    // 0x3226d4: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x3226d4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3226d8: 0xdc850008  ld          $a1, 0x8($a0)
    ctx->pc = 0x3226d8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3226dc: 0xdc860010  ld          $a2, 0x10($a0)
    ctx->pc = 0x3226dcu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3226e0: 0xdc870018  ld          $a3, 0x18($a0)
    ctx->pc = 0x3226e0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3226e4: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x3226e4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x3226e8: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x3226e8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
    // 0x3226ec: 0xfc460010  sd          $a2, 0x10($v0)
    ctx->pc = 0x3226ecu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 6));
    // 0x3226f0: 0xfc470018  sd          $a3, 0x18($v0)
    ctx->pc = 0x3226f0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 7));
    // 0x3226f4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x3226f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x3226f8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x3226f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x3226fc: 0x0  nop
    ctx->pc = 0x3226fcu;
    // NOP
    // 0x322700: 0x1495fff4  bne         $a0, $s5, . + 4 + (-0xC << 2)
    ctx->pc = 0x322700u;
    {
        const bool branch_taken_0x322700 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 21));
        if (branch_taken_0x322700) {
            ctx->pc = 0x3226D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3226d4;
        }
    }
    ctx->pc = 0x322708u;
    // 0x322708: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x322708u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32270c: 0xdc850008  ld          $a1, 0x8($a0)
    ctx->pc = 0x32270cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x322710: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x322710u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x322714: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x322714u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
    // 0x322718: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x322718u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_32271c:
    // 0x32271c: 0xdfbf03b0  ld          $ra, 0x3B0($sp)
    ctx->pc = 0x32271cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 944)));
    // 0x322720: 0xdfb703a0  ld          $s7, 0x3A0($sp)
    ctx->pc = 0x322720u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 928)));
    // 0x322724: 0xdfb60390  ld          $s6, 0x390($sp)
    ctx->pc = 0x322724u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 912)));
    // 0x322728: 0xdfb50380  ld          $s5, 0x380($sp)
    ctx->pc = 0x322728u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x32272c: 0xdfb40370  ld          $s4, 0x370($sp)
    ctx->pc = 0x32272cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x322730: 0xdfb30360  ld          $s3, 0x360($sp)
    ctx->pc = 0x322730u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x322734: 0xdfb20350  ld          $s2, 0x350($sp)
    ctx->pc = 0x322734u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x322738: 0xdfb10340  ld          $s1, 0x340($sp)
    ctx->pc = 0x322738u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x32273c: 0xdfb00330  ld          $s0, 0x330($sp)
    ctx->pc = 0x32273cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x322740: 0x3e00008  jr          $ra
    ctx->pc = 0x322740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322740u;
        // 0x322744: 0x27bd03c0  addiu       $sp, $sp, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322748u;
}
