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

// Function: func_00305C20
// Address: 0x305c20 - 0x305e88
void func_00305C20_0x305c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00305C20_0x305c20");
#endif

    switch (ctx->pc) {
        case 0x305c20u: goto label_305c20;
        case 0x305c24u: goto label_305c24;
        case 0x305c28u: goto label_305c28;
        case 0x305c2cu: goto label_305c2c;
        case 0x305c30u: goto label_305c30;
        case 0x305c34u: goto label_305c34;
        case 0x305c38u: goto label_305c38;
        case 0x305c3cu: goto label_305c3c;
        case 0x305c40u: goto label_305c40;
        case 0x305c44u: goto label_305c44;
        case 0x305c48u: goto label_305c48;
        case 0x305c4cu: goto label_305c4c;
        case 0x305c50u: goto label_305c50;
        case 0x305c54u: goto label_305c54;
        case 0x305c58u: goto label_305c58;
        case 0x305c5cu: goto label_305c5c;
        case 0x305c60u: goto label_305c60;
        case 0x305c64u: goto label_305c64;
        case 0x305c68u: goto label_305c68;
        case 0x305c6cu: goto label_305c6c;
        case 0x305c70u: goto label_305c70;
        case 0x305c74u: goto label_305c74;
        case 0x305c78u: goto label_305c78;
        case 0x305c7cu: goto label_305c7c;
        case 0x305c80u: goto label_305c80;
        case 0x305c84u: goto label_305c84;
        case 0x305c88u: goto label_305c88;
        case 0x305c8cu: goto label_305c8c;
        case 0x305c90u: goto label_305c90;
        case 0x305c94u: goto label_305c94;
        case 0x305c98u: goto label_305c98;
        case 0x305c9cu: goto label_305c9c;
        case 0x305ca0u: goto label_305ca0;
        case 0x305ca4u: goto label_305ca4;
        case 0x305ca8u: goto label_305ca8;
        case 0x305cacu: goto label_305cac;
        case 0x305cb0u: goto label_305cb0;
        case 0x305cb4u: goto label_305cb4;
        case 0x305cb8u: goto label_305cb8;
        case 0x305cbcu: goto label_305cbc;
        case 0x305cc0u: goto label_305cc0;
        case 0x305cc4u: goto label_305cc4;
        case 0x305cc8u: goto label_305cc8;
        case 0x305cccu: goto label_305ccc;
        case 0x305cd0u: goto label_305cd0;
        case 0x305cd4u: goto label_305cd4;
        case 0x305cd8u: goto label_305cd8;
        case 0x305cdcu: goto label_305cdc;
        case 0x305ce0u: goto label_305ce0;
        case 0x305ce4u: goto label_305ce4;
        case 0x305ce8u: goto label_305ce8;
        case 0x305cecu: goto label_305cec;
        case 0x305cf0u: goto label_305cf0;
        case 0x305cf4u: goto label_305cf4;
        case 0x305cf8u: goto label_305cf8;
        case 0x305cfcu: goto label_305cfc;
        case 0x305d00u: goto label_305d00;
        case 0x305d04u: goto label_305d04;
        case 0x305d08u: goto label_305d08;
        case 0x305d0cu: goto label_305d0c;
        case 0x305d10u: goto label_305d10;
        case 0x305d14u: goto label_305d14;
        case 0x305d18u: goto label_305d18;
        case 0x305d1cu: goto label_305d1c;
        case 0x305d20u: goto label_305d20;
        case 0x305d24u: goto label_305d24;
        case 0x305d28u: goto label_305d28;
        case 0x305d2cu: goto label_305d2c;
        case 0x305d30u: goto label_305d30;
        case 0x305d34u: goto label_305d34;
        case 0x305d38u: goto label_305d38;
        case 0x305d3cu: goto label_305d3c;
        case 0x305d40u: goto label_305d40;
        case 0x305d44u: goto label_305d44;
        case 0x305d48u: goto label_305d48;
        case 0x305d4cu: goto label_305d4c;
        case 0x305d50u: goto label_305d50;
        case 0x305d54u: goto label_305d54;
        case 0x305d58u: goto label_305d58;
        case 0x305d5cu: goto label_305d5c;
        case 0x305d60u: goto label_305d60;
        case 0x305d64u: goto label_305d64;
        case 0x305d68u: goto label_305d68;
        case 0x305d6cu: goto label_305d6c;
        case 0x305d70u: goto label_305d70;
        case 0x305d74u: goto label_305d74;
        case 0x305d78u: goto label_305d78;
        case 0x305d7cu: goto label_305d7c;
        case 0x305d80u: goto label_305d80;
        case 0x305d84u: goto label_305d84;
        case 0x305d88u: goto label_305d88;
        case 0x305d8cu: goto label_305d8c;
        case 0x305d90u: goto label_305d90;
        case 0x305d94u: goto label_305d94;
        case 0x305d98u: goto label_305d98;
        case 0x305d9cu: goto label_305d9c;
        case 0x305da0u: goto label_305da0;
        case 0x305da4u: goto label_305da4;
        case 0x305da8u: goto label_305da8;
        case 0x305dacu: goto label_305dac;
        case 0x305db0u: goto label_305db0;
        case 0x305db4u: goto label_305db4;
        case 0x305db8u: goto label_305db8;
        case 0x305dbcu: goto label_305dbc;
        case 0x305dc0u: goto label_305dc0;
        case 0x305dc4u: goto label_305dc4;
        case 0x305dc8u: goto label_305dc8;
        case 0x305dccu: goto label_305dcc;
        case 0x305dd0u: goto label_305dd0;
        case 0x305dd4u: goto label_305dd4;
        case 0x305dd8u: goto label_305dd8;
        case 0x305ddcu: goto label_305ddc;
        case 0x305de0u: goto label_305de0;
        case 0x305de4u: goto label_305de4;
        case 0x305de8u: goto label_305de8;
        case 0x305decu: goto label_305dec;
        case 0x305df0u: goto label_305df0;
        case 0x305df4u: goto label_305df4;
        case 0x305df8u: goto label_305df8;
        case 0x305dfcu: goto label_305dfc;
        case 0x305e00u: goto label_305e00;
        case 0x305e04u: goto label_305e04;
        case 0x305e08u: goto label_305e08;
        case 0x305e0cu: goto label_305e0c;
        case 0x305e10u: goto label_305e10;
        case 0x305e14u: goto label_305e14;
        case 0x305e18u: goto label_305e18;
        case 0x305e1cu: goto label_305e1c;
        case 0x305e20u: goto label_305e20;
        case 0x305e24u: goto label_305e24;
        case 0x305e28u: goto label_305e28;
        case 0x305e2cu: goto label_305e2c;
        case 0x305e30u: goto label_305e30;
        case 0x305e34u: goto label_305e34;
        case 0x305e38u: goto label_305e38;
        case 0x305e3cu: goto label_305e3c;
        case 0x305e40u: goto label_305e40;
        case 0x305e44u: goto label_305e44;
        case 0x305e48u: goto label_305e48;
        case 0x305e4cu: goto label_305e4c;
        case 0x305e50u: goto label_305e50;
        case 0x305e54u: goto label_305e54;
        case 0x305e58u: goto label_305e58;
        case 0x305e5cu: goto label_305e5c;
        case 0x305e60u: goto label_305e60;
        case 0x305e64u: goto label_305e64;
        case 0x305e68u: goto label_305e68;
        case 0x305e6cu: goto label_305e6c;
        case 0x305e70u: goto label_305e70;
        case 0x305e74u: goto label_305e74;
        case 0x305e78u: goto label_305e78;
        case 0x305e7cu: goto label_305e7c;
        case 0x305e80u: goto label_305e80;
        case 0x305e84u: goto label_305e84;
        default: break;
    }

    ctx->pc = 0x305c20u;

