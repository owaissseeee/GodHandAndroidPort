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

// Function: func_00181CF8
// Address: 0x181cf8 - 0x182020
void func_00181CF8_0x181cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00181CF8_0x181cf8");
#endif

    switch (ctx->pc) {
        case 0x181cf8u: goto label_181cf8;
        case 0x181cfcu: goto label_181cfc;
        case 0x181d00u: goto label_181d00;
        case 0x181d04u: goto label_181d04;
        case 0x181d08u: goto label_181d08;
        case 0x181d0cu: goto label_181d0c;
        case 0x181d10u: goto label_181d10;
        case 0x181d14u: goto label_181d14;
        case 0x181d18u: goto label_181d18;
        case 0x181d1cu: goto label_181d1c;
        case 0x181d20u: goto label_181d20;
        case 0x181d24u: goto label_181d24;
        case 0x181d28u: goto label_181d28;
        case 0x181d2cu: goto label_181d2c;
        case 0x181d30u: goto label_181d30;
        case 0x181d34u: goto label_181d34;
        case 0x181d38u: goto label_181d38;
        case 0x181d3cu: goto label_181d3c;
        case 0x181d40u: goto label_181d40;
        case 0x181d44u: goto label_181d44;
        case 0x181d48u: goto label_181d48;
        case 0x181d4cu: goto label_181d4c;
        case 0x181d50u: goto label_181d50;
        case 0x181d54u: goto label_181d54;
        case 0x181d58u: goto label_181d58;
        case 0x181d5cu: goto label_181d5c;
        case 0x181d60u: goto label_181d60;
        case 0x181d64u: goto label_181d64;
        case 0x181d68u: goto label_181d68;
        case 0x181d6cu: goto label_181d6c;
        case 0x181d70u: goto label_181d70;
        case 0x181d74u: goto label_181d74;
        case 0x181d78u: goto label_181d78;
        case 0x181d7cu: goto label_181d7c;
        case 0x181d80u: goto label_181d80;
        case 0x181d84u: goto label_181d84;
        case 0x181d88u: goto label_181d88;
        case 0x181d8cu: goto label_181d8c;
        case 0x181d90u: goto label_181d90;
        case 0x181d94u: goto label_181d94;
        case 0x181d98u: goto label_181d98;
        case 0x181d9cu: goto label_181d9c;
        case 0x181da0u: goto label_181da0;
        case 0x181da4u: goto label_181da4;
        case 0x181da8u: goto label_181da8;
        case 0x181dacu: goto label_181dac;
        case 0x181db0u: goto label_181db0;
        case 0x181db4u: goto label_181db4;
        case 0x181db8u: goto label_181db8;
        case 0x181dbcu: goto label_181dbc;
        case 0x181dc0u: goto label_181dc0;
        case 0x181dc4u: goto label_181dc4;
        case 0x181dc8u: goto label_181dc8;
        case 0x181dccu: goto label_181dcc;
        case 0x181dd0u: goto label_181dd0;
        case 0x181dd4u: goto label_181dd4;
        case 0x181dd8u: goto label_181dd8;
        case 0x181ddcu: goto label_181ddc;
        case 0x181de0u: goto label_181de0;
        case 0x181de4u: goto label_181de4;
        case 0x181de8u: goto label_181de8;
        case 0x181decu: goto label_181dec;
        case 0x181df0u: goto label_181df0;
        case 0x181df4u: goto label_181df4;
        case 0x181df8u: goto label_181df8;
        case 0x181dfcu: goto label_181dfc;
        case 0x181e00u: goto label_181e00;
        case 0x181e04u: goto label_181e04;
        case 0x181e08u: goto label_181e08;
        case 0x181e0cu: goto label_181e0c;
        case 0x181e10u: goto label_181e10;
        case 0x181e14u: goto label_181e14;
        case 0x181e18u: goto label_181e18;
        case 0x181e1cu: goto label_181e1c;
        case 0x181e20u: goto label_181e20;
        case 0x181e24u: goto label_181e24;
        case 0x181e28u: goto label_181e28;
        case 0x181e2cu: goto label_181e2c;
        case 0x181e30u: goto label_181e30;
        case 0x181e34u: goto label_181e34;
        case 0x181e38u: goto label_181e38;
        case 0x181e3cu: goto label_181e3c;
        case 0x181e40u: goto label_181e40;
        case 0x181e44u: goto label_181e44;
        case 0x181e48u: goto label_181e48;
        case 0x181e4cu: goto label_181e4c;
        case 0x181e50u: goto label_181e50;
        case 0x181e54u: goto label_181e54;
        case 0x181e58u: goto label_181e58;
        case 0x181e5cu: goto label_181e5c;
        case 0x181e60u: goto label_181e60;
        case 0x181e64u: goto label_181e64;
        case 0x181e68u: goto label_181e68;
        case 0x181e6cu: goto label_181e6c;
        case 0x181e70u: goto label_181e70;
        case 0x181e74u: goto label_181e74;
        case 0x181e78u: goto label_181e78;
        case 0x181e7cu: goto label_181e7c;
        case 0x181e80u: goto label_181e80;
        case 0x181e84u: goto label_181e84;
        case 0x181e88u: goto label_181e88;
        case 0x181e8cu: goto label_181e8c;
        case 0x181e90u: goto label_181e90;
        case 0x181e94u: goto label_181e94;
        case 0x181e98u: goto label_181e98;
        case 0x181e9cu: goto label_181e9c;
        case 0x181ea0u: goto label_181ea0;
        case 0x181ea4u: goto label_181ea4;
        case 0x181ea8u: goto label_181ea8;
        case 0x181eacu: goto label_181eac;
        case 0x181eb0u: goto label_181eb0;
        case 0x181eb4u: goto label_181eb4;
        case 0x181eb8u: goto label_181eb8;
        case 0x181ebcu: goto label_181ebc;
        case 0x181ec0u: goto label_181ec0;
        case 0x181ec4u: goto label_181ec4;
        case 0x181ec8u: goto label_181ec8;
        case 0x181eccu: goto label_181ecc;
        case 0x181ed0u: goto label_181ed0;
        case 0x181ed4u: goto label_181ed4;
        case 0x181ed8u: goto label_181ed8;
        case 0x181edcu: goto label_181edc;
        case 0x181ee0u: goto label_181ee0;
        case 0x181ee4u: goto label_181ee4;
        case 0x181ee8u: goto label_181ee8;
        case 0x181eecu: goto label_181eec;
        case 0x181ef0u: goto label_181ef0;
        case 0x181ef4u: goto label_181ef4;
        case 0x181ef8u: goto label_181ef8;
        case 0x181efcu: goto label_181efc;
        case 0x181f00u: goto label_181f00;
        case 0x181f04u: goto label_181f04;
        case 0x181f08u: goto label_181f08;
        case 0x181f0cu: goto label_181f0c;
        case 0x181f10u: goto label_181f10;
        case 0x181f14u: goto label_181f14;
        case 0x181f18u: goto label_181f18;
        case 0x181f1cu: goto label_181f1c;
        case 0x181f20u: goto label_181f20;
        case 0x181f24u: goto label_181f24;
        case 0x181f28u: goto label_181f28;
        case 0x181f2cu: goto label_181f2c;
        case 0x181f30u: goto label_181f30;
        case 0x181f34u: goto label_181f34;
        case 0x181f38u: goto label_181f38;
        case 0x181f3cu: goto label_181f3c;
        case 0x181f40u: goto label_181f40;
        case 0x181f44u: goto label_181f44;
        case 0x181f48u: goto label_181f48;
        case 0x181f4cu: goto label_181f4c;
        case 0x181f50u: goto label_181f50;
        case 0x181f54u: goto label_181f54;
        case 0x181f58u: goto label_181f58;
        case 0x181f5cu: goto label_181f5c;
        case 0x181f60u: goto label_181f60;
        case 0x181f64u: goto label_181f64;
        case 0x181f68u: goto label_181f68;
        case 0x181f6cu: goto label_181f6c;
        case 0x181f70u: goto label_181f70;
        case 0x181f74u: goto label_181f74;
        case 0x181f78u: goto label_181f78;
        case 0x181f7cu: goto label_181f7c;
        case 0x181f80u: goto label_181f80;
        case 0x181f84u: goto label_181f84;
        case 0x181f88u: goto label_181f88;
        case 0x181f8cu: goto label_181f8c;
        case 0x181f90u: goto label_181f90;
        case 0x181f94u: goto label_181f94;
        case 0x181f98u: goto label_181f98;
        case 0x181f9cu: goto label_181f9c;
        case 0x181fa0u: goto label_181fa0;
        case 0x181fa4u: goto label_181fa4;
        case 0x181fa8u: goto label_181fa8;
        case 0x181facu: goto label_181fac;
        case 0x181fb0u: goto label_181fb0;
        case 0x181fb4u: goto label_181fb4;
        case 0x181fb8u: goto label_181fb8;
        case 0x181fbcu: goto label_181fbc;
        case 0x181fc0u: goto label_181fc0;
        case 0x181fc4u: goto label_181fc4;
        case 0x181fc8u: goto label_181fc8;
        case 0x181fccu: goto label_181fcc;
        case 0x181fd0u: goto label_181fd0;
        case 0x181fd4u: goto label_181fd4;
        case 0x181fd8u: goto label_181fd8;
        case 0x181fdcu: goto label_181fdc;
        case 0x181fe0u: goto label_181fe0;
        case 0x181fe4u: goto label_181fe4;
        case 0x181fe8u: goto label_181fe8;
        case 0x181fecu: goto label_181fec;
        case 0x181ff0u: goto label_181ff0;
        case 0x181ff4u: goto label_181ff4;
        case 0x181ff8u: goto label_181ff8;
        case 0x181ffcu: goto label_181ffc;
        case 0x182000u: goto label_182000;
        case 0x182004u: goto label_182004;
        case 0x182008u: goto label_182008;
        case 0x18200cu: goto label_18200c;
        case 0x182010u: goto label_182010;
        case 0x182014u: goto label_182014;
        case 0x182018u: goto label_182018;
        case 0x18201cu: goto label_18201c;
        default: break;
    }

    ctx->pc = 0x181cf8u;

