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

// Function: func_00326CB8
// Address: 0x326cb8 - 0x327048
void func_00326CB8_0x326cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00326CB8_0x326cb8");
#endif

    switch (ctx->pc) {
        case 0x326cb8u: goto label_326cb8;
        case 0x326cbcu: goto label_326cbc;
        case 0x326cc0u: goto label_326cc0;
        case 0x326cc4u: goto label_326cc4;
        case 0x326cc8u: goto label_326cc8;
        case 0x326cccu: goto label_326ccc;
        case 0x326cd0u: goto label_326cd0;
        case 0x326cd4u: goto label_326cd4;
        case 0x326cd8u: goto label_326cd8;
        case 0x326cdcu: goto label_326cdc;
        case 0x326ce0u: goto label_326ce0;
        case 0x326ce4u: goto label_326ce4;
        case 0x326ce8u: goto label_326ce8;
        case 0x326cecu: goto label_326cec;
        case 0x326cf0u: goto label_326cf0;
        case 0x326cf4u: goto label_326cf4;
        case 0x326cf8u: goto label_326cf8;
        case 0x326cfcu: goto label_326cfc;
        case 0x326d00u: goto label_326d00;
        case 0x326d04u: goto label_326d04;
        case 0x326d08u: goto label_326d08;
        case 0x326d0cu: goto label_326d0c;
        case 0x326d10u: goto label_326d10;
        case 0x326d14u: goto label_326d14;
        case 0x326d18u: goto label_326d18;
        case 0x326d1cu: goto label_326d1c;
        case 0x326d20u: goto label_326d20;
        case 0x326d24u: goto label_326d24;
        case 0x326d28u: goto label_326d28;
        case 0x326d2cu: goto label_326d2c;
        case 0x326d30u: goto label_326d30;
        case 0x326d34u: goto label_326d34;
        case 0x326d38u: goto label_326d38;
        case 0x326d3cu: goto label_326d3c;
        case 0x326d40u: goto label_326d40;
        case 0x326d44u: goto label_326d44;
        case 0x326d48u: goto label_326d48;
        case 0x326d4cu: goto label_326d4c;
        case 0x326d50u: goto label_326d50;
        case 0x326d54u: goto label_326d54;
        case 0x326d58u: goto label_326d58;
        case 0x326d5cu: goto label_326d5c;
        case 0x326d60u: goto label_326d60;
        case 0x326d64u: goto label_326d64;
        case 0x326d68u: goto label_326d68;
        case 0x326d6cu: goto label_326d6c;
        case 0x326d70u: goto label_326d70;
        case 0x326d74u: goto label_326d74;
        case 0x326d78u: goto label_326d78;
        case 0x326d7cu: goto label_326d7c;
        case 0x326d80u: goto label_326d80;
        case 0x326d84u: goto label_326d84;
        case 0x326d88u: goto label_326d88;
        case 0x326d8cu: goto label_326d8c;
        case 0x326d90u: goto label_326d90;
        case 0x326d94u: goto label_326d94;
        case 0x326d98u: goto label_326d98;
        case 0x326d9cu: goto label_326d9c;
        case 0x326da0u: goto label_326da0;
        case 0x326da4u: goto label_326da4;
        case 0x326da8u: goto label_326da8;
        case 0x326dacu: goto label_326dac;
        case 0x326db0u: goto label_326db0;
        case 0x326db4u: goto label_326db4;
        case 0x326db8u: goto label_326db8;
        case 0x326dbcu: goto label_326dbc;
        case 0x326dc0u: goto label_326dc0;
        case 0x326dc4u: goto label_326dc4;
        case 0x326dc8u: goto label_326dc8;
        case 0x326dccu: goto label_326dcc;
        case 0x326dd0u: goto label_326dd0;
        case 0x326dd4u: goto label_326dd4;
        case 0x326dd8u: goto label_326dd8;
        case 0x326ddcu: goto label_326ddc;
        case 0x326de0u: goto label_326de0;
        case 0x326de4u: goto label_326de4;
        case 0x326de8u: goto label_326de8;
        case 0x326decu: goto label_326dec;
        case 0x326df0u: goto label_326df0;
        case 0x326df4u: goto label_326df4;
        case 0x326df8u: goto label_326df8;
        case 0x326dfcu: goto label_326dfc;
        case 0x326e00u: goto label_326e00;
        case 0x326e04u: goto label_326e04;
        case 0x326e08u: goto label_326e08;
        case 0x326e0cu: goto label_326e0c;
        case 0x326e10u: goto label_326e10;
        case 0x326e14u: goto label_326e14;
        case 0x326e18u: goto label_326e18;
        case 0x326e1cu: goto label_326e1c;
        case 0x326e20u: goto label_326e20;
        case 0x326e24u: goto label_326e24;
        case 0x326e28u: goto label_326e28;
        case 0x326e2cu: goto label_326e2c;
        case 0x326e30u: goto label_326e30;
        case 0x326e34u: goto label_326e34;
        case 0x326e38u: goto label_326e38;
        case 0x326e3cu: goto label_326e3c;
        case 0x326e40u: goto label_326e40;
        case 0x326e44u: goto label_326e44;
        case 0x326e48u: goto label_326e48;
        case 0x326e4cu: goto label_326e4c;
        case 0x326e50u: goto label_326e50;
        case 0x326e54u: goto label_326e54;
        case 0x326e58u: goto label_326e58;
        case 0x326e5cu: goto label_326e5c;
        case 0x326e60u: goto label_326e60;
        case 0x326e64u: goto label_326e64;
        case 0x326e68u: goto label_326e68;
        case 0x326e6cu: goto label_326e6c;
        case 0x326e70u: goto label_326e70;
        case 0x326e74u: goto label_326e74;
        case 0x326e78u: goto label_326e78;
        case 0x326e7cu: goto label_326e7c;
        case 0x326e80u: goto label_326e80;
        case 0x326e84u: goto label_326e84;
        case 0x326e88u: goto label_326e88;
        case 0x326e8cu: goto label_326e8c;
        case 0x326e90u: goto label_326e90;
        case 0x326e94u: goto label_326e94;
        case 0x326e98u: goto label_326e98;
        case 0x326e9cu: goto label_326e9c;
        case 0x326ea0u: goto label_326ea0;
        case 0x326ea4u: goto label_326ea4;
        case 0x326ea8u: goto label_326ea8;
        case 0x326eacu: goto label_326eac;
        case 0x326eb0u: goto label_326eb0;
        case 0x326eb4u: goto label_326eb4;
        case 0x326eb8u: goto label_326eb8;
        case 0x326ebcu: goto label_326ebc;
        case 0x326ec0u: goto label_326ec0;
        case 0x326ec4u: goto label_326ec4;
        case 0x326ec8u: goto label_326ec8;
        case 0x326eccu: goto label_326ecc;
        case 0x326ed0u: goto label_326ed0;
        case 0x326ed4u: goto label_326ed4;
        case 0x326ed8u: goto label_326ed8;
        case 0x326edcu: goto label_326edc;
        case 0x326ee0u: goto label_326ee0;
        case 0x326ee4u: goto label_326ee4;
        case 0x326ee8u: goto label_326ee8;
        case 0x326eecu: goto label_326eec;
        case 0x326ef0u: goto label_326ef0;
        case 0x326ef4u: goto label_326ef4;
        case 0x326ef8u: goto label_326ef8;
        case 0x326efcu: goto label_326efc;
        case 0x326f00u: goto label_326f00;
        case 0x326f04u: goto label_326f04;
        case 0x326f08u: goto label_326f08;
        case 0x326f0cu: goto label_326f0c;
        case 0x326f10u: goto label_326f10;
        case 0x326f14u: goto label_326f14;
        case 0x326f18u: goto label_326f18;
        case 0x326f1cu: goto label_326f1c;
        case 0x326f20u: goto label_326f20;
        case 0x326f24u: goto label_326f24;
        case 0x326f28u: goto label_326f28;
        case 0x326f2cu: goto label_326f2c;
        case 0x326f30u: goto label_326f30;
        case 0x326f34u: goto label_326f34;
        case 0x326f38u: goto label_326f38;
        case 0x326f3cu: goto label_326f3c;
        case 0x326f40u: goto label_326f40;
        case 0x326f44u: goto label_326f44;
        case 0x326f48u: goto label_326f48;
        case 0x326f4cu: goto label_326f4c;
        case 0x326f50u: goto label_326f50;
        case 0x326f54u: goto label_326f54;
        case 0x326f58u: goto label_326f58;
        case 0x326f5cu: goto label_326f5c;
        case 0x326f60u: goto label_326f60;
        case 0x326f64u: goto label_326f64;
        case 0x326f68u: goto label_326f68;
        case 0x326f6cu: goto label_326f6c;
        case 0x326f70u: goto label_326f70;
        case 0x326f74u: goto label_326f74;
        case 0x326f78u: goto label_326f78;
        case 0x326f7cu: goto label_326f7c;
        case 0x326f80u: goto label_326f80;
        case 0x326f84u: goto label_326f84;
        case 0x326f88u: goto label_326f88;
        case 0x326f8cu: goto label_326f8c;
        case 0x326f90u: goto label_326f90;
        case 0x326f94u: goto label_326f94;
        case 0x326f98u: goto label_326f98;
        case 0x326f9cu: goto label_326f9c;
        case 0x326fa0u: goto label_326fa0;
        case 0x326fa4u: goto label_326fa4;
        case 0x326fa8u: goto label_326fa8;
        case 0x326facu: goto label_326fac;
        case 0x326fb0u: goto label_326fb0;
        case 0x326fb4u: goto label_326fb4;
        case 0x326fb8u: goto label_326fb8;
        case 0x326fbcu: goto label_326fbc;
        case 0x326fc0u: goto label_326fc0;
        case 0x326fc4u: goto label_326fc4;
        case 0x326fc8u: goto label_326fc8;
        case 0x326fccu: goto label_326fcc;
        case 0x326fd0u: goto label_326fd0;
        case 0x326fd4u: goto label_326fd4;
        case 0x326fd8u: goto label_326fd8;
        case 0x326fdcu: goto label_326fdc;
        case 0x326fe0u: goto label_326fe0;
        case 0x326fe4u: goto label_326fe4;
        case 0x326fe8u: goto label_326fe8;
        case 0x326fecu: goto label_326fec;
        case 0x326ff0u: goto label_326ff0;
        case 0x326ff4u: goto label_326ff4;
        case 0x326ff8u: goto label_326ff8;
        case 0x326ffcu: goto label_326ffc;
        case 0x327000u: goto label_327000;
        case 0x327004u: goto label_327004;
        case 0x327008u: goto label_327008;
        case 0x32700cu: goto label_32700c;
        case 0x327010u: goto label_327010;
        case 0x327014u: goto label_327014;
        case 0x327018u: goto label_327018;
        case 0x32701cu: goto label_32701c;
        case 0x327020u: goto label_327020;
        case 0x327024u: goto label_327024;
        case 0x327028u: goto label_327028;
        case 0x32702cu: goto label_32702c;
        case 0x327030u: goto label_327030;
        case 0x327034u: goto label_327034;
        case 0x327038u: goto label_327038;
        case 0x32703cu: goto label_32703c;
        case 0x327040u: goto label_327040;
        case 0x327044u: goto label_327044;
        default: break;
    }

    ctx->pc = 0x326cb8u;

