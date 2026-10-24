#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r200_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r200
{
// Function: func_00799F08
// Address: 0x799f08 - 0x799f80
void func_00799F08_0x799f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799F08_0x799f08");
#endif

    switch (ctx->pc) {
        case 0x799f08u: goto label_799f08;
        case 0x799f0cu: goto label_799f0c;
        case 0x799f10u: goto label_799f10;
        case 0x799f14u: goto label_799f14;
        case 0x799f18u: goto label_799f18;
        case 0x799f1cu: goto label_799f1c;
        case 0x799f20u: goto label_799f20;
        case 0x799f24u: goto label_799f24;
        case 0x799f28u: goto label_799f28;
        case 0x799f2cu: goto label_799f2c;
        case 0x799f30u: goto label_799f30;
        case 0x799f34u: goto label_799f34;
        case 0x799f38u: goto label_799f38;
        case 0x799f3cu: goto label_799f3c;
        case 0x799f40u: goto label_799f40;
        case 0x799f44u: goto label_799f44;
        case 0x799f48u: goto label_799f48;
        case 0x799f4cu: goto label_799f4c;
        case 0x799f50u: goto label_799f50;
        case 0x799f54u: goto label_799f54;
        case 0x799f58u: goto label_799f58;
        case 0x799f5cu: goto label_799f5c;
        case 0x799f60u: goto label_799f60;
        case 0x799f64u: goto label_799f64;
        case 0x799f68u: goto label_799f68;
        case 0x799f6cu: goto label_799f6c;
        case 0x799f70u: goto label_799f70;
        case 0x799f74u: goto label_799f74;
        case 0x799f78u: goto label_799f78;
        case 0x799f7cu: goto label_799f7c;
        default: break;
    }

    ctx->pc = 0x799f08u;

label_799f08:
    // 0x799f08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_799f0c:
    // 0x799f0c: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x799f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_799f10:
    // 0x799f10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_799f14:
    // 0x799f14: 0xc0b6dac  jal         func_2DB6B0
label_799f18:
    if (ctx->pc == 0x799F18u) {
        ctx->pc = 0x799F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F14u;
        // 0x799f18: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F1Cu;
        goto label_799f1c;
    }
    ctx->pc = 0x799F14u;
    SET_GPR_U32(ctx, 31, 0x799F1Cu);
    ctx->pc = 0x799F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F14u;
    // 0x799f18: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799F14u, 0x799F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F1Cu;
label_799f1c:
    // 0x799f1c: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x799f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_799f20:
    // 0x799f20: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x799f20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_799f24:
    // 0x799f24: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x799f24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_799f28:
    // 0x799f28: 0xa0f809  jalr        $a1
label_799f2c:
    if (ctx->pc == 0x799F2Cu) {
        ctx->pc = 0x799F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F28u;
        // 0x799f2c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F30u;
        goto label_799f30;
    }
    ctx->pc = 0x799F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x799F30u);
        ctx->pc = 0x799F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F28u;
        // 0x799f2c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799F28u, 0x799F30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799F30u;
label_799f30:
    // 0x799f30: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x799f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
label_799f34:
    // 0x799f34: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x799f34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
label_799f38:
    // 0x799f38: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799f38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_799f3c:
    // 0x799f3c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_799f40:
    // 0x799f40: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x799f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_799f44:
    // 0x799f44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799f44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799f48:
    // 0x799f48: 0xc0a57e0  jal         func_295F80
label_799f4c:
    if (ctx->pc == 0x799F4Cu) {
        ctx->pc = 0x799F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F48u;
        // 0x799f4c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F50u;
        goto label_799f50;
    }
    ctx->pc = 0x799F48u;
    SET_GPR_U32(ctx, 31, 0x799F50u);
    ctx->pc = 0x799F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F48u;
    // 0x799f4c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799F48u, 0x799F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F50u;
label_799f50:
    // 0x799f50: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799f50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_799f54:
    // 0x799f54: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x799f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_799f58:
    // 0x799f58: 0xc0b0a7e  jal         func_2C29F8
label_799f5c:
    if (ctx->pc == 0x799F5Cu) {
        ctx->pc = 0x799F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F58u;
        // 0x799f5c: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F60u;
        goto label_799f60;
    }
    ctx->pc = 0x799F58u;
    SET_GPR_U32(ctx, 31, 0x799F60u);
    ctx->pc = 0x799F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F58u;
    // 0x799f5c: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799F58u, 0x799F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F60u;
label_799f60:
    // 0x799f60: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x799f60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_799f64:
    // 0x799f64: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x799f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
label_799f68:
    // 0x799f68: 0xc0b5692  jal         func_2D5A48
label_799f6c:
    if (ctx->pc == 0x799F6Cu) {
        ctx->pc = 0x799F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F68u;
        // 0x799f6c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F70u;
        goto label_799f70;
    }
    ctx->pc = 0x799F68u;
    SET_GPR_U32(ctx, 31, 0x799F70u);
    ctx->pc = 0x799F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F68u;
    // 0x799f6c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799F68u, 0x799F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F70u;
label_799f70:
    // 0x799f70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_799f74:
    // 0x799f74: 0x3e00008  jr          $ra
label_799f78:
    if (ctx->pc == 0x799F78u) {
        ctx->pc = 0x799F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F74u;
        // 0x799f78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799F7Cu;
        goto label_799f7c;
    }
    ctx->pc = 0x799F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F74u;
        // 0x799f78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799F7Cu;
label_799f7c:
    // 0x799f7c: 0x0  nop
    ctx->pc = 0x799f7cu;
    // NOP
    ctx->pc = 0x799f80u;
}
} // namespace gh_r200
