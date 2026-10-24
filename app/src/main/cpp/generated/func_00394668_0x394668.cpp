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

// Function: func_00394668
// Address: 0x394668 - 0x394828
void func_00394668_0x394668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00394668_0x394668");
#endif

    switch (ctx->pc) {
        case 0x3946b0u: goto label_3946b0;
        case 0x3946c8u: goto label_3946c8;
        case 0x3946dcu: goto label_3946dc;
        case 0x394718u: goto label_394718;
        case 0x394750u: goto label_394750;
        case 0x394768u: goto label_394768;
        case 0x394780u: goto label_394780;
        case 0x394798u: goto label_394798;
        case 0x3947d0u: goto label_3947d0;
        default: break;
    }

    ctx->pc = 0x394668u;

    // 0x394668: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x394668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x39466c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x39466cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x394670: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x394670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x394674: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x394674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x394678: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x394678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x39467c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x39467cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394680: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x394680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x394684: 0x30b7ffff  andi        $s7, $a1, 0xFFFF
    ctx->pc = 0x394684u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x394688: 0x8c51852c  lw          $s1, -0x7AD4($v0)
    ctx->pc = 0x394688u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x3F852Cu));
    // 0x39468c: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x39468cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394690: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x394690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x394694: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x394694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x394698: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x394698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x39469c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x39469cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x3946a0: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x3946a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x3946a4: 0x12200026  beqz        $s1, . + 4 + (0x26 << 2)
    ctx->pc = 0x3946A4u;
    {
        const bool branch_taken_0x3946a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3946A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3946A4u;
        // 0x3946a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3946a4) {
            ctx->pc = 0x394740u;
            goto label_394740;
        }
    }
    ctx->pc = 0x3946ACu;
    // 0x3946ac: 0x8e320010  lw          $s2, 0x10($s1)
    ctx->pc = 0x3946acu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3946b0:
    // 0x3946b0: 0x12400020  beqz        $s2, . + 4 + (0x20 << 2)
    ctx->pc = 0x3946B0u;
    {
        const bool branch_taken_0x3946b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3946B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3946B0u;
        // 0x3946b4: 0x8e30000c  lw          $s0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3946b0) {
            ctx->pc = 0x394734u;
            goto label_394734;
        }
    }
    ctx->pc = 0x3946B8u;
    // 0x3946b8: 0x24160003  addiu       $s6, $zero, 0x3
    ctx->pc = 0x3946b8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3946bc: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x3946bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3946c0: 0x24140004  addiu       $s4, $zero, 0x4
    ctx->pc = 0x3946c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3946c4: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x3946c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_3946c8:
    // 0x3946c8: 0x54570017  bnel        $v0, $s7, . + 4 + (0x17 << 2)
    ctx->pc = 0x3946C8u;
    {
        const bool branch_taken_0x3946c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x3946c8) {
            ctx->pc = 0x3946CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3946C8u;
            // 0x3946cc: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394728u;
            goto label_394728;
        }
    }
    ctx->pc = 0x3946D0u;
    // 0x3946d0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3946d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3946d4: 0xc0e959e  jal         func_3A5678
    ctx->pc = 0x3946D4u;
    SET_GPR_U32(ctx, 31, 0x3946DCu);
    ctx->pc = 0x3946D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3946D4u;
    // 0x3946d8: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x3946D4u, 0x3946DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3946DCu;
label_3946dc:
    // 0x3946dc: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x3946DCu;
    {
        const bool branch_taken_0x3946dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3946dc) {
            ctx->pc = 0x3946E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3946DCu;
            // 0x3946e0: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394728u;
            goto label_394728;
        }
    }
    ctx->pc = 0x3946E4u;
    // 0x3946e4: 0x9203000a  lbu         $v1, 0xA($s0)
    ctx->pc = 0x3946e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x3946e8: 0x1076000d  beq         $v1, $s6, . + 4 + (0xD << 2)
    ctx->pc = 0x3946E8u;
    {
        const bool branch_taken_0x3946e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        ctx->pc = 0x3946ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3946E8u;
        // 0x3946ec: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3946e8) {
            ctx->pc = 0x394720u;
            goto label_394720;
        }
    }
    ctx->pc = 0x3946F0u;
    // 0x3946f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3946F0u;
    {
        const bool branch_taken_0x3946f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3946f0) {
            ctx->pc = 0x394708u;
            goto label_394708;
        }
    }
    ctx->pc = 0x3946F8u;
    // 0x3946f8: 0x10750005  beq         $v1, $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x3946F8u;
    {
        const bool branch_taken_0x3946f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        if (branch_taken_0x3946f8) {
            ctx->pc = 0x394710u;
            goto label_394710;
        }
    }
    ctx->pc = 0x394700u;
    // 0x394700: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x394700u;
    {
        const bool branch_taken_0x394700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394700u;
        // 0x394704: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394700) {
            ctx->pc = 0x394728u;
            goto label_394728;
        }
    }
    ctx->pc = 0x394708u;
