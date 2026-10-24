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

// Function: cOmSetParam_setOmData
// Address: 0x1c3cb8 - 0x1c3f38
void cOmSetParam_setOmData_0x1c3cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmSetParam_setOmData_0x1c3cb8");
#endif

    switch (ctx->pc) {
        case 0x1c3cb8u: goto label_1c3cb8;
        case 0x1c3cbcu: goto label_1c3cbc;
        case 0x1c3cc0u: goto label_1c3cc0;
        case 0x1c3cc4u: goto label_1c3cc4;
        case 0x1c3cc8u: goto label_1c3cc8;
        case 0x1c3cccu: goto label_1c3ccc;
        case 0x1c3cd0u: goto label_1c3cd0;
        case 0x1c3cd4u: goto label_1c3cd4;
        case 0x1c3cd8u: goto label_1c3cd8;
        case 0x1c3cdcu: goto label_1c3cdc;
        case 0x1c3ce0u: goto label_1c3ce0;
        case 0x1c3ce4u: goto label_1c3ce4;
        case 0x1c3ce8u: goto label_1c3ce8;
        case 0x1c3cecu: goto label_1c3cec;
        case 0x1c3cf0u: goto label_1c3cf0;
        case 0x1c3cf4u: goto label_1c3cf4;
        case 0x1c3cf8u: goto label_1c3cf8;
        case 0x1c3cfcu: goto label_1c3cfc;
        case 0x1c3d00u: goto label_1c3d00;
        case 0x1c3d04u: goto label_1c3d04;
        case 0x1c3d08u: goto label_1c3d08;
        case 0x1c3d0cu: goto label_1c3d0c;
        case 0x1c3d10u: goto label_1c3d10;
        case 0x1c3d14u: goto label_1c3d14;
        case 0x1c3d18u: goto label_1c3d18;
        case 0x1c3d1cu: goto label_1c3d1c;
        case 0x1c3d20u: goto label_1c3d20;
        case 0x1c3d24u: goto label_1c3d24;
        case 0x1c3d28u: goto label_1c3d28;
        case 0x1c3d2cu: goto label_1c3d2c;
        case 0x1c3d30u: goto label_1c3d30;
        case 0x1c3d34u: goto label_1c3d34;
        case 0x1c3d38u: goto label_1c3d38;
        case 0x1c3d3cu: goto label_1c3d3c;
        case 0x1c3d40u: goto label_1c3d40;
        case 0x1c3d44u: goto label_1c3d44;
        case 0x1c3d48u: goto label_1c3d48;
        case 0x1c3d4cu: goto label_1c3d4c;
        case 0x1c3d50u: goto label_1c3d50;
        case 0x1c3d54u: goto label_1c3d54;
        case 0x1c3d58u: goto label_1c3d58;
        case 0x1c3d5cu: goto label_1c3d5c;
        case 0x1c3d60u: goto label_1c3d60;
        case 0x1c3d64u: goto label_1c3d64;
        case 0x1c3d68u: goto label_1c3d68;
        case 0x1c3d6cu: goto label_1c3d6c;
        case 0x1c3d70u: goto label_1c3d70;
        case 0x1c3d74u: goto label_1c3d74;
        case 0x1c3d78u: goto label_1c3d78;
        case 0x1c3d7cu: goto label_1c3d7c;
        case 0x1c3d80u: goto label_1c3d80;
        case 0x1c3d84u: goto label_1c3d84;
        case 0x1c3d88u: goto label_1c3d88;
        case 0x1c3d8cu: goto label_1c3d8c;
        case 0x1c3d90u: goto label_1c3d90;
        case 0x1c3d94u: goto label_1c3d94;
        case 0x1c3d98u: goto label_1c3d98;
        case 0x1c3d9cu: goto label_1c3d9c;
        case 0x1c3da0u: goto label_1c3da0;
        case 0x1c3da4u: goto label_1c3da4;
        case 0x1c3da8u: goto label_1c3da8;
        case 0x1c3dacu: goto label_1c3dac;
        case 0x1c3db0u: goto label_1c3db0;
        case 0x1c3db4u: goto label_1c3db4;
        case 0x1c3db8u: goto label_1c3db8;
        case 0x1c3dbcu: goto label_1c3dbc;
        case 0x1c3dc0u: goto label_1c3dc0;
        case 0x1c3dc4u: goto label_1c3dc4;
        case 0x1c3dc8u: goto label_1c3dc8;
        case 0x1c3dccu: goto label_1c3dcc;
        case 0x1c3dd0u: goto label_1c3dd0;
        case 0x1c3dd4u: goto label_1c3dd4;
        case 0x1c3dd8u: goto label_1c3dd8;
        case 0x1c3ddcu: goto label_1c3ddc;
        case 0x1c3de0u: goto label_1c3de0;
        case 0x1c3de4u: goto label_1c3de4;
        case 0x1c3de8u: goto label_1c3de8;
        case 0x1c3decu: goto label_1c3dec;
        case 0x1c3df0u: goto label_1c3df0;
        case 0x1c3df4u: goto label_1c3df4;
        case 0x1c3df8u: goto label_1c3df8;
        case 0x1c3dfcu: goto label_1c3dfc;
        case 0x1c3e00u: goto label_1c3e00;
        case 0x1c3e04u: goto label_1c3e04;
        case 0x1c3e08u: goto label_1c3e08;
        case 0x1c3e0cu: goto label_1c3e0c;
        case 0x1c3e10u: goto label_1c3e10;
        case 0x1c3e14u: goto label_1c3e14;
        case 0x1c3e18u: goto label_1c3e18;
        case 0x1c3e1cu: goto label_1c3e1c;
        case 0x1c3e20u: goto label_1c3e20;
        case 0x1c3e24u: goto label_1c3e24;
        case 0x1c3e28u: goto label_1c3e28;
        case 0x1c3e2cu: goto label_1c3e2c;
        case 0x1c3e30u: goto label_1c3e30;
        case 0x1c3e34u: goto label_1c3e34;
        case 0x1c3e38u: goto label_1c3e38;
        case 0x1c3e3cu: goto label_1c3e3c;
        case 0x1c3e40u: goto label_1c3e40;
        case 0x1c3e44u: goto label_1c3e44;
        case 0x1c3e48u: goto label_1c3e48;
        case 0x1c3e4cu: goto label_1c3e4c;
        case 0x1c3e50u: goto label_1c3e50;
        case 0x1c3e54u: goto label_1c3e54;
        case 0x1c3e58u: goto label_1c3e58;
        case 0x1c3e5cu: goto label_1c3e5c;
        case 0x1c3e60u: goto label_1c3e60;
        case 0x1c3e64u: goto label_1c3e64;
        case 0x1c3e68u: goto label_1c3e68;
        case 0x1c3e6cu: goto label_1c3e6c;
        case 0x1c3e70u: goto label_1c3e70;
        case 0x1c3e74u: goto label_1c3e74;
        case 0x1c3e78u: goto label_1c3e78;
        case 0x1c3e7cu: goto label_1c3e7c;
        case 0x1c3e80u: goto label_1c3e80;
        case 0x1c3e84u: goto label_1c3e84;
        case 0x1c3e88u: goto label_1c3e88;
        case 0x1c3e8cu: goto label_1c3e8c;
        case 0x1c3e90u: goto label_1c3e90;
        case 0x1c3e94u: goto label_1c3e94;
        case 0x1c3e98u: goto label_1c3e98;
        case 0x1c3e9cu: goto label_1c3e9c;
        case 0x1c3ea0u: goto label_1c3ea0;
        case 0x1c3ea4u: goto label_1c3ea4;
        case 0x1c3ea8u: goto label_1c3ea8;
        case 0x1c3eacu: goto label_1c3eac;
        case 0x1c3eb0u: goto label_1c3eb0;
        case 0x1c3eb4u: goto label_1c3eb4;
        case 0x1c3eb8u: goto label_1c3eb8;
        case 0x1c3ebcu: goto label_1c3ebc;
        case 0x1c3ec0u: goto label_1c3ec0;
        case 0x1c3ec4u: goto label_1c3ec4;
        case 0x1c3ec8u: goto label_1c3ec8;
        case 0x1c3eccu: goto label_1c3ecc;
        case 0x1c3ed0u: goto label_1c3ed0;
        case 0x1c3ed4u: goto label_1c3ed4;
        case 0x1c3ed8u: goto label_1c3ed8;
        case 0x1c3edcu: goto label_1c3edc;
        case 0x1c3ee0u: goto label_1c3ee0;
        case 0x1c3ee4u: goto label_1c3ee4;
        case 0x1c3ee8u: goto label_1c3ee8;
        case 0x1c3eecu: goto label_1c3eec;
        case 0x1c3ef0u: goto label_1c3ef0;
        case 0x1c3ef4u: goto label_1c3ef4;
        case 0x1c3ef8u: goto label_1c3ef8;
        case 0x1c3efcu: goto label_1c3efc;
        case 0x1c3f00u: goto label_1c3f00;
        case 0x1c3f04u: goto label_1c3f04;
        case 0x1c3f08u: goto label_1c3f08;
        case 0x1c3f0cu: goto label_1c3f0c;
        case 0x1c3f10u: goto label_1c3f10;
        case 0x1c3f14u: goto label_1c3f14;
        case 0x1c3f18u: goto label_1c3f18;
        case 0x1c3f1cu: goto label_1c3f1c;
        case 0x1c3f20u: goto label_1c3f20;
        case 0x1c3f24u: goto label_1c3f24;
        case 0x1c3f28u: goto label_1c3f28;
        case 0x1c3f2cu: goto label_1c3f2c;
        case 0x1c3f30u: goto label_1c3f30;
        case 0x1c3f34u: goto label_1c3f34;
        default: break;
    }

    ctx->pc = 0x1c3cb8u;

