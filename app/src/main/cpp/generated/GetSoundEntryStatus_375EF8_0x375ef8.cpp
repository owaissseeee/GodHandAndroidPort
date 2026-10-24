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

// Function: GetSoundEntryStatus_375EF8
// Address: 0x375ef8 - 0x375f68
void GetSoundEntryStatus_375EF8_0x375ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSoundEntryStatus_375EF8_0x375ef8");
#endif

    switch (ctx->pc) {
        case 0x375f0cu: goto label_375f0c;
        case 0x375f1cu: goto label_375f1c;
        default: break;
    }

    ctx->pc = 0x375ef8u;

    // 0x375ef8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x375ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x375efc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x375efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x375f00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x375f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x375f04: 0xc0dda6c  jal         func_3769B0
    ctx->pc = 0x375F04u;
    SET_GPR_U32(ctx, 31, 0x375F0Cu);
    ctx->pc = 0x375F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375F04u;
    // 0x375f08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3769B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3769B0u, 0x375F04u, 0x375F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375F0Cu;
label_375f0c:
    // 0x375f0c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x375F0Cu;
    {
        const bool branch_taken_0x375f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x375F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375F0Cu;
        // 0x375f10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375f0c) {
            ctx->pc = 0x375F3Cu;
            goto label_375f3c;
        }
    }
    ctx->pc = 0x375F14u;
    // 0x375f14: 0xc0ddaa4  jal         func_376A90
    ctx->pc = 0x375F14u;
    SET_GPR_U32(ctx, 31, 0x375F1Cu);
    ctx->pc = 0x375F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375F14u;
    // 0x375f18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x376A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376A90u, 0x375F14u, 0x375F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375F1Cu;
label_375f1c:
    // 0x375f1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x375F1Cu;
    {
        const bool branch_taken_0x375f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x375F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375F1Cu;
        // 0x375f20: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375f1c) {
            ctx->pc = 0x375F38u;
            goto label_375f38;
        }
    }
    ctx->pc = 0x375F24u;
    // 0x375f24: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x375f24u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x375f28: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x375f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x375f2c: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x375f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x375f30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x375F30u;
    {
        const bool branch_taken_0x375f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x375F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375F30u;
        // 0x375f34: 0x83100a  movz        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375f30) {
            ctx->pc = 0x375F3Cu;
            goto label_375f3c;
        }
    }
    ctx->pc = 0x375F38u;
label_375f38:
    // 0x375f38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x375f38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_375f3c:
    // 0x375f3c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x375f3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x375f40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x375f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375f44: 0x3e00008  jr          $ra
    ctx->pc = 0x375F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375F44u;
        // 0x375f48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375F44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375F4Cu;
    // 0x375f4c: 0x0  nop
    ctx->pc = 0x375f4cu;
    // NOP
    // 0x375f50: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x375f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x375f54: 0x0  nop
    ctx->pc = 0x375f54u;
    // NOP
    // 0x375f58: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x375f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x375f5c: 0x0  nop
    ctx->pc = 0x375f5cu;
    // NOP
    // 0x375f60: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x375f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x375f64: 0x0  nop
    ctx->pc = 0x375f64u;
    // NOP
    ctx->pc = 0x375f68u;
}
