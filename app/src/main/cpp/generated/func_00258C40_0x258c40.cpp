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

// Function: func_00258C40
// Address: 0x258c40 - 0x258d80
void func_00258C40_0x258c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00258C40_0x258c40");
#endif

    switch (ctx->pc) {
        case 0x258cf8u: goto label_258cf8;
        case 0x258d18u: goto label_258d18;
        case 0x258d2cu: goto label_258d2c;
        case 0x258d58u: goto label_258d58;
        case 0x258d64u: goto label_258d64;
        default: break;
    }

    ctx->pc = 0x258c40u;

    // 0x258c40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x258c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x258c44: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x258c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x258c48: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x258c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x258c4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x258c4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258c50: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x258c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x258c54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x258c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x258c58: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x258c58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x258c5c: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x258c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x258c60: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x258c60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x258c64: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x258c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x258c68: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x258C68u;
    {
        const bool branch_taken_0x258c68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x258C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258C68u;
        // 0x258c6c: 0xae0216d0  sw          $v0, 0x16D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258c68) {
            ctx->pc = 0x258C84u;
            goto label_258c84;
        }
    }
    ctx->pc = 0x258C70u;
    // 0x258c70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x258c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x258c74: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x258C74u;
    {
        const bool branch_taken_0x258c74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x258c74) {
            ctx->pc = 0x258D24u;
            goto label_258d24;
        }
    }
    ctx->pc = 0x258C7Cu;
    // 0x258c7c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x258C7Cu;
    {
        const bool branch_taken_0x258c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258C7Cu;
        // 0x258c80: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258c7c) {
            ctx->pc = 0x258D68u;
            goto label_258d68;
        }
    }
    ctx->pc = 0x258C84u;
label_258c84:
    // 0x258c84: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x258c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x258c88: 0x28620248  slti        $v0, $v1, 0x248
    ctx->pc = 0x258c88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)584) ? 1 : 0);
    // 0x258c8c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x258C8Cu;
    {
        const bool branch_taken_0x258c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258C8Cu;
        // 0x258c90: 0x28620245  slti        $v0, $v1, 0x245 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)581) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x258c8c) {
            ctx->pc = 0x258CB8u;
            goto label_258cb8;
        }
    }
    ctx->pc = 0x258C94u;
    // 0x258c94: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x258C94u;
    {
        const bool branch_taken_0x258c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258C94u;
        // 0x258c98: 0x2862020a  slti        $v0, $v1, 0x20A (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)522) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x258c94) {
            ctx->pc = 0x258CDCu;
            goto label_258cdc;
        }
    }
    ctx->pc = 0x258C9Cu;
    // 0x258c9c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x258C9Cu;
    {
        const bool branch_taken_0x258c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x258c9c) {
            ctx->pc = 0x258CA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x258C9Cu;
            // 0x258ca0: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x258CE0u;
            goto label_258ce0;
        }
    }
    ctx->pc = 0x258CA4u;
    // 0x258ca4: 0x2862020f  slti        $v0, $v1, 0x20F
    ctx->pc = 0x258ca4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)527) ? 1 : 0);
    // 0x258ca8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x258CA8u;
    {
        const bool branch_taken_0x258ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x258ca8) {
            ctx->pc = 0x258CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x258CA8u;
            // 0x258cac: 0x24020218  addiu       $v0, $zero, 0x218 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 536));
            ctx->in_delay_slot = false;
            ctx->pc = 0x258CDCu;
            goto label_258cdc;
        }
    }
    ctx->pc = 0x258CB0u;
    // 0x258cb0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x258CB0u;
    {
        const bool branch_taken_0x258cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258CB0u;
        // 0x258cb4: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258cb0) {
            ctx->pc = 0x258CE0u;
            goto label_258ce0;
        }
    }
    ctx->pc = 0x258CB8u;
