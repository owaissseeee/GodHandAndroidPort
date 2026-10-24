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

// Function: sfadxt_SearchAlign
// Address: 0x34a4c0 - 0x34a5e0
void sfadxt_SearchAlign_0x34a4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sfadxt_SearchAlign_0x34a4c0");
#endif

    switch (ctx->pc) {
        case 0x34a520u: goto label_34a520;
        case 0x34a524u: goto label_34a524;
        case 0x34a550u: goto label_34a550;
        case 0x34a5a0u: goto label_34a5a0;
        default: break;
    }

    ctx->pc = 0x34a4c0u;

    // 0x34a4c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x34a4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x34a4c4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x34a4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x34a4c8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x34a4c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a4cc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x34a4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x34a4d0: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x34a4d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a4d4: 0x26230024  addiu       $v1, $s1, 0x24
    ctx->pc = 0x34a4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x34a4d8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x34a4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x34a4dc: 0x223102b  sltu        $v0, $s1, $v1
    ctx->pc = 0x34a4dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x34a4e0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x34a4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x34a4e4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x34a4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x34a4e8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x34a4e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a4ec: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x34a4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x34a4f0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x34a4f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a4f4: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x34a4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x34a4f8: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x34a4f8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a4fc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x34a4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x34a500: 0x2869021  addu        $s2, $s4, $a2
    ctx->pc = 0x34a500u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x34a504: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x34a504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x34a508: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x34a508u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a50c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x34A50Cu;
    {
        const bool branch_taken_0x34a50c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A50Cu;
        // 0x34a510: 0xffbf0058  sd          $ra, 0x58($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a50c) {
            ctx->pc = 0x34A580u;
            goto label_34a580;
        }
    }
    ctx->pc = 0x34A514u;
    // 0x34a514: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x34a514u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a518: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x34a518u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a51c: 0x0  nop
    ctx->pc = 0x34a51cu;
    // NOP
label_34a520:
    // 0x34a520: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x34a520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_34a524:
    // 0x34a524: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x34a524u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x34a528: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x34A528u;
    {
        const bool branch_taken_0x34a528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a528) {
            ctx->pc = 0x34A568u;
            goto label_34a568;
        }
    }
    ctx->pc = 0x34A530u;
    // 0x34a530: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x34a530u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34a534: 0x443fffb  bgezl       $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x34A534u;
    {
        const bool branch_taken_0x34a534 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x34a534) {
            ctx->pc = 0x34A538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34A534u;
            // 0x34a538: 0x26100012  addiu       $s0, $s0, 0x12 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34A524u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34a524;
        }
    }
    ctx->pc = 0x34A53Cu;
    // 0x34a53c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34a53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a540: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x34a540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x34a544: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x34a544u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a548: 0xc0cadfc  jal         func_32B7F0
    ctx->pc = 0x34A548u;
    SET_GPR_U32(ctx, 31, 0x34A550u);
    ctx->pc = 0x34A54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A548u;
    // 0x34a54c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B7F0u, 0x34A548u, 0x34A550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A550u;
label_34a550:
    // 0x34a550: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34A550u;
    {
        const bool branch_taken_0x34a550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A550u;
        // 0x34a554: 0x2b0102b  sltu        $v0, $s5, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a550) {
            ctx->pc = 0x34A568u;
            goto label_34a568;
        }
    }
    ctx->pc = 0x34A558u;
    // 0x34a558: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34A558u;
    {
        const bool branch_taken_0x34a558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a558) {
            ctx->pc = 0x34A568u;
            goto label_34a568;
        }
    }
    ctx->pc = 0x34A560u;
    // 0x34a560: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x34a560u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a564: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x34a564u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_34a568:
    // 0x34a568: 0x12600010  beqz        $s3, . + 4 + (0x10 << 2)
    ctx->pc = 0x34A568u;
    {
        const bool branch_taken_0x34a568 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A568u;
        // 0x34a56c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a568) {
            ctx->pc = 0x34A5ACu;
            goto label_34a5ac;
        }
    }
    ctx->pc = 0x34A570u;
    // 0x34a570: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x34a570u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x34a574: 0x237102b  sltu        $v0, $s1, $s7
    ctx->pc = 0x34a574u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x34a578: 0x5440ffe9  bnel        $v0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x34A578u;
    {
        const bool branch_taken_0x34a578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a578) {
            ctx->pc = 0x34A57Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34A578u;
            // 0x34a57c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34A520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34a520;
        }
    }
    ctx->pc = 0x34A580u;
label_34a580:
    // 0x34a580: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x34A580u;
    {
        const bool branch_taken_0x34a580 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A580u;
        // 0x34a584: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a580) {
            ctx->pc = 0x34A5ACu;
            goto label_34a5ac;
        }
    }
    ctx->pc = 0x34A588u;
    // 0x34a588: 0x56c00007  bnel        $s6, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x34A588u;
    {
        const bool branch_taken_0x34a588 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a588) {
            ctx->pc = 0x34A58Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34A588u;
            // 0x34a58c: 0x2c0882d  daddu       $s1, $s6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34A5A8u;
            goto label_34a5a8;
        }
    }
    ctx->pc = 0x34A590u;
    // 0x34a590: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x34a590u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x34a594: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x34a594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a598: 0xc0d375c  jal         func_34DD70
    ctx->pc = 0x34A598u;
    SET_GPR_U32(ctx, 31, 0x34A5A0u);
    ctx->pc = 0x34A59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A598u;
    // 0x34a59c: 0x34a50c0a  ori         $a1, $a1, 0xC0A (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3082);
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x34A598u, 0x34A5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A5A0u;
label_34a5a0:
    // 0x34a5a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x34A5A0u;
    {
        const bool branch_taken_0x34a5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A5A0u;
        // 0x34a5a4: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a5a0) {
            ctx->pc = 0x34A5ACu;
            goto label_34a5ac;
        }
    }
    ctx->pc = 0x34A5A8u;
label_34a5a8:
    // 0x34a5a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x34a5a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_34a5ac:
    // 0x34a5ac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x34a5acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34a5b0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x34a5b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34a5b4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x34a5b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34a5b8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x34a5b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a5bc: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x34a5bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34a5c0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x34a5c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34a5c4: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x34a5c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34a5c8: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x34a5c8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x34a5cc: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x34a5ccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x34a5d0: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x34a5d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x34a5d4: 0x3e00008  jr          $ra
    ctx->pc = 0x34A5D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34A5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A5D4u;
        // 0x34a5d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A5D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34A5DCu;
    // 0x34a5dc: 0x0  nop
    ctx->pc = 0x34a5dcu;
    // NOP
    ctx->pc = 0x34a5e0u;
}
