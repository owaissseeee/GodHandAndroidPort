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

// Function: BlackJack_UpdateDealMenu
// Address: 0x1d1aa8 - 0x1d1d38
void BlackJack_UpdateDealMenu_0x1d1aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BlackJack_UpdateDealMenu_0x1d1aa8");
#endif

    switch (ctx->pc) {
        case 0x1d1ae0u: goto label_1d1ae0;
        case 0x1d1aecu: goto label_1d1aec;
        case 0x1d1b3cu: goto label_1d1b3c;
        case 0x1d1b48u: goto label_1d1b48;
        case 0x1d1ba0u: goto label_1d1ba0;
        case 0x1d1bacu: goto label_1d1bac;
        case 0x1d1bf0u: goto label_1d1bf0;
        case 0x1d1bfcu: goto label_1d1bfc;
        case 0x1d1c20u: goto label_1d1c20;
        case 0x1d1c70u: goto label_1d1c70;
        case 0x1d1ca4u: goto label_1d1ca4;
        case 0x1d1cbcu: goto label_1d1cbc;
        case 0x1d1cc8u: goto label_1d1cc8;
        case 0x1d1cd4u: goto label_1d1cd4;
        case 0x1d1cecu: goto label_1d1cec;
        case 0x1d1cf8u: goto label_1d1cf8;
        case 0x1d1d28u: goto label_1d1d28;
        default: break;
    }

    ctx->pc = 0x1d1aa8u;

    // 0x1d1aa8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d1aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d1aac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d1aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d1ab0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d1ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d1ab4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d1ab4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1ab8: 0x8e031808  lw          $v1, 0x1808($s0)
    ctx->pc = 0x1d1ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d1abc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1ABCu;
    {
        const bool branch_taken_0x1d1abc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1ABCu;
        // 0x1d1ac0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1abc) {
            ctx->pc = 0x1D1AD4u;
            goto label_1d1ad4;
        }
    }
    ctx->pc = 0x1D1AC4u;
    // 0x1d1ac4: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D1AC4u;
    {
        const bool branch_taken_0x1d1ac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D1AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1AC4u;
        // 0x1d1ac8: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1ac4) {
            ctx->pc = 0x1D1AFCu;
            goto label_1d1afc;
        }
    }
    ctx->pc = 0x1D1ACCu;
    // 0x1d1acc: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x1D1ACCu;
    {
        const bool branch_taken_0x1d1acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1ACCu;
        // 0x1d1ad0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1acc) {
            ctx->pc = 0x1D1D2Cu;
            goto label_1d1d2c;
        }
    }
    ctx->pc = 0x1D1AD4u;
label_1d1ad4:
    // 0x1d1ad4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1ad8: 0xc075540  jal         func_1D5500
    ctx->pc = 0x1D1AD8u;
    SET_GPR_U32(ctx, 31, 0x1D1AE0u);
    ctx->pc = 0x1D1ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1AD8u;
    // 0x1d1adc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5500u, 0x1D1AD8u, 0x1D1AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1AE0u;
label_1d1ae0:
    // 0x1d1ae0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1ae4: 0xc07563c  jal         func_1D58F0
    ctx->pc = 0x1D1AE4u;
    SET_GPR_U32(ctx, 31, 0x1D1AECu);
    ctx->pc = 0x1D1AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1AE4u;
    // 0x1d1ae8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D58F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D58F0u, 0x1D1AE4u, 0x1D1AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1AECu;
