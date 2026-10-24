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

// Function: ModeDispatch_tickWithHitStop
// Address: 0x1b0f70 - 0x1b1070
void ModeDispatch_tickWithHitStop_0x1b0f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ModeDispatch_tickWithHitStop_0x1b0f70");
#endif

    switch (ctx->pc) {
        case 0x1b0f70u: goto label_1b0f70;
        case 0x1b0f74u: goto label_1b0f74;
        case 0x1b0f78u: goto label_1b0f78;
        case 0x1b0f7cu: goto label_1b0f7c;
        case 0x1b0f80u: goto label_1b0f80;
        case 0x1b0f84u: goto label_1b0f84;
        case 0x1b0f88u: goto label_1b0f88;
        case 0x1b0f8cu: goto label_1b0f8c;
        case 0x1b0f90u: goto label_1b0f90;
        case 0x1b0f94u: goto label_1b0f94;
        case 0x1b0f98u: goto label_1b0f98;
        case 0x1b0f9cu: goto label_1b0f9c;
        case 0x1b0fa0u: goto label_1b0fa0;
        case 0x1b0fa4u: goto label_1b0fa4;
        case 0x1b0fa8u: goto label_1b0fa8;
        case 0x1b0facu: goto label_1b0fac;
        case 0x1b0fb0u: goto label_1b0fb0;
        case 0x1b0fb4u: goto label_1b0fb4;
        case 0x1b0fb8u: goto label_1b0fb8;
        case 0x1b0fbcu: goto label_1b0fbc;
        case 0x1b0fc0u: goto label_1b0fc0;
        case 0x1b0fc4u: goto label_1b0fc4;
        case 0x1b0fc8u: goto label_1b0fc8;
        case 0x1b0fccu: goto label_1b0fcc;
        case 0x1b0fd0u: goto label_1b0fd0;
        case 0x1b0fd4u: goto label_1b0fd4;
        case 0x1b0fd8u: goto label_1b0fd8;
        case 0x1b0fdcu: goto label_1b0fdc;
        case 0x1b0fe0u: goto label_1b0fe0;
        case 0x1b0fe4u: goto label_1b0fe4;
        case 0x1b0fe8u: goto label_1b0fe8;
        case 0x1b0fecu: goto label_1b0fec;
        case 0x1b0ff0u: goto label_1b0ff0;
        case 0x1b0ff4u: goto label_1b0ff4;
        case 0x1b0ff8u: goto label_1b0ff8;
        case 0x1b0ffcu: goto label_1b0ffc;
        case 0x1b1000u: goto label_1b1000;
        case 0x1b1004u: goto label_1b1004;
        case 0x1b1008u: goto label_1b1008;
        case 0x1b100cu: goto label_1b100c;
        case 0x1b1010u: goto label_1b1010;
        case 0x1b1014u: goto label_1b1014;
        case 0x1b1018u: goto label_1b1018;
        case 0x1b101cu: goto label_1b101c;
        case 0x1b1020u: goto label_1b1020;
        case 0x1b1024u: goto label_1b1024;
        case 0x1b1028u: goto label_1b1028;
        case 0x1b102cu: goto label_1b102c;
        case 0x1b1030u: goto label_1b1030;
        case 0x1b1034u: goto label_1b1034;
        case 0x1b1038u: goto label_1b1038;
        case 0x1b103cu: goto label_1b103c;
        case 0x1b1040u: goto label_1b1040;
        case 0x1b1044u: goto label_1b1044;
        case 0x1b1048u: goto label_1b1048;
        case 0x1b104cu: goto label_1b104c;
        case 0x1b1050u: goto label_1b1050;
        case 0x1b1054u: goto label_1b1054;
        case 0x1b1058u: goto label_1b1058;
        case 0x1b105cu: goto label_1b105c;
        case 0x1b1060u: goto label_1b1060;
        case 0x1b1064u: goto label_1b1064;
        case 0x1b1068u: goto label_1b1068;
        case 0x1b106cu: goto label_1b106c;
        default: break;
    }

    ctx->pc = 0x1b0f70u;

label_1b0f70:
    // 0x1b0f70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b0f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b0f74:
    // 0x1b0f74: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b0f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1b0f78:
    // 0x1b0f78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b0f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b0f7c:
    // 0x1b0f7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b0f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b0f80:
    // 0x1b0f80: 0xc06ddac  jal         func_1B76B0
label_1b0f84:
    if (ctx->pc == 0x1B0F84u) {
        ctx->pc = 0x1B0F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F80u;
        // 0x1b0f84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0F88u;
        goto label_1b0f88;
    }
    ctx->pc = 0x1B0F80u;
    SET_GPR_U32(ctx, 31, 0x1B0F88u);
    ctx->pc = 0x1B0F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0F80u;
    // 0x1b0f84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x1B0F80u, 0x1B0F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0F88u;
label_1b0f88:
    // 0x1b0f88: 0x50400034  beql        $v0, $zero, . + 4 + (0x34 << 2)
