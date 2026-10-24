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

// Function: func_00380B70
// Address: 0x380b70 - 0x380d68
void func_00380B70_0x380b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00380B70_0x380b70");
#endif

    switch (ctx->pc) {
        case 0x380ba4u: goto label_380ba4;
        case 0x380bc0u: goto label_380bc0;
        case 0x380bccu: goto label_380bcc;
        case 0x380bdcu: goto label_380bdc;
        case 0x380becu: goto label_380bec;
        case 0x380c10u: goto label_380c10;
        case 0x380c34u: goto label_380c34;
        case 0x380c50u: goto label_380c50;
        case 0x380c8cu: goto label_380c8c;
        case 0x380ca8u: goto label_380ca8;
        case 0x380cd4u: goto label_380cd4;
        case 0x380ce4u: goto label_380ce4;
        case 0x380d18u: goto label_380d18;
        default: break;
    }

    ctx->pc = 0x380b70u;

    // 0x380b70: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x380b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x380b74: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x380b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x380b78: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x380b78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380b7c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x380b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x380b80: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x380b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x380b84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x380b84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380b88: 0x26510010  addiu       $s1, $s2, 0x10
    ctx->pc = 0x380b88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x380b8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x380b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380b90: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x380b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x380b94: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x380b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x380b98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x380b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x380b9c: 0xc0e02ba  jal         func_380AE8
    ctx->pc = 0x380B9Cu;
    SET_GPR_U32(ctx, 31, 0x380BA4u);
    ctx->pc = 0x380BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380B9Cu;
    // 0x380ba0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380AE8u, 0x380B9Cu, 0x380BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380BA4u;
label_380ba4:
    // 0x380ba4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x380BA4u;
    {
        const bool branch_taken_0x380ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x380ba4) {
            ctx->pc = 0x380BA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x380BA4u;
            // 0x380ba8: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x380BB8u;
            goto label_380bb8;
        }
    }
    ctx->pc = 0x380BACu;
    // 0x380bac: 0xa2420001  sb          $v0, 0x1($s2)
    ctx->pc = 0x380bacu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x380bb0: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x380BB0u;
    {
        const bool branch_taken_0x380bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x380BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380BB0u;
        // 0x380bb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380bb0) {
            ctx->pc = 0x380D48u;
            goto label_380d48;
        }
    }
    ctx->pc = 0x380BB8u;
label_380bb8:
    // 0x380bb8: 0xc0cac62  jal         func_32B188
    ctx->pc = 0x380BB8u;
    SET_GPR_U32(ctx, 31, 0x380BC0u);
    ctx->pc = 0x380BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380BB8u;
    // 0x380bbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B188u, 0x380BB8u, 0x380BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380BC0u;
label_380bc0:
    // 0x380bc0: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x380bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x380bc4: 0xc0caa7c  jal         func_32A9F0
    ctx->pc = 0x380BC4u;
    SET_GPR_U32(ctx, 31, 0x380BCCu);
    ctx->pc = 0x380BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380BC4u;
    // 0x380bc8: 0x86450004  lh          $a1, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A9F0u, 0x380BC4u, 0x380BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380BCCu;
label_380bcc:
    // 0x380bcc: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x380bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x380bd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x380bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380bd4: 0xc0ca9b4  jal         func_32A6D0
    ctx->pc = 0x380BD4u;
    SET_GPR_U32(ctx, 31, 0x380BDCu);
    ctx->pc = 0x380BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380BD4u;
    // 0x380bd8: 0x86460008  lh          $a2, 0x8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A6D0u, 0x380BD4u, 0x380BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380BDCu;
label_380bdc:
    // 0x380bdc: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x380bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x380be0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x380be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x380be4: 0xc0ca9b4  jal         func_32A6D0
    ctx->pc = 0x380BE4u;
    SET_GPR_U32(ctx, 31, 0x380BECu);
    ctx->pc = 0x380BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380BE4u;
    // 0x380be8: 0x8646000a  lh          $a2, 0xA($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A6D0u, 0x380BE4u, 0x380BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380BECu;
