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

// Function: func_00174C88
// Address: 0x174c88 - 0x174fb0
void func_00174C88_0x174c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00174C88_0x174c88");
#endif

    switch (ctx->pc) {
        case 0x174c88u: goto label_174c88;
        case 0x174c8cu: goto label_174c8c;
        case 0x174c90u: goto label_174c90;
        case 0x174c94u: goto label_174c94;
        case 0x174c98u: goto label_174c98;
        case 0x174c9cu: goto label_174c9c;
        case 0x174ca0u: goto label_174ca0;
        case 0x174ca4u: goto label_174ca4;
        case 0x174ca8u: goto label_174ca8;
        case 0x174cacu: goto label_174cac;
        case 0x174cb0u: goto label_174cb0;
        case 0x174cb4u: goto label_174cb4;
        case 0x174cb8u: goto label_174cb8;
        case 0x174cbcu: goto label_174cbc;
        case 0x174cc0u: goto label_174cc0;
        case 0x174cc4u: goto label_174cc4;
        case 0x174cc8u: goto label_174cc8;
        case 0x174cccu: goto label_174ccc;
        case 0x174cd0u: goto label_174cd0;
        case 0x174cd4u: goto label_174cd4;
        case 0x174cd8u: goto label_174cd8;
        case 0x174cdcu: goto label_174cdc;
        case 0x174ce0u: goto label_174ce0;
        case 0x174ce4u: goto label_174ce4;
        case 0x174ce8u: goto label_174ce8;
        case 0x174cecu: goto label_174cec;
        case 0x174cf0u: goto label_174cf0;
        case 0x174cf4u: goto label_174cf4;
        case 0x174cf8u: goto label_174cf8;
        case 0x174cfcu: goto label_174cfc;
        case 0x174d00u: goto label_174d00;
        case 0x174d04u: goto label_174d04;
        case 0x174d08u: goto label_174d08;
        case 0x174d0cu: goto label_174d0c;
        case 0x174d10u: goto label_174d10;
        case 0x174d14u: goto label_174d14;
        case 0x174d18u: goto label_174d18;
        case 0x174d1cu: goto label_174d1c;
        case 0x174d20u: goto label_174d20;
        case 0x174d24u: goto label_174d24;
        case 0x174d28u: goto label_174d28;
        case 0x174d2cu: goto label_174d2c;
        case 0x174d30u: goto label_174d30;
        case 0x174d34u: goto label_174d34;
        case 0x174d38u: goto label_174d38;
        case 0x174d3cu: goto label_174d3c;
        case 0x174d40u: goto label_174d40;
        case 0x174d44u: goto label_174d44;
        case 0x174d48u: goto label_174d48;
        case 0x174d4cu: goto label_174d4c;
        case 0x174d50u: goto label_174d50;
        case 0x174d54u: goto label_174d54;
        case 0x174d58u: goto label_174d58;
        case 0x174d5cu: goto label_174d5c;
        case 0x174d60u: goto label_174d60;
        case 0x174d64u: goto label_174d64;
        case 0x174d68u: goto label_174d68;
        case 0x174d6cu: goto label_174d6c;
        case 0x174d70u: goto label_174d70;
        case 0x174d74u: goto label_174d74;
        case 0x174d78u: goto label_174d78;
        case 0x174d7cu: goto label_174d7c;
        case 0x174d80u: goto label_174d80;
        case 0x174d84u: goto label_174d84;
        case 0x174d88u: goto label_174d88;
        case 0x174d8cu: goto label_174d8c;
        case 0x174d90u: goto label_174d90;
        case 0x174d94u: goto label_174d94;
        case 0x174d98u: goto label_174d98;
        case 0x174d9cu: goto label_174d9c;
        case 0x174da0u: goto label_174da0;
        case 0x174da4u: goto label_174da4;
        case 0x174da8u: goto label_174da8;
        case 0x174dacu: goto label_174dac;
        case 0x174db0u: goto label_174db0;
        case 0x174db4u: goto label_174db4;
        case 0x174db8u: goto label_174db8;
        case 0x174dbcu: goto label_174dbc;
        case 0x174dc0u: goto label_174dc0;
        case 0x174dc4u: goto label_174dc4;
        case 0x174dc8u: goto label_174dc8;
        case 0x174dccu: goto label_174dcc;
        case 0x174dd0u: goto label_174dd0;
        case 0x174dd4u: goto label_174dd4;
        case 0x174dd8u: goto label_174dd8;
        case 0x174ddcu: goto label_174ddc;
        case 0x174de0u: goto label_174de0;
        case 0x174de4u: goto label_174de4;
        case 0x174de8u: goto label_174de8;
        case 0x174decu: goto label_174dec;
        case 0x174df0u: goto label_174df0;
        case 0x174df4u: goto label_174df4;
        case 0x174df8u: goto label_174df8;
        case 0x174dfcu: goto label_174dfc;
        case 0x174e00u: goto label_174e00;
        case 0x174e04u: goto label_174e04;
        case 0x174e08u: goto label_174e08;
        case 0x174e0cu: goto label_174e0c;
        case 0x174e10u: goto label_174e10;
        case 0x174e14u: goto label_174e14;
        case 0x174e18u: goto label_174e18;
        case 0x174e1cu: goto label_174e1c;
        case 0x174e20u: goto label_174e20;
        case 0x174e24u: goto label_174e24;
        case 0x174e28u: goto label_174e28;
        case 0x174e2cu: goto label_174e2c;
        case 0x174e30u: goto label_174e30;
        case 0x174e34u: goto label_174e34;
        case 0x174e38u: goto label_174e38;
        case 0x174e3cu: goto label_174e3c;
        case 0x174e40u: goto label_174e40;
        case 0x174e44u: goto label_174e44;
        case 0x174e48u: goto label_174e48;
        case 0x174e4cu: goto label_174e4c;
        case 0x174e50u: goto label_174e50;
        case 0x174e54u: goto label_174e54;
        case 0x174e58u: goto label_174e58;
        case 0x174e5cu: goto label_174e5c;
        case 0x174e60u: goto label_174e60;
        case 0x174e64u: goto label_174e64;
        case 0x174e68u: goto label_174e68;
        case 0x174e6cu: goto label_174e6c;
        case 0x174e70u: goto label_174e70;
        case 0x174e74u: goto label_174e74;
        case 0x174e78u: goto label_174e78;
        case 0x174e7cu: goto label_174e7c;
        case 0x174e80u: goto label_174e80;
        case 0x174e84u: goto label_174e84;
        case 0x174e88u: goto label_174e88;
        case 0x174e8cu: goto label_174e8c;
        case 0x174e90u: goto label_174e90;
        case 0x174e94u: goto label_174e94;
        case 0x174e98u: goto label_174e98;
        case 0x174e9cu: goto label_174e9c;
        case 0x174ea0u: goto label_174ea0;
        case 0x174ea4u: goto label_174ea4;
        case 0x174ea8u: goto label_174ea8;
        case 0x174eacu: goto label_174eac;
        case 0x174eb0u: goto label_174eb0;
        case 0x174eb4u: goto label_174eb4;
        case 0x174eb8u: goto label_174eb8;
        case 0x174ebcu: goto label_174ebc;
        case 0x174ec0u: goto label_174ec0;
        case 0x174ec4u: goto label_174ec4;
        case 0x174ec8u: goto label_174ec8;
        case 0x174eccu: goto label_174ecc;
        case 0x174ed0u: goto label_174ed0;
        case 0x174ed4u: goto label_174ed4;
        case 0x174ed8u: goto label_174ed8;
        case 0x174edcu: goto label_174edc;
        case 0x174ee0u: goto label_174ee0;
        case 0x174ee4u: goto label_174ee4;
        case 0x174ee8u: goto label_174ee8;
        case 0x174eecu: goto label_174eec;
        case 0x174ef0u: goto label_174ef0;
        case 0x174ef4u: goto label_174ef4;
        case 0x174ef8u: goto label_174ef8;
        case 0x174efcu: goto label_174efc;
        case 0x174f00u: goto label_174f00;
        case 0x174f04u: goto label_174f04;
        case 0x174f08u: goto label_174f08;
        case 0x174f0cu: goto label_174f0c;
        case 0x174f10u: goto label_174f10;
        case 0x174f14u: goto label_174f14;
        case 0x174f18u: goto label_174f18;
        case 0x174f1cu: goto label_174f1c;
        case 0x174f20u: goto label_174f20;
        case 0x174f24u: goto label_174f24;
        case 0x174f28u: goto label_174f28;
        case 0x174f2cu: goto label_174f2c;
        case 0x174f30u: goto label_174f30;
        case 0x174f34u: goto label_174f34;
        case 0x174f38u: goto label_174f38;
        case 0x174f3cu: goto label_174f3c;
        case 0x174f40u: goto label_174f40;
        case 0x174f44u: goto label_174f44;
        case 0x174f48u: goto label_174f48;
        case 0x174f4cu: goto label_174f4c;
        case 0x174f50u: goto label_174f50;
        case 0x174f54u: goto label_174f54;
        case 0x174f58u: goto label_174f58;
        case 0x174f5cu: goto label_174f5c;
        case 0x174f60u: goto label_174f60;
        case 0x174f64u: goto label_174f64;
        case 0x174f68u: goto label_174f68;
        case 0x174f6cu: goto label_174f6c;
        case 0x174f70u: goto label_174f70;
        case 0x174f74u: goto label_174f74;
        case 0x174f78u: goto label_174f78;
        case 0x174f7cu: goto label_174f7c;
        case 0x174f80u: goto label_174f80;
        case 0x174f84u: goto label_174f84;
        case 0x174f88u: goto label_174f88;
        case 0x174f8cu: goto label_174f8c;
        case 0x174f90u: goto label_174f90;
        case 0x174f94u: goto label_174f94;
        case 0x174f98u: goto label_174f98;
        case 0x174f9cu: goto label_174f9c;
        case 0x174fa0u: goto label_174fa0;
        case 0x174fa4u: goto label_174fa4;
        case 0x174fa8u: goto label_174fa8;
        case 0x174facu: goto label_174fac;
        default: break;
    }

    ctx->pc = 0x174c88u;

