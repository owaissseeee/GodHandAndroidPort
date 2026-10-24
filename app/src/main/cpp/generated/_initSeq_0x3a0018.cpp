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

// Function: _initSeq
// Address: 0x3a0018 - 0x3a0330
void _initSeq_0x3a0018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_initSeq_0x3a0018");
#endif

    switch (ctx->pc) {
        case 0x3a00f8u: goto label_3a00f8;
        case 0x3a010cu: goto label_3a010c;
        case 0x3a0124u: goto label_3a0124;
        case 0x3a013cu: goto label_3a013c;
        default: break;
    }

    ctx->pc = 0x3a0018u;

    // 0x3a0018: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3a0018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3a001c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x3a001cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x3a0020: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3a0020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3a0024: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3a0024u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0028: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x3a0028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x3a002c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x3a002cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x3a0030: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3a0030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x3a0034: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3a0034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3a0038: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a0038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a003c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3a003cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3a0040: 0x8e720040  lw          $s2, 0x40($s3)
    ctx->pc = 0x3a0040u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x3a0044: 0x8e450858  lw          $a1, 0x858($s2)
    ctx->pc = 0x3a0044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2136)));
    // 0x3a0048: 0x54a0000b  bnel        $a1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x3A0048u;
    {
        const bool branch_taken_0x3a0048 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a0048) {
            ctx->pc = 0x3A004Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0048u;
            // 0x3a004c: 0x8e420134  lw          $v0, 0x134($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 308)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A0078u;
            goto label_3a0078;
        }
    }
    ctx->pc = 0x3A0050u;
    // 0x3a0050: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a0050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a0054: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3a0054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a0058: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x3a0058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3a005c: 0xae430184  sw          $v1, 0x184($s2)
    ctx->pc = 0x3a005cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 388), GPR_U32(ctx, 3));
    // 0x3a0060: 0xae42018c  sw          $v0, 0x18C($s2)
    ctx->pc = 0x3a0060u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 396), GPR_U32(ctx, 2));
    // 0x3a0064: 0xae440154  sw          $a0, 0x154($s2)
    ctx->pc = 0x3a0064u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 4));
    // 0x3a0068: 0xae42014c  sw          $v0, 0x14C($s2)
    ctx->pc = 0x3a0068u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 332), GPR_U32(ctx, 2));
    // 0x3a006c: 0xae420150  sw          $v0, 0x150($s2)
    ctx->pc = 0x3a006cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 336), GPR_U32(ctx, 2));
    // 0x3a0070: 0xae420198  sw          $v0, 0x198($s2)
    ctx->pc = 0x3a0070u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 408), GPR_U32(ctx, 2));
    // 0x3a0074: 0x8e420134  lw          $v0, 0x134($s2)
    ctx->pc = 0x3a0074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 308)));
label_3a0078:
    // 0x3a0078: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x3a0078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x3a007c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x3a007cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x3a0080: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A0080u;
    {
        const bool branch_taken_0x3a0080 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0080u;
        // 0x3a0084: 0xae42013c  sw          $v0, 0x13C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0080) {
            ctx->pc = 0x3A00A4u;
            goto label_3a00a4;
        }
    }
    ctx->pc = 0x3A0088u;
    // 0x3a0088: 0x8e42014c  lw          $v0, 0x14C($s2)
    ctx->pc = 0x3a0088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 332)));
    // 0x3a008c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A008Cu;
    {
        const bool branch_taken_0x3a008c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A0090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A008Cu;
        // 0x3a0090: 0x8e420138  lw          $v0, 0x138($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a008c) {
            ctx->pc = 0x3A00A8u;
            goto label_3a00a8;
        }
    }
    ctx->pc = 0x3A0094u;
    // 0x3a0094: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x3a0094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x3a0098: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x3a0098u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x3a009c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3A009Cu;
    {
        const bool branch_taken_0x3a009c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A00A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A009Cu;
        // 0x3a00a0: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a009c) {
            ctx->pc = 0x3A00B0u;
            goto label_3a00b0;
        }
    }
    ctx->pc = 0x3A00A4u;
label_3a00a4:
    // 0x3a00a4: 0x8e420138  lw          $v0, 0x138($s2)
    ctx->pc = 0x3a00a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 312)));
