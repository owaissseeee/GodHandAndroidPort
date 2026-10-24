#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r608_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r608
{
// Function: func_00799B88
// Address: 0x799b88 - 0x799ec8
void func_00799B88_0x799b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799B88_0x799b88");
#endif

    switch (ctx->pc) {
        case 0x799b88u: goto label_799b88;
        case 0x799b8cu: goto label_799b8c;
        case 0x799b90u: goto label_799b90;
        case 0x799b94u: goto label_799b94;
        case 0x799b98u: goto label_799b98;
        case 0x799b9cu: goto label_799b9c;
        case 0x799ba0u: goto label_799ba0;
        case 0x799ba4u: goto label_799ba4;
        case 0x799ba8u: goto label_799ba8;
        case 0x799bacu: goto label_799bac;
        case 0x799bb0u: goto label_799bb0;
        case 0x799bb4u: goto label_799bb4;
        case 0x799bb8u: goto label_799bb8;
        case 0x799bbcu: goto label_799bbc;
        case 0x799bc0u: goto label_799bc0;
        case 0x799bc4u: goto label_799bc4;
        case 0x799bc8u: goto label_799bc8;
        case 0x799bccu: goto label_799bcc;
        case 0x799bd0u: goto label_799bd0;
        case 0x799bd4u: goto label_799bd4;
        case 0x799bd8u: goto label_799bd8;
        case 0x799bdcu: goto label_799bdc;
        case 0x799be0u: goto label_799be0;
        case 0x799be4u: goto label_799be4;
        case 0x799be8u: goto label_799be8;
        case 0x799becu: goto label_799bec;
        case 0x799bf0u: goto label_799bf0;
        case 0x799bf4u: goto label_799bf4;
        case 0x799bf8u: goto label_799bf8;
        case 0x799bfcu: goto label_799bfc;
        case 0x799c00u: goto label_799c00;
        case 0x799c04u: goto label_799c04;
        case 0x799c08u: goto label_799c08;
        case 0x799c0cu: goto label_799c0c;
        case 0x799c10u: goto label_799c10;
        case 0x799c14u: goto label_799c14;
        case 0x799c18u: goto label_799c18;
        case 0x799c1cu: goto label_799c1c;
        case 0x799c20u: goto label_799c20;
        case 0x799c24u: goto label_799c24;
        case 0x799c28u: goto label_799c28;
        case 0x799c2cu: goto label_799c2c;
        case 0x799c30u: goto label_799c30;
        case 0x799c34u: goto label_799c34;
        case 0x799c38u: goto label_799c38;
        case 0x799c3cu: goto label_799c3c;
        case 0x799c40u: goto label_799c40;
        case 0x799c44u: goto label_799c44;
        case 0x799c48u: goto label_799c48;
        case 0x799c4cu: goto label_799c4c;
        case 0x799c50u: goto label_799c50;
        case 0x799c54u: goto label_799c54;
        case 0x799c58u: goto label_799c58;
        case 0x799c5cu: goto label_799c5c;
        case 0x799c60u: goto label_799c60;
        case 0x799c64u: goto label_799c64;
        case 0x799c68u: goto label_799c68;
        case 0x799c6cu: goto label_799c6c;
        case 0x799c70u: goto label_799c70;
        case 0x799c74u: goto label_799c74;
        case 0x799c78u: goto label_799c78;
        case 0x799c7cu: goto label_799c7c;
        case 0x799c80u: goto label_799c80;
        case 0x799c84u: goto label_799c84;
        case 0x799c88u: goto label_799c88;
        case 0x799c8cu: goto label_799c8c;
        case 0x799c90u: goto label_799c90;
        case 0x799c94u: goto label_799c94;
        case 0x799c98u: goto label_799c98;
        case 0x799c9cu: goto label_799c9c;
        case 0x799ca0u: goto label_799ca0;
        case 0x799ca4u: goto label_799ca4;
        case 0x799ca8u: goto label_799ca8;
        case 0x799cacu: goto label_799cac;
        case 0x799cb0u: goto label_799cb0;
        case 0x799cb4u: goto label_799cb4;
        case 0x799cb8u: goto label_799cb8;
        case 0x799cbcu: goto label_799cbc;
        case 0x799cc0u: goto label_799cc0;
        case 0x799cc4u: goto label_799cc4;
        case 0x799cc8u: goto label_799cc8;
        case 0x799cccu: goto label_799ccc;
        case 0x799cd0u: goto label_799cd0;
        case 0x799cd4u: goto label_799cd4;
        case 0x799cd8u: goto label_799cd8;
        case 0x799cdcu: goto label_799cdc;
        case 0x799ce0u: goto label_799ce0;
        case 0x799ce4u: goto label_799ce4;
        case 0x799ce8u: goto label_799ce8;
        case 0x799cecu: goto label_799cec;
        case 0x799cf0u: goto label_799cf0;
        case 0x799cf4u: goto label_799cf4;
        case 0x799cf8u: goto label_799cf8;
        case 0x799cfcu: goto label_799cfc;
        case 0x799d00u: goto label_799d00;
        case 0x799d04u: goto label_799d04;
        case 0x799d08u: goto label_799d08;
        case 0x799d0cu: goto label_799d0c;
        case 0x799d10u: goto label_799d10;
        case 0x799d14u: goto label_799d14;
        case 0x799d18u: goto label_799d18;
        case 0x799d1cu: goto label_799d1c;
        case 0x799d20u: goto label_799d20;
        case 0x799d24u: goto label_799d24;
        case 0x799d28u: goto label_799d28;
        case 0x799d2cu: goto label_799d2c;
        case 0x799d30u: goto label_799d30;
        case 0x799d34u: goto label_799d34;
        case 0x799d38u: goto label_799d38;
        case 0x799d3cu: goto label_799d3c;
        case 0x799d40u: goto label_799d40;
        case 0x799d44u: goto label_799d44;
        case 0x799d48u: goto label_799d48;
        case 0x799d4cu: goto label_799d4c;
        case 0x799d50u: goto label_799d50;
        case 0x799d54u: goto label_799d54;
        case 0x799d58u: goto label_799d58;
        case 0x799d5cu: goto label_799d5c;
        case 0x799d60u: goto label_799d60;
        case 0x799d64u: goto label_799d64;
        case 0x799d68u: goto label_799d68;
        case 0x799d6cu: goto label_799d6c;
        case 0x799d70u: goto label_799d70;
        case 0x799d74u: goto label_799d74;
        case 0x799d78u: goto label_799d78;
        case 0x799d7cu: goto label_799d7c;
        case 0x799d80u: goto label_799d80;
        case 0x799d84u: goto label_799d84;
        case 0x799d88u: goto label_799d88;
        case 0x799d8cu: goto label_799d8c;
        case 0x799d90u: goto label_799d90;
        case 0x799d94u: goto label_799d94;
        case 0x799d98u: goto label_799d98;
        case 0x799d9cu: goto label_799d9c;
        case 0x799da0u: goto label_799da0;
        case 0x799da4u: goto label_799da4;
        case 0x799da8u: goto label_799da8;
        case 0x799dacu: goto label_799dac;
        case 0x799db0u: goto label_799db0;
        case 0x799db4u: goto label_799db4;
        case 0x799db8u: goto label_799db8;
        case 0x799dbcu: goto label_799dbc;
        case 0x799dc0u: goto label_799dc0;
        case 0x799dc4u: goto label_799dc4;
        case 0x799dc8u: goto label_799dc8;
        case 0x799dccu: goto label_799dcc;
        case 0x799dd0u: goto label_799dd0;
        case 0x799dd4u: goto label_799dd4;
        case 0x799dd8u: goto label_799dd8;
        case 0x799ddcu: goto label_799ddc;
        case 0x799de0u: goto label_799de0;
        case 0x799de4u: goto label_799de4;
        case 0x799de8u: goto label_799de8;
        case 0x799decu: goto label_799dec;
        case 0x799df0u: goto label_799df0;
        case 0x799df4u: goto label_799df4;
        case 0x799df8u: goto label_799df8;
        case 0x799dfcu: goto label_799dfc;
        case 0x799e00u: goto label_799e00;
        case 0x799e04u: goto label_799e04;
        case 0x799e08u: goto label_799e08;
        case 0x799e0cu: goto label_799e0c;
        case 0x799e10u: goto label_799e10;
        case 0x799e14u: goto label_799e14;
        case 0x799e18u: goto label_799e18;
        case 0x799e1cu: goto label_799e1c;
        case 0x799e20u: goto label_799e20;
        case 0x799e24u: goto label_799e24;
        case 0x799e28u: goto label_799e28;
        case 0x799e2cu: goto label_799e2c;
        case 0x799e30u: goto label_799e30;
        case 0x799e34u: goto label_799e34;
        case 0x799e38u: goto label_799e38;
        case 0x799e3cu: goto label_799e3c;
        case 0x799e40u: goto label_799e40;
        case 0x799e44u: goto label_799e44;
        case 0x799e48u: goto label_799e48;
        case 0x799e4cu: goto label_799e4c;
        case 0x799e50u: goto label_799e50;
        case 0x799e54u: goto label_799e54;
        case 0x799e58u: goto label_799e58;
        case 0x799e5cu: goto label_799e5c;
        case 0x799e60u: goto label_799e60;
        case 0x799e64u: goto label_799e64;
        case 0x799e68u: goto label_799e68;
        case 0x799e6cu: goto label_799e6c;
        case 0x799e70u: goto label_799e70;
        case 0x799e74u: goto label_799e74;
        case 0x799e78u: goto label_799e78;
        case 0x799e7cu: goto label_799e7c;
        case 0x799e80u: goto label_799e80;
        case 0x799e84u: goto label_799e84;
        case 0x799e88u: goto label_799e88;
        case 0x799e8cu: goto label_799e8c;
        case 0x799e90u: goto label_799e90;
        case 0x799e94u: goto label_799e94;
        case 0x799e98u: goto label_799e98;
        case 0x799e9cu: goto label_799e9c;
        case 0x799ea0u: goto label_799ea0;
        case 0x799ea4u: goto label_799ea4;
        case 0x799ea8u: goto label_799ea8;
        case 0x799eacu: goto label_799eac;
        case 0x799eb0u: goto label_799eb0;
        case 0x799eb4u: goto label_799eb4;
        case 0x799eb8u: goto label_799eb8;
        case 0x799ebcu: goto label_799ebc;
        case 0x799ec0u: goto label_799ec0;
        case 0x799ec4u: goto label_799ec4;
        default: break;
    }

    ctx->pc = 0x799b88u;

label_799b88:
    // 0x799b88: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x799b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_799b8c:
    // 0x799b8c: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x799b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_799b90:
    // 0x799b90: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x799b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_799b94:
    // 0x799b94: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x799b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_799b98:
    // 0x799b98: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x799b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_799b9c:
    // 0x799b9c: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x799b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_799ba0:
    // 0x799ba0: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x799ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_799ba4:
    // 0x799ba4: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x799ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_799ba8:
    // 0x799ba8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x799ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_799bac:
    // 0x799bac: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x799bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_799bb0:
    // 0x799bb0: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x799bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_799bb4:
    // 0x799bb4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x799bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_799bb8:
    // 0x799bb8: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x799bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936152)));
label_799bbc:
    // 0x799bbc: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x799bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_799bc0:
    // 0x799bc0: 0x4810020  bgez        $a0, . + 4 + (0x20 << 2)
label_799bc4:
    if (ctx->pc == 0x799BC4u) {
        ctx->pc = 0x799BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BC0u;
        // 0x799bc4: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799BC8u;
        goto label_799bc8;
    }
    ctx->pc = 0x799BC0u;
    {
        const bool branch_taken_0x799bc0 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x799BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BC0u;
        // 0x799bc4: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bc0) {
            ctx->pc = 0x799C44u;
            goto label_799c44;
        }
    }
    ctx->pc = 0x799BC8u;
