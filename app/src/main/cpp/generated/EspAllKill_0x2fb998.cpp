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

// Function: EspAllKill
// Address: 0x2fb998 - 0x2fba60
void EspAllKill_0x2fb998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EspAllKill_0x2fb998");
#endif

    switch (ctx->pc) {
        case 0x2fb9e0u: goto label_2fb9e0;
        case 0x2fba30u: goto label_2fba30;
        default: break;
    }

    ctx->pc = 0x2fb998u;

    // 0x2fb998: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2fb998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2fb99c: 0x3c020072  lui         $v0, 0x72
    ctx->pc = 0x2fb99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
    // 0x2fb9a0: 0x3c030072  lui         $v1, 0x72
    ctx->pc = 0x2fb9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)114 << 16));
    // 0x2fb9a4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2fb9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2fb9a8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x2fb9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x2fb9ac: 0x2474b840  addiu       $s4, $v1, -0x47C0
    ctx->pc = 0x2fb9acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948928));
    // 0x2fb9b0: 0x2455b7c0  addiu       $s5, $v0, -0x4840
    ctx->pc = 0x2fb9b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948800));
    // 0x2fb9b4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2fb9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2fb9b8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2fb9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2fb9bc: 0x3c020072  lui         $v0, 0x72
    ctx->pc = 0x2fb9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
    // 0x2fb9c0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2fb9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2fb9c4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x2fb9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x2fb9c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2fb9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2fb9cc: 0x2471b7c0  addiu       $s1, $v1, -0x4840
    ctx->pc = 0x2fb9ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948800));
    // 0x2fb9d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fb9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fb9d4: 0x2453b8c0  addiu       $s3, $v0, -0x4740
    ctx->pc = 0x2fb9d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949056));
    // 0x2fb9d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2fb9d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb9dc: 0x3c128000  lui         $s2, 0x8000
    ctx->pc = 0x2fb9dcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32768 << 16));
label_2fb9e0:
    // 0x2fb9e0: 0x101142  srl         $v0, $s0, 5
    ctx->pc = 0x2fb9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
    // 0x2fb9e4: 0x3204001f  andi        $a0, $s0, 0x1F
    ctx->pc = 0x2fb9e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x2fb9e8: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x2fb9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2fb9ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2fb9ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2fb9f0: 0xb51821  addu        $v1, $a1, $s5
    ctx->pc = 0x2fb9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    // 0x2fb9f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fb9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fb9f8: 0x921806  srlv        $v1, $s2, $a0
    ctx->pc = 0x2fb9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), GPR_U32(ctx, 4) & 0x1F));
    // 0x2fb9fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2fb9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2fba00: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2FBA00u;
    {
        const bool branch_taken_0x2fba00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBA00u;
        // 0x2fba04: 0xb43021  addu        $a2, $a1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fba00) {
            ctx->pc = 0x2FBA30u;
            goto label_2fba30;
        }
    }
    ctx->pc = 0x2FBA08u;
    // 0x2fba08: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2fba08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fba0c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2fba0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2fba10: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FBA10u;
    {
        const bool branch_taken_0x2fba10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBA10u;
        // 0x2fba14: 0xb32021  addu        $a0, $a1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fba10) {
            ctx->pc = 0x2FBA30u;
            goto label_2fba30;
        }
    }
    ctx->pc = 0x2FBA18u;
    // 0x2fba18: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2fba18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fba1c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2fba1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2fba20: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FBA20u;
    {
        const bool branch_taken_0x2fba20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBA20u;
        // 0x2fba24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fba20) {
            ctx->pc = 0x2FBA30u;
            goto label_2fba30;
        }
    }
    ctx->pc = 0x2FBA28u;
    // 0x2fba28: 0xc0bef94  jal         func_2FBE50
    ctx->pc = 0x2FBA28u;
    SET_GPR_U32(ctx, 31, 0x2FBA30u);
    ctx->pc = 0x2FBE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBE50u, 0x2FBA28u, 0x2FBA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBA30u;
label_2fba30:
    // 0x2fba30: 0x2a020400  slti        $v0, $s0, 0x400
    ctx->pc = 0x2fba30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x2fba34: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2FBA34u;
    {
        const bool branch_taken_0x2fba34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBA34u;
        // 0x2fba38: 0x26310400  addiu       $s1, $s1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fba34) {
            ctx->pc = 0x2FB9E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fb9e0;
        }
    }
    ctx->pc = 0x2FBA3Cu;
    // 0x2fba3c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2fba3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2fba40: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2fba40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2fba44: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2fba44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2fba48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2fba48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fba4c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2fba4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fba50: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x2fba50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fba54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fba54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fba58: 0x3e00008  jr          $ra
    ctx->pc = 0x2FBA58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FBA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBA58u;
        // 0x2fba5c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FBA58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FBA60u;
}
