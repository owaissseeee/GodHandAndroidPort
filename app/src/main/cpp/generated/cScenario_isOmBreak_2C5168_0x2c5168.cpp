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

// Function: cScenario_isOmBreak_2C5168
// Address: 0x2c5168 - 0x2c51e8
void cScenario_isOmBreak_2C5168_0x2c5168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScenario_isOmBreak_2C5168_0x2c5168");
#endif

    switch (ctx->pc) {
        case 0x2c5198u: goto label_2c5198;
        case 0x2c51ccu: goto label_2c51cc;
        case 0x2c51d8u: goto label_2c51d8;
        default: break;
    }

    ctx->pc = 0x2c5168u;

    // 0x2c5168: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c5168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c516c: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x2c516cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x2c5170: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c5170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2c5174: 0x24484c58  addiu       $t0, $v0, 0x4C58
    ctx->pc = 0x2c5174u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
    // 0x2c5178: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c5178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c517c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c517cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5180: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c5180u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5184: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x2c5184u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c5188: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2C5188u;
    {
        const bool branch_taken_0x2c5188 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C518Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5188u;
        // 0x2c518c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5188) {
            ctx->pc = 0x2C51C0u;
            goto label_2c51c0;
        }
    }
    ctx->pc = 0x2C5190u;
    // 0x2c5190: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x2c5190u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c5194: 0x0  nop
    ctx->pc = 0x2c5194u;
    // NOP
label_2c5198:
    // 0x2c5198: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x2c5198u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2c519c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2c519cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2c51a0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2c51a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2c51a4: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x2c51a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x2c51a8: 0x28c30008  slti        $v1, $a2, 0x8
    ctx->pc = 0x2c51a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2c51ac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C51ACu;
    {
        const bool branch_taken_0x2c51ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C51B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C51ACu;
        // 0x2c51b0: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c51ac) {
            ctx->pc = 0x2C51C0u;
            goto label_2c51c0;
        }
    }
    ctx->pc = 0x2C51B4u;
    // 0x2c51b4: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x2c51b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c51b8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2C51B8u;
    {
        const bool branch_taken_0x2c51b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c51b8) {
            ctx->pc = 0x2C51BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C51B8u;
            // 0x2c51bc: 0x80a20000  lb          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c5198;
        }
    }
    ctx->pc = 0x2C51C0u;
label_2c51c0:
    // 0x2c51c0: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x2c51c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c51c4: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x2C51C4u;
    SET_GPR_U32(ctx, 31, 0x2C51CCu);
    ctx->pc = 0x2C51C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C51C4u;
    // 0x2c51c8: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x2C51C4u, 0x2C51CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C51CCu;
label_2c51cc:
    // 0x2c51cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c51ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c51d0: 0xc0b1444  jal         func_2C5110
    ctx->pc = 0x2C51D0u;
    SET_GPR_U32(ctx, 31, 0x2C51D8u);
    ctx->pc = 0x2C51D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C51D0u;
    // 0x2c51d4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5110u, 0x2C51D0u, 0x2C51D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C51D8u;
label_2c51d8:
    // 0x2c51d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c51d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c51dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c51dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c51e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C51E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C51E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C51E0u;
        // 0x2c51e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C51E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C51E8u;
}
