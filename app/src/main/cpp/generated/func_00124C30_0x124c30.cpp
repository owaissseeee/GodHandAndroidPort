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

// Function: func_00124C30
// Address: 0x124c30 - 0x124e58
void func_00124C30_0x124c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00124C30_0x124c30");
#endif

    switch (ctx->pc) {
        case 0x124c30u: goto label_124c30;
        case 0x124c34u: goto label_124c34;
        case 0x124c38u: goto label_124c38;
        case 0x124c3cu: goto label_124c3c;
        case 0x124c40u: goto label_124c40;
        case 0x124c44u: goto label_124c44;
        case 0x124c48u: goto label_124c48;
        case 0x124c4cu: goto label_124c4c;
        case 0x124c50u: goto label_124c50;
        case 0x124c54u: goto label_124c54;
        case 0x124c58u: goto label_124c58;
        case 0x124c5cu: goto label_124c5c;
        case 0x124c60u: goto label_124c60;
        case 0x124c64u: goto label_124c64;
        case 0x124c68u: goto label_124c68;
        case 0x124c6cu: goto label_124c6c;
        case 0x124c70u: goto label_124c70;
        case 0x124c74u: goto label_124c74;
        case 0x124c78u: goto label_124c78;
        case 0x124c7cu: goto label_124c7c;
        case 0x124c80u: goto label_124c80;
        case 0x124c84u: goto label_124c84;
        case 0x124c88u: goto label_124c88;
        case 0x124c8cu: goto label_124c8c;
        case 0x124c90u: goto label_124c90;
        case 0x124c94u: goto label_124c94;
        case 0x124c98u: goto label_124c98;
        case 0x124c9cu: goto label_124c9c;
        case 0x124ca0u: goto label_124ca0;
        case 0x124ca4u: goto label_124ca4;
        case 0x124ca8u: goto label_124ca8;
        case 0x124cacu: goto label_124cac;
        case 0x124cb0u: goto label_124cb0;
        case 0x124cb4u: goto label_124cb4;
        case 0x124cb8u: goto label_124cb8;
        case 0x124cbcu: goto label_124cbc;
        case 0x124cc0u: goto label_124cc0;
        case 0x124cc4u: goto label_124cc4;
        case 0x124cc8u: goto label_124cc8;
        case 0x124cccu: goto label_124ccc;
        case 0x124cd0u: goto label_124cd0;
        case 0x124cd4u: goto label_124cd4;
        case 0x124cd8u: goto label_124cd8;
        case 0x124cdcu: goto label_124cdc;
        case 0x124ce0u: goto label_124ce0;
        case 0x124ce4u: goto label_124ce4;
        case 0x124ce8u: goto label_124ce8;
        case 0x124cecu: goto label_124cec;
        case 0x124cf0u: goto label_124cf0;
        case 0x124cf4u: goto label_124cf4;
        case 0x124cf8u: goto label_124cf8;
        case 0x124cfcu: goto label_124cfc;
        case 0x124d00u: goto label_124d00;
        case 0x124d04u: goto label_124d04;
        case 0x124d08u: goto label_124d08;
        case 0x124d0cu: goto label_124d0c;
        case 0x124d10u: goto label_124d10;
        case 0x124d14u: goto label_124d14;
        case 0x124d18u: goto label_124d18;
        case 0x124d1cu: goto label_124d1c;
        case 0x124d20u: goto label_124d20;
        case 0x124d24u: goto label_124d24;
        case 0x124d28u: goto label_124d28;
        case 0x124d2cu: goto label_124d2c;
        case 0x124d30u: goto label_124d30;
        case 0x124d34u: goto label_124d34;
        case 0x124d38u: goto label_124d38;
        case 0x124d3cu: goto label_124d3c;
        case 0x124d40u: goto label_124d40;
        case 0x124d44u: goto label_124d44;
        case 0x124d48u: goto label_124d48;
        case 0x124d4cu: goto label_124d4c;
        case 0x124d50u: goto label_124d50;
        case 0x124d54u: goto label_124d54;
        case 0x124d58u: goto label_124d58;
        case 0x124d5cu: goto label_124d5c;
        case 0x124d60u: goto label_124d60;
        case 0x124d64u: goto label_124d64;
        case 0x124d68u: goto label_124d68;
        case 0x124d6cu: goto label_124d6c;
        case 0x124d70u: goto label_124d70;
        case 0x124d74u: goto label_124d74;
        case 0x124d78u: goto label_124d78;
        case 0x124d7cu: goto label_124d7c;
        case 0x124d80u: goto label_124d80;
        case 0x124d84u: goto label_124d84;
        case 0x124d88u: goto label_124d88;
        case 0x124d8cu: goto label_124d8c;
        case 0x124d90u: goto label_124d90;
        case 0x124d94u: goto label_124d94;
        case 0x124d98u: goto label_124d98;
        case 0x124d9cu: goto label_124d9c;
        case 0x124da0u: goto label_124da0;
        case 0x124da4u: goto label_124da4;
        case 0x124da8u: goto label_124da8;
        case 0x124dacu: goto label_124dac;
        case 0x124db0u: goto label_124db0;
        case 0x124db4u: goto label_124db4;
        case 0x124db8u: goto label_124db8;
        case 0x124dbcu: goto label_124dbc;
        case 0x124dc0u: goto label_124dc0;
        case 0x124dc4u: goto label_124dc4;
        case 0x124dc8u: goto label_124dc8;
        case 0x124dccu: goto label_124dcc;
        case 0x124dd0u: goto label_124dd0;
        case 0x124dd4u: goto label_124dd4;
        case 0x124dd8u: goto label_124dd8;
        case 0x124ddcu: goto label_124ddc;
        case 0x124de0u: goto label_124de0;
        case 0x124de4u: goto label_124de4;
        case 0x124de8u: goto label_124de8;
        case 0x124decu: goto label_124dec;
        case 0x124df0u: goto label_124df0;
        case 0x124df4u: goto label_124df4;
        case 0x124df8u: goto label_124df8;
        case 0x124dfcu: goto label_124dfc;
        case 0x124e00u: goto label_124e00;
        case 0x124e04u: goto label_124e04;
        case 0x124e08u: goto label_124e08;
        case 0x124e0cu: goto label_124e0c;
        case 0x124e10u: goto label_124e10;
        case 0x124e14u: goto label_124e14;
        case 0x124e18u: goto label_124e18;
        case 0x124e1cu: goto label_124e1c;
        case 0x124e20u: goto label_124e20;
        case 0x124e24u: goto label_124e24;
        case 0x124e28u: goto label_124e28;
        case 0x124e2cu: goto label_124e2c;
        case 0x124e30u: goto label_124e30;
        case 0x124e34u: goto label_124e34;
        case 0x124e38u: goto label_124e38;
        case 0x124e3cu: goto label_124e3c;
        case 0x124e40u: goto label_124e40;
        case 0x124e44u: goto label_124e44;
        case 0x124e48u: goto label_124e48;
        case 0x124e4cu: goto label_124e4c;
        case 0x124e50u: goto label_124e50;
        case 0x124e54u: goto label_124e54;
        default: break;
    }

    ctx->pc = 0x124c30u;