label_799bc8:
    // 0x799bc8: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_799bcc:
    // 0x799bcc: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x799bccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
label_799bd0:
    // 0x799bd0: 0x8044aff8  lb          $a0, -0x5008($v0)
    ctx->pc = 0x799bd0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294946808)));
label_799bd4:
    // 0x799bd4: 0x2446aff8  addiu       $a2, $v0, -0x5008
    ctx->pc = 0x799bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946808));
label_799bd8:
    // 0x799bd8: 0x24684c58  addiu       $t0, $v1, 0x4C58
    ctx->pc = 0x799bd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
label_799bdc:
    // 0x799bdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799be0:
    // 0x799be0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799be0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799be4:
    // 0x799be4: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_799be8:
    if (ctx->pc == 0x799BE8u) {
        ctx->pc = 0x799BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BE4u;
        // 0x799be8: 0x3c11007a  lui         $s1, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799BECu;
        goto label_799bec;
    }
    ctx->pc = 0x799BE4u;
    {
        const bool branch_taken_0x799be4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x799BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BE4u;
        // 0x799be8: 0x3c11007a  lui         $s1, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799be4) {
            ctx->pc = 0x799C18u;
            goto label_799c18;
        }
    }
    ctx->pc = 0x799BECu;
label_799bec:
    // 0x799bec: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799becu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799bf0:
    // 0x799bf0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_799bf4:
    // 0x799bf4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799bf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_799bf8:
    // 0x799bf8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_799bfc:
    // 0x799bfc: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_799c00:
    // 0x799c00: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799c00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_799c04:
    // 0x799c04: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_799c08:
    if (ctx->pc == 0x799C08u) {
        ctx->pc = 0x799C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C04u;
        // 0x799c08: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C0Cu;
        goto label_799c0c;
    }
    ctx->pc = 0x799C04u;
    {
        const bool branch_taken_0x799c04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C04u;
        // 0x799c08: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c04) {
            ctx->pc = 0x799C18u;
            goto label_799c18;
        }
    }
    ctx->pc = 0x799C0Cu;
