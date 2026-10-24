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

// Function: func_003A7AE8
// Address: 0x3a7ae8 - 0x3a7b48
void func_003A7AE8_0x3a7ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003A7AE8_0x3a7ae8");
#endif

    switch (ctx->pc) {
        case 0x3a7b28u: goto label_3a7b28;
        default: break;
    }

    ctx->pc = 0x3a7ae8u;

    // 0x3a7ae8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3a7ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3a7aec: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x3a7aecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x3a7af0: 0x8c48a62c  lw          $t0, -0x59D4($v0)
    ctx->pc = 0x3a7af0u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x3FA62Cu));
    // 0x3a7af4: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3a7af4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3a7af8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3a7af8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7afc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3a7afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3a7b00: 0x24020208  addiu       $v0, $zero, 0x208
    ctx->pc = 0x3a7b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x3a7b04: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3a7b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3a7b08: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x3a7b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x3a7b0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3a7b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7b10: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x3a7b10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x3a7b14: 0xa7a2000c  sh          $v0, 0xC($sp)
    ctx->pc = 0x3a7b14u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x3a7b18: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x3a7b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
    // 0x3a7b1c: 0xafa80054  sw          $t0, 0x54($sp)
    ctx->pc = 0x3a7b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 8));
    // 0x3a7b20: 0xc0ea762  jal         func_3A9D88
    ctx->pc = 0x3A7B20u;
    SET_GPR_U32(ctx, 31, 0x3A7B28u);
    ctx->pc = 0x3A7B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7B20u;
    // 0x3a7b24: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9D88u, 0x3A7B20u, 0x3A7B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7B28u;
label_3a7b28:
    // 0x3a7b28: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3a7b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a7b2c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3a7b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3a7b30: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a7b30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a7b34: 0x3e00008  jr          $ra
    ctx->pc = 0x3A7B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A7B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7B34u;
        // 0x3a7b38: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7B34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A7B3Cu;
    // 0x3a7b3c: 0x0  nop
    ctx->pc = 0x3a7b3cu;
    // NOP
    // 0x3a7b40: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x3a7b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3a7b44: 0x0  nop
    ctx->pc = 0x3a7b44u;
    // NOP
    ctx->pc = 0x3a7b48u;
}
