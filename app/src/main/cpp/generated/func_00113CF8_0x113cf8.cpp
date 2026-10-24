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

// Function: func_00113CF8
// Address: 0x113cf8 - 0x113f68
void func_00113CF8_0x113cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00113CF8_0x113cf8");
#endif

    switch (ctx->pc) {
        case 0x113d40u: goto label_113d40;
        case 0x113d48u: goto label_113d48;
        case 0x113d54u: goto label_113d54;
        case 0x113da4u: goto label_113da4;
        case 0x113db4u: goto label_113db4;
        case 0x113dbcu: goto label_113dbc;
        case 0x113df4u: goto label_113df4;
        case 0x113e10u: goto label_113e10;
        case 0x113e40u: goto label_113e40;
        case 0x113e4cu: goto label_113e4c;
        case 0x113e60u: goto label_113e60;
        case 0x113e70u: goto label_113e70;
        case 0x113ea4u: goto label_113ea4;
        case 0x113ed8u: goto label_113ed8;
        case 0x113ee0u: goto label_113ee0;
        case 0x113ef4u: goto label_113ef4;
        case 0x113f18u: goto label_113f18;
        case 0x113f24u: goto label_113f24;
        case 0x113f30u: goto label_113f30;
        case 0x113f44u: goto label_113f44;
        default: break;
    }

    ctx->pc = 0x113cf8u;

    // 0x113cf8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x113cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x113cfc: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x113cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x113d00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x113d00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x113d04: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x113d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x113d08: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x113d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x113d0c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x113d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x113d10: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x113d10u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x113d14: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x113d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x113d18: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x113d18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113d1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x113d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x113d20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x113d20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113d24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x113d28: 0x261064f0  addiu       $s0, $s0, 0x64F0
    ctx->pc = 0x113d28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
    // 0x113d2c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x113d2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x113d30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x113d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113d34: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x113d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x113d38: 0xc0a480c  jal         func_292030
    ctx->pc = 0x113D38u;
    SET_GPR_U32(ctx, 31, 0x113D40u);
    ctx->pc = 0x113D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113D38u;
    // 0x113d3c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292030u, 0x113D38u, 0x113D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113D40u;
label_113d40:
    // 0x113d40: 0xc0a4c3c  jal         func_2930F0
    ctx->pc = 0x113D40u;
    SET_GPR_U32(ctx, 31, 0x113D48u);
    ctx->pc = 0x113D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113D40u;
    // 0x113d44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x113D40u, 0x113D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113D48u;
label_113d48:
    // 0x113d48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x113d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113d4c: 0xc0a4bbc  jal         func_292EF0
    ctx->pc = 0x113D4Cu;
    SET_GPR_U32(ctx, 31, 0x113D54u);
    ctx->pc = 0x113D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113D4Cu;
    // 0x113d50: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292EF0u, 0x113D4Cu, 0x113D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113D54u;
label_113d54:
    // 0x113d54: 0x8e2215f4  lw          $v0, 0x15F4($s1)
    ctx->pc = 0x113d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
    // 0x113d58: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x113d58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x113d5c: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x113d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x113d60: 0x10720029  beq         $v1, $s2, . + 4 + (0x29 << 2)
    ctx->pc = 0x113D60u;
    {
        const bool branch_taken_0x113d60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x113D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113D60u;
        // 0x113d64: 0xae2215f4  sw          $v0, 0x15F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113d60) {
            ctx->pc = 0x113E08u;
            goto label_113e08;
        }
    }
    ctx->pc = 0x113D68u;
    // 0x113d68: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x113d68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x113d6c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x113D6Cu;
    {
        const bool branch_taken_0x113d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x113d6c) {
            ctx->pc = 0x113D70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113D6Cu;
            // 0x113d70: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113D84u;
            goto label_113d84;
        }
    }
    ctx->pc = 0x113D74u;
    // 0x113d74: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x113D74u;
    {
        const bool branch_taken_0x113d74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x113D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113D74u;
        // 0x113d78: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113d74) {
            ctx->pc = 0x113D9Cu;
            goto label_113d9c;
        }
    }
    ctx->pc = 0x113D7Cu;
    // 0x113d7c: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x113D7Cu;
    {
        const bool branch_taken_0x113d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113D7Cu;
        // 0x113d80: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113d7c) {
            ctx->pc = 0x113F4Cu;
            goto label_113f4c;
        }
    }
    ctx->pc = 0x113D84u;
