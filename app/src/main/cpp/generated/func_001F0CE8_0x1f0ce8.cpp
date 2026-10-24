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

// Function: func_001F0CE8
// Address: 0x1f0ce8 - 0x1f0e10
void func_001F0CE8_0x1f0ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F0CE8_0x1f0ce8");
#endif

    switch (ctx->pc) {
        case 0x1f0d1cu: goto label_1f0d1c;
        case 0x1f0d3cu: goto label_1f0d3c;
        case 0x1f0d54u: goto label_1f0d54;
        case 0x1f0d5cu: goto label_1f0d5c;
        case 0x1f0d80u: goto label_1f0d80;
        case 0x1f0d9cu: goto label_1f0d9c;
        case 0x1f0da4u: goto label_1f0da4;
        case 0x1f0dc8u: goto label_1f0dc8;
        case 0x1f0de4u: goto label_1f0de4;
        case 0x1f0decu: goto label_1f0dec;
        default: break;
    }

    ctx->pc = 0x1f0ce8u;

    // 0x1f0ce8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f0ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f0cec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f0cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1f0cf0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f0cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f0cf4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f0cf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0cf8: 0x8e030b94  lw          $v1, 0xB94($s0)
    ctx->pc = 0x1f0cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2964)));
    // 0x1f0cfc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F0CFCu;
    {
        const bool branch_taken_0x1f0cfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0CFCu;
        // 0x1f0d00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0cfc) {
            ctx->pc = 0x1F0D14u;
            goto label_1f0d14;
        }
    }
    ctx->pc = 0x1F0D04u;
    // 0x1f0d04: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F0D04u;
    {
        const bool branch_taken_0x1f0d04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f0d04) {
            ctx->pc = 0x1F0D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0D04u;
            // 0x1f0d08: 0x8e040c64  lw          $a0, 0xC64($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0D2Cu;
            goto label_1f0d2c;
        }
    }
    ctx->pc = 0x1F0D0Cu;
    // 0x1f0d0c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1F0D0Cu;
    {
        const bool branch_taken_0x1f0d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0D0Cu;
        // 0x1f0d10: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0d0c) {
            ctx->pc = 0x1F0E00u;
            goto label_1f0e00;
        }
    }
    ctx->pc = 0x1F0D14u;
label_1f0d14:
    // 0x1f0d14: 0xc07be5e  jal         func_1EF978
    ctx->pc = 0x1F0D14u;
    SET_GPR_U32(ctx, 31, 0x1F0D1Cu);
    ctx->pc = 0x1F0D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0D14u;
    // 0x1f0d18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF978u, 0x1F0D14u, 0x1F0D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0D1Cu;
label_1f0d1c:
    // 0x1f0d1c: 0x8e020b94  lw          $v0, 0xB94($s0)
    ctx->pc = 0x1f0d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2964)));
    // 0x1f0d20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f0d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f0d24: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1F0D24u;
    {
        const bool branch_taken_0x1f0d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0D24u;
        // 0x1f0d28: 0xae020b94  sw          $v0, 0xB94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2964), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0d24) {
            ctx->pc = 0x1F0DFCu;
            goto label_1f0dfc;
        }
    }
    ctx->pc = 0x1F0D2Cu;
label_1f0d2c:
    // 0x1f0d2c: 0x50800010  beql        $a0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F0D2Cu;
    {
        const bool branch_taken_0x1f0d2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0d2c) {
            ctx->pc = 0x1F0D30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0D2Cu;
            // 0x1f0d30: 0x8e040c68  lw          $a0, 0xC68($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0D70u;
            goto label_1f0d70;
        }
    }
    ctx->pc = 0x1F0D34u;
    // 0x1f0d34: 0xc070924  jal         func_1C2490
    ctx->pc = 0x1F0D34u;
    SET_GPR_U32(ctx, 31, 0x1F0D3Cu);
    ctx->pc = 0x1C2490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2490u, 0x1F0D34u, 0x1F0D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0D3Cu;
label_1f0d3c:
    // 0x1f0d3c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F0D3Cu;
    {
        const bool branch_taken_0x1f0d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0D3Cu;
        // 0x1f0d40: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0d3c) {
            ctx->pc = 0x1F0D6Cu;
            goto label_1f0d6c;
        }
    }
    ctx->pc = 0x1F0D44u;
    // 0x1f0d44: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x1f0d44u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f0d48: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x1f0d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x1f0d4c: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x1F0D4Cu;
    SET_GPR_U32(ctx, 31, 0x1F0D54u);
    ctx->pc = 0x1F0D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0D4Cu;
    // 0x1f0d50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x1F0D4Cu, 0x1F0D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0D54u;
label_1f0d54:
    // 0x1f0d54: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x1F0D54u;
    SET_GPR_U32(ctx, 31, 0x1F0D5Cu);
    ctx->pc = 0x1F0D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0D54u;
    // 0x1f0d58: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x1F0D54u, 0x1F0D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0D5Cu;
label_1f0d5c:
    // 0x1f0d5c: 0x8e020b8c  lw          $v0, 0xB8C($s0)
    ctx->pc = 0x1f0d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2956)));
    // 0x1f0d60: 0xae000c64  sw          $zero, 0xC64($s0)
    ctx->pc = 0x1f0d60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3172), GPR_U32(ctx, 0));
    // 0x1f0d64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f0d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f0d68: 0xae020b8c  sw          $v0, 0xB8C($s0)
    ctx->pc = 0x1f0d68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2956), GPR_U32(ctx, 2));