label_305c20:
    // 0x305c20: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x305c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_305c24:
    // 0x305c24: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x305c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_305c28:
    // 0x305c28: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x305c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_305c2c:
    // 0x305c2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x305c2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_305c30:
    // 0x305c30: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x305c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_305c34:
    // 0x305c34: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x305c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_305c38:
    // 0x305c38: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x305c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_305c3c:
    // 0x305c3c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x305c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_305c40:
    // 0x305c40: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x305c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_305c44:
    // 0x305c44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x305c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_305c48:
    // 0x305c48: 0xae000418  sw          $zero, 0x418($s0)
    ctx->pc = 0x305c48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1048), GPR_U32(ctx, 0));
label_305c4c:
    // 0x305c4c: 0x8e020404  lw          $v0, 0x404($s0)
    ctx->pc = 0x305c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1028)));
label_305c50:
    // 0x305c50: 0x5040004b  beql        $v0, $zero, . + 4 + (0x4B << 2)
label_305c54:
    if (ctx->pc == 0x305C54u) {
        ctx->pc = 0x305C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305C50u;
        // 0x305c54: 0x8e030400  lw          $v1, 0x400($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1024)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305C58u;
        goto label_305c58;
    }
    ctx->pc = 0x305C50u;
    {
        const bool branch_taken_0x305c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x305c50) {
            ctx->pc = 0x305C54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305C50u;
            // 0x305c54: 0x8e030400  lw          $v1, 0x400($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1024)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305D80u;
            goto label_305d80;
        }
    }
    ctx->pc = 0x305C58u;