label_113d84:
    // 0x113d84: 0x10620038  beq         $v1, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x113D84u;
    {
        const bool branch_taken_0x113d84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x113D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113D84u;
        // 0x113d88: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113d84) {
            ctx->pc = 0x113E68u;
            goto label_113e68;
        }
    }
    ctx->pc = 0x113D8Cu;
    // 0x113d8c: 0x10620050  beq         $v1, $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x113D8Cu;
    {
        const bool branch_taken_0x113d8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x113D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113D8Cu;
        // 0x113d90: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113d8c) {
            ctx->pc = 0x113ED0u;
            goto label_113ed0;
        }
    }
    ctx->pc = 0x113D94u;
    // 0x113d94: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x113D94u;
    {
        const bool branch_taken_0x113d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113D94u;
        // 0x113d98: 0x7bb10030  lq          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113d94) {
            ctx->pc = 0x113F4Cu;
            goto label_113f4c;
        }
    }
    ctx->pc = 0x113D9Cu;
label_113d9c:
    // 0x113d9c: 0xc04a6e8  jal         func_129BA0
    ctx->pc = 0x113D9Cu;
    SET_GPR_U32(ctx, 31, 0x113DA4u);
    ctx->pc = 0x113DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113D9Cu;
    // 0x113da0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129BA0u, 0x113D9Cu, 0x113DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113DA4u;
label_113da4:
    // 0x113da4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x113da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113da8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x113da8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113dac: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x113DACu;
    SET_GPR_U32(ctx, 31, 0x113DB4u);
    ctx->pc = 0x113DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113DACu;
    // 0x113db0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x113DACu, 0x113DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113DB4u;
label_113db4:
    // 0x113db4: 0xc049396  jal         func_124E58
    ctx->pc = 0x113DB4u;
    SET_GPR_U32(ctx, 31, 0x113DBCu);
    ctx->pc = 0x113DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113DB4u;
    // 0x113db8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E58u, 0x113DB4u, 0x113DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113DBCu;
label_113dbc:
    // 0x113dbc: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x113dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x113dc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x113dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113dc4: 0xa62005e0  sh          $zero, 0x5E0($s1)
    ctx->pc = 0x113dc4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x113dc8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x113dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x113dcc: 0xa62005e2  sh          $zero, 0x5E2($s1)
    ctx->pc = 0x113dccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 0));
    // 0x113dd0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x113dd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113dd4: 0x3c0141a8  lui         $at, 0x41A8
    ctx->pc = 0x113dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16808 << 16));
    // 0x113dd8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x113dd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x113ddc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x113ddcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113de0: 0x8c450220  lw          $a1, 0x220($v0)
    ctx->pc = 0x113de0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 544)));
    // 0x113de4: 0x8c460224  lw          $a2, 0x224($v0)
    ctx->pc = 0x113de4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 548)));
    // 0x113de8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x113de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x113dec: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x113DECu;
    SET_GPR_U32(ctx, 31, 0x113DF4u);
    ctx->pc = 0x113DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113DECu;
    // 0x113df0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x113DECu, 0x113DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113DF4u;
label_113df4:
    // 0x113df4: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x113df4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x113df8: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x113df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x113dfc: 0xae2315b0  sw          $v1, 0x15B0($s1)
    ctx->pc = 0x113dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 3));
    // 0x113e00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x113e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x113e04: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x113e04u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_113e08:
    // 0x113e08: 0xc055f06  jal         func_157C18
    ctx->pc = 0x113E08u;
    SET_GPR_U32(ctx, 31, 0x113E10u);
    ctx->pc = 0x113E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113E08u;
    // 0x113e0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x113E08u, 0x113E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113E10u;
