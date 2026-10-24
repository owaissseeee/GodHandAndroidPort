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

// Function: _IO_sputbackc
// Address: 0x38cd18 - 0x38cd98
void ps2__IO_sputbackc_0x38cd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__IO_sputbackc_0x38cd18");
#endif

    switch (ctx->pc) {
        case 0x38cd18u: goto label_38cd18;
        case 0x38cd1cu: goto label_38cd1c;
        case 0x38cd20u: goto label_38cd20;
        case 0x38cd24u: goto label_38cd24;
        case 0x38cd28u: goto label_38cd28;
        case 0x38cd2cu: goto label_38cd2c;
        case 0x38cd30u: goto label_38cd30;
        case 0x38cd34u: goto label_38cd34;
        case 0x38cd38u: goto label_38cd38;
        case 0x38cd3cu: goto label_38cd3c;
        case 0x38cd40u: goto label_38cd40;
        case 0x38cd44u: goto label_38cd44;
        case 0x38cd48u: goto label_38cd48;
        case 0x38cd4cu: goto label_38cd4c;
        case 0x38cd50u: goto label_38cd50;
        case 0x38cd54u: goto label_38cd54;
        case 0x38cd58u: goto label_38cd58;
        case 0x38cd5cu: goto label_38cd5c;
        case 0x38cd60u: goto label_38cd60;
        case 0x38cd64u: goto label_38cd64;
        case 0x38cd68u: goto label_38cd68;
        case 0x38cd6cu: goto label_38cd6c;
        case 0x38cd70u: goto label_38cd70;
        case 0x38cd74u: goto label_38cd74;
        case 0x38cd78u: goto label_38cd78;
        case 0x38cd7cu: goto label_38cd7c;
        case 0x38cd80u: goto label_38cd80;
        case 0x38cd84u: goto label_38cd84;
        case 0x38cd88u: goto label_38cd88;
        case 0x38cd8cu: goto label_38cd8c;
        case 0x38cd90u: goto label_38cd90;
        case 0x38cd94u: goto label_38cd94;
        default: break;
    }

    ctx->pc = 0x38cd18u;

label_38cd18:
    // 0x38cd18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38cd18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_38cd1c:
    // 0x38cd1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38cd1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_38cd20:
    // 0x38cd20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38cd20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_38cd24:
    // 0x38cd24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38cd24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38cd28:
    // 0x38cd28: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x38cd28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_38cd2c:
    // 0x38cd2c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x38cd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_38cd30:
    // 0x38cd30: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x38cd30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_38cd34:
    // 0x38cd34: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_38cd38:
    if (ctx->pc == 0x38CD38u) {
        ctx->pc = 0x38CD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CD34u;
        // 0x38cd38: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CD3Cu;
        goto label_38cd3c;
    }
    ctx->pc = 0x38CD34u;
    {
        const bool branch_taken_0x38cd34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CD34u;
        // 0x38cd38: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cd34) {
            ctx->pc = 0x38CD54u;
            goto label_38cd54;
        }
    }
    ctx->pc = 0x38CD3Cu;
label_38cd3c:
    // 0x38cd3c: 0x9064ffff  lbu         $a0, -0x1($v1)
    ctx->pc = 0x38cd3cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967295)));
label_38cd40:
    // 0x38cd40: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
label_38cd44:
    if (ctx->pc == 0x38CD44u) {
        ctx->pc = 0x38CD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CD40u;
        // 0x38cd44: 0x8e030050  lw          $v1, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CD48u;
        goto label_38cd48;
    }
    ctx->pc = 0x38CD40u;
    {
        const bool branch_taken_0x38cd40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x38cd40) {
            ctx->pc = 0x38CD44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38CD40u;
            // 0x38cd44: 0x8e030050  lw          $v1, 0x50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38CD58u;
            goto label_38cd58;
        }
    }
    ctx->pc = 0x38CD48u;
label_38cd48:
    // 0x38cd48: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x38cd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_38cd4c:
    // 0x38cd4c: 0x10000006  b           . + 4 + (0x6 << 2)
label_38cd50:
    if (ctx->pc == 0x38CD50u) {
        ctx->pc = 0x38CD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CD4Cu;
        // 0x38cd50: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CD54u;
        goto label_38cd54;
    }
    ctx->pc = 0x38CD4Cu;
    {
        const bool branch_taken_0x38cd4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CD4Cu;
        // 0x38cd50: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cd4c) {
            ctx->pc = 0x38CD68u;
            goto label_38cd68;
        }
    }
    ctx->pc = 0x38CD54u;
label_38cd54:
    // 0x38cd54: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x38cd54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_38cd58:
    // 0x38cd58: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x38cd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_38cd5c:
    // 0x38cd5c: 0x40f809  jalr        $v0
label_38cd60:
    if (ctx->pc == 0x38CD60u) {
        ctx->pc = 0x38CD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CD5Cu;
        // 0x38cd60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CD64u;
        goto label_38cd64;
    }
    ctx->pc = 0x38CD5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38CD64u);
        ctx->pc = 0x38CD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CD5Cu;
        // 0x38cd60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CD5Cu, 0x38CD64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38CD64u;
label_38cd64:
    // 0x38cd64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x38cd64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38cd68:
    // 0x38cd68: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x38cd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38cd6c:
    // 0x38cd6c: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
label_38cd70:
    if (ctx->pc == 0x38CD70u) {
        ctx->pc = 0x38CD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CD6Cu;
        // 0x38cd70: 0x2403ffef  addiu       $v1, $zero, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CD74u;
        goto label_38cd74;
    }
    ctx->pc = 0x38CD6Cu;
    {
        const bool branch_taken_0x38cd6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x38CD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CD6Cu;
        // 0x38cd70: 0x2403ffef  addiu       $v1, $zero, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cd6c) {
            ctx->pc = 0x38CD80u;
            goto label_38cd80;
        }
    }
    ctx->pc = 0x38CD74u;
label_38cd74:
    // 0x38cd74: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x38cd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38cd78:
    // 0x38cd78: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x38cd78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_38cd7c:
    // 0x38cd7c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x38cd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_38cd80:
    // 0x38cd80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38cd80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38cd84:
    // 0x38cd84: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x38cd84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38cd88:
    // 0x38cd88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38cd88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38cd8c:
    // 0x38cd8c: 0x3e00008  jr          $ra
label_38cd90:
    if (ctx->pc == 0x38CD90u) {
        ctx->pc = 0x38CD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CD8Cu;
        // 0x38cd90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CD94u;
        goto label_38cd94;
    }
    ctx->pc = 0x38CD8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38CD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CD8Cu;
        // 0x38cd90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CD8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38CD94u;
label_38cd94:
    // 0x38cd94: 0x0  nop
    ctx->pc = 0x38cd94u;
    // NOP
    ctx->pc = 0x38cd98u;
}