label_799c0c:
    // 0x799c0c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799c0cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799c10:
    // 0x799c10: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_799c14:
    if (ctx->pc == 0x799C14u) {
        ctx->pc = 0x799C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C10u;
        // 0x799c14: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C18u;
        goto label_799c18;
    }
    ctx->pc = 0x799C10u;
    {
        const bool branch_taken_0x799c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799c10) {
            ctx->pc = 0x799C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799C10u;
            // 0x799c14: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799BF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799bf0;
        }
    }
    ctx->pc = 0x799C18u;
label_799c18:
    // 0x799c18: 0xc053f66  jal         func_14FD98
label_799c1c:
    if (ctx->pc == 0x799C1Cu) {
        ctx->pc = 0x799C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C18u;
        // 0x799c1c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C20u;
        goto label_799c20;
    }
    ctx->pc = 0x799C18u;
    SET_GPR_U32(ctx, 31, 0x799C20u);
    ctx->pc = 0x799C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C18u;
    // 0x799c1c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799C18u, 0x799C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C20u;
label_799c20:
    // 0x799c20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799c20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799c24:
    // 0x799c24: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_799c28:
    if (ctx->pc == 0x799C28u) {
        ctx->pc = 0x799C2Cu;
        goto label_799c2c;
    }
    ctx->pc = 0x799C24u;
    {
        const bool branch_taken_0x799c24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x799c24) {
            ctx->pc = 0x799C5Cu;
            goto label_799c5c;
        }
    }
    ctx->pc = 0x799C2Cu;