label_326cb8:
    // 0x326cb8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x326cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_326cbc:
    // 0x326cbc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x326cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_326cc0:
    // 0x326cc0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x326cc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_326cc4:
    // 0x326cc4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x326cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_326cc8:
    // 0x326cc8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x326cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_326ccc:
    // 0x326ccc: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x326cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_326cd0:
    // 0x326cd0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x326cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_326cd4:
    // 0x326cd4: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x326cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_326cd8:
    // 0x326cd8: 0x8e43003c  lw          $v1, 0x3C($s2)
    ctx->pc = 0x326cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_326cdc:
    // 0x326cdc: 0x8e540004  lw          $s4, 0x4($s2)
    ctx->pc = 0x326cdcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_326ce0:
    // 0x326ce0: 0x460000a  bltz        $v1, . + 4 + (0xA << 2)
label_326ce4:
    if (ctx->pc == 0x326CE4u) {
        ctx->pc = 0x326CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326CE0u;
        // 0x326ce4: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326CE8u;
        goto label_326ce8;
    }
    ctx->pc = 0x326CE0u;
    {
        const bool branch_taken_0x326ce0 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x326CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326CE0u;
        // 0x326ce4: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326ce0) {
            ctx->pc = 0x326D0Cu;
            goto label_326d0c;
        }
    }
    ctx->pc = 0x326CE8u;
