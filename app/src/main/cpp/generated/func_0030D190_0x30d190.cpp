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

// Function: func_0030D190
// Address: 0x30d190 - 0x30d1f8
void func_0030D190_0x30d190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0030D190_0x30d190");
#endif

    switch (ctx->pc) {
        case 0x30d1c8u: goto label_30d1c8;
        default: break;
    }

    ctx->pc = 0x30d190u;

    // 0x30d190: 0x3c050075  lui         $a1, 0x75
    ctx->pc = 0x30d190u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)117 << 16));
    // 0x30d194: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x30d194u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x30d198: 0x8ca23d88  lw          $v0, 0x3D88($a1)
    ctx->pc = 0x30d198u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x753D88u));
    // 0x30d19c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30d19cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30d1a0: 0x8c837a18  lw          $v1, 0x7A18($a0)
    ctx->pc = 0x30d1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A18u));
    // 0x30d1a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30d1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30d1a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30d1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30d1ac: 0xaca23d88  sw          $v0, 0x3D88($a1)
    ctx->pc = 0x30d1acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x753D88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x753D88u, _value); } while (0);
    // 0x30d1b0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x30d1b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x30d1b4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x30D1B4u;
    {
        const bool branch_taken_0x30d1b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D1B4u;
        // 0x30d1b8: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d1b4) {
            ctx->pc = 0x30D1CCu;
            goto label_30d1cc;
        }
    }
    ctx->pc = 0x30D1BCu;
    // 0x30d1bc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x30d1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x30d1c0: 0xc0b29a4  jal         func_2CA690
    ctx->pc = 0x30D1C0u;
    SET_GPR_U32(ctx, 31, 0x30D1C8u);
    ctx->pc = 0x30D1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D1C0u;
    // 0x30d1c4: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA690u, 0x30D1C0u, 0x30D1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D1C8u;
label_30d1c8:
    // 0x30d1c8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x30d1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_30d1cc:
    // 0x30d1cc: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x30d1ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x30d1d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x30d1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30d1d4: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x30d1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x30d1d8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x30d1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x30d1dc: 0xf  sync
    ctx->pc = 0x30d1dcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x30d1e0: 0x42000038  ei
    ctx->pc = 0x30d1e0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x30d1e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30d1e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30d1e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30d1e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d1ec: 0x3e00008  jr          $ra
    ctx->pc = 0x30D1ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D1ECu;
        // 0x30d1f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D1ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D1F4u;
    // 0x30d1f4: 0x0  nop
    ctx->pc = 0x30d1f4u;
    // NOP
    ctx->pc = 0x30d1f8u;
}