label_174c88:
    // 0x174c88: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x174c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_174c8c:
    // 0x174c8c: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x174c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_174c90:
    // 0x174c90: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x174c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_174c94:
    // 0x174c94: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x174c94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_174c98:
    // 0x174c98: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x174c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_174c9c:
    // 0x174c9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x174c9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_174ca0:
    // 0x174ca0: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x174ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_174ca4:
    // 0x174ca4: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x174ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_174ca8:
    // 0x174ca8: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x174ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_174cac:
    // 0x174cac: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x174cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_174cb0:
    // 0x174cb0: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x174cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_174cb4:
    // 0x174cb4: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x174cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_174cb8:
    // 0x174cb8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x174cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_174cbc:
    // 0x174cbc: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x174cbcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_174cc0:
    // 0x174cc0: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x174cc0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_174cc4:
    // 0x174cc4: 0x922302f5  lbu         $v1, 0x2F5($s1)
    ctx->pc = 0x174cc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
label_174cc8:
    // 0x174cc8: 0x10700036  beq         $v1, $s0, . + 4 + (0x36 << 2)
label_174ccc:
    if (ctx->pc == 0x174CCCu) {
        ctx->pc = 0x174CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174CC8u;
        // 0x174ccc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x174CD0u;
        goto label_174cd0;
    }
    ctx->pc = 0x174CC8u;
    {
        const bool branch_taken_0x174cc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x174CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174CC8u;
        // 0x174ccc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x174cc8) {
            ctx->pc = 0x174DA4u;
            goto label_174da4;
        }
    }
    ctx->pc = 0x174CD0u;