label_1b0f8c:
    if (ctx->pc == 0x1B0F8Cu) {
        ctx->pc = 0x1B0F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F88u;
        // 0x1b0f8c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0F90u;
        goto label_1b0f90;
    }
    ctx->pc = 0x1B0F88u;
    {
        const bool branch_taken_0x1b0f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0f88) {
            ctx->pc = 0x1B0F8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0F88u;
            // 0x1b0f8c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B105Cu;
            goto label_1b105c;
        }
    }
    ctx->pc = 0x1B0F90u;
label_1b0f90:
    // 0x1b0f90: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1b0f90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_1b0f94:
    // 0x1b0f94: 0xc07f8d6  jal         func_1FE358
label_1b0f98:
    if (ctx->pc == 0x1B0F98u) {
        ctx->pc = 0x1B0F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F94u;
        // 0x1b0f98: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0F9Cu;
        goto label_1b0f9c;
    }
    ctx->pc = 0x1B0F94u;
    SET_GPR_U32(ctx, 31, 0x1B0F9Cu);
    ctx->pc = 0x1B0F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0F94u;
    // 0x1b0f98: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE358u, 0x1B0F94u, 0x1B0F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0F9Cu;
label_1b0f9c:
    // 0x1b0f9c: 0x5440002f  bnel        $v0, $zero, . + 4 + (0x2F << 2)
label_1b0fa0:
    if (ctx->pc == 0x1B0FA0u) {
        ctx->pc = 0x1B0FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F9Cu;
        // 0x1b0fa0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0FA4u;
        goto label_1b0fa4;
    }
    ctx->pc = 0x1B0F9Cu;
    {
        const bool branch_taken_0x1b0f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0f9c) {
            ctx->pc = 0x1B0FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0F9Cu;
            // 0x1b0fa0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B105Cu;
            goto label_1b105c;
        }
    }
    ctx->pc = 0x1B0FA4u;
label_1b0fa4:
    // 0x1b0fa4: 0xc06c618  jal         func_1B1860
label_1b0fa8:
    if (ctx->pc == 0x1B0FA8u) {
        ctx->pc = 0x1B0FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0FA4u;
        // 0x1b0fa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0FACu;
        goto label_1b0fac;
    }
    ctx->pc = 0x1B0FA4u;
    SET_GPR_U32(ctx, 31, 0x1B0FACu);
    ctx->pc = 0x1B0FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0FA4u;
    // 0x1b0fa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1860u, 0x1B0FA4u, 0x1B0FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0FACu;
label_1b0fac:
    // 0x1b0fac: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1b0facu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_1b0fb0:
    // 0x1b0fb0: 0xc0a4bd4  jal         func_292F50
label_1b0fb4:
    if (ctx->pc == 0x1B0FB4u) {
        ctx->pc = 0x1B0FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0FB0u;
        // 0x1b0fb4: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0FB8u;
        goto label_1b0fb8;
    }
    ctx->pc = 0x1B0FB0u;
    SET_GPR_U32(ctx, 31, 0x1B0FB8u);
    ctx->pc = 0x1B0FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0FB0u;
    // 0x1b0fb4: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1B0FB0u, 0x1B0FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0FB8u;
label_1b0fb8:
    // 0x1b0fb8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1b0fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_1b0fbc:
    // 0x1b0fbc: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x1b0fbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_1b0fc0:
    // 0x1b0fc0: 0x2446dcc0  addiu       $a2, $v0, -0x2340
    ctx->pc = 0x1b0fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958272));
label_1b0fc4:
    // 0x1b0fc4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b0fc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b0fc8:
    // 0x1b0fc8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1b0fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1b0fcc:
    // 0x1b0fcc: 0xe60005a8  swc1        $f0, 0x5A8($s0)
    ctx->pc = 0x1b0fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1448), bits); }
label_1b0fd0:
    // 0x1b0fd0: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x1b0fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1b0fd4:
    // 0x1b0fd4: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x1b0fd4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1b0fd8:
    // 0x1b0fd8: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_1b0fdc:
    if (ctx->pc == 0x1B0FDCu) {
        ctx->pc = 0x1B0FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0FD8u;
        // 0x1b0fdc: 0xc21021  addu        $v0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0FE0u;
        goto label_1b0fe0;
    }
    ctx->pc = 0x1B0FD8u;
    {
        const bool branch_taken_0x1b0fd8 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1B0FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0FD8u;
        // 0x1b0fdc: 0xc21021  addu        $v0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0fd8) {
            ctx->pc = 0x1B1004u;
            goto label_1b1004;
        }
    }
    ctx->pc = 0x1B0FE0u;
label_1b0fe0:
    // 0x1b0fe0: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x1b0fe0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1b0fe4:
    // 0x1b0fe4: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1b0fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1b0fe8:
    // 0x1b0fe8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1b0fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1b0fec:
    // 0x1b0fec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b0fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b0ff0:
    // 0x1b0ff0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b0ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1b0ff4:
    // 0x1b0ff4: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x1b0ff4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_1b0ff8:
    // 0x1b0ff8: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x1b0ff8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_1b0ffc:
    // 0x1b0ffc: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b1000:
    if (ctx->pc == 0x1B1000u) {
        ctx->pc = 0x1B1000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0FFCu;
        // 0x1b1000: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1004u;
        goto label_1b1004;
    }
    ctx->pc = 0x1B0FFCu;
    {
        const bool branch_taken_0x1b0ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0FFCu;
        // 0x1b1000: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0ffc) {
            ctx->pc = 0x1B100Cu;
            goto label_1b100c;
        }
    }
    ctx->pc = 0x1B1004u;