label_1c3cb8:
    // 0x1c3cb8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1c3cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_1c3cbc:
    // 0x1c3cbc: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x1c3cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_1c3cc0:
    // 0x1c3cc0: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x1c3cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_1c3cc4:
    // 0x1c3cc4: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x1c3cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_1c3cc8:
    // 0x1c3cc8: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x1c3cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_1c3ccc:
    // 0x1c3ccc: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x1c3cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_1c3cd0:
    // 0x1c3cd0: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1c3cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_1c3cd4:
    // 0x1c3cd4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1c3cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1c3cd8:
    // 0x1c3cd8: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x1c3cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_1c3cdc:
    // 0x1c3cdc: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x1c3cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_1c3ce0:
    // 0x1c3ce0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1c3ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1c3ce4:
    // 0x1c3ce4: 0xc070f16  jal         func_1C3C58
label_1c3ce8:
    if (ctx->pc == 0x1C3CE8u) {
        ctx->pc = 0x1C3CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3CE4u;
        // 0x1c3ce8: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3CECu;
        goto label_1c3cec;
    }
    ctx->pc = 0x1C3CE4u;
    SET_GPR_U32(ctx, 31, 0x1C3CECu);
    ctx->pc = 0x1C3CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3CE4u;
    // 0x1c3ce8: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3C58u, 0x1C3CE4u, 0x1C3CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3CECu;
