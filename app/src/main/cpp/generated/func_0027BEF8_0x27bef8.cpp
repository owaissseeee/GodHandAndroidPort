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

// Function: func_0027BEF8
// Address: 0x27bef8 - 0x27bfa8
void func_0027BEF8_0x27bef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027BEF8_0x27bef8");
#endif

    switch (ctx->pc) {
        case 0x27bef8u: goto label_27bef8;
        case 0x27befcu: goto label_27befc;
        case 0x27bf00u: goto label_27bf00;
        case 0x27bf04u: goto label_27bf04;
        case 0x27bf08u: goto label_27bf08;
        case 0x27bf0cu: goto label_27bf0c;
        case 0x27bf10u: goto label_27bf10;
        case 0x27bf14u: goto label_27bf14;
        case 0x27bf18u: goto label_27bf18;
        case 0x27bf1cu: goto label_27bf1c;
        case 0x27bf20u: goto label_27bf20;
        case 0x27bf24u: goto label_27bf24;
        case 0x27bf28u: goto label_27bf28;
        case 0x27bf2cu: goto label_27bf2c;
        case 0x27bf30u: goto label_27bf30;
        case 0x27bf34u: goto label_27bf34;
        case 0x27bf38u: goto label_27bf38;
        case 0x27bf3cu: goto label_27bf3c;
        case 0x27bf40u: goto label_27bf40;
        case 0x27bf44u: goto label_27bf44;
        case 0x27bf48u: goto label_27bf48;
        case 0x27bf4cu: goto label_27bf4c;
        case 0x27bf50u: goto label_27bf50;
        case 0x27bf54u: goto label_27bf54;
        case 0x27bf58u: goto label_27bf58;
        case 0x27bf5cu: goto label_27bf5c;
        case 0x27bf60u: goto label_27bf60;
        case 0x27bf64u: goto label_27bf64;
        case 0x27bf68u: goto label_27bf68;
        case 0x27bf6cu: goto label_27bf6c;
        case 0x27bf70u: goto label_27bf70;
        case 0x27bf74u: goto label_27bf74;
        case 0x27bf78u: goto label_27bf78;
        case 0x27bf7cu: goto label_27bf7c;
        case 0x27bf80u: goto label_27bf80;
        case 0x27bf84u: goto label_27bf84;
        case 0x27bf88u: goto label_27bf88;
        case 0x27bf8cu: goto label_27bf8c;
        case 0x27bf90u: goto label_27bf90;
        case 0x27bf94u: goto label_27bf94;
        case 0x27bf98u: goto label_27bf98;
        case 0x27bf9cu: goto label_27bf9c;
        case 0x27bfa0u: goto label_27bfa0;
        case 0x27bfa4u: goto label_27bfa4;
        default: break;
    }

    ctx->pc = 0x27bef8u;

label_27bef8:
    // 0x27bef8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27bef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_27befc:
    // 0x27befc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x27befcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27bf00:
    // 0x27bf00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27bf00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_27bf04:
    // 0x27bf04: 0x90c202f5  lbu         $v0, 0x2F5($a2)
    ctx->pc = 0x27bf04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 757)));
label_27bf08:
    // 0x27bf08: 0x2c42000b  sltiu       $v0, $v0, 0xB
    ctx->pc = 0x27bf08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_27bf0c:
    // 0x27bf0c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_27bf10:
    if (ctx->pc == 0x27BF10u) {
        ctx->pc = 0x27BF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BF0Cu;
        // 0x27bf10: 0xa0c002f5  sb          $zero, 0x2F5($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 757), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BF14u;
        goto label_27bf14;
    }
    ctx->pc = 0x27BF0Cu;
    {
        const bool branch_taken_0x27bf0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27bf0c) {
            ctx->pc = 0x27BF10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27BF0Cu;
            // 0x27bf10: 0xa0c002f5  sb          $zero, 0x2F5($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 757), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27BF14u;
            goto label_27bf14;
        }
    }
    ctx->pc = 0x27BF14u;
label_27bf14:
    // 0x27bf14: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x27bf14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_27bf18:
    // 0x27bf18: 0x90c302f5  lbu         $v1, 0x2F5($a2)
    ctx->pc = 0x27bf18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 757)));
label_27bf1c:
    // 0x27bf1c: 0x2447fe18  addiu       $a3, $v0, -0x1E8
    ctx->pc = 0x27bf1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966808));
label_27bf20:
    // 0x27bf20: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x27bf20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27bf24:
    // 0x27bf24: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x27bf24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_27bf28:
    // 0x27bf28: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x27bf28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_27bf2c:
    // 0x27bf2c: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x27bf2cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_27bf30:
    // 0x27bf30: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_27bf34:
    if (ctx->pc == 0x27BF34u) {
        ctx->pc = 0x27BF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BF30u;
        // 0x27bf34: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BF38u;
        goto label_27bf38;
    }
    ctx->pc = 0x27BF30u;
    {
        const bool branch_taken_0x27bf30 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x27BF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BF30u;
        // 0x27bf34: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bf30) {
            ctx->pc = 0x27BF5Cu;
            goto label_27bf5c;
        }
    }
    ctx->pc = 0x27BF38u;
