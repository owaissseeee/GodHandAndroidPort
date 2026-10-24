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

// Function: cbTimerHandler
// Address: 0x3b6e78 - 0x3b7130
void cbTimerHandler_0x3b6e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cbTimerHandler_0x3b6e78");
#endif

    switch (ctx->pc) {
        case 0x3b6e78u: goto label_3b6e78;
        case 0x3b6e7cu: goto label_3b6e7c;
        case 0x3b6e80u: goto label_3b6e80;
        case 0x3b6e84u: goto label_3b6e84;
        case 0x3b6e88u: goto label_3b6e88;
        case 0x3b6e8cu: goto label_3b6e8c;
        case 0x3b6e90u: goto label_3b6e90;
        case 0x3b6e94u: goto label_3b6e94;
        case 0x3b6e98u: goto label_3b6e98;
        case 0x3b6e9cu: goto label_3b6e9c;
        case 0x3b6ea0u: goto label_3b6ea0;
        case 0x3b6ea4u: goto label_3b6ea4;
        case 0x3b6ea8u: goto label_3b6ea8;
        case 0x3b6eacu: goto label_3b6eac;
        case 0x3b6eb0u: goto label_3b6eb0;
        case 0x3b6eb4u: goto label_3b6eb4;
        case 0x3b6eb8u: goto label_3b6eb8;
        case 0x3b6ebcu: goto label_3b6ebc;
        case 0x3b6ec0u: goto label_3b6ec0;
        case 0x3b6ec4u: goto label_3b6ec4;
        case 0x3b6ec8u: goto label_3b6ec8;
        case 0x3b6eccu: goto label_3b6ecc;
        case 0x3b6ed0u: goto label_3b6ed0;
        case 0x3b6ed4u: goto label_3b6ed4;
        case 0x3b6ed8u: goto label_3b6ed8;
        case 0x3b6edcu: goto label_3b6edc;
        case 0x3b6ee0u: goto label_3b6ee0;
        case 0x3b6ee4u: goto label_3b6ee4;
        case 0x3b6ee8u: goto label_3b6ee8;
        case 0x3b6eecu: goto label_3b6eec;
        case 0x3b6ef0u: goto label_3b6ef0;
        case 0x3b6ef4u: goto label_3b6ef4;
        case 0x3b6ef8u: goto label_3b6ef8;
        case 0x3b6efcu: goto label_3b6efc;
        case 0x3b6f00u: goto label_3b6f00;
        case 0x3b6f04u: goto label_3b6f04;
        case 0x3b6f08u: goto label_3b6f08;
        case 0x3b6f0cu: goto label_3b6f0c;
        case 0x3b6f10u: goto label_3b6f10;
        case 0x3b6f14u: goto label_3b6f14;
        case 0x3b6f18u: goto label_3b6f18;
        case 0x3b6f1cu: goto label_3b6f1c;
        case 0x3b6f20u: goto label_3b6f20;
        case 0x3b6f24u: goto label_3b6f24;
        case 0x3b6f28u: goto label_3b6f28;
        case 0x3b6f2cu: goto label_3b6f2c;
        case 0x3b6f30u: goto label_3b6f30;
        case 0x3b6f34u: goto label_3b6f34;
        case 0x3b6f38u: goto label_3b6f38;
        case 0x3b6f3cu: goto label_3b6f3c;
        case 0x3b6f40u: goto label_3b6f40;
        case 0x3b6f44u: goto label_3b6f44;
        case 0x3b6f48u: goto label_3b6f48;
        case 0x3b6f4cu: goto label_3b6f4c;
        case 0x3b6f50u: goto label_3b6f50;
        case 0x3b6f54u: goto label_3b6f54;
        case 0x3b6f58u: goto label_3b6f58;
        case 0x3b6f5cu: goto label_3b6f5c;
        case 0x3b6f60u: goto label_3b6f60;
        case 0x3b6f64u: goto label_3b6f64;
        case 0x3b6f68u: goto label_3b6f68;
        case 0x3b6f6cu: goto label_3b6f6c;
        case 0x3b6f70u: goto label_3b6f70;
        case 0x3b6f74u: goto label_3b6f74;
        case 0x3b6f78u: goto label_3b6f78;
        case 0x3b6f7cu: goto label_3b6f7c;
        case 0x3b6f80u: goto label_3b6f80;
        case 0x3b6f84u: goto label_3b6f84;
        case 0x3b6f88u: goto label_3b6f88;
        case 0x3b6f8cu: goto label_3b6f8c;
        case 0x3b6f90u: goto label_3b6f90;
        case 0x3b6f94u: goto label_3b6f94;
        case 0x3b6f98u: goto label_3b6f98;
        case 0x3b6f9cu: goto label_3b6f9c;
        case 0x3b6fa0u: goto label_3b6fa0;
        case 0x3b6fa4u: goto label_3b6fa4;
        case 0x3b6fa8u: goto label_3b6fa8;
        case 0x3b6facu: goto label_3b6fac;
        case 0x3b6fb0u: goto label_3b6fb0;
        case 0x3b6fb4u: goto label_3b6fb4;
        case 0x3b6fb8u: goto label_3b6fb8;
        case 0x3b6fbcu: goto label_3b6fbc;
        case 0x3b6fc0u: goto label_3b6fc0;
        case 0x3b6fc4u: goto label_3b6fc4;
        case 0x3b6fc8u: goto label_3b6fc8;
        case 0x3b6fccu: goto label_3b6fcc;
        case 0x3b6fd0u: goto label_3b6fd0;
        case 0x3b6fd4u: goto label_3b6fd4;
        case 0x3b6fd8u: goto label_3b6fd8;
        case 0x3b6fdcu: goto label_3b6fdc;
        case 0x3b6fe0u: goto label_3b6fe0;
        case 0x3b6fe4u: goto label_3b6fe4;
        case 0x3b6fe8u: goto label_3b6fe8;
        case 0x3b6fecu: goto label_3b6fec;
        case 0x3b6ff0u: goto label_3b6ff0;
        case 0x3b6ff4u: goto label_3b6ff4;
        case 0x3b6ff8u: goto label_3b6ff8;
        case 0x3b6ffcu: goto label_3b6ffc;
        case 0x3b7000u: goto label_3b7000;
        case 0x3b7004u: goto label_3b7004;
        case 0x3b7008u: goto label_3b7008;
        case 0x3b700cu: goto label_3b700c;
        case 0x3b7010u: goto label_3b7010;
        case 0x3b7014u: goto label_3b7014;
        case 0x3b7018u: goto label_3b7018;
        case 0x3b701cu: goto label_3b701c;
        case 0x3b7020u: goto label_3b7020;
        case 0x3b7024u: goto label_3b7024;
        case 0x3b7028u: goto label_3b7028;
        case 0x3b702cu: goto label_3b702c;
        case 0x3b7030u: goto label_3b7030;
        case 0x3b7034u: goto label_3b7034;
        case 0x3b7038u: goto label_3b7038;
        case 0x3b703cu: goto label_3b703c;
        case 0x3b7040u: goto label_3b7040;
        case 0x3b7044u: goto label_3b7044;
        case 0x3b7048u: goto label_3b7048;
        case 0x3b704cu: goto label_3b704c;
        case 0x3b7050u: goto label_3b7050;
        case 0x3b7054u: goto label_3b7054;
        case 0x3b7058u: goto label_3b7058;
        case 0x3b705cu: goto label_3b705c;
        case 0x3b7060u: goto label_3b7060;
        case 0x3b7064u: goto label_3b7064;
        case 0x3b7068u: goto label_3b7068;
        case 0x3b706cu: goto label_3b706c;
        case 0x3b7070u: goto label_3b7070;
        case 0x3b7074u: goto label_3b7074;
        case 0x3b7078u: goto label_3b7078;
        case 0x3b707cu: goto label_3b707c;
        case 0x3b7080u: goto label_3b7080;
        case 0x3b7084u: goto label_3b7084;
        case 0x3b7088u: goto label_3b7088;
        case 0x3b708cu: goto label_3b708c;
        case 0x3b7090u: goto label_3b7090;
        case 0x3b7094u: goto label_3b7094;
        case 0x3b7098u: goto label_3b7098;
        case 0x3b709cu: goto label_3b709c;
        case 0x3b70a0u: goto label_3b70a0;
        case 0x3b70a4u: goto label_3b70a4;
        case 0x3b70a8u: goto label_3b70a8;
        case 0x3b70acu: goto label_3b70ac;
        case 0x3b70b0u: goto label_3b70b0;
        case 0x3b70b4u: goto label_3b70b4;
        case 0x3b70b8u: goto label_3b70b8;
        case 0x3b70bcu: goto label_3b70bc;
        case 0x3b70c0u: goto label_3b70c0;
        case 0x3b70c4u: goto label_3b70c4;
        case 0x3b70c8u: goto label_3b70c8;
        case 0x3b70ccu: goto label_3b70cc;
        case 0x3b70d0u: goto label_3b70d0;
        case 0x3b70d4u: goto label_3b70d4;
        case 0x3b70d8u: goto label_3b70d8;
        case 0x3b70dcu: goto label_3b70dc;
        case 0x3b70e0u: goto label_3b70e0;
        case 0x3b70e4u: goto label_3b70e4;
        case 0x3b70e8u: goto label_3b70e8;
        case 0x3b70ecu: goto label_3b70ec;
        case 0x3b70f0u: goto label_3b70f0;
        case 0x3b70f4u: goto label_3b70f4;
        case 0x3b70f8u: goto label_3b70f8;
        case 0x3b70fcu: goto label_3b70fc;
        case 0x3b7100u: goto label_3b7100;
        case 0x3b7104u: goto label_3b7104;
        case 0x3b7108u: goto label_3b7108;
        case 0x3b710cu: goto label_3b710c;
        case 0x3b7110u: goto label_3b7110;
        case 0x3b7114u: goto label_3b7114;
        case 0x3b7118u: goto label_3b7118;
        case 0x3b711cu: goto label_3b711c;
        case 0x3b7120u: goto label_3b7120;
        case 0x3b7124u: goto label_3b7124;
        case 0x3b7128u: goto label_3b7128;
        case 0x3b712cu: goto label_3b712c;
        default: break;
    }

    ctx->pc = 0x3b6e78u;