label_3a00a8:
    // 0x3a00a8: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x3a00a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x3a00ac: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x3a00acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_3a00b0:
    // 0x3a00b0: 0xae420140  sw          $v0, 0x140($s2)
    ctx->pc = 0x3a00b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 320), GPR_U32(ctx, 2));
    // 0x3a00b4: 0x2a900  sll         $s5, $v0, 4
    ctx->pc = 0x3a00b4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a00b8: 0x8e42013c  lw          $v0, 0x13C($s2)
    ctx->pc = 0x3a00b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 316)));
    // 0x3a00bc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3a00bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3a00c0: 0x2a100  sll         $s4, $v0, 4
    ctx->pc = 0x3a00c0u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a00c4: 0x16830004  bne         $s4, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A00C4u;
    {
        const bool branch_taken_0x3a00c4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x3A00C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A00C4u;
        // 0x3a00c8: 0x24160180  addiu       $s6, $zero, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a00c4) {
            ctx->pc = 0x3A00D8u;
            goto label_3a00d8;
        }
    }
    ctx->pc = 0x3A00CCu;
    // 0x3a00cc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x3a00ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3a00d0: 0x12a2008d  beq         $s5, $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x3A00D0u;
    {
        const bool branch_taken_0x3a00d0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A00D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A00D0u;
        // 0x3a00d4: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a00d0) {
            ctx->pc = 0x3A0308u;
            goto label_3a0308;
        }
    }
    ctx->pc = 0x3A00D8u;
label_3a00d8:
    // 0x3a00d8: 0x26510118  addiu       $s1, $s2, 0x118
    ctx->pc = 0x3a00d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 280));
    // 0x3a00dc: 0x2b68018  mult        $s0, $s5, $s6
    ctx->pc = 0x3a00dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x3a00e0: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x3a00e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x3a00e4: 0xae750004  sw          $s5, 0x4($s3)
    ctx->pc = 0x3a00e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 21));
    // 0x3a00e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a00e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a00ec: 0x2908018  mult        $s0, $s4, $s0
    ctx->pc = 0x3a00ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x3a00f0: 0xc0e6b74  jal         func_39ADD0
    ctx->pc = 0x3A00F0u;
    SET_GPR_U32(ctx, 31, 0x3A00F8u);
    ctx->pc = 0x3A00F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A00F0u;
    // 0x3a00f4: 0x108202  srl         $s0, $s0, 8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39ADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39ADD0u, 0x3A00F0u, 0x3A00F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A00F8u;
label_3a00f8:
    // 0x3a00f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a00f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a00fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a00fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0100: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3a0100u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0104: 0xc0e6b78  jal         func_39ADE0
    ctx->pc = 0x3A0104u;
    SET_GPR_U32(ctx, 31, 0x3A010Cu);
    ctx->pc = 0x3A0108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0104u;
    // 0x3a0108: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39ADE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39ADE0u, 0x3A0104u, 0x3A010Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A010Cu;
label_3a010c:
    // 0x3a010c: 0xae42010c  sw          $v0, 0x10C($s2)
    ctx->pc = 0x3a010cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 2));
    // 0x3a0110: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a0110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0114: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a0114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0118: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3a0118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a011c: 0xc0e6b78  jal         func_39ADE0
    ctx->pc = 0x3A011Cu;
    SET_GPR_U32(ctx, 31, 0x3A0124u);
    ctx->pc = 0x3A0120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A011Cu;
    // 0x3a0120: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39ADE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39ADE0u, 0x3A011Cu, 0x3A0124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0124u;
label_3a0124:
    // 0x3a0124: 0xae420110  sw          $v0, 0x110($s2)
    ctx->pc = 0x3a0124u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 272), GPR_U32(ctx, 2));
    // 0x3a0128: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a0128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a012c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3a012cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0130: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a0130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0134: 0xc0e6b78  jal         func_39ADE0
    ctx->pc = 0x3A0134u;
    SET_GPR_U32(ctx, 31, 0x3A013Cu);
    ctx->pc = 0x3A0138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0134u;
    // 0x3a0138: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39ADE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39ADE0u, 0x3A0134u, 0x3A013Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A013Cu;