label_326ce8:
    // 0x326ce8: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x326ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_326cec:
    // 0x326cec: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x326cecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_326cf0:
    // 0x326cf0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_326cf4:
    if (ctx->pc == 0x326CF4u) {
        ctx->pc = 0x326CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326CF0u;
        // 0x326cf4: 0x82430003  lb          $v1, 0x3($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326CF8u;
        goto label_326cf8;
    }
    ctx->pc = 0x326CF0u;
    {
        const bool branch_taken_0x326cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x326cf0) {
            ctx->pc = 0x326CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326CF0u;
            // 0x326cf4: 0x82430003  lb          $v1, 0x3($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326D10u;
            goto label_326d10;
        }
    }
    ctx->pc = 0x326CF8u;
label_326cf8:
    // 0x326cf8: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x326cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_326cfc:
    // 0x326cfc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_326d00:
    if (ctx->pc == 0x326D00u) {
        ctx->pc = 0x326D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326CFCu;
        // 0x326d00: 0x82430003  lb          $v1, 0x3($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326D04u;
        goto label_326d04;
    }
    ctx->pc = 0x326CFCu;
    {
        const bool branch_taken_0x326cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x326cfc) {
            ctx->pc = 0x326D00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326CFCu;
            // 0x326d00: 0x82430003  lb          $v1, 0x3($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326D10u;
            goto label_326d10;
        }
    }
    ctx->pc = 0x326D04u;
label_326d04:
    // 0x326d04: 0x40f809  jalr        $v0
label_326d08:
    if (ctx->pc == 0x326D08u) {
        ctx->pc = 0x326D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326D04u;
        // 0x326d08: 0x8e44004c  lw          $a0, 0x4C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326D0Cu;
        goto label_326d0c;
    }
    ctx->pc = 0x326D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x326D0Cu);
        ctx->pc = 0x326D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326D04u;
        // 0x326d08: 0x8e44004c  lw          $a0, 0x4C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326D04u, 0x326D0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x326D0Cu;
label_326d0c:
    // 0x326d0c: 0x82430003  lb          $v1, 0x3($s2)
    ctx->pc = 0x326d0cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_326d10:
    // 0x326d10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x326d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_326d14:
    // 0x326d14: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
label_326d18:
    if (ctx->pc == 0x326D18u) {
        ctx->pc = 0x326D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326D14u;
        // 0x326d18: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326D1Cu;
        goto label_326d1c;
    }
    ctx->pc = 0x326D14u;
    {
        const bool branch_taken_0x326d14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x326d14) {
            ctx->pc = 0x326D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326D14u;
            // 0x326d18: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326D48u;
            goto label_326d48;
        }
    }
    ctx->pc = 0x326D1Cu;
label_326d1c:
    // 0x326d1c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x326d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_326d20:
    // 0x326d20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x326d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_326d24:
    // 0x326d24: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x326d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_326d28:
    // 0x326d28: 0x40f809  jalr        $v0
label_326d2c:
    if (ctx->pc == 0x326D2Cu) {
        ctx->pc = 0x326D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326D28u;
        // 0x326d2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326D30u;
        goto label_326d30;
    }
    ctx->pc = 0x326D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x326D30u);
        ctx->pc = 0x326D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326D28u;
        // 0x326d2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326D28u, 0x326D30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x326D30u;
label_326d30:
    // 0x326d30: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_326d34:
    if (ctx->pc == 0x326D34u) {
        ctx->pc = 0x326D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326D30u;
        // 0x326d34: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326D38u;
        goto label_326d38;
    }
    ctx->pc = 0x326D30u;
    {
        const bool branch_taken_0x326d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x326d30) {
            ctx->pc = 0x326D34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326D30u;
            // 0x326d34: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326D48u;
            goto label_326d48;
        }
    }
    ctx->pc = 0x326D38u;
label_326d38:
    // 0x326d38: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x326d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_326d3c:
    // 0x326d3c: 0x100000b9  b           . + 4 + (0xB9 << 2)
label_326d40:
    if (ctx->pc == 0x326D40u) {
        ctx->pc = 0x326D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326D3Cu;
        // 0x326d40: 0xa2420001  sb          $v0, 0x1($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326D44u;
        goto label_326d44;
    }
    ctx->pc = 0x326D3Cu;
    {
        const bool branch_taken_0x326d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326D3Cu;
        // 0x326d40: 0xa2420001  sb          $v0, 0x1($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326d3c) {
            ctx->pc = 0x327024u;
            goto label_327024;
        }
    }
    ctx->pc = 0x326D44u;
label_326d44:
    // 0x326d44: 0x0  nop
    ctx->pc = 0x326d44u;
    // NOP
label_326d48:
    // 0x326d48: 0x26530014  addiu       $s3, $s2, 0x14
    ctx->pc = 0x326d48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
label_326d4c:
    // 0x326d4c: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x326d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_326d50:
    // 0x326d50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x326d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_326d54:
    // 0x326d54: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x326d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_326d58:
    // 0x326d58: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x326d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_326d5c:
    // 0x326d5c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x326d5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_326d60:
    // 0x326d60: 0x60f809  jalr        $v1
label_326d64:
    if (ctx->pc == 0x326D64u) {
        ctx->pc = 0x326D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326D60u;
        // 0x326d64: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326D68u;
        goto label_326d68;
    }
    ctx->pc = 0x326D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x326D68u);
        ctx->pc = 0x326D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326D60u;
        // 0x326d64: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326D60u, 0x326D68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x326D68u;