label_3b6e78:
    // 0x3b6e78: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3b6e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3b6e7c:
    // 0x3b6e7c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3b6e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_3b6e80:
    // 0x3b6e80: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x3b6e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_3b6e84:
    // 0x3b6e84: 0x34631010  ori         $v1, $v1, 0x1010
    ctx->pc = 0x3b6e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4112);
label_3b6e88:
    // 0x3b6e88: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3b6e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_3b6e8c:
    // 0x3b6e8c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x3b6e8cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3b6e90:
    // 0x3b6e90: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x3b6e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
label_3b6e94:
    // 0x3b6e94: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x3b6e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_3b6e98:
    // 0x3b6e98: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x3b6e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_3b6e9c:
    // 0x3b6e9c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3b6e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_3b6ea0:
    // 0x3b6ea0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x3b6ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_3b6ea4:
    // 0x3b6ea4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3b6ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_3b6ea8:
    // 0x3b6ea8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3b6ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_3b6eac:
    // 0x3b6eac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b6eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3b6eb0:
    // 0x3b6eb0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3b6eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3b6eb4:
    // 0x3b6eb4: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3b6eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_3b6eb8:
    // 0x3b6eb8: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
label_3b6ebc:
    if (ctx->pc == 0x3B6EBCu) {
        ctx->pc = 0x3B6EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6EB8u;
        // 0x3b6ebc: 0x3c150040  lui         $s5, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6EC0u;
        goto label_3b6ec0;
    }
    ctx->pc = 0x3B6EB8u;
    {
        const bool branch_taken_0x3b6eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6EB8u;
        // 0x3b6ebc: 0x3c150040  lui         $s5, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6eb8) {
            ctx->pc = 0x3B7034u;
            goto label_3b7034;
        }
    }
    ctx->pc = 0x3B6EC0u;
