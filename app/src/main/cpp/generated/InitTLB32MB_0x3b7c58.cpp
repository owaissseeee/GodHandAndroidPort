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

// Function: InitTLB32MB
// Address: 0x3b7c58 - 0x3b7ec0
void InitTLB32MB_0x3b7c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitTLB32MB_0x3b7c58");
#endif

    switch (ctx->pc) {
        case 0x3b7c58u: goto label_3b7c58;
        case 0x3b7c5cu: goto label_3b7c5c;
        case 0x3b7c60u: goto label_3b7c60;
        case 0x3b7c64u: goto label_3b7c64;
        case 0x3b7c68u: goto label_3b7c68;
        case 0x3b7c6cu: goto label_3b7c6c;
        case 0x3b7c70u: goto label_3b7c70;
        case 0x3b7c74u: goto label_3b7c74;
        case 0x3b7c78u: goto label_3b7c78;
        case 0x3b7c7cu: goto label_3b7c7c;
        case 0x3b7c80u: goto label_3b7c80;
        case 0x3b7c84u: goto label_3b7c84;
        case 0x3b7c88u: goto label_3b7c88;
        case 0x3b7c8cu: goto label_3b7c8c;
        case 0x3b7c90u: goto label_3b7c90;
        case 0x3b7c94u: goto label_3b7c94;
        case 0x3b7c98u: goto label_3b7c98;
        case 0x3b7c9cu: goto label_3b7c9c;
        case 0x3b7ca0u: goto label_3b7ca0;
        case 0x3b7ca4u: goto label_3b7ca4;
        case 0x3b7ca8u: goto label_3b7ca8;
        case 0x3b7cacu: goto label_3b7cac;
        case 0x3b7cb0u: goto label_3b7cb0;
        case 0x3b7cb4u: goto label_3b7cb4;
        case 0x3b7cb8u: goto label_3b7cb8;
        case 0x3b7cbcu: goto label_3b7cbc;
        case 0x3b7cc0u: goto label_3b7cc0;
        case 0x3b7cc4u: goto label_3b7cc4;
        case 0x3b7cc8u: goto label_3b7cc8;
        case 0x3b7cccu: goto label_3b7ccc;
        case 0x3b7cd0u: goto label_3b7cd0;
        case 0x3b7cd4u: goto label_3b7cd4;
        case 0x3b7cd8u: goto label_3b7cd8;
        case 0x3b7cdcu: goto label_3b7cdc;
        case 0x3b7ce0u: goto label_3b7ce0;
        case 0x3b7ce4u: goto label_3b7ce4;
        case 0x3b7ce8u: goto label_3b7ce8;
        case 0x3b7cecu: goto label_3b7cec;
        case 0x3b7cf0u: goto label_3b7cf0;
        case 0x3b7cf4u: goto label_3b7cf4;
        case 0x3b7cf8u: goto label_3b7cf8;
        case 0x3b7cfcu: goto label_3b7cfc;
        case 0x3b7d00u: goto label_3b7d00;
        case 0x3b7d04u: goto label_3b7d04;
        case 0x3b7d08u: goto label_3b7d08;
        case 0x3b7d0cu: goto label_3b7d0c;
        case 0x3b7d10u: goto label_3b7d10;
        case 0x3b7d14u: goto label_3b7d14;
        case 0x3b7d18u: goto label_3b7d18;
        case 0x3b7d1cu: goto label_3b7d1c;
        case 0x3b7d20u: goto label_3b7d20;
        case 0x3b7d24u: goto label_3b7d24;
        case 0x3b7d28u: goto label_3b7d28;
        case 0x3b7d2cu: goto label_3b7d2c;
        case 0x3b7d30u: goto label_3b7d30;
        case 0x3b7d34u: goto label_3b7d34;
        case 0x3b7d38u: goto label_3b7d38;
        case 0x3b7d3cu: goto label_3b7d3c;
        case 0x3b7d40u: goto label_3b7d40;
        case 0x3b7d44u: goto label_3b7d44;
        case 0x3b7d48u: goto label_3b7d48;
        case 0x3b7d4cu: goto label_3b7d4c;
        case 0x3b7d50u: goto label_3b7d50;
        case 0x3b7d54u: goto label_3b7d54;
        case 0x3b7d58u: goto label_3b7d58;
        case 0x3b7d5cu: goto label_3b7d5c;
        case 0x3b7d60u: goto label_3b7d60;
        case 0x3b7d64u: goto label_3b7d64;
        case 0x3b7d68u: goto label_3b7d68;
        case 0x3b7d6cu: goto label_3b7d6c;
        case 0x3b7d70u: goto label_3b7d70;
        case 0x3b7d74u: goto label_3b7d74;
        case 0x3b7d78u: goto label_3b7d78;
        case 0x3b7d7cu: goto label_3b7d7c;
        case 0x3b7d80u: goto label_3b7d80;
        case 0x3b7d84u: goto label_3b7d84;
        case 0x3b7d88u: goto label_3b7d88;
        case 0x3b7d8cu: goto label_3b7d8c;
        case 0x3b7d90u: goto label_3b7d90;
        case 0x3b7d94u: goto label_3b7d94;
        case 0x3b7d98u: goto label_3b7d98;
        case 0x3b7d9cu: goto label_3b7d9c;
        case 0x3b7da0u: goto label_3b7da0;
        case 0x3b7da4u: goto label_3b7da4;
        case 0x3b7da8u: goto label_3b7da8;
        case 0x3b7dacu: goto label_3b7dac;
        case 0x3b7db0u: goto label_3b7db0;
        case 0x3b7db4u: goto label_3b7db4;
        case 0x3b7db8u: goto label_3b7db8;
        case 0x3b7dbcu: goto label_3b7dbc;
        case 0x3b7dc0u: goto label_3b7dc0;
        case 0x3b7dc4u: goto label_3b7dc4;
        case 0x3b7dc8u: goto label_3b7dc8;
        case 0x3b7dccu: goto label_3b7dcc;
        case 0x3b7dd0u: goto label_3b7dd0;
        case 0x3b7dd4u: goto label_3b7dd4;
        case 0x3b7dd8u: goto label_3b7dd8;
        case 0x3b7ddcu: goto label_3b7ddc;
        case 0x3b7de0u: goto label_3b7de0;
        case 0x3b7de4u: goto label_3b7de4;
        case 0x3b7de8u: goto label_3b7de8;
        case 0x3b7decu: goto label_3b7dec;
        case 0x3b7df0u: goto label_3b7df0;
        case 0x3b7df4u: goto label_3b7df4;
        case 0x3b7df8u: goto label_3b7df8;
        case 0x3b7dfcu: goto label_3b7dfc;
        case 0x3b7e00u: goto label_3b7e00;
        case 0x3b7e04u: goto label_3b7e04;
        case 0x3b7e08u: goto label_3b7e08;
        case 0x3b7e0cu: goto label_3b7e0c;
        case 0x3b7e10u: goto label_3b7e10;
        case 0x3b7e14u: goto label_3b7e14;
        case 0x3b7e18u: goto label_3b7e18;
        case 0x3b7e1cu: goto label_3b7e1c;
        case 0x3b7e20u: goto label_3b7e20;
        case 0x3b7e24u: goto label_3b7e24;
        case 0x3b7e28u: goto label_3b7e28;
        case 0x3b7e2cu: goto label_3b7e2c;
        case 0x3b7e30u: goto label_3b7e30;
        case 0x3b7e34u: goto label_3b7e34;
        case 0x3b7e38u: goto label_3b7e38;
        case 0x3b7e3cu: goto label_3b7e3c;
        case 0x3b7e40u: goto label_3b7e40;
        case 0x3b7e44u: goto label_3b7e44;
        case 0x3b7e48u: goto label_3b7e48;
        case 0x3b7e4cu: goto label_3b7e4c;
        case 0x3b7e50u: goto label_3b7e50;
        case 0x3b7e54u: goto label_3b7e54;
        case 0x3b7e58u: goto label_3b7e58;
        case 0x3b7e5cu: goto label_3b7e5c;
        case 0x3b7e60u: goto label_3b7e60;
        case 0x3b7e64u: goto label_3b7e64;
        case 0x3b7e68u: goto label_3b7e68;
        case 0x3b7e6cu: goto label_3b7e6c;
        case 0x3b7e70u: goto label_3b7e70;
        case 0x3b7e74u: goto label_3b7e74;
        case 0x3b7e78u: goto label_3b7e78;
        case 0x3b7e7cu: goto label_3b7e7c;
        case 0x3b7e80u: goto label_3b7e80;
        case 0x3b7e84u: goto label_3b7e84;
        case 0x3b7e88u: goto label_3b7e88;
        case 0x3b7e8cu: goto label_3b7e8c;
        case 0x3b7e90u: goto label_3b7e90;
        case 0x3b7e94u: goto label_3b7e94;
        case 0x3b7e98u: goto label_3b7e98;
        case 0x3b7e9cu: goto label_3b7e9c;
        case 0x3b7ea0u: goto label_3b7ea0;
        case 0x3b7ea4u: goto label_3b7ea4;
        case 0x3b7ea8u: goto label_3b7ea8;
        case 0x3b7eacu: goto label_3b7eac;
        case 0x3b7eb0u: goto label_3b7eb0;
        case 0x3b7eb4u: goto label_3b7eb4;
        case 0x3b7eb8u: goto label_3b7eb8;
        case 0x3b7ebcu: goto label_3b7ebc;
        default: break;
    }

    ctx->pc = 0x3b7c58u;