label_326d68:
    // 0x326d68: 0xc0cf3a2  jal         func_33CE88
label_326d6c:
    if (ctx->pc == 0x326D6Cu) {
        ctx->pc = 0x326D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326D68u;
        // 0x326d6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326D70u;
        goto label_326d70;
    }
    ctx->pc = 0x326D68u;
    SET_GPR_U32(ctx, 31, 0x326D70u);
    ctx->pc = 0x326D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326D68u;
    // 0x326d6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CE88u, 0x326D68u, 0x326D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326D70u;
label_326d70:
    // 0x326d70: 0x14400061  bnez        $v0, . + 4 + (0x61 << 2)
label_326d74:
    if (ctx->pc == 0x326D74u) {
        ctx->pc = 0x326D78u;
        goto label_326d78;
    }
    ctx->pc = 0x326D70u;
    {
        const bool branch_taken_0x326d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x326d70) {
            ctx->pc = 0x326EF8u;
            goto label_326ef8;
        }
    }
    ctx->pc = 0x326D78u;
label_326d78:
    // 0x326d78: 0x8e460018  lw          $a2, 0x18($s2)
    ctx->pc = 0x326d78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_326d7c:
    // 0x326d7c: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x326d7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
label_326d80:
    // 0x326d80: 0x1440005d  bnez        $v0, . + 4 + (0x5D << 2)
label_326d84:
    if (ctx->pc == 0x326D84u) {
        ctx->pc = 0x326D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326D80u;
        // 0x326d84: 0x34058001  ori         $a1, $zero, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        ctx->pc = 0x326D88u;
        goto label_326d88;
    }
    ctx->pc = 0x326D80u;
    {
        const bool branch_taken_0x326d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x326D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326D80u;
        // 0x326d84: 0x34058001  ori         $a1, $zero, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326d80) {
            ctx->pc = 0x326EF8u;
            goto label_326ef8;
        }
    }
    ctx->pc = 0x326D88u;
label_326d88:
    // 0x326d88: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x326d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_326d8c:
    // 0x326d8c: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x326d8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_326d90:
    // 0x326d90: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x326d90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_326d94:
    // 0x326d94: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x326d94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_326d98:
    // 0x326d98: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x326d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_326d9c:
    // 0x326d9c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x326d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_326da0:
    // 0x326da0: 0x14450055  bne         $v0, $a1, . + 4 + (0x55 << 2)
label_326da4:
    if (ctx->pc == 0x326DA4u) {
        ctx->pc = 0x326DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326DA0u;
        // 0x326da4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326DA8u;
        goto label_326da8;
    }
    ctx->pc = 0x326DA0u;
    {
        const bool branch_taken_0x326da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x326DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326DA0u;
        // 0x326da4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326da0) {
            ctx->pc = 0x326EF8u;
            goto label_326ef8;
        }
    }
    ctx->pc = 0x326DA8u;
label_326da8:
    // 0x326da8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x326da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_326dac:
    // 0x326dac: 0xa2420001  sb          $v0, 0x1($s2)
    ctx->pc = 0x326dacu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
label_326db0:
    // 0x326db0: 0xc0cfc14  jal         func_33F050
label_326db4:
    if (ctx->pc == 0x326DB4u) {
        ctx->pc = 0x326DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326DB0u;
        // 0x326db4: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326DB8u;
        goto label_326db8;
    }
    ctx->pc = 0x326DB0u;
    SET_GPR_U32(ctx, 31, 0x326DB8u);
    ctx->pc = 0x326DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326DB0u;
    // 0x326db4: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F050u, 0x326DB0u, 0x326DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326DB8u;
label_326db8:
    // 0x326db8: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_326dbc:
    if (ctx->pc == 0x326DBCu) {
        ctx->pc = 0x326DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326DB8u;
        // 0x326dbc: 0x8e42009c  lw          $v0, 0x9C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326DC0u;
        goto label_326dc0;
    }
    ctx->pc = 0x326DB8u;
    {
        const bool branch_taken_0x326db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x326db8) {
            ctx->pc = 0x326DBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326DB8u;
            // 0x326dbc: 0x8e42009c  lw          $v0, 0x9C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326E18u;
            goto label_326e18;
        }
    }
    ctx->pc = 0x326DC0u;
label_326dc0:
    // 0x326dc0: 0x87a50010  lh          $a1, 0x10($sp)
    ctx->pc = 0x326dc0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
label_326dc4:
    // 0x326dc4: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x326dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_326dc8:
    // 0x326dc8: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x326dc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_326dcc:
    // 0x326dcc: 0x54400073  bnel        $v0, $zero, . + 4 + (0x73 << 2)
label_326dd0:
    if (ctx->pc == 0x326DD0u) {
        ctx->pc = 0x326DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326DCCu;
        // 0x326dd0: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326DD4u;
        goto label_326dd4;
    }
    ctx->pc = 0x326DCCu;
    {
        const bool branch_taken_0x326dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x326dcc) {
            ctx->pc = 0x326DD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326DCCu;
            // 0x326dd0: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326F9Cu;
            goto label_326f9c;
        }
    }
    ctx->pc = 0x326DD4u;
label_326dd4:
    // 0x326dd4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x326dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_326dd8:
    // 0x326dd8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x326dd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_326ddc:
    // 0x326ddc: 0xc0ceb28  jal         func_33ACA0
label_326de0:
    if (ctx->pc == 0x326DE0u) {
        ctx->pc = 0x326DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326DDCu;
        // 0x326de0: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326DE4u;
        goto label_326de4;
    }
    ctx->pc = 0x326DDCu;
    SET_GPR_U32(ctx, 31, 0x326DE4u);
    ctx->pc = 0x326DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326DDCu;
    // 0x326de0: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ACA0u, 0x326DDCu, 0x326DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326DE4u;