label_1c3cec:
    // 0x1c3cec: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_1c3cf0:
    if (ctx->pc == 0x1C3CF0u) {
        ctx->pc = 0x1C3CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3CECu;
        // 0x1c3cf0: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3CF4u;
        goto label_1c3cf4;
    }
    ctx->pc = 0x1C3CECu;
    {
        const bool branch_taken_0x1c3cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3cec) {
            ctx->pc = 0x1C3CF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3CECu;
            // 0x1c3cf0: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3CFCu;
            goto label_1c3cfc;
        }
    }
    ctx->pc = 0x1C3CF4u;
label_1c3cf4:
    // 0x1c3cf4: 0x10000083  b           . + 4 + (0x83 << 2)
label_1c3cf8:
    if (ctx->pc == 0x1C3CF8u) {
        ctx->pc = 0x1C3CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3CF4u;
        // 0x1c3cf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3CFCu;
        goto label_1c3cfc;
    }
    ctx->pc = 0x1C3CF4u;
    {
        const bool branch_taken_0x1c3cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3CF4u;
        // 0x1c3cf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3cf4) {
            ctx->pc = 0x1C3F04u;
            goto label_1c3f04;
        }
    }
    ctx->pc = 0x1C3CFCu;
label_1c3cfc:
    // 0x1c3cfc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1c3cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1c3d00:
    // 0x1c3d00: 0x1040007f  beqz        $v0, . + 4 + (0x7F << 2)
label_1c3d04:
    if (ctx->pc == 0x1C3D04u) {
        ctx->pc = 0x1C3D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3D00u;
        // 0x1c3d04: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3D08u;
        goto label_1c3d08;
    }
    ctx->pc = 0x1C3D00u;
    {
        const bool branch_taken_0x1c3d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3D00u;
        // 0x1c3d04: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3d00) {
            ctx->pc = 0x1C3F00u;
            goto label_1c3f00;
        }
    }
    ctx->pc = 0x1C3D08u;
label_1c3d08:
    // 0x1c3d08: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1c3d08u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c3d0c:
    // 0x1c3d0c: 0x3c1e0058  lui         $fp, 0x58
    ctx->pc = 0x1c3d0cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)88 << 16));
label_1c3d10:
    // 0x1c3d10: 0x3c170075  lui         $s7, 0x75
    ctx->pc = 0x1c3d10u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)117 << 16));
label_1c3d14:
    // 0x1c3d14: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1c3d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1c3d18:
    // 0x1c3d18: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1c3d18u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3d1c:
    // 0x1c3d1c: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x1c3d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1c3d20:
    // 0x1c3d20: 0x142180  sll         $a0, $s4, 6
    ctx->pc = 0x1c3d20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
label_1c3d24:
    // 0x1c3d24: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1c3d24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1c3d28:
    // 0x1c3d28: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_1c3d2c:
    if (ctx->pc == 0x1C3D2Cu) {
        ctx->pc = 0x1C3D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3D28u;
        // 0x1c3d2c: 0x648821  addu        $s1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3D30u;
        goto label_1c3d30;
    }
    ctx->pc = 0x1C3D28u;
    {
        const bool branch_taken_0x1c3d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3D28u;
        // 0x1c3d2c: 0x648821  addu        $s1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3d28) {
            ctx->pc = 0x1C3D7Cu;
            goto label_1c3d7c;
        }
    }
    ctx->pc = 0x1C3D30u;
