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

// Function: BlackJack_UpdateDoubleDownMenu
// Address: 0x1d2bb0 - 0x1d2cf0
void BlackJack_UpdateDoubleDownMenu_0x1d2bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BlackJack_UpdateDoubleDownMenu_0x1d2bb0");
#endif

    switch (ctx->pc) {
        case 0x1d2be8u: goto label_1d2be8;
        case 0x1d2bf4u: goto label_1d2bf4;
        case 0x1d2c30u: goto label_1d2c30;
        case 0x1d2c3cu: goto label_1d2c3c;
        case 0x1d2c60u: goto label_1d2c60;
        case 0x1d2c88u: goto label_1d2c88;
        case 0x1d2ca0u: goto label_1d2ca0;
        case 0x1d2cacu: goto label_1d2cac;
        case 0x1d2cd0u: goto label_1d2cd0;
        default: break;
    }

    ctx->pc = 0x1d2bb0u;

    // 0x1d2bb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d2bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d2bb4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d2bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d2bb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d2bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d2bbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d2bbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2bc0: 0x8e031808  lw          $v1, 0x1808($s0)
    ctx->pc = 0x1d2bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d2bc4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D2BC4u;
    {
        const bool branch_taken_0x1d2bc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2BC4u;
        // 0x1d2bc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2bc4) {
            ctx->pc = 0x1D2BDCu;
            goto label_1d2bdc;
        }
    }
    ctx->pc = 0x1D2BCCu;
    // 0x1d2bcc: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D2BCCu;
    {
        const bool branch_taken_0x1d2bcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D2BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2BCCu;
        // 0x1d2bd0: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2bcc) {
            ctx->pc = 0x1D2C04u;
            goto label_1d2c04;
        }
    }
    ctx->pc = 0x1D2BD4u;
    // 0x1d2bd4: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x1D2BD4u;
    {
        const bool branch_taken_0x1d2bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2BD4u;
        // 0x1d2bd8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2bd4) {
            ctx->pc = 0x1D2CE0u;
            goto label_1d2ce0;
        }
    }
    ctx->pc = 0x1D2BDCu;
label_1d2bdc:
    // 0x1d2bdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2be0: 0xc0755a4  jal         func_1D5690
    ctx->pc = 0x1D2BE0u;
    SET_GPR_U32(ctx, 31, 0x1D2BE8u);
    ctx->pc = 0x1D2BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2BE0u;
    // 0x1d2be4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5690u, 0x1D2BE0u, 0x1D2BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2BE8u;
label_1d2be8:
    // 0x1d2be8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2bec: 0xc0756e4  jal         func_1D5B90
    ctx->pc = 0x1D2BECu;
    SET_GPR_U32(ctx, 31, 0x1D2BF4u);
    ctx->pc = 0x1D2BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2BECu;
    // 0x1d2bf0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5B90u, 0x1D2BECu, 0x1D2BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2BF4u;
label_1d2bf4:
    // 0x1d2bf4: 0x8e021808  lw          $v0, 0x1808($s0)
    ctx->pc = 0x1d2bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d2bf8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d2bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d2bfc: 0xae021808  sw          $v0, 0x1808($s0)
    ctx->pc = 0x1d2bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 2));
    // 0x1d2c00: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1d2c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_1d2c04:
    // 0x1d2c04: 0x3404cc00  ori         $a0, $zero, 0xCC00
    ctx->pc = 0x1d2c04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52224);
    // 0x1d2c08: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x1d2c08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x1d2c0c: 0x3484c000  ori         $a0, $a0, 0xC000
    ctx->pc = 0x1d2c0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)49152);
    // 0x1d2c10: 0x422b8  dsll        $a0, $a0, 10
    ctx->pc = 0x1d2c10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 10);
    // 0x1d2c14: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x1d2c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x1d2c18: 0xdc4301b0  ld          $v1, 0x1B0($v0)
    ctx->pc = 0x1d2c18u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x1d2c1c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1d2c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1d2c20: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D2C20u;
    {
        const bool branch_taken_0x1d2c20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2C20u;
        // 0x1d2c24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2c20) {
            ctx->pc = 0x1D2C68u;
            goto label_1d2c68;
        }
    }
    ctx->pc = 0x1D2C28u;
    // 0x1d2c28: 0xc0755a4  jal         func_1D5690
    ctx->pc = 0x1D2C28u;
    SET_GPR_U32(ctx, 31, 0x1D2C30u);
    ctx->pc = 0x1D2C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2C28u;
    // 0x1d2c2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5690u, 0x1D2C28u, 0x1D2C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2C30u;