label_326de4:
    // 0x326de4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x326de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_326de8:
    // 0x326de8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x326de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_326dec:
    // 0x326dec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x326decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_326df0:
    // 0x326df0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x326df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_326df4:
    // 0x326df4: 0x40f809  jalr        $v0
label_326df8:
    if (ctx->pc == 0x326DF8u) {
        ctx->pc = 0x326DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326DF4u;
        // 0x326df8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326DFCu;
        goto label_326dfc;
    }
    ctx->pc = 0x326DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x326DFCu);
        ctx->pc = 0x326DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326DF4u;
        // 0x326df8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326DF4u, 0x326DFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x326DFCu;
label_326dfc:
    // 0x326dfc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x326dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_326e00:
    // 0x326e00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x326e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_326e04:
    // 0x326e04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x326e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_326e08:
    // 0x326e08: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x326e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_326e0c:
    // 0x326e0c: 0x40f809  jalr        $v0
label_326e10:
    if (ctx->pc == 0x326E10u) {
        ctx->pc = 0x326E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326E0Cu;
        // 0x326e10: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326E14u;
        goto label_326e14;
    }
    ctx->pc = 0x326E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x326E14u);
        ctx->pc = 0x326E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326E0Cu;
        // 0x326e10: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326E0Cu, 0x326E14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x326E14u;
label_326e14:
    // 0x326e14: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x326e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_326e18:
    // 0x326e18: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
label_326e1c:
    if (ctx->pc == 0x326E1Cu) {
        ctx->pc = 0x326E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326E18u;
        // 0x326e1c: 0x260a02d  daddu       $s4, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326E20u;
        goto label_326e20;
    }
    ctx->pc = 0x326E18u;
    {
        const bool branch_taken_0x326e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x326E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326E18u;
        // 0x326e1c: 0x260a02d  daddu       $s4, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326e18) {
            ctx->pc = 0x327024u;
            goto label_327024;
        }
    }
    ctx->pc = 0x326E20u;
label_326e20:
    // 0x326e20: 0x10000028  b           . + 4 + (0x28 << 2)
label_326e24:
    if (ctx->pc == 0x326E24u) {
        ctx->pc = 0x326E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326E20u;
        // 0x326e24: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326E28u;
        goto label_326e28;
    }
    ctx->pc = 0x326E20u;
    {
        const bool branch_taken_0x326e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326E20u;
        // 0x326e24: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326e20) {
            ctx->pc = 0x326EC4u;
            goto label_326ec4;
        }
    }
    ctx->pc = 0x326E28u;
label_326e28:
    // 0x326e28: 0xa4802a  slt         $s0, $a1, $a0
    ctx->pc = 0x326e28u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_326e2c:
    // 0x326e2c: 0x52000013  beql        $s0, $zero, . + 4 + (0x13 << 2)
label_326e30:
    if (ctx->pc == 0x326E30u) {
        ctx->pc = 0x326E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326E2Cu;
        // 0x326e30: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326E34u;
        goto label_326e34;
    }
    ctx->pc = 0x326E2Cu;
    {
        const bool branch_taken_0x326e2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x326e2c) {
            ctx->pc = 0x326E30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326E2Cu;
            // 0x326e30: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326E7Cu;
            goto label_326e7c;
        }
    }
    ctx->pc = 0x326E34u;
label_326e34:
    // 0x326e34: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x326e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_326e38:
    // 0x326e38: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x326e38u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_326e3c:
    // 0x326e3c: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
label_326e40:
    if (ctx->pc == 0x326E40u) {
        ctx->pc = 0x326E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326E3Cu;
        // 0x326e40: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326E44u;
        goto label_326e44;
    }
    ctx->pc = 0x326E3Cu;
    {
        const bool branch_taken_0x326e3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x326e3c) {
            ctx->pc = 0x326E40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326E3Cu;
            // 0x326e40: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326E7Cu;
            goto label_326e7c;
        }
    }
    ctx->pc = 0x326E44u;
label_326e44:
    // 0x326e44: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x326e44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_326e48:
    // 0x326e48: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x326e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_326e4c:
    // 0x326e4c: 0x0  nop
    ctx->pc = 0x326e4cu;
    // NOP
label_326e50:
    // 0x326e50: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x326e50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_326e54:
    // 0x326e54: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_326e58:
    if (ctx->pc == 0x326E58u) {
        ctx->pc = 0x326E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326E54u;
        // 0x326e58: 0xa4802a  slt         $s0, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x326E5Cu;
        goto label_326e5c;
    }
    ctx->pc = 0x326E54u;
    {
        const bool branch_taken_0x326e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x326e54) {
            ctx->pc = 0x326E58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326E54u;
            // 0x326e58: 0xa4802a  slt         $s0, $a1, $a0 (Delay Slot)
            SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x326E78u;
            goto label_326e78;
        }
    }
    ctx->pc = 0x326E5Cu;
label_326e5c:
    // 0x326e5c: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x326e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_326e60:
    // 0x326e60: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x326e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_326e64:
    // 0x326e64: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x326e64u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_326e68:
    // 0x326e68: 0x0  nop
    ctx->pc = 0x326e68u;
    // NOP
label_326e6c:
    // 0x326e6c: 0x5060fff8  beql        $v1, $zero, . + 4 + (-0x8 << 2)
label_326e70:
    if (ctx->pc == 0x326E70u) {
        ctx->pc = 0x326E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326E6Cu;
        // 0x326e70: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326E74u;
        goto label_326e74;
    }
    ctx->pc = 0x326E6Cu;
    {
        const bool branch_taken_0x326e6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x326e6c) {
            ctx->pc = 0x326E70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326E6Cu;
            // 0x326e70: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_326e50;
        }
    }
    ctx->pc = 0x326E74u;
label_326e74:
    // 0x326e74: 0xa4802a  slt         $s0, $a1, $a0
    ctx->pc = 0x326e74u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_326e78:
    // 0x326e78: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x326e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_326e7c:
    // 0x326e7c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x326e7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_326e80:
    // 0x326e80: 0xc0ceb28  jal         func_33ACA0