label_1d1aec:
    // 0x1d1aec: 0x8e021808  lw          $v0, 0x1808($s0)
    ctx->pc = 0x1d1aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d1af0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d1af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d1af4: 0xae021808  sw          $v0, 0x1808($s0)
    ctx->pc = 0x1d1af4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 2));
    // 0x1d1af8: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1d1af8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_1d1afc:
    // 0x1d1afc: 0x34028800  ori         $v0, $zero, 0x8800
    ctx->pc = 0x1d1afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34816);
    // 0x1d1b00: 0x21678  dsll        $v0, $v0, 25
    ctx->pc = 0x1d1b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 25);
    // 0x1d1b04: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1d1b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1d1b08: 0x212f8  dsll        $v0, $v0, 11
    ctx->pc = 0x1d1b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 11);
    // 0x1d1b0c: 0x246374a0  addiu       $v1, $v1, 0x74A0
    ctx->pc = 0x1d1b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x1d1b10: 0xdc6401b0  ld          $a0, 0x1B0($v1)
    ctx->pc = 0x1d1b10u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 432)));
    // 0x1d1b14: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1d1b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1d1b18: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D1B18u;
    {
        const bool branch_taken_0x1d1b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1b18) {
            ctx->pc = 0x1D1B68u;
            goto label_1d1b68;
        }
    }
    ctx->pc = 0x1D1B20u;
    // 0x1d1b20: 0x8e021814  lw          $v0, 0x1814($s0)
    ctx->pc = 0x1d1b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6164)));
    // 0x1d1b24: 0x8e031810  lw          $v1, 0x1810($s0)
    ctx->pc = 0x1d1b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6160)));
    // 0x1d1b28: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1d1b28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1d1b2c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D1B2Cu;
    {
        const bool branch_taken_0x1d1b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B2Cu;
        // 0x1d1b30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b2c) {
            ctx->pc = 0x1D1B54u;
            goto label_1d1b54;
        }
    }
    ctx->pc = 0x1D1B34u;
    // 0x1d1b34: 0xc075540  jal         func_1D5500
    ctx->pc = 0x1D1B34u;
    SET_GPR_U32(ctx, 31, 0x1D1B3Cu);
    ctx->pc = 0x1D1B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B34u;
    // 0x1d1b38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5500u, 0x1D1B34u, 0x1D1B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B3Cu;
label_1d1b3c:
    // 0x1d1b3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b40: 0xc07563c  jal         func_1D58F0
    ctx->pc = 0x1D1B40u;
    SET_GPR_U32(ctx, 31, 0x1D1B48u);
    ctx->pc = 0x1D1B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B40u;
    // 0x1d1b44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D58F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D58F0u, 0x1D1B40u, 0x1D1B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B48u;
label_1d1b48:
    // 0x1d1b48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d1b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1b4c: 0xae001808  sw          $zero, 0x1808($s0)
    ctx->pc = 0x1d1b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 0));
    // 0x1d1b50: 0xae021804  sw          $v0, 0x1804($s0)
    ctx->pc = 0x1d1b50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6148), GPR_U32(ctx, 2));
label_1d1b54:
    // 0x1d1b54: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d1b54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d1b58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1b5c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d1b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1d1b60: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x1D1B60u;
    {
        const bool branch_taken_0x1d1b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B60u;
        // 0x1d1b64: 0x2406015f  addiu       $a2, $zero, 0x15F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b60) {
            ctx->pc = 0x1D1C5Cu;
            goto label_1d1c5c;
        }
    }
    ctx->pc = 0x1D1B68u;
