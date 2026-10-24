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

// Function: EmitterAllKill
// Address: 0x300830 - 0x300900
void EmitterAllKill_0x300830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EmitterAllKill_0x300830");
#endif

    switch (ctx->pc) {
        case 0x300878u: goto label_300878;
        case 0x3008c8u: goto label_3008c8;
        default: break;
    }

    ctx->pc = 0x300830u;

    // 0x300830: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x300830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x300834: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x300834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x300838: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x300838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x30083c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x30083cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x300840: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x300840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x300844: 0x24741960  addiu       $s4, $v1, 0x1960
    ctx->pc = 0x300844u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 6496));
    // 0x300848: 0x24551940  addiu       $s5, $v0, 0x1940
    ctx->pc = 0x300848u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 6464));
    // 0x30084c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x30084cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x300850: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x300850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x300854: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x300854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x300858: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x300858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x30085c: 0x3c030072  lui         $v1, 0x72
    ctx->pc = 0x30085cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)114 << 16));
    // 0x300860: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x300860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x300864: 0x2471b940  addiu       $s1, $v1, -0x46C0
    ctx->pc = 0x300864u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949184));
    // 0x300868: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x300868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30086c: 0x24531980  addiu       $s3, $v0, 0x1980
    ctx->pc = 0x30086cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 6528));
    // 0x300870: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x300870u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300874: 0x3c128000  lui         $s2, 0x8000
    ctx->pc = 0x300874u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32768 << 16));
label_300878:
    // 0x300878: 0x101142  srl         $v0, $s0, 5
    ctx->pc = 0x300878u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
    // 0x30087c: 0x3204001f  andi        $a0, $s0, 0x1F
    ctx->pc = 0x30087cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x300880: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x300880u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x300884: 0x922006  srlv        $a0, $s2, $a0
    ctx->pc = 0x300884u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), GPR_U32(ctx, 4) & 0x1F));
    // 0x300888: 0xb51821  addu        $v1, $a1, $s5
    ctx->pc = 0x300888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    // 0x30088c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x30088cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x300890: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x300890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x300894: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x300894u;
    {
        const bool branch_taken_0x300894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x300898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300894u;
        // 0x300898: 0xb41821  addu        $v1, $a1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300894) {
            ctx->pc = 0x3008C8u;
            goto label_3008c8;
        }
    }
    ctx->pc = 0x30089Cu;
    // 0x30089c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x30089cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3008a0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x3008a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x3008a4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3008A4u;
    {
        const bool branch_taken_0x3008a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3008a4) {
            ctx->pc = 0x3008A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3008A4u;
            // 0x3008a8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3008CCu;
            goto label_3008cc;
        }
    }
    ctx->pc = 0x3008ACu;
    // 0x3008ac: 0xb31821  addu        $v1, $a1, $s3
    ctx->pc = 0x3008acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x3008b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3008b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3008b4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x3008b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x3008b8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3008B8u;
    {
        const bool branch_taken_0x3008b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3008b8) {
            ctx->pc = 0x3008BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3008B8u;
            // 0x3008bc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3008CCu;
            goto label_3008cc;
        }
    }
    ctx->pc = 0x3008C0u;
    // 0x3008c0: 0xc0c0a46  jal         func_302918
    ctx->pc = 0x3008C0u;
    SET_GPR_U32(ctx, 31, 0x3008C8u);
    ctx->pc = 0x3008C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3008C0u;
    // 0x3008c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302918u, 0x3008C0u, 0x3008C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3008C8u;
label_3008c8:
    // 0x3008c8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3008c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3008cc:
    // 0x3008cc: 0x2a020100  slti        $v0, $s0, 0x100
    ctx->pc = 0x3008ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x3008d0: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x3008D0u;
    {
        const bool branch_taken_0x3008d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3008D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3008D0u;
        // 0x3008d4: 0x26310260  addiu       $s1, $s1, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3008d0) {
            ctx->pc = 0x300878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_300878;
        }
    }
    ctx->pc = 0x3008D8u;
    // 0x3008d8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3008d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3008dc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3008dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3008e0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3008e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3008e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3008e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3008e8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3008e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3008ec: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x3008ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3008f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3008f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3008f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3008F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3008F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3008F4u;
        // 0x3008f8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3008F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3008FCu;
    // 0x3008fc: 0x0  nop
    ctx->pc = 0x3008fcu;
    // NOP
    ctx->pc = 0x300900u;
}