label_326e84:
    if (ctx->pc == 0x326E84u) {
        ctx->pc = 0x326E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326E80u;
        // 0x326e84: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326E88u;
        goto label_326e88;
    }
    ctx->pc = 0x326E80u;
    SET_GPR_U32(ctx, 31, 0x326E88u);
    ctx->pc = 0x326E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326E80u;
    // 0x326e84: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ACA0u, 0x326E80u, 0x326E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326E88u;
label_326e88:
    // 0x326e88: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x326e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_326e8c:
    // 0x326e8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x326e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_326e90:
    // 0x326e90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x326e90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_326e94:
    // 0x326e94: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x326e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_326e98:
    // 0x326e98: 0x40f809  jalr        $v0
label_326e9c:
    if (ctx->pc == 0x326E9Cu) {
        ctx->pc = 0x326E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326E98u;
        // 0x326e9c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326EA0u;
        goto label_326ea0;
    }
    ctx->pc = 0x326E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x326EA0u);
        ctx->pc = 0x326E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326E98u;
        // 0x326e9c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326E98u, 0x326EA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x326EA0u;
label_326ea0:
    // 0x326ea0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x326ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_326ea4:
    // 0x326ea4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x326ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_326ea8:
    // 0x326ea8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x326ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_326eac:
    // 0x326eac: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x326eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_326eb0:
    // 0x326eb0: 0x40f809  jalr        $v0
label_326eb4:
    if (ctx->pc == 0x326EB4u) {
        ctx->pc = 0x326EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326EB0u;
        // 0x326eb4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326EB8u;
        goto label_326eb8;
    }
    ctx->pc = 0x326EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x326EB8u);
        ctx->pc = 0x326EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326EB0u;
        // 0x326eb4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326EB0u, 0x326EB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x326EB8u;
label_326eb8:
    // 0x326eb8: 0x1600005b  bnez        $s0, . + 4 + (0x5B << 2)
label_326ebc:
    if (ctx->pc == 0x326EBCu) {
        ctx->pc = 0x326EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326EB8u;
        // 0x326ebc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326EC0u;
        goto label_326ec0;
    }
    ctx->pc = 0x326EB8u;
    {
        const bool branch_taken_0x326eb8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x326EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326EB8u;
        // 0x326ebc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326eb8) {
            ctx->pc = 0x327028u;
            goto label_327028;
        }
    }
    ctx->pc = 0x326EC0u;
label_326ec0:
    // 0x326ec0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x326ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_326ec4:
    // 0x326ec4: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x326ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_326ec8:
    // 0x326ec8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x326ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_326ecc:
    // 0x326ecc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x326eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_326ed0:
    // 0x326ed0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x326ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_326ed4:
    // 0x326ed4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x326ed4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_326ed8:
    // 0x326ed8: 0x40f809  jalr        $v0
label_326edc:
    if (ctx->pc == 0x326EDCu) {
        ctx->pc = 0x326EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326ED8u;
        // 0x326edc: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326EE0u;
        goto label_326ee0;
    }
    ctx->pc = 0x326ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x326EE0u);
        ctx->pc = 0x326EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326ED8u;
        // 0x326edc: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326ED8u, 0x326EE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x326EE0u;
label_326ee0:
    // 0x326ee0: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x326ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_326ee4:
    // 0x326ee4: 0x1480ffd0  bnez        $a0, . + 4 + (-0x30 << 2)
label_326ee8:
    if (ctx->pc == 0x326EE8u) {
        ctx->pc = 0x326EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326EE4u;
        // 0x326ee8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326EECu;
        goto label_326eec;
    }
    ctx->pc = 0x326EE4u;
    {
        const bool branch_taken_0x326ee4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x326EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326EE4u;
        // 0x326ee8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326ee4) {
            ctx->pc = 0x326E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_326e28;
        }
    }
    ctx->pc = 0x326EECu;
label_326eec:
    // 0x326eec: 0x1000004e  b           . + 4 + (0x4E << 2)
label_326ef0:
    if (ctx->pc == 0x326EF0u) {
        ctx->pc = 0x326EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326EECu;
        // 0x326ef0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326EF4u;
        goto label_326ef4;
    }
    ctx->pc = 0x326EECu;
    {
        const bool branch_taken_0x326eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326EECu;
        // 0x326ef0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326eec) {
            ctx->pc = 0x327028u;
            goto label_327028;
        }
    }
    ctx->pc = 0x326EF4u;
label_326ef4:
    // 0x326ef4: 0x0  nop
    ctx->pc = 0x326ef4u;
    // NOP
label_326ef8:
    // 0x326ef8: 0xc0c9dfa  jal         func_3277E8
label_326efc:
    if (ctx->pc == 0x326EFCu) {
        ctx->pc = 0x326EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326EF8u;
        // 0x326efc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326F00u;
        goto label_326f00;
    }
    ctx->pc = 0x326EF8u;
    SET_GPR_U32(ctx, 31, 0x326F00u);
    ctx->pc = 0x326EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326EF8u;
    // 0x326efc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3277E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3277E8u, 0x326EF8u, 0x326F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326F00u;
label_326f00:
    // 0x326f00: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x326f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_326f04:
    // 0x326f04: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x326f04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_326f08:
    // 0x326f08: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
label_326f0c:
    if (ctx->pc == 0x326F0Cu) {
        ctx->pc = 0x326F10u;
        goto label_326f10;
    }
    ctx->pc = 0x326F08u;
    {
        const bool branch_taken_0x326f08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x326f08) {
            ctx->pc = 0x326F60u;
            goto label_326f60;
        }
    }
    ctx->pc = 0x326F10u;
label_326f10:
    // 0x326f10: 0xc0cf3a2  jal         func_33CE88
label_326f14:
    if (ctx->pc == 0x326F14u) {
        ctx->pc = 0x326F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326F10u;
        // 0x326f14: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326F18u;
        goto label_326f18;
    }
    ctx->pc = 0x326F10u;
    SET_GPR_U32(ctx, 31, 0x326F18u);
    ctx->pc = 0x326F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326F10u;
    // 0x326f14: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CE88u, 0x326F10u, 0x326F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326F18u;