label_305c58:
    // 0x305c58: 0xae000410  sw          $zero, 0x410($s0)
    ctx->pc = 0x305c58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1040), GPR_U32(ctx, 0));
label_305c5c:
    // 0x305c5c: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x305c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_305c60:
    // 0x305c60: 0xc0b6dac  jal         func_2DB6B0
label_305c64:
    if (ctx->pc == 0x305C64u) {
        ctx->pc = 0x305C68u;
        goto label_305c68;
    }
    ctx->pc = 0x305C60u;
    SET_GPR_U32(ctx, 31, 0x305C68u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x305C60u, 0x305C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305C68u;
label_305c68:
    // 0x305c68: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x305c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_305c6c:
    // 0x305c6c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x305c6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_305c70:
    // 0x305c70: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x305c70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_305c74:
    // 0x305c74: 0xa0f809  jalr        $a1
label_305c78:
    if (ctx->pc == 0x305C78u) {
        ctx->pc = 0x305C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305C74u;
        // 0x305c78: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305C7Cu;
        goto label_305c7c;
    }
    ctx->pc = 0x305C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x305C7Cu);
        ctx->pc = 0x305C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305C74u;
        // 0x305c78: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305C74u, 0x305C7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x305C7Cu;
label_305c7c:
    // 0x305c7c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x305c7cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_305c80:
    // 0x305c80: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x305c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_305c84:
    // 0x305c84: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x305c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_305c88:
    // 0x305c88: 0x13a20006  beq         $sp, $v0, . + 4 + (0x6 << 2)
label_305c8c:
    if (ctx->pc == 0x305C8Cu) {
        ctx->pc = 0x305C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305C88u;
        // 0x305c8c: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x305C90u;
        goto label_305c90;
    }
    ctx->pc = 0x305C88u;
    {
        const bool branch_taken_0x305c88 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        ctx->pc = 0x305C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305C88u;
        // 0x305c8c: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x305c88) {
            ctx->pc = 0x305CA4u;
            goto label_305ca4;
        }
    }
    ctx->pc = 0x305C90u;
