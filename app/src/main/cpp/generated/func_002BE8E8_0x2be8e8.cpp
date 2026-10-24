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

// Function: func_002BE8E8
// Address: 0x2be8e8 - 0x2be948
void func_002BE8E8_0x2be8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BE8E8_0x2be8e8");
#endif

    switch (ctx->pc) {
        case 0x2be918u: goto label_2be918;
        case 0x2be924u: goto label_2be924;
        default: break;
    }

    ctx->pc = 0x2be8e8u;

    // 0x2be8e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2be8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2be8ec: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2be8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2be8f0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2be8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2be8f4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2be8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2be8f8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2be8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2be8fc: 0x14a2000c  bne         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2BE8FCu;
    {
        const bool branch_taken_0x2be8fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BE900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE8FCu;
        // 0x2be900: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be8fc) {
            ctx->pc = 0x2BE930u;
            goto label_2be930;
        }
    }
    ctx->pc = 0x2BE904u;
    // 0x2be904: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2BE904u;
    {
        const bool branch_taken_0x2be904 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE904u;
        // 0x2be908: 0x3c02005f  lui         $v0, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be904) {
            ctx->pc = 0x2BE930u;
            goto label_2be930;
        }
    }
    ctx->pc = 0x2BE90Cu;
    // 0x2be90c: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x2be90cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2be910: 0x24508640  addiu       $s0, $v0, -0x79C0
    ctx->pc = 0x2be910u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936128));
    // 0x2be914: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x2be914u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2be918:
    // 0x2be918: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2be918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be91c: 0xc0af954  jal         func_2BE550
    ctx->pc = 0x2BE91Cu;
    SET_GPR_U32(ctx, 31, 0x2BE924u);
    ctx->pc = 0x2BE920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE91Cu;
    // 0x2be920: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE550u, 0x2BE91Cu, 0x2BE924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE924u;
label_2be924:
    // 0x2be924: 0x0  nop
    ctx->pc = 0x2be924u;
    // NOP
    // 0x2be928: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2BE928u;
    {
        const bool branch_taken_0x2be928 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x2BE92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE928u;
        // 0x2be92c: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be928) {
            ctx->pc = 0x2BE918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2be918;
        }
    }
    ctx->pc = 0x2BE930u;
label_2be930:
    // 0x2be930: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2be930u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2be934: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2be934u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2be938: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2be938u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2be93c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2be93cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2be940: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE940u;
        // 0x2be944: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE948u;
}