label_1c3d30:
    // 0x1c3d30: 0xde350030  ld          $s5, 0x30($s1)
    ctx->pc = 0x1c3d30u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 17), 48)));
label_1c3d34:
    // 0x1c3d34: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x1c3d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_1c3d38:
    // 0x1c3d38: 0x24448658  addiu       $a0, $v0, -0x79A8
    ctx->pc = 0x1c3d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936152));
label_1c3d3c:
    // 0x1c3d3c: 0xc0afb42  jal         func_2BED08
label_1c3d40:
    if (ctx->pc == 0x1C3D40u) {
        ctx->pc = 0x1C3D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3D3Cu;
        // 0x1c3d40: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3D44u;
        goto label_1c3d44;
    }
    ctx->pc = 0x1C3D3Cu;
    SET_GPR_U32(ctx, 31, 0x1C3D44u);
    ctx->pc = 0x1C3D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3D3Cu;
    // 0x1c3d40: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BED08u, 0x1C3D3Cu, 0x1C3D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3D44u;
label_1c3d44:
    // 0x1c3d44: 0x54560008  bnel        $v0, $s6, . + 4 + (0x8 << 2)
label_1c3d48:
    if (ctx->pc == 0x1C3D48u) {
        ctx->pc = 0x1C3D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3D44u;
        // 0x1c3d48: 0x9222002e  lbu         $v0, 0x2E($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 46)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3D4Cu;
        goto label_1c3d4c;
    }
    ctx->pc = 0x1C3D44u;
    {
        const bool branch_taken_0x1c3d44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x1c3d44) {
            ctx->pc = 0x1C3D48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3D44u;
            // 0x1c3d48: 0x9222002e  lbu         $v0, 0x2E($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 46)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3D68u;
            goto label_1c3d68;
        }
    }
    ctx->pc = 0x1C3D4Cu;
label_1c3d4c:
    // 0x1c3d4c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1c3d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_1c3d50:
    // 0x1c3d50: 0xde250038  ld          $a1, 0x38($s1)
    ctx->pc = 0x1c3d50u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 56)));
label_1c3d54:
    // 0x1c3d54: 0x2464ae50  addiu       $a0, $v1, -0x51B0
    ctx->pc = 0x1c3d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946384));
label_1c3d58:
    // 0x1c3d58: 0xc04cc6e  jal         func_1331B8
label_1c3d5c:
    if (ctx->pc == 0x1C3D5Cu) {
        ctx->pc = 0x1C3D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3D58u;
        // 0x1c3d5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3D60u;
        goto label_1c3d60;
    }
    ctx->pc = 0x1C3D58u;
    SET_GPR_U32(ctx, 31, 0x1C3D60u);
    ctx->pc = 0x1C3D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3D58u;
    // 0x1c3d5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1331B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1331B8u, 0x1C3D58u, 0x1C3D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3D60u;
label_1c3d60:
    // 0x1c3d60: 0x10000061  b           . + 4 + (0x61 << 2)
label_1c3d64:
    if (ctx->pc == 0x1C3D64u) {
        ctx->pc = 0x1C3D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3D60u;
        // 0x1c3d64: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3D68u;
        goto label_1c3d68;
    }
    ctx->pc = 0x1C3D60u;
    {
        const bool branch_taken_0x1c3d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3D60u;
        // 0x1c3d64: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3d60) {
            ctx->pc = 0x1C3EE8u;
            goto label_1c3ee8;
        }
    }
    ctx->pc = 0x1C3D68u;
label_1c3d68:
    // 0x1c3d68: 0x24060300  addiu       $a2, $zero, 0x300
    ctx->pc = 0x1c3d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
label_1c3d6c:
    // 0x1c3d6c: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x1c3d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1c3d70:
    // 0x1c3d70: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1c3d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_1c3d74:
    // 0x1c3d74: 0x10000002  b           . + 4 + (0x2 << 2)
label_1c3d78:
    if (ctx->pc == 0x1C3D78u) {
        ctx->pc = 0x1C3D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3D74u;
        // 0x1c3d78: 0x62300b  movn        $a2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3D7Cu;
        goto label_1c3d7c;
    }
    ctx->pc = 0x1C3D74u;
    {
        const bool branch_taken_0x1c3d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3D74u;
        // 0x1c3d78: 0x62300b  movn        $a2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3d74) {
            ctx->pc = 0x1C3D80u;
            goto label_1c3d80;
        }
    }
    ctx->pc = 0x1C3D7Cu;