label_799c2c:
    // 0x799c2c: 0xc06b646  jal         func_1AD918
label_799c30:
    if (ctx->pc == 0x799C30u) {
        ctx->pc = 0x799C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C2Cu;
        // 0x799c30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C34u;
        goto label_799c34;
    }
    ctx->pc = 0x799C2Cu;
    SET_GPR_U32(ctx, 31, 0x799C34u);
    ctx->pc = 0x799C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C2Cu;
    // 0x799c30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD918u, 0x799C2Cu, 0x799C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C34u;
label_799c34:
    // 0x799c34: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x799c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
label_799c38:
    // 0x799c38: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x799c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_799c3c:
    // 0x799c3c: 0x10000007  b           . + 4 + (0x7 << 2)
label_799c40:
    if (ctx->pc == 0x799C40u) {
        ctx->pc = 0x799C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C3Cu;
        // 0x799c40: 0xae020250  sw          $v0, 0x250($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C44u;
        goto label_799c44;
    }
    ctx->pc = 0x799C3Cu;
    {
        const bool branch_taken_0x799c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C3Cu;
        // 0x799c40: 0xae020250  sw          $v0, 0x250($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c3c) {
            ctx->pc = 0x799C5Cu;
            goto label_799c5c;
        }
    }
    ctx->pc = 0x799C44u;
label_799c44:
    // 0x799c44: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799c44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
label_799c48:
    // 0x799c48: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x799c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
label_799c4c:
    // 0x799c4c: 0x24a5a2f0  addiu       $a1, $a1, -0x5D10
    ctx->pc = 0x799c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943472));
label_799c50:
    // 0x799c50: 0xc0b0e24  jal         func_2C3890
label_799c54:
    if (ctx->pc == 0x799C54u) {
        ctx->pc = 0x799C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C50u;
        // 0x799c54: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799C58u;
        goto label_799c58;
    }
    ctx->pc = 0x799C50u;
    SET_GPR_U32(ctx, 31, 0x799C58u);
    ctx->pc = 0x799C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C50u;
    // 0x799c54: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799C50u, 0x799C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C58u;
label_799c58:
    // 0x799c58: 0x3c11007a  lui         $s1, 0x7A
    ctx->pc = 0x799c58u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
label_799c5c:
    // 0x799c5c: 0x2625b018  addiu       $a1, $s1, -0x4FE8
    ctx->pc = 0x799c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294946840));
label_799c60:
    // 0x799c60: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x799c60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_799c64:
    // 0x799c64: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x799c64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_799c68:
    // 0x799c68: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x799c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_799c6c:
    // 0x799c6c: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x799c6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_799c70:
    // 0x799c70: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x799c70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_799c74:
    // 0x799c74: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x799c74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_799c78:
    // 0x799c78: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x799c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