label_258cb8:
    // 0x258cb8: 0x2862024f  slti        $v0, $v1, 0x24F
    ctx->pc = 0x258cb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)591) ? 1 : 0);
    // 0x258cbc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x258CBCu;
    {
        const bool branch_taken_0x258cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x258cbc) {
            ctx->pc = 0x258CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x258CBCu;
            // 0x258cc0: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x258CE0u;
            goto label_258ce0;
        }
    }
    ctx->pc = 0x258CC4u;
    // 0x258cc4: 0x28620252  slti        $v0, $v1, 0x252
    ctx->pc = 0x258cc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)594) ? 1 : 0);
    // 0x258cc8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x258CC8u;
    {
        const bool branch_taken_0x258cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x258cc8) {
            ctx->pc = 0x258CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x258CC8u;
            // 0x258ccc: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x258CE0u;
            goto label_258ce0;
        }
    }
    ctx->pc = 0x258CD0u;
    // 0x258cd0: 0x2862027a  slti        $v0, $v1, 0x27A
    ctx->pc = 0x258cd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)634) ? 1 : 0);
    // 0x258cd4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x258CD4u;
    {
        const bool branch_taken_0x258cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x258cd4) {
            ctx->pc = 0x258CD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x258CD4u;
            // 0x258cd8: 0x28620278  slti        $v0, $v1, 0x278 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)632) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x258CDCu;
            goto label_258cdc;
        }
    }
    ctx->pc = 0x258CDCu;
label_258cdc:
    // 0x258cdc: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x258cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_258ce0:
    // 0x258ce0: 0x8c430c4c  lw          $v1, 0xC4C($v0)
    ctx->pc = 0x258ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3148)));
    // 0x258ce4: 0x8c440c50  lw          $a0, 0xC50($v0)
    ctx->pc = 0x258ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3152)));
    // 0x258ce8: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x258ce8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x258cec: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x258cecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x258cf0: 0xc09d91a  jal         func_276468
    ctx->pc = 0x258CF0u;
    SET_GPR_U32(ctx, 31, 0x258CF8u);
    ctx->pc = 0x258CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258CF0u;
    // 0x258cf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x258CF0u, 0x258CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258CF8u;
label_258cf8:
    // 0x258cf8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x258cf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x258cfc: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x258cfcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x258d00: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x258d00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258d04: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x258d04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258d08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x258d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258d0c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x258d0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x258d10: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x258D10u;
    SET_GPR_U32(ctx, 31, 0x258D18u);
    ctx->pc = 0x258D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258D10u;
    // 0x258d14: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x258D10u, 0x258D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258D18u;
label_258d18:
    // 0x258d18: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x258d18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x258d1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x258d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x258d20: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x258d20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_258d24:
    // 0x258d24: 0xc055f06  jal         func_157C18
    ctx->pc = 0x258D24u;
    SET_GPR_U32(ctx, 31, 0x258D2Cu);
    ctx->pc = 0x258D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258D24u;
    // 0x258d28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x258D24u, 0x258D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258D2Cu;
label_258d2c:
    // 0x258d2c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x258D2Cu;
    {
        const bool branch_taken_0x258d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258D2Cu;
        // 0x258d30: 0x2402006e  addiu       $v0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258d2c) {
            ctx->pc = 0x258D44u;
            goto label_258d44;
        }
    }
    ctx->pc = 0x258D34u;
    // 0x258d34: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x258d34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x258d38: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x258d38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x258d3c: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x258d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x258d40: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x258d40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_258d44:
    // 0x258d44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x258d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x258d48: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x258d48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x258d4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x258d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258d50: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x258D50u;
    SET_GPR_U32(ctx, 31, 0x258D58u);
    ctx->pc = 0x258D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258D50u;
    // 0x258d54: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x258D50u, 0x258D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258D58u;
label_258d58:
    // 0x258d58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x258d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258d5c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x258D5Cu;
    SET_GPR_U32(ctx, 31, 0x258D64u);
    ctx->pc = 0x258D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258D5Cu;
    // 0x258d60: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x258D5Cu, 0x258D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258D64u;
label_258d64:
    // 0x258d64: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x258d64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_258d68:
    // 0x258d68: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x258d68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258d6c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x258d6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258d70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x258d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258d74: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x258d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x258d78: 0x3e00008  jr          $ra
    ctx->pc = 0x258D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x258D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258D78u;
        // 0x258d7c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258D78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258D80u;
}