label_3b7c58:
    // 0x3b7c58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b7c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3b7c5c:
    // 0x3b7c5c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x3b7c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_3b7c60:
    // 0x3b7c60: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3b7c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_3b7c64:
    // 0x3b7c64: 0x24840398  addiu       $a0, $a0, 0x398
    ctx->pc = 0x3b7c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 920));
label_3b7c68:
    // 0x3b7c68: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3b7c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_3b7c6c:
    // 0x3b7c6c: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x3b7c6cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
label_3b7c70:
    // 0x3b7c70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b7c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3b7c74:
    // 0x3b7c74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b7c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3b7c78:
    // 0x3b7c78: 0x2650c4f0  addiu       $s0, $s2, -0x3B10
    ctx->pc = 0x3b7c78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952176));
label_3b7c7c:
    // 0x3b7c7c: 0x8e45c4f0  lw          $a1, -0x3B10($s2)
    ctx->pc = 0x3b7c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294952176)));
label_3b7c80:
    // 0x3b7c80: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x3b7c80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3b7c84:
    // 0x3b7c84: 0x8e090008  lw          $t1, 0x8($s0)
    ctx->pc = 0x3b7c84u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3b7c88:
    // 0x3b7c88: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3b7c88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b7c8c:
    // 0x3b7c8c: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x3b7c8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_3b7c90:
    // 0x3b7c90: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x3b7c90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_3b7c94:
    // 0x3b7c94: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x3b7c94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3b7c98:
    // 0x3b7c98: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3b7c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_3b7c9c:
    // 0x3b7c9c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x3b7c9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_3b7ca0:
    // 0x3b7ca0: 0xc0ec7ea  jal         func_3B1FA8
