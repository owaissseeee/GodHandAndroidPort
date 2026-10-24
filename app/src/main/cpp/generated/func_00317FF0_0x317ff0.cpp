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

// Function: func_00317FF0
// Address: 0x317ff0 - 0x318138
void func_00317FF0_0x317ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00317FF0_0x317ff0");
#endif

    switch (ctx->pc) {
        case 0x318064u: goto label_318064;
        case 0x31809cu: goto label_31809c;
        case 0x3180bcu: goto label_3180bc;
        case 0x3180f0u: goto label_3180f0;
        case 0x318104u: goto label_318104;
        default: break;
    }

    ctx->pc = 0x317ff0u;

    // 0x317ff0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x317ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x317ff4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x317ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x317ff8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x317ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x317ffc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x317ffcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318000: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x318000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x318004: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x318004u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318008: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x318008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x31800c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x31800cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x318010: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x318010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x318014: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x318014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x318018: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x318018u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31801c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x31801cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x318020: 0x10e20012  beq         $a3, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x318020u;
    {
        const bool branch_taken_0x318020 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x318024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318020u;
        // 0x318024: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318020) {
            ctx->pc = 0x31806Cu;
            goto label_31806c;
        }
    }
    ctx->pc = 0x318028u;
    // 0x318028: 0x50e00004  beql        $a3, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x318028u;
    {
        const bool branch_taken_0x318028 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x318028) {
            ctx->pc = 0x31802Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318028u;
            // 0x31802c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31803Cu;
            goto label_31803c;
        }
    }
    ctx->pc = 0x318030u;
    // 0x318030: 0x8ce2fffc  lw          $v0, -0x4($a3)
    ctx->pc = 0x318030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967292)));
    // 0x318034: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x318034u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x318038: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x318038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_31803c:
    // 0x31803c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x31803cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318040: 0x2486fffc  addiu       $a2, $a0, -0x4
    ctx->pc = 0x318040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x318044: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x318044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x318048: 0xd33023  subu        $a2, $a2, $s3
    ctx->pc = 0x318048u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x31804c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x31804cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x318050: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x318050u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
    // 0x318054: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x318054u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x318058: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x318058u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x31805c: 0xc0e947d  jal         func_3A51F4
    ctx->pc = 0x31805Cu;
    SET_GPR_U32(ctx, 31, 0x318064u);
    ctx->pc = 0x318060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31805Cu;
    // 0x318060: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A51F4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A51F4u, 0x31805Cu, 0x318064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318064u;
label_318064:
    // 0x318064: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x318064u;
    {
        const bool branch_taken_0x318064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318064u;
        // 0x318068: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318064) {
            ctx->pc = 0x318114u;
            goto label_318114;
        }
    }
    ctx->pc = 0x31806Cu;
label_31806c:
    // 0x31806c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x31806cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x318070: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x318070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x318074: 0x8c463cf0  lw          $a2, 0x3CF0($v0)
    ctx->pc = 0x318074u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C3CF0u));
    // 0x318078: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x318078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31807c: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x31807cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x318080: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x318080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x318084: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x318084u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x318088: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x318088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x31808c: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x31808cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x318090: 0x4a080  sll         $s4, $a0, 2
    ctx->pc = 0x318090u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x318094: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x318094u;
    SET_GPR_U32(ctx, 31, 0x31809Cu);
    ctx->pc = 0x318098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318094u;
    // 0x318098: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x318094u, 0x31809Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31809Cu;
label_31809c:
    // 0x31809c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x31809cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3180a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3180a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3180a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3180a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3180a8: 0x2651023  subu        $v0, $s3, $a1
    ctx->pc = 0x3180a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x3180ac: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x3180acu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
    // 0x3180b0: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x3180b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3180b4: 0xc0e947d  jal         func_3A51F4
    ctx->pc = 0x3180B4u;
    SET_GPR_U32(ctx, 31, 0x3180BCu);
    ctx->pc = 0x3180B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3180B4u;
    // 0x3180b8: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A51F4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A51F4u, 0x3180B4u, 0x3180BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3180BCu;
label_3180bc:
    // 0x3180bc: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3180BCu;
    {
        const bool branch_taken_0x3180bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3180bc) {
            ctx->pc = 0x3180C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3180BCu;
            // 0x3180c0: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3180D0u;
            goto label_3180d0;
        }
    }
    ctx->pc = 0x3180C4u;
    // 0x3180c4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x3180c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3180c8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3180c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3180cc: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3180ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3180d0:
    // 0x3180d0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x3180d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x3180d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3180d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3180d8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3180d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3180dc: 0xd33023  subu        $a2, $a2, $s3
    ctx->pc = 0x3180dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x3180e0: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x3180e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x3180e4: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x3180e4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
    // 0x3180e8: 0xc0e947d  jal         func_3A51F4
    ctx->pc = 0x3180E8u;
    SET_GPR_U32(ctx, 31, 0x3180F0u);
    ctx->pc = 0x3180ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3180E8u;
    // 0x3180ec: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A51F4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A51F4u, 0x3180E8u, 0x3180F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3180F0u;
label_3180f0:
    // 0x3180f0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x3180f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3180f4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3180F4u;
    {
        const bool branch_taken_0x3180f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3180F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3180F4u;
        // 0x3180f8: 0x2541021  addu        $v0, $s2, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3180f4) {
            ctx->pc = 0x318108u;
            goto label_318108;
        }
    }
    ctx->pc = 0x3180FCu;
    // 0x3180fc: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x3180FCu;
    SET_GPR_U32(ctx, 31, 0x318104u);
    ctx->pc = 0x318100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3180FCu;
    // 0x318100: 0x8ca4ffe0  lw          $a0, -0x20($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x3180FCu, 0x318104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318104u;
label_318104:
    // 0x318104: 0x2541021  addu        $v0, $s2, $s4
    ctx->pc = 0x318104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_318108:
    // 0x318108: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x318108u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
    // 0x31810c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x31810cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x318110: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x318110u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
label_318114:
    // 0x318114: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x318114u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x318118: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x318118u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31811c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x31811cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x318120: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x318120u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x318124: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x318124u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x318128: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x318128u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31812c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31812cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x318130: 0x3e00008  jr          $ra
    ctx->pc = 0x318130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x318134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318130u;
        // 0x318134: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x318130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x318138u;
}
