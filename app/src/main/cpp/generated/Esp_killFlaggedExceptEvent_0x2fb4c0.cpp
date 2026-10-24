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

// Function: Esp_killFlaggedExceptEvent
// Address: 0x2fb4c0 - 0x2fb5c0
void Esp_killFlaggedExceptEvent_0x2fb4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Esp_killFlaggedExceptEvent_0x2fb4c0");
#endif

    switch (ctx->pc) {
        case 0x2fb510u: goto label_2fb510;
        case 0x2fb57cu: goto label_2fb57c;
        default: break;
    }

    ctx->pc = 0x2fb4c0u;

    // 0x2fb4c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2fb4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2fb4c4: 0x3c020072  lui         $v0, 0x72
    ctx->pc = 0x2fb4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
    // 0x2fb4c8: 0x3c030072  lui         $v1, 0x72
    ctx->pc = 0x2fb4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)114 << 16));
    // 0x2fb4cc: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2fb4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2fb4d0: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x2fb4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x2fb4d4: 0x2475b840  addiu       $s5, $v1, -0x47C0
    ctx->pc = 0x2fb4d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948928));
    // 0x2fb4d8: 0x2456b7c0  addiu       $s6, $v0, -0x4840
    ctx->pc = 0x2fb4d8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948800));
    // 0x2fb4dc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2fb4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2fb4e0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2fb4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2fb4e4: 0x3c020072  lui         $v0, 0x72
    ctx->pc = 0x2fb4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
    // 0x2fb4e8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2fb4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2fb4ec: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x2fb4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x2fb4f0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2fb4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2fb4f4: 0x2471b7c0  addiu       $s1, $v1, -0x4840
    ctx->pc = 0x2fb4f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948800));
    // 0x2fb4f8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2fb4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2fb4fc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2fb4fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb500: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fb500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fb504: 0x2454b8c0  addiu       $s4, $v0, -0x4740
    ctx->pc = 0x2fb504u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949056));
    // 0x2fb508: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x2fb508u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    // 0x2fb50c: 0x241200d7  addiu       $s2, $zero, 0xD7
    ctx->pc = 0x2fb50cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 215));
label_2fb510:
    // 0x2fb510: 0x101142  srl         $v0, $s0, 5
    ctx->pc = 0x2fb510u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
    // 0x2fb514: 0x3204001f  andi        $a0, $s0, 0x1F
    ctx->pc = 0x2fb514u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x2fb518: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x2fb518u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2fb51c: 0x932006  srlv        $a0, $s3, $a0
    ctx->pc = 0x2fb51cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 4) & 0x1F));
    // 0x2fb520: 0xb61821  addu        $v1, $a1, $s6
    ctx->pc = 0x2fb520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x2fb524: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fb524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fb528: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2fb528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2fb52c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2FB52Cu;
    {
        const bool branch_taken_0x2fb52c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB52Cu;
        // 0x2fb530: 0xb51821  addu        $v1, $a1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb52c) {
            ctx->pc = 0x2FB57Cu;
            goto label_2fb57c;
        }
    }
    ctx->pc = 0x2FB534u;
    // 0x2fb534: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fb534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fb538: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2fb538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2fb53c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2FB53Cu;
    {
        const bool branch_taken_0x2fb53c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb53c) {
            ctx->pc = 0x2FB540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB53Cu;
            // 0x2fb540: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB580u;
            goto label_2fb580;
        }
    }
    ctx->pc = 0x2FB544u;
    // 0x2fb544: 0xb41821  addu        $v1, $a1, $s4
    ctx->pc = 0x2fb544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x2fb548: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fb548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fb54c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2fb54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2fb550: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2FB550u;
    {
        const bool branch_taken_0x2fb550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb550) {
            ctx->pc = 0x2FB554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB550u;
            // 0x2fb554: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB580u;
            goto label_2fb580;
        }
    }
    ctx->pc = 0x2FB558u;
    // 0x2fb558: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x2fb558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x2fb55c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2fb55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2fb560: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FB560u;
    {
        const bool branch_taken_0x2fb560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fb560) {
            ctx->pc = 0x2FB564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB560u;
            // 0x2fb564: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB580u;
            goto label_2fb580;
        }
    }
    ctx->pc = 0x2FB568u;
    // 0x2fb568: 0x8622023a  lh          $v0, 0x23A($s1)
    ctx->pc = 0x2fb568u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 570)));
    // 0x2fb56c: 0x50520004  beql        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FB56Cu;
    {
        const bool branch_taken_0x2fb56c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x2fb56c) {
            ctx->pc = 0x2FB570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB56Cu;
            // 0x2fb570: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB580u;
            goto label_2fb580;
        }
    }
    ctx->pc = 0x2FB574u;
    // 0x2fb574: 0xc0bef94  jal         func_2FBE50
    ctx->pc = 0x2FB574u;
    SET_GPR_U32(ctx, 31, 0x2FB57Cu);
    ctx->pc = 0x2FB578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB574u;
    // 0x2fb578: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBE50u, 0x2FB574u, 0x2FB57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB57Cu;
label_2fb57c:
    // 0x2fb57c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2fb57cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2fb580:
    // 0x2fb580: 0x2a020400  slti        $v0, $s0, 0x400
    ctx->pc = 0x2fb580u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x2fb584: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x2FB584u;
    {
        const bool branch_taken_0x2fb584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB584u;
        // 0x2fb588: 0x26310400  addiu       $s1, $s1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb584) {
            ctx->pc = 0x2FB510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fb510;
        }
    }
    ctx->pc = 0x2FB58Cu;
    // 0x2fb58c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2fb58cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2fb590: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2fb590u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2fb594: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2fb594u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2fb598: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2fb598u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2fb59c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2fb59cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fb5a0: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2fb5a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fb5a4: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x2fb5a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fb5a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fb5a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fb5ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB5ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB5ACu;
        // 0x2fb5b0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB5ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB5B4u;
    // 0x2fb5b4: 0x0  nop
    ctx->pc = 0x2fb5b4u;
    // NOP
    // 0x2fb5b8: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x2fb5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2fb5bc: 0x0  nop
    ctx->pc = 0x2fb5bcu;
    // NOP
    ctx->pc = 0x2fb5c0u;
}