label_174cd0:
    // 0x174cd0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_174cd4:
    if (ctx->pc == 0x174CD4u) {
        ctx->pc = 0x174CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174CD0u;
        // 0x174cd4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174CD8u;
        goto label_174cd8;
    }
    ctx->pc = 0x174CD0u;
    {
        const bool branch_taken_0x174cd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174CD0u;
        // 0x174cd4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174cd0) {
            ctx->pc = 0x174CE8u;
            goto label_174ce8;
        }
    }
    ctx->pc = 0x174CD8u;
label_174cd8:
    // 0x174cd8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_174cdc:
    if (ctx->pc == 0x174CDCu) {
        ctx->pc = 0x174CE0u;
        goto label_174ce0;
    }
    ctx->pc = 0x174CD8u;
    {
        const bool branch_taken_0x174cd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x174cd8) {
            ctx->pc = 0x174D00u;
            goto label_174d00;
        }
    }
    ctx->pc = 0x174CE0u;
label_174ce0:
    // 0x174ce0: 0x1000004f  b           . + 4 + (0x4F << 2)
label_174ce4:
    if (ctx->pc == 0x174CE4u) {
        ctx->pc = 0x174CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174CE0u;
        // 0x174ce4: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174CE8u;
        goto label_174ce8;
    }
    ctx->pc = 0x174CE0u;
    {
        const bool branch_taken_0x174ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174CE0u;
        // 0x174ce4: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174ce0) {
            ctx->pc = 0x174E20u;
            goto label_174e20;
        }
    }
    ctx->pc = 0x174CE8u;
label_174ce8:
    // 0x174ce8: 0x10620038  beq         $v1, $v0, . + 4 + (0x38 << 2)
label_174cec:
    if (ctx->pc == 0x174CECu) {
        ctx->pc = 0x174CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174CE8u;
        // 0x174cec: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174CF0u;
        goto label_174cf0;
    }
    ctx->pc = 0x174CE8u;
    {
        const bool branch_taken_0x174ce8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x174CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174CE8u;
        // 0x174cec: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174ce8) {
            ctx->pc = 0x174DCCu;
            goto label_174dcc;
        }
    }
    ctx->pc = 0x174CF0u;
