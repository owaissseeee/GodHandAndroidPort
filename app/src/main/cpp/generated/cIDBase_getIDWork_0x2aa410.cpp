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

// Function: cIDBase_getIDWork
// Address: 0x2aa410 - 0x2aa480
void cIDBase_getIDWork_0x2aa410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cIDBase_getIDWork_0x2aa410");
#endif

    switch (ctx->pc) {
        case 0x2aa428u: goto label_2aa428;
        case 0x2aa448u: goto label_2aa448;
        default: break;
    }

    ctx->pc = 0x2aa410u;

    // 0x2aa410: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2aa410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2aa414: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AA414u;
    {
        const bool branch_taken_0x2aa414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aa414) {
            ctx->pc = 0x2AA418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA414u;
            // 0x2aa418: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA430u;
            goto label_2aa430;
        }
    }
    ctx->pc = 0x2AA41Cu;
    // 0x2aa41c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2aa41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2aa420: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA420u;
        // 0x2aa424: 0x2442b300  addiu       $v0, $v0, -0x4D00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947584));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA428u;
label_2aa428:
    // 0x2aa428: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA428u;
        // 0x2aa42c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA430u;
label_2aa430:
    // 0x2aa430: 0x18800010  blez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2AA430u;
    {
        const bool branch_taken_0x2aa430 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x2AA434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA430u;
        // 0x2aa434: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa430) {
            ctx->pc = 0x2AA474u;
            goto label_2aa474;
        }
    }
    ctx->pc = 0x2AA438u;
    // 0x2aa438: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2aa438u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa43c: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x2aa43cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x2aa440: 0x24c3002c  addiu       $v1, $a2, 0x2C
    ctx->pc = 0x2aa440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 44));
    // 0x2aa444: 0x0  nop
    ctx->pc = 0x2aa444u;
    // NOP
label_2aa448:
    // 0x2aa448: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2aa448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2aa44c: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x2aa44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x2aa450: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AA450u;
    {
        const bool branch_taken_0x2aa450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA450u;
        // 0x2aa454: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa450) {
            ctx->pc = 0x2AA464u;
            goto label_2aa464;
        }
    }
    ctx->pc = 0x2AA458u;
    // 0x2aa458: 0x8062fffe  lb          $v0, -0x2($v1)
    ctx->pc = 0x2aa458u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967294)));
    // 0x2aa45c: 0x1045fff2  beq         $v0, $a1, . + 4 + (-0xE << 2)
    ctx->pc = 0x2AA45Cu;
    {
        const bool branch_taken_0x2aa45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x2aa45c) {
            ctx->pc = 0x2AA428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aa428;
        }
    }
    ctx->pc = 0x2AA464u;
label_2aa464:
    // 0x2aa464: 0x24c600ac  addiu       $a2, $a2, 0xAC
    ctx->pc = 0x2aa464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 172));
    // 0x2aa468: 0xe4102a  slt         $v0, $a3, $a0
    ctx->pc = 0x2aa468u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2aa46c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2AA46Cu;
    {
        const bool branch_taken_0x2aa46c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA46Cu;
        // 0x2aa470: 0x246300ac  addiu       $v1, $v1, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa46c) {
            ctx->pc = 0x2AA448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aa448;
        }
    }
    ctx->pc = 0x2AA474u;
label_2aa474:
    // 0x2aa474: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2aa474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2aa478: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA478u;
        // 0x2aa47c: 0x2442b300  addiu       $v0, $v0, -0x4D00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947584));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA480u;
}
