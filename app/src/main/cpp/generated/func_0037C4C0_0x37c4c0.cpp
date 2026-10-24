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

// Function: func_0037C4C0
// Address: 0x37c4c0 - 0x37c5c8
void func_0037C4C0_0x37c4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037C4C0_0x37c4c0");
#endif

    switch (ctx->pc) {
        case 0x37c4e8u: goto label_37c4e8;
        case 0x37c534u: goto label_37c534;
        case 0x37c54cu: goto label_37c54c;
        case 0x37c56cu: goto label_37c56c;
        case 0x37c584u: goto label_37c584;
        case 0x37c59cu: goto label_37c59c;
        default: break;
    }

    ctx->pc = 0x37c4c0u;

    // 0x37c4c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x37c4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x37c4c4: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x37c4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x37c4c8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x37c4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x37c4cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x37c4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x37c4d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37c4d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c4d4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x37c4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x37c4d8: 0x2452cf20  addiu       $s2, $v0, -0x30E0
    ctx->pc = 0x37c4d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954784));
    // 0x37c4dc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x37c4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x37c4e0: 0x24130032  addiu       $s3, $zero, 0x32
    ctx->pc = 0x37c4e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x37c4e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37c4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_37c4e8:
    // 0x37c4e8: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x37c4e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x37c4ec: 0x5040002c  beql        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x37C4ECu;
    {
        const bool branch_taken_0x37c4ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c4ec) {
            ctx->pc = 0x37C4F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37C4ECu;
            // 0x37c4f0: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37C5A0u;
            goto label_37c5a0;
        }
    }
    ctx->pc = 0x37C4F4u;
    // 0x37c4f4: 0x92420005  lbu         $v0, 0x5($s2)
    ctx->pc = 0x37c4f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
    // 0x37c4f8: 0x9203000d  lbu         $v1, 0xD($s0)
    ctx->pc = 0x37c4f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x37c4fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x37c4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x37c500: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x37C500u;
    {
        const bool branch_taken_0x37c500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37c500) {
            ctx->pc = 0x37C504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37C500u;
            // 0x37c504: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37C5A0u;
            goto label_37c5a0;
        }
    }
    ctx->pc = 0x37C508u;
    // 0x37c508: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x37c508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x37c50c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x37c50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x37c510: 0x54620023  bnel        $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x37C510u;
    {
        const bool branch_taken_0x37c510 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x37c510) {
            ctx->pc = 0x37C514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37C510u;
            // 0x37c514: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37C5A0u;
            goto label_37c5a0;
        }
    }
    ctx->pc = 0x37C518u;
    // 0x37c518: 0x9611002a  lhu         $s1, 0x2A($s0)
    ctx->pc = 0x37c518u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x37c51c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x37c51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x37c520: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37C520u;
    {
        const bool branch_taken_0x37c520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C520u;
        // 0x37c524: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c520) {
            ctx->pc = 0x37C534u;
            goto label_37c534;
        }
    }
    ctx->pc = 0x37C528u;
    // 0x37c528: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x37c528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c52c: 0xc0df172  jal         func_37C5C8
    ctx->pc = 0x37C52Cu;
    SET_GPR_U32(ctx, 31, 0x37C534u);
    ctx->pc = 0x37C530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C52Cu;
    // 0x37c530: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37C5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37C5C8u, 0x37C52Cu, 0x37C534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C534u;
label_37c534:
    // 0x37c534: 0x32220002  andi        $v0, $s1, 0x2
    ctx->pc = 0x37c534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x37c538: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37C538u;
    {
        const bool branch_taken_0x37c538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C538u;
        // 0x37c53c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c538) {
            ctx->pc = 0x37C54Cu;
            goto label_37c54c;
        }
    }
    ctx->pc = 0x37C540u;
    // 0x37c540: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x37c540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c544: 0xc0df172  jal         func_37C5C8
    ctx->pc = 0x37C544u;
    SET_GPR_U32(ctx, 31, 0x37C54Cu);
    ctx->pc = 0x37C548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C544u;
    // 0x37c548: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37C5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37C5C8u, 0x37C544u, 0x37C54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C54Cu;