label_181cf8:
    // 0x181cf8: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x181cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_181cfc:
    // 0x181cfc: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x181cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_181d00:
    // 0x181d00: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x181d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_181d04:
    // 0x181d04: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x181d04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_181d08:
    // 0x181d08: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x181d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_181d0c:
    // 0x181d0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x181d0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_181d10:
    // 0x181d10: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x181d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_181d14:
    // 0x181d14: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x181d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_181d18:
    // 0x181d18: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x181d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_181d1c:
    // 0x181d1c: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x181d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_181d20:
    // 0x181d20: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x181d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_181d24:
    // 0x181d24: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x181d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_181d28:
    // 0x181d28: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x181d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_181d2c:
    // 0x181d2c: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x181d2cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_181d30:
    // 0x181d30: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x181d30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_181d34:
    // 0x181d34: 0x922302f5  lbu         $v1, 0x2F5($s1)
    ctx->pc = 0x181d34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
label_181d38:
    // 0x181d38: 0x10700036  beq         $v1, $s0, . + 4 + (0x36 << 2)
label_181d3c:
    if (ctx->pc == 0x181D3Cu) {
        ctx->pc = 0x181D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181D38u;
        // 0x181d3c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x181D40u;
        goto label_181d40;
    }
    ctx->pc = 0x181D38u;
    {
        const bool branch_taken_0x181d38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x181D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181D38u;
        // 0x181d3c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x181d38) {
            ctx->pc = 0x181E14u;
            goto label_181e14;
        }
    }
    ctx->pc = 0x181D40u;