label_1d1b68:
    // 0x1d1b68: 0x34028800  ori         $v0, $zero, 0x8800
    ctx->pc = 0x1d1b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34816);
    // 0x1d1b6c: 0x215f8  dsll        $v0, $v0, 23
    ctx->pc = 0x1d1b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 23);
    // 0x1d1b70: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1d1b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1d1b74: 0x21338  dsll        $v0, $v0, 12
    ctx->pc = 0x1d1b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 12);
    // 0x1d1b78: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1d1b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1d1b7c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D1B7Cu;
    {
        const bool branch_taken_0x1d1b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1b7c) {
            ctx->pc = 0x1D1BCCu;
            goto label_1d1bcc;
        }
    }
    ctx->pc = 0x1D1B84u;
    // 0x1d1b84: 0x8e021814  lw          $v0, 0x1814($s0)
    ctx->pc = 0x1d1b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6164)));
    // 0x1d1b88: 0x8e031810  lw          $v1, 0x1810($s0)
    ctx->pc = 0x1d1b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6160)));
    // 0x1d1b8c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1d1b8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1d1b90: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D1B90u;
    {
        const bool branch_taken_0x1d1b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B90u;
        // 0x1d1b94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b90) {
            ctx->pc = 0x1D1BB8u;
            goto label_1d1bb8;
        }
    }
    ctx->pc = 0x1D1B98u;
    // 0x1d1b98: 0xc075540  jal         func_1D5500
    ctx->pc = 0x1D1B98u;
    SET_GPR_U32(ctx, 31, 0x1D1BA0u);
    ctx->pc = 0x1D1B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B98u;
    // 0x1d1b9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5500u, 0x1D1B98u, 0x1D1BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1BA0u;
label_1d1ba0:
    // 0x1d1ba0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1ba4: 0xc07563c  jal         func_1D58F0
    ctx->pc = 0x1D1BA4u;
    SET_GPR_U32(ctx, 31, 0x1D1BACu);
    ctx->pc = 0x1D1BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1BA4u;
    // 0x1d1ba8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D58F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D58F0u, 0x1D1BA4u, 0x1D1BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1BACu;
label_1d1bac:
    // 0x1d1bac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d1bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d1bb0: 0xae001808  sw          $zero, 0x1808($s0)
    ctx->pc = 0x1d1bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 0));
    // 0x1d1bb4: 0xae021804  sw          $v0, 0x1804($s0)
    ctx->pc = 0x1d1bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6148), GPR_U32(ctx, 2));
label_1d1bb8:
    // 0x1d1bb8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d1bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d1bbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1bc0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d1bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1d1bc4: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1D1BC4u;
    {
        const bool branch_taken_0x1d1bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BC4u;
        // 0x1d1bc8: 0x2406015f  addiu       $a2, $zero, 0x15F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1bc4) {
            ctx->pc = 0x1D1C5Cu;
            goto label_1d1c5c;
        }
    }
    ctx->pc = 0x1D1BCCu;
label_1d1bcc:
    // 0x1d1bcc: 0x3402cc00  ori         $v0, $zero, 0xCC00
    ctx->pc = 0x1d1bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52224);
    // 0x1d1bd0: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1d1bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1d1bd4: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x1d1bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x1d1bd8: 0x212b8  dsll        $v0, $v0, 10
    ctx->pc = 0x1d1bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 10);
    // 0x1d1bdc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1d1bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1d1be0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D1BE0u;
    {
        const bool branch_taken_0x1d1be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1BE0u;
        // 0x1d1be4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1be0) {
            ctx->pc = 0x1D1C30u;
            goto label_1d1c30;
        }
    }
    ctx->pc = 0x1D1BE8u;
    // 0x1d1be8: 0xc075540  jal         func_1D5500
    ctx->pc = 0x1D1BE8u;
    SET_GPR_U32(ctx, 31, 0x1D1BF0u);
    ctx->pc = 0x1D1BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1BE8u;
    // 0x1d1bec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5500u, 0x1D1BE8u, 0x1D1BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1BF0u;
label_1d1bf0:
    // 0x1d1bf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1bf4: 0xc07563c  jal         func_1D58F0
    ctx->pc = 0x1D1BF4u;
    SET_GPR_U32(ctx, 31, 0x1D1BFCu);
    ctx->pc = 0x1D1BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1BF4u;
    // 0x1d1bf8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D58F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D58F0u, 0x1D1BF4u, 0x1D1BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1BFCu;