label_799c7c:
    // 0x799c7c: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x799c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
label_799c80:
    // 0x799c80: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x799c80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799c84:
    // 0x799c84: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x799c84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_799c88:
    // 0x799c88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799c8c:
    // 0x799c8c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x799c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_799c90:
    // 0x799c90: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x799c90u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799c94:
    // 0x799c94: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x799c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_799c98:
    // 0x799c98: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x799c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_799c9c:
    // 0x799c9c: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x799c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_799ca0:
    // 0x799ca0: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x799ca0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_799ca4:
    // 0x799ca4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_799ca8:
    if (ctx->pc == 0x799CA8u) {
        ctx->pc = 0x799CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CA4u;
        // 0x799ca8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799CACu;
        goto label_799cac;
    }
    ctx->pc = 0x799CA4u;
    {
        const bool branch_taken_0x799ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CA4u;
        // 0x799ca8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ca4) {
            ctx->pc = 0x799CE0u;
            goto label_799ce0;
        }
    }
    ctx->pc = 0x799CACu;
label_799cac:
    // 0x799cac: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799cacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_799cb0:
    // 0x799cb0: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799cb0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799cb4:
    // 0x799cb4: 0x0  nop
    ctx->pc = 0x799cb4u;
    // NOP
label_799cb8:
    // 0x799cb8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_799cbc:
    // 0x799cbc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799cbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_799cc0:
    // 0x799cc0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_799cc4:
    // 0x799cc4: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_799cc8:
    // 0x799cc8: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799cc8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
label_799ccc:
    // 0x799ccc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_799cd0:
    if (ctx->pc == 0x799CD0u) {
        ctx->pc = 0x799CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CCCu;
        // 0x799cd0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799CD4u;
        goto label_799cd4;
    }
    ctx->pc = 0x799CCCu;
    {
        const bool branch_taken_0x799ccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CCCu;
        // 0x799cd0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ccc) {
            ctx->pc = 0x799CE0u;
            goto label_799ce0;
        }
    }
    ctx->pc = 0x799CD4u;
label_799cd4:
    // 0x799cd4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799cd4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799cd8:
    // 0x799cd8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_799cdc:
    if (ctx->pc == 0x799CDCu) {
        ctx->pc = 0x799CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CD8u;
        // 0x799cdc: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799CE0u;
        goto label_799ce0;
    }
    ctx->pc = 0x799CD8u;
    {
        const bool branch_taken_0x799cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799cd8) {
            ctx->pc = 0x799CDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799CD8u;
            // 0x799cdc: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799cb8;
        }
    }
    ctx->pc = 0x799CE0u;
label_799ce0:
    // 0x799ce0: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x799ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
label_799ce4:
    // 0x799ce4: 0x24844c58  addiu       $a0, $a0, 0x4C58
    ctx->pc = 0x799ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19544));
label_799ce8:
    // 0x799ce8: 0xc053f66  jal         func_14FD98
label_799cec:
    if (ctx->pc == 0x799CECu) {
        ctx->pc = 0x799CF0u;
        goto label_799cf0;
    }
    ctx->pc = 0x799CE8u;
    SET_GPR_U32(ctx, 31, 0x799CF0u);
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799CE8u, 0x799CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CF0u;
label_799cf0:
    // 0x799cf0: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x799cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
label_799cf4:
    // 0x799cf4: 0x8c83b1c4  lw          $v1, -0x4E3C($a0)
    ctx->pc = 0x799cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294947268)));
label_799cf8:
    // 0x799cf8: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x799cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_799cfc:
    // 0x799cfc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x799cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_799d00:
    // 0x799d00: 0x8c82b1c4  lw          $v0, -0x4E3C($a0)
    ctx->pc = 0x799d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294947268)));
label_799d04:
    // 0x799d04: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x799d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_799d08:
    // 0x799d08: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x799d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_799d0c:
    // 0x799d0c: 0x10600048  beqz        $v1, . + 4 + (0x48 << 2)
label_799d10:
    if (ctx->pc == 0x799D10u) {
        ctx->pc = 0x799D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D0Cu;
        // 0x799d10: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799D14u;
        goto label_799d14;
    }
    ctx->pc = 0x799D0Cu;
    {
        const bool branch_taken_0x799d0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D0Cu;
        // 0x799d10: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d0c) {
            ctx->pc = 0x799E30u;
            goto label_799e30;
        }
    }
    ctx->pc = 0x799D14u;