label_181d40:
    // 0x181d40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_181d44:
    if (ctx->pc == 0x181D44u) {
        ctx->pc = 0x181D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181D40u;
        // 0x181d44: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181D48u;
        goto label_181d48;
    }
    ctx->pc = 0x181D40u;
    {
        const bool branch_taken_0x181d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x181D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181D40u;
        // 0x181d44: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181d40) {
            ctx->pc = 0x181D58u;
            goto label_181d58;
        }
    }
    ctx->pc = 0x181D48u;
label_181d48:
    // 0x181d48: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_181d4c:
    if (ctx->pc == 0x181D4Cu) {
        ctx->pc = 0x181D50u;
        goto label_181d50;
    }
    ctx->pc = 0x181D48u;
    {
        const bool branch_taken_0x181d48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x181d48) {
            ctx->pc = 0x181D70u;
            goto label_181d70;
        }
    }
    ctx->pc = 0x181D50u;
label_181d50:
    // 0x181d50: 0x1000004f  b           . + 4 + (0x4F << 2)
label_181d54:
    if (ctx->pc == 0x181D54u) {
        ctx->pc = 0x181D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181D50u;
        // 0x181d54: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181D58u;
        goto label_181d58;
    }
    ctx->pc = 0x181D50u;
    {
        const bool branch_taken_0x181d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181D50u;
        // 0x181d54: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181d50) {
            ctx->pc = 0x181E90u;
            goto label_181e90;
        }
    }
    ctx->pc = 0x181D58u;
label_181d58:
    // 0x181d58: 0x10620038  beq         $v1, $v0, . + 4 + (0x38 << 2)
label_181d5c:
    if (ctx->pc == 0x181D5Cu) {
        ctx->pc = 0x181D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181D58u;
        // 0x181d5c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181D60u;
        goto label_181d60;
    }
    ctx->pc = 0x181D58u;
    {
        const bool branch_taken_0x181d58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x181D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181D58u;
        // 0x181d5c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181d58) {
            ctx->pc = 0x181E3Cu;
            goto label_181e3c;
        }
    }
    ctx->pc = 0x181D60u;