label_174cf0:
    // 0x174cf0: 0x50620047  beql        $v1, $v0, . + 4 + (0x47 << 2)
label_174cf4:
    if (ctx->pc == 0x174CF4u) {
        ctx->pc = 0x174CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174CF0u;
        // 0x174cf4: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174CF8u;
        goto label_174cf8;
    }
    ctx->pc = 0x174CF0u;
    {
        const bool branch_taken_0x174cf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x174cf0) {
            ctx->pc = 0x174CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x174CF0u;
            // 0x174cf4: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x174E10u;
            goto label_174e10;
        }
    }
    ctx->pc = 0x174CF8u;
label_174cf8:
    // 0x174cf8: 0x10000049  b           . + 4 + (0x49 << 2)
label_174cfc:
    if (ctx->pc == 0x174CFCu) {
        ctx->pc = 0x174CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174CF8u;
        // 0x174cfc: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174D00u;
        goto label_174d00;
    }
    ctx->pc = 0x174CF8u;
    {
        const bool branch_taken_0x174cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174CF8u;
        // 0x174cfc: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174cf8) {
            ctx->pc = 0x174E20u;
            goto label_174e20;
        }
    }
    ctx->pc = 0x174D00u;
label_174d00:
    // 0x174d00: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x174d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_174d04:
    // 0x174d04: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x174d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_174d08:
    // 0x174d08: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x174d08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_174d0c:
    // 0x174d0c: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x174d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_174d10:
    // 0x174d10: 0x40f809  jalr        $v0
label_174d14:
    if (ctx->pc == 0x174D14u) {
        ctx->pc = 0x174D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174D10u;
        // 0x174d14: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174D18u;
        goto label_174d18;
    }
    ctx->pc = 0x174D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x174D18u);
        ctx->pc = 0x174D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174D10u;
        // 0x174d14: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174D10u, 0x174D18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x174D18u;
label_174d18:
    // 0x174d18: 0x13a20007  beq         $sp, $v0, . + 4 + (0x7 << 2)
label_174d1c:
    if (ctx->pc == 0x174D1Cu) {
        ctx->pc = 0x174D20u;
        goto label_174d20;
    }
    ctx->pc = 0x174D18u;
    {
        const bool branch_taken_0x174d18 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x174d18) {
            ctx->pc = 0x174D38u;
            goto label_174d38;
        }
    }
    ctx->pc = 0x174D20u;
label_174d20:
    // 0x174d20: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x174d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_174d24:
    // 0x174d24: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x174d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_174d28:
    // 0x174d28: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x174d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_174d2c:
    // 0x174d2c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x174d2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_174d30:
    // 0x174d30: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x174d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_174d34:
    // 0x174d34: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x174d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_174d38:
    // 0x174d38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x174d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_174d3c:
    // 0x174d3c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x174d3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_174d40:
    // 0x174d40: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x174d40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_174d44:
    // 0x174d44: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x174d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174d48:
    // 0x174d48: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x174d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_174d4c:
    // 0x174d4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x174d4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174d50:
    // 0x174d50: 0xc0c1a0e  jal         func_306838
label_174d54:
    if (ctx->pc == 0x174D54u) {
        ctx->pc = 0x174D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174D50u;
        // 0x174d54: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174D58u;
        goto label_174d58;
    }
    ctx->pc = 0x174D50u;
    SET_GPR_U32(ctx, 31, 0x174D58u);
    ctx->pc = 0x174D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174D50u;
    // 0x174d54: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x174D50u, 0x174D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174D58u;
label_174d58:
    // 0x174d58: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x174d58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_174d5c:
    // 0x174d5c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x174d5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174d60:
    // 0x174d60: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x174d60u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174d64:
    // 0x174d64: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x174d64u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174d68:
    // 0x174d68: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x174d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_174d6c:
    // 0x174d6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x174d6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174d70:
    // 0x174d70: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x174d70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_174d74:
    // 0x174d74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x174d74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174d78:
    // 0x174d78: 0xc0b2e92  jal         func_2CBA48
label_174d7c:
    if (ctx->pc == 0x174D7Cu) {
        ctx->pc = 0x174D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174D78u;
        // 0x174d7c: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174D80u;
        goto label_174d80;
    }
    ctx->pc = 0x174D78u;
    SET_GPR_U32(ctx, 31, 0x174D80u);
    ctx->pc = 0x174D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174D78u;
    // 0x174d7c: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x174D78u, 0x174D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174D80u;
label_174d80:
    // 0x174d80: 0xc05d488  jal         func_175220