label_394708:
    // 0x394708: 0x54740007  bnel        $v1, $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x394708u;
    {
        const bool branch_taken_0x394708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x394708) {
            ctx->pc = 0x39470Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394708u;
            // 0x39470c: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394728u;
            goto label_394728;
        }
    }
    ctx->pc = 0x394710u;
label_394710:
    // 0x394710: 0xc0e50f4  jal         func_3943D0
    ctx->pc = 0x394710u;
    SET_GPR_U32(ctx, 31, 0x394718u);
    ctx->pc = 0x394714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394710u;
    // 0x394714: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3943D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3943D0u, 0x394710u, 0x394718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394718u;
label_394718:
    // 0x394718: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x394718u;
    {
        const bool branch_taken_0x394718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394718u;
        // 0x39471c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394718) {
            ctx->pc = 0x3947FCu;
            goto label_3947fc;
        }
    }
    ctx->pc = 0x394720u;
label_394720:
    // 0x394720: 0x213980a  movz        $s3, $s0, $s3
    ctx->pc = 0x394720u;
    if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 16));
    // 0x394724: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x394724u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_394728:
    // 0x394728: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x394728u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x39472c: 0x5640ffe6  bnel        $s2, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x39472Cu;
    {
        const bool branch_taken_0x39472c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x39472c) {
            ctx->pc = 0x394730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39472Cu;
            // 0x394730: 0x96020008  lhu         $v0, 0x8($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3946C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3946c8;
        }
    }
    ctx->pc = 0x394734u;
label_394734:
    // 0x394734: 0x8e310030  lw          $s1, 0x30($s1)
    ctx->pc = 0x394734u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x394738: 0x5620ffdd  bnel        $s1, $zero, . + 4 + (-0x23 << 2)
    ctx->pc = 0x394738u;
    {
        const bool branch_taken_0x394738 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x394738) {
            ctx->pc = 0x39473Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394738u;
            // 0x39473c: 0x8e320010  lw          $s2, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3946B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3946b0;
        }
    }
    ctx->pc = 0x394740u;
label_394740:
    // 0x394740: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x394740u;
    {
        const bool branch_taken_0x394740 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x394744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394740u;
        // 0x394744: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394740) {
            ctx->pc = 0x394758u;
            goto label_394758;
        }
    }
    ctx->pc = 0x394748u;
    // 0x394748: 0xc0e50f4  jal         func_3943D0
    ctx->pc = 0x394748u;
    SET_GPR_U32(ctx, 31, 0x394750u);
    ctx->pc = 0x39474Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394748u;
    // 0x39474c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3943D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3943D0u, 0x394748u, 0x394750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394750u;
label_394750:
    // 0x394750: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x394750u;
    {
        const bool branch_taken_0x394750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394750u;
        // 0x394754: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394750) {
            ctx->pc = 0x3947FCu;
            goto label_3947fc;
        }
    }
    ctx->pc = 0x394758u;
label_394758:
    // 0x394758: 0x8c51852c  lw          $s1, -0x7AD4($v0)
    ctx->pc = 0x394758u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935852)));
    // 0x39475c: 0x12200026  beqz        $s1, . + 4 + (0x26 << 2)
    ctx->pc = 0x39475Cu;
    {
        const bool branch_taken_0x39475c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x394760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39475Cu;
        // 0x394760: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39475c) {
            ctx->pc = 0x3947F8u;
            goto label_3947f8;
        }
    }
    ctx->pc = 0x394764u;
    // 0x394764: 0x8e320010  lw          $s2, 0x10($s1)
    ctx->pc = 0x394764u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_394768:
    // 0x394768: 0x1240001f  beqz        $s2, . + 4 + (0x1F << 2)
    ctx->pc = 0x394768u;
    {
        const bool branch_taken_0x394768 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x39476Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394768u;
        // 0x39476c: 0x8e30000c  lw          $s0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394768) {
            ctx->pc = 0x3947E8u;
            goto label_3947e8;
        }
    }
    ctx->pc = 0x394770u;
    // 0x394770: 0x3c13aaaa  lui         $s3, 0xAAAA
    ctx->pc = 0x394770u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)43690 << 16));
    // 0x394774: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x394774u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x394778: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x394778u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x39477c: 0x3673aaab  ori         $s3, $s3, 0xAAAB
    ctx->pc = 0x39477cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)43691);
