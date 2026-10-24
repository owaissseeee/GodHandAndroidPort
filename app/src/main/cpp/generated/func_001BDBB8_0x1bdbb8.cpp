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

// Function: func_001BDBB8
// Address: 0x1bdbb8 - 0x1bdbf8
void func_001BDBB8_0x1bdbb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001BDBB8_0x1bdbb8");
#endif

    switch (ctx->pc) {
        case 0x1bdbe0u: goto label_1bdbe0;
        default: break;
    }

    ctx->pc = 0x1bdbb8u;

    // 0x1bdbb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bdbb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bdbbc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1bdbbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1bdbc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bdbc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bdbc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bdbc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdbc8: 0x8e05077c  lw          $a1, 0x77C($s0)
    ctx->pc = 0x1bdbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1916)));
    // 0x1bdbcc: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BDBCCu;
    {
        const bool branch_taken_0x1bdbcc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdbcc) {
            ctx->pc = 0x1BDBD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BDBCCu;
            // 0x1bdbd0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BDBE8u;
            goto label_1bdbe8;
        }
    }
    ctx->pc = 0x1BDBD4u;
    // 0x1bdbd4: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1bdbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x1bdbd8: 0xc04bb16  jal         func_12EC58
    ctx->pc = 0x1BDBD8u;
    SET_GPR_U32(ctx, 31, 0x1BDBE0u);
    ctx->pc = 0x1BDBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDBD8u;
    // 0x1bdbdc: 0x2484ae50  addiu       $a0, $a0, -0x51B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC58u, 0x1BDBD8u, 0x1BDBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDBE0u;
label_1bdbe0:
    // 0x1bdbe0: 0xae00077c  sw          $zero, 0x77C($s0)
    ctx->pc = 0x1bdbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1916), GPR_U32(ctx, 0));
    // 0x1bdbe4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1bdbe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bdbe8:
    // 0x1bdbe8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bdbe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bdbec: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDBECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDBECu;
        // 0x1bdbf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDBECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BDBF4u;
    // 0x1bdbf4: 0x0  nop
    ctx->pc = 0x1bdbf4u;
    // NOP
    ctx->pc = 0x1bdbf8u;
}
