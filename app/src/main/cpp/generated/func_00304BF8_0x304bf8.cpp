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

// Function: func_00304BF8
// Address: 0x304bf8 - 0x304c48
void func_00304BF8_0x304bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00304BF8_0x304bf8");
#endif

    switch (ctx->pc) {
        case 0x304c3cu: goto label_304c3c;
        default: break;
    }

    ctx->pc = 0x304bf8u;

    // 0x304bf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x304bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x304bfc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x304bfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304c00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x304c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x304c04: 0x8cc50108  lw          $a1, 0x108($a2)
    ctx->pc = 0x304c04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 264)));
    // 0x304c08: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x304C08u;
    {
        const bool branch_taken_0x304c08 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x304c08) {
            ctx->pc = 0x304C0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304C08u;
            // 0x304c0c: 0x90a302f4  lbu         $v1, 0x2F4($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 756)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304C18u;
            goto label_304c18;
        }
    }
    ctx->pc = 0x304C10u;
    // 0x304c10: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x304C10u;
    {
        const bool branch_taken_0x304c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304C10u;
        // 0x304c14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304c10) {
            ctx->pc = 0x304C3Cu;
            goto label_304c3c;
        }
    }
    ctx->pc = 0x304C18u;
label_304c18:
    // 0x304c18: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x304c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304c1c: 0xacc30240  sw          $v1, 0x240($a2)
    ctx->pc = 0x304c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 576), GPR_U32(ctx, 3));
    // 0x304c20: 0x90a202f5  lbu         $v0, 0x2F5($a1)
    ctx->pc = 0x304c20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 757)));
    // 0x304c24: 0xacc20244  sw          $v0, 0x244($a2)
    ctx->pc = 0x304c24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 580), GPR_U32(ctx, 2));
    // 0x304c28: 0x90a302f6  lbu         $v1, 0x2F6($a1)
    ctx->pc = 0x304c28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 758)));
    // 0x304c2c: 0xacc30248  sw          $v1, 0x248($a2)
    ctx->pc = 0x304c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 584), GPR_U32(ctx, 3));
    // 0x304c30: 0x90a202f7  lbu         $v0, 0x2F7($a1)
    ctx->pc = 0x304c30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 759)));
    // 0x304c34: 0xc0c0e88  jal         func_303A20
    ctx->pc = 0x304C34u;
    SET_GPR_U32(ctx, 31, 0x304C3Cu);
    ctx->pc = 0x304C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304C34u;
    // 0x304c38: 0xacc2024c  sw          $v0, 0x24C($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 588), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303A20u, 0x304C34u, 0x304C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304C3Cu;
label_304c3c:
    // 0x304c3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x304c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304c40: 0x3e00008  jr          $ra
    ctx->pc = 0x304C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304C40u;
        // 0x304c44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304C48u;
}
