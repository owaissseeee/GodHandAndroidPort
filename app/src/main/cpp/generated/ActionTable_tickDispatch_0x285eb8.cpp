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

// Function: ActionTable_tickDispatch
// Address: 0x285eb8 - 0x285f78
void ActionTable_tickDispatch_0x285eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ActionTable_tickDispatch_0x285eb8");
#endif

    switch (ctx->pc) {
        case 0x285eb8u: goto label_285eb8;
        case 0x285ebcu: goto label_285ebc;
        case 0x285ec0u: goto label_285ec0;
        case 0x285ec4u: goto label_285ec4;
        case 0x285ec8u: goto label_285ec8;
        case 0x285eccu: goto label_285ecc;
        case 0x285ed0u: goto label_285ed0;
        case 0x285ed4u: goto label_285ed4;
        case 0x285ed8u: goto label_285ed8;
        case 0x285edcu: goto label_285edc;
        case 0x285ee0u: goto label_285ee0;
        case 0x285ee4u: goto label_285ee4;
        case 0x285ee8u: goto label_285ee8;
        case 0x285eecu: goto label_285eec;
        case 0x285ef0u: goto label_285ef0;
        case 0x285ef4u: goto label_285ef4;
        case 0x285ef8u: goto label_285ef8;
        case 0x285efcu: goto label_285efc;
        case 0x285f00u: goto label_285f00;
        case 0x285f04u: goto label_285f04;
        case 0x285f08u: goto label_285f08;
        case 0x285f0cu: goto label_285f0c;
        case 0x285f10u: goto label_285f10;
        case 0x285f14u: goto label_285f14;
        case 0x285f18u: goto label_285f18;
        case 0x285f1cu: goto label_285f1c;
        case 0x285f20u: goto label_285f20;
        case 0x285f24u: goto label_285f24;
        case 0x285f28u: goto label_285f28;
        case 0x285f2cu: goto label_285f2c;
        case 0x285f30u: goto label_285f30;
        case 0x285f34u: goto label_285f34;
        case 0x285f38u: goto label_285f38;
        case 0x285f3cu: goto label_285f3c;
        case 0x285f40u: goto label_285f40;
        case 0x285f44u: goto label_285f44;
        case 0x285f48u: goto label_285f48;
        case 0x285f4cu: goto label_285f4c;
        case 0x285f50u: goto label_285f50;
        case 0x285f54u: goto label_285f54;
        case 0x285f58u: goto label_285f58;
        case 0x285f5cu: goto label_285f5c;
        case 0x285f60u: goto label_285f60;
        case 0x285f64u: goto label_285f64;
        case 0x285f68u: goto label_285f68;
        case 0x285f6cu: goto label_285f6c;
        case 0x285f70u: goto label_285f70;
        case 0x285f74u: goto label_285f74;
        default: break;
    }

    ctx->pc = 0x285eb8u;

label_285eb8:
    // 0x285eb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x285eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_285ebc:
    // 0x285ebc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x285ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_285ec0:
    // 0x285ec0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x285ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_285ec4:
    // 0x285ec4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x285ec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_285ec8:
    // 0x285ec8: 0x920202f5  lbu         $v0, 0x2F5($s0)
    ctx->pc = 0x285ec8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
label_285ecc:
    // 0x285ecc: 0x2c42000d  sltiu       $v0, $v0, 0xD
    ctx->pc = 0x285eccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
label_285ed0:
    // 0x285ed0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_285ed4:
    if (ctx->pc == 0x285ED4u) {
        ctx->pc = 0x285ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285ED0u;
        // 0x285ed4: 0xa20002f5  sb          $zero, 0x2F5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285ED8u;
        goto label_285ed8;
    }
    ctx->pc = 0x285ED0u;
    {
        const bool branch_taken_0x285ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x285ed0) {
            ctx->pc = 0x285ED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285ED0u;
            // 0x285ed4: 0xa20002f5  sb          $zero, 0x2F5($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285ED8u;
            goto label_285ed8;
        }
    }
    ctx->pc = 0x285ED8u;
label_285ed8:
    // 0x285ed8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x285ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_285edc:
    // 0x285edc: 0x920302f5  lbu         $v1, 0x2F5($s0)
    ctx->pc = 0x285edcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
label_285ee0:
    // 0x285ee0: 0x244603f8  addiu       $a2, $v0, 0x3F8
    ctx->pc = 0x285ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1016));
label_285ee4:
    // 0x285ee4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x285ee4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_285ee8:
    // 0x285ee8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x285ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_285eec:
    // 0x285eec: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x285eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_285ef0:
    // 0x285ef0: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x285ef0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_285ef4:
    // 0x285ef4: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_285ef8:
    if (ctx->pc == 0x285EF8u) {
        ctx->pc = 0x285EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285EF4u;
        // 0x285ef8: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285EFCu;
        goto label_285efc;
    }
    ctx->pc = 0x285EF4u;
    {
        const bool branch_taken_0x285ef4 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x285EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285EF4u;
        // 0x285ef8: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285ef4) {
            ctx->pc = 0x285F20u;
            goto label_285f20;
        }
    }
    ctx->pc = 0x285EFCu;