label_124c30:
    // 0x124c30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x124c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_124c34:
    // 0x124c34: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x124c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_124c38:
    // 0x124c38: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x124c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_124c3c:
    // 0x124c3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x124c3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_124c40:
    // 0x124c40: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x124c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_124c44:
    // 0x124c44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x124c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_124c48:
    // 0x124c48: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x124c48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_124c4c:
    // 0x124c4c: 0x82220648  lb          $v0, 0x648($s1)
    ctx->pc = 0x124c4cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1608)));
label_124c50:
    // 0x124c50: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
label_124c54:
    if (ctx->pc == 0x124C54u) {
        ctx->pc = 0x124C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124C50u;
        // 0x124c54: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124C58u;
        goto label_124c58;
    }
    ctx->pc = 0x124C50u;
    {
        const bool branch_taken_0x124c50 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x124C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124C50u;
        // 0x124c54: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124c50) {
            ctx->pc = 0x124C68u;
            goto label_124c68;
        }
    }
    ctx->pc = 0x124C58u;
label_124c58:
    // 0x124c58: 0xc049396  jal         func_124E58
label_124c5c:
    if (ctx->pc == 0x124C5Cu) {
        ctx->pc = 0x124C60u;
        goto label_124c60;
    }
    ctx->pc = 0x124C58u;
    SET_GPR_U32(ctx, 31, 0x124C60u);
    ctx->pc = 0x124E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E58u, 0x124C58u, 0x124C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124C60u;
