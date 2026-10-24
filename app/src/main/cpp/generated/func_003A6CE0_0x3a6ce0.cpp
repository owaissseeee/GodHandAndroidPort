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

// Function: func_003A6CE0
// Address: 0x3a6ce0 - 0x3a6d78
void func_003A6CE0_0x3a6ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003A6CE0_0x3a6ce0");
#endif

    switch (ctx->pc) {
        case 0x3a6d30u: goto label_3a6d30;
        case 0x3a6d68u: goto label_3a6d68;
        default: break;
    }

    ctx->pc = 0x3a6ce0u;

    // 0x3a6ce0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x3a6ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x3a6ce4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3a6ce4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6ce8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3a6ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3a6cec: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3a6cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a6cf0: 0xffa600c0  sd          $a2, 0xC0($sp)
    ctx->pc = 0x3a6cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 6));
    // 0x3a6cf4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3a6cf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6cf8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3a6cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3a6cfc: 0xa7a3000c  sh          $v1, 0xC($sp)
    ctx->pc = 0x3a6cfcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x3a6d00: 0xffa700c8  sd          $a3, 0xC8($sp)
    ctx->pc = 0x3a6d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 7));
    // 0x3a6d04: 0xffa800d0  sd          $t0, 0xD0($sp)
    ctx->pc = 0x3a6d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 8));
    // 0x3a6d08: 0xffa900d8  sd          $t1, 0xD8($sp)
    ctx->pc = 0x3a6d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 9));
    // 0x3a6d0c: 0xffaa00e0  sd          $t2, 0xE0($sp)
    ctx->pc = 0x3a6d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 10));
    // 0x3a6d10: 0xffab00e8  sd          $t3, 0xE8($sp)
    ctx->pc = 0x3a6d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 11));
    // 0x3a6d14: 0xe7ac00b0  swc1        $f12, 0xB0($sp)
    ctx->pc = 0x3a6d14u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x3a6d18: 0xe7ae00b4  swc1        $f14, 0xB4($sp)
    ctx->pc = 0x3a6d18u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x3a6d1c: 0xe7b000b8  swc1        $f16, 0xB8($sp)
    ctx->pc = 0x3a6d1cu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x3a6d20: 0xe7b200bc  swc1        $f18, 0xBC($sp)
    ctx->pc = 0x3a6d20u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x3a6d24: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3a6d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3a6d28: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x3A6D28u;
    SET_GPR_U32(ctx, 31, 0x3A6D30u);
    ctx->pc = 0x3A6D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6D28u;
    // 0x3a6d2c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x3A6D28u, 0x3A6D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6D30u;
label_3a6d30:
    // 0x3a6d30: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3a6d30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3a6d34: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x3a6d34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x3a6d38: 0x8c86a62c  lw          $a2, -0x59D4($a0)
    ctx->pc = 0x3a6d38u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3FA62Cu));
    // 0x3a6d3c: 0x24636cd8  addiu       $v1, $v1, 0x6CD8
    ctx->pc = 0x3a6d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27864));
    // 0x3a6d40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a6d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6d44: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x3a6d44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x3a6d48: 0xafa60054  sw          $a2, 0x54($sp)
    ctx->pc = 0x3a6d48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 6));
    // 0x3a6d4c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3a6d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6d50: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x3a6d50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x3a6d54: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x3a6d54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3a6d58: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x3a6d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x3a6d5c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x3a6d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x3a6d60: 0xc0e9bba  jal         func_3A6EE8
    ctx->pc = 0x3A6D60u;
    SET_GPR_U32(ctx, 31, 0x3A6D68u);
    ctx->pc = 0x3A6D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6D60u;
    // 0x3a6d64: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6EE8u, 0x3A6D60u, 0x3A6D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6D68u;
label_3a6d68:
    // 0x3a6d68: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3a6d68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3a6d6c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3a6d6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3a6d70: 0x3e00008  jr          $ra
    ctx->pc = 0x3A6D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6D70u;
        // 0x3a6d74: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A6D78u;
}
