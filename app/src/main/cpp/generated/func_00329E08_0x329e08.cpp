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

// Function: func_00329E08
// Address: 0x329e08 - 0x329ea8
void func_00329E08_0x329e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00329E08_0x329e08");
#endif

    switch (ctx->pc) {
        case 0x329e08u: goto label_329e08;
        case 0x329e0cu: goto label_329e0c;
        case 0x329e10u: goto label_329e10;
        case 0x329e14u: goto label_329e14;
        case 0x329e18u: goto label_329e18;
        case 0x329e1cu: goto label_329e1c;
        case 0x329e20u: goto label_329e20;
        case 0x329e24u: goto label_329e24;
        case 0x329e28u: goto label_329e28;
        case 0x329e2cu: goto label_329e2c;
        case 0x329e30u: goto label_329e30;
        case 0x329e34u: goto label_329e34;
        case 0x329e38u: goto label_329e38;
        case 0x329e3cu: goto label_329e3c;
        case 0x329e40u: goto label_329e40;
        case 0x329e44u: goto label_329e44;
        case 0x329e48u: goto label_329e48;
        case 0x329e4cu: goto label_329e4c;
        case 0x329e50u: goto label_329e50;
        case 0x329e54u: goto label_329e54;
        case 0x329e58u: goto label_329e58;
        case 0x329e5cu: goto label_329e5c;
        case 0x329e60u: goto label_329e60;
        case 0x329e64u: goto label_329e64;
        case 0x329e68u: goto label_329e68;
        case 0x329e6cu: goto label_329e6c;
        case 0x329e70u: goto label_329e70;
        case 0x329e74u: goto label_329e74;
        case 0x329e78u: goto label_329e78;
        case 0x329e7cu: goto label_329e7c;
        case 0x329e80u: goto label_329e80;
        case 0x329e84u: goto label_329e84;
        case 0x329e88u: goto label_329e88;
        case 0x329e8cu: goto label_329e8c;
        case 0x329e90u: goto label_329e90;
        case 0x329e94u: goto label_329e94;
        case 0x329e98u: goto label_329e98;
        case 0x329e9cu: goto label_329e9c;
        case 0x329ea0u: goto label_329ea0;
        case 0x329ea4u: goto label_329ea4;
        default: break;
    }

    ctx->pc = 0x329e08u;

label_329e08:
    // 0x329e08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x329e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_329e0c:
    // 0x329e0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x329e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_329e10:
    // 0x329e10: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x329e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_329e14:
    // 0x329e14: 0xc0cf99e  jal         func_33E678
label_329e18:
    if (ctx->pc == 0x329E18u) {
        ctx->pc = 0x329E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329E14u;
        // 0x329e18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329E1Cu;
        goto label_329e1c;
    }
    ctx->pc = 0x329E14u;
    SET_GPR_U32(ctx, 31, 0x329E1Cu);
    ctx->pc = 0x329E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329E14u;
    // 0x329e18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E678u, 0x329E14u, 0x329E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329E1Cu;
label_329e1c:
    // 0x329e1c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x329e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_329e20:
    // 0x329e20: 0xc0c98c8  jal         func_326320
label_329e24:
    if (ctx->pc == 0x329E24u) {
        ctx->pc = 0x329E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329E20u;
        // 0x329e24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329E28u;
        goto label_329e28;
    }
    ctx->pc = 0x329E20u;
    SET_GPR_U32(ctx, 31, 0x329E28u);
    ctx->pc = 0x329E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329E20u;
    // 0x329e24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326320u, 0x329E20u, 0x329E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329E28u;
label_329e28:
    // 0x329e28: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x329e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_329e2c:
    // 0x329e2c: 0xc0c98ce  jal         func_326338
label_329e30:
    if (ctx->pc == 0x329E30u) {
        ctx->pc = 0x329E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329E2Cu;
        // 0x329e30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329E34u;
        goto label_329e34;
    }
    ctx->pc = 0x329E2Cu;
    SET_GPR_U32(ctx, 31, 0x329E34u);
    ctx->pc = 0x329E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329E2Cu;
    // 0x329e30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326338u, 0x329E2Cu, 0x329E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329E34u;
label_329e34:
    // 0x329e34: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x329e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_329e38:
    // 0x329e38: 0xc0ce0de  jal         func_338378
label_329e3c:
    if (ctx->pc == 0x329E3Cu) {
        ctx->pc = 0x329E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329E38u;
        // 0x329e3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329E40u;
        goto label_329e40;
    }
    ctx->pc = 0x329E38u;
    SET_GPR_U32(ctx, 31, 0x329E40u);
    ctx->pc = 0x329E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329E38u;
    // 0x329e3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338378u, 0x329E38u, 0x329E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329E40u;
