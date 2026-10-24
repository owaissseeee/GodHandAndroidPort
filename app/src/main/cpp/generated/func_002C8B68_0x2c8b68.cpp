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

// Function: func_002C8B68
// Address: 0x2c8b68 - 0x2c8cf8
void func_002C8B68_0x2c8b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C8B68_0x2c8b68");
#endif

    switch (ctx->pc) {
        case 0x2c8b8cu: goto label_2c8b8c;
        case 0x2c8ba4u: goto label_2c8ba4;
        case 0x2c8c10u: goto label_2c8c10;
        case 0x2c8c60u: goto label_2c8c60;
        case 0x2c8cd4u: goto label_2c8cd4;
        default: break;
    }

    ctx->pc = 0x2c8b68u;

    // 0x2c8b68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c8b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c8b6c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2c8b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2c8b70: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2c8b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2c8b74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c8b74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8b78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c8b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c8b7c: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x2c8b7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2c8b80: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x2c8b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2c8b84: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2C8B84u;
    SET_GPR_U32(ctx, 31, 0x2C8B8Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2C8B84u, 0x2C8B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8B8Cu;
label_2c8b8c:
    // 0x2c8b8c: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x2c8b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x2c8b90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c8b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8b94: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2c8b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x2c8b98: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c8b98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c8b9c: 0xc0b233e  jal         func_2C8CF8
    ctx->pc = 0x2C8B9Cu;
    SET_GPR_U32(ctx, 31, 0x2C8BA4u);
    ctx->pc = 0x2C8BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8B9Cu;
    // 0x2c8ba0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8CF8u, 0x2C8B9Cu, 0x2C8BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8BA4u;
label_2c8ba4:
    // 0x2c8ba4: 0x92030013  lbu         $v1, 0x13($s0)
    ctx->pc = 0x2c8ba4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 19)));
    // 0x2c8ba8: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2c8ba8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2c8bac: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x2C8BACu;
    {
        const bool branch_taken_0x2c8bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8BACu;
        // 0x2c8bb0: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8bac) {
            ctx->pc = 0x2C8CE4u;
            goto label_2c8ce4;
        }
    }
    ctx->pc = 0x2C8BB4u;
    // 0x2c8bb4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c8bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c8bb8: 0x2442cc30  addiu       $v0, $v0, -0x33D0
    ctx->pc = 0x2c8bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954032));
    // 0x2c8bbc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c8bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c8bc0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c8bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c8bc4: 0x800008  jr          $a0
    ctx->pc = 0x2C8BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C8BCCu: goto label_2c8bcc;
            case 0x2C8BE4u: goto label_2c8be4;
            case 0x2C8C2Cu: goto label_2c8c2c;
            case 0x2C8CB4u: goto label_2c8cb4;
            case 0x2C8CDCu: goto label_2c8cdc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8BC4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C8BCCu;
label_2c8bcc:
    // 0x2c8bcc: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x2c8bccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2c8bd0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2c8bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2c8bd4: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x2C8BD4u;
    {
        const bool branch_taken_0x2c8bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8BD4u;
        // 0x2c8bd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8bd4) {
            ctx->pc = 0x2C8CE4u;
            goto label_2c8ce4;
        }
    }
    ctx->pc = 0x2C8BDCu;
    // 0x2c8bdc: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2C8BDCu;
    {
        const bool branch_taken_0x2c8bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8BDCu;
        // 0x2c8be0: 0xa2020013  sb          $v0, 0x13($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 19), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8bdc) {
            ctx->pc = 0x2C8CE4u;
            goto label_2c8ce4;
        }
    }
    ctx->pc = 0x2C8BE4u;
label_2c8be4:
    // 0x2c8be4: 0x9622000a  lhu         $v0, 0xA($s1)
    ctx->pc = 0x2c8be4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x2c8be8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C8BE8u;
    {
        const bool branch_taken_0x2c8be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8BE8u;
        // 0x2c8bec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8be8) {
            ctx->pc = 0x2C8C24u;
            goto label_2c8c24;
        }
    }
    ctx->pc = 0x2C8BF0u;
    // 0x2c8bf0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2c8bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2c8bf4: 0x9625000c  lhu         $a1, 0xC($s1)
    ctx->pc = 0x2c8bf4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2c8bf8: 0x8626000e  lh          $a2, 0xE($s1)
    ctx->pc = 0x2c8bf8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x2c8bfc: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x2c8bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x2c8c00: 0x26270010  addiu       $a3, $s1, 0x10
    ctx->pc = 0x2c8c00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2c8c04: 0x3c080002  lui         $t0, 0x2
    ctx->pc = 0x2c8c04u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2 << 16));
    // 0x2c8c08: 0xc0b2e5a  jal         func_2CB968
    ctx->pc = 0x2C8C08u;
    SET_GPR_U32(ctx, 31, 0x2C8C10u);
    ctx->pc = 0x2C8C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8C08u;
    // 0x2c8c0c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB968u, 0x2C8C08u, 0x2C8C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8C10u;
label_2c8c10:
    // 0x2c8c10: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8C10u;
    {
        const bool branch_taken_0x2c8c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8C10u;
        // 0x2c8c14: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8c10) {
            ctx->pc = 0x2C8C20u;
            goto label_2c8c20;
        }
    }
    ctx->pc = 0x2C8C18u;
    // 0x2c8c18: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2C8C18u;
    {
        const bool branch_taken_0x2c8c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8C18u;
        // 0x2c8c1c: 0xa200000c  sb          $zero, 0xC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8c18) {
            ctx->pc = 0x2C8CE4u;
            goto label_2c8ce4;
        }
    }
    ctx->pc = 0x2C8C20u;