label_124c60:
    // 0x124c60: 0x10000076  b           . + 4 + (0x76 << 2)
label_124c64:
    if (ctx->pc == 0x124C64u) {
        ctx->pc = 0x124C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124C60u;
        // 0x124c64: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124C68u;
        goto label_124c68;
    }
    ctx->pc = 0x124C60u;
    {
        const bool branch_taken_0x124c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124C60u;
        // 0x124c64: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124c60) {
            ctx->pc = 0x124E3Cu;
            goto label_124e3c;
        }
    }
    ctx->pc = 0x124C68u;
label_124c68:
    // 0x124c68: 0x8e300640  lw          $s0, 0x640($s1)
    ctx->pc = 0x124c68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
label_124c6c:
    // 0x124c6c: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_124c70:
    if (ctx->pc == 0x124C70u) {
        ctx->pc = 0x124C74u;
        goto label_124c74;
    }
    ctx->pc = 0x124C6Cu;
    {
        const bool branch_taken_0x124c6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x124c6c) {
            ctx->pc = 0x124D34u;
            goto label_124d34;
        }
    }
    ctx->pc = 0x124C74u;
label_124c74:
    // 0x124c74: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x124c74u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
label_124c78:
    // 0x124c78: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x124c78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
label_124c7c:
    // 0x124c7c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_124c80:
    if (ctx->pc == 0x124C80u) {
        ctx->pc = 0x124C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124C7Cu;
        // 0x124c80: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124C84u;
        goto label_124c84;
    }
    ctx->pc = 0x124C7Cu;
    {
        const bool branch_taken_0x124c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124C7Cu;
        // 0x124c80: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124c7c) {
            ctx->pc = 0x124C8Cu;
            goto label_124c8c;
        }
    }
    ctx->pc = 0x124C84u;
label_124c84:
    // 0x124c84: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x124c84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
label_124c88:
    // 0x124c88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x124c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124c8c:
    // 0x124c8c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x124c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_124c90:
    // 0x124c90: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_124c94:
    if (ctx->pc == 0x124C94u) {
        ctx->pc = 0x124C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124C90u;
        // 0x124c94: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124C98u;
        goto label_124c98;
    }
    ctx->pc = 0x124C90u;
    {
        const bool branch_taken_0x124c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124C90u;
        // 0x124c94: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124c90) {
            ctx->pc = 0x124CE0u;
            goto label_124ce0;
        }
    }
    ctx->pc = 0x124C98u;
label_124c98:
    // 0x124c98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x124c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_124c9c:
    // 0x124c9c: 0xc0a426e  jal         func_2909B8
label_124ca0:
    if (ctx->pc == 0x124CA0u) {
        ctx->pc = 0x124CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124C9Cu;
        // 0x124ca0: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124CA4u;
        goto label_124ca4;
    }
    ctx->pc = 0x124C9Cu;
    SET_GPR_U32(ctx, 31, 0x124CA4u);
    ctx->pc = 0x124CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124C9Cu;
    // 0x124ca0: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2909B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2909B8u, 0x124C9Cu, 0x124CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124CA4u;
label_124ca4:
    // 0x124ca4: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
label_124ca8:
    if (ctx->pc == 0x124CA8u) {
        ctx->pc = 0x124CACu;
        goto label_124cac;
    }
    ctx->pc = 0x124CA4u;
    {
        const bool branch_taken_0x124ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x124ca4) {
            ctx->pc = 0x124E04u;
            goto label_124e04;
        }
    }
    ctx->pc = 0x124CACu;