label_1b1004:
    // 0x1b1004: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1b1004u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1b1008:
    // 0x1b1008: 0x920202f4  lbu         $v0, 0x2F4($s0)
    ctx->pc = 0x1b1008u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_1b100c:
    // 0x1b100c: 0x24e3dcc0  addiu       $v1, $a3, -0x2340
    ctx->pc = 0x1b100cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958272));
label_1b1010:
    // 0x1b1010: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1b1010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1b1014:
    // 0x1b1014: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b1014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b1018:
    // 0x1b1018: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1b101c:
    if (ctx->pc == 0x1B101Cu) {
        ctx->pc = 0x1B101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1018u;
        // 0x1b101c: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1020u;
        goto label_1b1020;
    }
    ctx->pc = 0x1B1018u;
    {
        const bool branch_taken_0x1b1018 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1B101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1018u;
        // 0x1b101c: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1018) {
            ctx->pc = 0x1B1034u;
            goto label_1b1034;
        }
    }
    ctx->pc = 0x1B1020u;
label_1b1020:
    // 0x1b1020: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1b1020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_1b1024:
    // 0x1b1024: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1b1024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1b1028:
    // 0x1b1028: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1b1028u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1b102c:
    // 0x1b102c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b1030:
    if (ctx->pc == 0x1B1030u) {
        ctx->pc = 0x1B1030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B102Cu;
        // 0x1b1030: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1034u;
        goto label_1b1034;
    }
    ctx->pc = 0x1B102Cu;
    {
        const bool branch_taken_0x1b102c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B102Cu;
        // 0x1b1030: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b102c) {
            ctx->pc = 0x1B1038u;
            goto label_1b1038;
        }
    }
    ctx->pc = 0x1B1034u;
label_1b1034:
    // 0x1b1034: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1b1034u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1b1038:
    // 0x1b1038: 0xc0f809  jalr        $a2
label_1b103c:
    if (ctx->pc == 0x1B103Cu) {
        ctx->pc = 0x1B103Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1038u;
        // 0x1b103c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1040u;
        goto label_1b1040;
    }
    ctx->pc = 0x1B1038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1B1040u);
        ctx->pc = 0x1B103Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1038u;
        // 0x1b103c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1038u, 0x1B1040u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B1040u;
label_1b1040:
    // 0x1b1040: 0xc06c64e  jal         func_1B1938
label_1b1044:
    if (ctx->pc == 0x1B1044u) {
        ctx->pc = 0x1B1044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1040u;
        // 0x1b1044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1048u;
        goto label_1b1048;
    }
    ctx->pc = 0x1B1040u;
    SET_GPR_U32(ctx, 31, 0x1B1048u);
    ctx->pc = 0x1B1044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1040u;
    // 0x1b1044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1938u, 0x1B1040u, 0x1B1048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1048u;
label_1b1048:
    // 0x1b1048: 0xc06c58c  jal         func_1B1630
label_1b104c:
    if (ctx->pc == 0x1B104Cu) {
        ctx->pc = 0x1B104Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1048u;
        // 0x1b104c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1050u;
        goto label_1b1050;
    }
    ctx->pc = 0x1B1048u;
    SET_GPR_U32(ctx, 31, 0x1B1050u);
    ctx->pc = 0x1B104Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1048u;
    // 0x1b104c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1630u, 0x1B1048u, 0x1B1050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1050u;
label_1b1050:
    // 0x1b1050: 0xc06ddb6  jal         func_1B76D8
label_1b1054:
    if (ctx->pc == 0x1B1054u) {
        ctx->pc = 0x1B1054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1050u;
        // 0x1b1054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1058u;
        goto label_1b1058;
    }
    ctx->pc = 0x1B1050u;
    SET_GPR_U32(ctx, 31, 0x1B1058u);
    ctx->pc = 0x1B1054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1050u;
    // 0x1b1054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x1B1050u, 0x1B1058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1058u;
label_1b1058:
    // 0x1b1058: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b1058u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b105c:
    // 0x1b105c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b105cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b1060:
    // 0x1b1060: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b1060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b1064:
    // 0x1b1064: 0x3e00008  jr          $ra
label_1b1068:
    if (ctx->pc == 0x1B1068u) {
        ctx->pc = 0x1B1068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1064u;
        // 0x1b1068: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B106Cu;
        goto label_1b106c;
    }
    ctx->pc = 0x1B1064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1064u;
        // 0x1b1068: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B106Cu;
label_1b106c:
    // 0x1b106c: 0x0  nop
    ctx->pc = 0x1b106cu;
    // NOP
    ctx->pc = 0x1b1070u;
}