label_2c8c20:
    // 0x2c8c20: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c8c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c8c24:
    // 0x2c8c24: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2C8C24u;
    {
        const bool branch_taken_0x2c8c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8C24u;
        // 0x2c8c28: 0xa2020013  sb          $v0, 0x13($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 19), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8c24) {
            ctx->pc = 0x2C8CE4u;
            goto label_2c8ce4;
        }
    }
    ctx->pc = 0x2C8C2Cu;
label_2c8c2c:
    // 0x2c8c2c: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x2c8c2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2c8c30: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2c8c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2c8c34: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C8C34u;
    {
        const bool branch_taken_0x2c8c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8c34) {
            ctx->pc = 0x2C8C38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8C34u;
            // 0x2c8c38: 0x9622000a  lhu         $v0, 0xA($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8C48u;
            goto label_2c8c48;
        }
    }
    ctx->pc = 0x2C8C3Cu;
    // 0x2c8c3c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2c8c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c8c40: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2C8C40u;
    {
        const bool branch_taken_0x2c8c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8C40u;
        // 0x2c8c44: 0xa2020013  sb          $v0, 0x13($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 19), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8c40) {
            ctx->pc = 0x2C8CE4u;
            goto label_2c8ce4;
        }
    }
    ctx->pc = 0x2C8C48u;
label_2c8c48:
    // 0x2c8c48: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x2C8C48u;
    {
        const bool branch_taken_0x2c8c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8c48) {
            ctx->pc = 0x2C8C4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8C48u;
            // 0x2c8c4c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8CE8u;
            goto label_2c8ce8;
        }
    }
    ctx->pc = 0x2C8C50u;
    // 0x2c8c50: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x2c8c50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2c8c54: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2c8c54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2c8c58: 0xc0b2fd2  jal         func_2CBF48
    ctx->pc = 0x2C8C58u;
    SET_GPR_U32(ctx, 31, 0x2C8C60u);
    ctx->pc = 0x2C8C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8C58u;
    // 0x2c8c5c: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBF48u, 0x2C8C58u, 0x2C8C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8C60u;
label_2c8c60:
    // 0x2c8c60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c8c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8c64: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8C64u;
    {
        const bool branch_taken_0x2c8c64 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8C64u;
        // 0x2c8c68: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8c64) {
            ctx->pc = 0x2C8C74u;
            goto label_2c8c74;
        }
    }
    ctx->pc = 0x2C8C6Cu;
    // 0x2c8c6c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2C8C6Cu;
    {
        const bool branch_taken_0x2c8c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8C6Cu;
        // 0x2c8c70: 0xa2020013  sb          $v0, 0x13($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 19), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8c6c) {
            ctx->pc = 0x2C8CE4u;
            goto label_2c8ce4;
        }
    }
    ctx->pc = 0x2C8C74u;
label_2c8c74:
    // 0x2c8c74: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x2c8c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2c8c78: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x2c8c78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2c8c7c: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x2c8c7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2c8c80: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x2c8c80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2c8c84: 0xb0a20047  sdl         $v0, 0x47($a1)
    ctx->pc = 0x2c8c84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c8c88: 0xb4a20040  sdr         $v0, 0x40($a1)
    ctx->pc = 0x2c8c88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c8c8c: 0xb0a3004f  sdl         $v1, 0x4F($a1)
    ctx->pc = 0x2c8c8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c8c90: 0xb4a30048  sdr         $v1, 0x48($a1)
    ctx->pc = 0x2c8c90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c8c94: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x2c8c94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2c8c98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c8c98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8c9c: 0x0  nop
    ctx->pc = 0x2c8c9cu;
    // NOP
    // 0x2c8ca0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c8ca0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c8ca4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c8ca4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2c8ca8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2c8ca8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2c8cac: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2C8CACu;
    {
        const bool branch_taken_0x2c8cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8CACu;
        // 0x2c8cb0: 0xa4a30034  sh          $v1, 0x34($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 52), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8cac) {
            ctx->pc = 0x2C8CE4u;
            goto label_2c8ce4;
        }
    }
    ctx->pc = 0x2C8CB4u;
label_2c8cb4:
    // 0x2c8cb4: 0x9622000a  lhu         $v0, 0xA($s1)
    ctx->pc = 0x2c8cb4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x2c8cb8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C8CB8u;
    {
        const bool branch_taken_0x2c8cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8CB8u;
        // 0x2c8cbc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8cb8) {
            ctx->pc = 0x2C8CD8u;
            goto label_2c8cd8;
        }
    }
    ctx->pc = 0x2C8CC0u;
    // 0x2c8cc0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2c8cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2c8cc4: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x2c8cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2c8cc8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x2c8cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x2c8ccc: 0xc0b2f08  jal         func_2CBC20
    ctx->pc = 0x2C8CCCu;
    SET_GPR_U32(ctx, 31, 0x2C8CD4u);
    ctx->pc = 0x2C8CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8CCCu;
    // 0x2c8cd0: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBC20u, 0x2C8CCCu, 0x2C8CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8CD4u;
label_2c8cd4:
    // 0x2c8cd4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2c8cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2c8cd8:
    // 0x2c8cd8: 0xa2020013  sb          $v0, 0x13($s0)
    ctx->pc = 0x2c8cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 19), (uint8_t)GPR_U32(ctx, 2));
label_2c8cdc:
    // 0x2c8cdc: 0xa2000013  sb          $zero, 0x13($s0)
    ctx->pc = 0x2c8cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 19), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c8ce0: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2c8ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_2c8ce4:
    // 0x2c8ce4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2c8ce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c8ce8:
    // 0x2c8ce8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2c8ce8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c8cec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c8cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c8cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8CF0u;
        // 0x2c8cf4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8CF8u;
}
