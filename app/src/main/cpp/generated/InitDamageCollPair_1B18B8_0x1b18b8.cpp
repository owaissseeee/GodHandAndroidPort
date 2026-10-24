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

// Function: InitDamageCollPair_1B18B8
// Address: 0x1b18b8 - 0x1b1928
void InitDamageCollPair_1B18B8_0x1b18b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitDamageCollPair_1B18B8_0x1b18b8");
#endif

    switch (ctx->pc) {
        case 0x1b18f0u: goto label_1b18f0;
        case 0x1b1910u: goto label_1b1910;
        default: break;
    }

    ctx->pc = 0x1b18b8u;

    // 0x1b18b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b18b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b18bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b18bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b18c0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b18c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b18c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b18c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b18c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b18c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b18cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b18ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b18d0: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x1b18d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1b18d4: 0x24110032  addiu       $s1, $zero, 0x32
    ctx->pc = 0x1b18d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1b18d8: 0x8e03066c  lw          $v1, 0x66C($s0)
    ctx->pc = 0x1b18d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1644)));
    // 0x1b18dc: 0xa4640046  sh          $a0, 0x46($v1)
    ctx->pc = 0x1b18dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 4));
    // 0x1b18e0: 0x8e02066c  lw          $v0, 0x66C($s0)
    ctx->pc = 0x1b18e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1644)));
    // 0x1b18e4: 0xac51004c  sw          $s1, 0x4C($v0)
    ctx->pc = 0x1b18e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 17));
    // 0x1b18e8: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1B18E8u;
    SET_GPR_U32(ctx, 31, 0x1B18F0u);
    ctx->pc = 0x1B18ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B18E8u;
    // 0x1b18ec: 0x8e04066c  lw          $a0, 0x66C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1644)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1B18E8u, 0x1B18F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B18F0u;
label_1b18f0:
    // 0x1b18f0: 0x8e040670  lw          $a0, 0x670($s0)
    ctx->pc = 0x1b18f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1648)));
    // 0x1b18f4: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x1b18f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1b18f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b18f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b18fc: 0xa4830046  sh          $v1, 0x46($a0)
    ctx->pc = 0x1b18fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b1900: 0x8e020670  lw          $v0, 0x670($s0)
    ctx->pc = 0x1b1900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1648)));
    // 0x1b1904: 0xac51004c  sw          $s1, 0x4C($v0)
    ctx->pc = 0x1b1904u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 17));
    // 0x1b1908: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1B1908u;
    SET_GPR_U32(ctx, 31, 0x1B1910u);
    ctx->pc = 0x1B190Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1908u;
    // 0x1b190c: 0x8e040670  lw          $a0, 0x670($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1648)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1B1908u, 0x1B1910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1910u;
label_1b1910:
    // 0x1b1910: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b1910u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1914: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b1914u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1918: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b1918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b191c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B191Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B191Cu;
        // 0x1b1920: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B191Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1924u;
    // 0x1b1924: 0x0  nop
    ctx->pc = 0x1b1924u;
    // NOP
    ctx->pc = 0x1b1928u;
}
