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

// Function: cEm00_stepHitStun
// Address: 0x1c2c40 - 0x1c2ce0
void cEm00_stepHitStun_0x1c2c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm00_stepHitStun_0x1c2c40");
#endif

    switch (ctx->pc) {
        case 0x1c2c40u: goto label_1c2c40;
        case 0x1c2c44u: goto label_1c2c44;
        case 0x1c2c48u: goto label_1c2c48;
        case 0x1c2c4cu: goto label_1c2c4c;
        case 0x1c2c50u: goto label_1c2c50;
        case 0x1c2c54u: goto label_1c2c54;
        case 0x1c2c58u: goto label_1c2c58;
        case 0x1c2c5cu: goto label_1c2c5c;
        case 0x1c2c60u: goto label_1c2c60;
        case 0x1c2c64u: goto label_1c2c64;
        case 0x1c2c68u: goto label_1c2c68;
        case 0x1c2c6cu: goto label_1c2c6c;
        case 0x1c2c70u: goto label_1c2c70;
        case 0x1c2c74u: goto label_1c2c74;
        case 0x1c2c78u: goto label_1c2c78;
        case 0x1c2c7cu: goto label_1c2c7c;
        case 0x1c2c80u: goto label_1c2c80;
        case 0x1c2c84u: goto label_1c2c84;
        case 0x1c2c88u: goto label_1c2c88;
        case 0x1c2c8cu: goto label_1c2c8c;
        case 0x1c2c90u: goto label_1c2c90;
        case 0x1c2c94u: goto label_1c2c94;
        case 0x1c2c98u: goto label_1c2c98;
        case 0x1c2c9cu: goto label_1c2c9c;
        case 0x1c2ca0u: goto label_1c2ca0;
        case 0x1c2ca4u: goto label_1c2ca4;
        case 0x1c2ca8u: goto label_1c2ca8;
        case 0x1c2cacu: goto label_1c2cac;
        case 0x1c2cb0u: goto label_1c2cb0;
        case 0x1c2cb4u: goto label_1c2cb4;
        case 0x1c2cb8u: goto label_1c2cb8;
        case 0x1c2cbcu: goto label_1c2cbc;
        case 0x1c2cc0u: goto label_1c2cc0;
        case 0x1c2cc4u: goto label_1c2cc4;
        case 0x1c2cc8u: goto label_1c2cc8;
        case 0x1c2cccu: goto label_1c2ccc;
        case 0x1c2cd0u: goto label_1c2cd0;
        case 0x1c2cd4u: goto label_1c2cd4;
        case 0x1c2cd8u: goto label_1c2cd8;
        case 0x1c2cdcu: goto label_1c2cdc;
        default: break;
    }

    ctx->pc = 0x1c2c40u;

label_1c2c40:
    // 0x1c2c40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c2c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c2c44:
    // 0x1c2c44: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c2c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1c2c48:
    // 0x1c2c48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c2c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c2c4c:
    // 0x1c2c4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c2c4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c2c50:
    // 0x1c2c50: 0x920302f5  lbu         $v1, 0x2F5($s0)
    ctx->pc = 0x1c2c50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
label_1c2c54:
    // 0x1c2c54: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1c2c58:
    if (ctx->pc == 0x1C2C58u) {
        ctx->pc = 0x1C2C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2C54u;
        // 0x1c2c58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2C5Cu;
        goto label_1c2c5c;
    }
    ctx->pc = 0x1C2C54u;
    {
        const bool branch_taken_0x1c2c54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2C54u;
        // 0x1c2c58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2c54) {
            ctx->pc = 0x1C2C6Cu;
            goto label_1c2c6c;
        }
    }
    ctx->pc = 0x1C2C5Cu;
label_1c2c5c:
    // 0x1c2c5c: 0x50620014  beql        $v1, $v0, . + 4 + (0x14 << 2)
label_1c2c60:
    if (ctx->pc == 0x1C2C60u) {
        ctx->pc = 0x1C2C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2C5Cu;
        // 0x1c2c60: 0x9602060e  lhu         $v0, 0x60E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1550)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2C64u;
        goto label_1c2c64;
    }
    ctx->pc = 0x1C2C5Cu;
    {
        const bool branch_taken_0x1c2c5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c2c5c) {
            ctx->pc = 0x1C2C60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2C5Cu;
            // 0x1c2c60: 0x9602060e  lhu         $v0, 0x60E($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1550)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2CB0u;
            goto label_1c2cb0;
        }
    }
    ctx->pc = 0x1C2C64u;