label_174d84:
    if (ctx->pc == 0x174D84u) {
        ctx->pc = 0x174D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174D80u;
        // 0x174d84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174D88u;
        goto label_174d88;
    }
    ctx->pc = 0x174D80u;
    SET_GPR_U32(ctx, 31, 0x174D88u);
    ctx->pc = 0x174D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174D80u;
    // 0x174d84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175220u, 0x174D80u, 0x174D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174D88u;
label_174d88:
    // 0x174d88: 0xc06de42  jal         func_1B7908
label_174d8c:
    if (ctx->pc == 0x174D8Cu) {
        ctx->pc = 0x174D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174D88u;
        // 0x174d8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174D90u;
        goto label_174d90;
    }
    ctx->pc = 0x174D88u;
    SET_GPR_U32(ctx, 31, 0x174D90u);
    ctx->pc = 0x174D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174D88u;
    // 0x174d8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7908u, 0x174D88u, 0x174D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174D90u;
label_174d90:
    // 0x174d90: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x174d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_174d94:
    // 0x174d94: 0xa23002f5  sb          $s0, 0x2F5($s1)
    ctx->pc = 0x174d94u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 16));
label_174d98:
    // 0x174d98: 0xa6220654  sh          $v0, 0x654($s1)
    ctx->pc = 0x174d98u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
label_174d9c:
    // 0x174d9c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x174d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_174da0:
    // 0x174da0: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x174da0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_174da4:
    // 0x174da4: 0x96220654  lhu         $v0, 0x654($s1)
    ctx->pc = 0x174da4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1620)));
label_174da8:
    // 0x174da8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x174da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_174dac:
    // 0x174dac: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x174dacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_174db0:
    // 0x174db0: 0x1c60001a  bgtz        $v1, . + 4 + (0x1A << 2)
label_174db4:
    if (ctx->pc == 0x174DB4u) {
        ctx->pc = 0x174DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174DB0u;
        // 0x174db4: 0xa6220654  sh          $v0, 0x654($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174DB8u;
        goto label_174db8;
    }
    ctx->pc = 0x174DB0u;
    {
        const bool branch_taken_0x174db0 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x174DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174DB0u;
        // 0x174db4: 0xa6220654  sh          $v0, 0x654($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174db0) {
            ctx->pc = 0x174E1Cu;
            goto label_174e1c;
        }
    }
    ctx->pc = 0x174DB8u;
label_174db8:
    // 0x174db8: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x174db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_174dbc:
    // 0x174dbc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x174dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_174dc0:
    // 0x174dc0: 0xa6220654  sh          $v0, 0x654($s1)
    ctx->pc = 0x174dc0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
label_174dc4:
    // 0x174dc4: 0x10000013  b           . + 4 + (0x13 << 2)
label_174dc8:
    if (ctx->pc == 0x174DC8u) {
        ctx->pc = 0x174DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174DC4u;
        // 0x174dc8: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174DCCu;
        goto label_174dcc;
    }
    ctx->pc = 0x174DC4u;
    {
        const bool branch_taken_0x174dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174DC4u;
        // 0x174dc8: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174dc4) {
            ctx->pc = 0x174E14u;
            goto label_174e14;
        }
    }
    ctx->pc = 0x174DCCu;
label_174dcc:
    // 0x174dcc: 0x96220654  lhu         $v0, 0x654($s1)
    ctx->pc = 0x174dccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1620)));
label_174dd0:
    // 0x174dd0: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x174dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_174dd4:
    // 0x174dd4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x174dd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_174dd8:
    // 0x174dd8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x174dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_174ddc:
    // 0x174ddc: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x174ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_174de0:
    // 0x174de0: 0xa6220654  sh          $v0, 0x654($s1)
    ctx->pc = 0x174de0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
label_174de4:
    // 0x174de4: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x174de4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_174de8:
    // 0x174de8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x174de8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_174dec:
    // 0x174dec: 0x0  nop
    ctx->pc = 0x174decu;
    // NOP
label_174df0:
    // 0x174df0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x174df0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_174df4:
    // 0x174df4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x174df4u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
label_174df8:
    // 0x174df8: 0x1c600008  bgtz        $v1, . + 4 + (0x8 << 2)
label_174dfc:
    if (ctx->pc == 0x174DFCu) {
        ctx->pc = 0x174DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174DF8u;
        // 0x174dfc: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x174E00u;
        goto label_174e00;
    }
    ctx->pc = 0x174DF8u;
    {
        const bool branch_taken_0x174df8 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x174DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174DF8u;
        // 0x174dfc: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x174df8) {
            ctx->pc = 0x174E1Cu;
            goto label_174e1c;
        }
    }
    ctx->pc = 0x174E00u;
