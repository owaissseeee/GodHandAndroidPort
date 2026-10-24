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

// Function: func_00351CB0
// Address: 0x351cb0 - 0x352008
void func_00351CB0_0x351cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00351CB0_0x351cb0");
#endif

    switch (ctx->pc) {
        case 0x351cb0u: goto label_351cb0;
        case 0x351cb4u: goto label_351cb4;
        case 0x351cb8u: goto label_351cb8;
        case 0x351cbcu: goto label_351cbc;
        case 0x351cc0u: goto label_351cc0;
        case 0x351cc4u: goto label_351cc4;
        case 0x351cc8u: goto label_351cc8;
        case 0x351cccu: goto label_351ccc;
        case 0x351cd0u: goto label_351cd0;
        case 0x351cd4u: goto label_351cd4;
        case 0x351cd8u: goto label_351cd8;
        case 0x351cdcu: goto label_351cdc;
        case 0x351ce0u: goto label_351ce0;
        case 0x351ce4u: goto label_351ce4;
        case 0x351ce8u: goto label_351ce8;
        case 0x351cecu: goto label_351cec;
        case 0x351cf0u: goto label_351cf0;
        case 0x351cf4u: goto label_351cf4;
        case 0x351cf8u: goto label_351cf8;
        case 0x351cfcu: goto label_351cfc;
        case 0x351d00u: goto label_351d00;
        case 0x351d04u: goto label_351d04;
        case 0x351d08u: goto label_351d08;
        case 0x351d0cu: goto label_351d0c;
        case 0x351d10u: goto label_351d10;
        case 0x351d14u: goto label_351d14;
        case 0x351d18u: goto label_351d18;
        case 0x351d1cu: goto label_351d1c;
        case 0x351d20u: goto label_351d20;
        case 0x351d24u: goto label_351d24;
        case 0x351d28u: goto label_351d28;
        case 0x351d2cu: goto label_351d2c;
        case 0x351d30u: goto label_351d30;
        case 0x351d34u: goto label_351d34;
        case 0x351d38u: goto label_351d38;
        case 0x351d3cu: goto label_351d3c;
        case 0x351d40u: goto label_351d40;
        case 0x351d44u: goto label_351d44;
        case 0x351d48u: goto label_351d48;
        case 0x351d4cu: goto label_351d4c;
        case 0x351d50u: goto label_351d50;
        case 0x351d54u: goto label_351d54;
        case 0x351d58u: goto label_351d58;
        case 0x351d5cu: goto label_351d5c;
        case 0x351d60u: goto label_351d60;
        case 0x351d64u: goto label_351d64;
        case 0x351d68u: goto label_351d68;
        case 0x351d6cu: goto label_351d6c;
        case 0x351d70u: goto label_351d70;
        case 0x351d74u: goto label_351d74;
        case 0x351d78u: goto label_351d78;
        case 0x351d7cu: goto label_351d7c;
        case 0x351d80u: goto label_351d80;
        case 0x351d84u: goto label_351d84;
        case 0x351d88u: goto label_351d88;
        case 0x351d8cu: goto label_351d8c;
        case 0x351d90u: goto label_351d90;
        case 0x351d94u: goto label_351d94;
        case 0x351d98u: goto label_351d98;
        case 0x351d9cu: goto label_351d9c;
        case 0x351da0u: goto label_351da0;
        case 0x351da4u: goto label_351da4;
        case 0x351da8u: goto label_351da8;
        case 0x351dacu: goto label_351dac;
        case 0x351db0u: goto label_351db0;
        case 0x351db4u: goto label_351db4;
        case 0x351db8u: goto label_351db8;
        case 0x351dbcu: goto label_351dbc;
        case 0x351dc0u: goto label_351dc0;
        case 0x351dc4u: goto label_351dc4;
        case 0x351dc8u: goto label_351dc8;
        case 0x351dccu: goto label_351dcc;
        case 0x351dd0u: goto label_351dd0;
        case 0x351dd4u: goto label_351dd4;
        case 0x351dd8u: goto label_351dd8;
        case 0x351ddcu: goto label_351ddc;
        case 0x351de0u: goto label_351de0;
        case 0x351de4u: goto label_351de4;
        case 0x351de8u: goto label_351de8;
        case 0x351decu: goto label_351dec;
        case 0x351df0u: goto label_351df0;
        case 0x351df4u: goto label_351df4;
        case 0x351df8u: goto label_351df8;
        case 0x351dfcu: goto label_351dfc;
        case 0x351e00u: goto label_351e00;
        case 0x351e04u: goto label_351e04;
        case 0x351e08u: goto label_351e08;
        case 0x351e0cu: goto label_351e0c;
        case 0x351e10u: goto label_351e10;
        case 0x351e14u: goto label_351e14;
        case 0x351e18u: goto label_351e18;
        case 0x351e1cu: goto label_351e1c;
        case 0x351e20u: goto label_351e20;
        case 0x351e24u: goto label_351e24;
        case 0x351e28u: goto label_351e28;
        case 0x351e2cu: goto label_351e2c;
        case 0x351e30u: goto label_351e30;
        case 0x351e34u: goto label_351e34;
        case 0x351e38u: goto label_351e38;
        case 0x351e3cu: goto label_351e3c;
        case 0x351e40u: goto label_351e40;
        case 0x351e44u: goto label_351e44;
        case 0x351e48u: goto label_351e48;
        case 0x351e4cu: goto label_351e4c;
        case 0x351e50u: goto label_351e50;
        case 0x351e54u: goto label_351e54;
        case 0x351e58u: goto label_351e58;
        case 0x351e5cu: goto label_351e5c;
        case 0x351e60u: goto label_351e60;
        case 0x351e64u: goto label_351e64;
        case 0x351e68u: goto label_351e68;
        case 0x351e6cu: goto label_351e6c;
        case 0x351e70u: goto label_351e70;
        case 0x351e74u: goto label_351e74;
        case 0x351e78u: goto label_351e78;
        case 0x351e7cu: goto label_351e7c;
        case 0x351e80u: goto label_351e80;
        case 0x351e84u: goto label_351e84;
        case 0x351e88u: goto label_351e88;
        case 0x351e8cu: goto label_351e8c;
        case 0x351e90u: goto label_351e90;
        case 0x351e94u: goto label_351e94;
        case 0x351e98u: goto label_351e98;
        case 0x351e9cu: goto label_351e9c;
        case 0x351ea0u: goto label_351ea0;
        case 0x351ea4u: goto label_351ea4;
        case 0x351ea8u: goto label_351ea8;
        case 0x351eacu: goto label_351eac;
        case 0x351eb0u: goto label_351eb0;
        case 0x351eb4u: goto label_351eb4;
        case 0x351eb8u: goto label_351eb8;
        case 0x351ebcu: goto label_351ebc;
        case 0x351ec0u: goto label_351ec0;
        case 0x351ec4u: goto label_351ec4;
        case 0x351ec8u: goto label_351ec8;
        case 0x351eccu: goto label_351ecc;
        case 0x351ed0u: goto label_351ed0;
        case 0x351ed4u: goto label_351ed4;
        case 0x351ed8u: goto label_351ed8;
        case 0x351edcu: goto label_351edc;
        case 0x351ee0u: goto label_351ee0;
        case 0x351ee4u: goto label_351ee4;
        case 0x351ee8u: goto label_351ee8;
        case 0x351eecu: goto label_351eec;
        case 0x351ef0u: goto label_351ef0;
        case 0x351ef4u: goto label_351ef4;
        case 0x351ef8u: goto label_351ef8;
        case 0x351efcu: goto label_351efc;
        case 0x351f00u: goto label_351f00;
        case 0x351f04u: goto label_351f04;
        case 0x351f08u: goto label_351f08;
        case 0x351f0cu: goto label_351f0c;
        case 0x351f10u: goto label_351f10;
        case 0x351f14u: goto label_351f14;
        case 0x351f18u: goto label_351f18;
        case 0x351f1cu: goto label_351f1c;
        case 0x351f20u: goto label_351f20;
        case 0x351f24u: goto label_351f24;
        case 0x351f28u: goto label_351f28;
        case 0x351f2cu: goto label_351f2c;
        case 0x351f30u: goto label_351f30;
        case 0x351f34u: goto label_351f34;
        case 0x351f38u: goto label_351f38;
        case 0x351f3cu: goto label_351f3c;
        case 0x351f40u: goto label_351f40;
        case 0x351f44u: goto label_351f44;
        case 0x351f48u: goto label_351f48;
        case 0x351f4cu: goto label_351f4c;
        case 0x351f50u: goto label_351f50;
        case 0x351f54u: goto label_351f54;
        case 0x351f58u: goto label_351f58;
        case 0x351f5cu: goto label_351f5c;
        case 0x351f60u: goto label_351f60;
        case 0x351f64u: goto label_351f64;
        case 0x351f68u: goto label_351f68;
        case 0x351f6cu: goto label_351f6c;
        case 0x351f70u: goto label_351f70;
        case 0x351f74u: goto label_351f74;
        case 0x351f78u: goto label_351f78;
        case 0x351f7cu: goto label_351f7c;
        case 0x351f80u: goto label_351f80;
        case 0x351f84u: goto label_351f84;
        case 0x351f88u: goto label_351f88;
        case 0x351f8cu: goto label_351f8c;
        case 0x351f90u: goto label_351f90;
        case 0x351f94u: goto label_351f94;
        case 0x351f98u: goto label_351f98;
        case 0x351f9cu: goto label_351f9c;
        case 0x351fa0u: goto label_351fa0;
        case 0x351fa4u: goto label_351fa4;
        case 0x351fa8u: goto label_351fa8;
        case 0x351facu: goto label_351fac;
        case 0x351fb0u: goto label_351fb0;
        case 0x351fb4u: goto label_351fb4;
        case 0x351fb8u: goto label_351fb8;
        case 0x351fbcu: goto label_351fbc;
        case 0x351fc0u: goto label_351fc0;
        case 0x351fc4u: goto label_351fc4;
        case 0x351fc8u: goto label_351fc8;
        case 0x351fccu: goto label_351fcc;
        case 0x351fd0u: goto label_351fd0;
        case 0x351fd4u: goto label_351fd4;
        case 0x351fd8u: goto label_351fd8;
        case 0x351fdcu: goto label_351fdc;
        case 0x351fe0u: goto label_351fe0;
        case 0x351fe4u: goto label_351fe4;
        case 0x351fe8u: goto label_351fe8;
        case 0x351fecu: goto label_351fec;
        case 0x351ff0u: goto label_351ff0;
        case 0x351ff4u: goto label_351ff4;
        case 0x351ff8u: goto label_351ff8;
        case 0x351ffcu: goto label_351ffc;
        case 0x352000u: goto label_352000;
        case 0x352004u: goto label_352004;
        default: break;
    }

    ctx->pc = 0x351cb0u;