label_3a013c:
    // 0x3a013c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3a013cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0140: 0x8e43087c  lw          $v1, 0x87C($s2)
    ctx->pc = 0x3a0140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2172)));
    // 0x3a0144: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x3A0144u;
    {
        const bool branch_taken_0x3a0144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A0148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0144u;
        // 0x3a0148: 0xae480114  sw          $t0, 0x114($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0144) {
            ctx->pc = 0x3A01D0u;
            goto label_3a01d0;
        }
    }
    ctx->pc = 0x3A014Cu;
    // 0x3a014c: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x3a014cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3a0150: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x3a0150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x3a0154: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x3a0154u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3a0158: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a0158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a015c: 0x8e45010c  lw          $a1, 0x10C($s2)
    ctx->pc = 0x3a015cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
    // 0x3a0160: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x3a0160u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x3a0164: 0xc43018  mult        $a2, $a2, $a0
    ctx->pc = 0x3a0164u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3a0168: 0x8e430110  lw          $v1, 0x110($s2)
    ctx->pc = 0x3a0168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
    // 0x3a016c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x3a016cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x3a0170: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x3a0170u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a0174: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3a0174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3a0178: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x3a0178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x3a017c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x3a017cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x3a0180: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3a0180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3a0184: 0xe6382a  slt         $a3, $a3, $a2
    ctx->pc = 0x3a0184u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3a0188: 0x24c201ff  addiu       $v0, $a2, 0x1FF
    ctx->pc = 0x3a0188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 511));
    // 0x3a018c: 0xc7100b  movn        $v0, $a2, $a3
    ctx->pc = 0x3a018cu;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x3a0190: 0x1044025  or          $t0, $t0, $a0
    ctx->pc = 0x3a0190u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x3a0194: 0x21243  sra         $v0, $v0, 9
    ctx->pc = 0x3a0194u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 9));
    // 0x3a0198: 0xae4501f8  sw          $a1, 0x1F8($s2)
    ctx->pc = 0x3a0198u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 504), GPR_U32(ctx, 5));
    // 0x3a019c: 0x561018  mult        $v0, $v0, $s6
    ctx->pc = 0x3a019cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3a01a0: 0xae430260  sw          $v1, 0x260($s2)
    ctx->pc = 0x3a01a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 3));
    // 0x3a01a4: 0xae450330  sw          $a1, 0x330($s2)
    ctx->pc = 0x3a01a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 816), GPR_U32(ctx, 5));
    // 0x3a01a8: 0xae430398  sw          $v1, 0x398($s2)
    ctx->pc = 0x3a01a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 920), GPR_U32(ctx, 3));
    // 0x3a01ac: 0xae4802c8  sw          $t0, 0x2C8($s2)
    ctx->pc = 0x3a01acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 712), GPR_U32(ctx, 8));
    // 0x3a01b0: 0x1022021  addu        $a0, $t0, $v0
    ctx->pc = 0x3a01b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x3a01b4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3a01b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3a01b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a01b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a01bc: 0xae450468  sw          $a1, 0x468($s2)
    ctx->pc = 0x3a01bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1128), GPR_U32(ctx, 5));
    // 0x3a01c0: 0xae4304d0  sw          $v1, 0x4D0($s2)
    ctx->pc = 0x3a01c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1232), GPR_U32(ctx, 3));
    // 0x3a01c4: 0xae440538  sw          $a0, 0x538($s2)
    ctx->pc = 0x3a01c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1336), GPR_U32(ctx, 4));
    // 0x3a01c8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x3A01C8u;
    {
        const bool branch_taken_0x3a01c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A01CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A01C8u;
        // 0x3a01cc: 0xae480400  sw          $t0, 0x400($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1024), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a01c8) {
            ctx->pc = 0x3A0238u;
            goto label_3a0238;
        }
    }
    ctx->pc = 0x3A01D0u;