label_326f18:
    // 0x326f18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x326f18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_326f1c:
    // 0x326f1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x326f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_326f20:
    // 0x326f20: 0x56020005  bnel        $s0, $v0, . + 4 + (0x5 << 2)
label_326f24:
    if (ctx->pc == 0x326F24u) {
        ctx->pc = 0x326F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326F20u;
        // 0x326f24: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326F28u;
        goto label_326f28;
    }
    ctx->pc = 0x326F20u;
    {
        const bool branch_taken_0x326f20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x326f20) {
            ctx->pc = 0x326F24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326F20u;
            // 0x326f24: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326F38u;
            goto label_326f38;
        }
    }
    ctx->pc = 0x326F28u;
label_326f28:
    // 0x326f28: 0xc0c9e68  jal         func_3279A0
label_326f2c:
    if (ctx->pc == 0x326F2Cu) {
        ctx->pc = 0x326F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326F28u;
        // 0x326f2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326F30u;
        goto label_326f30;
    }
    ctx->pc = 0x326F28u;
    SET_GPR_U32(ctx, 31, 0x326F30u);
    ctx->pc = 0x326F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326F28u;
    // 0x326f2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3279A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3279A0u, 0x326F28u, 0x326F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326F30u;
label_326f30:
    // 0x326f30: 0x1050000b  beq         $v0, $s0, . + 4 + (0xB << 2)
label_326f34:
    if (ctx->pc == 0x326F34u) {
        ctx->pc = 0x326F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326F30u;
        // 0x326f34: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326F38u;
        goto label_326f38;
    }
    ctx->pc = 0x326F30u;
    {
        const bool branch_taken_0x326f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x326F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326F30u;
        // 0x326f34: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326f30) {
            ctx->pc = 0x326F60u;
            goto label_326f60;
        }
    }
    ctx->pc = 0x326F38u;
label_326f38:
    // 0x326f38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x326f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_326f3c:
    // 0x326f3c: 0xa2420001  sb          $v0, 0x1($s2)
    ctx->pc = 0x326f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
label_326f40:
    // 0x326f40: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x326f40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_326f44:
    // 0x326f44: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x326f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_326f48:
    // 0x326f48: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x326f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_326f4c:
    // 0x326f4c: 0x60f809  jalr        $v1
label_326f50:
    if (ctx->pc == 0x326F50u) {
        ctx->pc = 0x326F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326F4Cu;
        // 0x326f50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326F54u;
        goto label_326f54;
    }
    ctx->pc = 0x326F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x326F54u);
        ctx->pc = 0x326F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326F4Cu;
        // 0x326f50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326F4Cu, 0x326F54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x326F54u;
label_326f54:
    // 0x326f54: 0x10000034  b           . + 4 + (0x34 << 2)
label_326f58:
    if (ctx->pc == 0x326F58u) {
        ctx->pc = 0x326F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326F54u;
        // 0x326f58: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326F5Cu;
        goto label_326f5c;
    }
    ctx->pc = 0x326F54u;
    {
        const bool branch_taken_0x326f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326F54u;
        // 0x326f58: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326f54) {
            ctx->pc = 0x327028u;
            goto label_327028;
        }
    }
    ctx->pc = 0x326F5Cu;
label_326f5c:
    // 0x326f5c: 0x0  nop
    ctx->pc = 0x326f5cu;
    // NOP
label_326f60:
    // 0x326f60: 0xc0c9df4  jal         func_3277D0
label_326f64:
    if (ctx->pc == 0x326F64u) {
        ctx->pc = 0x326F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326F60u;
        // 0x326f64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326F68u;
        goto label_326f68;
    }
    ctx->pc = 0x326F60u;
    SET_GPR_U32(ctx, 31, 0x326F68u);
    ctx->pc = 0x326F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326F60u;
    // 0x326f64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3277D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3277D0u, 0x326F60u, 0x326F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326F68u;
label_326f68:
    // 0x326f68: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x326f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_326f6c:
    // 0x326f6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x326f6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_326f70:
    // 0x326f70: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x326f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_326f74:
    // 0x326f74: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x326f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_326f78:
    // 0x326f78: 0x40f809  jalr        $v0
label_326f7c:
    if (ctx->pc == 0x326F7Cu) {
        ctx->pc = 0x326F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326F78u;
        // 0x326f7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326F80u;
        goto label_326f80;
    }
    ctx->pc = 0x326F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x326F80u);
        ctx->pc = 0x326F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326F78u;
        // 0x326f7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326F78u, 0x326F80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x326F80u;
label_326f80:
    // 0x326f80: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x326f80u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_326f84:
    // 0x326f84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x326f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_326f88:
    // 0x326f88: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x326f88u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_326f8c:
    // 0x326f8c: 0x70182a  slt         $v1, $v1, $s0
    ctx->pc = 0x326f8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_326f90:
    // 0x326f90: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_326f94:
    if (ctx->pc == 0x326F94u) {
        ctx->pc = 0x326F98u;
        goto label_326f98;
    }
    ctx->pc = 0x326F90u;
    {
        const bool branch_taken_0x326f90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x326f90) {
            ctx->pc = 0x326FB8u;
            goto label_326fb8;
        }
    }
    ctx->pc = 0x326F98u;
label_326f98:
    // 0x326f98: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x326f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_326f9c:
    // 0x326f9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x326f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_326fa0:
    // 0x326fa0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x326fa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_326fa4:
    // 0x326fa4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x326fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_326fa8:
    // 0x326fa8: 0x40f809  jalr        $v0
label_326fac:
    if (ctx->pc == 0x326FACu) {
        ctx->pc = 0x326FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326FA8u;
        // 0x326fac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326FB0u;
        goto label_326fb0;
    }
    ctx->pc = 0x326FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x326FB0u);
        ctx->pc = 0x326FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326FA8u;
        // 0x326fac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326FA8u, 0x326FB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x326FB0u;
label_326fb0:
    // 0x326fb0: 0x1000001d  b           . + 4 + (0x1D << 2)