label_3b6ec0:
    // 0x3b6ec0: 0x26a2be90  addiu       $v0, $s5, -0x4170
    ctx->pc = 0x3b6ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294950544));
label_3b6ec4:
    // 0x3b6ec4: 0x8c500018  lw          $s0, 0x18($v0)
    ctx->pc = 0x3b6ec4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_3b6ec8:
    // 0x3b6ec8: 0x1200005a  beqz        $s0, . + 4 + (0x5A << 2)
label_3b6ecc:
    if (ctx->pc == 0x3B6ECCu) {
        ctx->pc = 0x3B6ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6EC8u;
        // 0x3b6ecc: 0x2a0f02d  daddu       $fp, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6ED0u;
        goto label_3b6ed0;
    }
    ctx->pc = 0x3B6EC8u;
    {
        const bool branch_taken_0x3b6ec8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6EC8u;
        // 0x3b6ecc: 0x2a0f02d  daddu       $fp, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6ec8) {
            ctx->pc = 0x3B7034u;
            goto label_3b7034;
        }
    }
    ctx->pc = 0x3B6ED0u;
label_3b6ed0:
    // 0x3b6ed0: 0x2a0a02d  daddu       $s4, $s5, $zero
    ctx->pc = 0x3b6ed0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b6ed4:
    // 0x3b6ed4: 0x24173999  addiu       $s7, $zero, 0x3999
    ctx->pc = 0x3b6ed4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 14745));
label_3b6ed8:
    // 0x3b6ed8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3b6ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_3b6edc:
    // 0x3b6edc: 0x0  nop
    ctx->pc = 0x3b6edcu;
    // NOP
label_3b6ee0:
    // 0x3b6ee0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3b6ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_3b6ee4:
    // 0x3b6ee4: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x3b6ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_3b6ee8:
    // 0x3b6ee8: 0x34631010  ori         $v1, $v1, 0x1010
    ctx->pc = 0x3b6ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4112);
