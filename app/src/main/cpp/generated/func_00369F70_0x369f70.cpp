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

// Function: func_00369F70
// Address: 0x369f70 - 0x369fb0
void func_00369F70_0x369f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00369F70_0x369f70");
#endif

    switch (ctx->pc) {
        case 0x369f70u: goto label_369f70;
        case 0x369f74u: goto label_369f74;
        case 0x369f78u: goto label_369f78;
        case 0x369f7cu: goto label_369f7c;
        case 0x369f80u: goto label_369f80;
        case 0x369f84u: goto label_369f84;
        case 0x369f88u: goto label_369f88;
        case 0x369f8cu: goto label_369f8c;
        case 0x369f90u: goto label_369f90;
        case 0x369f94u: goto label_369f94;
        case 0x369f98u: goto label_369f98;
        case 0x369f9cu: goto label_369f9c;
        case 0x369fa0u: goto label_369fa0;
        case 0x369fa4u: goto label_369fa4;
        case 0x369fa8u: goto label_369fa8;
        case 0x369facu: goto label_369fac;
        default: break;
    }

    ctx->pc = 0x369f70u;

label_369f70:
    // 0x369f70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x369f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_369f74:
    // 0x369f74: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x369f74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_369f78:
    // 0x369f78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x369f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_369f7c:
    // 0x369f7c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_369f80:
    if (ctx->pc == 0x369F80u) {
        ctx->pc = 0x369F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369F7Cu;
        // 0x369f80: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x369F84u;
        goto label_369f84;
    }
    ctx->pc = 0x369F7Cu;
    {
        const bool branch_taken_0x369f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x369F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369F7Cu;
        // 0x369f80: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369f7c) {
            ctx->pc = 0x369F98u;
            goto label_369f98;
        }
    }
    ctx->pc = 0x369F84u;
label_369f84:
    // 0x369f84: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x369f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_369f88:
    // 0x369f88: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_369f8c:
    if (ctx->pc == 0x369F8Cu) {
        ctx->pc = 0x369F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369F88u;
        // 0x369f8c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x369F90u;
        goto label_369f90;
    }
    ctx->pc = 0x369F88u;
    {
        const bool branch_taken_0x369f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x369f88) {
            ctx->pc = 0x369F8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x369F88u;
            // 0x369f8c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x369F9Cu;
            goto label_369f9c;
        }
    }
    ctx->pc = 0x369F90u;
label_369f90:
    // 0x369f90: 0x40f809  jalr        $v0
label_369f94:
    if (ctx->pc == 0x369F94u) {
        ctx->pc = 0x369F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369F90u;
        // 0x369f94: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x369F98u;
        goto label_369f98;
    }
    ctx->pc = 0x369F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x369F98u);
        ctx->pc = 0x369F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369F90u;
        // 0x369f94: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369F90u, 0x369F98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x369F98u;
label_369f98:
    // 0x369f98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x369f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_369f9c:
    // 0x369f9c: 0x3e00008  jr          $ra
label_369fa0:
    if (ctx->pc == 0x369FA0u) {
        ctx->pc = 0x369FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369F9Cu;
        // 0x369fa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x369FA4u;
        goto label_369fa4;
    }
    ctx->pc = 0x369F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369F9Cu;
        // 0x369fa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369FA4u;
label_369fa4:
    // 0x369fa4: 0x0  nop
    ctx->pc = 0x369fa4u;
    // NOP
label_369fa8:
    // 0x369fa8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x369fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_369fac:
    // 0x369fac: 0x0  nop
    ctx->pc = 0x369facu;
    // NOP
    ctx->pc = 0x369fb0u;
}
