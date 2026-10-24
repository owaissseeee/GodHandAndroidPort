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

// Function: Esp_killByGroupNumber
// Address: 0x2fb6c8 - 0x2fb7b0
void Esp_killByGroupNumber_0x2fb6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Esp_killByGroupNumber_0x2fb6c8");
#endif

    switch (ctx->pc) {
        case 0x2fb718u: goto label_2fb718;
        case 0x2fb774u: goto label_2fb774;
        default: break;
    }

    ctx->pc = 0x2fb6c8u;

    // 0x2fb6c8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2fb6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2fb6cc: 0x3c020072  lui         $v0, 0x72
    ctx->pc = 0x2fb6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
    // 0x2fb6d0: 0x3c030072  lui         $v1, 0x72
    ctx->pc = 0x2fb6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)114 << 16));
    // 0x2fb6d4: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2fb6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2fb6d8: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x2fb6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x2fb6dc: 0x2475b840  addiu       $s5, $v1, -0x47C0
    ctx->pc = 0x2fb6dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948928));
    // 0x2fb6e0: 0x2456b7c0  addiu       $s6, $v0, -0x4840
    ctx->pc = 0x2fb6e0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948800));
    // 0x2fb6e4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2fb6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2fb6e8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2fb6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2fb6ec: 0x3c020072  lui         $v0, 0x72
    ctx->pc = 0x2fb6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
    // 0x2fb6f0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2fb6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2fb6f4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x2fb6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x2fb6f8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2fb6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2fb6fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2fb6fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb700: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2fb700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2fb704: 0x2471b7c0  addiu       $s1, $v1, -0x4840
    ctx->pc = 0x2fb704u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948800));
    // 0x2fb708: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fb708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fb70c: 0x2454b8c0  addiu       $s4, $v0, -0x4740
    ctx->pc = 0x2fb70cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949056));
    // 0x2fb710: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2fb710u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb714: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x2fb714u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
label_2fb718:
    // 0x2fb718: 0x101142  srl         $v0, $s0, 5
    ctx->pc = 0x2fb718u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
    // 0x2fb71c: 0x3204001f  andi        $a0, $s0, 0x1F
    ctx->pc = 0x2fb71cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x2fb720: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x2fb720u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2fb724: 0x932006  srlv        $a0, $s3, $a0
    ctx->pc = 0x2fb724u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 4) & 0x1F));
    // 0x2fb728: 0xb61821  addu        $v1, $a1, $s6
    ctx->pc = 0x2fb728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x2fb72c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fb72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fb730: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2fb730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2fb734: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2FB734u;
    {
        const bool branch_taken_0x2fb734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB734u;
        // 0x2fb738: 0xb51821  addu        $v1, $a1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb734) {
            ctx->pc = 0x2FB774u;
            goto label_2fb774;
        }
    }
    ctx->pc = 0x2FB73Cu;
    // 0x2fb73c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fb73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fb740: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2fb740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2fb744: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2FB744u;
    {
        const bool branch_taken_0x2fb744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb744) {
            ctx->pc = 0x2FB748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB744u;
            // 0x2fb748: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB778u;
            goto label_2fb778;
        }
    }
    ctx->pc = 0x2FB74Cu;
    // 0x2fb74c: 0xb41821  addu        $v1, $a1, $s4
    ctx->pc = 0x2fb74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x2fb750: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fb750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fb754: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2fb754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2fb758: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FB758u;
    {
        const bool branch_taken_0x2fb758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb758) {
            ctx->pc = 0x2FB75Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB758u;
            // 0x2fb75c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB778u;
            goto label_2fb778;
        }
    }
    ctx->pc = 0x2FB760u;
    // 0x2fb760: 0x8622023a  lh          $v0, 0x23A($s1)
    ctx->pc = 0x2fb760u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 570)));
    // 0x2fb764: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FB764u;
    {
        const bool branch_taken_0x2fb764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2fb764) {
            ctx->pc = 0x2FB768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB764u;
            // 0x2fb768: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB778u;
            goto label_2fb778;
        }
    }
    ctx->pc = 0x2FB76Cu;
    // 0x2fb76c: 0xc0bef94  jal         func_2FBE50
    ctx->pc = 0x2FB76Cu;
    SET_GPR_U32(ctx, 31, 0x2FB774u);
    ctx->pc = 0x2FB770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB76Cu;
    // 0x2fb770: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBE50u, 0x2FB76Cu, 0x2FB774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB774u;
label_2fb774:
    // 0x2fb774: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2fb774u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2fb778:
    // 0x2fb778: 0x2a020400  slti        $v0, $s0, 0x400
    ctx->pc = 0x2fb778u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x2fb77c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2FB77Cu;
    {
        const bool branch_taken_0x2fb77c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB77Cu;
        // 0x2fb780: 0x26310400  addiu       $s1, $s1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb77c) {
            ctx->pc = 0x2FB718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fb718;
        }
    }
    ctx->pc = 0x2FB784u;
    // 0x2fb784: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2fb784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2fb788: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2fb788u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2fb78c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2fb78cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2fb790: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2fb790u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2fb794: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2fb794u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fb798: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2fb798u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fb79c: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x2fb79cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fb7a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fb7a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fb7a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB7A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB7A4u;
        // 0x2fb7a8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB7A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB7ACu;
    // 0x2fb7ac: 0x0  nop
    ctx->pc = 0x2fb7acu;
    // NOP
    ctx->pc = 0x2fb7b0u;
}