label_1d1bfc:
    // 0x1d1bfc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d1bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d1c00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1c04: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d1c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1d1c08: 0x2406015f  addiu       $a2, $zero, 0x15F
    ctx->pc = 0x1d1c08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
    // 0x1d1c0c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1d1c0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d1c10: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1d1c10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d1c14: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d1c14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1c18: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1D1C18u;
    SET_GPR_U32(ctx, 31, 0x1D1C20u);
    ctx->pc = 0x1D1C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1C18u;
    // 0x1d1c1c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1D1C18u, 0x1D1C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1C20u;
label_1d1c20:
    // 0x1d1c20: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1d1c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d1c24: 0xae001808  sw          $zero, 0x1808($s0)
    ctx->pc = 0x1d1c24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 0));
    // 0x1d1c28: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1D1C28u;
    {
        const bool branch_taken_0x1d1c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C28u;
        // 0x1d1c2c: 0xae031804  sw          $v1, 0x1804($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6148), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1c28) {
            ctx->pc = 0x1D1D28u;
            goto label_1d1d28;
        }
    }
    ctx->pc = 0x1D1C30u;
label_1d1c30:
    // 0x1d1c30: 0xdc6301a0  ld          $v1, 0x1A0($v1)
    ctx->pc = 0x1d1c30u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 416)));
    // 0x1d1c34: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1d1c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1d1c38: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d1c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d1c3c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1D1C3Cu;
    {
        const bool branch_taken_0x1d1c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C3Cu;
        // 0x1d1c40: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1c3c) {
            ctx->pc = 0x1D1C78u;
            goto label_1d1c78;
        }
    }
    ctx->pc = 0x1D1C44u;
    // 0x1d1c44: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d1c44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d1c48: 0xae001808  sw          $zero, 0x1808($s0)
    ctx->pc = 0x1d1c48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 0));
    // 0x1d1c4c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d1c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1d1c50: 0xae021804  sw          $v0, 0x1804($s0)
    ctx->pc = 0x1d1c50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6148), GPR_U32(ctx, 2));
    // 0x1d1c54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1c54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1c58: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x1d1c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
label_1d1c5c:
    // 0x1d1c5c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1d1c5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d1c60: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1d1c60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d1c64: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d1c64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1c68: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1D1C68u;
    SET_GPR_U32(ctx, 31, 0x1D1C70u);
    ctx->pc = 0x1D1C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1C68u;
    // 0x1d1c6c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1D1C68u, 0x1D1C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1C70u;
label_1d1c70:
    // 0x1d1c70: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1D1C70u;
    {
        const bool branch_taken_0x1d1c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C70u;
        // 0x1d1c74: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1c70) {
            ctx->pc = 0x1D1D2Cu;
            goto label_1d1d2c;
        }
    }
    ctx->pc = 0x1D1C78u;
label_1d1c78:
    // 0x1d1c78: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1d1c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1d1c7c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d1c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d1c80: 0x5040002a  beql        $v0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x1D1C80u;
    {
        const bool branch_taken_0x1d1c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1c80) {
            ctx->pc = 0x1D1C84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1C80u;
            // 0x1d1c84: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1D2Cu;
            goto label_1d1d2c;
        }
    }
    ctx->pc = 0x1D1C88u;
    // 0x1d1c88: 0x8e021814  lw          $v0, 0x1814($s0)
    ctx->pc = 0x1d1c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6164)));
    // 0x1d1c8c: 0x1840001d  blez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D1C8Cu;
    {
        const bool branch_taken_0x1d1c8c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1D1C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C8Cu;
        // 0x1d1c90: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1c8c) {
            ctx->pc = 0x1D1D04u;
            goto label_1d1d04;
        }
    }
    ctx->pc = 0x1D1C94u;
    // 0x1d1c94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d1c94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1c98: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x1d1c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x1d1c9c: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x1D1C9Cu;
    SET_GPR_U32(ctx, 31, 0x1D1CA4u);
    ctx->pc = 0x1D1CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1C9Cu;
    // 0x1d1ca0: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x1D1C9Cu, 0x1D1CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1CA4u;