label_124cac:
    // 0x124cac: 0x92020617  lbu         $v0, 0x617($s0)
    ctx->pc = 0x124cacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1559)));
label_124cb0:
    // 0x124cb0: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
label_124cb4:
    if (ctx->pc == 0x124CB4u) {
        ctx->pc = 0x124CB8u;
        goto label_124cb8;
    }
    ctx->pc = 0x124CB0u;
    {
        const bool branch_taken_0x124cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x124cb0) {
            ctx->pc = 0x124E04u;
            goto label_124e04;
        }
    }
    ctx->pc = 0x124CB8u;
label_124cb8:
    // 0x124cb8: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x124cb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
label_124cbc:
    // 0x124cbc: 0x5c400009  bgtzl       $v0, . + 4 + (0x9 << 2)
label_124cc0:
    if (ctx->pc == 0x124CC0u) {
        ctx->pc = 0x124CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124CBCu;
        // 0x124cc0: 0x8e240640  lw          $a0, 0x640($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124CC4u;
        goto label_124cc4;
    }
    ctx->pc = 0x124CBCu;
    {
        const bool branch_taken_0x124cbc = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x124cbc) {
            ctx->pc = 0x124CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124CBCu;
            // 0x124cc0: 0x8e240640  lw          $a0, 0x640($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124CE4u;
            goto label_124ce4;
        }
    }
    ctx->pc = 0x124CC4u;
label_124cc4:
    // 0x124cc4: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x124cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_124cc8:
    // 0x124cc8: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x124cc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_124ccc:
    // 0x124ccc: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x124cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_124cd0:
    // 0x124cd0: 0x40f809  jalr        $v0
label_124cd4:
    if (ctx->pc == 0x124CD4u) {
        ctx->pc = 0x124CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124CD0u;
        // 0x124cd4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124CD8u;
        goto label_124cd8;
    }
    ctx->pc = 0x124CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x124CD8u);
        ctx->pc = 0x124CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124CD0u;
        // 0x124cd4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124CD0u, 0x124CD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x124CD8u;
label_124cd8:
    // 0x124cd8: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
label_124cdc:
    if (ctx->pc == 0x124CDCu) {
        ctx->pc = 0x124CE0u;
        goto label_124ce0;
    }
    ctx->pc = 0x124CD8u;
    {
        const bool branch_taken_0x124cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x124cd8) {
            ctx->pc = 0x124E04u;
            goto label_124e04;
        }
    }
    ctx->pc = 0x124CE0u;
label_124ce0:
    // 0x124ce0: 0x8e240640  lw          $a0, 0x640($s1)
    ctx->pc = 0x124ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
label_124ce4:
    // 0x124ce4: 0x948302fe  lhu         $v1, 0x2FE($a0)
    ctx->pc = 0x124ce4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 766)));
label_124ce8:
    // 0x124ce8: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x124ce8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
label_124cec:
    // 0x124cec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_124cf0:
    if (ctx->pc == 0x124CF0u) {
        ctx->pc = 0x124CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124CECu;
        // 0x124cf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124CF4u;
        goto label_124cf4;
    }
    ctx->pc = 0x124CECu;
    {
        const bool branch_taken_0x124cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124CECu;
        // 0x124cf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124cec) {
            ctx->pc = 0x124CFCu;
            goto label_124cfc;
        }
    }
    ctx->pc = 0x124CF4u;
label_124cf4:
    // 0x124cf4: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x124cf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
label_124cf8:
    // 0x124cf8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x124cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124cfc:
    // 0x124cfc: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x124cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_124d00:
    // 0x124d00: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_124d04:
    if (ctx->pc == 0x124D04u) {
        ctx->pc = 0x124D08u;
        goto label_124d08;
    }
    ctx->pc = 0x124D00u;
    {
        const bool branch_taken_0x124d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x124d00) {
            ctx->pc = 0x124D34u;
            goto label_124d34;
        }
    }
    ctx->pc = 0x124D08u;
label_124d08:
    // 0x124d08: 0xdc820250  ld          $v0, 0x250($a0)
    ctx->pc = 0x124d08u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 592)));