label_181d60:
    // 0x181d60: 0x50620047  beql        $v1, $v0, . + 4 + (0x47 << 2)
label_181d64:
    if (ctx->pc == 0x181D64u) {
        ctx->pc = 0x181D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181D60u;
        // 0x181d64: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181D68u;
        goto label_181d68;
    }
    ctx->pc = 0x181D60u;
    {
        const bool branch_taken_0x181d60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x181d60) {
            ctx->pc = 0x181D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181D60u;
            // 0x181d64: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181E80u;
            goto label_181e80;
        }
    }
    ctx->pc = 0x181D68u;
label_181d68:
    // 0x181d68: 0x10000049  b           . + 4 + (0x49 << 2)
label_181d6c:
    if (ctx->pc == 0x181D6Cu) {
        ctx->pc = 0x181D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181D68u;
        // 0x181d6c: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181D70u;
        goto label_181d70;
    }
    ctx->pc = 0x181D68u;
    {
        const bool branch_taken_0x181d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181D68u;
        // 0x181d6c: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181d68) {
            ctx->pc = 0x181E90u;
            goto label_181e90;
        }
    }
    ctx->pc = 0x181D70u;
label_181d70:
    // 0x181d70: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x181d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_181d74:
    // 0x181d74: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x181d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_181d78:
    // 0x181d78: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x181d78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_181d7c:
    // 0x181d7c: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x181d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_181d80:
    // 0x181d80: 0x40f809  jalr        $v0
label_181d84:
    if (ctx->pc == 0x181D84u) {
        ctx->pc = 0x181D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181D80u;
        // 0x181d84: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181D88u;
        goto label_181d88;
    }
    ctx->pc = 0x181D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x181D88u);
        ctx->pc = 0x181D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181D80u;
        // 0x181d84: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181D80u, 0x181D88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x181D88u;
label_181d88:
    // 0x181d88: 0x13a20007  beq         $sp, $v0, . + 4 + (0x7 << 2)
label_181d8c:
    if (ctx->pc == 0x181D8Cu) {
        ctx->pc = 0x181D90u;
        goto label_181d90;
    }
    ctx->pc = 0x181D88u;
    {
        const bool branch_taken_0x181d88 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x181d88) {
            ctx->pc = 0x181DA8u;
            goto label_181da8;
        }
    }
    ctx->pc = 0x181D90u;
label_181d90:
    // 0x181d90: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x181d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_181d94:
    // 0x181d94: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x181d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_181d98:
    // 0x181d98: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x181d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_181d9c:
    // 0x181d9c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x181d9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_181da0:
    // 0x181da0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x181da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_181da4:
    // 0x181da4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x181da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_181da8:
    // 0x181da8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x181da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_181dac:
    // 0x181dac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x181dacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_181db0:
    // 0x181db0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x181db0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_181db4:
    // 0x181db4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x181db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181db8:
    // 0x181db8: 0x240500cb  addiu       $a1, $zero, 0xCB
    ctx->pc = 0x181db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
label_181dbc:
    // 0x181dbc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x181dbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181dc0:
    // 0x181dc0: 0xc0c1a0e  jal         func_306838
label_181dc4:
    if (ctx->pc == 0x181DC4u) {
        ctx->pc = 0x181DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181DC0u;
        // 0x181dc4: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181DC8u;
        goto label_181dc8;
    }
    ctx->pc = 0x181DC0u;
    SET_GPR_U32(ctx, 31, 0x181DC8u);
    ctx->pc = 0x181DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181DC0u;
    // 0x181dc4: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x181DC0u, 0x181DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181DC8u;
label_181dc8:
    // 0x181dc8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x181dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_181dcc:
    // 0x181dcc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x181dccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181dd0:
    // 0x181dd0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x181dd0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181dd4:
    // 0x181dd4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x181dd4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181dd8:
    // 0x181dd8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x181dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_181ddc:
    // 0x181ddc: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x181ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_181de0:
    // 0x181de0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x181de0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_181de4:
    // 0x181de4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x181de4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181de8:
    // 0x181de8: 0xc0b2e92  jal         func_2CBA48
label_181dec:
    if (ctx->pc == 0x181DECu) {
        ctx->pc = 0x181DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181DE8u;
        // 0x181dec: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181DF0u;
        goto label_181df0;
    }
    ctx->pc = 0x181DE8u;
    SET_GPR_U32(ctx, 31, 0x181DF0u);
    ctx->pc = 0x181DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181DE8u;
    // 0x181dec: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x181DE8u, 0x181DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181DF0u;
label_181df0:
    // 0x181df0: 0xc0608a0  jal         func_182280
