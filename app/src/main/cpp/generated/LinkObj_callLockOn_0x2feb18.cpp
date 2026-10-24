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

// Function: LinkObj_callLockOn
// Address: 0x2feb18 - 0x2feb80
void LinkObj_callLockOn_0x2feb18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LinkObj_callLockOn_0x2feb18");
#endif

    switch (ctx->pc) {
        case 0x2feb18u: goto label_2feb18;
        case 0x2feb1cu: goto label_2feb1c;
        case 0x2feb20u: goto label_2feb20;
        case 0x2feb24u: goto label_2feb24;
        case 0x2feb28u: goto label_2feb28;
        case 0x2feb2cu: goto label_2feb2c;
        case 0x2feb30u: goto label_2feb30;
        case 0x2feb34u: goto label_2feb34;
        case 0x2feb38u: goto label_2feb38;
        case 0x2feb3cu: goto label_2feb3c;
        case 0x2feb40u: goto label_2feb40;
        case 0x2feb44u: goto label_2feb44;
        case 0x2feb48u: goto label_2feb48;
        case 0x2feb4cu: goto label_2feb4c;
        case 0x2feb50u: goto label_2feb50;
        case 0x2feb54u: goto label_2feb54;
        case 0x2feb58u: goto label_2feb58;
        case 0x2feb5cu: goto label_2feb5c;
        case 0x2feb60u: goto label_2feb60;
        case 0x2feb64u: goto label_2feb64;
        case 0x2feb68u: goto label_2feb68;
        case 0x2feb6cu: goto label_2feb6c;
        case 0x2feb70u: goto label_2feb70;
        case 0x2feb74u: goto label_2feb74;
        case 0x2feb78u: goto label_2feb78;
        case 0x2feb7cu: goto label_2feb7c;
        default: break;
    }

    ctx->pc = 0x2feb18u;

label_2feb18:
    // 0x2feb18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2feb18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2feb1c:
    // 0x2feb1c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2feb1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2feb20:
    // 0x2feb20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2feb20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2feb24:
    // 0x2feb24: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x2feb24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_2feb28:
    // 0x2feb28: 0x8ca3011c  lw          $v1, 0x11C($a1)
    ctx->pc = 0x2feb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 284)));
label_2feb2c:
    // 0x2feb2c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2feb2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2feb30:
    // 0x2feb30: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_2feb34:
    if (ctx->pc == 0x2FEB34u) {
        ctx->pc = 0x2FEB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEB30u;
        // 0x2feb34: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEB38u;
        goto label_2feb38;
    }
    ctx->pc = 0x2FEB30u;
    {
        const bool branch_taken_0x2feb30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FEB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEB30u;
        // 0x2feb34: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2feb30) {
            ctx->pc = 0x2FEB78u;
            goto label_2feb78;
        }
    }
    ctx->pc = 0x2FEB38u;
label_2feb38:
    // 0x2feb38: 0x8ca20114  lw          $v0, 0x114($a1)
    ctx->pc = 0x2feb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 276)));
label_2feb3c:
    // 0x2feb3c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_2feb40:
    if (ctx->pc == 0x2FEB40u) {
        ctx->pc = 0x2FEB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEB3Cu;
        // 0x2feb40: 0x8ca200f0  lw          $v0, 0xF0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEB44u;
        goto label_2feb44;
    }
    ctx->pc = 0x2FEB3Cu;
    {
        const bool branch_taken_0x2feb3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2feb3c) {
            ctx->pc = 0x2FEB40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FEB3Cu;
            // 0x2feb40: 0x8ca200f0  lw          $v0, 0xF0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FEB64u;
            goto label_2feb64;
        }
    }
    ctx->pc = 0x2FEB44u;
label_2feb44:
    // 0x2feb44: 0x8c420250  lw          $v0, 0x250($v0)
    ctx->pc = 0x2feb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
label_2feb48:
    // 0x2feb48: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2feb48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_2feb4c:
    // 0x2feb4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2feb50:
    if (ctx->pc == 0x2FEB50u) {
        ctx->pc = 0x2FEB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEB4Cu;
        // 0x2feb50: 0x311fa  dsrl        $v0, $v1, 7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 7);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEB54u;
        goto label_2feb54;
    }
    ctx->pc = 0x2FEB4Cu;
    {
        const bool branch_taken_0x2feb4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEB4Cu;
        // 0x2feb50: 0x311fa  dsrl        $v0, $v1, 7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2feb4c) {
            ctx->pc = 0x2FEB60u;
            goto label_2feb60;
        }
    }
    ctx->pc = 0x2FEB54u;
label_2feb54:
    // 0x2feb54: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2feb54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2feb58:
    // 0x2feb58: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2feb5c:
    if (ctx->pc == 0x2FEB5Cu) {
        ctx->pc = 0x2FEB60u;
        goto label_2feb60;
    }
    ctx->pc = 0x2FEB58u;
    {
        const bool branch_taken_0x2feb58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2feb58) {
            ctx->pc = 0x2FEB78u;
            goto label_2feb78;
        }
    }
    ctx->pc = 0x2FEB60u;
label_2feb60:
    // 0x2feb60: 0x8ca200f0  lw          $v0, 0xF0($a1)
    ctx->pc = 0x2feb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
label_2feb64:
    // 0x2feb64: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x2feb64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
label_2feb68:
    // 0x2feb68: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x2feb68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_2feb6c:
    // 0x2feb6c: 0x60f809  jalr        $v1
label_2feb70:
    if (ctx->pc == 0x2FEB70u) {
        ctx->pc = 0x2FEB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEB6Cu;
        // 0x2feb70: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEB74u;
        goto label_2feb74;
    }
    ctx->pc = 0x2FEB6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2FEB74u);
        ctx->pc = 0x2FEB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEB6Cu;
        // 0x2feb70: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FEB6Cu, 0x2FEB74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FEB74u;
label_2feb74:
    // 0x2feb74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2feb74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2feb78:
    // 0x2feb78: 0x3e00008  jr          $ra
label_2feb7c:
    if (ctx->pc == 0x2FEB7Cu) {
        ctx->pc = 0x2FEB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEB78u;
        // 0x2feb7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FEB80u;
        goto label_fallthrough_0x2feb78;
    }
    ctx->pc = 0x2FEB78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FEB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEB78u;
        // 0x2feb7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FEB78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2feb78:
    ctx->pc = 0x2FEB80u;
}