label_305c90:
    // 0x305c90: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x305c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_305c94:
    // 0x305c94: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x305c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_305c98:
    // 0x305c98: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x305c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_305c9c:
    // 0x305c9c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x305c9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_305ca0:
    // 0x305ca0: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x305ca0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_305ca4:
    // 0x305ca4: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x305ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_305ca8:
    // 0x305ca8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x305ca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_305cac:
    // 0x305cac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x305cacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_305cb0:
    // 0x305cb0: 0x8e040404  lw          $a0, 0x404($s0)
    ctx->pc = 0x305cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1028)));
label_305cb4:
    // 0x305cb4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x305cb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_305cb8:
    // 0x305cb8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x305cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_305cbc:
    // 0x305cbc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x305cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_305cc0:
    // 0x305cc0: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_305cc4:
    if (ctx->pc == 0x305CC4u) {
        ctx->pc = 0x305CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305CC0u;
        // 0x305cc4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305CC8u;
        goto label_305cc8;
    }
    ctx->pc = 0x305CC0u;
    {
        const bool branch_taken_0x305cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x305CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305CC0u;
        // 0x305cc4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305cc0) {
            ctx->pc = 0x305D7Cu;
            goto label_305d7c;
        }
    }
    ctx->pc = 0x305CC8u;
label_305cc8:
    // 0x305cc8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x305cc8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_305ccc:
    // 0x305ccc: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x305cccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_305cd0:
    // 0x305cd0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x305cd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305cd4:
    // 0x305cd4: 0x0  nop
    ctx->pc = 0x305cd4u;
    // NOP
label_305cd8:
    // 0x305cd8: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x305cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_305cdc:
    // 0x305cdc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x305cdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_305ce0:
    // 0x305ce0: 0xc07e0fa  jal         func_1F83E8
label_305ce4:
    if (ctx->pc == 0x305CE4u) {
        ctx->pc = 0x305CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305CE0u;
        // 0x305ce4: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305CE8u;
        goto label_305ce8;
    }
    ctx->pc = 0x305CE0u;
    SET_GPR_U32(ctx, 31, 0x305CE8u);
    ctx->pc = 0x305CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305CE0u;
    // 0x305ce4: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F83E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F83E8u, 0x305CE0u, 0x305CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305CE8u;
label_305ce8:
    // 0x305ce8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x305ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_305cec:
    // 0x305cec: 0x8e020404  lw          $v0, 0x404($s0)
    ctx->pc = 0x305cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1028)));
label_305cf0:
    // 0x305cf0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x305cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_305cf4:
    // 0x305cf4: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x305cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_305cf8:
    // 0x305cf8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x305cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_305cfc:
    // 0x305cfc: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_305d00:
    if (ctx->pc == 0x305D00u) {
        ctx->pc = 0x305D04u;
        goto label_305d04;
    }
    ctx->pc = 0x305CFCu;
    {
        const bool branch_taken_0x305cfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x305cfc) {
            ctx->pc = 0x305D14u;
            goto label_305d14;
        }
    }
    ctx->pc = 0x305D04u;
label_305d04:
    // 0x305d04: 0x50b40005  beql        $a1, $s4, . + 4 + (0x5 << 2)
label_305d08:
    if (ctx->pc == 0x305D08u) {
        ctx->pc = 0x305D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305D04u;
        // 0x305d08: 0x8e020404  lw          $v0, 0x404($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1028)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305D0Cu;
        goto label_305d0c;
    }
    ctx->pc = 0x305D04u;
    {
        const bool branch_taken_0x305d04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 20));
        if (branch_taken_0x305d04) {
            ctx->pc = 0x305D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305D04u;
            // 0x305d08: 0x8e020404  lw          $v0, 0x404($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1028)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305D1Cu;
            goto label_305d1c;
        }
    }
    ctx->pc = 0x305D0Cu;
label_305d0c:
    // 0x305d0c: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
label_305d10:
    if (ctx->pc == 0x305D10u) {
        ctx->pc = 0x305D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305D0Cu;
        // 0x305d10: 0x8e020404  lw          $v0, 0x404($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1028)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305D14u;
        goto label_305d14;
    }
    ctx->pc = 0x305D0Cu;
    {
        const bool branch_taken_0x305d0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x305d0c) {
            ctx->pc = 0x305D10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305D0Cu;
            // 0x305d10: 0x8e020404  lw          $v0, 0x404($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1028)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305D38u;
            goto label_305d38;
        }
    }
    ctx->pc = 0x305D14u;