label_1f0d6c:
    // 0x1f0d6c: 0x8e040c68  lw          $a0, 0xC68($s0)
    ctx->pc = 0x1f0d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3176)));
label_1f0d70:
    // 0x1f0d70: 0x50800011  beql        $a0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F0D70u;
    {
        const bool branch_taken_0x1f0d70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0d70) {
            ctx->pc = 0x1F0D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0D70u;
            // 0x1f0d74: 0x8e040c6c  lw          $a0, 0xC6C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0DB8u;
            goto label_1f0db8;
        }
    }
    ctx->pc = 0x1F0D78u;
    // 0x1f0d78: 0xc070924  jal         func_1C2490
    ctx->pc = 0x1F0D78u;
    SET_GPR_U32(ctx, 31, 0x1F0D80u);
    ctx->pc = 0x1C2490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2490u, 0x1F0D78u, 0x1F0D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0D80u;
label_1f0d80:
    // 0x1f0d80: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F0D80u;
    {
        const bool branch_taken_0x1f0d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0D80u;
        // 0x1f0d84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0d80) {
            ctx->pc = 0x1F0DB4u;
            goto label_1f0db4;
        }
    }
    ctx->pc = 0x1F0D88u;
    // 0x1f0d88: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1f0d88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1f0d8c: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x1f0d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f0d90: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x1f0d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x1f0d94: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x1F0D94u;
    SET_GPR_U32(ctx, 31, 0x1F0D9Cu);
    ctx->pc = 0x1F0D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0D94u;
    // 0x1f0d98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x1F0D94u, 0x1F0D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0D9Cu;
label_1f0d9c:
    // 0x1f0d9c: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x1F0D9Cu;
    SET_GPR_U32(ctx, 31, 0x1F0DA4u);
    ctx->pc = 0x1F0DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0D9Cu;
    // 0x1f0da0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x1F0D9Cu, 0x1F0DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0DA4u;
label_1f0da4:
    // 0x1f0da4: 0x8e020b8c  lw          $v0, 0xB8C($s0)
    ctx->pc = 0x1f0da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2956)));
    // 0x1f0da8: 0xae000c68  sw          $zero, 0xC68($s0)
    ctx->pc = 0x1f0da8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3176), GPR_U32(ctx, 0));
    // 0x1f0dac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f0dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f0db0: 0xae020b8c  sw          $v0, 0xB8C($s0)
    ctx->pc = 0x1f0db0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2956), GPR_U32(ctx, 2));
label_1f0db4:
    // 0x1f0db4: 0x8e040c6c  lw          $a0, 0xC6C($s0)
    ctx->pc = 0x1f0db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3180)));
label_1f0db8:
    // 0x1f0db8: 0x50800011  beql        $a0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F0DB8u;
    {
        const bool branch_taken_0x1f0db8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0db8) {
            ctx->pc = 0x1F0DBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0DB8u;
            // 0x1f0dbc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0E00u;
            goto label_1f0e00;
        }
    }
    ctx->pc = 0x1F0DC0u;
    // 0x1f0dc0: 0xc070924  jal         func_1C2490
    ctx->pc = 0x1F0DC0u;
    SET_GPR_U32(ctx, 31, 0x1F0DC8u);
    ctx->pc = 0x1C2490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2490u, 0x1F0DC0u, 0x1F0DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0DC8u;
label_1f0dc8:
    // 0x1f0dc8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F0DC8u;
    {
        const bool branch_taken_0x1f0dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0DC8u;
        // 0x1f0dcc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0dc8) {
            ctx->pc = 0x1F0DFCu;
            goto label_1f0dfc;
        }
    }
    ctx->pc = 0x1F0DD0u;
    // 0x1f0dd0: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1f0dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1f0dd4: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x1f0dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f0dd8: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x1f0dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x1f0ddc: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x1F0DDCu;
    SET_GPR_U32(ctx, 31, 0x1F0DE4u);
    ctx->pc = 0x1F0DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0DDCu;
    // 0x1f0de0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x1F0DDCu, 0x1F0DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0DE4u;
label_1f0de4:
    // 0x1f0de4: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x1F0DE4u;
    SET_GPR_U32(ctx, 31, 0x1F0DECu);
    ctx->pc = 0x1F0DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0DE4u;
    // 0x1f0de8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x1F0DE4u, 0x1F0DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0DECu;
label_1f0dec:
    // 0x1f0dec: 0x8e020b8c  lw          $v0, 0xB8C($s0)
    ctx->pc = 0x1f0decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2956)));
    // 0x1f0df0: 0xae000c6c  sw          $zero, 0xC6C($s0)
    ctx->pc = 0x1f0df0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3180), GPR_U32(ctx, 0));
    // 0x1f0df4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f0df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f0df8: 0xae020b8c  sw          $v0, 0xB8C($s0)
    ctx->pc = 0x1f0df8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2956), GPR_U32(ctx, 2));
label_1f0dfc:
    // 0x1f0dfc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f0dfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f0e00:
    // 0x1f0e00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f0e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0e04: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0E04u;
        // 0x1f0e08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0E04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0E0Cu;
    // 0x1f0e0c: 0x0  nop
    ctx->pc = 0x1f0e0cu;
    // NOP
    ctx->pc = 0x1f0e10u;
}