label_3b7ca4:
    if (ctx->pc == 0x3B7CA4u) {
        ctx->pc = 0x3B7CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7CA0u;
        // 0x3b7ca4: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7CA8u;
        goto label_3b7ca8;
    }
    ctx->pc = 0x3B7CA0u;
    SET_GPR_U32(ctx, 31, 0x3B7CA8u);
    ctx->pc = 0x3B7CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7CA0u;
    // 0x3b7ca4: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1FA8u, 0x3B7CA0u, 0x3B7CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7CA8u;
label_3b7ca8:
    // 0x3b7ca8: 0x40803000  mtc0        $zero, Wired
    ctx->pc = 0x3b7ca8u;
    ctx->cop0_wired = GPR_U32(ctx, 0) & 0x3F; ctx->cop0_random = 47;
label_3b7cac:
    // 0x3b7cac: 0x40f  sync.p
    ctx->pc = 0x3b7cacu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3b7cb0:
    // 0x3b7cb0: 0x8e51c4f0  lw          $s1, -0x3B10($s2)
    ctx->pc = 0x3b7cb0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294952176)));
label_3b7cb4:
    // 0x3b7cb4: 0x2a220031  slti        $v0, $s1, 0x31
    ctx->pc = 0x3b7cb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
label_3b7cb8:
    // 0x3b7cb8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_3b7cbc:
    if (ctx->pc == 0x3B7CBCu) {
        ctx->pc = 0x3B7CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7CB8u;
        // 0x3b7cbc: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7CC0u;
        goto label_3b7cc0;
    }
    ctx->pc = 0x3B7CB8u;
    {
        const bool branch_taken_0x3b7cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B7CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7CB8u;
        // 0x3b7cbc: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7cb8) {
            ctx->pc = 0x3B7CD4u;
            goto label_3b7cd4;
        }
    }
    ctx->pc = 0x3B7CC0u;
label_3b7cc0:
    // 0x3b7cc0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x3b7cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_3b7cc4:
    // 0x3b7cc4: 0xc0ec7ea  jal         func_3B1FA8
label_3b7cc8:
    if (ctx->pc == 0x3B7CC8u) {
        ctx->pc = 0x3B7CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7CC4u;
        // 0x3b7cc8: 0x248403d0  addiu       $a0, $a0, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7CCCu;
        goto label_3b7ccc;
    }
    ctx->pc = 0x3B7CC4u;
    SET_GPR_U32(ctx, 31, 0x3B7CCCu);
    ctx->pc = 0x3B7CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7CC4u;
    // 0x3b7cc8: 0x248403d0  addiu       $a0, $a0, 0x3D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1FA8u, 0x3B7CC4u, 0x3B7CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7CCCu;