label_351cb0:
    // 0x351cb0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x351cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_351cb4:
    // 0x351cb4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x351cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_351cb8:
    // 0x351cb8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x351cb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_351cbc:
    // 0x351cbc: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x351cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_351cc0:
    // 0x351cc0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x351cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_351cc4:
    // 0x351cc4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x351cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_351cc8:
    // 0x351cc8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x351cc8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_351ccc:
    // 0x351ccc: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x351cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_351cd0:
    // 0x351cd0: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x351cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_351cd4:
    // 0x351cd4: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x351cd4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_351cd8:
    // 0x351cd8: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x351cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
label_351cdc:
    // 0x351cdc: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x351cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
label_351ce0:
    // 0x351ce0: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x351ce0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_351ce4:
    // 0x351ce4: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x351ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_351ce8:
    // 0x351ce8: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x351ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_351cec:
    // 0x351cec: 0x8e931fc0  lw          $s3, 0x1FC0($s4)
    ctx->pc = 0x351cecu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8128)));
label_351cf0:
    // 0x351cf0: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x351cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
label_351cf4:
    // 0x351cf4: 0x26771080  addiu       $s7, $s3, 0x1080
    ctx->pc = 0x351cf4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 4224));
label_351cf8:
    // 0x351cf8: 0x2675008c  addiu       $s5, $s3, 0x8C
    ctx->pc = 0x351cf8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 140));
label_351cfc:
    // 0x351cfc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x351cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_351d00:
    // 0x351d00: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x351d00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_351d04:
    // 0x351d04: 0xaee00010  sw          $zero, 0x10($s7)
    ctx->pc = 0x351d04u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 16), GPR_U32(ctx, 0));