label_285efc:
    // 0x285efc: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x285efcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_285f00:
    // 0x285f00: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x285f00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_285f04:
    // 0x285f04: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x285f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_285f08:
    // 0x285f08: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x285f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_285f0c:
    // 0x285f0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x285f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_285f10:
    // 0x285f10: 0xdc67fff8  ld          $a3, -0x8($v1)
    ctx->pc = 0x285f10u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_285f14:
    // 0x285f14: 0x7303f  dsra32      $a2, $a3, 0
    ctx->pc = 0x285f14u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 7) >> (32 + 0));
label_285f18:
    // 0x285f18: 0x10000004  b           . + 4 + (0x4 << 2)
label_285f1c:
    if (ctx->pc == 0x285F1Cu) {
        ctx->pc = 0x285F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F18u;
        // 0x285f1c: 0x252303f8  addiu       $v1, $t1, 0x3F8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 1016));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285F20u;
        goto label_285f20;
    }
    ctx->pc = 0x285F18u;
    {
        const bool branch_taken_0x285f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F18u;
        // 0x285f1c: 0x252303f8  addiu       $v1, $t1, 0x3F8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 1016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285f18) {
            ctx->pc = 0x285F2Cu;
            goto label_285f2c;
        }
    }
    ctx->pc = 0x285F20u;
label_285f20:
    // 0x285f20: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x285f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_285f24:
    // 0x285f24: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x285f24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_285f28:
    // 0x285f28: 0x252303f8  addiu       $v1, $t1, 0x3F8
    ctx->pc = 0x285f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 1016));
label_285f2c:
    // 0x285f2c: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x285f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_285f30:
    // 0x285f30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x285f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_285f34:
    // 0x285f34: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_285f38:
    if (ctx->pc == 0x285F38u) {
        ctx->pc = 0x285F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F34u;
        // 0x285f38: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285F3Cu;
        goto label_285f3c;
    }
    ctx->pc = 0x285F34u;
    {
        const bool branch_taken_0x285f34 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x285F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F34u;
        // 0x285f38: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285f34) {
            ctx->pc = 0x285F50u;
            goto label_285f50;
        }
    }
    ctx->pc = 0x285F3Cu;
label_285f3c:
    // 0x285f3c: 0x30e2ffff  andi        $v0, $a3, 0xFFFF
    ctx->pc = 0x285f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_285f40:
    // 0x285f40: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x285f40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_285f44:
    // 0x285f44: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x285f44u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_285f48:
    // 0x285f48: 0x10000002  b           . + 4 + (0x2 << 2)
label_285f4c:
    if (ctx->pc == 0x285F4Cu) {
        ctx->pc = 0x285F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F48u;
        // 0x285f4c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285F50u;
        goto label_285f50;
    }
    ctx->pc = 0x285F48u;
    {
        const bool branch_taken_0x285f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F48u;
        // 0x285f4c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285f48) {
            ctx->pc = 0x285F54u;
            goto label_285f54;
        }
    }
    ctx->pc = 0x285F50u;
label_285f50:
    // 0x285f50: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x285f50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_285f54:
    // 0x285f54: 0xc0f809  jalr        $a2
label_285f58:
    if (ctx->pc == 0x285F58u) {
        ctx->pc = 0x285F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F54u;
        // 0x285f58: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285F5Cu;
        goto label_285f5c;
    }
    ctx->pc = 0x285F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x285F5Cu);
        ctx->pc = 0x285F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F54u;
        // 0x285f58: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285F54u, 0x285F5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x285F5Cu;
label_285f5c:
    // 0x285f5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x285f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_285f60:
    // 0x285f60: 0xc0aa1fa  jal         func_2A87E8
label_285f64:
    if (ctx->pc == 0x285F64u) {
        ctx->pc = 0x285F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F60u;
        // 0x285f64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285F68u;
        goto label_285f68;
    }
    ctx->pc = 0x285F60u;
    SET_GPR_U32(ctx, 31, 0x285F68u);
    ctx->pc = 0x285F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285F60u;
    // 0x285f64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87E8u, 0x285F60u, 0x285F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285F68u;
label_285f68:
    // 0x285f68: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x285f68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_285f6c:
    // 0x285f6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x285f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_285f70:
    // 0x285f70: 0x3e00008  jr          $ra
label_285f74:
    if (ctx->pc == 0x285F74u) {
        ctx->pc = 0x285F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F70u;
        // 0x285f74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285F78u;
        goto label_fallthrough_0x285f70;
    }
    ctx->pc = 0x285F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285F70u;
        // 0x285f74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x285f70:
    ctx->pc = 0x285F78u;
}