label_3b7ccc:
    // 0x3b7ccc: 0xc0eda08  jal         func_3B6820
label_3b7cd0:
    if (ctx->pc == 0x3B7CD0u) {
        ctx->pc = 0x3B7CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7CCCu;
        // 0x3b7cd0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7CD4u;
        goto label_3b7cd4;
    }
    ctx->pc = 0x3B7CCCu;
    SET_GPR_U32(ctx, 31, 0x3B7CD4u);
    ctx->pc = 0x3B7CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7CCCu;
    // 0x3b7cd0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B6820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B6820u, 0x3B7CCCu, 0x3B7CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7CD4u;
label_3b7cd4:
    // 0x3b7cd4: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x3b7cd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_3b7cd8:
    // 0x3b7cd8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3b7cdc:
    if (ctx->pc == 0x3B7CDCu) {
        ctx->pc = 0x3B7CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7CD8u;
        // 0x3b7cdc: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7CE0u;
        goto label_3b7ce0;
    }
    ctx->pc = 0x3B7CD8u;
    {
        const bool branch_taken_0x3b7cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7CD8u;
        // 0x3b7cdc: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7cd8) {
            ctx->pc = 0x3B7D10u;
            goto label_3b7d10;
        }
    }
    ctx->pc = 0x3B7CE0u;
label_3b7ce0:
    // 0x3b7ce0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3b7ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b7ce4:
    // 0x3b7ce4: 0x0  nop
    ctx->pc = 0x3b7ce4u;
    // NOP
label_3b7ce8:
    // 0x3b7ce8: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x3b7ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_3b7cec:
    // 0x3b7cec: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x3b7cecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3b7cf0:
    // 0x3b7cf0: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x3b7cf0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3b7cf4:
    // 0x3b7cf4: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x3b7cf4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3b7cf8:
    // 0x3b7cf8: 0xc0edf02  jal         func_3B7C08
label_3b7cfc:
    if (ctx->pc == 0x3B7CFCu) {
        ctx->pc = 0x3B7CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7CF8u;
        // 0x3b7cfc: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7D00u;
        goto label_3b7d00;
    }
    ctx->pc = 0x3B7CF8u;
    SET_GPR_U32(ctx, 31, 0x3B7D00u);
    ctx->pc = 0x3B7CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7CF8u;
    // 0x3b7cfc: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7C08u, 0x3B7CF8u, 0x3B7D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7D00u;
label_3b7d00:
    // 0x3b7d00: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x3b7d00u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
label_3b7d04:
    // 0x3b7d04: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x3b7d04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_3b7d08:
    // 0x3b7d08: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_3b7d0c:
    if (ctx->pc == 0x3B7D0Cu) {
        ctx->pc = 0x3B7D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7D08u;
        // 0x3b7d0c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7D10u;
        goto label_3b7d10;
    }
    ctx->pc = 0x3B7D08u;
    {
        const bool branch_taken_0x3b7d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b7d08) {
            ctx->pc = 0x3B7D0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B7D08u;
            // 0x3b7d0c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B7CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b7ce8;
        }
    }
    ctx->pc = 0x3B7D10u;
label_3b7d10:
    // 0x3b7d10: 0x2650c4f0  addiu       $s0, $s2, -0x3B10
    ctx->pc = 0x3b7d10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952176));
label_3b7d14:
    // 0x3b7d14: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3b7d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3b7d18:
    // 0x3b7d18: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x3b7d18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
label_3b7d1c:
    // 0x3b7d1c: 0x2a230031  slti        $v1, $s1, 0x31
    ctx->pc = 0x3b7d1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
label_3b7d20:
    // 0x3b7d20: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_3b7d24:
    if (ctx->pc == 0x3B7D24u) {
        ctx->pc = 0x3B7D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7D20u;
        // 0x3b7d24: 0x331102a  slt         $v0, $t9, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7D28u;
        goto label_3b7d28;
    }
    ctx->pc = 0x3B7D20u;
    {
        const bool branch_taken_0x3b7d20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B7D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7D20u;
        // 0x3b7d24: 0x331102a  slt         $v0, $t9, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7d20) {
            ctx->pc = 0x3B7D40u;
            goto label_3b7d40;
        }
    }
    ctx->pc = 0x3B7D28u;
label_3b7d28:
    // 0x3b7d28: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x3b7d28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_3b7d2c:
    // 0x3b7d2c: 0xc0ec7ea  jal         func_3B1FA8
