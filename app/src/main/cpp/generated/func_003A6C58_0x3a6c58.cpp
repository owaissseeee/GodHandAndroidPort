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

// Function: func_003A6C58
// Address: 0x3a6c58 - 0x3a6cd8
void func_003A6C58_0x3a6c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003A6C58_0x3a6c58");
#endif

    switch (ctx->pc) {
        case 0x3a6cc4u: goto label_3a6cc4;
        default: break;
    }

    ctx->pc = 0x3a6c58u;

    // 0x3a6c58: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3a6c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3a6c5c: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x3a6c5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x3a6c60: 0x8c4da62c  lw          $t5, -0x59D4($v0)
    ctx->pc = 0x3a6c60u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x3FA62Cu));
    // 0x3a6c64: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x3a6c64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x3a6c68: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x3a6c68u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6c6c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3a6c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3a6c70: 0xffa600b0  sd          $a2, 0xB0($sp)
    ctx->pc = 0x3a6c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 6));
    // 0x3a6c74: 0x24020208  addiu       $v0, $zero, 0x208
    ctx->pc = 0x3a6c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x3a6c78: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3a6c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3a6c7c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3a6c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6c80: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x3a6c80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x3a6c84: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x3a6c84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3a6c88: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x3a6c88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x3a6c8c: 0xffa700b8  sd          $a3, 0xB8($sp)
    ctx->pc = 0x3a6c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 7));
    // 0x3a6c90: 0xffa800c0  sd          $t0, 0xC0($sp)
    ctx->pc = 0x3a6c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 8));
    // 0x3a6c94: 0xffa900c8  sd          $t1, 0xC8($sp)
    ctx->pc = 0x3a6c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 9));
    // 0x3a6c98: 0xffaa00d0  sd          $t2, 0xD0($sp)
    ctx->pc = 0x3a6c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 10));
    // 0x3a6c9c: 0xffab00d8  sd          $t3, 0xD8($sp)
    ctx->pc = 0x3a6c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 11));
    // 0x3a6ca0: 0xe7ac00a0  swc1        $f12, 0xA0($sp)
    ctx->pc = 0x3a6ca0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x3a6ca4: 0xe7ae00a4  swc1        $f14, 0xA4($sp)
    ctx->pc = 0x3a6ca4u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x3a6ca8: 0xe7b000a8  swc1        $f16, 0xA8($sp)
    ctx->pc = 0x3a6ca8u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x3a6cac: 0xe7b200ac  swc1        $f18, 0xAC($sp)
    ctx->pc = 0x3a6cacu;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x3a6cb0: 0xa7a2000c  sh          $v0, 0xC($sp)
    ctx->pc = 0x3a6cb0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x3a6cb4: 0xafac0010  sw          $t4, 0x10($sp)
    ctx->pc = 0x3a6cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 12));
    // 0x3a6cb8: 0xafad0054  sw          $t5, 0x54($sp)
    ctx->pc = 0x3a6cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 13));
    // 0x3a6cbc: 0xc0ea762  jal         func_3A9D88
    ctx->pc = 0x3A6CBCu;
    SET_GPR_U32(ctx, 31, 0x3A6CC4u);
    ctx->pc = 0x3A6CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6CBCu;
    // 0x3a6cc0: 0xafac0000  sw          $t4, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9D88u, 0x3A6CBCu, 0x3A6CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6CC4u;
label_3a6cc4:
    // 0x3a6cc4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3a6cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a6cc8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3a6cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3a6ccc: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a6cccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A6CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6CD0u;
        // 0x3a6cd4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A6CD8u;
}
