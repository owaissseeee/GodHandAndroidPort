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

// Function: func_00338F30
// Address: 0x338f30 - 0x338f78
void func_00338F30_0x338f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00338F30_0x338f30");
#endif

    switch (ctx->pc) {
        case 0x338f30u: goto label_338f30;
        case 0x338f34u: goto label_338f34;
        case 0x338f38u: goto label_338f38;
        case 0x338f3cu: goto label_338f3c;
        case 0x338f40u: goto label_338f40;
        case 0x338f44u: goto label_338f44;
        case 0x338f48u: goto label_338f48;
        case 0x338f4cu: goto label_338f4c;
        case 0x338f50u: goto label_338f50;
        case 0x338f54u: goto label_338f54;
        case 0x338f58u: goto label_338f58;
        case 0x338f5cu: goto label_338f5c;
        case 0x338f60u: goto label_338f60;
        case 0x338f64u: goto label_338f64;
        case 0x338f68u: goto label_338f68;
        case 0x338f6cu: goto label_338f6c;
        case 0x338f70u: goto label_338f70;
        case 0x338f74u: goto label_338f74;
        default: break;
    }

    ctx->pc = 0x338f30u;

label_338f30:
    // 0x338f30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x338f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_338f34:
    // 0x338f34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x338f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_338f38:
    // 0x338f38: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
label_338f3c:
    if (ctx->pc == 0x338F3Cu) {
        ctx->pc = 0x338F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338F38u;
        // 0x338f3c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338F40u;
        goto label_338f40;
    }
    ctx->pc = 0x338F38u;
    {
        const bool branch_taken_0x338f38 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x338F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338F38u;
        // 0x338f3c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338f38) {
            ctx->pc = 0x338F48u;
            goto label_338f48;
        }
    }
    ctx->pc = 0x338F40u;
label_338f40:
    // 0x338f40: 0x1000000a  b           . + 4 + (0xA << 2)
label_338f44:
    if (ctx->pc == 0x338F44u) {
        ctx->pc = 0x338F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338F40u;
        // 0x338f44: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338F48u;
        goto label_338f48;
    }
    ctx->pc = 0x338F40u;
    {
        const bool branch_taken_0x338f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x338F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338F40u;
        // 0x338f44: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338f40) {
            ctx->pc = 0x338F6Cu;
            goto label_338f6c;
        }
    }
    ctx->pc = 0x338F48u;
label_338f48:
    // 0x338f48: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_338f4c:
    if (ctx->pc == 0x338F4Cu) {
        ctx->pc = 0x338F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338F48u;
        // 0x338f4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338F50u;
        goto label_338f50;
    }
    ctx->pc = 0x338F48u;
    {
        const bool branch_taken_0x338f48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x338F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338F48u;
        // 0x338f4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338f48) {
            ctx->pc = 0x338F6Cu;
            goto label_338f6c;
        }
    }
    ctx->pc = 0x338F50u;
label_338f50:
    // 0x338f50: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x338f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_338f54:
    // 0x338f54: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_338f58:
    if (ctx->pc == 0x338F58u) {
        ctx->pc = 0x338F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338F54u;
        // 0x338f58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338F5Cu;
        goto label_338f5c;
    }
    ctx->pc = 0x338F54u;
    {
        const bool branch_taken_0x338f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x338f54) {
            ctx->pc = 0x338F58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x338F54u;
            // 0x338f58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x338F6Cu;
            goto label_338f6c;
        }
    }
    ctx->pc = 0x338F5Cu;
label_338f5c:
    // 0x338f5c: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x338f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_338f60:
    // 0x338f60: 0x40f809  jalr        $v0
label_338f64:
    if (ctx->pc == 0x338F64u) {
        ctx->pc = 0x338F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338F60u;
        // 0x338f64: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338F68u;
        goto label_338f68;
    }
    ctx->pc = 0x338F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x338F68u);
        ctx->pc = 0x338F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338F60u;
        // 0x338f64: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338F60u, 0x338F68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x338F68u;
label_338f68:
    // 0x338f68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x338f68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_338f6c:
    // 0x338f6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x338f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_338f70:
    // 0x338f70: 0x3e00008  jr          $ra
label_338f74:
    if (ctx->pc == 0x338F74u) {
        ctx->pc = 0x338F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338F70u;
        // 0x338f74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338F78u;
        goto label_fallthrough_0x338f70;
    }
    ctx->pc = 0x338F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338F70u;
        // 0x338f74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x338f70:
    ctx->pc = 0x338F78u;
}