label_3b7d30:
    if (ctx->pc == 0x3B7D30u) {
        ctx->pc = 0x3B7D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7D2Cu;
        // 0x3b7d30: 0x248403e8  addiu       $a0, $a0, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7D34u;
        goto label_3b7d34;
    }
    ctx->pc = 0x3B7D2Cu;
    SET_GPR_U32(ctx, 31, 0x3B7D34u);
    ctx->pc = 0x3B7D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7D2Cu;
    // 0x3b7d30: 0x248403e8  addiu       $a0, $a0, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1FA8u, 0x3B7D2Cu, 0x3B7D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7D34u;
label_3b7d34:
    // 0x3b7d34: 0xc0eda08  jal         func_3B6820
label_3b7d38:
    if (ctx->pc == 0x3B7D38u) {
        ctx->pc = 0x3B7D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7D34u;
        // 0x3b7d38: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7D3Cu;
        goto label_3b7d3c;
    }
    ctx->pc = 0x3B7D34u;
    SET_GPR_U32(ctx, 31, 0x3B7D3Cu);
    ctx->pc = 0x3B7D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7D34u;
    // 0x3b7d38: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B6820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B6820u, 0x3B7D34u, 0x3B7D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7D3Cu;
label_3b7d3c:
    // 0x3b7d3c: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x3b7d3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_3b7d40:
    // 0x3b7d40: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3b7d44:
    if (ctx->pc == 0x3B7D44u) {
        ctx->pc = 0x3B7D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7D40u;
        // 0x3b7d44: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7D48u;
        goto label_3b7d48;
    }
    ctx->pc = 0x3B7D40u;
    {
        const bool branch_taken_0x3b7d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7D40u;
        // 0x3b7d44: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7d40) {
            ctx->pc = 0x3B7D78u;
            goto label_3b7d78;
        }
    }
    ctx->pc = 0x3B7D48u;
label_3b7d48:
    // 0x3b7d48: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3b7d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b7d4c:
    // 0x3b7d4c: 0x0  nop
    ctx->pc = 0x3b7d4cu;
    // NOP
label_3b7d50:
    // 0x3b7d50: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x3b7d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_3b7d54:
    // 0x3b7d54: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x3b7d54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3b7d58:
    // 0x3b7d58: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x3b7d58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3b7d5c:
    // 0x3b7d5c: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x3b7d5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3b7d60:
    // 0x3b7d60: 0xc0edf02  jal         func_3B7C08
label_3b7d64:
    if (ctx->pc == 0x3B7D64u) {
        ctx->pc = 0x3B7D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7D60u;
        // 0x3b7d64: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7D68u;
        goto label_3b7d68;
    }
    ctx->pc = 0x3B7D60u;
    SET_GPR_U32(ctx, 31, 0x3B7D68u);
    ctx->pc = 0x3B7D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7D60u;
    // 0x3b7d64: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7C08u, 0x3B7D60u, 0x3B7D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7D68u;
label_3b7d68:
    // 0x3b7d68: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x3b7d68u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
label_3b7d6c:
    // 0x3b7d6c: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x3b7d6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_3b7d70:
    // 0x3b7d70: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_3b7d74:
    if (ctx->pc == 0x3B7D74u) {
        ctx->pc = 0x3B7D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7D70u;
        // 0x3b7d74: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7D78u;
        goto label_3b7d78;
    }
    ctx->pc = 0x3B7D70u;
    {
        const bool branch_taken_0x3b7d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b7d70) {
            ctx->pc = 0x3B7D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B7D70u;
            // 0x3b7d74: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B7D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b7d50;
        }
    }
    ctx->pc = 0x3B7D78u;
label_3b7d78:
    // 0x3b7d78: 0x2650c4f0  addiu       $s0, $s2, -0x3B10
    ctx->pc = 0x3b7d78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952176));
label_3b7d7c:
    // 0x3b7d7c: 0xae19000c  sw          $t9, 0xC($s0)
    ctx->pc = 0x3b7d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 25));
label_3b7d80:
    // 0x3b7d80: 0x40993000  mtc0        $t9, Wired
    ctx->pc = 0x3b7d80u;
    ctx->cop0_wired = GPR_U32(ctx, 25) & 0x3F; ctx->cop0_random = 47;
label_3b7d84:
    // 0x3b7d84: 0x40f  sync.p
    ctx->pc = 0x3b7d84u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3b7d88:
    // 0x3b7d88: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3b7d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3b7d8c:
    // 0x3b7d8c: 0x58400019  blezl       $v0, . + 4 + (0x19 << 2)