label_326fb4:
    if (ctx->pc == 0x326FB4u) {
        ctx->pc = 0x326FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326FB0u;
        // 0x326fb4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326FB8u;
        goto label_326fb8;
    }
    ctx->pc = 0x326FB0u;
    {
        const bool branch_taken_0x326fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326FB0u;
        // 0x326fb4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326fb0) {
            ctx->pc = 0x327028u;
            goto label_327028;
        }
    }
    ctx->pc = 0x326FB8u;
label_326fb8:
    // 0x326fb8: 0xc0cf3a2  jal         func_33CE88
label_326fbc:
    if (ctx->pc == 0x326FBCu) {
        ctx->pc = 0x326FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326FB8u;
        // 0x326fbc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326FC0u;
        goto label_326fc0;
    }
    ctx->pc = 0x326FB8u;
    SET_GPR_U32(ctx, 31, 0x326FC0u);
    ctx->pc = 0x326FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326FB8u;
    // 0x326fbc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CE88u, 0x326FB8u, 0x326FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326FC0u;
label_326fc0:
    // 0x326fc0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x326fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_326fc4:
    // 0x326fc4: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_326fc8:
    if (ctx->pc == 0x326FC8u) {
        ctx->pc = 0x326FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326FC4u;
        // 0x326fc8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326FCCu;
        goto label_326fcc;
    }
    ctx->pc = 0x326FC4u;
    {
        const bool branch_taken_0x326fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x326FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326FC4u;
        // 0x326fc8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326fc4) {
            ctx->pc = 0x326FE0u;
            goto label_326fe0;
        }
    }
    ctx->pc = 0x326FCCu;
label_326fcc:
    // 0x326fcc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x326fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_326fd0:
    // 0x326fd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x326fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_326fd4:
    // 0x326fd4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x326fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_326fd8:
    // 0x326fd8: 0x40f809  jalr        $v0
label_326fdc:
    if (ctx->pc == 0x326FDCu) {
        ctx->pc = 0x326FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326FD8u;
        // 0x326fdc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326FE0u;
        goto label_326fe0;
    }
    ctx->pc = 0x326FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x326FE0u);
        ctx->pc = 0x326FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326FD8u;
        // 0x326fdc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326FD8u, 0x326FE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x326FE0u;
label_326fe0:
    // 0x326fe0: 0xc0cf3a2  jal         func_33CE88
label_326fe4:
    if (ctx->pc == 0x326FE4u) {
        ctx->pc = 0x326FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326FE0u;
        // 0x326fe4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326FE8u;
        goto label_326fe8;
    }
    ctx->pc = 0x326FE0u;
    SET_GPR_U32(ctx, 31, 0x326FE8u);
    ctx->pc = 0x326FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326FE0u;
    // 0x326fe4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CE88u, 0x326FE0u, 0x326FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326FE8u;
label_326fe8:
    // 0x326fe8: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x326fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_326fec:
    // 0x326fec: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
label_326ff0:
    if (ctx->pc == 0x326FF0u) {
        ctx->pc = 0x326FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326FECu;
        // 0x326ff0: 0x8e460018  lw          $a2, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x326FF4u;
        goto label_326ff4;
    }
    ctx->pc = 0x326FECu;
    {
        const bool branch_taken_0x326fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x326fec) {
            ctx->pc = 0x326FF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326FECu;
            // 0x326ff0: 0x8e460018  lw          $a2, 0x18($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327010u;
            goto label_327010;
        }
    }
    ctx->pc = 0x326FF4u;
label_326ff4:
    // 0x326ff4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x326ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_326ff8:
    // 0x326ff8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x326ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_326ffc:
    // 0x326ffc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x326ffcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_327000:
    // 0x327000: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x327000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_327004:
    // 0x327004: 0x40f809  jalr        $v0
label_327008:
    if (ctx->pc == 0x327008u) {
        ctx->pc = 0x327008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327004u;
        // 0x327008: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32700Cu;
        goto label_32700c;
    }
    ctx->pc = 0x327004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32700Cu);
        ctx->pc = 0x327008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327004u;
        // 0x327008: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327004u, 0x32700Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32700Cu;
label_32700c:
    // 0x32700c: 0x8e460018  lw          $a2, 0x18($s2)
    ctx->pc = 0x32700cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_327010:
    // 0x327010: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x327010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_327014:
    // 0x327014: 0xc0cf466  jal         func_33D198
label_327018:
    if (ctx->pc == 0x327018u) {
        ctx->pc = 0x327018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327014u;
        // 0x327018: 0x8e450014  lw          $a1, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32701Cu;
        goto label_32701c;
    }
    ctx->pc = 0x327014u;
    SET_GPR_U32(ctx, 31, 0x32701Cu);
    ctx->pc = 0x327018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327014u;
    // 0x327018: 0x8e450014  lw          $a1, 0x14($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D198u, 0x327014u, 0x32701Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32701Cu;
label_32701c:
    // 0x32701c: 0xc0cf486  jal         func_33D218
label_327020:
    if (ctx->pc == 0x327020u) {
        ctx->pc = 0x327020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32701Cu;
        // 0x327020: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327024u;
        goto label_327024;
    }
    ctx->pc = 0x32701Cu;
    SET_GPR_U32(ctx, 31, 0x327024u);
    ctx->pc = 0x327020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32701Cu;
    // 0x327020: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D218u, 0x32701Cu, 0x327024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327024u;
label_327024:
    // 0x327024: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x327024u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_327028:
    // 0x327028: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x327028u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_32702c:
    // 0x32702c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x32702cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_327030:
    // 0x327030: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x327030u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_327034:
    // 0x327034: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x327034u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_327038:
    // 0x327038: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x327038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_32703c:
    // 0x32703c: 0x3e00008  jr          $ra
label_327040:
    if (ctx->pc == 0x327040u) {
        ctx->pc = 0x327040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32703Cu;
        // 0x327040: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327044u;
        goto label_327044;
    }
    ctx->pc = 0x32703Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32703Cu;
        // 0x327040: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32703Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327044u;
label_327044:
    // 0x327044: 0x0  nop
    ctx->pc = 0x327044u;
    // NOP
    ctx->pc = 0x327048u;
}