label_351d08:
    // 0x351d08: 0x8ee5000c  lw          $a1, 0xC($s7)
    ctx->pc = 0x351d08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
label_351d0c:
    // 0x351d0c: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x351d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_351d10:
    // 0x351d10: 0xc0da8ea  jal         func_36A3A8
label_351d14:
    if (ctx->pc == 0x351D14u) {
        ctx->pc = 0x351D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351D10u;
        // 0x351d14: 0x8ee60008  lw          $a2, 0x8($s7) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351D18u;
        goto label_351d18;
    }
    ctx->pc = 0x351D10u;
    SET_GPR_U32(ctx, 31, 0x351D18u);
    ctx->pc = 0x351D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351D10u;
    // 0x351d14: 0x8ee60008  lw          $a2, 0x8($s7) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A3A8u, 0x351D10u, 0x351D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351D18u;
label_351d18:
    // 0x351d18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x351d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_351d1c:
    // 0x351d1c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x351d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_351d20:
    // 0x351d20: 0xc0ce804  jal         func_33A010
label_351d24:
    if (ctx->pc == 0x351D24u) {
        ctx->pc = 0x351D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351D20u;
        // 0x351d24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351D28u;
        goto label_351d28;
    }
    ctx->pc = 0x351D20u;
    SET_GPR_U32(ctx, 31, 0x351D28u);
    ctx->pc = 0x351D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351D20u;
    // 0x351d24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A010u, 0x351D20u, 0x351D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351D28u;
label_351d28:
    // 0x351d28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x351d28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_351d2c:
    // 0x351d2c: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x351d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_351d30:
    // 0x351d30: 0xc0da8fa  jal         func_36A3E8
label_351d34:
    if (ctx->pc == 0x351D34u) {
        ctx->pc = 0x351D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351D30u;
        // 0x351d34: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351D38u;
        goto label_351d38;
    }
    ctx->pc = 0x351D30u;
    SET_GPR_U32(ctx, 31, 0x351D38u);
    ctx->pc = 0x351D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351D30u;
    // 0x351d34: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A3E8u, 0x351D30u, 0x351D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351D38u;
label_351d38:
    // 0x351d38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x351d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_351d3c:
    // 0x351d3c: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x351d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_351d40:
    // 0x351d40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x351d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_351d44:
    // 0x351d44: 0xc0ce804  jal         func_33A010
label_351d48:
    if (ctx->pc == 0x351D48u) {
        ctx->pc = 0x351D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351D44u;
        // 0x351d48: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351D4Cu;
        goto label_351d4c;
    }
    ctx->pc = 0x351D44u;
    SET_GPR_U32(ctx, 31, 0x351D4Cu);
    ctx->pc = 0x351D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351D44u;
    // 0x351d48: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A010u, 0x351D44u, 0x351D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351D4Cu;
label_351d4c:
    // 0x351d4c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x351d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_351d50:
    // 0x351d50: 0x528823  subu        $s1, $v0, $s2
    ctx->pc = 0x351d50u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_351d54:
    // 0x351d54: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x351d54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_351d58:
    // 0x351d58: 0x3c07ff00  lui         $a3, 0xFF00
    ctx->pc = 0x351d58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65280 << 16));
label_351d5c:
    // 0x351d5c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x351d5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_351d60:
    // 0x351d60: 0xc0d4706  jal         func_351C18
label_351d64:
    if (ctx->pc == 0x351D64u) {
        ctx->pc = 0x351D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351D60u;
        // 0x351d64: 0x34e70f04  ori         $a3, $a3, 0xF04 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)3844);
        ctx->in_delay_slot = false;
        ctx->pc = 0x351D68u;
        goto label_351d68;
    }
    ctx->pc = 0x351D60u;
    SET_GPR_U32(ctx, 31, 0x351D68u);
    ctx->pc = 0x351D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351D60u;
    // 0x351d64: 0x34e70f04  ori         $a3, $a3, 0xF04 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)3844);
    ctx->in_delay_slot = false;
    ctx->pc = 0x351C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351C18u, 0x351D60u, 0x351D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351D68u;
label_351d68:
    // 0x351d68: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x351d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_351d6c:
    // 0x351d6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x351d6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_351d70:
    // 0x351d70: 0xc0d46dc  jal         func_351B70
label_351d74:
    if (ctx->pc == 0x351D74u) {
        ctx->pc = 0x351D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351D70u;
        // 0x351d74: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351D78u;
        goto label_351d78;
    }
    ctx->pc = 0x351D70u;
    SET_GPR_U32(ctx, 31, 0x351D78u);
    ctx->pc = 0x351D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351D70u;
    // 0x351d74: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351B70u, 0x351D70u, 0x351D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351D78u;
label_351d78:
    // 0x351d78: 0x16000097  bnez        $s0, . + 4 + (0x97 << 2)
label_351d7c:
    if (ctx->pc == 0x351D7Cu) {
        ctx->pc = 0x351D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351D78u;
        // 0x351d7c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351D80u;
        goto label_351d80;
    }
    ctx->pc = 0x351D78u;
    {
        const bool branch_taken_0x351d78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x351D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351D78u;
        // 0x351d7c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351d78) {
            ctx->pc = 0x351FD8u;
            goto label_351fd8;
        }
    }
    ctx->pc = 0x351D80u;
label_351d80:
    // 0x351d80: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x351d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_351d84:
    // 0x351d84: 0x2410fffe  addiu       $s0, $zero, -0x2
    ctx->pc = 0x351d84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_351d88:
    // 0x351d88: 0x10700093  beq         $v1, $s0, . + 4 + (0x93 << 2)
label_351d8c:
    if (ctx->pc == 0x351D8Cu) {
        ctx->pc = 0x351D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351D88u;
        // 0x351d8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351D90u;
        goto label_351d90;
    }
    ctx->pc = 0x351D88u;
    {
        const bool branch_taken_0x351d88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x351D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351D88u;
        // 0x351d8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351d88) {
            ctx->pc = 0x351FD8u;
            goto label_351fd8;
        }
    }
    ctx->pc = 0x351D90u;