label_3b6eec:
    // 0x3b6eec: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x3b6eecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3b6ef0:
    // 0x3b6ef0: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x3b6ef0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3b6ef4:
    // 0x3b6ef4: 0xde040020  ld          $a0, 0x20($s0)
    ctx->pc = 0x3b6ef4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 32)));
label_3b6ef8:
    // 0x3b6ef8: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x3b6ef8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
label_3b6efc:
    // 0x3b6efc: 0x32250800  andi        $a1, $s1, 0x800
    ctx->pc = 0x3b6efcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2048);
label_3b6f00:
    // 0x3b6f00: 0xde030018  ld          $v1, 0x18($s0)
    ctx->pc = 0x3b6f00u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 24)));
label_3b6f04:
    // 0x3b6f04: 0x82202d  daddu       $a0, $a0, $v0
    ctx->pc = 0x3b6f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
label_3b6f08:
    // 0x3b6f08: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_3b6f0c:
    if (ctx->pc == 0x3B6F0Cu) {
        ctx->pc = 0x3B6F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6F08u;
        // 0x3b6f0c: 0x83982f  dsubu       $s3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) - GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6F10u;
        goto label_3b6f10;
    }
    ctx->pc = 0x3B6F08u;
    {
        const bool branch_taken_0x3b6f08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6F08u;
        // 0x3b6f0c: 0x83982f  dsubu       $s3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) - GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6f08) {
            ctx->pc = 0x3B6F34u;
            goto label_3b6f34;
        }
    }
    ctx->pc = 0x3B6F10u;
label_3b6f10:
    // 0x3b6f10: 0xde82be90  ld          $v0, -0x4170($s4)
    ctx->pc = 0x3b6f10u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 4294950544)));
label_3b6f14:
    // 0x3b6f14: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3b6f14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_3b6f18:
    // 0x3b6f18: 0x3484fbff  ori         $a0, $a0, 0xFBFF
    ctx->pc = 0x3b6f18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64511);
label_3b6f1c:
    // 0x3b6f1c: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x3b6f1cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_3b6f20:
    // 0x3b6f20: 0x2242024  and         $a0, $s1, $a0
    ctx->pc = 0x3b6f20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
label_3b6f24:
    // 0x3b6f24: 0xc0eda84  jal         func_3B6A10
label_3b6f28:
    if (ctx->pc == 0x3B6F28u) {
        ctx->pc = 0x3B6F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6F24u;
        // 0x3b6f28: 0xfe82be90  sd          $v0, -0x4170($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 4294950544), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6F2Cu;
        goto label_3b6f2c;
    }
    ctx->pc = 0x3B6F24u;
    SET_GPR_U32(ctx, 31, 0x3B6F2Cu);
    ctx->pc = 0x3B6F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6F24u;
    // 0x3b6f28: 0xfe82be90  sd          $v0, -0x4170($s4) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 20), 4294950544), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B6A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B6A10u, 0x3B6F24u, 0x3B6F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6F2Cu;
label_3b6f2c:
    // 0x3b6f2c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x3b6f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
label_3b6f30:
    // 0x3b6f30: 0x8cc61000  lw          $a2, 0x1000($a2)
    ctx->pc = 0x3b6f30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4096)));
label_3b6f34:
    // 0x3b6f34: 0xde84be90  ld          $a0, -0x4170($s4)
    ctx->pc = 0x3b6f34u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 4294950544)));
label_3b6f38:
    // 0x3b6f38: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x3b6f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_3b6f3c:
    // 0x3b6f3c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3b6f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_3b6f40:
    // 0x3b6f40: 0x32230003  andi        $v1, $s1, 0x3
    ctx->pc = 0x3b6f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
label_3b6f44:
    // 0x3b6f44: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3b6f44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_3b6f48:
    // 0x3b6f48: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3b6f48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3b6f4c:
    // 0x3b6f4c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3b6f4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_3b6f50:
    // 0x3b6f50: 0x648814  dsllv       $s1, $a0, $v1
    ctx->pc = 0x3b6f50u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) << (GPR_U32(ctx, 3) & 0x3F));
label_3b6f54:
    // 0x3b6f54: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x3b6f54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_3b6f58:
    // 0x3b6f58: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
label_3b6f5c:
    if (ctx->pc == 0x3B6F5Cu) {
        ctx->pc = 0x3B6F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6F58u;
        // 0x3b6f5c: 0x2692be90  addiu       $s2, $s4, -0x4170 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294950544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6F60u;
        goto label_3b6f60;
    }
    ctx->pc = 0x3B6F58u;
    {
        const bool branch_taken_0x3b6f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B6F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6F58u;
        // 0x3b6f5c: 0x2692be90  addiu       $s2, $s4, -0x4170 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294950544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6f58) {
            ctx->pc = 0x3B7034u;
            goto label_3b7034;
        }
    }
    ctx->pc = 0x3B6F60u;
