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

// Function: func_00331BF0
// Address: 0x331bf0 - 0x331c78
void func_00331BF0_0x331bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00331BF0_0x331bf0");
#endif

    switch (ctx->pc) {
        case 0x331c20u: goto label_331c20;
        case 0x331c4cu: goto label_331c4c;
        default: break;
    }

    ctx->pc = 0x331bf0u;

    // 0x331bf0: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x331bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x331bf4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x331bf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x331bf8: 0x24428460  addiu       $v0, $v0, -0x7BA0
    ctx->pc = 0x331bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935648));
    // 0x331bfc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x331bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x331c00: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x331c00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3D8460u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3D8460u, _value); } while (0);
    // 0x331c04: 0x3c08003e  lui         $t0, 0x3E
    ctx->pc = 0x331c04u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)62 << 16));
    // 0x331c08: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x331c08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x331c0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x331c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331c10: 0x3c061964  lui         $a2, 0x1964
    ctx->pc = 0x331c10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)6500 << 16));
    // 0x331c14: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x331c14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x331c18: 0x8d02844c  lw          $v0, -0x7BB4($t0)
    ctx->pc = 0x331c18u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3D844Cu));
    // 0x331c1c: 0x0  nop
    ctx->pc = 0x331c1cu;
    // NOP
label_331c20:
    // 0x331c20: 0x1447000b  bne         $v0, $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x331C20u;
    {
        const bool branch_taken_0x331c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x331C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331C20u;
        // 0x331c24: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331c20) {
            ctx->pc = 0x331C50u;
            goto label_331c50;
        }
    }
    ctx->pc = 0x331C28u;
    // 0x331c28: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x331c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x331c2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x331c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x331c30: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x331c30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x331c34: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x331c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x331c38: 0xc3182b  sltu        $v1, $a2, $v1
    ctx->pc = 0x331c38u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x331c3c: 0x5060fff8  beql        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x331C3Cu;
    {
        const bool branch_taken_0x331c3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x331c3c) {
            ctx->pc = 0x331C40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x331C3Cu;
            // 0x331c40: 0x8d02844c  lw          $v0, -0x7BB4($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294935628)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x331C20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_331c20;
        }
    }
    ctx->pc = 0x331C44u;
    // 0x331c44: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x331C44u;
    SET_GPR_U32(ctx, 31, 0x331C4Cu);
    ctx->pc = 0x331C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331C44u;
    // 0x331c48: 0x24843f98  addiu       $a0, $a0, 0x3F98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x331C44u, 0x331C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331C4Cu;
label_331c4c:
    // 0x331c4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x331c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_331c50:
    // 0x331c50: 0x3e00008  jr          $ra
    ctx->pc = 0x331C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331C50u;
        // 0x331c54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331C58u;
    // 0x331c58: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x331c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x331c5c: 0x0  nop
    ctx->pc = 0x331c5cu;
    // NOP
    // 0x331c60: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x331c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x331c64: 0x0  nop
    ctx->pc = 0x331c64u;
    // NOP
    // 0x331c68: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x331c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x331c6c: 0x0  nop
    ctx->pc = 0x331c6cu;
    // NOP
    // 0x331c70: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x331c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x331c74: 0x0  nop
    ctx->pc = 0x331c74u;
    // NOP
    ctx->pc = 0x331c78u;
}