label_3b7d90:
    if (ctx->pc == 0x3B7D90u) {
        ctx->pc = 0x3B7D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7D8Cu;
        // 0x3b7d90: 0x320802d  daddu       $s0, $t9, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7D94u;
        goto label_3b7d94;
    }
    ctx->pc = 0x3B7D8Cu;
    {
        const bool branch_taken_0x3b7d8c = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x3b7d8c) {
            ctx->pc = 0x3B7D90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B7D8Cu;
            // 0x3b7d90: 0x320802d  daddu       $s0, $t9, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B7DF4u;
            goto label_3b7df4;
        }
    }
    ctx->pc = 0x3B7D94u;
label_3b7d94:
    // 0x3b7d94: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x3b7d94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
label_3b7d98:
    // 0x3b7d98: 0x2a220031  slti        $v0, $s1, 0x31
    ctx->pc = 0x3b7d98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
label_3b7d9c:
    // 0x3b7d9c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_3b7da0:
    if (ctx->pc == 0x3B7DA0u) {
        ctx->pc = 0x3B7DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7D9Cu;
        // 0x3b7da0: 0x331102a  slt         $v0, $t9, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7DA4u;
        goto label_3b7da4;
    }
    ctx->pc = 0x3B7D9Cu;
    {
        const bool branch_taken_0x3b7d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B7DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7D9Cu;
        // 0x3b7da0: 0x331102a  slt         $v0, $t9, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7d9c) {
            ctx->pc = 0x3B7DBCu;
            goto label_3b7dbc;
        }
    }
    ctx->pc = 0x3B7DA4u;
label_3b7da4:
    // 0x3b7da4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x3b7da4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_3b7da8:
    // 0x3b7da8: 0xc0ec7ea  jal         func_3B1FA8
label_3b7dac:
    if (ctx->pc == 0x3B7DACu) {
        ctx->pc = 0x3B7DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7DA8u;
        // 0x3b7dac: 0x24840400  addiu       $a0, $a0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7DB0u;
        goto label_3b7db0;
    }
    ctx->pc = 0x3B7DA8u;
    SET_GPR_U32(ctx, 31, 0x3B7DB0u);
    ctx->pc = 0x3B7DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7DA8u;
    // 0x3b7dac: 0x24840400  addiu       $a0, $a0, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1FA8u, 0x3B7DA8u, 0x3B7DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7DB0u;
label_3b7db0:
    // 0x3b7db0: 0xc0eda08  jal         func_3B6820
label_3b7db4:
    if (ctx->pc == 0x3B7DB4u) {
        ctx->pc = 0x3B7DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7DB0u;
        // 0x3b7db4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7DB8u;
        goto label_3b7db8;
    }
    ctx->pc = 0x3B7DB0u;
    SET_GPR_U32(ctx, 31, 0x3B7DB8u);
    ctx->pc = 0x3B7DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7DB0u;
    // 0x3b7db4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B6820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B6820u, 0x3B7DB0u, 0x3B7DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7DB8u;
label_3b7db8:
    // 0x3b7db8: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x3b7db8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_3b7dbc:
    // 0x3b7dbc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_3b7dc0:
    if (ctx->pc == 0x3B7DC0u) {
        ctx->pc = 0x3B7DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7DBCu;
        // 0x3b7dc0: 0x8e100018  lw          $s0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7DC4u;
        goto label_3b7dc4;
    }
    ctx->pc = 0x3B7DBCu;
    {
        const bool branch_taken_0x3b7dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7DBCu;
        // 0x3b7dc0: 0x8e100018  lw          $s0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7dbc) {
            ctx->pc = 0x3B7DF0u;
            goto label_3b7df0;
        }
    }
    ctx->pc = 0x3B7DC4u;
label_3b7dc4:
    // 0x3b7dc4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3b7dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b7dc8:
    // 0x3b7dc8: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x3b7dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_3b7dcc:
    // 0x3b7dcc: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x3b7dccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3b7dd0:
    // 0x3b7dd0: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x3b7dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3b7dd4:
    // 0x3b7dd4: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x3b7dd4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3b7dd8:
    // 0x3b7dd8: 0xc0edf02  jal         func_3B7C08
label_3b7ddc:
    if (ctx->pc == 0x3B7DDCu) {
        ctx->pc = 0x3B7DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7DD8u;
        // 0x3b7ddc: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7DE0u;
        goto label_3b7de0;
    }
    ctx->pc = 0x3B7DD8u;
    SET_GPR_U32(ctx, 31, 0x3B7DE0u);
    ctx->pc = 0x3B7DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7DD8u;
    // 0x3b7ddc: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7C08u, 0x3B7DD8u, 0x3B7DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7DE0u;
