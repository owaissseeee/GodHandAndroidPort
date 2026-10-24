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

// Function: func_00334AD0
// Address: 0x334ad0 - 0x334b20
void func_00334AD0_0x334ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00334AD0_0x334ad0");
#endif

    switch (ctx->pc) {
        case 0x334aecu: goto label_334aec;
        default: break;
    }

    ctx->pc = 0x334ad0u;

    // 0x334ad0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x334ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x334ad4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x334ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334ad8: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x334AD8u;
    {
        const bool branch_taken_0x334ad8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x334ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334AD8u;
        // 0x334adc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334ad8) {
            ctx->pc = 0x334AF8u;
            goto label_334af8;
        }
    }
    ctx->pc = 0x334AE0u;
    // 0x334ae0: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x334ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x334ae4: 0xc0cd002  jal         func_334008
    ctx->pc = 0x334AE4u;
    SET_GPR_U32(ctx, 31, 0x334AECu);
    ctx->pc = 0x334AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334AE4u;
    // 0x334ae8: 0x24a54960  addiu       $a1, $a1, 0x4960 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334008u, 0x334AE4u, 0x334AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334AECu;
label_334aec:
    // 0x334aec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x334AECu;
    {
        const bool branch_taken_0x334aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334AECu;
        // 0x334af0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334aec) {
            ctx->pc = 0x334B10u;
            goto label_334b10;
        }
    }
    ctx->pc = 0x334AF4u;
    // 0x334af4: 0x0  nop
    ctx->pc = 0x334af4u;
    // NOP
label_334af8:
    // 0x334af8: 0x80a30002  lb          $v1, 0x2($a1)
    ctx->pc = 0x334af8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x334afc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x334afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x334b00: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x334B00u;
    {
        const bool branch_taken_0x334b00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x334b00) {
            ctx->pc = 0x334B04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x334B00u;
            // 0x334b04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x334B10u;
            goto label_334b10;
        }
    }
    ctx->pc = 0x334B08u;
    // 0x334b08: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x334b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x334b0c: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x334b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_334b10:
    // 0x334b10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x334b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x334b14: 0x3e00008  jr          $ra
    ctx->pc = 0x334B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334B14u;
        // 0x334b18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334B14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334B1Cu;
    // 0x334b1c: 0x0  nop
    ctx->pc = 0x334b1cu;
    // NOP
    ctx->pc = 0x334b20u;
}
