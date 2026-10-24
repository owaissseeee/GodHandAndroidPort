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

// Function: func_00334008
// Address: 0x334008 - 0x334038
void func_00334008_0x334008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00334008_0x334008");
#endif

    switch (ctx->pc) {
        case 0x334008u: goto label_334008;
        case 0x33400cu: goto label_33400c;
        case 0x334010u: goto label_334010;
        case 0x334014u: goto label_334014;
        case 0x334018u: goto label_334018;
        case 0x33401cu: goto label_33401c;
        case 0x334020u: goto label_334020;
        case 0x334024u: goto label_334024;
        case 0x334028u: goto label_334028;
        case 0x33402cu: goto label_33402c;
        case 0x334030u: goto label_334030;
        case 0x334034u: goto label_334034;
        default: break;
    }

    ctx->pc = 0x334008u;

label_334008:
    // 0x334008: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x334008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
label_33400c:
    // 0x33400c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33400cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_334010:
    // 0x334010: 0x8c439f6c  lw          $v1, -0x6094($v0)
    ctx->pc = 0x334010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942572)));
label_334014:
    // 0x334014: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x334014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_334018:
    // 0x334018: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_33401c:
    if (ctx->pc == 0x33401Cu) {
        ctx->pc = 0x33401Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334018u;
        // 0x33401c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334020u;
        goto label_334020;
    }
    ctx->pc = 0x334018u;
    {
        const bool branch_taken_0x334018 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33401Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334018u;
        // 0x33401c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334018) {
            ctx->pc = 0x33402Cu;
            goto label_33402c;
        }
    }
    ctx->pc = 0x334020u;
label_334020:
    // 0x334020: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x334020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
label_334024:
    // 0x334024: 0x60f809  jalr        $v1
label_334028:
    if (ctx->pc == 0x334028u) {
        ctx->pc = 0x334028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334024u;
        // 0x334028: 0x8c449f70  lw          $a0, -0x6090($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942576)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33402Cu;
        goto label_33402c;
    }
    ctx->pc = 0x334024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33402Cu);
        ctx->pc = 0x334028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334024u;
        // 0x334028: 0x8c449f70  lw          $a0, -0x6090($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942576)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334024u, 0x33402Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33402Cu;
label_33402c:
    // 0x33402c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33402cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_334030:
    // 0x334030: 0x3e00008  jr          $ra
label_334034:
    if (ctx->pc == 0x334034u) {
        ctx->pc = 0x334034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334030u;
        // 0x334034: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334038u;
        goto label_fallthrough_0x334030;
    }
    ctx->pc = 0x334030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334030u;
        // 0x334034: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x334030:
    ctx->pc = 0x334038u;
}