label_3b7de0:
    // 0x3b7de0: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x3b7de0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
label_3b7de4:
    // 0x3b7de4: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x3b7de4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_3b7de8:
    // 0x3b7de8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_3b7dec:
    if (ctx->pc == 0x3B7DECu) {
        ctx->pc = 0x3B7DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7DE8u;
        // 0x3b7dec: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7DF0u;
        goto label_3b7df0;
    }
    ctx->pc = 0x3B7DE8u;
    {
        const bool branch_taken_0x3b7de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b7de8) {
            ctx->pc = 0x3B7DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B7DE8u;
            // 0x3b7dec: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B7DC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b7dc8;
        }
    }
    ctx->pc = 0x3B7DF0u;
label_3b7df0:
    // 0x3b7df0: 0x320802d  daddu       $s0, $t9, $zero
    ctx->pc = 0x3b7df0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_3b7df4:
    // 0x3b7df4: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x3b7df4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
label_3b7df8:
    // 0x3b7df8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3b7dfc:
    if (ctx->pc == 0x3B7DFCu) {
        ctx->pc = 0x3B7DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7DF8u;
        // 0x3b7dfc: 0x19cb40  sll         $t9, $t9, 13 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 25), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7E00u;
        goto label_3b7e00;
    }
    ctx->pc = 0x3B7DF8u;
    {
        const bool branch_taken_0x3b7df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7DF8u;
        // 0x3b7dfc: 0x19cb40  sll         $t9, $t9, 13 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 25), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7df8) {
            ctx->pc = 0x3B7E30u;
            goto label_3b7e30;
        }
    }
    ctx->pc = 0x3B7E00u;
label_3b7e00:
    // 0x3b7e00: 0x3c02e000  lui         $v0, 0xE000
    ctx->pc = 0x3b7e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57344 << 16));
label_3b7e04:
    // 0x3b7e04: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x3b7e04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
label_3b7e08:
    // 0x3b7e08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b7e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b7e0c:
    // 0x3b7e0c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3b7e0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b7e10:
    // 0x3b7e10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b7e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b7e14:
    // 0x3b7e14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b7e14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b7e18:
    // 0x3b7e18: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3b7e18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b7e1c:
    // 0x3b7e1c: 0xc0edf02  jal         func_3B7C08
label_3b7e20:
    if (ctx->pc == 0x3B7E20u) {
        ctx->pc = 0x3B7E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7E1Cu;
        // 0x3b7e20: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7E24u;
        goto label_3b7e24;
    }
    ctx->pc = 0x3B7E1Cu;
    SET_GPR_U32(ctx, 31, 0x3B7E24u);
    ctx->pc = 0x3B7E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7E1Cu;
    // 0x3b7e20: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7C08u, 0x3B7E1Cu, 0x3B7E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7E24u;
label_3b7e24:
    // 0x3b7e24: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x3b7e24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
label_3b7e28:
    // 0x3b7e28: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_3b7e2c:
    if (ctx->pc == 0x3B7E2Cu) {
        ctx->pc = 0x3B7E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7E28u;
        // 0x3b7e2c: 0x26312000  addiu       $s1, $s1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7E30u;
        goto label_3b7e30;
    }
    ctx->pc = 0x3B7E28u;
    {
        const bool branch_taken_0x3b7e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B7E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7E28u;
        // 0x3b7e2c: 0x26312000  addiu       $s1, $s1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7e28) {
            ctx->pc = 0x3B7E08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b7e08;
        }
    }
    ctx->pc = 0x3B7E30u;
label_3b7e30:
    // 0x3b7e30: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b7e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3b7e34:
    // 0x3b7e34: 0x320102d  daddu       $v0, $t9, $zero
    ctx->pc = 0x3b7e34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_3b7e38:
    // 0x3b7e38: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3b7e38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3b7e3c:
    // 0x3b7e3c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b7e3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3b7e40:
    // 0x3b7e40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b7e40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b7e44:
    // 0x3b7e44: 0x3e00008  jr          $ra
label_3b7e48:
    if (ctx->pc == 0x3B7E48u) {
        ctx->pc = 0x3B7E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7E44u;
        // 0x3b7e48: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7E4Cu;
        goto label_3b7e4c;
    }
    ctx->pc = 0x3B7E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B7E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7E44u;
        // 0x3b7e48: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B7E44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B7E4Cu;
label_3b7e4c:
    // 0x3b7e4c: 0x0  nop
    ctx->pc = 0x3b7e4cu;
    // NOP