label_174e00:
    // 0x174e00: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x174e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_174e04:
    // 0x174e04: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x174e04u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_174e08:
    // 0x174e08: 0x10000003  b           . + 4 + (0x3 << 2)
label_174e0c:
    if (ctx->pc == 0x174E0Cu) {
        ctx->pc = 0x174E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174E08u;
        // 0x174e0c: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174E10u;
        goto label_174e10;
    }
    ctx->pc = 0x174E08u;
    {
        const bool branch_taken_0x174e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174E08u;
        // 0x174e0c: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174e08) {
            ctx->pc = 0x174E18u;
            goto label_174e18;
        }
    }
    ctx->pc = 0x174E10u;
label_174e10:
    // 0x174e10: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x174e10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
label_174e14:
    // 0x174e14: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x174e14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_174e18:
    // 0x174e18: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x174e18u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_174e1c:
    // 0x174e1c: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x174e1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_174e20:
    // 0x174e20: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x174e20u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_174e24:
    // 0x174e24: 0x10560053  beq         $v0, $s6, . + 4 + (0x53 << 2)
label_174e28:
    if (ctx->pc == 0x174E28u) {
        ctx->pc = 0x174E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174E24u;
        // 0x174e28: 0x27be0020  addiu       $fp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174E2Cu;
        goto label_174e2c;
    }
    ctx->pc = 0x174E24u;
    {
        const bool branch_taken_0x174e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x174E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174E24u;
        // 0x174e28: 0x27be0020  addiu       $fp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174e24) {
            ctx->pc = 0x174F74u;
            goto label_174f74;
        }
    }
    ctx->pc = 0x174E2Cu;
label_174e2c:
    // 0x174e2c: 0x3c01c47a  lui         $at, 0xC47A
    ctx->pc = 0x174e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50298 << 16));
label_174e30:
    // 0x174e30: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x174e30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_174e34:
    // 0x174e34: 0x27b70010  addiu       $s7, $sp, 0x10
    ctx->pc = 0x174e34u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_174e38:
    // 0x174e38: 0x26350700  addiu       $s5, $s1, 0x700
    ctx->pc = 0x174e38u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 1792));
label_174e3c:
    // 0x174e3c: 0x263006d0  addiu       $s0, $s1, 0x6D0
    ctx->pc = 0x174e3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1744));
label_174e40:
    // 0x174e40: 0x263406f0  addiu       $s4, $s1, 0x6F0
    ctx->pc = 0x174e40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
label_174e44:
    // 0x174e44: 0x263306e0  addiu       $s3, $s1, 0x6E0
    ctx->pc = 0x174e44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1760));
label_174e48:
    // 0x174e48: 0x263206c0  addiu       $s2, $s1, 0x6C0
    ctx->pc = 0x174e48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1728));
label_174e4c:
    // 0x174e4c: 0x0  nop
    ctx->pc = 0x174e4cu;
    // NOP
label_174e50:
    // 0x174e50: 0xc05ce40  jal         func_173900
label_174e54:
    if (ctx->pc == 0x174E54u) {
        ctx->pc = 0x174E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174E50u;
        // 0x174e54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174E58u;
        goto label_174e58;
    }
    ctx->pc = 0x174E50u;
    SET_GPR_U32(ctx, 31, 0x174E58u);
    ctx->pc = 0x174E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174E50u;
    // 0x174e54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173900u, 0x174E50u, 0x174E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174E58u;
label_174e58:
    // 0x174e58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x174e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_174e5c:
    // 0x174e5c: 0x5443003b  bnel        $v0, $v1, . + 4 + (0x3B << 2)
label_174e60:
    if (ctx->pc == 0x174E60u) {
        ctx->pc = 0x174E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174E5Cu;
        // 0x174e60: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174E64u;
        goto label_174e64;
    }
    ctx->pc = 0x174E5Cu;
    {
        const bool branch_taken_0x174e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x174e5c) {
            ctx->pc = 0x174E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x174E5Cu;
            // 0x174e60: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x174F4Cu;
            goto label_174f4c;
        }
    }
    ctx->pc = 0x174E64u;
label_174e64:
    // 0x174e64: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x174e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_174e68:
    // 0x174e68: 0xc0a4bd4  jal         func_292F50
label_174e6c:
    if (ctx->pc == 0x174E6Cu) {
        ctx->pc = 0x174E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174E68u;
        // 0x174e6c: 0x244464f0  addiu       $a0, $v0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174E70u;
        goto label_174e70;
    }
    ctx->pc = 0x174E68u;
    SET_GPR_U32(ctx, 31, 0x174E70u);
    ctx->pc = 0x174E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174E68u;
    // 0x174e6c: 0x244464f0  addiu       $a0, $v0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x174E68u, 0x174E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174E70u;