label_37c54c:
    // 0x37c54c: 0x9202000d  lbu         $v0, 0xD($s0)
    ctx->pc = 0x37c54cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x37c550: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x37c550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x37c554: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37C554u;
    {
        const bool branch_taken_0x37c554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C554u;
        // 0x37c558: 0x32220003  andi        $v0, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c554) {
            ctx->pc = 0x37C56Cu;
            goto label_37c56c;
        }
    }
    ctx->pc = 0x37C55Cu;
    // 0x37c55c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37C55Cu;
    {
        const bool branch_taken_0x37c55c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C55Cu;
        // 0x37c560: 0x32220004  andi        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c55c) {
            ctx->pc = 0x37C570u;
            goto label_37c570;
        }
    }
    ctx->pc = 0x37C564u;
    // 0x37c564: 0xc0df1a8  jal         func_37C6A0
    ctx->pc = 0x37C564u;
    SET_GPR_U32(ctx, 31, 0x37C56Cu);
    ctx->pc = 0x37C568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C564u;
    // 0x37c568: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37C6A0u, 0x37C564u, 0x37C56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C56Cu;
label_37c56c:
    // 0x37c56c: 0x32220004  andi        $v0, $s1, 0x4
    ctx->pc = 0x37c56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
label_37c570:
    // 0x37c570: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37C570u;
    {
        const bool branch_taken_0x37c570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C570u;
        // 0x37c574: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c570) {
            ctx->pc = 0x37C584u;
            goto label_37c584;
        }
    }
    ctx->pc = 0x37C578u;
    // 0x37c578: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x37c578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c57c: 0xc0df17e  jal         func_37C5F8
    ctx->pc = 0x37C57Cu;
    SET_GPR_U32(ctx, 31, 0x37C584u);
    ctx->pc = 0x37C580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C57Cu;
    // 0x37c580: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37C5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37C5F8u, 0x37C57Cu, 0x37C584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C584u;
label_37c584:
    // 0x37c584: 0x32220008  andi        $v0, $s1, 0x8
    ctx->pc = 0x37c584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
    // 0x37c588: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37C588u;
    {
        const bool branch_taken_0x37c588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C588u;
        // 0x37c58c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c588) {
            ctx->pc = 0x37C59Cu;
            goto label_37c59c;
        }
    }
    ctx->pc = 0x37C590u;
    // 0x37c590: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x37c590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c594: 0xc0df186  jal         func_37C618
    ctx->pc = 0x37C594u;
    SET_GPR_U32(ctx, 31, 0x37C59Cu);
    ctx->pc = 0x37C598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C594u;
    // 0x37c598: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37C618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37C618u, 0x37C594u, 0x37C59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C59Cu;
label_37c59c:
    // 0x37c59c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x37c59cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_37c5a0:
    // 0x37c5a0: 0x661ffd1  bgez        $s3, . + 4 + (-0x2F << 2)
    ctx->pc = 0x37C5A0u;
    {
        const bool branch_taken_0x37c5a0 = (GPR_S64(ctx, 19) >= 0);
        ctx->pc = 0x37C5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C5A0u;
        // 0x37c5a4: 0x26520050  addiu       $s2, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c5a0) {
            ctx->pc = 0x37C4E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37c4e8;
        }
    }
    ctx->pc = 0x37C5A8u;
    // 0x37c5a8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x37c5a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37c5ac: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x37c5acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37c5b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x37c5b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37c5b4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x37c5b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37c5b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37c5b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37c5bc: 0x3e00008  jr          $ra
    ctx->pc = 0x37C5BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C5BCu;
        // 0x37c5c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C5BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37C5C4u;
    // 0x37c5c4: 0x0  nop
    ctx->pc = 0x37c5c4u;
    // NOP
    ctx->pc = 0x37c5c8u;
}