label_305d14:
    // 0x305d14: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
label_305d18:
    if (ctx->pc == 0x305D18u) {
        ctx->pc = 0x305D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305D14u;
        // 0x305d18: 0x8e020404  lw          $v0, 0x404($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1028)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305D1Cu;
        goto label_305d1c;
    }
    ctx->pc = 0x305D14u;
    {
        const bool branch_taken_0x305d14 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x305D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305D14u;
        // 0x305d18: 0x8e020404  lw          $v0, 0x404($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1028)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305d14) {
            ctx->pc = 0x305D38u;
            goto label_305d38;
        }
    }
    ctx->pc = 0x305D1Cu;
label_305d1c:
    // 0x305d1c: 0x8e040410  lw          $a0, 0x410($s0)
    ctx->pc = 0x305d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1040)));
label_305d20:
    // 0x305d20: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x305d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_305d24:
    // 0x305d24: 0x90430012  lbu         $v1, 0x12($v0)
    ctx->pc = 0x305d24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
label_305d28:
    // 0x305d28: 0x741804  sllv        $v1, $s4, $v1
    ctx->pc = 0x305d28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), GPR_U32(ctx, 3) & 0x1F));
label_305d2c:
    // 0x305d2c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x305d2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_305d30:
    // 0x305d30: 0xae040410  sw          $a0, 0x410($s0)
    ctx->pc = 0x305d30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1040), GPR_U32(ctx, 4));
label_305d34:
    // 0x305d34: 0x8e020404  lw          $v0, 0x404($s0)
    ctx->pc = 0x305d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1028)));
label_305d38:
    // 0x305d38: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x305d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_305d3c:
    // 0x305d3c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x305d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_305d40:
    // 0x305d40: 0x30430002  andi        $v1, $v0, 0x2
    ctx->pc = 0x305d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_305d44:
    // 0x305d44: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
label_305d48:
    if (ctx->pc == 0x305D48u) {
        ctx->pc = 0x305D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305D44u;
        // 0x305d48: 0x8e040404  lw          $a0, 0x404($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1028)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305D4Cu;
        goto label_305d4c;
    }
    ctx->pc = 0x305D44u;
    {
        const bool branch_taken_0x305d44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x305d44) {
            ctx->pc = 0x305D48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305D44u;
            // 0x305d48: 0x8e040404  lw          $a0, 0x404($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1028)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305D64u;
            goto label_305d64;
        }
    }
    ctx->pc = 0x305D4Cu;
label_305d4c:
    // 0x305d4c: 0x54b40005  bnel        $a1, $s4, . + 4 + (0x5 << 2)
label_305d50:
    if (ctx->pc == 0x305D50u) {
        ctx->pc = 0x305D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305D4Cu;
        // 0x305d50: 0x8e040404  lw          $a0, 0x404($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1028)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305D54u;
        goto label_305d54;
    }
    ctx->pc = 0x305D4Cu;
    {
        const bool branch_taken_0x305d4c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 20));
        if (branch_taken_0x305d4c) {
            ctx->pc = 0x305D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305D4Cu;
            // 0x305d50: 0x8e040404  lw          $a0, 0x404($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1028)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305D64u;
            goto label_305d64;
        }
    }
    ctx->pc = 0x305D54u;
label_305d54:
    // 0x305d54: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x305d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_305d58:
    // 0x305d58: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_305d5c:
    if (ctx->pc == 0x305D5Cu) {
        ctx->pc = 0x305D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305D58u;
        // 0x305d5c: 0xae050418  sw          $a1, 0x418($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1048), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305D60u;
        goto label_305d60;
    }
    ctx->pc = 0x305D58u;
    {
        const bool branch_taken_0x305d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x305d58) {
            ctx->pc = 0x305D5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305D58u;
            // 0x305d5c: 0xae050418  sw          $a1, 0x418($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1048), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305D60u;
            goto label_305d60;
        }
    }
    ctx->pc = 0x305D60u;