label_799d14:
    // 0x799d14: 0x10b040  sll         $s6, $s0, 1
    ctx->pc = 0x799d14u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_799d18:
    // 0x799d18: 0x24a4ea60  addiu       $a0, $a1, -0x15A0
    ctx->pc = 0x799d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
label_799d1c:
    // 0x799d1c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x799d1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799d20:
    // 0x799d20: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x799d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_799d24:
    // 0x799d24: 0xc0b0c46  jal         func_2C3118
label_799d28:
    if (ctx->pc == 0x799D28u) {
        ctx->pc = 0x799D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D24u;
        // 0x799d28: 0x3c13007a  lui         $s3, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799D2Cu;
        goto label_799d2c;
    }
    ctx->pc = 0x799D24u;
    SET_GPR_U32(ctx, 31, 0x799D2Cu);
    ctx->pc = 0x799D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D24u;
    // 0x799d28: 0x3c13007a  lui         $s3, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)122 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3118u, 0x799D24u, 0x799D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D2Cu;
label_799d2c:
    // 0x799d2c: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x799d2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_799d30:
    // 0x799d30: 0x27b70010  addiu       $s7, $sp, 0x10
    ctx->pc = 0x799d30u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_799d34:
    // 0x799d34: 0x27be0020  addiu       $fp, $sp, 0x20
    ctx->pc = 0x799d34u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_799d38:
    // 0x799d38: 0x24510018  addiu       $s1, $v0, 0x18
    ctx->pc = 0x799d38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_799d3c:
    // 0x799d3c: 0x0  nop
    ctx->pc = 0x799d3cu;
    // NOP
label_799d40:
    // 0x799d40: 0x8e62b1c4  lw          $v0, -0x4E3C($s3)
    ctx->pc = 0x799d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294947268)));
label_799d44:
    // 0x799d44: 0x1480c0  sll         $s0, $s4, 3
    ctx->pc = 0x799d44u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
label_799d48:
    // 0x799d48: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x799d48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_799d4c:
    // 0x799d4c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x799d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_799d50:
    // 0x799d50: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x799d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_799d54:
    // 0x799d54: 0x8c830214  lw          $v1, 0x214($a0)
    ctx->pc = 0x799d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 532)));
label_799d58:
    // 0x799d58: 0x84650080  lh          $a1, 0x80($v1)
    ctx->pc = 0x799d58u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_799d5c:
    // 0x799d5c: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x799d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_799d60:
    // 0x799d60: 0x40f809  jalr        $v0
label_799d64:
    if (ctx->pc == 0x799D64u) {
        ctx->pc = 0x799D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D60u;
        // 0x799d64: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799D68u;
        goto label_799d68;
    }
    ctx->pc = 0x799D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x799D68u);
        ctx->pc = 0x799D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D60u;
        // 0x799d64: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799D60u, 0x799D68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799D68u;
label_799d68:
    // 0x799d68: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x799d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_799d6c:
    // 0x799d6c: 0xc620fffc  lwc1        $f0, -0x4($s1)
    ctx->pc = 0x799d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_799d70:
    // 0x799d70: 0x8e63b1c4  lw          $v1, -0x4E3C($s3)
    ctx->pc = 0x799d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294947268)));
label_799d74:
    // 0x799d74: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x799d74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_799d78:
    // 0x799d78: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x799d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_799d7c:
    // 0x799d7c: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x799d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_799d80:
    // 0x799d80: 0x8e62b1c4  lw          $v0, -0x4E3C($s3)
    ctx->pc = 0x799d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294947268)));
label_799d84:
    // 0x799d84: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x799d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_799d88:
    // 0x799d88: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x799d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_799d8c:
    // 0x799d8c: 0x8c830214  lw          $v1, 0x214($a0)
    ctx->pc = 0x799d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 532)));
label_799d90:
    // 0x799d90: 0x84650080  lh          $a1, 0x80($v1)
    ctx->pc = 0x799d90u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_799d94:
    // 0x799d94: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x799d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_799d98:
    // 0x799d98: 0x40f809  jalr        $v0
label_799d9c:
    if (ctx->pc == 0x799D9Cu) {
        ctx->pc = 0x799D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D98u;
        // 0x799d9c: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799DA0u;
        goto label_799da0;
    }
    ctx->pc = 0x799D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x799DA0u);
        ctx->pc = 0x799D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D98u;
        // 0x799d9c: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799D98u, 0x799DA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799DA0u;
label_799da0:
    // 0x799da0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x799da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_799da4:
    // 0x799da4: 0x2a830004  slti        $v1, $s4, 0x4
    ctx->pc = 0x799da4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