label_174e70:
    // 0x174e70: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x174e70u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_174e74:
    // 0x174e74: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x174e74u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_174e78:
    // 0x174e78: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x174e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_174e7c:
    // 0x174e7c: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x174e7cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_174e80:
    // 0x174e80: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x174e80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_174e84:
    // 0x174e84: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x174e84u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_174e88:
    // 0x174e88: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x174e88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_174e8c:
    // 0x174e8c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x174e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_174e90:
    // 0x174e90: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x174e90u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_174e94:
    // 0x174e94: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x174e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_174e98:
    // 0x174e98: 0xda04fff0  lqc2        $vf4, -0x10($s0)
    ctx->pc = 0x174e98u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 4294967280)));
label_174e9c:
    // 0x174e9c: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x174e9cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_174ea0:
    // 0x174ea0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x174ea0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_174ea4:
    // 0x174ea4: 0xfa04fff0  sqc2        $vf4, -0x10($s0)
    ctx->pc = 0x174ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4294967280), _mm_castps_si128(ctx->vu0_vf[4]));
label_174ea8:
    // 0x174ea8: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x174ea8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_174eac:
    // 0x174eac: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x174eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_174eb0:
    // 0x174eb0: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x174eb0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_174eb4:
    // 0x174eb4: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x174eb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_174eb8:
    // 0x174eb8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x174eb8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_174ebc:
    // 0x174ebc: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x174ebcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_174ec0:
    // 0x174ec0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x174ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_174ec4:
    // 0x174ec4: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x174ec4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_174ec8:
    // 0x174ec8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x174ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_174ecc:
    // 0x174ecc: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x174eccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_174ed0:
    // 0x174ed0: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x174ed0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_174ed4:
    // 0x174ed4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x174ed4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_174ed8:
    // 0x174ed8: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x174ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_174edc:
    // 0x174edc: 0xc07df68  jal         func_1F7DA0
label_174ee0:
    if (ctx->pc == 0x174EE0u) {
        ctx->pc = 0x174EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174EDCu;
        // 0x174ee0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174EE4u;
        goto label_174ee4;
    }
    ctx->pc = 0x174EDCu;
    SET_GPR_U32(ctx, 31, 0x174EE4u);
    ctx->pc = 0x174EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174EDCu;
    // 0x174ee0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x174EDCu, 0x174EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174EE4u;
label_174ee4:
    // 0x174ee4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x174ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_174ee8:
    // 0x174ee8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x174ee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174eec:
    // 0x174eec: 0xc051dca  jal         func_147728
label_174ef0:
    if (ctx->pc == 0x174EF0u) {
        ctx->pc = 0x174EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174EECu;
        // 0x174ef0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174EF4u;
        goto label_174ef4;
    }
    ctx->pc = 0x174EECu;
    SET_GPR_U32(ctx, 31, 0x174EF4u);
    ctx->pc = 0x174EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174EECu;
    // 0x174ef0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x174EECu, 0x174EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174EF4u;
label_174ef4:
    // 0x174ef4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x174ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_174ef8:
    // 0x174ef8: 0xc051f10  jal         func_147C40
label_174efc:
    if (ctx->pc == 0x174EFCu) {
        ctx->pc = 0x174EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174EF8u;
        // 0x174efc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174F00u;
        goto label_174f00;
    }
    ctx->pc = 0x174EF8u;
    SET_GPR_U32(ctx, 31, 0x174F00u);
    ctx->pc = 0x174EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174EF8u;
    // 0x174efc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x174EF8u, 0x174F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174F00u;
label_174f00:
    // 0x174f00: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x174f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_174f04:
    // 0x174f04: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x174f04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_174f08:
    // 0x174f08: 0xc051efe  jal         func_147BF8
label_174f0c:
    if (ctx->pc == 0x174F0Cu) {
        ctx->pc = 0x174F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174F08u;
        // 0x174f0c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174F10u;
        goto label_174f10;
    }
    ctx->pc = 0x174F08u;
    SET_GPR_U32(ctx, 31, 0x174F10u);
    ctx->pc = 0x174F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174F08u;
    // 0x174f0c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147BF8u, 0x174F08u, 0x174F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174F10u;
label_174f10:
    // 0x174f10: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x174f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_174f14:
    // 0x174f14: 0xc051d4a  jal         func_147528
