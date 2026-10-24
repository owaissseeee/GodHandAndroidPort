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

// Function: func_00335D40
// Address: 0x335d40 - 0x335dd0
void func_00335D40_0x335d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00335D40_0x335d40");
#endif

    switch (ctx->pc) {
        case 0x335d40u: goto label_335d40;
        case 0x335d44u: goto label_335d44;
        case 0x335d48u: goto label_335d48;
        case 0x335d4cu: goto label_335d4c;
        case 0x335d50u: goto label_335d50;
        case 0x335d54u: goto label_335d54;
        case 0x335d58u: goto label_335d58;
        case 0x335d5cu: goto label_335d5c;
        case 0x335d60u: goto label_335d60;
        case 0x335d64u: goto label_335d64;
        case 0x335d68u: goto label_335d68;
        case 0x335d6cu: goto label_335d6c;
        case 0x335d70u: goto label_335d70;
        case 0x335d74u: goto label_335d74;
        case 0x335d78u: goto label_335d78;
        case 0x335d7cu: goto label_335d7c;
        case 0x335d80u: goto label_335d80;
        case 0x335d84u: goto label_335d84;
        case 0x335d88u: goto label_335d88;
        case 0x335d8cu: goto label_335d8c;
        case 0x335d90u: goto label_335d90;
        case 0x335d94u: goto label_335d94;
        case 0x335d98u: goto label_335d98;
        case 0x335d9cu: goto label_335d9c;
        case 0x335da0u: goto label_335da0;
        case 0x335da4u: goto label_335da4;
        case 0x335da8u: goto label_335da8;
        case 0x335dacu: goto label_335dac;
        case 0x335db0u: goto label_335db0;
        case 0x335db4u: goto label_335db4;
        case 0x335db8u: goto label_335db8;
        case 0x335dbcu: goto label_335dbc;
        case 0x335dc0u: goto label_335dc0;
        case 0x335dc4u: goto label_335dc4;
        case 0x335dc8u: goto label_335dc8;
        case 0x335dccu: goto label_335dcc;
        default: break;
    }

    ctx->pc = 0x335d40u;

label_335d40:
    // 0x335d40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x335d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_335d44:
    // 0x335d44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x335d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_335d48:
    // 0x335d48: 0x3c10003e  lui         $s0, 0x3E
    ctx->pc = 0x335d48u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)62 << 16));
label_335d4c:
    // 0x335d4c: 0x2610a4d8  addiu       $s0, $s0, -0x5B28
    ctx->pc = 0x335d4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943960));
label_335d50:
    // 0x335d50: 0xffa50038  sd          $a1, 0x38($sp)
    ctx->pc = 0x335d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 5));
label_335d54:
    // 0x335d54: 0xffa60040  sd          $a2, 0x40($sp)
    ctx->pc = 0x335d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 6));
label_335d58:
    // 0x335d58: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x335d58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_335d5c:
    // 0x335d5c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x335d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_335d60:
    // 0x335d60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x335d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_335d64:
    // 0x335d64: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x335d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_335d68:
    // 0x335d68: 0xffa70048  sd          $a3, 0x48($sp)
    ctx->pc = 0x335d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 7));
label_335d6c:
    // 0x335d6c: 0xffa80050  sd          $t0, 0x50($sp)
    ctx->pc = 0x335d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 8));
label_335d70:
    // 0x335d70: 0xffa90058  sd          $t1, 0x58($sp)
    ctx->pc = 0x335d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 9));
label_335d74:
    // 0x335d74: 0xffaa0060  sd          $t2, 0x60($sp)
    ctx->pc = 0x335d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 10));
label_335d78:
    // 0x335d78: 0xffab0068  sd          $t3, 0x68($sp)
    ctx->pc = 0x335d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 11));
label_335d7c:
    // 0x335d7c: 0xe7ac0018  swc1        $f12, 0x18($sp)
    ctx->pc = 0x335d7cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_335d80:
    // 0x335d80: 0xe7ad001c  swc1        $f13, 0x1C($sp)
    ctx->pc = 0x335d80u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_335d84:
    // 0x335d84: 0xe7ae0020  swc1        $f14, 0x20($sp)
    ctx->pc = 0x335d84u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_335d88:
    // 0x335d88: 0xe7af0024  swc1        $f15, 0x24($sp)
    ctx->pc = 0x335d88u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_335d8c:
    // 0x335d8c: 0xe7b00028  swc1        $f16, 0x28($sp)
    ctx->pc = 0x335d8cu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_335d90:
    // 0x335d90: 0xe7b1002c  swc1        $f17, 0x2C($sp)
    ctx->pc = 0x335d90u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_335d94:
    // 0x335d94: 0xe7b20030  swc1        $f18, 0x30($sp)
    ctx->pc = 0x335d94u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_335d98:
    // 0x335d98: 0xc0e9eba  jal         func_3A7AE8
label_335d9c:
    if (ctx->pc == 0x335D9Cu) {
        ctx->pc = 0x335D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335D98u;
        // 0x335d9c: 0xe7b30034  swc1        $f19, 0x34($sp) (Delay Slot)
        { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x335DA0u;
        goto label_335da0;
    }
    ctx->pc = 0x335D98u;
    SET_GPR_U32(ctx, 31, 0x335DA0u);
    ctx->pc = 0x335D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335D98u;
    // 0x335d9c: 0xe7b30034  swc1        $f19, 0x34($sp) (Delay Slot)
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7AE8u, 0x335D98u, 0x335DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335DA0u;
label_335da0:
    // 0x335da0: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x335da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
label_335da4:
    // 0x335da4: 0x8c63a4d0  lw          $v1, -0x5B30($v1)
    ctx->pc = 0x335da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943952)));
label_335da8:
    // 0x335da8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_335dac:
    if (ctx->pc == 0x335DACu) {
        ctx->pc = 0x335DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335DA8u;
        // 0x335dac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x335DB0u;
        goto label_335db0;
    }
    ctx->pc = 0x335DA8u;
    {
        const bool branch_taken_0x335da8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x335DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335DA8u;
        // 0x335dac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335da8) {
            ctx->pc = 0x335DBCu;
            goto label_335dbc;
        }
    }
    ctx->pc = 0x335DB0u;
label_335db0:
    // 0x335db0: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x335db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
label_335db4:
    // 0x335db4: 0x60f809  jalr        $v1
label_335db8:
    if (ctx->pc == 0x335DB8u) {
        ctx->pc = 0x335DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335DB4u;
        // 0x335db8: 0x8c44a4d4  lw          $a0, -0x5B2C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943956)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x335DBCu;
        goto label_335dbc;
    }
    ctx->pc = 0x335DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x335DBCu);
        ctx->pc = 0x335DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335DB4u;
        // 0x335db8: 0x8c44a4d4  lw          $a0, -0x5B2C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943956)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335DB4u, 0x335DBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x335DBCu;
label_335dbc:
    // 0x335dbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x335dbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_335dc0:
    // 0x335dc0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x335dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_335dc4:
    // 0x335dc4: 0x3e00008  jr          $ra
label_335dc8:
    if (ctx->pc == 0x335DC8u) {
        ctx->pc = 0x335DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335DC4u;
        // 0x335dc8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x335DCCu;
        goto label_335dcc;
    }
    ctx->pc = 0x335DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335DC4u;
        // 0x335dc8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335DC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335DCCu;
label_335dcc:
    // 0x335dcc: 0x0  nop
    ctx->pc = 0x335dccu;
    // NOP
    ctx->pc = 0x335dd0u;
}