label_305d60:
    // 0x305d60: 0x8e040404  lw          $a0, 0x404($s0)
    ctx->pc = 0x305d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1028)));
label_305d64:
    // 0x305d64: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x305d64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_305d68:
    // 0x305d68: 0x26730050  addiu       $s3, $s3, 0x50
    ctx->pc = 0x305d68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
label_305d6c:
    // 0x305d6c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x305d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_305d70:
    // 0x305d70: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x305d70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_305d74:
    // 0x305d74: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
label_305d78:
    if (ctx->pc == 0x305D78u) {
        ctx->pc = 0x305D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305D74u;
        // 0x305d78: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305D7Cu;
        goto label_305d7c;
    }
    ctx->pc = 0x305D74u;
    {
        const bool branch_taken_0x305d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305D74u;
        // 0x305d78: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305d74) {
            ctx->pc = 0x305CD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_305cd8;
        }
    }
    ctx->pc = 0x305D7Cu;
label_305d7c:
    // 0x305d7c: 0x8e030400  lw          $v1, 0x400($s0)
    ctx->pc = 0x305d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1024)));
label_305d80:
    // 0x305d80: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
label_305d84:
    if (ctx->pc == 0x305D84u) {
        ctx->pc = 0x305D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305D80u;
        // 0x305d84: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305D88u;
        goto label_305d88;
    }
    ctx->pc = 0x305D80u;
    {
        const bool branch_taken_0x305d80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x305D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305D80u;
        // 0x305d84: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305d80) {
            ctx->pc = 0x305E5Cu;
            goto label_305e5c;
        }
    }
    ctx->pc = 0x305D88u;
label_305d88:
    // 0x305d88: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x305d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_305d8c:
    // 0x305d8c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x305d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_305d90:
    // 0x305d90: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x305d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
label_305d94:
    // 0x305d94: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x305d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_305d98:
    // 0x305d98: 0xc0a47f0  jal         func_291FC0
label_305d9c:
    if (ctx->pc == 0x305D9Cu) {
        ctx->pc = 0x305D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305D98u;
        // 0x305d9c: 0x629021  addu        $s2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305DA0u;
        goto label_305da0;
    }
    ctx->pc = 0x305D98u;
    SET_GPR_U32(ctx, 31, 0x305DA0u);
    ctx->pc = 0x305D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305D98u;
    // 0x305d9c: 0x629021  addu        $s2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291FC0u, 0x305D98u, 0x305DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305DA0u;
label_305da0:
    // 0x305da0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x305da0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_305da4:
    // 0x305da4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x305da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_305da8:
    // 0x305da8: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_305dac:
    if (ctx->pc == 0x305DACu) {
        ctx->pc = 0x305DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305DA8u;
        // 0x305dac: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305DB0u;
        goto label_305db0;
    }
    ctx->pc = 0x305DA8u;
    {
        const bool branch_taken_0x305da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x305DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305DA8u;
        // 0x305dac: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305da8) {
            ctx->pc = 0x305E5Cu;
            goto label_305e5c;
        }
    }
    ctx->pc = 0x305DB0u;
label_305db0:
    // 0x305db0: 0x3416ffff  ori         $s6, $zero, 0xFFFF
    ctx->pc = 0x305db0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_305db4:
    // 0x305db4: 0x26510010  addiu       $s1, $s2, 0x10
    ctx->pc = 0x305db4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_305db8:
    // 0x305db8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x305db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_305dbc:
    // 0x305dbc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x305dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_305dc0:
    // 0x305dc0: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x305dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_305dc4:
    // 0x305dc4: 0x94650000  lhu         $a1, 0x0($v1)
    ctx->pc = 0x305dc4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_305dc8:
    // 0x305dc8: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x305dc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_305dcc:
    // 0x305dcc: 0xb42004  sllv        $a0, $s4, $a1
    ctx->pc = 0x305dccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), GPR_U32(ctx, 5) & 0x1F));