label_3a01d0:
    // 0x3a01d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a01d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a01d4: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3A01D4u;
    {
        const bool branch_taken_0x3a01d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A01D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A01D4u;
        // 0x3a01d8: 0x143103  sra         $a2, $s4, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a01d4) {
            ctx->pc = 0x3A023Cu;
            goto label_3a023c;
        }
    }
    ctx->pc = 0x3A01DCu;
    // 0x3a01dc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x3a01dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3a01e0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3a01e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a01e4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3a01e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3a01e8: 0x8e46010c  lw          $a2, 0x10C($s2)
    ctx->pc = 0x3a01e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
    // 0x3a01ec: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x3a01ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3a01f0: 0x8e450110  lw          $a1, 0x110($s2)
    ctx->pc = 0x3a01f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
    // 0x3a01f4: 0xae4601f8  sw          $a2, 0x1F8($s2)
    ctx->pc = 0x3a01f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 504), GPR_U32(ctx, 6));
    // 0x3a01f8: 0xae450260  sw          $a1, 0x260($s2)
    ctx->pc = 0x3a01f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 5));
    // 0x3a01fc: 0xae460330  sw          $a2, 0x330($s2)
    ctx->pc = 0x3a01fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 816), GPR_U32(ctx, 6));
    // 0x3a0200: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x3a0200u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3a0204: 0x246201ff  addiu       $v0, $v1, 0x1FF
    ctx->pc = 0x3a0204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 511));
    // 0x3a0208: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x3a0208u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x3a020c: 0xae450398  sw          $a1, 0x398($s2)
    ctx->pc = 0x3a020cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 920), GPR_U32(ctx, 5));
    // 0x3a0210: 0x21243  sra         $v0, $v0, 9
    ctx->pc = 0x3a0210u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 9));
    // 0x3a0214: 0xae4802c8  sw          $t0, 0x2C8($s2)
    ctx->pc = 0x3a0214u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 712), GPR_U32(ctx, 8));
    // 0x3a0218: 0x561018  mult        $v0, $v0, $s6
    ctx->pc = 0x3a0218u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3a021c: 0xae480400  sw          $t0, 0x400($s2)
    ctx->pc = 0x3a021cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1024), GPR_U32(ctx, 8));
    // 0x3a0220: 0x1021821  addu        $v1, $t0, $v0
    ctx->pc = 0x3a0220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x3a0224: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x3a0224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3a0228: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3a0228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3a022c: 0xae460468  sw          $a2, 0x468($s2)
    ctx->pc = 0x3a022cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1128), GPR_U32(ctx, 6));
    // 0x3a0230: 0xae4504d0  sw          $a1, 0x4D0($s2)
    ctx->pc = 0x3a0230u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1232), GPR_U32(ctx, 5));
    // 0x3a0234: 0xae430538  sw          $v1, 0x538($s2)
    ctx->pc = 0x3a0234u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1336), GPR_U32(ctx, 3));
label_3a0238:
    // 0x3a0238: 0x143103  sra         $a2, $s4, 4
    ctx->pc = 0x3a0238u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 20), 4));