label_799da8:
    // 0x799da8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x799da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_799dac:
    // 0x799dac: 0x8e62b1c4  lw          $v0, -0x4E3C($s3)
    ctx->pc = 0x799dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294947268)));
label_799db0:
    // 0x799db0: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x799db0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_799db4:
    // 0x799db4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x799db4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_799db8:
    // 0x799db8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x799db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_799dbc:
    // 0x799dbc: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
label_799dc0:
    if (ctx->pc == 0x799DC0u) {
        ctx->pc = 0x799DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DBCu;
        // 0x799dc0: 0xe4400018  swc1        $f0, 0x18($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x799DC4u;
        goto label_799dc4;
    }
    ctx->pc = 0x799DBCu;
    {
        const bool branch_taken_0x799dbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DBCu;
        // 0x799dc0: 0xe4400018  swc1        $f0, 0x18($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x799dbc) {
            ctx->pc = 0x799D40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799d40;
        }
    }
    ctx->pc = 0x799DC4u;
label_799dc4:
    // 0x799dc4: 0x26c50002  addiu       $a1, $s6, 0x2
    ctx->pc = 0x799dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
label_799dc8:
    // 0x799dc8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_799dcc:
    // 0x799dcc: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x799dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
label_799dd0:
    // 0x799dd0: 0x30a5fffe  andi        $a1, $a1, 0xFFFE
    ctx->pc = 0x799dd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65534);
label_799dd4:
    // 0x799dd4: 0xc0b0a92  jal         func_2C2A48
label_799dd8:
    if (ctx->pc == 0x799DD8u) {
        ctx->pc = 0x799DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DD4u;
        // 0x799dd8: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799DDCu;
        goto label_799ddc;
    }
    ctx->pc = 0x799DD4u;
    SET_GPR_U32(ctx, 31, 0x799DDCu);
    ctx->pc = 0x799DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DD4u;
    // 0x799dd8: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x799DD4u, 0x799DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DDCu;
label_799ddc:
    // 0x799ddc: 0x26c50003  addiu       $a1, $s6, 0x3
    ctx->pc = 0x799ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 3));
label_799de0:
    // 0x799de0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799de0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_799de4:
    // 0x799de4: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x799de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
label_799de8:
    // 0x799de8: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x799de8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_799dec:
    // 0x799dec: 0xc0b0a92  jal         func_2C2A48
label_799df0:
    if (ctx->pc == 0x799DF0u) {
        ctx->pc = 0x799DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DECu;
        // 0x799df0: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799DF4u;
        goto label_799df4;
    }
    ctx->pc = 0x799DECu;
    SET_GPR_U32(ctx, 31, 0x799DF4u);
    ctx->pc = 0x799DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DECu;
    // 0x799df0: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x799DECu, 0x799DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DF4u;
label_799df4:
    // 0x799df4: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_799df8:
    // 0x799df8: 0x8c50b1c4  lw          $s0, -0x4E3C($v0)
    ctx->pc = 0x799df8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947268)));
label_799dfc:
    // 0x799dfc: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x799dfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_799e00:
    // 0x799e00: 0xc0c7408  jal         func_31D020
label_799e04:
    if (ctx->pc == 0x799E04u) {
        ctx->pc = 0x799E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E00u;
        // 0x799e04: 0x2158021  addu        $s0, $s0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E08u;
        goto label_799e08;
    }
    ctx->pc = 0x799E00u;
    SET_GPR_U32(ctx, 31, 0x799E08u);
    ctx->pc = 0x799E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E00u;
    // 0x799e04: 0x2158021  addu        $s0, $s0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x799E00u, 0x799E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E08u;
label_799e08:
    // 0x799e08: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x799e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_799e0c:
    // 0x799e0c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799e0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_799e10:
    // 0x799e10: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x799e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_799e14:
    // 0x799e14: 0x3c014370  lui         $at, 0x4370
    ctx->pc = 0x799e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17264 << 16));
label_799e18:
    // 0x799e18: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799e18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_799e1c:
    // 0x799e1c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x799e1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_799e20:
    // 0x799e20: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x799e20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_799e24:
    // 0x799e24: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x799e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_799e28:
    // 0x799e28: 0xc05f6d8  jal         func_17DB60
label_799e2c:
    if (ctx->pc == 0x799E2Cu) {
        ctx->pc = 0x799E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E28u;
        // 0x799e2c: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E30u;
        goto label_799e30;
    }
    ctx->pc = 0x799E28u;
    SET_GPR_U32(ctx, 31, 0x799E30u);
    ctx->pc = 0x799E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E28u;
    // 0x799e2c: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17DB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DB60u, 0x799E28u, 0x799E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E30u;