label_305dd0:
    // 0x305dd0: 0x16a00004  bnez        $s5, . + 4 + (0x4 << 2)
label_305dd4:
    if (ctx->pc == 0x305DD4u) {
        ctx->pc = 0x305DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305DD0u;
        // 0x305dd4: 0x543004  sllv        $a2, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305DD8u;
        goto label_305dd8;
    }
    ctx->pc = 0x305DD0u;
    {
        const bool branch_taken_0x305dd0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x305DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305DD0u;
        // 0x305dd4: 0x543004  sllv        $a2, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305dd0) {
            ctx->pc = 0x305DE4u;
            goto label_305de4;
        }
    }
    ctx->pc = 0x305DD8u;
label_305dd8:
    // 0x305dd8: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x305dd8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_305ddc:
    // 0x305ddc: 0x10000003  b           . + 4 + (0x3 << 2)
label_305de0:
    if (ctx->pc == 0x305DE0u) {
        ctx->pc = 0x305DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305DDCu;
        // 0x305de0: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x305DE4u;
        goto label_305de4;
    }
    ctx->pc = 0x305DDCu;
    {
        const bool branch_taken_0x305ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305DDCu;
        // 0x305de0: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x305ddc) {
            ctx->pc = 0x305DECu;
            goto label_305dec;
        }
    }
    ctx->pc = 0x305DE4u;
label_305de4:
    // 0x305de4: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x305de4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_305de8:
    // 0x305de8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x305de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_305dec:
    // 0x305dec: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_305df0:
    if (ctx->pc == 0x305DF0u) {
        ctx->pc = 0x305DF4u;
        goto label_305df4;
    }
    ctx->pc = 0x305DECu;
    {
        const bool branch_taken_0x305dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x305dec) {
            ctx->pc = 0x305E30u;
            goto label_305e30;
        }
    }
    ctx->pc = 0x305DF4u;
label_305df4:
    // 0x305df4: 0x8e020408  lw          $v0, 0x408($s0)
    ctx->pc = 0x305df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1032)));
label_305df8:
    // 0x305df8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x305df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_305dfc:
    // 0x305dfc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_305e00:
    if (ctx->pc == 0x305E00u) {
        ctx->pc = 0x305E04u;
        goto label_305e04;
    }
    ctx->pc = 0x305DFCu;
    {
        const bool branch_taken_0x305dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x305dfc) {
            ctx->pc = 0x305E30u;
            goto label_305e30;
        }
    }
    ctx->pc = 0x305E04u;
label_305e04:
    // 0x305e04: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x305e04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_305e08:
    // 0x305e08: 0x1056000d  beq         $v0, $s6, . + 4 + (0xD << 2)
label_305e0c:
    if (ctx->pc == 0x305E0Cu) {
        ctx->pc = 0x305E10u;
        goto label_305e10;
    }
    ctx->pc = 0x305E08u;
    {
        const bool branch_taken_0x305e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        if (branch_taken_0x305e08) {
            ctx->pc = 0x305E40u;
            goto label_305e40;
        }
    }
    ctx->pc = 0x305E10u;
label_305e10:
    // 0x305e10: 0x8e02040c  lw          $v0, 0x40C($s0)
    ctx->pc = 0x305e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1036)));
label_305e14:
    // 0x305e14: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x305e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_305e18:
    // 0x305e18: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_305e1c:
    if (ctx->pc == 0x305E1Cu) {
        ctx->pc = 0x305E20u;
        goto label_305e20;
    }
    ctx->pc = 0x305E18u;
    {
        const bool branch_taken_0x305e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x305e18) {
            ctx->pc = 0x305E30u;
            goto label_305e30;
        }
    }
    ctx->pc = 0x305E20u;