label_1d2c30:
    // 0x1d2c30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2c34: 0xc0756e4  jal         func_1D5B90
    ctx->pc = 0x1D2C34u;
    SET_GPR_U32(ctx, 31, 0x1D2C3Cu);
    ctx->pc = 0x1D2C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2C34u;
    // 0x1d2c38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5B90u, 0x1D2C34u, 0x1D2C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2C3Cu;
label_1d2c3c:
    // 0x1d2c3c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d2c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d2c40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d2c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2c44: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d2c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1d2c48: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x1d2c48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x1d2c4c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1d2c4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d2c50: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1d2c50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d2c54: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d2c54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2c58: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1D2C58u;
    SET_GPR_U32(ctx, 31, 0x1D2C60u);
    ctx->pc = 0x1D2C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2C58u;
    // 0x1d2c5c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1D2C58u, 0x1D2C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2C60u;
label_1d2c60:
    // 0x1d2c60: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1D2C60u;
    {
        const bool branch_taken_0x1d2c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2C60u;
        // 0x1d2c64: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2c60) {
            ctx->pc = 0x1D2CD4u;
            goto label_1d2cd4;
        }
    }
    ctx->pc = 0x1D2C68u;
label_1d2c68:
    // 0x1d2c68: 0xdc4201a0  ld          $v0, 0x1A0($v0)
    ctx->pc = 0x1d2c68u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x1d2c6c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1d2c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1d2c70: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d2c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d2c74: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D2C74u;
    {
        const bool branch_taken_0x1d2c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2C74u;
        // 0x1d2c78: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2c74) {
            ctx->pc = 0x1D2CDCu;
            goto label_1d2cdc;
        }
    }
    ctx->pc = 0x1D2C7Cu;
    // 0x1d2c7c: 0x8e051814  lw          $a1, 0x1814($s0)
    ctx->pc = 0x1d2c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6164)));
    // 0x1d2c80: 0xc07ea1c  jal         func_1FA870
    ctx->pc = 0x1D2C80u;
    SET_GPR_U32(ctx, 31, 0x1D2C88u);
    ctx->pc = 0x1D2C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2C80u;
    // 0x1d2c84: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA870u, 0x1D2C80u, 0x1D2C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2C88u;
label_1d2c88:
    // 0x1d2c88: 0x8e021814  lw          $v0, 0x1814($s0)
    ctx->pc = 0x1d2c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6164)));
    // 0x1d2c8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2c90: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1d2c90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d2c94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d2c94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2c98: 0xc0755d8  jal         func_1D5760
    ctx->pc = 0x1D2C98u;
    SET_GPR_U32(ctx, 31, 0x1D2CA0u);
    ctx->pc = 0x1D2C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2C98u;
    // 0x1d2c9c: 0xae021814  sw          $v0, 0x1814($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 6164), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5760u, 0x1D2C98u, 0x1D2CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2CA0u;
label_1d2ca0:
    // 0x1d2ca0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2ca4: 0xc0756e4  jal         func_1D5B90
    ctx->pc = 0x1D2CA4u;
    SET_GPR_U32(ctx, 31, 0x1D2CACu);
    ctx->pc = 0x1D2CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2CA4u;
    // 0x1d2ca8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5B90u, 0x1D2CA4u, 0x1D2CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2CACu;
label_1d2cac:
    // 0x1d2cac: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d2cacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d2cb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d2cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2cb4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d2cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1d2cb8: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x1d2cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x1d2cbc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1d2cbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d2cc0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1d2cc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d2cc4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d2cc4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2cc8: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1D2CC8u;
    SET_GPR_U32(ctx, 31, 0x1D2CD0u);
    ctx->pc = 0x1D2CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2CC8u;
    // 0x1d2ccc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1D2CC8u, 0x1D2CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2CD0u;
label_1d2cd0:
    // 0x1d2cd0: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x1d2cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1d2cd4:
    // 0x1d2cd4: 0xae001808  sw          $zero, 0x1808($s0)
    ctx->pc = 0x1d2cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 0));
    // 0x1d2cd8: 0xae031804  sw          $v1, 0x1804($s0)
    ctx->pc = 0x1d2cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6148), GPR_U32(ctx, 3));
label_1d2cdc:
    // 0x1d2cdc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d2cdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d2ce0:
    // 0x1d2ce0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d2ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2ce4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2CE4u;
        // 0x1d2ce8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2CE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2CECu;
    // 0x1d2cec: 0x0  nop
    ctx->pc = 0x1d2cecu;
    // NOP
    ctx->pc = 0x1d2cf0u;
}