label_181df4:
    if (ctx->pc == 0x181DF4u) {
        ctx->pc = 0x181DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181DF0u;
        // 0x181df4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181DF8u;
        goto label_181df8;
    }
    ctx->pc = 0x181DF0u;
    SET_GPR_U32(ctx, 31, 0x181DF8u);
    ctx->pc = 0x181DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181DF0u;
    // 0x181df4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182280u, 0x181DF0u, 0x181DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181DF8u;
label_181df8:
    // 0x181df8: 0xc06de42  jal         func_1B7908
label_181dfc:
    if (ctx->pc == 0x181DFCu) {
        ctx->pc = 0x181DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181DF8u;
        // 0x181dfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181E00u;
        goto label_181e00;
    }
    ctx->pc = 0x181DF8u;
    SET_GPR_U32(ctx, 31, 0x181E00u);
    ctx->pc = 0x181DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181DF8u;
    // 0x181dfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7908u, 0x181DF8u, 0x181E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181E00u;
label_181e00:
    // 0x181e00: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x181e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_181e04:
    // 0x181e04: 0xa23002f5  sb          $s0, 0x2F5($s1)
    ctx->pc = 0x181e04u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 16));
label_181e08:
    // 0x181e08: 0xa6220654  sh          $v0, 0x654($s1)
    ctx->pc = 0x181e08u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
label_181e0c:
    // 0x181e0c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x181e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_181e10:
    // 0x181e10: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x181e10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_181e14:
    // 0x181e14: 0x96220654  lhu         $v0, 0x654($s1)
    ctx->pc = 0x181e14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1620)));
label_181e18:
    // 0x181e18: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x181e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_181e1c:
    // 0x181e1c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x181e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_181e20:
    // 0x181e20: 0x1c60001a  bgtz        $v1, . + 4 + (0x1A << 2)
label_181e24:
    if (ctx->pc == 0x181E24u) {
        ctx->pc = 0x181E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181E20u;
        // 0x181e24: 0xa6220654  sh          $v0, 0x654($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181E28u;
        goto label_181e28;
    }
    ctx->pc = 0x181E20u;
    {
        const bool branch_taken_0x181e20 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x181E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181E20u;
        // 0x181e24: 0xa6220654  sh          $v0, 0x654($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181e20) {
            ctx->pc = 0x181E8Cu;
            goto label_181e8c;
        }
    }
    ctx->pc = 0x181E28u;
label_181e28:
    // 0x181e28: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x181e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_181e2c:
    // 0x181e2c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x181e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_181e30:
    // 0x181e30: 0xa6220654  sh          $v0, 0x654($s1)
    ctx->pc = 0x181e30u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
label_181e34:
    // 0x181e34: 0x10000013  b           . + 4 + (0x13 << 2)
label_181e38:
    if (ctx->pc == 0x181E38u) {
        ctx->pc = 0x181E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181E34u;
        // 0x181e38: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181E3Cu;
        goto label_181e3c;
    }
    ctx->pc = 0x181E34u;
    {
        const bool branch_taken_0x181e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181E34u;
        // 0x181e38: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181e34) {
            ctx->pc = 0x181E84u;
            goto label_181e84;
        }
    }
    ctx->pc = 0x181E3Cu;
label_181e3c:
    // 0x181e3c: 0x96220654  lhu         $v0, 0x654($s1)
    ctx->pc = 0x181e3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1620)));
label_181e40:
    // 0x181e40: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x181e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_181e44:
    // 0x181e44: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x181e44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_181e48:
    // 0x181e48: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x181e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_181e4c:
    // 0x181e4c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x181e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_181e50:
    // 0x181e50: 0xa6220654  sh          $v0, 0x654($s1)
    ctx->pc = 0x181e50u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
label_181e54:
    // 0x181e54: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x181e54u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_181e58:
    // 0x181e58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x181e58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_181e5c:
    // 0x181e5c: 0x0  nop
    ctx->pc = 0x181e5cu;
    // NOP
label_181e60:
    // 0x181e60: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x181e60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_181e64:
    // 0x181e64: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x181e64u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
label_181e68:
    // 0x181e68: 0x1c600008  bgtz        $v1, . + 4 + (0x8 << 2)
label_181e6c:
    if (ctx->pc == 0x181E6Cu) {
        ctx->pc = 0x181E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181E68u;
        // 0x181e6c: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x181E70u;
        goto label_181e70;
    }
    ctx->pc = 0x181E68u;
    {
        const bool branch_taken_0x181e68 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x181E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181E68u;
        // 0x181e6c: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x181e68) {
            ctx->pc = 0x181E8Cu;
            goto label_181e8c;
        }
    }
    ctx->pc = 0x181E70u;