label_3a023c:
    // 0x3a023c: 0x264201f8  addiu       $v0, $s2, 0x1F8
    ctx->pc = 0x3a023cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 504));
    // 0x3a0240: 0x153903  sra         $a3, $s5, 4
    ctx->pc = 0x3a0240u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 21), 4));
    // 0x3a0244: 0x1527c2  srl         $a0, $s5, 31
    ctx->pc = 0x3a0244u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 21), 31));
    // 0x3a0248: 0xac470010  sw          $a3, 0x10($v0)
    ctx->pc = 0x3a0248u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 7));
    // 0x3a024c: 0x26430260  addiu       $v1, $s2, 0x260
    ctx->pc = 0x3a024cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 608));
    // 0x3a0250: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x3a0250u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
    // 0x3a0254: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x3a0254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x3a0258: 0xac550008  sw          $s5, 0x8($v0)
    ctx->pc = 0x3a0258u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 21));
    // 0x3a025c: 0x45143  sra         $t2, $a0, 5
    ctx->pc = 0x3a025cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 4), 5));
    // 0x3a0260: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x3a0260u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x3a0264: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x3a0264u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x3a0268: 0xac670010  sw          $a3, 0x10($v1)
    ctx->pc = 0x3a0268u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 7));
    // 0x3a026c: 0x264202c8  addiu       $v0, $s2, 0x2C8
    ctx->pc = 0x3a026cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 712));
    // 0x3a0270: 0xac740004  sw          $s4, 0x4($v1)
    ctx->pc = 0x3a0270u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 20));
    // 0x3a0274: 0x26450330  addiu       $a1, $s2, 0x330
    ctx->pc = 0x3a0274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 816));
    // 0x3a0278: 0xac750008  sw          $s5, 0x8($v1)
    ctx->pc = 0x3a0278u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 21));
    // 0x3a027c: 0x26480468  addiu       $t0, $s2, 0x468
    ctx->pc = 0x3a027cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 1128));
    // 0x3a0280: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x3a0280u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    // 0x3a0284: 0x264904d0  addiu       $t1, $s2, 0x4D0
    ctx->pc = 0x3a0284u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 1232));
    // 0x3a0288: 0xac470010  sw          $a3, 0x10($v0)
    ctx->pc = 0x3a0288u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 7));
    // 0x3a028c: 0x26430398  addiu       $v1, $s2, 0x398
    ctx->pc = 0x3a028cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 920));
    // 0x3a0290: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x3a0290u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
    // 0x3a0294: 0x26470400  addiu       $a3, $s2, 0x400
    ctx->pc = 0x3a0294u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 1024));
    // 0x3a0298: 0xac550008  sw          $s5, 0x8($v0)
    ctx->pc = 0x3a0298u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 21));
    // 0x3a029c: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x3a029cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x3a02a0: 0xacaa0010  sw          $t2, 0x10($a1)
    ctx->pc = 0x3a02a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 10));
    // 0x3a02a4: 0x26420538  addiu       $v0, $s2, 0x538
    ctx->pc = 0x3a02a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1336));
    // 0x3a02a8: 0xacb40004  sw          $s4, 0x4($a1)
    ctx->pc = 0x3a02a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 20));
    // 0x3a02ac: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x3a02acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x3a02b0: 0xaca6000c  sw          $a2, 0xC($a1)
    ctx->pc = 0x3a02b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 6));
    // 0x3a02b4: 0xac6a0010  sw          $t2, 0x10($v1)
    ctx->pc = 0x3a02b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 10));
    // 0x3a02b8: 0xac740004  sw          $s4, 0x4($v1)
    ctx->pc = 0x3a02b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 20));
    // 0x3a02bc: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x3a02bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x3a02c0: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x3a02c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    // 0x3a02c4: 0xacea0010  sw          $t2, 0x10($a3)
    ctx->pc = 0x3a02c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 10));
    // 0x3a02c8: 0xacf40004  sw          $s4, 0x4($a3)
    ctx->pc = 0x3a02c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 20));
    // 0x3a02cc: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x3a02ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
    // 0x3a02d0: 0xace6000c  sw          $a2, 0xC($a3)
    ctx->pc = 0x3a02d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 6));
    // 0x3a02d4: 0xad0a0010  sw          $t2, 0x10($t0)
    ctx->pc = 0x3a02d4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 10));
    // 0x3a02d8: 0xad140004  sw          $s4, 0x4($t0)
    ctx->pc = 0x3a02d8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 20));
    // 0x3a02dc: 0xad040008  sw          $a0, 0x8($t0)
    ctx->pc = 0x3a02dcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 4));
    // 0x3a02e0: 0xad06000c  sw          $a2, 0xC($t0)
    ctx->pc = 0x3a02e0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 6));
    // 0x3a02e4: 0xad2a0010  sw          $t2, 0x10($t1)
    ctx->pc = 0x3a02e4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 10));
    // 0x3a02e8: 0xad340004  sw          $s4, 0x4($t1)
    ctx->pc = 0x3a02e8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 20));
    // 0x3a02ec: 0xad240008  sw          $a0, 0x8($t1)
    ctx->pc = 0x3a02ecu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 4));
    // 0x3a02f0: 0xad26000c  sw          $a2, 0xC($t1)
    ctx->pc = 0x3a02f0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 6));
    // 0x3a02f4: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x3a02f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
    // 0x3a02f8: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x3a02f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x3a02fc: 0xac4a0010  sw          $t2, 0x10($v0)
    ctx->pc = 0x3a02fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 10));
    // 0x3a0300: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x3a0300u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x3a0304: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3a0304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3a0308:
    // 0x3a0308: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x3a0308u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3a030c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x3a030cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3a0310: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x3a0310u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a0314: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x3a0314u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a0318: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3a0318u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a031c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3a031cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a0320: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a0320u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a0324: 0x3e00008  jr          $ra
    ctx->pc = 0x3A0324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A0328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0324u;
        // 0x3a0328: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A0324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A032Cu;
    // 0x3a032c: 0x0  nop
    ctx->pc = 0x3a032cu;
    // NOP
    ctx->pc = 0x3a0330u;
}
