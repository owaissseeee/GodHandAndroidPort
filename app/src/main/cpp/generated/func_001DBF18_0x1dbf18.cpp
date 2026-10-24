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

// Function: func_001DBF18
// Address: 0x1dbf18 - 0x1dbfb8
void func_001DBF18_0x1dbf18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DBF18_0x1dbf18");
#endif

    switch (ctx->pc) {
        case 0x1dbf40u: goto label_1dbf40;
        default: break;
    }

    ctx->pc = 0x1dbf18u;

    // 0x1dbf18: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x1dbf18u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1dbf1c: 0x24843004  addiu       $a0, $a0, 0x3004
    ctx->pc = 0x1dbf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12292));
    // 0x1dbf20: 0xa4c00000  sh          $zero, 0x0($a2)
    ctx->pc = 0x1dbf20u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1dbf24: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x1dbf24u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dbf28: 0xa4e00000  sh          $zero, 0x0($a3)
    ctx->pc = 0x1dbf28u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1dbf2c: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x1dbf2cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dbf30: 0xa5000000  sh          $zero, 0x0($t0)
    ctx->pc = 0x1dbf30u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1dbf34: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1dbf34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1dbf38: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x1dbf38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1dbf3c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1dbf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1dbf40:
    // 0x1dbf40: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x1dbf40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x1dbf44: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1dbf44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1dbf48: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dbf48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dbf4c: 0x8c420600  lw          $v0, 0x600($v0)
    ctx->pc = 0x1dbf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1536)));
    // 0x1dbf50: 0x104c000b  beq         $v0, $t4, . + 4 + (0xB << 2)
    ctx->pc = 0x1DBF50u;
    {
        const bool branch_taken_0x1dbf50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 12));
        ctx->pc = 0x1DBF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBF50u;
        // 0x1dbf54: 0x28430002  slti        $v1, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbf50) {
            ctx->pc = 0x1DBF80u;
            goto label_1dbf80;
        }
    }
    ctx->pc = 0x1DBF58u;
    // 0x1dbf58: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DBF58u;
    {
        const bool branch_taken_0x1dbf58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dbf58) {
            ctx->pc = 0x1DBF5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DBF58u;
            // 0x1dbf5c: 0x94a20000  lhu         $v0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DBF74u;
            goto label_1dbf74;
        }
    }
    ctx->pc = 0x1DBF60u;
    // 0x1dbf60: 0x504b000b  beql        $v0, $t3, . + 4 + (0xB << 2)
    ctx->pc = 0x1DBF60u;
    {
        const bool branch_taken_0x1dbf60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 11));
        if (branch_taken_0x1dbf60) {
            ctx->pc = 0x1DBF64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DBF60u;
            // 0x1dbf64: 0x94e20000  lhu         $v0, 0x0($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DBF90u;
            goto label_1dbf90;
        }
    }
    ctx->pc = 0x1DBF68u;
    // 0x1dbf68: 0x504a000c  beql        $v0, $t2, . + 4 + (0xC << 2)
    ctx->pc = 0x1DBF68u;
    {
        const bool branch_taken_0x1dbf68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        if (branch_taken_0x1dbf68) {
            ctx->pc = 0x1DBF6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DBF68u;
            // 0x1dbf6c: 0x95020000  lhu         $v0, 0x0($t0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DBF9Cu;
            goto label_1dbf9c;
        }
    }
    ctx->pc = 0x1DBF70u;
    // 0x1dbf70: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1dbf70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_1dbf74:
    // 0x1dbf74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dbf74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dbf78: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1DBF78u;
    {
        const bool branch_taken_0x1dbf78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBF78u;
        // 0x1dbf7c: 0xa4a20000  sh          $v0, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbf78) {
            ctx->pc = 0x1DBFA4u;
            goto label_1dbfa4;
        }
    }
    ctx->pc = 0x1DBF80u;
label_1dbf80:
    // 0x1dbf80: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x1dbf80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1dbf84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dbf84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dbf88: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1DBF88u;
    {
        const bool branch_taken_0x1dbf88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBF88u;
        // 0x1dbf8c: 0xa4c20000  sh          $v0, 0x0($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbf88) {
            ctx->pc = 0x1DBFA4u;
            goto label_1dbfa4;
        }
    }
    ctx->pc = 0x1DBF90u;
label_1dbf90:
    // 0x1dbf90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dbf90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dbf94: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DBF94u;
    {
        const bool branch_taken_0x1dbf94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBF94u;
        // 0x1dbf98: 0xa4e20000  sh          $v0, 0x0($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbf94) {
            ctx->pc = 0x1DBFA4u;
            goto label_1dbfa4;
        }
    }
    ctx->pc = 0x1DBF9Cu;
label_1dbf9c:
    // 0x1dbf9c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dbf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dbfa0: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x1dbfa0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
label_1dbfa4:
    // 0x1dbfa4: 0x523ffe6  bgezl       $t1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1DBFA4u;
    {
        const bool branch_taken_0x1dbfa4 = (GPR_S64(ctx, 9) >= 0);
        if (branch_taken_0x1dbfa4) {
            ctx->pc = 0x1DBFA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DBFA4u;
            // 0x1dbfa8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DBF40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dbf40;
        }
    }
    ctx->pc = 0x1DBFACu;
    // 0x1dbfac: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBFACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBFB4u;
    // 0x1dbfb4: 0x0  nop
    ctx->pc = 0x1dbfb4u;
    // NOP
    ctx->pc = 0x1dbfb8u;
}