label_174f18:
    if (ctx->pc == 0x174F18u) {
        ctx->pc = 0x174F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174F14u;
        // 0x174f18: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174F1Cu;
        goto label_174f1c;
    }
    ctx->pc = 0x174F14u;
    SET_GPR_U32(ctx, 31, 0x174F1Cu);
    ctx->pc = 0x174F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174F14u;
    // 0x174f18: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x174F14u, 0x174F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174F1Cu;
label_174f1c:
    // 0x174f1c: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x174f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_174f20:
    // 0x174f20: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x174f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_174f24:
    // 0x174f24: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x174f24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_174f28:
    // 0x174f28: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x174f28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_174f2c:
    // 0x174f2c: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x174f2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_174f30:
    // 0x174f30: 0x0  nop
    ctx->pc = 0x174f30u;
    // NOP
label_174f34:
    // 0x174f34: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_174f38:
    if (ctx->pc == 0x174F38u) {
        ctx->pc = 0x174F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174F34u;
        // 0x174f38: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x174F3Cu;
        goto label_174f3c;
    }
    ctx->pc = 0x174F34u;
    {
        const bool branch_taken_0x174f34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x174F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174F34u;
        // 0x174f38: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x174f34) {
            ctx->pc = 0x174F48u;
            goto label_174f48;
        }
    }
    ctx->pc = 0x174F3Cu;
label_174f3c:
    // 0x174f3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x174f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_174f40:
    // 0x174f40: 0xc05bd90  jal         func_16F640
label_174f44:
    if (ctx->pc == 0x174F44u) {
        ctx->pc = 0x174F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174F40u;
        // 0x174f44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174F48u;
        goto label_174f48;
    }
    ctx->pc = 0x174F40u;
    SET_GPR_U32(ctx, 31, 0x174F48u);
    ctx->pc = 0x174F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174F40u;
    // 0x174f44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x174F40u, 0x174F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174F48u;
label_174f48:
    // 0x174f48: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x174f48u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_174f4c:
    // 0x174f4c: 0x26b50060  addiu       $s5, $s5, 0x60
    ctx->pc = 0x174f4cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_174f50:
    // 0x174f50: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x174f50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_174f54:
    // 0x174f54: 0x26940060  addiu       $s4, $s4, 0x60
    ctx->pc = 0x174f54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
label_174f58:
    // 0x174f58: 0x26730060  addiu       $s3, $s3, 0x60
    ctx->pc = 0x174f58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_174f5c:
    // 0x174f5c: 0x2ac2000d  slti        $v0, $s6, 0xD
    ctx->pc = 0x174f5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)13) ? 1 : 0);
label_174f60:
    // 0x174f60: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_174f64:
    if (ctx->pc == 0x174F64u) {
        ctx->pc = 0x174F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174F60u;
        // 0x174f64: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174F68u;
        goto label_174f68;
    }
    ctx->pc = 0x174F60u;
    {
        const bool branch_taken_0x174f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174F60u;
        // 0x174f64: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174f60) {
            ctx->pc = 0x174F74u;
            goto label_174f74;
        }
    }
    ctx->pc = 0x174F68u;
label_174f68:
    // 0x174f68: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x174f68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_174f6c:
    // 0x174f6c: 0x1456ffb8  bne         $v0, $s6, . + 4 + (-0x48 << 2)
label_174f70:
    if (ctx->pc == 0x174F70u) {
        ctx->pc = 0x174F74u;
        goto label_174f74;
    }
    ctx->pc = 0x174F6Cu;
    {
        const bool branch_taken_0x174f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x174f6c) {
            ctx->pc = 0x174E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174e50;
        }
    }
    ctx->pc = 0x174F74u;
label_174f74:
    // 0x174f74: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x174f74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_174f78:
    // 0x174f78: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x174f78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_174f7c:
    // 0x174f7c: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x174f7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_174f80:
    // 0x174f80: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x174f80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_174f84:
    // 0x174f84: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x174f84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_174f88:
    // 0x174f88: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x174f88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_174f8c:
    // 0x174f8c: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x174f8cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_174f90:
    // 0x174f90: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x174f90u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_174f94:
    // 0x174f94: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x174f94u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_174f98:
    // 0x174f98: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x174f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_174f9c:
    // 0x174f9c: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x174f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_174fa0:
    // 0x174fa0: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x174fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_174fa4:
    // 0x174fa4: 0x3e00008  jr          $ra
label_174fa8:
    if (ctx->pc == 0x174FA8u) {
        ctx->pc = 0x174FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174FA4u;
        // 0x174fa8: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174FACu;
        goto label_174fac;
    }
    ctx->pc = 0x174FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174FA4u;
        // 0x174fa8: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174FACu;
label_174fac:
    // 0x174fac: 0x0  nop
    ctx->pc = 0x174facu;
    // NOP
    ctx->pc = 0x174fb0u;
}