label_3b6f60:
    // 0x3b6f60: 0xc0edb90  jal         func_3B6E40
label_3b6f64:
    if (ctx->pc == 0x3B6F64u) {
        ctx->pc = 0x3B6F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6F60u;
        // 0x3b6f64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6F68u;
        goto label_3b6f68;
    }
    ctx->pc = 0x3B6F60u;
    SET_GPR_U32(ctx, 31, 0x3B6F68u);
    ctx->pc = 0x3B6F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6F60u;
    // 0x3b6f64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B6E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B6E40u, 0x3B6F60u, 0x3B6F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6F68u;
label_3b6f68:
    // 0x3b6f68: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3b6f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3b6f6c:
    // 0x3b6f6c: 0x103900  sll         $a3, $s0, 4
    ctx->pc = 0x3b6f6cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_3b6f70:
    // 0x3b6f70: 0xde060018  ld          $a2, 0x18($s0)
    ctx->pc = 0x3b6f70u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 24)));
label_3b6f74:
    // 0x3b6f74: 0xde040010  ld          $a0, 0x10($s0)
    ctx->pc = 0x3b6f74u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 16)));
label_3b6f78:
    // 0x3b6f78: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x3b6f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_3b6f7c:
    // 0x3b6f7c: 0x226302d  daddu       $a2, $s1, $a2
    ctx->pc = 0x3b6f7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 6));
label_3b6f80:
    // 0x3b6f80: 0xae43001c  sw          $v1, 0x1C($s2)
    ctx->pc = 0x3b6f80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
label_3b6f84:
    // 0x3b6f84: 0xc4302f  dsubu       $a2, $a2, $a0
    ctx->pc = 0x3b6f84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) - GPR_U64(ctx, 4));
label_3b6f88:
    // 0x3b6f88: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x3b6f88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_3b6f8c:
    // 0x3b6f8c: 0x8e1c002c  lw          $gp, 0x2C($s0)
    ctx->pc = 0x3b6f8cu;
    SET_GPR_S32(ctx, 28, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_3b6f90:
    // 0x3b6f90: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3b6f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3b6f94:
    // 0x3b6f94: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x3b6f94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3b6f98:
    // 0x3b6f98: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x3b6f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_3b6f9c:
    // 0x3b6f9c: 0xe42025  or          $a0, $a3, $a0
    ctx->pc = 0x3b6f9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
label_3b6fa0:
    // 0x3b6fa0: 0xde050020  ld          $a1, 0x20($s0)
    ctx->pc = 0x3b6fa0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 32)));
label_3b6fa4:
    // 0x3b6fa4: 0x40f809  jalr        $v0
label_3b6fa8:
    if (ctx->pc == 0x3B6FA8u) {
        ctx->pc = 0x3B6FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6FA4u;
        // 0x3b6fa8: 0x8e070030  lw          $a3, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6FACu;
        goto label_3b6fac;
    }
    ctx->pc = 0x3B6FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B6FACu);
        ctx->pc = 0x3B6FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6FA4u;
        // 0x3b6fa8: 0x8e070030  lw          $a3, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B6FA4u, 0x3B6FACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B6FACu;
label_3b6fac:
    // 0x3b6fac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3b6facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b6fb0:
    // 0x3b6fb0: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
label_3b6fb4:
    if (ctx->pc == 0x3B6FB4u) {
        ctx->pc = 0x3B6FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6FB0u;
        // 0x3b6fb4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6FB8u;
        goto label_3b6fb8;
    }
    ctx->pc = 0x3B6FB0u;
    {
        const bool branch_taken_0x3b6fb0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B6FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6FB0u;
        // 0x3b6fb4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6fb0) {
            ctx->pc = 0x3B6FD0u;
            goto label_3b6fd0;
        }
    }
    ctx->pc = 0x3B6FB8u;
label_3b6fb8:
    // 0x3b6fb8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x3b6fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3b6fbc:
    // 0x3b6fbc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3b6fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3b6fc0:
    // 0x3b6fc0: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x3b6fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
label_3b6fc4:
    // 0x3b6fc4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3b6fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3b6fc8:
    // 0x3b6fc8: 0x10000014  b           . + 4 + (0x14 << 2)
