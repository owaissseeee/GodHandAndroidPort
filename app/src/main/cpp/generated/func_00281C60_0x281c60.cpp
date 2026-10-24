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

// Function: func_00281C60
// Address: 0x281c60 - 0x281d10
void func_00281C60_0x281c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00281C60_0x281c60");
#endif

    switch (ctx->pc) {
        case 0x281c60u: goto label_281c60;
        case 0x281c64u: goto label_281c64;
        case 0x281c68u: goto label_281c68;
        case 0x281c6cu: goto label_281c6c;
        case 0x281c70u: goto label_281c70;
        case 0x281c74u: goto label_281c74;
        case 0x281c78u: goto label_281c78;
        case 0x281c7cu: goto label_281c7c;
        case 0x281c80u: goto label_281c80;
        case 0x281c84u: goto label_281c84;
        case 0x281c88u: goto label_281c88;
        case 0x281c8cu: goto label_281c8c;
        case 0x281c90u: goto label_281c90;
        case 0x281c94u: goto label_281c94;
        case 0x281c98u: goto label_281c98;
        case 0x281c9cu: goto label_281c9c;
        case 0x281ca0u: goto label_281ca0;
        case 0x281ca4u: goto label_281ca4;
        case 0x281ca8u: goto label_281ca8;
        case 0x281cacu: goto label_281cac;
        case 0x281cb0u: goto label_281cb0;
        case 0x281cb4u: goto label_281cb4;
        case 0x281cb8u: goto label_281cb8;
        case 0x281cbcu: goto label_281cbc;
        case 0x281cc0u: goto label_281cc0;
        case 0x281cc4u: goto label_281cc4;
        case 0x281cc8u: goto label_281cc8;
        case 0x281cccu: goto label_281ccc;
        case 0x281cd0u: goto label_281cd0;
        case 0x281cd4u: goto label_281cd4;
        case 0x281cd8u: goto label_281cd8;
        case 0x281cdcu: goto label_281cdc;
        case 0x281ce0u: goto label_281ce0;
        case 0x281ce4u: goto label_281ce4;
        case 0x281ce8u: goto label_281ce8;
        case 0x281cecu: goto label_281cec;
        case 0x281cf0u: goto label_281cf0;
        case 0x281cf4u: goto label_281cf4;
        case 0x281cf8u: goto label_281cf8;
        case 0x281cfcu: goto label_281cfc;
        case 0x281d00u: goto label_281d00;
        case 0x281d04u: goto label_281d04;
        case 0x281d08u: goto label_281d08;
        case 0x281d0cu: goto label_281d0c;
        default: break;
    }

    ctx->pc = 0x281c60u;

label_281c60:
    // 0x281c60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x281c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_281c64:
    // 0x281c64: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x281c64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_281c68:
    // 0x281c68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x281c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_281c6c:
    // 0x281c6c: 0x90c202f5  lbu         $v0, 0x2F5($a2)
    ctx->pc = 0x281c6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 757)));
label_281c70:
    // 0x281c70: 0x2c42000f  sltiu       $v0, $v0, 0xF
    ctx->pc = 0x281c70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
label_281c74:
    // 0x281c74: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_281c78:
    if (ctx->pc == 0x281C78u) {
        ctx->pc = 0x281C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281C74u;
        // 0x281c78: 0xa0c002f5  sb          $zero, 0x2F5($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 757), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281C7Cu;
        goto label_281c7c;
    }
    ctx->pc = 0x281C74u;
    {
        const bool branch_taken_0x281c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x281c74) {
            ctx->pc = 0x281C78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x281C74u;
            // 0x281c78: 0xa0c002f5  sb          $zero, 0x2F5($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 757), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x281C7Cu;
            goto label_281c7c;
        }
    }
    ctx->pc = 0x281C7Cu;
label_281c7c:
    // 0x281c7c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x281c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_281c80:
    // 0x281c80: 0x90c302f5  lbu         $v1, 0x2F5($a2)
    ctx->pc = 0x281c80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 757)));
label_281c84:
    // 0x281c84: 0x2447ff58  addiu       $a3, $v0, -0xA8
    ctx->pc = 0x281c84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967128));
label_281c88:
    // 0x281c88: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x281c88u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_281c8c:
    // 0x281c8c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x281c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_281c90:
    // 0x281c90: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x281c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_281c94:
    // 0x281c94: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x281c94u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_281c98:
    // 0x281c98: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_281c9c:
    if (ctx->pc == 0x281C9Cu) {
        ctx->pc = 0x281C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281C98u;
        // 0x281c9c: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281CA0u;
        goto label_281ca0;
    }
    ctx->pc = 0x281C98u;
    {
        const bool branch_taken_0x281c98 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x281C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281C98u;
        // 0x281c9c: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281c98) {
            ctx->pc = 0x281CC4u;
            goto label_281cc4;
        }
    }
    ctx->pc = 0x281CA0u;