label_380bec:
    // 0x380bec: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x380becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x380bf0: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x380bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x380bf4: 0x2444b168  addiu       $a0, $v0, -0x4E98
    ctx->pc = 0x380bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947176));
    // 0x380bf8: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x380bf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380bfc: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x380bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3BB174u));
    // 0x380c00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x380C00u;
    {
        const bool branch_taken_0x380c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x380C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380C00u;
        // 0x380c04: 0x2474c4c0  addiu       $s4, $v1, -0x3B40 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380c00) {
            ctx->pc = 0x380C18u;
            goto label_380c18;
        }
    }
    ctx->pc = 0x380C08u;
    // 0x380c08: 0xc0eec16  jal         func_3BB058
    ctx->pc = 0x380C08u;
    SET_GPR_U32(ctx, 31, 0x380C10u);
    ctx->pc = 0x3BB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB058u, 0x380C08u, 0x380C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380C10u;
label_380c10:
    // 0x380c10: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x380C10u;
    {
        const bool branch_taken_0x380c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x380C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380C10u;
        // 0x380c14: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380c10) {
            ctx->pc = 0x380C28u;
            goto label_380c28;
        }
    }
    ctx->pc = 0x380C18u;
label_380c18:
    // 0x380c18: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x380c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x380c1c: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x380c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x380c20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x380c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x380c24: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x380c24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_380c28:
    // 0x380c28: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x380c28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x380c2c: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x380C2Cu;
    SET_GPR_U32(ctx, 31, 0x380C34u);
    ctx->pc = 0x380C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380C2Cu;
    // 0x380c30: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x380C2Cu, 0x380C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380C34u;
label_380c34:
    // 0x380c34: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x380c34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x380c38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x380c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380c3c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x380c3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380c40: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x380c40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380c44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x380c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380c48: 0xc0eec5e  jal         func_3BB178
    ctx->pc = 0x380C48u;
    SET_GPR_U32(ctx, 31, 0x380C50u);
    ctx->pc = 0x380C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380C48u;
    // 0x380c4c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB178u, 0x380C48u, 0x380C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380C50u;
label_380c50:
    // 0x380c50: 0x92030005  lbu         $v1, 0x5($s0)
    ctx->pc = 0x380c50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x380c54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x380c54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x380c58: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x380c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x380c5c: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x380c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x380c60: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x380c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x380c64: 0x8c82fff0  lw          $v0, -0x10($a0)
    ctx->pc = 0x380c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967280)));
    // 0x380c68: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x380C68u;
    {
        const bool branch_taken_0x380c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x380C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380C68u;
        // 0x380c6c: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380c68) {
            ctx->pc = 0x380C7Cu;
            goto label_380c7c;
        }
    }
    ctx->pc = 0x380C70u;
    // 0x380c70: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x380c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x380c74: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x380C74u;
    {
        const bool branch_taken_0x380c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x380C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380C74u;
        // 0x380c78: 0x2450c4d0  addiu       $s0, $v0, -0x3B30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380c74) {
            ctx->pc = 0x380C84u;
            goto label_380c84;
        }
    }
    ctx->pc = 0x380C7Cu;
label_380c7c:
    // 0x380c7c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x380c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x380c80: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x380c80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_380c84:
    // 0x380c84: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x380C84u;
    SET_GPR_U32(ctx, 31, 0x380C8Cu);
    ctx->pc = 0x380C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380C84u;
    // 0x380c88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x380C84u, 0x380C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380C8Cu;
label_380c8c:
    // 0x380c8c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x380c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x380c90: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x380c90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380c94: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x380c94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380c98: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x380c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380c9c: 0x8c65fff0  lw          $a1, -0x10($v1)
    ctx->pc = 0x380c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x380ca0: 0xc0eec5e  jal         func_3BB178
    ctx->pc = 0x380CA0u;
    SET_GPR_U32(ctx, 31, 0x380CA8u);
    ctx->pc = 0x380CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380CA0u;
    // 0x380ca4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB178u, 0x380CA0u, 0x380CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380CA8u;
