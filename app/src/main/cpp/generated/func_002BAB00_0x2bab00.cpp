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

// Function: func_002BAB00
// Address: 0x2bab00 - 0x2bab30
void func_002BAB00_0x2bab00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BAB00_0x2bab00");
#endif

    switch (ctx->pc) {
        case 0x2bab00u: goto label_2bab00;
        case 0x2bab04u: goto label_2bab04;
        case 0x2bab08u: goto label_2bab08;
        case 0x2bab0cu: goto label_2bab0c;
        case 0x2bab10u: goto label_2bab10;
        case 0x2bab14u: goto label_2bab14;
        case 0x2bab18u: goto label_2bab18;
        case 0x2bab1cu: goto label_2bab1c;
        case 0x2bab20u: goto label_2bab20;
        case 0x2bab24u: goto label_2bab24;
        case 0x2bab28u: goto label_2bab28;
        case 0x2bab2cu: goto label_2bab2c;
        default: break;
    }

    ctx->pc = 0x2bab00u;

label_2bab00:
    // 0x2bab00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bab00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2bab04:
    // 0x2bab04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bab04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2bab08:
    // 0x2bab08: 0xe48c0114  swc1        $f12, 0x114($a0)
    ctx->pc = 0x2bab08u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 276), bits); }
label_2bab0c:
    // 0x2bab0c: 0x8c820100  lw          $v0, 0x100($a0)
    ctx->pc = 0x2bab0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
label_2bab10:
    // 0x2bab10: 0x84430050  lh          $v1, 0x50($v0)
    ctx->pc = 0x2bab10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_2bab14:
    // 0x2bab14: 0x8c450054  lw          $a1, 0x54($v0)
    ctx->pc = 0x2bab14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2bab18:
    // 0x2bab18: 0xa0f809  jalr        $a1
label_2bab1c:
    if (ctx->pc == 0x2BAB1Cu) {
        ctx->pc = 0x2BAB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB18u;
        // 0x2bab1c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAB20u;
        goto label_2bab20;
    }
    ctx->pc = 0x2BAB18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2BAB20u);
        ctx->pc = 0x2BAB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB18u;
        // 0x2bab1c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAB18u, 0x2BAB20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BAB20u;
label_2bab20:
    // 0x2bab20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bab20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2bab24:
    // 0x2bab24: 0x3e00008  jr          $ra
label_2bab28:
    if (ctx->pc == 0x2BAB28u) {
        ctx->pc = 0x2BAB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB24u;
        // 0x2bab28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAB2Cu;
        goto label_2bab2c;
    }
    ctx->pc = 0x2BAB24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BAB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB24u;
        // 0x2bab28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAB24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BAB2Cu;
label_2bab2c:
    // 0x2bab2c: 0x0  nop
    ctx->pc = 0x2bab2cu;
    // NOP
    ctx->pc = 0x2bab30u;
}