label_113e10:
    // 0x113e10: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x113e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
    // 0x113e14: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x113E14u;
    {
        const bool branch_taken_0x113e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E14u;
        // 0x113e18: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e14) {
            ctx->pc = 0x113E24u;
            goto label_113e24;
        }
    }
    ctx->pc = 0x113E1Cu;
    // 0x113e1c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x113E1Cu;
    {
        const bool branch_taken_0x113e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E1Cu;
        // 0x113e20: 0xae2215b0  sw          $v0, 0x15B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e1c) {
            ctx->pc = 0x113E2Cu;
            goto label_113e2c;
        }
    }
    ctx->pc = 0x113E24u;
label_113e24:
    // 0x113e24: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x113e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x113e28: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x113e28u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_113e2c:
    // 0x113e2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x113e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x113e30: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x113e30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x113e34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x113e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113e38: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x113E38u;
    SET_GPR_U32(ctx, 31, 0x113E40u);
    ctx->pc = 0x113E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113E38u;
    // 0x113e3c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x113E38u, 0x113E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113E40u;
label_113e40:
    // 0x113e40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x113e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113e44: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x113E44u;
    SET_GPR_U32(ctx, 31, 0x113E4Cu);
    ctx->pc = 0x113E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113E44u;
    // 0x113e48: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x113E44u, 0x113E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113E4Cu;
label_113e4c:
    // 0x113e4c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x113e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x113e50: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x113e50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x113e54: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x113e54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x113e58: 0xc0a4bce  jal         func_292F38
    ctx->pc = 0x113E58u;
    SET_GPR_U32(ctx, 31, 0x113E60u);
    ctx->pc = 0x113E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113E58u;
    // 0x113e5c: 0x266464f0  addiu       $a0, $s3, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F38u, 0x113E58u, 0x113E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113E60u;
label_113e60:
    // 0x113e60: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x113E60u;
    {
        const bool branch_taken_0x113e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E60u;
        // 0x113e64: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e60) {
            ctx->pc = 0x113F48u;
            goto label_113f48;
        }
    }
    ctx->pc = 0x113E68u;
label_113e68:
    // 0x113e68: 0xc049396  jal         func_124E58
    ctx->pc = 0x113E68u;
    SET_GPR_U32(ctx, 31, 0x113E70u);
    ctx->pc = 0x113E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113E68u;
    // 0x113e6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E58u, 0x113E68u, 0x113E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113E70u;
label_113e70:
    // 0x113e70: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x113e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x113e74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x113e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113e78: 0xa62005e0  sh          $zero, 0x5E0($s1)
    ctx->pc = 0x113e78u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x113e7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x113e7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113e80: 0xa62005e2  sh          $zero, 0x5E2($s1)
    ctx->pc = 0x113e80u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 0));
    // 0x113e84: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x113e84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113e88: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x113e88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x113e8c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x113e8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113e90: 0x8c450380  lw          $a1, 0x380($v0)
    ctx->pc = 0x113e90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x113e94: 0x8c460384  lw          $a2, 0x384($v0)
    ctx->pc = 0x113e94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 900)));
    // 0x113e98: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x113e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x113e9c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x113E9Cu;
    SET_GPR_U32(ctx, 31, 0x113EA4u);
    ctx->pc = 0x113EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113E9Cu;
    // 0x113ea0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x113E9Cu, 0x113EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113EA4u;