label_1c3d7c:
    // 0x1c3d7c: 0x24060300  addiu       $a2, $zero, 0x300
    ctx->pc = 0x1c3d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
label_1c3d80:
    // 0x1c3d80: 0x92240024  lbu         $a0, 0x24($s1)
    ctx->pc = 0x1c3d80u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
label_1c3d84:
    // 0x1c3d84: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1c3d84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c3d88:
    // 0x1c3d88: 0xc0c3ea6  jal         func_30FA98
label_1c3d8c:
    if (ctx->pc == 0x1C3D8Cu) {
        ctx->pc = 0x1C3D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3D88u;
        // 0x1c3d8c: 0x862025  or          $a0, $a0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3D90u;
        goto label_1c3d90;
    }
    ctx->pc = 0x1C3D88u;
    SET_GPR_U32(ctx, 31, 0x1C3D90u);
    ctx->pc = 0x1C3D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3D88u;
    // 0x1c3d8c: 0x862025  or          $a0, $a0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x1C3D88u, 0x1C3D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3D90u;
label_1c3d90:
    // 0x1c3d90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c3d90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c3d94:
    // 0x1c3d94: 0x52000054  beql        $s0, $zero, . + 4 + (0x54 << 2)
label_1c3d98:
    if (ctx->pc == 0x1C3D98u) {
        ctx->pc = 0x1C3D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3D94u;
        // 0x1c3d98: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3D9Cu;
        goto label_1c3d9c;
    }
    ctx->pc = 0x1C3D94u;
    {
        const bool branch_taken_0x1c3d94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3d94) {
            ctx->pc = 0x1C3D98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3D94u;
            // 0x1c3d98: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3EE8u;
            goto label_1c3ee8;
        }
    }
    ctx->pc = 0x1C3D9Cu;
label_1c3d9c:
    // 0x1c3d9c: 0xc06e00c  jal         func_1B8030
label_1c3da0:
    if (ctx->pc == 0x1C3DA0u) {
        ctx->pc = 0x1C3DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3D9Cu;
        // 0x1c3da0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3DA4u;
        goto label_1c3da4;
    }
    ctx->pc = 0x1C3D9Cu;
    SET_GPR_U32(ctx, 31, 0x1C3DA4u);
    ctx->pc = 0x1C3DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3D9Cu;
    // 0x1c3da0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8030u, 0x1C3D9Cu, 0x1C3DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3DA4u;
label_1c3da4:
    // 0x1c3da4: 0x54560008  bnel        $v0, $s6, . + 4 + (0x8 << 2)
label_1c3da8:
    if (ctx->pc == 0x1C3DA8u) {
        ctx->pc = 0x1C3DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3DA4u;
        // 0x1c3da8: 0x8e030214  lw          $v1, 0x214($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3DACu;
        goto label_1c3dac;
    }
    ctx->pc = 0x1C3DA4u;
    {
        const bool branch_taken_0x1c3da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x1c3da4) {
            ctx->pc = 0x1C3DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3DA4u;
            // 0x1c3da8: 0x8e030214  lw          $v1, 0x214($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3DC8u;
            goto label_1c3dc8;
        }
    }
    ctx->pc = 0x1C3DACu;
label_1c3dac:
    // 0x1c3dac: 0x8e0205b0  lw          $v0, 0x5B0($s0)
    ctx->pc = 0x1c3dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
label_1c3db0:
    // 0x1c3db0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c3db4:
    // 0x1c3db4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c3db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c3db8:
    // 0x1c3db8: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x1c3db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_1c3dbc:
    // 0x1c3dbc: 0xc07097c  jal         func_1C25F0
label_1c3dc0:
    if (ctx->pc == 0x1C3DC0u) {
        ctx->pc = 0x1C3DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3DBCu;
        // 0x1c3dc0: 0xae0205b0  sw          $v0, 0x5B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3DC4u;
        goto label_1c3dc4;
    }
    ctx->pc = 0x1C3DBCu;
    SET_GPR_U32(ctx, 31, 0x1C3DC4u);
    ctx->pc = 0x1C3DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3DBCu;
    // 0x1c3dc0: 0xae0205b0  sw          $v0, 0x5B0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C25F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C25F0u, 0x1C3DBCu, 0x1C3DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3DC4u;
label_1c3dc4:
    // 0x1c3dc4: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x1c3dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_1c3dc8:
    // 0x1c3dc8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c3dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c3dcc:
    // 0x1c3dcc: 0x84640098  lh          $a0, 0x98($v1)
    ctx->pc = 0x1c3dccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 152)));
label_1c3dd0:
    // 0x1c3dd0: 0x8c62009c  lw          $v0, 0x9C($v1)
    ctx->pc = 0x1c3dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
label_1c3dd4:
    // 0x1c3dd4: 0x40f809  jalr        $v0
