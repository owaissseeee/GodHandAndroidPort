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

// Function: SetBlendField820_1D5B90
// Address: 0x1d5b90 - 0x1d5c38
void SetBlendField820_1D5B90_0x1d5b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetBlendField820_1D5B90_0x1d5b90");
#endif

    switch (ctx->pc) {
        case 0x1d5c18u: goto label_1d5c18;
        case 0x1d5c28u: goto label_1d5c28;
        default: break;
    }

    ctx->pc = 0x1d5b90u;

    // 0x1d5b90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d5b94: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1d5b94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5b98: 0x10a00021  beqz        $a1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1D5B98u;
    {
        const bool branch_taken_0x1d5b98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5B98u;
        // 0x1d5b9c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5b98) {
            ctx->pc = 0x1D5C20u;
            goto label_1d5c20;
        }
    }
    ctx->pc = 0x1D5BA0u;
    // 0x1d5ba0: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x1d5ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1d5ba4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1d5ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1d5ba8: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x1d5ba8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x1d5bac: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x1d5bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x1d5bb0: 0x652824  and         $a1, $v1, $a1
    ctx->pc = 0x1d5bb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1d5bb4: 0x34c600a0  ori         $a2, $a2, 0xA0
    ctx->pc = 0x1d5bb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)160);
    // 0x1d5bb8: 0x34a50060  ori         $a1, $a1, 0x60
    ctx->pc = 0x1d5bb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)96);
    // 0x1d5bbc: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x1d5bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x1d5bc0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1d5bc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1d5bc4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1d5bc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1d5bc8: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1d5bc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1d5bcc: 0x34a56000  ori         $a1, $a1, 0x6000
    ctx->pc = 0x1d5bccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24576);
    // 0x1d5bd0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d5bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d5bd4: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1d5bd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1d5bd8: 0x34c6a000  ori         $a2, $a2, 0xA000
    ctx->pc = 0x1d5bd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)40960);
    // 0x1d5bdc: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1d5bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1d5be0: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1d5be0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1d5be4: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1d5be4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1d5be8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1d5be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1d5bec: 0x3c0300a0  lui         $v1, 0xA0
    ctx->pc = 0x1d5becu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)160 << 16));
    // 0x1d5bf0: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x1d5bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x1d5bf4: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1d5bf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1d5bf8: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1d5bf8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1d5bfc: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1d5bfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1d5c00: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1d5c00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1d5c04: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1d5c04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1d5c08: 0x24e40820  addiu       $a0, $a3, 0x820
    ctx->pc = 0x1d5c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 2080));
    // 0x1d5c0c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1d5c0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1d5c10: 0xc0b5a44  jal         func_2D6910
    ctx->pc = 0x1D5C10u;
    SET_GPR_U32(ctx, 31, 0x1D5C18u);
    ctx->pc = 0x1D5C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5C10u;
    // 0x1d5c14: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6910u, 0x1D5C10u, 0x1D5C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5C18u;
label_1d5c18:
    // 0x1d5c18: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5C18u;
    {
        const bool branch_taken_0x1d5c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5C18u;
        // 0x1d5c1c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5c18) {
            ctx->pc = 0x1D5C2Cu;
            goto label_1d5c2c;
        }
    }
    ctx->pc = 0x1D5C20u;
label_1d5c20:
    // 0x1d5c20: 0xc0b5a52  jal         func_2D6948
    ctx->pc = 0x1D5C20u;
    SET_GPR_U32(ctx, 31, 0x1D5C28u);
    ctx->pc = 0x1D5C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5C20u;
    // 0x1d5c24: 0x24e40820  addiu       $a0, $a3, 0x820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 2080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6948u, 0x1D5C20u, 0x1D5C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5C28u;
label_1d5c28:
    // 0x1d5c28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d5c2c:
    // 0x1d5c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5C2Cu;
        // 0x1d5c30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5C34u;
    // 0x1d5c34: 0x0  nop
    ctx->pc = 0x1d5c34u;
    // NOP
    ctx->pc = 0x1d5c38u;
}