label_113ea4:
    // 0x113ea4: 0x9622054a  lhu         $v0, 0x54A($s1)
    ctx->pc = 0x113ea4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x113ea8: 0x2442fff6  addiu       $v0, $v0, -0xA
    ctx->pc = 0x113ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
    // 0x113eac: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x113eacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x113eb0: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x113eb0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x113eb4: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x113eb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x113eb8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x113EB8u;
    {
        const bool branch_taken_0x113eb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x113EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113EB8u;
        // 0x113ebc: 0xa622054a  sh          $v0, 0x54A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113eb8) {
            ctx->pc = 0x113EC4u;
            goto label_113ec4;
        }
    }
    ctx->pc = 0x113EC0u;
    // 0x113ec0: 0xa632054a  sh          $s2, 0x54A($s1)
    ctx->pc = 0x113ec0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 18));
label_113ec4:
    // 0x113ec4: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x113ec4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x113ec8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x113ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x113ecc: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x113eccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_113ed0:
    // 0x113ed0: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x113ED0u;
    SET_GPR_U32(ctx, 31, 0x113ED8u);
    ctx->pc = 0x113ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113ED0u;
    // 0x113ed4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x113ED0u, 0x113ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113ED8u;
label_113ed8:
    // 0x113ed8: 0xc055f06  jal         func_157C18
    ctx->pc = 0x113ED8u;
    SET_GPR_U32(ctx, 31, 0x113EE0u);
    ctx->pc = 0x113EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113ED8u;
    // 0x113edc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x113ED8u, 0x113EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113EE0u;
label_113ee0:
    // 0x113ee0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x113EE0u;
    {
        const bool branch_taken_0x113ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113EE0u;
        // 0x113ee4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113ee0) {
            ctx->pc = 0x113F04u;
            goto label_113f04;
        }
    }
    ctx->pc = 0x113EE8u;
    // 0x113ee8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x113ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113eec: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x113EECu;
    SET_GPR_U32(ctx, 31, 0x113EF4u);
    ctx->pc = 0x113EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113EECu;
    // 0x113ef0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x113EECu, 0x113EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113EF4u;
label_113ef4:
    // 0x113ef4: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x113ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x113ef8: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x113ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x113efc: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x113efcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x113f00: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x113f00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_113f04:
    // 0x113f04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x113f04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x113f08: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x113f08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x113f0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x113f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113f10: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x113F10u;
    SET_GPR_U32(ctx, 31, 0x113F18u);
    ctx->pc = 0x113F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113F10u;
    // 0x113f14: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x113F10u, 0x113F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113F18u;
label_113f18:
    // 0x113f18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x113f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113f1c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x113F1Cu;
    SET_GPR_U32(ctx, 31, 0x113F24u);
    ctx->pc = 0x113F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113F1Cu;
    // 0x113f20: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x113F1Cu, 0x113F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113F24u;
label_113f24:
    // 0x113f24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x113f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113f28: 0xc048e4e  jal         func_123938
    ctx->pc = 0x113F28u;
    SET_GPR_U32(ctx, 31, 0x113F30u);
    ctx->pc = 0x113F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113F28u;
    // 0x113f2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x113F28u, 0x113F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113F30u;
label_113f30:
    // 0x113f30: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x113F30u;
    {
        const bool branch_taken_0x113f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113F30u;
        // 0x113f34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113f30) {
            ctx->pc = 0x113F44u;
            goto label_113f44;
        }
    }
    ctx->pc = 0x113F38u;
    // 0x113f38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x113f38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113f3c: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x113F3Cu;
    SET_GPR_U32(ctx, 31, 0x113F44u);
    ctx->pc = 0x113F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113F3Cu;
    // 0x113f40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x113F3Cu, 0x113F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113F44u;
label_113f44:
    // 0x113f44: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x113f44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_113f48:
    // 0x113f48: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x113f48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_113f4c:
    // 0x113f4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x113f4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113f50: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x113f50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113f54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113f58: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x113f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x113f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x113F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113F5Cu;
        // 0x113f60: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113F64u;
    // 0x113f64: 0x0  nop
    ctx->pc = 0x113f64u;
    // NOP
    ctx->pc = 0x113f68u;
}