label_394780:
    // 0x394780: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x394780u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x394784: 0x54570016  bnel        $v0, $s7, . + 4 + (0x16 << 2)
    ctx->pc = 0x394784u;
    {
        const bool branch_taken_0x394784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x394784) {
            ctx->pc = 0x394788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394784u;
            // 0x394788: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3947E0u;
            goto label_3947e0;
        }
    }
    ctx->pc = 0x39478Cu;
    // 0x39478c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x39478cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x394790: 0xc0e959e  jal         func_3A5678
    ctx->pc = 0x394790u;
    SET_GPR_U32(ctx, 31, 0x394798u);
    ctx->pc = 0x394794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394790u;
    // 0x394794: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x394790u, 0x394798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394798u;
label_394798:
    // 0x394798: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x394798u;
    {
        const bool branch_taken_0x394798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x394798) {
            ctx->pc = 0x39479Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394798u;
            // 0x39479c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3947E0u;
            goto label_3947e0;
        }
    }
    ctx->pc = 0x3947A0u;
    // 0x3947a0: 0x9202000a  lbu         $v0, 0xA($s0)
    ctx->pc = 0x3947a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x3947a4: 0x50550004  beql        $v0, $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x3947A4u;
    {
        const bool branch_taken_0x3947a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x3947a4) {
            ctx->pc = 0x3947A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3947A4u;
            // 0x3947a8: 0x8e26000c  lw          $a2, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3947B8u;
            goto label_3947b8;
        }
    }
    ctx->pc = 0x3947ACu;
    // 0x3947ac: 0x5454000c  bnel        $v0, $s4, . + 4 + (0xC << 2)
    ctx->pc = 0x3947ACu;
    {
        const bool branch_taken_0x3947ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x3947ac) {
            ctx->pc = 0x3947B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3947ACu;
            // 0x3947b0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3947E0u;
            goto label_3947e0;
        }
    }
    ctx->pc = 0x3947B4u;
    // 0x3947b4: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x3947b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3947b8:
    // 0x3947b8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3947b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3947bc: 0x2063023  subu        $a2, $s0, $a2
    ctx->pc = 0x3947bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x3947c0: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x3947c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3947c4: 0xd33018  mult        $a2, $a2, $s3
    ctx->pc = 0x3947c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3947c8: 0xc0e50d2  jal         func_394348
    ctx->pc = 0x3947C8u;
    SET_GPR_U32(ctx, 31, 0x3947D0u);
    ctx->pc = 0x3947CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3947C8u;
    // 0x3947cc: 0x63083  sra         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394348u, 0x3947C8u, 0x3947D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3947D0u;
label_3947d0:
    // 0x3947d0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3947D0u;
    {
        const bool branch_taken_0x3947d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3947D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3947D0u;
        // 0x3947d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3947d0) {
            ctx->pc = 0x3947E8u;
            goto label_3947e8;
        }
    }
    ctx->pc = 0x3947D8u;
    // 0x3947d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3947D8u;
    {
        const bool branch_taken_0x3947d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3947DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3947D8u;
        // 0x3947dc: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3947d8) {
            ctx->pc = 0x3947FCu;
            goto label_3947fc;
        }
    }
    ctx->pc = 0x3947E0u;
label_3947e0:
    // 0x3947e0: 0x1640ffe7  bnez        $s2, . + 4 + (-0x19 << 2)
    ctx->pc = 0x3947E0u;
    {
        const bool branch_taken_0x3947e0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3947E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3947E0u;
        // 0x3947e4: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3947e0) {
            ctx->pc = 0x394780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_394780;
        }
    }
    ctx->pc = 0x3947E8u;
label_3947e8:
    // 0x3947e8: 0x8e310030  lw          $s1, 0x30($s1)
    ctx->pc = 0x3947e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x3947ec: 0x5620ffde  bnel        $s1, $zero, . + 4 + (-0x22 << 2)
    ctx->pc = 0x3947ECu;
    {
        const bool branch_taken_0x3947ec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3947ec) {
            ctx->pc = 0x3947F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3947ECu;
            // 0x3947f0: 0x8e320010  lw          $s2, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_394768;
        }
    }
    ctx->pc = 0x3947F4u;
    // 0x3947f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3947f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3947f8:
    // 0x3947f8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3947f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3947fc:
    // 0x3947fc: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3947fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x394800: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x394800u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x394804: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x394804u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x394808: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x394808u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x39480c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x39480cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x394810: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x394810u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x394814: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x394814u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x394818: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x394818u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39481c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39481cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x394820: 0x3e00008  jr          $ra
    ctx->pc = 0x394820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x394824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394820u;
        // 0x394824: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x394828u;
}