label_799e30:
    // 0x799e30: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x799e30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_799e34:
    // 0x799e34: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x799e34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_799e38:
    // 0x799e38: 0x1440ff93  bnez        $v0, . + 4 + (-0x6D << 2)
label_799e3c:
    if (ctx->pc == 0x799E3Cu) {
        ctx->pc = 0x799E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E38u;
        // 0x799e3c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E40u;
        goto label_799e40;
    }
    ctx->pc = 0x799E38u;
    {
        const bool branch_taken_0x799e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E38u;
        // 0x799e3c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e38) {
            ctx->pc = 0x799C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799c88;
        }
    }
    ctx->pc = 0x799E40u;
label_799e40:
    // 0x799e40: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x799e40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799e44:
    // 0x799e44: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_799e48:
    // 0x799e48: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x799e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_799e4c:
    // 0x799e4c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x799e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_799e50:
    // 0x799e50: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x799e50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799e54:
    // 0x799e54: 0x2447a030  addiu       $a3, $v0, -0x5FD0
    ctx->pc = 0x799e54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942768));
label_799e58:
    // 0x799e58: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x799e58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_799e5c:
    // 0x799e5c: 0x2464ea60  addiu       $a0, $v1, -0x15A0
    ctx->pc = 0x799e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961760));
label_799e60:
    // 0x799e60: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799e60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799e64:
    // 0x799e64: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799e64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_799e68:
    // 0x799e68: 0xc0b09e4  jal         func_2C2790
label_799e6c:
    if (ctx->pc == 0x799E6Cu) {
        ctx->pc = 0x799E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E68u;
        // 0x799e6c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E70u;
        goto label_799e70;
    }
    ctx->pc = 0x799E68u;
    SET_GPR_U32(ctx, 31, 0x799E70u);
    ctx->pc = 0x799E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E68u;
    // 0x799e6c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x799E68u, 0x799E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E70u;
label_799e70:
    // 0x799e70: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x799e70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
label_799e74:
    // 0x799e74: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_799e78:
    if (ctx->pc == 0x799E78u) {
        ctx->pc = 0x799E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E74u;
        // 0x799e78: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E7Cu;
        goto label_799e7c;
    }
    ctx->pc = 0x799E74u;
    {
        const bool branch_taken_0x799e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E74u;
        // 0x799e78: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e74) {
            ctx->pc = 0x799E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799e48;
        }
    }
    ctx->pc = 0x799E7Cu;
label_799e7c:
    // 0x799e7c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x799e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_799e80:
    // 0x799e80: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x799e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
label_799e84:
    // 0x799e84: 0x8c642f84  lw          $a0, 0x2F84($v1)
    ctx->pc = 0x799e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
label_799e88:
    // 0x799e88: 0x24459ec8  addiu       $a1, $v0, -0x6138
    ctx->pc = 0x799e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942408));
label_799e8c:
    // 0x799e8c: 0xc0b0e24  jal         func_2C3890
label_799e90:
    if (ctx->pc == 0x799E90u) {
        ctx->pc = 0x799E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E8Cu;
        // 0x799e90: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799E94u;
        goto label_799e94;
    }
    ctx->pc = 0x799E8Cu;
    SET_GPR_U32(ctx, 31, 0x799E94u);
    ctx->pc = 0x799E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E8Cu;
    // 0x799e90: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799E8Cu, 0x799E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E94u;
label_799e94:
    // 0x799e94: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x799e94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_799e98:
    // 0x799e98: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x799e98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_799e9c:
    // 0x799e9c: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x799e9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_799ea0:
    // 0x799ea0: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x799ea0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_799ea4:
    // 0x799ea4: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x799ea4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_799ea8:
    // 0x799ea8: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x799ea8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_799eac:
    // 0x799eac: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x799eacu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_799eb0:
    // 0x799eb0: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x799eb0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_799eb4:
    // 0x799eb4: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x799eb4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_799eb8:
    // 0x799eb8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x799eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_799ebc:
    // 0x799ebc: 0x3e00008  jr          $ra
label_799ec0:
    if (ctx->pc == 0x799EC0u) {
        ctx->pc = 0x799EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EBCu;
        // 0x799ec0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799EC4u;
        goto label_799ec4;
    }
    ctx->pc = 0x799EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EBCu;
        // 0x799ec0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799EBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799EC4u;
label_799ec4:
    // 0x799ec4: 0x0  nop
    ctx->pc = 0x799ec4u;
    // NOP
    ctx->pc = 0x799ec8u;
}
} // namespace gh_r608