label_351d90:
    // 0x351d90: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x351d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_351d94:
    // 0x351d94: 0xc0da834  jal         func_36A0D0
label_351d98:
    if (ctx->pc == 0x351D98u) {
        ctx->pc = 0x351D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351D94u;
        // 0x351d98: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351D9Cu;
        goto label_351d9c;
    }
    ctx->pc = 0x351D94u;
    SET_GPR_U32(ctx, 31, 0x351D9Cu);
    ctx->pc = 0x351D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351D94u;
    // 0x351d98: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A0D0u, 0x351D94u, 0x351D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351D9Cu;
label_351d9c:
    // 0x351d9c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x351d9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_351da0:
    // 0x351da0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_351da4:
    if (ctx->pc == 0x351DA4u) {
        ctx->pc = 0x351DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351DA0u;
        // 0x351da4: 0xaec30000  sw          $v1, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351DA8u;
        goto label_351da8;
    }
    ctx->pc = 0x351DA0u;
    {
        const bool branch_taken_0x351da0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x351DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351DA0u;
        // 0x351da4: 0xaec30000  sw          $v1, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351da0) {
            ctx->pc = 0x351DC0u;
            goto label_351dc0;
        }
    }
    ctx->pc = 0x351DA8u;
label_351da8:
    // 0x351da8: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x351da8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
label_351dac:
    // 0x351dac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x351dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_351db0:
    // 0x351db0: 0xc0d375c  jal         func_34DD70
label_351db4:
    if (ctx->pc == 0x351DB4u) {
        ctx->pc = 0x351DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351DB0u;
        // 0x351db4: 0x34a50f05  ori         $a1, $a1, 0xF05 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3845);
        ctx->in_delay_slot = false;
        ctx->pc = 0x351DB8u;
        goto label_351db8;
    }
    ctx->pc = 0x351DB0u;
    SET_GPR_U32(ctx, 31, 0x351DB8u);
    ctx->pc = 0x351DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351DB0u;
    // 0x351db4: 0x34a50f05  ori         $a1, $a1, 0xF05 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3845);
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x351DB0u, 0x351DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351DB8u;
label_351db8:
    // 0x351db8: 0x10000088  b           . + 4 + (0x88 << 2)
label_351dbc:
    if (ctx->pc == 0x351DBCu) {
        ctx->pc = 0x351DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351DB8u;
        // 0x351dbc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351DC0u;
        goto label_351dc0;
    }
    ctx->pc = 0x351DB8u;
    {
        const bool branch_taken_0x351db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351DB8u;
        // 0x351dbc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351db8) {
            ctx->pc = 0x351FDCu;
            goto label_351fdc;
        }
    }
    ctx->pc = 0x351DC0u;
label_351dc0:
    // 0x351dc0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x351dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_351dc4:
    // 0x351dc4: 0x30710040  andi        $s1, $v1, 0x40
    ctx->pc = 0x351dc4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_351dc8:
    // 0x351dc8: 0x5220001e  beql        $s1, $zero, . + 4 + (0x1E << 2)
label_351dcc:
    if (ctx->pc == 0x351DCCu) {
        ctx->pc = 0x351DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351DC8u;
        // 0x351dcc: 0x8ea40018  lw          $a0, 0x18($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351DD0u;
        goto label_351dd0;
    }
    ctx->pc = 0x351DC8u;
    {
        const bool branch_taken_0x351dc8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x351dc8) {
            ctx->pc = 0x351DCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x351DC8u;
            // 0x351dcc: 0x8ea40018  lw          $a0, 0x18($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351E44u;
            goto label_351e44;
        }
    }
    ctx->pc = 0x351DD0u;
label_351dd0:
    // 0x351dd0: 0x8e84090c  lw          $a0, 0x90C($s4)
    ctx->pc = 0x351dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2316)));
label_351dd4:
    // 0x351dd4: 0x1880000a  blez        $a0, . + 4 + (0xA << 2)
label_351dd8:
    if (ctx->pc == 0x351DD8u) {
        ctx->pc = 0x351DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351DD4u;
        // 0x351dd8: 0x2405005f  addiu       $a1, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351DDCu;
        goto label_351ddc;
    }
    ctx->pc = 0x351DD4u;
    {
        const bool branch_taken_0x351dd4 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x351DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351DD4u;
        // 0x351dd8: 0x2405005f  addiu       $a1, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351dd4) {
            ctx->pc = 0x351E00u;
            goto label_351e00;
        }
    }
    ctx->pc = 0x351DDCu;
label_351ddc:
    // 0x351ddc: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x351ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_351de0:
    // 0x351de0: 0x5483007d  bnel        $a0, $v1, . + 4 + (0x7D << 2)
label_351de4:
    if (ctx->pc == 0x351DE4u) {
        ctx->pc = 0x351DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351DE0u;
        // 0x351de4: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351DE8u;
        goto label_351de8;
    }
    ctx->pc = 0x351DE0u;
    {
        const bool branch_taken_0x351de0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x351de0) {
            ctx->pc = 0x351DE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x351DE0u;
            // 0x351de4: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351FD8u;
            goto label_351fd8;
        }
    }
    ctx->pc = 0x351DE8u;
label_351de8:
    // 0x351de8: 0x8e840910  lw          $a0, 0x910($s4)
    ctx->pc = 0x351de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2320)));
label_351dec:
    // 0x351dec: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x351decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_351df0:
    // 0x351df0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_351df4:
    if (ctx->pc == 0x351DF4u) {
        ctx->pc = 0x351DF8u;
        goto label_351df8;
    }
    ctx->pc = 0x351DF0u;
    {
        const bool branch_taken_0x351df0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x351df0) {
            ctx->pc = 0x351E00u;
            goto label_351e00;
        }
    }
    ctx->pc = 0x351DF8u;
label_351df8:
    // 0x351df8: 0x10000077  b           . + 4 + (0x77 << 2)
label_351dfc:
    if (ctx->pc == 0x351DFCu) {
        ctx->pc = 0x351DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351DF8u;
        // 0x351dfc: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351E00u;
        goto label_351e00;
    }
    ctx->pc = 0x351DF8u;
    {
        const bool branch_taken_0x351df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351DF8u;
        // 0x351dfc: 0xaed00000  sw          $s0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351df8) {
            ctx->pc = 0x351FD8u;
            goto label_351fd8;
        }
    }
    ctx->pc = 0x351E00u;
