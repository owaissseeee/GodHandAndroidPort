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

// Function: cE3_menu
// Address: 0x201ae0 - 0x201be0
void cE3_menu_0x201ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cE3_menu_0x201ae0");
#endif

    switch (ctx->pc) {
        case 0x201b3cu: goto label_201b3c;
        case 0x201b68u: goto label_201b68;
        default: break;
    }

    ctx->pc = 0x201ae0u;

    // 0x201ae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x201ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x201ae4: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x201ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x201ae8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x201ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x201aec: 0x24637a2c  addiu       $v1, $v1, 0x7A2C
    ctx->pc = 0x201aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31276));
    // 0x201af0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201af4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x201af4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A34u));
    // 0x201af8: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x201af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x201afc: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x201AFCu;
    {
        const bool branch_taken_0x201afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201AFCu;
        // 0x201b00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201afc) {
            ctx->pc = 0x201BD0u;
            goto label_201bd0;
        }
    }
    ctx->pc = 0x201B04u;
    // 0x201b04: 0x9062fb04  lbu         $v0, -0x4FC($v1)
    ctx->pc = 0x201b04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294966020)));
    // 0x201b08: 0x50400032  beql        $v0, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x201B08u;
    {
        const bool branch_taken_0x201b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x201b08) {
            ctx->pc = 0x201B0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201B08u;
            // 0x201b0c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201BD4u;
            goto label_201bd4;
        }
    }
    ctx->pc = 0x201B10u;
    // 0x201b10: 0x820b0002  lb          $t3, 0x2($s0)
    ctx->pc = 0x201b10u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x201b14: 0x1960000b  blez        $t3, . + 4 + (0xB << 2)
    ctx->pc = 0x201B14u;
    {
        const bool branch_taken_0x201b14 = (GPR_S64(ctx, 11) <= 0);
        ctx->pc = 0x201B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201B14u;
        // 0x201b18: 0x3c0a0043  lui         $t2, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201b14) {
            ctx->pc = 0x201B44u;
            goto label_201b44;
        }
    }
    ctx->pc = 0x201B1Cu;
    // 0x201b1c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x201b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x201b20: 0x254ac7a0  addiu       $t2, $t2, -0x3860
    ctx->pc = 0x201b20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294952864));
    // 0x201b24: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x201b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x201b28: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x201b28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x201b2c: 0x24070032  addiu       $a3, $zero, 0x32
    ctx->pc = 0x201b2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x201b30: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x201b30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201b34: 0xc0b8358  jal         func_2E0D60
    ctx->pc = 0x201B34u;
    SET_GPR_U32(ctx, 31, 0x201B3Cu);
    ctx->pc = 0x201B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201B34u;
    // 0x201b38: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0D60u, 0x201B34u, 0x201B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201B3Cu;
label_201b3c:
    // 0x201b3c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x201B3Cu;
    {
        const bool branch_taken_0x201b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201B3Cu;
        // 0x201b40: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201b3c) {
            ctx->pc = 0x201B6Cu;
            goto label_201b6c;
        }
    }
    ctx->pc = 0x201B44u;
label_201b44:
    // 0x201b44: 0x3c0a0043  lui         $t2, 0x43
    ctx->pc = 0x201b44u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)67 << 16));
    // 0x201b48: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x201b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x201b4c: 0x254ac7b8  addiu       $t2, $t2, -0x3848
    ctx->pc = 0x201b4cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294952888));
    // 0x201b50: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x201b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x201b54: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x201b54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x201b58: 0x24070032  addiu       $a3, $zero, 0x32
    ctx->pc = 0x201b58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x201b5c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x201b5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201b60: 0xc0b8358  jal         func_2E0D60
    ctx->pc = 0x201B60u;
    SET_GPR_U32(ctx, 31, 0x201B68u);
    ctx->pc = 0x201B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201B60u;
    // 0x201b64: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0D60u, 0x201B60u, 0x201B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201B68u;
label_201b68:
    // 0x201b68: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x201b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
label_201b6c:
    // 0x201b6c: 0x246374a0  addiu       $v1, $v1, 0x74A0
    ctx->pc = 0x201b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x201b70: 0x8c620098  lw          $v0, 0x98($v1)
    ctx->pc = 0x201b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 152)));
    // 0x201b74: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x201b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x201b78: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x201B78u;
    {
        const bool branch_taken_0x201b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x201b78) {
            ctx->pc = 0x201B7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201B78u;
            // 0x201b7c: 0x8c620098  lw          $v0, 0x98($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201B90u;
            goto label_201b90;
        }
    }
    ctx->pc = 0x201B80u;
    // 0x201b80: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x201b80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x201b84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x201b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x201b88: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x201b88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x201b8c: 0x8c620098  lw          $v0, 0x98($v1)
    ctx->pc = 0x201b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 152)));
label_201b90:
    // 0x201b90: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x201b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x201b94: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x201B94u;
    {
        const bool branch_taken_0x201b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x201b94) {
            ctx->pc = 0x201B98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201B94u;
            // 0x201b98: 0x82020002  lb          $v0, 0x2($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201BACu;
            goto label_201bac;
        }
    }
    ctx->pc = 0x201B9Cu;
    // 0x201b9c: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x201b9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x201ba0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x201ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x201ba4: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x201ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x201ba8: 0x82020002  lb          $v0, 0x2($s0)
    ctx->pc = 0x201ba8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_201bac:
    // 0x201bac: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x201BACu;
    {
        const bool branch_taken_0x201bac = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x201BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201BACu;
        // 0x201bb0: 0x92030002  lbu         $v1, 0x2($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201bac) {
            ctx->pc = 0x201BC8u;
            goto label_201bc8;
        }
    }
    ctx->pc = 0x201BB4u;
    // 0x201bb4: 0x28420079  slti        $v0, $v0, 0x79
    ctx->pc = 0x201bb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)121) ? 1 : 0);
    // 0x201bb8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x201BB8u;
    {
        const bool branch_taken_0x201bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x201bb8) {
            ctx->pc = 0x201BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201BB8u;
            // 0x201bbc: 0x24030078  addiu       $v1, $zero, 0x78 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201BCCu;
            goto label_201bcc;
        }
    }
    ctx->pc = 0x201BC0u;
    // 0x201bc0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x201BC0u;
    {
        const bool branch_taken_0x201bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201BC0u;
        // 0x201bc4: 0xa2030002  sb          $v1, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201bc0) {
            ctx->pc = 0x201BD0u;
            goto label_201bd0;
        }
    }
    ctx->pc = 0x201BC8u;
label_201bc8:
    // 0x201bc8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x201bc8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_201bcc:
    // 0x201bcc: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x201bccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
label_201bd0:
    // 0x201bd0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x201bd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_201bd4:
    // 0x201bd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x201BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201BD8u;
        // 0x201bdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201BE0u;
}
