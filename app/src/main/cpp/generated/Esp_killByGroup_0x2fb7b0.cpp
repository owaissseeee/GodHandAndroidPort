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

// Function: Esp_killByGroup
// Address: 0x2fb7b0 - 0x2fb898
void Esp_killByGroup_0x2fb7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Esp_killByGroup_0x2fb7b0");
#endif

    switch (ctx->pc) {
        case 0x2fb800u: goto label_2fb800;
        case 0x2fb860u: goto label_2fb860;
        default: break;
    }

    ctx->pc = 0x2fb7b0u;

    // 0x2fb7b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2fb7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2fb7b4: 0x3c020072  lui         $v0, 0x72
    ctx->pc = 0x2fb7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
    // 0x2fb7b8: 0x3c030072  lui         $v1, 0x72
    ctx->pc = 0x2fb7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)114 << 16));
    // 0x2fb7bc: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2fb7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2fb7c0: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x2fb7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x2fb7c4: 0x2475b840  addiu       $s5, $v1, -0x47C0
    ctx->pc = 0x2fb7c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948928));
    // 0x2fb7c8: 0x2456b7c0  addiu       $s6, $v0, -0x4840
    ctx->pc = 0x2fb7c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948800));
    // 0x2fb7cc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2fb7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2fb7d0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2fb7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2fb7d4: 0x3c020072  lui         $v0, 0x72
    ctx->pc = 0x2fb7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
    // 0x2fb7d8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2fb7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2fb7dc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x2fb7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x2fb7e0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2fb7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2fb7e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2fb7e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb7e8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2fb7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2fb7ec: 0x2471b7c0  addiu       $s1, $v1, -0x4840
    ctx->pc = 0x2fb7ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948800));
    // 0x2fb7f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fb7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fb7f4: 0x2454b8c0  addiu       $s4, $v0, -0x4740
    ctx->pc = 0x2fb7f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949056));
    // 0x2fb7f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2fb7f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb7fc: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x2fb7fcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
label_2fb800:
    // 0x2fb800: 0x101142  srl         $v0, $s0, 5
    ctx->pc = 0x2fb800u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
    // 0x2fb804: 0x3204001f  andi        $a0, $s0, 0x1F
    ctx->pc = 0x2fb804u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x2fb808: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x2fb808u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2fb80c: 0x932006  srlv        $a0, $s3, $a0
    ctx->pc = 0x2fb80cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 4) & 0x1F));
    // 0x2fb810: 0xb61821  addu        $v1, $a1, $s6
    ctx->pc = 0x2fb810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x2fb814: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fb814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fb818: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2fb818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2fb81c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2FB81Cu;
    {
        const bool branch_taken_0x2fb81c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB81Cu;
        // 0x2fb820: 0xb51821  addu        $v1, $a1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb81c) {
            ctx->pc = 0x2FB860u;
            goto label_2fb860;
        }
    }
    ctx->pc = 0x2FB824u;
    // 0x2fb824: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fb824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fb828: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2fb828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2fb82c: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2FB82Cu;
    {
        const bool branch_taken_0x2fb82c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb82c) {
            ctx->pc = 0x2FB830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB82Cu;
            // 0x2fb830: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB864u;
            goto label_2fb864;
        }
    }
    ctx->pc = 0x2FB834u;
    // 0x2fb834: 0xb41821  addu        $v1, $a1, $s4
    ctx->pc = 0x2fb834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x2fb838: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fb838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fb83c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2fb83cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2fb840: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FB840u;
    {
        const bool branch_taken_0x2fb840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb840) {
            ctx->pc = 0x2FB844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB840u;
            // 0x2fb844: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB864u;
            goto label_2fb864;
        }
    }
    ctx->pc = 0x2FB848u;
    // 0x2fb848: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x2fb848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x2fb84c: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x2fb84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x2fb850: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FB850u;
    {
        const bool branch_taken_0x2fb850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fb850) {
            ctx->pc = 0x2FB854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB850u;
            // 0x2fb854: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB864u;
            goto label_2fb864;
        }
    }
    ctx->pc = 0x2FB858u;
    // 0x2fb858: 0xc0bef94  jal         func_2FBE50
    ctx->pc = 0x2FB858u;
    SET_GPR_U32(ctx, 31, 0x2FB860u);
    ctx->pc = 0x2FB85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB858u;
    // 0x2fb85c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBE50u, 0x2FB858u, 0x2FB860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB860u;
label_2fb860:
    // 0x2fb860: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2fb860u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2fb864:
    // 0x2fb864: 0x2a020400  slti        $v0, $s0, 0x400
    ctx->pc = 0x2fb864u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x2fb868: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2FB868u;
    {
        const bool branch_taken_0x2fb868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB868u;
        // 0x2fb86c: 0x26310400  addiu       $s1, $s1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb868) {
            ctx->pc = 0x2FB800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fb800;
        }
    }
    ctx->pc = 0x2FB870u;
    // 0x2fb870: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2fb870u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2fb874: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2fb874u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2fb878: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2fb878u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2fb87c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2fb87cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2fb880: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2fb880u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fb884: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2fb884u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fb888: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x2fb888u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fb88c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fb88cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fb890: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB890u;
        // 0x2fb894: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB898u;
}
