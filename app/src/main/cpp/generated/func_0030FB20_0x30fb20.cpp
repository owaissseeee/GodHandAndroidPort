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

// Function: func_0030FB20
// Address: 0x30fb20 - 0x30fb70
void func_0030FB20_0x30fb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0030FB20_0x30fb20");
#endif

    switch (ctx->pc) {
        case 0x30fb20u: goto label_30fb20;
        case 0x30fb24u: goto label_30fb24;
        case 0x30fb28u: goto label_30fb28;
        case 0x30fb2cu: goto label_30fb2c;
        case 0x30fb30u: goto label_30fb30;
        case 0x30fb34u: goto label_30fb34;
        case 0x30fb38u: goto label_30fb38;
        case 0x30fb3cu: goto label_30fb3c;
        case 0x30fb40u: goto label_30fb40;
        case 0x30fb44u: goto label_30fb44;
        case 0x30fb48u: goto label_30fb48;
        case 0x30fb4cu: goto label_30fb4c;
        case 0x30fb50u: goto label_30fb50;
        case 0x30fb54u: goto label_30fb54;
        case 0x30fb58u: goto label_30fb58;
        case 0x30fb5cu: goto label_30fb5c;
        case 0x30fb60u: goto label_30fb60;
        case 0x30fb64u: goto label_30fb64;
        case 0x30fb68u: goto label_30fb68;
        case 0x30fb6cu: goto label_30fb6c;
        default: break;
    }

    ctx->pc = 0x30fb20u;

label_30fb20:
    // 0x30fb20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30fb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_30fb24:
    // 0x30fb24: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x30fb24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_30fb28:
    // 0x30fb28: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x30fb28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_30fb2c:
    // 0x30fb2c: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_30fb30:
    if (ctx->pc == 0x30FB30u) {
        ctx->pc = 0x30FB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FB2Cu;
        // 0x30fb30: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30FB34u;
        goto label_30fb34;
    }
    ctx->pc = 0x30FB2Cu;
    {
        const bool branch_taken_0x30fb2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FB2Cu;
        // 0x30fb30: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fb2c) {
            ctx->pc = 0x30FB5Cu;
            goto label_30fb5c;
        }
    }
    ctx->pc = 0x30FB34u;
label_30fb34:
    // 0x30fb34: 0xc0c3f30  jal         func_30FCC0
label_30fb38:
    if (ctx->pc == 0x30FB38u) {
        ctx->pc = 0x30FB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FB34u;
        // 0x30fb38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30FB3Cu;
        goto label_30fb3c;
    }
    ctx->pc = 0x30FB34u;
    SET_GPR_U32(ctx, 31, 0x30FB3Cu);
    ctx->pc = 0x30FB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FB34u;
    // 0x30fb38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FCC0u, 0x30FB34u, 0x30FB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FB3Cu;
label_30fb3c:
    // 0x30fb3c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_30fb40:
    if (ctx->pc == 0x30FB40u) {
        ctx->pc = 0x30FB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FB3Cu;
        // 0x30fb40: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30FB44u;
        goto label_30fb44;
    }
    ctx->pc = 0x30FB3Cu;
    {
        const bool branch_taken_0x30fb3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30FB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FB3Cu;
        // 0x30fb40: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fb3c) {
            ctx->pc = 0x30FB60u;
            goto label_30fb60;
        }
    }
    ctx->pc = 0x30FB44u;
label_30fb44:
    // 0x30fb44: 0x8e020214  lw          $v0, 0x214($s0)
    ctx->pc = 0x30fb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_30fb48:
    // 0x30fb48: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x30fb48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_30fb4c:
    // 0x30fb4c: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x30fb4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_30fb50:
    // 0x30fb50: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x30fb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_30fb54:
    // 0x30fb54: 0x60f809  jalr        $v1
label_30fb58:
    if (ctx->pc == 0x30FB58u) {
        ctx->pc = 0x30FB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FB54u;
        // 0x30fb58: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30FB5Cu;
        goto label_30fb5c;
    }
    ctx->pc = 0x30FB54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x30FB5Cu);
        ctx->pc = 0x30FB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FB54u;
        // 0x30fb58: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30FB54u, 0x30FB5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30FB5Cu;
label_30fb5c:
    // 0x30fb5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30fb5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30fb60:
    // 0x30fb60: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x30fb60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_30fb64:
    // 0x30fb64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30fb64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30fb68:
    // 0x30fb68: 0x3e00008  jr          $ra
label_30fb6c:
    if (ctx->pc == 0x30FB6Cu) {
        ctx->pc = 0x30FB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FB68u;
        // 0x30fb6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30FB70u;
        goto label_fallthrough_0x30fb68;
    }
    ctx->pc = 0x30FB68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30FB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FB68u;
        // 0x30fb6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30FB68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x30fb68:
    ctx->pc = 0x30FB70u;
}