label_351e00:
    // 0x351e00: 0xc0d6872  jal         func_35A1C8
label_351e04:
    if (ctx->pc == 0x351E04u) {
        ctx->pc = 0x351E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E00u;
        // 0x351e04: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351E08u;
        goto label_351e08;
    }
    ctx->pc = 0x351E00u;
    SET_GPR_U32(ctx, 31, 0x351E08u);
    ctx->pc = 0x351E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351E00u;
    // 0x351e04: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x351E00u, 0x351E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351E08u;
label_351e08:
    // 0x351e08: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x351e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_351e0c:
    // 0x351e0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x351e0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_351e10:
    // 0x351e10: 0xc0d6872  jal         func_35A1C8
label_351e14:
    if (ctx->pc == 0x351E14u) {
        ctx->pc = 0x351E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E10u;
        // 0x351e14: 0x2405005f  addiu       $a1, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351E18u;
        goto label_351e18;
    }
    ctx->pc = 0x351E10u;
    SET_GPR_U32(ctx, 31, 0x351E18u);
    ctx->pc = 0x351E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351E10u;
    // 0x351e14: 0x2405005f  addiu       $a1, $zero, 0x5F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x351E10u, 0x351E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351E18u;
label_351e18:
    // 0x351e18: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_351e1c:
    if (ctx->pc == 0x351E1Cu) {
        ctx->pc = 0x351E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E18u;
        // 0x351e1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351E20u;
        goto label_351e20;
    }
    ctx->pc = 0x351E18u;
    {
        const bool branch_taken_0x351e18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x351E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E18u;
        // 0x351e1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351e18) {
            ctx->pc = 0x351E40u;
            goto label_351e40;
        }
    }
    ctx->pc = 0x351E20u;
label_351e20:
    // 0x351e20: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x351e20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_351e24:
    // 0x351e24: 0x200f809  jalr        $s0
label_351e28:
    if (ctx->pc == 0x351E28u) {
        ctx->pc = 0x351E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E24u;
        // 0x351e28: 0x8ea60004  lw          $a2, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351E2Cu;
        goto label_351e2c;
    }
    ctx->pc = 0x351E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x351E2Cu);
        ctx->pc = 0x351E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E24u;
        // 0x351e28: 0x8ea60004  lw          $a2, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351E24u, 0x351E2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x351E2Cu;
label_351e2c:
    // 0x351e2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_351e30:
    if (ctx->pc == 0x351E30u) {
        ctx->pc = 0x351E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E2Cu;
        // 0x351e30: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351E34u;
        goto label_351e34;
    }
    ctx->pc = 0x351E2Cu;
    {
        const bool branch_taken_0x351e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E2Cu;
        // 0x351e30: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351e2c) {
            ctx->pc = 0x351E40u;
            goto label_351e40;
        }
    }
    ctx->pc = 0x351E34u;
label_351e34:
    // 0x351e34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x351e34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_351e38:
    // 0x351e38: 0x10000067  b           . + 4 + (0x67 << 2)
label_351e3c:
    if (ctx->pc == 0x351E3Cu) {
        ctx->pc = 0x351E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E38u;
        // 0x351e3c: 0xaec30000  sw          $v1, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351E40u;
        goto label_351e40;
    }
    ctx->pc = 0x351E38u;
    {
        const bool branch_taken_0x351e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E38u;
        // 0x351e3c: 0xaec30000  sw          $v1, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351e38) {
            ctx->pc = 0x351FD8u;
            goto label_351fd8;
        }
    }
    ctx->pc = 0x351E40u;
label_351e40:
    // 0x351e40: 0x8ea40018  lw          $a0, 0x18($s5)
    ctx->pc = 0x351e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_351e44:
    // 0x351e44: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x351e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_351e48:
    // 0x351e48: 0x54860003  bnel        $a0, $a2, . + 4 + (0x3 << 2)
label_351e4c:
    if (ctx->pc == 0x351E4Cu) {
        ctx->pc = 0x351E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E48u;
        // 0x351e4c: 0x8e850038  lw          $a1, 0x38($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351E50u;
        goto label_351e50;
    }
    ctx->pc = 0x351E48u;
    {
        const bool branch_taken_0x351e48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x351e48) {
            ctx->pc = 0x351E4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x351E48u;
            // 0x351e4c: 0x8e850038  lw          $a1, 0x38($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351E58u;
            goto label_351e58;
        }
    }
    ctx->pc = 0x351E50u;
label_351e50:
    // 0x351e50: 0x10000019  b           . + 4 + (0x19 << 2)
label_351e54:
    if (ctx->pc == 0x351E54u) {
        ctx->pc = 0x351E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E50u;
        // 0x351e54: 0xae600174  sw          $zero, 0x174($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 372), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351E58u;
        goto label_351e58;
    }
    ctx->pc = 0x351E50u;
    {
        const bool branch_taken_0x351e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E50u;
        // 0x351e54: 0xae600174  sw          $zero, 0x174($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 372), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351e50) {
            ctx->pc = 0x351EB8u;
            goto label_351eb8;
        }
    }
    ctx->pc = 0x351E58u;
label_351e58:
    // 0x351e58: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x351e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_351e5c:
    // 0x351e5c: 0x54a20017  bnel        $a1, $v0, . + 4 + (0x17 << 2)
label_351e60:
    if (ctx->pc == 0x351E60u) {
        ctx->pc = 0x351E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E5Cu;
        // 0x351e60: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351E64u;
        goto label_351e64;
    }
    ctx->pc = 0x351E5Cu;
    {
        const bool branch_taken_0x351e5c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x351e5c) {
            ctx->pc = 0x351E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x351E5Cu;
            // 0x351e60: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351EBCu;
            goto label_351ebc;
        }
    }
    ctx->pc = 0x351E64u;
label_351e64:
    // 0x351e64: 0x8e630164  lw          $v1, 0x164($s3)
    ctx->pc = 0x351e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 356)));