label_281ca0:
    // 0x281ca0: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x281ca0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_281ca4:
    // 0x281ca4: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x281ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_281ca8:
    // 0x281ca8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x281ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_281cac:
    // 0x281cac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x281cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_281cb0:
    // 0x281cb0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x281cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_281cb4:
    // 0x281cb4: 0xdc68fff8  ld          $t0, -0x8($v1)
    ctx->pc = 0x281cb4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_281cb8:
    // 0x281cb8: 0x8383f  dsra32      $a3, $t0, 0
    ctx->pc = 0x281cb8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 8) >> (32 + 0));
label_281cbc:
    // 0x281cbc: 0x10000004  b           . + 4 + (0x4 << 2)
label_281cc0:
    if (ctx->pc == 0x281CC0u) {
        ctx->pc = 0x281CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281CBCu;
        // 0x281cc0: 0x2543ff58  addiu       $v1, $t2, -0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281CC4u;
        goto label_281cc4;
    }
    ctx->pc = 0x281CBCu;
    {
        const bool branch_taken_0x281cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281CBCu;
        // 0x281cc0: 0x2543ff58  addiu       $v1, $t2, -0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281cbc) {
            ctx->pc = 0x281CD0u;
            goto label_281cd0;
        }
    }
    ctx->pc = 0x281CC4u;
label_281cc4:
    // 0x281cc4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x281cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_281cc8:
    // 0x281cc8: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x281cc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_281ccc:
    // 0x281ccc: 0x2543ff58  addiu       $v1, $t2, -0xA8
    ctx->pc = 0x281cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967128));
label_281cd0:
    // 0x281cd0: 0x910c0  sll         $v0, $t1, 3
    ctx->pc = 0x281cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_281cd4:
    // 0x281cd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x281cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_281cd8:
    // 0x281cd8: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_281cdc:
    if (ctx->pc == 0x281CDCu) {
        ctx->pc = 0x281CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281CD8u;
        // 0x281cdc: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281CE0u;
        goto label_281ce0;
    }
    ctx->pc = 0x281CD8u;
    {
        const bool branch_taken_0x281cd8 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x281CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281CD8u;
        // 0x281cdc: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281cd8) {
            ctx->pc = 0x281CF4u;
            goto label_281cf4;
        }
    }
    ctx->pc = 0x281CE0u;
label_281ce0:
    // 0x281ce0: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x281ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_281ce4:
    // 0x281ce4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x281ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_281ce8:
    // 0x281ce8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x281ce8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_281cec:
    // 0x281cec: 0x10000002  b           . + 4 + (0x2 << 2)
label_281cf0:
    if (ctx->pc == 0x281CF0u) {
        ctx->pc = 0x281CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281CECu;
        // 0x281cf0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281CF4u;
        goto label_281cf4;
    }
    ctx->pc = 0x281CECu;
    {
        const bool branch_taken_0x281cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281CECu;
        // 0x281cf0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281cec) {
            ctx->pc = 0x281CF8u;
            goto label_281cf8;
        }
    }
    ctx->pc = 0x281CF4u;
label_281cf4:
    // 0x281cf4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x281cf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_281cf8:
    // 0x281cf8: 0xe0f809  jalr        $a3
label_281cfc:
    if (ctx->pc == 0x281CFCu) {
        ctx->pc = 0x281CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281CF8u;
        // 0x281cfc: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281D00u;
        goto label_281d00;
    }
    ctx->pc = 0x281CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x281D00u);
        ctx->pc = 0x281CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281CF8u;
        // 0x281cfc: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281CF8u, 0x281D00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x281D00u;
label_281d00:
    // 0x281d00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x281d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_281d04:
    // 0x281d04: 0x3e00008  jr          $ra
label_281d08:
    if (ctx->pc == 0x281D08u) {
        ctx->pc = 0x281D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281D04u;
        // 0x281d08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281D0Cu;
        goto label_281d0c;
    }
    ctx->pc = 0x281D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281D04u;
        // 0x281d08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281D0Cu;
label_281d0c:
    // 0x281d0c: 0x0  nop
    ctx->pc = 0x281d0cu;
    // NOP
    ctx->pc = 0x281d10u;
}