label_305e20:
    // 0x305e20: 0x8e020410  lw          $v0, 0x410($s0)
    ctx->pc = 0x305e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1040)));
label_305e24:
    // 0x305e24: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x305e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_305e28:
    // 0x305e28: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_305e2c:
    if (ctx->pc == 0x305E2Cu) {
        ctx->pc = 0x305E30u;
        goto label_305e30;
    }
    ctx->pc = 0x305E28u;
    {
        const bool branch_taken_0x305e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x305e28) {
            ctx->pc = 0x305E40u;
            goto label_305e40;
        }
    }
    ctx->pc = 0x305E30u;
label_305e30:
    // 0x305e30: 0xc0c17d6  jal         func_305F58
label_305e34:
    if (ctx->pc == 0x305E34u) {
        ctx->pc = 0x305E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305E30u;
        // 0x305e34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305E38u;
        goto label_305e38;
    }
    ctx->pc = 0x305E30u;
    SET_GPR_U32(ctx, 31, 0x305E38u);
    ctx->pc = 0x305E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305E30u;
    // 0x305e34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305F58u, 0x305E30u, 0x305E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305E38u;
label_305e38:
    // 0x305e38: 0x10000004  b           . + 4 + (0x4 << 2)
label_305e3c:
    if (ctx->pc == 0x305E3Cu) {
        ctx->pc = 0x305E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305E38u;
        // 0x305e3c: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305E40u;
        goto label_305e40;
    }
    ctx->pc = 0x305E38u;
    {
        const bool branch_taken_0x305e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305E38u;
        // 0x305e3c: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305e38) {
            ctx->pc = 0x305E4Cu;
            goto label_305e4c;
        }
    }
    ctx->pc = 0x305E40u;
label_305e40:
    // 0x305e40: 0xc0c17a2  jal         func_305E88
label_305e44:
    if (ctx->pc == 0x305E44u) {
        ctx->pc = 0x305E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305E40u;
        // 0x305e44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305E48u;
        goto label_305e48;
    }
    ctx->pc = 0x305E40u;
    SET_GPR_U32(ctx, 31, 0x305E48u);
    ctx->pc = 0x305E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305E40u;
    // 0x305e44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305E88u, 0x305E40u, 0x305E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305E48u;
label_305e48:
    // 0x305e48: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x305e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_305e4c:
    // 0x305e4c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x305e4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_305e50:
    // 0x305e50: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x305e50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_305e54:
    // 0x305e54: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
label_305e58:
    if (ctx->pc == 0x305E58u) {
        ctx->pc = 0x305E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305E54u;
        // 0x305e58: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305E5Cu;
        goto label_305e5c;
    }
    ctx->pc = 0x305E54u;
    {
        const bool branch_taken_0x305e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305E54u;
        // 0x305e58: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305e54) {
            ctx->pc = 0x305DB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_305db8;
        }
    }
    ctx->pc = 0x305E5Cu;
label_305e5c:
    // 0x305e5c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x305e5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_305e60:
    // 0x305e60: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x305e60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_305e64:
    // 0x305e64: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x305e64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_305e68:
    // 0x305e68: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x305e68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_305e6c:
    // 0x305e6c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x305e6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_305e70:
    // 0x305e70: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x305e70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_305e74:
    // 0x305e74: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x305e74u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_305e78:
    // 0x305e78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x305e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_305e7c:
    // 0x305e7c: 0x3e00008  jr          $ra
label_305e80:
    if (ctx->pc == 0x305E80u) {
        ctx->pc = 0x305E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305E7Cu;
        // 0x305e80: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305E84u;
        goto label_305e84;
    }
    ctx->pc = 0x305E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305E7Cu;
        // 0x305e80: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305E7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305E84u;
label_305e84:
    // 0x305e84: 0x0  nop
    ctx->pc = 0x305e84u;
    // NOP
    ctx->pc = 0x305e88u;
}