label_3b6fcc:
    if (ctx->pc == 0x3B6FCCu) {
        ctx->pc = 0x3B6FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6FC8u;
        // 0x3b6fcc: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6FD0u;
        goto label_3b6fd0;
    }
    ctx->pc = 0x3B6FC8u;
    {
        const bool branch_taken_0x3b6fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6FC8u;
        // 0x3b6fcc: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6fc8) {
            ctx->pc = 0x3B701Cu;
            goto label_3b701c;
        }
    }
    ctx->pc = 0x3B6FD0u;
label_3b6fd0:
    // 0x3b6fd0: 0x14a2000b  bne         $a1, $v0, . + 4 + (0xB << 2)
label_3b6fd4:
    if (ctx->pc == 0x3B6FD4u) {
        ctx->pc = 0x3B6FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6FD0u;
        // 0x3b6fd4: 0x24023998  addiu       $v0, $zero, 0x3998 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6FD8u;
        goto label_3b6fd8;
    }
    ctx->pc = 0x3B6FD0u;
    {
        const bool branch_taken_0x3b6fd0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B6FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6FD0u;
        // 0x3b6fd4: 0x24023998  addiu       $v0, $zero, 0x3998 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6fd0) {
            ctx->pc = 0x3B7000u;
            goto label_3b7000;
        }
    }
    ctx->pc = 0x3B6FD8u;
label_3b6fd8:
    // 0x3b6fd8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3b6fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_3b6fdc:
    // 0x3b6fdc: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x3b6fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_3b6fe0:
    // 0x3b6fe0: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x3b6fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3b6fe4:
    // 0x3b6fe4: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3b6fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3b6fe8:
    // 0x3b6fe8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3b6fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3b6fec:
    // 0x3b6fec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3b6fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3b6ff0:
    // 0x3b6ff0: 0xae500014  sw          $s0, 0x14($s2)
    ctx->pc = 0x3b6ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 16));
label_3b6ff4:
    // 0x3b6ff4: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x3b6ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_3b6ff8:
    // 0x3b6ff8: 0x10000009  b           . + 4 + (0x9 << 2)
label_3b6ffc:
    if (ctx->pc == 0x3B6FFCu) {
        ctx->pc = 0x3B6FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6FF8u;
        // 0x3b6ffc: 0x27c2be90  addiu       $v0, $fp, -0x4170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294950544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7000u;
        goto label_3b7000;
    }
    ctx->pc = 0x3B6FF8u;
    {
        const bool branch_taken_0x3b6ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6FF8u;
        // 0x3b6ffc: 0x27c2be90  addiu       $v0, $fp, -0x4170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294950544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6ff8) {
            ctx->pc = 0x3B7020u;
            goto label_3b7020;
        }
    }
    ctx->pc = 0x3B7000u;
label_3b7000:
    // 0x3b7000: 0xde030020  ld          $v1, 0x20($s0)
    ctx->pc = 0x3b7000u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 32)));
label_3b7004:
    // 0x3b7004: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x3b7004u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_3b7008:
    // 0x3b7008: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b7008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b700c:
    // 0x3b700c: 0x2e2280a  movz        $a1, $s7, $v0
    ctx->pc = 0x3b700cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 23));
label_3b7010:
    // 0x3b7010: 0x65182d  daddu       $v1, $v1, $a1
    ctx->pc = 0x3b7010u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
label_3b7014:
    // 0x3b7014: 0xc0edb6e  jal         func_3B6DB8
label_3b7018:
    if (ctx->pc == 0x3B7018u) {
        ctx->pc = 0x3B7018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7014u;
        // 0x3b7018: 0xfe030020  sd          $v1, 0x20($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B701Cu;
        goto label_3b701c;
    }
    ctx->pc = 0x3B7014u;
    SET_GPR_U32(ctx, 31, 0x3B701Cu);
    ctx->pc = 0x3B7018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7014u;
    // 0x3b7018: 0xfe030020  sd          $v1, 0x20($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B6DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B6DB8u, 0x3B7014u, 0x3B701Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B701Cu;
label_3b701c:
    // 0x3b701c: 0x27c2be90  addiu       $v0, $fp, -0x4170
    ctx->pc = 0x3b701cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294950544));
label_3b7020:
    // 0x3b7020: 0x8c500020  lw          $s0, 0x20($v0)
    ctx->pc = 0x3b7020u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_3b7024:
    // 0x3b7024: 0x1600ffae  bnez        $s0, . + 4 + (-0x52 << 2)
label_3b7028:
    if (ctx->pc == 0x3B7028u) {
        ctx->pc = 0x3B7028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7024u;
        // 0x3b7028: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B702Cu;
        goto label_3b702c;
    }
    ctx->pc = 0x3B7024u;
    {
        const bool branch_taken_0x3b7024 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B7028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7024u;
        // 0x3b7028: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7024) {
            ctx->pc = 0x3B6EE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b6ee0;
        }
    }
    ctx->pc = 0x3B702Cu;