label_27bf38:
    // 0x27bf38: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x27bf38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_27bf3c:
    // 0x27bf3c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x27bf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_27bf40:
    // 0x27bf40: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x27bf40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_27bf44:
    // 0x27bf44: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x27bf44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27bf48:
    // 0x27bf48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27bf48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_27bf4c:
    // 0x27bf4c: 0xdc68fff8  ld          $t0, -0x8($v1)
    ctx->pc = 0x27bf4cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_27bf50:
    // 0x27bf50: 0x8383f  dsra32      $a3, $t0, 0
    ctx->pc = 0x27bf50u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 8) >> (32 + 0));
label_27bf54:
    // 0x27bf54: 0x10000004  b           . + 4 + (0x4 << 2)
label_27bf58:
    if (ctx->pc == 0x27BF58u) {
        ctx->pc = 0x27BF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BF54u;
        // 0x27bf58: 0x2543fe18  addiu       $v1, $t2, -0x1E8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294966808));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BF5Cu;
        goto label_27bf5c;
    }
    ctx->pc = 0x27BF54u;
    {
        const bool branch_taken_0x27bf54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BF54u;
        // 0x27bf58: 0x2543fe18  addiu       $v1, $t2, -0x1E8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294966808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bf54) {
            ctx->pc = 0x27BF68u;
            goto label_27bf68;
        }
    }
    ctx->pc = 0x27BF5Cu;
label_27bf5c:
    // 0x27bf5c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x27bf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_27bf60:
    // 0x27bf60: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x27bf60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_27bf64:
    // 0x27bf64: 0x2543fe18  addiu       $v1, $t2, -0x1E8
    ctx->pc = 0x27bf64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294966808));
label_27bf68:
    // 0x27bf68: 0x910c0  sll         $v0, $t1, 3
    ctx->pc = 0x27bf68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_27bf6c:
    // 0x27bf6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27bf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27bf70:
    // 0x27bf70: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_27bf74:
    if (ctx->pc == 0x27BF74u) {
        ctx->pc = 0x27BF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BF70u;
        // 0x27bf74: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BF78u;
        goto label_27bf78;
    }
    ctx->pc = 0x27BF70u;
    {
        const bool branch_taken_0x27bf70 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x27BF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BF70u;
        // 0x27bf74: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bf70) {
            ctx->pc = 0x27BF8Cu;
            goto label_27bf8c;
        }
    }
    ctx->pc = 0x27BF78u;
label_27bf78:
    // 0x27bf78: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x27bf78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_27bf7c:
    // 0x27bf7c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x27bf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_27bf80:
    // 0x27bf80: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x27bf80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_27bf84:
    // 0x27bf84: 0x10000002  b           . + 4 + (0x2 << 2)
label_27bf88:
    if (ctx->pc == 0x27BF88u) {
        ctx->pc = 0x27BF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BF84u;
        // 0x27bf88: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BF8Cu;
        goto label_27bf8c;
    }
    ctx->pc = 0x27BF84u;
    {
        const bool branch_taken_0x27bf84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BF84u;
        // 0x27bf88: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bf84) {
            ctx->pc = 0x27BF90u;
            goto label_27bf90;
        }
    }
    ctx->pc = 0x27BF8Cu;
label_27bf8c:
    // 0x27bf8c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x27bf8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_27bf90:
    // 0x27bf90: 0xe0f809  jalr        $a3
label_27bf94:
    if (ctx->pc == 0x27BF94u) {
        ctx->pc = 0x27BF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BF90u;
        // 0x27bf94: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BF98u;
        goto label_27bf98;
    }
    ctx->pc = 0x27BF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x27BF98u);
        ctx->pc = 0x27BF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BF90u;
        // 0x27bf94: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27BF90u, 0x27BF98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27BF98u;
label_27bf98:
    // 0x27bf98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27bf98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27bf9c:
    // 0x27bf9c: 0x3e00008  jr          $ra
label_27bfa0:
    if (ctx->pc == 0x27BFA0u) {
        ctx->pc = 0x27BFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BF9Cu;
        // 0x27bfa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27BFA4u;
        goto label_27bfa4;
    }
    ctx->pc = 0x27BF9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27BFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BF9Cu;
        // 0x27bfa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27BF9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27BFA4u;
label_27bfa4:
    // 0x27bfa4: 0x0  nop
    ctx->pc = 0x27bfa4u;
    // NOP
    ctx->pc = 0x27bfa8u;
}