label_1c2c64:
    // 0x1c2c64: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1c2c68:
    if (ctx->pc == 0x1C2C68u) {
        ctx->pc = 0x1C2C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2C64u;
        // 0x1c2c68: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2C6Cu;
        goto label_1c2c6c;
    }
    ctx->pc = 0x1C2C64u;
    {
        const bool branch_taken_0x1c2c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2C64u;
        // 0x1c2c68: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2c64) {
            ctx->pc = 0x1C2CD4u;
            goto label_1c2cd4;
        }
    }
    ctx->pc = 0x1C2C6Cu;
label_1c2c6c:
    // 0x1c2c6c: 0x8e020214  lw          $v0, 0x214($s0)
    ctx->pc = 0x1c2c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_1c2c70:
    // 0x1c2c70: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x1c2c70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_1c2c74:
    // 0x1c2c74: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x1c2c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1c2c78:
    // 0x1c2c78: 0x60f809  jalr        $v1
label_1c2c7c:
    if (ctx->pc == 0x1C2C7Cu) {
        ctx->pc = 0x1C2C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2C78u;
        // 0x1c2c7c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2C80u;
        goto label_1c2c80;
    }
    ctx->pc = 0x1C2C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C2C80u);
        ctx->pc = 0x1C2C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2C78u;
        // 0x1c2c7c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2C78u, 0x1C2C80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C2C80u;
label_1c2c80:
    // 0x1c2c80: 0x8e020214  lw          $v0, 0x214($s0)
    ctx->pc = 0x1c2c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_1c2c84:
    // 0x1c2c84: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x1c2c84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_1c2c88:
    // 0x1c2c88: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x1c2c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_1c2c8c:
    // 0x1c2c8c: 0x60f809  jalr        $v1
label_1c2c90:
    if (ctx->pc == 0x1C2C90u) {
        ctx->pc = 0x1C2C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2C8Cu;
        // 0x1c2c90: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2C94u;
        goto label_1c2c94;
    }
    ctx->pc = 0x1C2C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C2C94u);
        ctx->pc = 0x1C2C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2C8Cu;
        // 0x1c2c90: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2C8Cu, 0x1C2C94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C2C94u;
label_1c2c94:
    // 0x1c2c94: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c2c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c2c98:
    // 0x1c2c98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c2c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c2c9c:
    // 0x1c2c9c: 0xa602060e  sh          $v0, 0x60E($s0)
    ctx->pc = 0x1c2c9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1550), (uint16_t)GPR_U32(ctx, 2));
label_1c2ca0:
    // 0x1c2ca0: 0xa20302f5  sb          $v1, 0x2F5($s0)
    ctx->pc = 0x1c2ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
label_1c2ca4:
    // 0x1c2ca4: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1c2ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_1c2ca8:
    // 0x1c2ca8: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1c2ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_1c2cac:
    // 0x1c2cac: 0x9602060e  lhu         $v0, 0x60E($s0)
    ctx->pc = 0x1c2cacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1550)));
label_1c2cb0:
    // 0x1c2cb0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c2cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1c2cb4:
    // 0x1c2cb4: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1c2cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1c2cb8:
    // 0x1c2cb8: 0x1c600005  bgtz        $v1, . + 4 + (0x5 << 2)
label_1c2cbc:
    if (ctx->pc == 0x1C2CBCu) {
        ctx->pc = 0x1C2CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2CB8u;
        // 0x1c2cbc: 0xa602060e  sh          $v0, 0x60E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1550), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2CC0u;
        goto label_1c2cc0;
    }
    ctx->pc = 0x1C2CB8u;
    {
        const bool branch_taken_0x1c2cb8 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1C2CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2CB8u;
        // 0x1c2cbc: 0xa602060e  sh          $v0, 0x60E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1550), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2cb8) {
            ctx->pc = 0x1C2CD0u;
            goto label_1c2cd0;
        }
    }
    ctx->pc = 0x1C2CC0u;
label_1c2cc0:
    // 0x1c2cc0: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1c2cc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_1c2cc4:
    // 0x1c2cc4: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x1c2cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
label_1c2cc8:
    // 0x1c2cc8: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x1c2cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
label_1c2ccc:
    // 0x1c2ccc: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1c2cccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_1c2cd0:
    // 0x1c2cd0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c2cd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c2cd4:
    // 0x1c2cd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c2cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c2cd8:
    // 0x1c2cd8: 0x3e00008  jr          $ra
label_1c2cdc:
    if (ctx->pc == 0x1C2CDCu) {
        ctx->pc = 0x1C2CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2CD8u;
        // 0x1c2cdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2CE0u;
        goto label_fallthrough_0x1c2cd8;
    }
    ctx->pc = 0x1C2CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2CD8u;
        // 0x1c2cdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c2cd8:
    ctx->pc = 0x1C2CE0u;
}