label_1c3dd8:
    if (ctx->pc == 0x1C3DD8u) {
        ctx->pc = 0x1C3DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3DD4u;
        // 0x1c3dd8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3DDCu;
        goto label_1c3ddc;
    }
    ctx->pc = 0x1C3DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C3DDCu);
        ctx->pc = 0x1C3DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3DD4u;
        // 0x1c3dd8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3DD4u, 0x1C3DDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C3DDCu;
label_1c3ddc:
    // 0x1c3ddc: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x1c3ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_1c3de0:
    // 0x1c3de0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c3de0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c3de4:
    // 0x1c3de4: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x1c3de4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_1c3de8:
    // 0x1c3de8: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x1c3de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_1c3dec:
    // 0x1c3dec: 0x40f809  jalr        $v0
label_1c3df0:
    if (ctx->pc == 0x1C3DF0u) {
        ctx->pc = 0x1C3DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3DECu;
        // 0x1c3df0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3DF4u;
        goto label_1c3df4;
    }
    ctx->pc = 0x1C3DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C3DF4u);
        ctx->pc = 0x1C3DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3DECu;
        // 0x1c3df0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3DECu, 0x1C3DF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C3DF4u;
label_1c3df4:
    // 0x1c3df4: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x1c3df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_1c3df8:
    // 0x1c3df8: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x1c3df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1c3dfc:
    // 0x1c3dfc: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x1c3dfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_1c3e00:
    // 0x1c3e00: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x1c3e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_1c3e04:
    // 0x1c3e04: 0x40f809  jalr        $v0
label_1c3e08:
    if (ctx->pc == 0x1C3E08u) {
        ctx->pc = 0x1C3E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3E04u;
        // 0x1c3e08: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3E0Cu;
        goto label_1c3e0c;
    }
    ctx->pc = 0x1C3E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C3E0Cu);
        ctx->pc = 0x1C3E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3E04u;
        // 0x1c3e08: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3E04u, 0x1C3E0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C3E0Cu;
label_1c3e0c:
    // 0x1c3e0c: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x1c3e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1c3e10:
    // 0x1c3e10: 0x240202c3  addiu       $v0, $zero, 0x2C3
    ctx->pc = 0x1c3e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 707));
label_1c3e14:
    // 0x1c3e14: 0x5462001a  bnel        $v1, $v0, . + 4 + (0x1A << 2)
label_1c3e18:
    if (ctx->pc == 0x1C3E18u) {
        ctx->pc = 0x1C3E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3E14u;
        // 0x1c3e18: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3E1Cu;
        goto label_1c3e1c;
    }
    ctx->pc = 0x1C3E14u;
    {
        const bool branch_taken_0x1c3e14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c3e14) {
            ctx->pc = 0x1C3E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3E14u;
            // 0x1c3e18: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3E80u;
            goto label_1c3e80;
        }
    }
    ctx->pc = 0x1C3E1Cu;
label_1c3e1c:
    // 0x1c3e1c: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x1c3e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
label_1c3e20:
    // 0x1c3e20: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1c3e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1c3e24:
    // 0x1c3e24: 0x27c464f0  addiu       $a0, $fp, 0x64F0
    ctx->pc = 0x1c3e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 25840));
label_1c3e28:
    // 0x1c3e28: 0xa3a20031  sb          $v0, 0x31($sp)
    ctx->pc = 0x1c3e28u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 2));
label_1c3e2c:
    // 0x1c3e2c: 0xc0a4abc  jal         func_292AF0
label_1c3e30:
    if (ctx->pc == 0x1C3E30u) {
        ctx->pc = 0x1C3E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3E2Cu;
        // 0x1c3e30: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3E34u;
        goto label_1c3e34;
    }
    ctx->pc = 0x1C3E2Cu;
    SET_GPR_U32(ctx, 31, 0x1C3E34u);
    ctx->pc = 0x1C3E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3E2Cu;
    // 0x1c3e30: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292AF0u, 0x1C3E2Cu, 0x1C3E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3E34u;
label_1c3e34:
    // 0x1c3e34: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1c3e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c3e38:
    // 0x1c3e38: 0x10430010  beq         $v0, $v1, . + 4 + (0x10 << 2)
label_1c3e3c:
    if (ctx->pc == 0x1C3E3Cu) {
        ctx->pc = 0x1C3E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3E38u;
        // 0x1c3e3c: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3E40u;
        goto label_1c3e40;
    }
    ctx->pc = 0x1C3E38u;
    {
        const bool branch_taken_0x1c3e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C3E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3E38u;
        // 0x1c3e3c: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3e38) {
            ctx->pc = 0x1C3E7Cu;
            goto label_1c3e7c;
        }
    }
    ctx->pc = 0x1C3E40u;