label_124d0c:
    // 0x124d0c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x124d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_124d10:
    // 0x124d10: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x124d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_124d14:
    // 0x124d14: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x124d14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_124d18:
    // 0x124d18: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x124d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_124d1c:
    // 0x124d1c: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
label_124d20:
    if (ctx->pc == 0x124D20u) {
        ctx->pc = 0x124D24u;
        goto label_124d24;
    }
    ctx->pc = 0x124D1Cu;
    {
        const bool branch_taken_0x124d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x124d1c) {
            ctx->pc = 0x124E04u;
            goto label_124e04;
        }
    }
    ctx->pc = 0x124D24u;
label_124d24:
    // 0x124d24: 0xc06de78  jal         func_1B79E0
label_124d28:
    if (ctx->pc == 0x124D28u) {
        ctx->pc = 0x124D2Cu;
        goto label_124d2c;
    }
    ctx->pc = 0x124D24u;
    SET_GPR_U32(ctx, 31, 0x124D2Cu);
    ctx->pc = 0x1B79E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B79E0u, 0x124D24u, 0x124D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124D2Cu;
label_124d2c:
    // 0x124d2c: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_124d30:
    if (ctx->pc == 0x124D30u) {
        ctx->pc = 0x124D34u;
        goto label_124d34;
    }
    ctx->pc = 0x124D2Cu;
    {
        const bool branch_taken_0x124d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x124d2c) {
            ctx->pc = 0x124E04u;
            goto label_124e04;
        }
    }
    ctx->pc = 0x124D34u;
label_124d34:
    // 0x124d34: 0x12400041  beqz        $s2, . + 4 + (0x41 << 2)
label_124d38:
    if (ctx->pc == 0x124D38u) {
        ctx->pc = 0x124D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D34u;
        // 0x124d38: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124D3Cu;
        goto label_124d3c;
    }
    ctx->pc = 0x124D34u;
    {
        const bool branch_taken_0x124d34 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x124D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D34u;
        // 0x124d38: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124d34) {
            ctx->pc = 0x124E3Cu;
            goto label_124e3c;
        }
    }
    ctx->pc = 0x124D3Cu;
label_124d3c:
    // 0x124d3c: 0x8e250640  lw          $a1, 0x640($s1)
    ctx->pc = 0x124d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
label_124d40:
    // 0x124d40: 0x50a0003f  beql        $a1, $zero, . + 4 + (0x3F << 2)
label_124d44:
    if (ctx->pc == 0x124D44u) {
        ctx->pc = 0x124D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D40u;
        // 0x124d44: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124D48u;
        goto label_124d48;
    }
    ctx->pc = 0x124D40u;
    {
        const bool branch_taken_0x124d40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x124d40) {
            ctx->pc = 0x124D44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124D40u;
            // 0x124d44: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124E40u;
            goto label_124e40;
        }
    }
    ctx->pc = 0x124D48u;
label_124d48:
    // 0x124d48: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x124d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_124d4c:
    // 0x124d4c: 0x8e3000f0  lw          $s0, 0xF0($s1)
    ctx->pc = 0x124d4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_124d50:
    // 0x124d50: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x124d50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_124d54:
    // 0x124d54: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x124d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_124d58:
    // 0x124d58: 0x40f809  jalr        $v0
label_124d5c:
    if (ctx->pc == 0x124D5Cu) {
        ctx->pc = 0x124D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D58u;
        // 0x124d5c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124D60u;
        goto label_124d60;
    }
    ctx->pc = 0x124D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x124D60u);
        ctx->pc = 0x124D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D58u;
        // 0x124d5c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124D58u, 0x124D60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x124D60u;
label_124d60:
    // 0x124d60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_124d64:
    // 0x124d64: 0xc07dfac  jal         func_1F7EB0
label_124d68:
    if (ctx->pc == 0x124D68u) {
        ctx->pc = 0x124D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D64u;
        // 0x124d68: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124D6Cu;
        goto label_124d6c;
    }
    ctx->pc = 0x124D64u;
    SET_GPR_U32(ctx, 31, 0x124D6Cu);
    ctx->pc = 0x124D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124D64u;
    // 0x124d68: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x124D64u, 0x124D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124D6Cu;