label_1d1ca4:
    // 0x1d1ca4: 0x8e021814  lw          $v0, 0x1814($s0)
    ctx->pc = 0x1d1ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6164)));
    // 0x1d1ca8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1cac: 0x2442ff9c  addiu       $v0, $v0, -0x64
    ctx->pc = 0x1d1cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x1d1cb0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d1cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1cb4: 0xc0755d8  jal         func_1D5760
    ctx->pc = 0x1D1CB4u;
    SET_GPR_U32(ctx, 31, 0x1D1CBCu);
    ctx->pc = 0x1D1CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1CB4u;
    // 0x1d1cb8: 0xae021814  sw          $v0, 0x1814($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 6164), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5760u, 0x1D1CB4u, 0x1D1CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1CBCu;
label_1d1cbc:
    // 0x1d1cbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1cc0: 0xc0754d8  jal         func_1D5360
    ctx->pc = 0x1D1CC0u;
    SET_GPR_U32(ctx, 31, 0x1D1CC8u);
    ctx->pc = 0x1D1CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1CC0u;
    // 0x1d1cc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5360u, 0x1D1CC0u, 0x1D1CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1CC8u;
label_1d1cc8:
    // 0x1d1cc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1ccc: 0xc07550c  jal         func_1D5430
    ctx->pc = 0x1D1CCCu;
    SET_GPR_U32(ctx, 31, 0x1D1CD4u);
    ctx->pc = 0x1D1CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1CCCu;
    // 0x1d1cd0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5430u, 0x1D1CCCu, 0x1D1CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1CD4u;
label_1d1cd4:
    // 0x1d1cd4: 0x8e021814  lw          $v0, 0x1814($s0)
    ctx->pc = 0x1d1cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6164)));
    // 0x1d1cd8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D1CD8u;
    {
        const bool branch_taken_0x1d1cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1CD8u;
        // 0x1d1cdc: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1cd8) {
            ctx->pc = 0x1D1D08u;
            goto label_1d1d08;
        }
    }
    ctx->pc = 0x1D1CE0u;
    // 0x1d1ce0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1ce4: 0xc07563c  jal         func_1D58F0
    ctx->pc = 0x1D1CE4u;
    SET_GPR_U32(ctx, 31, 0x1D1CECu);
    ctx->pc = 0x1D1CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1CE4u;
    // 0x1d1ce8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D58F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D58F0u, 0x1D1CE4u, 0x1D1CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1CECu;
label_1d1cec:
    // 0x1d1cec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1cf0: 0xc075540  jal         func_1D5500
    ctx->pc = 0x1D1CF0u;
    SET_GPR_U32(ctx, 31, 0x1D1CF8u);
    ctx->pc = 0x1D1CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1CF0u;
    // 0x1d1cf4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5500u, 0x1D1CF0u, 0x1D1CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1CF8u;
label_1d1cf8:
    // 0x1d1cf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d1cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1cfc: 0xae001808  sw          $zero, 0x1808($s0)
    ctx->pc = 0x1d1cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 0));
    // 0x1d1d00: 0xae021804  sw          $v0, 0x1804($s0)
    ctx->pc = 0x1d1d00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6148), GPR_U32(ctx, 2));
label_1d1d04:
    // 0x1d1d04: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d1d04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1d1d08:
    // 0x1d1d08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1d08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1d0c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d1d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1d1d10: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x1d1d10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x1d1d14: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1d1d14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d1d18: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1d1d18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d1d1c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d1d1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1d20: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1D1D20u;
    SET_GPR_U32(ctx, 31, 0x1D1D28u);
    ctx->pc = 0x1D1D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1D20u;
    // 0x1d1d24: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1D1D20u, 0x1D1D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1D28u;
label_1d1d28:
    // 0x1d1d28: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d1d28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d1d2c:
    // 0x1d1d2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d1d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1d30: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1D30u;
        // 0x1d1d34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1D38u;
}