label_351e68:
    // 0x351e68: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_351e6c:
    if (ctx->pc == 0x351E6Cu) {
        ctx->pc = 0x351E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E68u;
        // 0x351e6c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351E70u;
        goto label_351e70;
    }
    ctx->pc = 0x351E68u;
    {
        const bool branch_taken_0x351e68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x351E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E68u;
        // 0x351e6c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351e68) {
            ctx->pc = 0x351EB8u;
            goto label_351eb8;
        }
    }
    ctx->pc = 0x351E70u;
label_351e70:
    // 0x351e70: 0x1482000b  bne         $a0, $v0, . + 4 + (0xB << 2)
label_351e74:
    if (ctx->pc == 0x351E74u) {
        ctx->pc = 0x351E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E70u;
        // 0x351e74: 0x8c630070  lw          $v1, 0x70($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351E78u;
        goto label_351e78;
    }
    ctx->pc = 0x351E70u;
    {
        const bool branch_taken_0x351e70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x351E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E70u;
        // 0x351e74: 0x8c630070  lw          $v1, 0x70($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351e70) {
            ctx->pc = 0x351EA0u;
            goto label_351ea0;
        }
    }
    ctx->pc = 0x351E78u;
label_351e78:
    // 0x351e78: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x351e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_351e7c:
    // 0x351e7c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x351e7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_351e80:
    // 0x351e80: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_351e84:
    if (ctx->pc == 0x351E84u) {
        ctx->pc = 0x351E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E80u;
        // 0x351e84: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351E88u;
        goto label_351e88;
    }
    ctx->pc = 0x351E80u;
    {
        const bool branch_taken_0x351e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E80u;
        // 0x351e84: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351e80) {
            ctx->pc = 0x351EBCu;
            goto label_351ebc;
        }
    }
    ctx->pc = 0x351E88u;
label_351e88:
    // 0x351e88: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x351e88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
label_351e8c:
    // 0x351e8c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_351e90:
    if (ctx->pc == 0x351E90u) {
        ctx->pc = 0x351E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E8Cu;
        // 0x351e90: 0x26e60010  addiu       $a2, $s7, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351E94u;
        goto label_351e94;
    }
    ctx->pc = 0x351E8Cu;
    {
        const bool branch_taken_0x351e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x351e8c) {
            ctx->pc = 0x351E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x351E8Cu;
            // 0x351e90: 0x26e60010  addiu       $a2, $s7, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351EC0u;
            goto label_351ec0;
        }
    }
    ctx->pc = 0x351E94u;
label_351e94:
    // 0x351e94: 0x10000008  b           . + 4 + (0x8 << 2)
label_351e98:
    if (ctx->pc == 0x351E98u) {
        ctx->pc = 0x351E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E94u;
        // 0x351e98: 0xae660174  sw          $a2, 0x174($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 372), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351E9Cu;
        goto label_351e9c;
    }
    ctx->pc = 0x351E94u;
    {
        const bool branch_taken_0x351e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351E94u;
        // 0x351e98: 0xae660174  sw          $a2, 0x174($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 372), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351e94) {
            ctx->pc = 0x351EB8u;
            goto label_351eb8;
        }
    }
    ctx->pc = 0x351E9Cu;
label_351e9c:
    // 0x351e9c: 0x0  nop
    ctx->pc = 0x351e9cu;
    // NOP
label_351ea0:
    // 0x351ea0: 0x14850006  bne         $a0, $a1, . + 4 + (0x6 << 2)
label_351ea4:
    if (ctx->pc == 0x351EA4u) {
        ctx->pc = 0x351EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351EA0u;
        // 0x351ea4: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351EA8u;
        goto label_351ea8;
    }
    ctx->pc = 0x351EA0u;
    {
        const bool branch_taken_0x351ea0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x351EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351EA0u;
        // 0x351ea4: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351ea0) {
            ctx->pc = 0x351EBCu;
            goto label_351ebc;
        }
    }
    ctx->pc = 0x351EA8u;
label_351ea8:
    // 0x351ea8: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x351ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_351eac:
    // 0x351eac: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x351eacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_351eb0:
    // 0x351eb0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_351eb4:
    if (ctx->pc == 0x351EB4u) {
        ctx->pc = 0x351EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351EB0u;
        // 0x351eb4: 0xae660174  sw          $a2, 0x174($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 372), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351EB8u;
        goto label_351eb8;
    }
    ctx->pc = 0x351EB0u;
    {
        const bool branch_taken_0x351eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x351eb0) {
            ctx->pc = 0x351EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x351EB0u;
            // 0x351eb4: 0xae660174  sw          $a2, 0x174($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 372), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351EB8u;
            goto label_351eb8;
        }
    }
    ctx->pc = 0x351EB8u;
label_351eb8:
    // 0x351eb8: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x351eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_351ebc:
    // 0x351ebc: 0x26e60010  addiu       $a2, $s7, 0x10
    ctx->pc = 0x351ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
label_351ec0:
    // 0x351ec0: 0xc0da8f0  jal         func_36A3C0
label_351ec4:
    if (ctx->pc == 0x351EC4u) {
        ctx->pc = 0x351EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351EC0u;
        // 0x351ec4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351EC8u;
        goto label_351ec8;
    }
    ctx->pc = 0x351EC0u;
    SET_GPR_U32(ctx, 31, 0x351EC8u);
    ctx->pc = 0x351EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351EC0u;
    // 0x351ec4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A3C0u, 0x351EC0u, 0x351EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351EC8u;
label_351ec8:
    // 0x351ec8: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x351ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_351ecc:
    // 0x351ecc: 0x8ea30030  lw          $v1, 0x30($s5)
    ctx->pc = 0x351eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
label_351ed0:
    // 0x351ed0: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_351ed4:
    if (ctx->pc == 0x351ED4u) {
        ctx->pc = 0x351ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351ED0u;
        // 0x351ed4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351ED8u;
        goto label_351ed8;
    }
    ctx->pc = 0x351ED0u;
    {
        const bool branch_taken_0x351ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x351ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351ED0u;
        // 0x351ed4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351ed0) {
            ctx->pc = 0x351EE8u;
            goto label_351ee8;
        }
    }
    ctx->pc = 0x351ED8u;
label_351ed8:
    // 0x351ed8: 0xae63010c  sw          $v1, 0x10C($s3)
    ctx->pc = 0x351ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 3));
label_351edc:
    // 0x351edc: 0x10000003  b           . + 4 + (0x3 << 2)
