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

// Function: cScenario_isOmBreak_2C5220
// Address: 0x2c5220 - 0x2c5288
void cScenario_isOmBreak_2C5220_0x2c5220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScenario_isOmBreak_2C5220_0x2c5220");
#endif

    switch (ctx->pc) {
        case 0x2c5248u: goto label_2c5248;
        case 0x2c527cu: goto label_2c527c;
        default: break;
    }

    ctx->pc = 0x2c5220u;

    // 0x2c5220: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c5220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c5224: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x2c5224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x2c5228: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c5228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c522c: 0x24498658  addiu       $t1, $v0, -0x79A8
    ctx->pc = 0x2c522cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936152));
    // 0x2c5230: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x2c5230u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2c5234: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c5234u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5238: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x2c5238u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2c523c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2C523Cu;
    {
        const bool branch_taken_0x2c523c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C523Cu;
        // 0x2c5240: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c523c) {
            ctx->pc = 0x2C5270u;
            goto label_2c5270;
        }
    }
    ctx->pc = 0x2C5244u;
    // 0x2c5244: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x2c5244u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_2c5248:
    // 0x2c5248: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x2c5248u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2c524c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2c524cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2c5250: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2c5250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2c5254: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x2c5254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x2c5258: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x2c5258u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2c525c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C525Cu;
    {
        const bool branch_taken_0x2c525c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C525Cu;
        // 0x2c5260: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c525c) {
            ctx->pc = 0x2C5270u;
            goto label_2c5270;
        }
    }
    ctx->pc = 0x2C5264u;
    // 0x2c5264: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x2c5264u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2c5268: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2C5268u;
    {
        const bool branch_taken_0x2c5268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5268) {
            ctx->pc = 0x2C526Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5268u;
            // 0x2c526c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c5248;
        }
    }
    ctx->pc = 0x2C5270u;
label_2c5270:
    // 0x2c5270: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x2c5270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5274: 0xc0afb58  jal         func_2BED60
    ctx->pc = 0x2C5274u;
    SET_GPR_U32(ctx, 31, 0x2C527Cu);
    ctx->pc = 0x2C5278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5274u;
    // 0x2c5278: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BED60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BED60u, 0x2C5274u, 0x2C527Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C527Cu;
label_2c527c:
    // 0x2c527c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c527cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c5280: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5280u;
        // 0x2c5284: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C5288u;
}
