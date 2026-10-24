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

// Function: func_00171A08
// Address: 0x171a08 - 0x171a70
void func_00171A08_0x171a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00171A08_0x171a08");
#endif

    switch (ctx->pc) {
        case 0x171a60u: goto label_171a60;
        default: break;
    }

    ctx->pc = 0x171a08u;

    // 0x171a08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x171a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x171a0c: 0x24830490  addiu       $v1, $a0, 0x490
    ctx->pc = 0x171a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1168));
    // 0x171a10: 0x10650007  beq         $v1, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x171A10u;
    {
        const bool branch_taken_0x171a10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x171A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171A10u;
        // 0x171a14: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171a10) {
            ctx->pc = 0x171A30u;
            goto label_171a30;
        }
    }
    ctx->pc = 0x171A18u;
    // 0x171a18: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x171a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171a1c: 0xe4800490  swc1        $f0, 0x490($a0)
    ctx->pc = 0x171a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1168), bits); }
    // 0x171a20: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x171a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x171a24: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x171a24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x171a28: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x171a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171a2c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x171a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_171a30:
    // 0x171a30: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x171a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x171a34: 0x50430008  beql        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x171A34u;
    {
        const bool branch_taken_0x171a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x171a34) {
            ctx->pc = 0x171A38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171A34u;
            // 0x171a38: 0x8c8500f0  lw          $a1, 0xF0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x171A58u;
            goto label_171a58;
        }
    }
    ctx->pc = 0x171A3Cu;
    // 0x171a3c: 0xc4800490  lwc1        $f0, 0x490($a0)
    ctx->pc = 0x171a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171a40: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x171a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x171a44: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x171a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x171a48: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x171a48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x171a4c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x171a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171a50: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x171a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x171a54: 0x8c8500f0  lw          $a1, 0xF0($a0)
    ctx->pc = 0x171a54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
label_171a58:
    // 0x171a58: 0xc05c5f0  jal         func_1717C0
    ctx->pc = 0x171A58u;
    SET_GPR_U32(ctx, 31, 0x171A60u);
    ctx->pc = 0x171A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171A58u;
    // 0x171a5c: 0x24860100  addiu       $a2, $a0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1717C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1717C0u, 0x171A58u, 0x171A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171A60u;
label_171a60:
    // 0x171a60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171a64: 0x3e00008  jr          $ra
    ctx->pc = 0x171A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171A64u;
        // 0x171a68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171A6Cu;
    // 0x171a6c: 0x0  nop
    ctx->pc = 0x171a6cu;
    // NOP
    ctx->pc = 0x171a70u;
}