label_351ee0:
    if (ctx->pc == 0x351EE0u) {
        ctx->pc = 0x351EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351EDCu;
        // 0x351ee0: 0xae620110  sw          $v0, 0x110($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351EE4u;
        goto label_351ee4;
    }
    ctx->pc = 0x351EDCu;
    {
        const bool branch_taken_0x351edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351EDCu;
        // 0x351ee0: 0xae620110  sw          $v0, 0x110($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351edc) {
            ctx->pc = 0x351EECu;
            goto label_351eec;
        }
    }
    ctx->pc = 0x351EE4u;
label_351ee4:
    // 0x351ee4: 0x0  nop
    ctx->pc = 0x351ee4u;
    // NOP
label_351ee8:
    // 0x351ee8: 0xae600110  sw          $zero, 0x110($s3)
    ctx->pc = 0x351ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 272), GPR_U32(ctx, 0));
label_351eec:
    // 0x351eec: 0x52200015  beql        $s1, $zero, . + 4 + (0x15 << 2)
label_351ef0:
    if (ctx->pc == 0x351EF0u) {
        ctx->pc = 0x351EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351EECu;
        // 0x351ef0: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351EF4u;
        goto label_351ef4;
    }
    ctx->pc = 0x351EECu;
    {
        const bool branch_taken_0x351eec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x351eec) {
            ctx->pc = 0x351EF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x351EECu;
            // 0x351ef0: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351F44u;
            goto label_351f44;
        }
    }
    ctx->pc = 0x351EF4u;
label_351ef4:
    // 0x351ef4: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x351ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
label_351ef8:
    // 0x351ef8: 0xc0d6872  jal         func_35A1C8
label_351efc:
    if (ctx->pc == 0x351EFCu) {
        ctx->pc = 0x351EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351EF8u;
        // 0x351efc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351F00u;
        goto label_351f00;
    }
    ctx->pc = 0x351EF8u;
    SET_GPR_U32(ctx, 31, 0x351F00u);
    ctx->pc = 0x351EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351EF8u;
    // 0x351efc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x351EF8u, 0x351F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351F00u;
label_351f00:
    // 0x351f00: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x351f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_351f04:
    // 0x351f04: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x351f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_351f08:
    // 0x351f08: 0xc0d6872  jal         func_35A1C8
label_351f0c:
    if (ctx->pc == 0x351F0Cu) {
        ctx->pc = 0x351F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351F08u;
        // 0x351f0c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351F10u;
        goto label_351f10;
    }
    ctx->pc = 0x351F08u;
    SET_GPR_U32(ctx, 31, 0x351F10u);
    ctx->pc = 0x351F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351F08u;
    // 0x351f0c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x351F08u, 0x351F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351F10u;
label_351f10:
    // 0x351f10: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_351f14:
    if (ctx->pc == 0x351F14u) {
        ctx->pc = 0x351F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351F10u;
        // 0x351f14: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351F18u;
        goto label_351f18;
    }
    ctx->pc = 0x351F10u;
    {
        const bool branch_taken_0x351f10 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x351F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351F10u;
        // 0x351f14: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351f10) {
            ctx->pc = 0x351F40u;
            goto label_351f40;
        }
    }
    ctx->pc = 0x351F18u;
label_351f18:
    // 0x351f18: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x351f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_351f1c:
    // 0x351f1c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x351f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_351f20:
    // 0x351f20: 0xc0da4dc  jal         func_369370
label_351f24:
    if (ctx->pc == 0x351F24u) {
        ctx->pc = 0x351F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351F20u;
        // 0x351f24: 0x8fc50004  lw          $a1, 0x4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351F28u;
        goto label_351f28;
    }
    ctx->pc = 0x351F20u;
    SET_GPR_U32(ctx, 31, 0x351F28u);
    ctx->pc = 0x351F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351F20u;
    // 0x351f24: 0x8fc50004  lw          $a1, 0x4($fp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369370u, 0x351F20u, 0x351F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351F28u;
label_351f28:
    // 0x351f28: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_351f2c:
    if (ctx->pc == 0x351F2Cu) {
        ctx->pc = 0x351F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351F28u;
        // 0x351f2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351F30u;
        goto label_351f30;
    }
    ctx->pc = 0x351F28u;
    {
        const bool branch_taken_0x351f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351F28u;
        // 0x351f2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351f28) {
            ctx->pc = 0x351F40u;
            goto label_351f40;
        }
    }
    ctx->pc = 0x351F30u;
label_351f30:
    // 0x351f30: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x351f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_351f34:
    // 0x351f34: 0x453023  subu        $a2, $v0, $a1
    ctx->pc = 0x351f34u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_351f38:
    // 0x351f38: 0x220f809  jalr        $s1
label_351f3c:
    if (ctx->pc == 0x351F3Cu) {
        ctx->pc = 0x351F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351F38u;
        // 0x351f3c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351F40u;
        goto label_351f40;
    }
    ctx->pc = 0x351F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 17);
        SET_GPR_U32(ctx, 31, 0x351F40u);
        ctx->pc = 0x351F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351F38u;
        // 0x351f3c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351F38u, 0x351F40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x351F40u;
label_351f40:
    // 0x351f40: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x351f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_351f44:
    // 0x351f44: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x351f44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_351f48:
    // 0x351f48: 0xc0da4dc  jal         func_369370
label_351f4c:
    if (ctx->pc == 0x351F4Cu) {
        ctx->pc = 0x351F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351F48u;
        // 0x351f4c: 0x8fc50004  lw          $a1, 0x4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351F50u;
        goto label_351f50;
    }
    ctx->pc = 0x351F48u;
    SET_GPR_U32(ctx, 31, 0x351F50u);
    ctx->pc = 0x351F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351F48u;
    // 0x351f4c: 0x8fc50004  lw          $a1, 0x4($fp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369370u, 0x351F48u, 0x351F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351F50u;
label_351f50:
    // 0x351f50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x351f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_351f54:
    // 0x351f54: 0x8e690110  lw          $t1, 0x110($s3)
    ctx->pc = 0x351f54u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
label_351f58:
    // 0x351f58: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x351f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_351f5c:
    // 0x351f5c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x351f5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_351f60:
    // 0x351f60: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x351f60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_351f64:
    // 0x351f64: 0xc0d4802  jal         func_352008