label_3b7e50:
    // 0x3b7e50: 0x0  nop
    ctx->pc = 0x3b7e50u;
    // NOP
label_3b7e54:
    // 0x3b7e54: 0x0  nop
    ctx->pc = 0x3b7e54u;
    // NOP
label_3b7e58:
    // 0x3b7e58: 0x0  nop
    ctx->pc = 0x3b7e58u;
    // NOP
label_3b7e5c:
    // 0x3b7e5c: 0x0  nop
    ctx->pc = 0x3b7e5cu;
    // NOP
label_3b7e60:
    // 0x3b7e60: 0x0  nop
    ctx->pc = 0x3b7e60u;
    // NOP
label_3b7e64:
    // 0x3b7e64: 0x0  nop
    ctx->pc = 0x3b7e64u;
    // NOP
label_3b7e68:
    // 0x3b7e68: 0x0  nop
    ctx->pc = 0x3b7e68u;
    // NOP
label_3b7e6c:
    // 0x3b7e6c: 0x0  nop
    ctx->pc = 0x3b7e6cu;
    // NOP
label_3b7e70:
    // 0x3b7e70: 0x0  nop
    ctx->pc = 0x3b7e70u;
    // NOP
label_3b7e74:
    // 0x3b7e74: 0x0  nop
    ctx->pc = 0x3b7e74u;
    // NOP
label_3b7e78:
    // 0x3b7e78: 0x0  nop
    ctx->pc = 0x3b7e78u;
    // NOP
label_3b7e7c:
    // 0x3b7e7c: 0x0  nop
    ctx->pc = 0x3b7e7cu;
    // NOP
label_3b7e80:
    // 0x3b7e80: 0x3c010000  lui         $at, 0x0
    ctx->pc = 0x3b7e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)0 << 16));
label_3b7e84:
    // 0x3b7e84: 0x8c210000  lw          $at, 0x0($at)
    ctx->pc = 0x3b7e84u;
    SET_GPR_S32(ctx, 1, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 0)));
label_3b7e88:
    // 0x3b7e88: 0x3c1d0000  lui         $sp, 0x0
    ctx->pc = 0x3b7e88u;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)0 << 16));
label_3b7e8c:
    // 0x3b7e8c: 0x20f809  jalr        $at
label_3b7e90:
    if (ctx->pc == 0x3B7E90u) {
        ctx->pc = 0x3B7E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7E8Cu;
        // 0x3b7e90: 0x27bd1000  addiu       $sp, $sp, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7E94u;
        goto label_3b7e94;
    }
    ctx->pc = 0x3B7E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        SET_GPR_U32(ctx, 31, 0x3B7E94u);
        ctx->pc = 0x3B7E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7E8Cu;
        // 0x3b7e90: 0x27bd1000  addiu       $sp, $sp, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B7E8Cu, 0x3B7E94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B7E94u;
label_3b7e94:
    // 0x3b7e94: 0x2403ffac  addiu       $v1, $zero, -0x54
    ctx->pc = 0x3b7e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967212));
label_3b7e98:
    // 0x3b7e98: 0xc  syscall     0
    ctx->pc = 0x3b7e98u;
    ctx->pc = 0x3B7E9Cu;
if (!runtime->handleSyscall(rdram, ctx, 0x0u)) {
    return;
}
label_3b7e9c:
    // 0x3b7e9c: 0x0  nop
    ctx->pc = 0x3b7e9cu;
    // NOP
label_3b7ea0:
    // 0x3b7ea0: 0x0  nop
    ctx->pc = 0x3b7ea0u;
    // NOP
label_3b7ea4:
    // 0x3b7ea4: 0x0  nop
    ctx->pc = 0x3b7ea4u;
    // NOP
label_3b7ea8:
    // 0x3b7ea8: 0x0  nop
    ctx->pc = 0x3b7ea8u;
    // NOP
label_3b7eac:
    // 0x3b7eac: 0x0  nop
    ctx->pc = 0x3b7eacu;
    // NOP
label_3b7eb0:
    // 0x3b7eb0: 0x0  nop
    ctx->pc = 0x3b7eb0u;
    // NOP
label_3b7eb4:
    // 0x3b7eb4: 0x0  nop
    ctx->pc = 0x3b7eb4u;
    // NOP
label_3b7eb8:
    // 0x3b7eb8: 0x0  nop
    ctx->pc = 0x3b7eb8u;
    // NOP
label_3b7ebc:
    // 0x3b7ebc: 0x0  nop
    ctx->pc = 0x3b7ebcu;
    // NOP
    ctx->pc = 0x3b7ec0u;
}