label_380ca8:
    // 0x380ca8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x380ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x380cac: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x380cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x380cb0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x380CB0u;
    {
        const bool branch_taken_0x380cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x380CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380CB0u;
        // 0x380cb4: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380cb0) {
            ctx->pc = 0x380CC4u;
            goto label_380cc4;
        }
    }
    ctx->pc = 0x380CB8u;
    // 0x380cb8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x380cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x380cbc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x380CBCu;
    {
        const bool branch_taken_0x380cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x380CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380CBCu;
        // 0x380cc0: 0x2445c4d0  addiu       $a1, $v0, -0x3B30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380cbc) {
            ctx->pc = 0x380CCCu;
            goto label_380ccc;
        }
    }
    ctx->pc = 0x380CC4u;
label_380cc4:
    // 0x380cc4: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x380cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x380cc8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x380cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_380ccc:
    // 0x380ccc: 0xc0caf54  jal         func_32BD50
    ctx->pc = 0x380CCCu;
    SET_GPR_U32(ctx, 31, 0x380CD4u);
    ctx->pc = 0x380CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380CCCu;
    // 0x380cd0: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32BD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32BD50u, 0x380CCCu, 0x380CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380CD4u;
label_380cd4:
    // 0x380cd4: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x380cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x380cd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x380cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380cdc: 0xc0cacc0  jal         func_32B300
    ctx->pc = 0x380CDCu;
    SET_GPR_U32(ctx, 31, 0x380CE4u);
    ctx->pc = 0x380CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380CDCu;
    // 0x380ce0: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B300u, 0x380CDCu, 0x380CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380CE4u;
label_380ce4:
    // 0x380ce4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x380ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x380ce8: 0x24c5fff0  addiu       $a1, $a2, -0x10
    ctx->pc = 0x380ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x380cec: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x380cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x380cf0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x380cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x380cf4: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x380CF4u;
    {
        const bool branch_taken_0x380cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x380CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380CF4u;
        // 0x380cf8: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380cf4) {
            ctx->pc = 0x380D44u;
            goto label_380d44;
        }
    }
    ctx->pc = 0x380CFCu;
    // 0x380cfc: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x380cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x380d00: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x380d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x380d04: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x380d04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x380d08: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x380D08u;
    {
        const bool branch_taken_0x380d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x380D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380D08u;
        // 0x380d0c: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380d08) {
            ctx->pc = 0x380D20u;
            goto label_380d20;
        }
    }
    ctx->pc = 0x380D10u;
    // 0x380d10: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x380D10u;
    SET_GPR_U32(ctx, 31, 0x380D18u);
    ctx->pc = 0x380D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380D10u;
    // 0x380d14: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x380D10u, 0x380D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380D18u;
label_380d18:
    // 0x380d18: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x380D18u;
    {
        const bool branch_taken_0x380d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x380D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380D18u;
        // 0x380d1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380d18) {
            ctx->pc = 0x380D48u;
            goto label_380d48;
        }
    }
    ctx->pc = 0x380D20u;
label_380d20:
    // 0x380d20: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x380d20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x380d24: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x380d24u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x380d28: 0x24844030  addiu       $a0, $a0, 0x4030
    ctx->pc = 0x380d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16432));
    // 0x380d2c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x380d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x380d30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x380d30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x380d34: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x380d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x380d38: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x380d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x380d3c: 0xacc3fff0  sw          $v1, -0x10($a2)
    ctx->pc = 0x380d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 3));
    // 0x380d40: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x380d40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_380d44:
    // 0x380d44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x380d44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_380d48:
    // 0x380d48: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x380d48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x380d4c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x380d4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x380d50: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x380d50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x380d54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x380d54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x380d58: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x380d58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x380d5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x380d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x380d60: 0x3e00008  jr          $ra
    ctx->pc = 0x380D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380D60u;
        // 0x380d64: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380D68u;
}