label_329e40:
    // 0x329e40: 0xc0c9a18  jal         func_326860
label_329e44:
    if (ctx->pc == 0x329E44u) {
        ctx->pc = 0x329E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329E40u;
        // 0x329e44: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329E48u;
        goto label_329e48;
    }
    ctx->pc = 0x329E40u;
    SET_GPR_U32(ctx, 31, 0x329E48u);
    ctx->pc = 0x329E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329E40u;
    // 0x329e44: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326860u, 0x329E40u, 0x329E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329E48u;
label_329e48:
    // 0x329e48: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x329e48u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_329e4c:
    // 0x329e4c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x329e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_329e50:
    // 0x329e50: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
label_329e54:
    if (ctx->pc == 0x329E54u) {
        ctx->pc = 0x329E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329E50u;
        // 0x329e54: 0x8e040074  lw          $a0, 0x74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329E58u;
        goto label_329e58;
    }
    ctx->pc = 0x329E50u;
    {
        const bool branch_taken_0x329e50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x329e50) {
            ctx->pc = 0x329E54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329E50u;
            // 0x329e54: 0x8e040074  lw          $a0, 0x74($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329E7Cu;
            goto label_329e7c;
        }
    }
    ctx->pc = 0x329E58u;
label_329e58:
    // 0x329e58: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x329e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_329e5c:
    // 0x329e5c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_329e60:
    if (ctx->pc == 0x329E60u) {
        ctx->pc = 0x329E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329E5Cu;
        // 0x329e60: 0x8e040074  lw          $a0, 0x74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329E64u;
        goto label_329e64;
    }
    ctx->pc = 0x329E5Cu;
    {
        const bool branch_taken_0x329e5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x329e5c) {
            ctx->pc = 0x329E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329E5Cu;
            // 0x329e60: 0x8e040074  lw          $a0, 0x74($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329E7Cu;
            goto label_329e7c;
        }
    }
    ctx->pc = 0x329E64u;
label_329e64:
    // 0x329e64: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x329e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_329e68:
    // 0x329e68: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x329e68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_329e6c:
    // 0x329e6c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x329e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_329e70:
    // 0x329e70: 0x40f809  jalr        $v0
label_329e74:
    if (ctx->pc == 0x329E74u) {
        ctx->pc = 0x329E78u;
        goto label_329e78;
    }
    ctx->pc = 0x329E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x329E78u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329E70u, 0x329E78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x329E78u;
label_329e78:
    // 0x329e78: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x329e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_329e7c:
    // 0x329e7c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_329e80:
    if (ctx->pc == 0x329E80u) {
        ctx->pc = 0x329E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329E7Cu;
        // 0x329e80: 0xa20000ac  sb          $zero, 0xAC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 172), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329E84u;
        goto label_329e84;
    }
    ctx->pc = 0x329E7Cu;
    {
        const bool branch_taken_0x329e7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x329e7c) {
            ctx->pc = 0x329E80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329E7Cu;
            // 0x329e80: 0xa20000ac  sb          $zero, 0xAC($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 172), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329E90u;
            goto label_329e90;
        }
    }
    ctx->pc = 0x329E84u;
label_329e84:
    // 0x329e84: 0xc0cf08a  jal         func_33C228
label_329e88:
    if (ctx->pc == 0x329E88u) {
        ctx->pc = 0x329E8Cu;
        goto label_329e8c;
    }
    ctx->pc = 0x329E84u;
    SET_GPR_U32(ctx, 31, 0x329E8Cu);
    ctx->pc = 0x33C228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C228u, 0x329E84u, 0x329E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329E8Cu;
label_329e8c:
    // 0x329e8c: 0xa20000ac  sb          $zero, 0xAC($s0)
    ctx->pc = 0x329e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 172), (uint8_t)GPR_U32(ctx, 0));
label_329e90:
    // 0x329e90: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x329e90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_329e94:
    // 0x329e94: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x329e94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_329e98:
    // 0x329e98: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x329e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_329e9c:
    // 0x329e9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x329e9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_329ea0:
    // 0x329ea0: 0x80cf9a4  j           func_33E690
label_329ea4:
    if (ctx->pc == 0x329EA4u) {
        ctx->pc = 0x329EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329EA0u;
        // 0x329ea4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329EA8u;
        goto label_fallthrough_0x329ea0;
    }
    ctx->pc = 0x329EA0u;
    ctx->pc = 0x329EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329EA0u;
    // 0x329ea4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E690u, 0x329EA0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
label_fallthrough_0x329ea0:
    ctx->pc = 0x329EA8u;
}