label_124d6c:
    // 0x124d6c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x124d6cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_124d70:
    // 0x124d70: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x124d70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_124d74:
    // 0x124d74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x124d74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_124d78:
    // 0x124d78: 0x0  nop
    ctx->pc = 0x124d78u;
    // NOP
label_124d7c:
    // 0x124d7c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x124d7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_124d80:
    // 0x124d80: 0x0  nop
    ctx->pc = 0x124d80u;
    // NOP
label_124d84:
    // 0x124d84: 0x45000023  bc1f        . + 4 + (0x23 << 2)
label_124d88:
    if (ctx->pc == 0x124D88u) {
        ctx->pc = 0x124D8Cu;
        goto label_124d8c;
    }
    ctx->pc = 0x124D84u;
    {
        const bool branch_taken_0x124d84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x124d84) {
            ctx->pc = 0x124E14u;
            goto label_124e14;
        }
    }
    ctx->pc = 0x124D8Cu;
label_124d8c:
    // 0x124d8c: 0x8e250640  lw          $a1, 0x640($s1)
    ctx->pc = 0x124d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
label_124d90:
    // 0x124d90: 0x8e3000f0  lw          $s0, 0xF0($s1)
    ctx->pc = 0x124d90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_124d94:
    // 0x124d94: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x124d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_124d98:
    // 0x124d98: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x124d98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_124d9c:
    // 0x124d9c: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x124d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_124da0:
    // 0x124da0: 0x40f809  jalr        $v0
label_124da4:
    if (ctx->pc == 0x124DA4u) {
        ctx->pc = 0x124DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124DA0u;
        // 0x124da4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124DA8u;
        goto label_124da8;
    }
    ctx->pc = 0x124DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x124DA8u);
        ctx->pc = 0x124DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124DA0u;
        // 0x124da4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124DA0u, 0x124DA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x124DA8u;
label_124da8:
    // 0x124da8: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x124da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_124dac:
    // 0x124dac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_124db0:
    // 0x124db0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x124db0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_124db4:
    // 0x124db4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x124db4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_124db8:
    // 0x124db8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x124db8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_124dbc:
    // 0x124dbc: 0xc0b680e  jal         func_2DA038
label_124dc0:
    if (ctx->pc == 0x124DC0u) {
        ctx->pc = 0x124DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124DBCu;
        // 0x124dc0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124DC4u;
        goto label_124dc4;
    }
    ctx->pc = 0x124DBCu;
    SET_GPR_U32(ctx, 31, 0x124DC4u);
    ctx->pc = 0x124DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124DBCu;
    // 0x124dc0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x124DBCu, 0x124DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124DC4u;
label_124dc4:
    // 0x124dc4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x124dc4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_124dc8:
    // 0x124dc8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x124dc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_124dcc:
    // 0x124dcc: 0x0  nop
    ctx->pc = 0x124dccu;
    // NOP
label_124dd0:
    // 0x124dd0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x124dd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_124dd4:
    // 0x124dd4: 0x0  nop
    ctx->pc = 0x124dd4u;
    // NOP
label_124dd8:
    // 0x124dd8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_124ddc:
    if (ctx->pc == 0x124DDCu) {
        ctx->pc = 0x124DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124DD8u;
        // 0x124ddc: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x124DE0u;
        goto label_124de0;
    }
    ctx->pc = 0x124DD8u;
    {
        const bool branch_taken_0x124dd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x124DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124DD8u;
        // 0x124ddc: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x124dd8) {
            ctx->pc = 0x124DE4u;
            goto label_124de4;
        }
    }
    ctx->pc = 0x124DE0u;
label_124de0:
    // 0x124de0: 0x46000887  neg.s       $f2, $f1
    ctx->pc = 0x124de0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[1]);
label_124de4:
    // 0x124de4: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x124de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_124de8:
    // 0x124de8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x124de8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_124dec:
    // 0x124dec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x124decu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_124df0:
    // 0x124df0: 0x0  nop
    ctx->pc = 0x124df0u;
    // NOP