label_1c3e40:
    // 0x1c3e40: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1c3e40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1c3e44:
    // 0x1c3e44: 0x245264e0  addiu       $s2, $v0, 0x64E0
    ctx->pc = 0x1c3e44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 25824));
label_1c3e48:
    // 0x1c3e48: 0xc07fa6e  jal         func_1FE9B8
label_1c3e4c:
    if (ctx->pc == 0x1C3E4Cu) {
        ctx->pc = 0x1C3E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3E48u;
        // 0x1c3e4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3E50u;
        goto label_1c3e50;
    }
    ctx->pc = 0x1C3E48u;
    SET_GPR_U32(ctx, 31, 0x1C3E50u);
    ctx->pc = 0x1C3E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3E48u;
    // 0x1c3e4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE9B8u, 0x1C3E48u, 0x1C3E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3E50u;
label_1c3e50:
    // 0x1c3e50: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1c3e54:
    if (ctx->pc == 0x1C3E54u) {
        ctx->pc = 0x1C3E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3E50u;
        // 0x1c3e54: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3E58u;
        goto label_1c3e58;
    }
    ctx->pc = 0x1C3E50u;
    {
        const bool branch_taken_0x1c3e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3E50u;
        // 0x1c3e54: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3e50) {
            ctx->pc = 0x1C3E6Cu;
            goto label_1c3e6c;
        }
    }
    ctx->pc = 0x1C3E58u;
label_1c3e58:
    // 0x1c3e58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c3e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c3e5c:
    // 0x1c3e5c: 0x26e64220  addiu       $a2, $s7, 0x4220
    ctx->pc = 0x1c3e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 16928));
label_1c3e60:
    // 0x1c3e60: 0xc07fa28  jal         func_1FE8A0
label_1c3e64:
    if (ctx->pc == 0x1C3E64u) {
        ctx->pc = 0x1C3E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3E60u;
        // 0x1c3e64: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3E68u;
        goto label_1c3e68;
    }
    ctx->pc = 0x1C3E60u;
    SET_GPR_U32(ctx, 31, 0x1C3E68u);
    ctx->pc = 0x1C3E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3E60u;
    // 0x1c3e64: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE8A0u, 0x1C3E60u, 0x1C3E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3E68u;
label_1c3e68:
    // 0x1c3e68: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1c3e68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1c3e6c:
    // 0x1c3e6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c3e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c3e70:
    // 0x1c3e70: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x1c3e70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c3e74:
    // 0x1c3e74: 0xc07faa8  jal         func_1FEAA0
label_1c3e78:
    if (ctx->pc == 0x1C3E78u) {
        ctx->pc = 0x1C3E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3E74u;
        // 0x1c3e78: 0x8fa7002c  lw          $a3, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3E7Cu;
        goto label_1c3e7c;
    }
    ctx->pc = 0x1C3E74u;
    SET_GPR_U32(ctx, 31, 0x1C3E7Cu);
    ctx->pc = 0x1C3E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3E74u;
    // 0x1c3e78: 0x8fa7002c  lw          $a3, 0x2C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEAA0u, 0x1C3E74u, 0x1C3E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3E7Cu;
label_1c3e7c:
    // 0x1c3e7c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1c3e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1c3e80:
    // 0x1c3e80: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1c3e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1c3e84:
    // 0x1c3e84: 0x50600018  beql        $v1, $zero, . + 4 + (0x18 << 2)
label_1c3e88:
    if (ctx->pc == 0x1C3E88u) {
        ctx->pc = 0x1C3E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3E84u;
        // 0x1c3e88: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3E8Cu;
        goto label_1c3e8c;
    }
    ctx->pc = 0x1C3E84u;
    {
        const bool branch_taken_0x1c3e84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3e84) {
            ctx->pc = 0x1C3E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3E84u;
            // 0x1c3e88: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3EE8u;
            goto label_1c3ee8;
        }
    }
    ctx->pc = 0x1C3E8Cu;
label_1c3e8c:
    // 0x1c3e8c: 0xc6210028  lwc1        $f1, 0x28($s1)
    ctx->pc = 0x1c3e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c3e90:
    // 0x1c3e90: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1c3e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1c3e94:
    // 0x1c3e94: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1c3e94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1c3e98:
    // 0x1c3e98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c3e98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c3e9c:
    // 0x1c3e9c: 0x0  nop
    ctx->pc = 0x1c3e9cu;
    // NOP
label_1c3ea0:
    // 0x1c3ea0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c3ea0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c3ea4:
    // 0x1c3ea4: 0x0  nop
    ctx->pc = 0x1c3ea4u;
    // NOP
label_1c3ea8:
    // 0x1c3ea8: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_1c3eac:
    if (ctx->pc == 0x1C3EACu) {
        ctx->pc = 0x1C3EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3EA8u;
        // 0x1c3eac: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3EB0u;
        goto label_1c3eb0;
    }
    ctx->pc = 0x1C3EA8u;
    {
        const bool branch_taken_0x1c3ea8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c3ea8) {
            ctx->pc = 0x1C3EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3EA8u;
            // 0x1c3eac: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3EC0u;
            goto label_1c3ec0;
        }
    }
    ctx->pc = 0x1C3EB0u;
