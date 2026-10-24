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

// Function: func_0034DDE0
// Address: 0x34dde0 - 0x34de20
void func_0034DDE0_0x34dde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034DDE0_0x34dde0");
#endif

    switch (ctx->pc) {
        case 0x34dde0u: goto label_34dde0;
        case 0x34dde4u: goto label_34dde4;
        case 0x34dde8u: goto label_34dde8;
        case 0x34ddecu: goto label_34ddec;
        case 0x34ddf0u: goto label_34ddf0;
        case 0x34ddf4u: goto label_34ddf4;
        case 0x34ddf8u: goto label_34ddf8;
        case 0x34ddfcu: goto label_34ddfc;
        case 0x34de00u: goto label_34de00;
        case 0x34de04u: goto label_34de04;
        case 0x34de08u: goto label_34de08;
        case 0x34de0cu: goto label_34de0c;
        case 0x34de10u: goto label_34de10;
        case 0x34de14u: goto label_34de14;
        case 0x34de18u: goto label_34de18;
        case 0x34de1cu: goto label_34de1c;
        default: break;
    }

    ctx->pc = 0x34dde0u;

label_34dde0:
    // 0x34dde0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34dde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_34dde4:
    // 0x34dde4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34dde4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_34dde8:
    // 0x34dde8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x34dde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_34ddec:
    // 0x34ddec: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_34ddf0:
    if (ctx->pc == 0x34DDF0u) {
        ctx->pc = 0x34DDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DDECu;
        // 0x34ddf0: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34DDF4u;
        goto label_34ddf4;
    }
    ctx->pc = 0x34DDECu;
    {
        const bool branch_taken_0x34ddec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34DDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DDECu;
        // 0x34ddf0: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ddec) {
            ctx->pc = 0x34DDF8u;
            goto label_34ddf8;
        }
    }
    ctx->pc = 0x34DDF4u;
label_34ddf4:
    // 0x34ddf4: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x34ddf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_34ddf8:
    // 0x34ddf8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_34ddfc:
    if (ctx->pc == 0x34DDFCu) {
        ctx->pc = 0x34DDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DDF8u;
        // 0x34ddfc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34DE00u;
        goto label_34de00;
    }
    ctx->pc = 0x34DDF8u;
    {
        const bool branch_taken_0x34ddf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DDF8u;
        // 0x34ddfc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ddf8) {
            ctx->pc = 0x34DE18u;
            goto label_34de18;
        }
    }
    ctx->pc = 0x34DE00u;
label_34de00:
    // 0x34de00: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x34de00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_34de04:
    // 0x34de04: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_34de08:
    if (ctx->pc == 0x34DE08u) {
        ctx->pc = 0x34DE0Cu;
        goto label_34de0c;
    }
    ctx->pc = 0x34DE04u;
    {
        const bool branch_taken_0x34de04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34de04) {
            ctx->pc = 0x34DE18u;
            goto label_34de18;
        }
    }
    ctx->pc = 0x34DE0Cu;
label_34de0c:
    // 0x34de0c: 0x40f809  jalr        $v0
label_34de10:
    if (ctx->pc == 0x34DE10u) {
        ctx->pc = 0x34DE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DE0Cu;
        // 0x34de10: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34DE14u;
        goto label_34de14;
    }
    ctx->pc = 0x34DE0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34DE14u);
        ctx->pc = 0x34DE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DE0Cu;
        // 0x34de10: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34DE0Cu, 0x34DE14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34DE14u;
label_34de14:
    // 0x34de14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34de14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_34de18:
    // 0x34de18: 0x3e00008  jr          $ra
label_34de1c:
    if (ctx->pc == 0x34DE1Cu) {
        ctx->pc = 0x34DE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DE18u;
        // 0x34de1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34DE20u;
        goto label_fallthrough_0x34de18;
    }
    ctx->pc = 0x34DE18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34DE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DE18u;
        // 0x34de1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34DE18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34de18:
    ctx->pc = 0x34DE20u;
}