label_124df4:
    // 0x124df4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x124df4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_124df8:
    // 0x124df8: 0x0  nop
    ctx->pc = 0x124df8u;
    // NOP
label_124dfc:
    // 0x124dfc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_124e00:
    if (ctx->pc == 0x124E00u) {
        ctx->pc = 0x124E04u;
        goto label_124e04;
    }
    ctx->pc = 0x124DFCu;
    {
        const bool branch_taken_0x124dfc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x124dfc) {
            ctx->pc = 0x124E14u;
            goto label_124e14;
        }
    }
    ctx->pc = 0x124E04u;
label_124e04:
    // 0x124e04: 0xc049396  jal         func_124E58
label_124e08:
    if (ctx->pc == 0x124E08u) {
        ctx->pc = 0x124E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E04u;
        // 0x124e08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124E0Cu;
        goto label_124e0c;
    }
    ctx->pc = 0x124E04u;
    SET_GPR_U32(ctx, 31, 0x124E0Cu);
    ctx->pc = 0x124E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124E04u;
    // 0x124e08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E58u, 0x124E04u, 0x124E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124E0Cu;
label_124e0c:
    // 0x124e0c: 0x1000000b  b           . + 4 + (0xB << 2)
label_124e10:
    if (ctx->pc == 0x124E10u) {
        ctx->pc = 0x124E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E0Cu;
        // 0x124e10: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124E14u;
        goto label_124e14;
    }
    ctx->pc = 0x124E0Cu;
    {
        const bool branch_taken_0x124e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E0Cu;
        // 0x124e10: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124e0c) {
            ctx->pc = 0x124E3Cu;
            goto label_124e3c;
        }
    }
    ctx->pc = 0x124E14u;
label_124e14:
    // 0x124e14: 0x3c014210  lui         $at, 0x4210
    ctx->pc = 0x124e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16912 << 16));
label_124e18:
    // 0x124e18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x124e18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_124e1c:
    // 0x124e1c: 0x0  nop
    ctx->pc = 0x124e1cu;
    // NOP
label_124e20:
    // 0x124e20: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x124e20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_124e24:
    // 0x124e24: 0x0  nop
    ctx->pc = 0x124e24u;
    // NOP
label_124e28:
    // 0x124e28: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_124e2c:
    if (ctx->pc == 0x124E2Cu) {
        ctx->pc = 0x124E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E28u;
        // 0x124e2c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124E30u;
        goto label_124e30;
    }
    ctx->pc = 0x124E28u;
    {
        const bool branch_taken_0x124e28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x124E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E28u;
        // 0x124e2c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124e28) {
            ctx->pc = 0x124E3Cu;
            goto label_124e3c;
        }
    }
    ctx->pc = 0x124E30u;
label_124e30:
    // 0x124e30: 0xc049396  jal         func_124E58
label_124e34:
    if (ctx->pc == 0x124E34u) {
        ctx->pc = 0x124E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E30u;
        // 0x124e34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124E38u;
        goto label_124e38;
    }
    ctx->pc = 0x124E30u;
    SET_GPR_U32(ctx, 31, 0x124E38u);
    ctx->pc = 0x124E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124E30u;
    // 0x124e34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E58u, 0x124E30u, 0x124E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124E38u;
label_124e38:
    // 0x124e38: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x124e38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_124e3c:
    // 0x124e3c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x124e3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_124e40:
    // 0x124e40: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x124e40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_124e44:
    // 0x124e44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x124e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_124e48:
    // 0x124e48: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x124e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_124e4c:
    // 0x124e4c: 0x3e00008  jr          $ra
label_124e50:
    if (ctx->pc == 0x124E50u) {
        ctx->pc = 0x124E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E4Cu;
        // 0x124e50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124E54u;
        goto label_124e54;
    }
    ctx->pc = 0x124E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E4Cu;
        // 0x124e50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124E4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124E54u;
label_124e54:
    // 0x124e54: 0x0  nop
    ctx->pc = 0x124e54u;
    // NOP
    ctx->pc = 0x124e58u;
}