label_1c3eb0:
    // 0x1c3eb0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c3eb0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1c3eb4:
    // 0x1c3eb4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1c3eb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1c3eb8:
    // 0x1c3eb8: 0xa60202ae  sh          $v0, 0x2AE($s0)
    ctx->pc = 0x1c3eb8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 686), (uint16_t)GPR_U32(ctx, 2));
label_1c3ebc:
    // 0x1c3ebc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1c3ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1c3ec0:
    // 0x1c3ec0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1c3ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1c3ec4:
    // 0x1c3ec4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1c3ec4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1c3ec8:
    // 0x1c3ec8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_1c3ecc:
    if (ctx->pc == 0x1C3ECCu) {
        ctx->pc = 0x1C3ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3EC8u;
        // 0x1c3ecc: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3ED0u;
        goto label_1c3ed0;
    }
    ctx->pc = 0x1C3EC8u;
    {
        const bool branch_taken_0x1c3ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3ec8) {
            ctx->pc = 0x1C3ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3EC8u;
            // 0x1c3ecc: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3EE8u;
            goto label_1c3ee8;
        }
    }
    ctx->pc = 0x1C3ED0u;
label_1c3ed0:
    // 0x1c3ed0: 0xfe150538  sd          $s5, 0x538($s0)
    ctx->pc = 0x1c3ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1336), GPR_U64(ctx, 21));
label_1c3ed4:
    // 0x1c3ed4: 0xde220038  ld          $v0, 0x38($s1)
    ctx->pc = 0x1c3ed4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 56)));
label_1c3ed8:
    // 0x1c3ed8: 0xfe020540  sd          $v0, 0x540($s0)
    ctx->pc = 0x1c3ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1344), GPR_U64(ctx, 2));
label_1c3edc:
    // 0x1c3edc: 0x9223002f  lbu         $v1, 0x2F($s1)
    ctx->pc = 0x1c3edcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 47)));
label_1c3ee0:
    // 0x1c3ee0: 0xa20302fd  sb          $v1, 0x2FD($s0)
    ctx->pc = 0x1c3ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 765), (uint8_t)GPR_U32(ctx, 3));
label_1c3ee4:
    // 0x1c3ee4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1c3ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1c3ee8:
    // 0x1c3ee8: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x1c3ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1c3eec:
    // 0x1c3eec: 0x3074ffff  andi        $s4, $v1, 0xFFFF
    ctx->pc = 0x1c3eecu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_1c3ef0:
    // 0x1c3ef0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1c3ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1c3ef4:
    // 0x1c3ef4: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x1c3ef4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1c3ef8:
    // 0x1c3ef8: 0x5440ff87  bnel        $v0, $zero, . + 4 + (-0x79 << 2)
label_1c3efc:
    if (ctx->pc == 0x1C3EFCu) {
        ctx->pc = 0x1C3EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3EF8u;
        // 0x1c3efc: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3F00u;
        goto label_1c3f00;
    }
    ctx->pc = 0x1C3EF8u;
    {
        const bool branch_taken_0x1c3ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3ef8) {
            ctx->pc = 0x1C3EFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3EF8u;
            // 0x1c3efc: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3d18;
        }
    }
    ctx->pc = 0x1C3F00u;
label_1c3f00:
    // 0x1c3f00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c3f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c3f04:
    // 0x1c3f04: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x1c3f04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1c3f08:
    // 0x1c3f08: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x1c3f08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1c3f0c:
    // 0x1c3f0c: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x1c3f0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1c3f10:
    // 0x1c3f10: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x1c3f10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1c3f14:
    // 0x1c3f14: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x1c3f14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1c3f18:
    // 0x1c3f18: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1c3f18u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1c3f1c:
    // 0x1c3f1c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1c3f1cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1c3f20:
    // 0x1c3f20: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x1c3f20u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1c3f24:
    // 0x1c3f24: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x1c3f24u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1c3f28:
    // 0x1c3f28: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1c3f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1c3f2c:
    // 0x1c3f2c: 0x3e00008  jr          $ra
label_1c3f30:
    if (ctx->pc == 0x1C3F30u) {
        ctx->pc = 0x1C3F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3F2Cu;
        // 0x1c3f30: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3F34u;
        goto label_1c3f34;
    }
    ctx->pc = 0x1C3F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3F2Cu;
        // 0x1c3f30: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3F34u;
label_1c3f34:
    // 0x1c3f34: 0x0  nop
    ctx->pc = 0x1c3f34u;
    // NOP
    ctx->pc = 0x1c3f38u;
}