label_3b702c:
    // 0x3b702c: 0x10000002  b           . + 4 + (0x2 << 2)
label_3b7030:
    if (ctx->pc == 0x3B7030u) {
        ctx->pc = 0x3B7030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B702Cu;
        // 0x3b7030: 0x26a4be90  addiu       $a0, $s5, -0x4170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294950544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7034u;
        goto label_3b7034;
    }
    ctx->pc = 0x3B702Cu;
    {
        const bool branch_taken_0x3b702c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B702Cu;
        // 0x3b7030: 0x26a4be90  addiu       $a0, $s5, -0x4170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294950544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b702c) {
            ctx->pc = 0x3B7038u;
            goto label_3b7038;
        }
    }
    ctx->pc = 0x3B7034u;
label_3b7034:
    // 0x3b7034: 0x26a4be90  addiu       $a0, $s5, -0x4170
    ctx->pc = 0x3b7034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294950544));
label_3b7038:
    // 0x3b7038: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3b7038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3b703c:
    // 0x3b703c: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x3b703cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
label_3b7040:
    // 0x3b7040: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3b7040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_3b7044:
    // 0x3b7044: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x3b7044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_3b7048:
    // 0x3b7048: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3b7048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_3b704c:
    // 0x3b704c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3b704cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3b7050:
    // 0x3b7050: 0x34631010  ori         $v1, $v1, 0x1010
    ctx->pc = 0x3b7050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4112);
label_3b7054:
    // 0x3b7054: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x3b7054u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3b7058:
    // 0x3b7058: 0x32020800  andi        $v0, $s0, 0x800
    ctx->pc = 0x3b7058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2048);
label_3b705c:
    // 0x3b705c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_3b7060:
    if (ctx->pc == 0x3B7060u) {
        ctx->pc = 0x3B7060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B705Cu;
        // 0x3b7060: 0xac800020  sw          $zero, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7064u;
        goto label_3b7064;
    }
    ctx->pc = 0x3B705Cu;
    {
        const bool branch_taken_0x3b705c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B705Cu;
        // 0x3b7060: 0xac800020  sw          $zero, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b705c) {
            ctx->pc = 0x3B7088u;
            goto label_3b7088;
        }
    }
    ctx->pc = 0x3B7064u;
label_3b7064:
    // 0x3b7064: 0xdea2be90  ld          $v0, -0x4170($s5)
    ctx->pc = 0x3b7064u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 4294950544)));
label_3b7068:
    // 0x3b7068: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3b7068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_3b706c:
    // 0x3b706c: 0x3484fbff  ori         $a0, $a0, 0xFBFF
    ctx->pc = 0x3b706cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64511);
label_3b7070:
    // 0x3b7070: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x3b7070u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_3b7074:
    // 0x3b7074: 0x2042024  and         $a0, $s0, $a0
    ctx->pc = 0x3b7074u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
label_3b7078:
    // 0x3b7078: 0xc0eda84  jal         func_3B6A10
label_3b707c:
    if (ctx->pc == 0x3B707Cu) {
        ctx->pc = 0x3B707Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7078u;
        // 0x3b707c: 0xfea2be90  sd          $v0, -0x4170($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 4294950544), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B7080u;
        goto label_3b7080;
    }
    ctx->pc = 0x3B7078u;
    SET_GPR_U32(ctx, 31, 0x3B7080u);
    ctx->pc = 0x3B707Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7078u;
    // 0x3b707c: 0xfea2be90  sd          $v0, -0x4170($s5) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 21), 4294950544), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B6A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B6A10u, 0x3B7078u, 0x3B7080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7080u;
label_3b7080:
    // 0x3b7080: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x3b7080u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_3b7084:
    // 0x3b7084: 0x8ca51000  lw          $a1, 0x1000($a1)
    ctx->pc = 0x3b7084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4096)));
label_3b7088:
    // 0x3b7088: 0xdea2be90  ld          $v0, -0x4170($s5)
    ctx->pc = 0x3b7088u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 4294950544)));
label_3b708c:
    // 0x3b708c: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x3b708cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
label_3b7090:
    // 0x3b7090: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3b7090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_3b7094:
    // 0x3b7094: 0x32040003  andi        $a0, $s0, 0x3
    ctx->pc = 0x3b7094u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
label_3b7098:
    // 0x3b7098: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3b7098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_3b709c:
    // 0x3b709c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3b709cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3b70a0:
    // 0x3b70a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3b70a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3b70a4:
    // 0x3b70a4: 0xc0edb0a  jal         func_3B6C28