label_181e70:
    // 0x181e70: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x181e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_181e74:
    // 0x181e74: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x181e74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_181e78:
    // 0x181e78: 0x10000003  b           . + 4 + (0x3 << 2)
label_181e7c:
    if (ctx->pc == 0x181E7Cu) {
        ctx->pc = 0x181E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181E78u;
        // 0x181e7c: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181E80u;
        goto label_181e80;
    }
    ctx->pc = 0x181E78u;
    {
        const bool branch_taken_0x181e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181E78u;
        // 0x181e7c: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181e78) {
            ctx->pc = 0x181E88u;
            goto label_181e88;
        }
    }
    ctx->pc = 0x181E80u;
label_181e80:
    // 0x181e80: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x181e80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
label_181e84:
    // 0x181e84: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x181e84u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_181e88:
    // 0x181e88: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x181e88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_181e8c:
    // 0x181e8c: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x181e8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_181e90:
    // 0x181e90: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x181e90u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_181e94:
    // 0x181e94: 0x10560053  beq         $v0, $s6, . + 4 + (0x53 << 2)
label_181e98:
    if (ctx->pc == 0x181E98u) {
        ctx->pc = 0x181E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181E94u;
        // 0x181e98: 0x27be0020  addiu       $fp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181E9Cu;
        goto label_181e9c;
    }
    ctx->pc = 0x181E94u;
    {
        const bool branch_taken_0x181e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x181E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181E94u;
        // 0x181e98: 0x27be0020  addiu       $fp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181e94) {
            ctx->pc = 0x181FE4u;
            goto label_181fe4;
        }
    }
    ctx->pc = 0x181E9Cu;
label_181e9c:
    // 0x181e9c: 0x3c01c47a  lui         $at, 0xC47A
    ctx->pc = 0x181e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50298 << 16));
label_181ea0:
    // 0x181ea0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x181ea0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_181ea4:
    // 0x181ea4: 0x27b70010  addiu       $s7, $sp, 0x10
    ctx->pc = 0x181ea4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_181ea8:
    // 0x181ea8: 0x26350700  addiu       $s5, $s1, 0x700
    ctx->pc = 0x181ea8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 1792));
label_181eac:
    // 0x181eac: 0x263006d0  addiu       $s0, $s1, 0x6D0
    ctx->pc = 0x181eacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1744));
label_181eb0:
    // 0x181eb0: 0x263406f0  addiu       $s4, $s1, 0x6F0
    ctx->pc = 0x181eb0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
label_181eb4:
    // 0x181eb4: 0x263306e0  addiu       $s3, $s1, 0x6E0
    ctx->pc = 0x181eb4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1760));
label_181eb8:
    // 0x181eb8: 0x263206c0  addiu       $s2, $s1, 0x6C0
    ctx->pc = 0x181eb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1728));
label_181ebc:
    // 0x181ebc: 0x0  nop
    ctx->pc = 0x181ebcu;
    // NOP
label_181ec0:
    // 0x181ec0: 0xc05ce40  jal         func_173900
label_181ec4:
    if (ctx->pc == 0x181EC4u) {
        ctx->pc = 0x181EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181EC0u;
        // 0x181ec4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181EC8u;
        goto label_181ec8;
    }
    ctx->pc = 0x181EC0u;
    SET_GPR_U32(ctx, 31, 0x181EC8u);
    ctx->pc = 0x181EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181EC0u;
    // 0x181ec4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173900u, 0x181EC0u, 0x181EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181EC8u;
label_181ec8:
    // 0x181ec8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x181ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_181ecc:
    // 0x181ecc: 0x5443003b  bnel        $v0, $v1, . + 4 + (0x3B << 2)
label_181ed0:
    if (ctx->pc == 0x181ED0u) {
        ctx->pc = 0x181ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181ECCu;
        // 0x181ed0: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181ED4u;
        goto label_181ed4;
    }
    ctx->pc = 0x181ECCu;
    {
        const bool branch_taken_0x181ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x181ecc) {
            ctx->pc = 0x181ED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181ECCu;
            // 0x181ed0: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181FBCu;
            goto label_181fbc;
        }
    }
    ctx->pc = 0x181ED4u;
label_181ed4:
    // 0x181ed4: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x181ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_181ed8:
    // 0x181ed8: 0xc0a4bd4  jal         func_292F50
label_181edc:
    if (ctx->pc == 0x181EDCu) {
        ctx->pc = 0x181EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181ED8u;
        // 0x181edc: 0x244464f0  addiu       $a0, $v0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181EE0u;
        goto label_181ee0;
    }
    ctx->pc = 0x181ED8u;
    SET_GPR_U32(ctx, 31, 0x181EE0u);
    ctx->pc = 0x181EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181ED8u;
    // 0x181edc: 0x244464f0  addiu       $a0, $v0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x181ED8u, 0x181EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181EE0u;