label_351f68:
    if (ctx->pc == 0x351F68u) {
        ctx->pc = 0x351F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351F64u;
        // 0x351f68: 0x27a80008  addiu       $t0, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351F6Cu;
        goto label_351f6c;
    }
    ctx->pc = 0x351F64u;
    SET_GPR_U32(ctx, 31, 0x351F6Cu);
    ctx->pc = 0x351F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351F64u;
    // 0x351f68: 0x27a80008  addiu       $t0, $sp, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x352008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x352008u, 0x351F64u, 0x351F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351F6Cu;
label_351f6c:
    // 0x351f6c: 0x8e630078  lw          $v1, 0x78($s3)
    ctx->pc = 0x351f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
label_351f70:
    // 0x351f70: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x351f70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_351f74:
    // 0x351f74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x351f74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_351f78:
    // 0x351f78: 0xdfa40008  ld          $a0, 0x8($sp)
    ctx->pc = 0x351f78u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_351f7c:
    // 0x351f7c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x351f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_351f80:
    // 0x351f80: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_351f84:
    if (ctx->pc == 0x351F84u) {
        ctx->pc = 0x351F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351F80u;
        // 0x351f84: 0xfe641120  sd          $a0, 0x1120($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 4384), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351F88u;
        goto label_351f88;
    }
    ctx->pc = 0x351F80u;
    {
        const bool branch_taken_0x351f80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x351F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351F80u;
        // 0x351f84: 0xfe641120  sd          $a0, 0x1120($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 4384), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351f80) {
            ctx->pc = 0x351FD8u;
            goto label_351fd8;
        }
    }
    ctx->pc = 0x351F88u;
label_351f88:
    // 0x351f88: 0x8e660110  lw          $a2, 0x110($s3)
    ctx->pc = 0x351f88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
label_351f8c:
    // 0x351f8c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x351f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_351f90:
    // 0x351f90: 0xc0d48a6  jal         func_352298
label_351f94:
    if (ctx->pc == 0x351F94u) {
        ctx->pc = 0x351F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351F90u;
        // 0x351f94: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351F98u;
        goto label_351f98;
    }
    ctx->pc = 0x351F90u;
    SET_GPR_U32(ctx, 31, 0x351F98u);
    ctx->pc = 0x351F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351F90u;
    // 0x351f94: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x352298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x352298u, 0x351F90u, 0x351F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351F98u;
label_351f98:
    // 0x351f98: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x351f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_351f9c:
    // 0x351f9c: 0x8e670110  lw          $a3, 0x110($s3)
    ctx->pc = 0x351f9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
label_351fa0:
    // 0x351fa0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x351fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_351fa4:
    // 0x351fa4: 0xc0d497c  jal         func_3525F0
label_351fa8:
    if (ctx->pc == 0x351FA8u) {
        ctx->pc = 0x351FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351FA4u;
        // 0x351fa8: 0xdfa60000  ld          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351FACu;
        goto label_351fac;
    }
    ctx->pc = 0x351FA4u;
    SET_GPR_U32(ctx, 31, 0x351FACu);
    ctx->pc = 0x351FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351FA4u;
    // 0x351fa8: 0xdfa60000  ld          $a2, 0x0($sp) (Delay Slot)
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3525F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3525F0u, 0x351FA4u, 0x351FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351FACu;
label_351fac:
    // 0x351fac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x351facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_351fb0:
    // 0x351fb0: 0xc0d4ae6  jal         func_352B98
label_351fb4:
    if (ctx->pc == 0x351FB4u) {
        ctx->pc = 0x351FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351FB0u;
        // 0x351fb4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351FB8u;
        goto label_351fb8;
    }
    ctx->pc = 0x351FB0u;
    SET_GPR_U32(ctx, 31, 0x351FB8u);
    ctx->pc = 0x351FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351FB0u;
    // 0x351fb4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x352B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x352B98u, 0x351FB0u, 0x351FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351FB8u;
label_351fb8:
    // 0x351fb8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x351fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_351fbc:
    // 0x351fbc: 0xc0d4b1e  jal         func_352C78
label_351fc0:
    if (ctx->pc == 0x351FC0u) {
        ctx->pc = 0x351FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351FBCu;
        // 0x351fc0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351FC4u;
        goto label_351fc4;
    }
    ctx->pc = 0x351FBCu;
    SET_GPR_U32(ctx, 31, 0x351FC4u);
    ctx->pc = 0x351FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351FBCu;
    // 0x351fc0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x352C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x352C78u, 0x351FBCu, 0x351FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351FC4u;
label_351fc4:
    // 0x351fc4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x351fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_351fc8:
    // 0x351fc8: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x351fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_351fcc:
    // 0x351fcc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x351fccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_351fd0:
    // 0x351fd0: 0xc0d4b84  jal         func_352E10
label_351fd4:
    if (ctx->pc == 0x351FD4u) {
        ctx->pc = 0x351FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351FD0u;
        // 0x351fd4: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351FD8u;
        goto label_351fd8;
    }
    ctx->pc = 0x351FD0u;
    SET_GPR_U32(ctx, 31, 0x351FD8u);
    ctx->pc = 0x351FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351FD0u;
    // 0x351fd4: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x352E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x352E10u, 0x351FD0u, 0x351FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351FD8u;
label_351fd8:
    // 0x351fd8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x351fd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_351fdc:
    // 0x351fdc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x351fdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_351fe0:
    // 0x351fe0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x351fe0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_351fe4:
    // 0x351fe4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x351fe4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_351fe8:
    // 0x351fe8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x351fe8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_351fec:
    // 0x351fec: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x351fecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_351ff0:
    // 0x351ff0: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x351ff0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_351ff4:
    // 0x351ff4: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x351ff4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_351ff8:
    // 0x351ff8: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x351ff8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_351ffc:
    // 0x351ffc: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x351ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_352000:
    // 0x352000: 0x3e00008  jr          $ra
label_352004:
    if (ctx->pc == 0x352004u) {
        ctx->pc = 0x352004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352000u;
        // 0x352004: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x352008u;
        goto label_fallthrough_0x352000;
    }
    ctx->pc = 0x352000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x352004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352000u;
        // 0x352004: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x352000:
    ctx->pc = 0x352008u;
}