label_3b70a8:
    if (ctx->pc == 0x3B70A8u) {
        ctx->pc = 0x3B70A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B70A4u;
        // 0x3b70a8: 0x822014  dsllv       $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B70ACu;
        goto label_3b70ac;
    }
    ctx->pc = 0x3B70A4u;
    SET_GPR_U32(ctx, 31, 0x3B70ACu);
    ctx->pc = 0x3B70A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B70A4u;
    // 0x3b70a8: 0x822014  dsllv       $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B6C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B6C28u, 0x3B70A4u, 0x3B70ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B70ACu;
label_3b70ac:
    // 0x3b70ac: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3b70acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_3b70b0:
    // 0x3b70b0: 0x8c421000  lw          $v0, 0x1000($v0)
    ctx->pc = 0x3b70b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4096)));
label_3b70b4:
    // 0x3b70b4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3b70b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_3b70b8:
    // 0x3b70b8: 0x8c631010  lw          $v1, 0x1010($v1)
    ctx->pc = 0x3b70b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4112)));
label_3b70bc:
    // 0x3b70bc: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x3b70bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_3b70c0:
    // 0x3b70c0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_3b70c4:
    if (ctx->pc == 0x3B70C4u) {
        ctx->pc = 0x3B70C8u;
        goto label_3b70c8;
    }
    ctx->pc = 0x3B70C0u;
    {
        const bool branch_taken_0x3b70c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b70c0) {
            ctx->pc = 0x3B70ECu;
            goto label_3b70ec;
        }
    }
    ctx->pc = 0x3B70C8u;
label_3b70c8:
    // 0x3b70c8: 0xdea2be90  ld          $v0, -0x4170($s5)
    ctx->pc = 0x3b70c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 4294950544)));
label_3b70cc:
    // 0x3b70cc: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3b70ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_3b70d0:
    // 0x3b70d0: 0x3484fbff  ori         $a0, $a0, 0xFBFF
    ctx->pc = 0x3b70d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64511);
label_3b70d4:
    // 0x3b70d4: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x3b70d4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_3b70d8:
    // 0x3b70d8: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x3b70d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_3b70dc:
    // 0x3b70dc: 0xc0eda84  jal         func_3B6A10
label_3b70e0:
    if (ctx->pc == 0x3B70E0u) {
        ctx->pc = 0x3B70E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B70DCu;
        // 0x3b70e0: 0xfea2be90  sd          $v0, -0x4170($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 4294950544), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B70E4u;
        goto label_3b70e4;
    }
    ctx->pc = 0x3B70DCu;
    SET_GPR_U32(ctx, 31, 0x3B70E4u);
    ctx->pc = 0x3B70E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B70DCu;
    // 0x3b70e0: 0xfea2be90  sd          $v0, -0x4170($s5) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 21), 4294950544), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B6A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B6A10u, 0x3B70DCu, 0x3B70E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B70E4u;
label_3b70e4:
    // 0x3b70e4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3b70e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_3b70e8:
    // 0x3b70e8: 0x8c421000  lw          $v0, 0x1000($v0)
    ctx->pc = 0x3b70e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4096)));
label_3b70ec:
    // 0x3b70ec: 0xdea2be90  ld          $v0, -0x4170($s5)
    ctx->pc = 0x3b70ecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 4294950544)));
label_3b70f0:
    // 0x3b70f0: 0xf  sync
    ctx->pc = 0x3b70f0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3b70f4:
    // 0x3b70f4: 0x42000038  ei
    ctx->pc = 0x3b70f4u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_3b70f8:
    // 0x3b70f8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3b70f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3b70fc:
    // 0x3b70fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b70fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b7100:
    // 0x3b7100: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x3b7100u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_3b7104:
    // 0x3b7104: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x3b7104u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3b7108:
    // 0x3b7108: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x3b7108u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3b710c:
    // 0x3b710c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x3b710cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3b7110:
    // 0x3b7110: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x3b7110u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3b7114:
    // 0x3b7114: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x3b7114u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3b7118:
    // 0x3b7118: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3b7118u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3b711c:
    // 0x3b711c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b711cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3b7120:
    // 0x3b7120: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b7120u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b7124:
    // 0x3b7124: 0x3e00008  jr          $ra
label_3b7128:
    if (ctx->pc == 0x3B7128u) {
        ctx->pc = 0x3B7128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7124u;
        // 0x3b7128: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B712Cu;
        goto label_3b712c;
    }
    ctx->pc = 0x3B7124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B7128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7124u;
        // 0x3b7128: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B7124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B712Cu;
label_3b712c:
    // 0x3b712c: 0x0  nop
    ctx->pc = 0x3b712cu;
    // NOP
    ctx->pc = 0x3b7130u;
}