label_181ee0:
    // 0x181ee0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x181ee0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_181ee4:
    // 0x181ee4: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x181ee4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_181ee8:
    // 0x181ee8: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x181ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_181eec:
    // 0x181eec: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x181eecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_181ef0:
    // 0x181ef0: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x181ef0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_181ef4:
    // 0x181ef4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x181ef4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_181ef8:
    // 0x181ef8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x181ef8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_181efc:
    // 0x181efc: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x181efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_181f00:
    // 0x181f00: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x181f00u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_181f04:
    // 0x181f04: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x181f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_181f08:
    // 0x181f08: 0xda04fff0  lqc2        $vf4, -0x10($s0)
    ctx->pc = 0x181f08u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 4294967280)));
label_181f0c:
    // 0x181f0c: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x181f0cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_181f10:
    // 0x181f10: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x181f10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_181f14:
    // 0x181f14: 0xfa04fff0  sqc2        $vf4, -0x10($s0)
    ctx->pc = 0x181f14u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4294967280), _mm_castps_si128(ctx->vu0_vf[4]));
label_181f18:
    // 0x181f18: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x181f18u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_181f1c:
    // 0x181f1c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x181f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_181f20:
    // 0x181f20: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x181f20u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_181f24:
    // 0x181f24: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x181f24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_181f28:
    // 0x181f28: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x181f28u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_181f2c:
    // 0x181f2c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x181f2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_181f30:
    // 0x181f30: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x181f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_181f34:
    // 0x181f34: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x181f34u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_181f38:
    // 0x181f38: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x181f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_181f3c:
    // 0x181f3c: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x181f3cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_181f40:
    // 0x181f40: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x181f40u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_181f44:
    // 0x181f44: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x181f44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_181f48:
    // 0x181f48: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x181f48u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_181f4c:
    // 0x181f4c: 0xc07df68  jal         func_1F7DA0
label_181f50:
    if (ctx->pc == 0x181F50u) {
        ctx->pc = 0x181F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181F4Cu;
        // 0x181f50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181F54u;
        goto label_181f54;
    }
    ctx->pc = 0x181F4Cu;
    SET_GPR_U32(ctx, 31, 0x181F54u);
    ctx->pc = 0x181F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181F4Cu;
    // 0x181f50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x181F4Cu, 0x181F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181F54u;
label_181f54:
    // 0x181f54: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x181f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_181f58:
    // 0x181f58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x181f58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181f5c:
    // 0x181f5c: 0xc051dca  jal         func_147728
label_181f60:
    if (ctx->pc == 0x181F60u) {
        ctx->pc = 0x181F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181F5Cu;
        // 0x181f60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181F64u;
        goto label_181f64;
    }
    ctx->pc = 0x181F5Cu;
    SET_GPR_U32(ctx, 31, 0x181F64u);
    ctx->pc = 0x181F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181F5Cu;
    // 0x181f60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x181F5Cu, 0x181F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181F64u;
label_181f64:
    // 0x181f64: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x181f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_181f68:
    // 0x181f68: 0xc051f10  jal         func_147C40
label_181f6c:
    if (ctx->pc == 0x181F6Cu) {
        ctx->pc = 0x181F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181F68u;
        // 0x181f6c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181F70u;
        goto label_181f70;
    }
    ctx->pc = 0x181F68u;
    SET_GPR_U32(ctx, 31, 0x181F70u);
    ctx->pc = 0x181F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181F68u;
    // 0x181f6c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x181F68u, 0x181F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181F70u;
label_181f70:
    // 0x181f70: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x181f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_181f74:
    // 0x181f74: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x181f74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_181f78:
    // 0x181f78: 0xc051efe  jal         func_147BF8
label_181f7c:
    if (ctx->pc == 0x181F7Cu) {
        ctx->pc = 0x181F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181F78u;
        // 0x181f7c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181F80u;
        goto label_181f80;
    }
    ctx->pc = 0x181F78u;
    SET_GPR_U32(ctx, 31, 0x181F80u);
    ctx->pc = 0x181F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181F78u;
    // 0x181f7c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147BF8u, 0x181F78u, 0x181F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181F80u;
label_181f80:
    // 0x181f80: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x181f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_181f84:
    // 0x181f84: 0xc051d4a  jal         func_147528
label_181f88:
    if (ctx->pc == 0x181F88u) {
        ctx->pc = 0x181F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181F84u;
        // 0x181f88: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181F8Cu;
        goto label_181f8c;
    }
    ctx->pc = 0x181F84u;
    SET_GPR_U32(ctx, 31, 0x181F8Cu);
    ctx->pc = 0x181F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181F84u;
    // 0x181f88: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x181F84u, 0x181F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181F8Cu;
label_181f8c:
    // 0x181f8c: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x181f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_181f90:
    // 0x181f90: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x181f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_181f94:
    // 0x181f94: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x181f94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_181f98:
    // 0x181f98: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x181f98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_181f9c:
    // 0x181f9c: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x181f9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_181fa0:
    // 0x181fa0: 0x0  nop
    ctx->pc = 0x181fa0u;
    // NOP
label_181fa4:
    // 0x181fa4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_181fa8:
    if (ctx->pc == 0x181FA8u) {
        ctx->pc = 0x181FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181FA4u;
        // 0x181fa8: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x181FACu;
        goto label_181fac;
    }
    ctx->pc = 0x181FA4u;
    {
        const bool branch_taken_0x181fa4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x181FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181FA4u;
        // 0x181fa8: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x181fa4) {
            ctx->pc = 0x181FB8u;
            goto label_181fb8;
        }
    }
    ctx->pc = 0x181FACu;
label_181fac:
    // 0x181fac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x181facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_181fb0:
    // 0x181fb0: 0xc05bd90  jal         func_16F640
label_181fb4:
    if (ctx->pc == 0x181FB4u) {
        ctx->pc = 0x181FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181FB0u;
        // 0x181fb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181FB8u;
        goto label_181fb8;
    }
    ctx->pc = 0x181FB0u;
    SET_GPR_U32(ctx, 31, 0x181FB8u);
    ctx->pc = 0x181FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181FB0u;
    // 0x181fb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x181FB0u, 0x181FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181FB8u;
label_181fb8:
    // 0x181fb8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x181fb8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_181fbc:
    // 0x181fbc: 0x26b50060  addiu       $s5, $s5, 0x60
    ctx->pc = 0x181fbcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_181fc0:
    // 0x181fc0: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x181fc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_181fc4:
    // 0x181fc4: 0x26940060  addiu       $s4, $s4, 0x60
    ctx->pc = 0x181fc4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
label_181fc8:
    // 0x181fc8: 0x26730060  addiu       $s3, $s3, 0x60
    ctx->pc = 0x181fc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_181fcc:
    // 0x181fcc: 0x2ac20006  slti        $v0, $s6, 0x6
    ctx->pc = 0x181fccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)6) ? 1 : 0);
label_181fd0:
    // 0x181fd0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_181fd4:
    if (ctx->pc == 0x181FD4u) {
        ctx->pc = 0x181FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181FD0u;
        // 0x181fd4: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181FD8u;
        goto label_181fd8;
    }
    ctx->pc = 0x181FD0u;
    {
        const bool branch_taken_0x181fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x181FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181FD0u;
        // 0x181fd4: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181fd0) {
            ctx->pc = 0x181FE4u;
            goto label_181fe4;
        }
    }
    ctx->pc = 0x181FD8u;
label_181fd8:
    // 0x181fd8: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x181fd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_181fdc:
    // 0x181fdc: 0x1456ffb8  bne         $v0, $s6, . + 4 + (-0x48 << 2)
label_181fe0:
    if (ctx->pc == 0x181FE0u) {
        ctx->pc = 0x181FE4u;
        goto label_181fe4;
    }
    ctx->pc = 0x181FDCu;
    {
        const bool branch_taken_0x181fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x181fdc) {
            ctx->pc = 0x181EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_181ec0;
        }
    }
    ctx->pc = 0x181FE4u;
label_181fe4:
    // 0x181fe4: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x181fe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_181fe8:
    // 0x181fe8: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x181fe8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_181fec:
    // 0x181fec: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x181fecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_181ff0:
    // 0x181ff0: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x181ff0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_181ff4:
    // 0x181ff4: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x181ff4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_181ff8:
    // 0x181ff8: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x181ff8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_181ffc:
    // 0x181ffc: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x181ffcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_182000:
    // 0x182000: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x182000u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_182004:
    // 0x182004: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x182004u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_182008:
    // 0x182008: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x182008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_18200c:
    // 0x18200c: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x18200cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_182010:
    // 0x182010: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x182010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_182014:
    // 0x182014: 0x3e00008  jr          $ra
label_182018:
    if (ctx->pc == 0x182018u) {
        ctx->pc = 0x182018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182014u;
        // 0x182018: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18201Cu;
        goto label_18201c;
    }
    ctx->pc = 0x182014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182014u;
        // 0x182018: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18201Cu;
label_18201c:
    // 0x18201c: 0x0  nop
    ctx->pc = 0x18201cu;
    // NOP
    ctx->pc = 0x182020u;
}
