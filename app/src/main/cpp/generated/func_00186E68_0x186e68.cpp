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

// Function: func_00186E68
// Address: 0x186e68 - 0x187190
void func_00186E68_0x186e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00186E68_0x186e68");
#endif

    switch (ctx->pc) {
        case 0x186e68u: goto label_186e68;
        case 0x186e6cu: goto label_186e6c;
        case 0x186e70u: goto label_186e70;
        case 0x186e74u: goto label_186e74;
        case 0x186e78u: goto label_186e78;
        case 0x186e7cu: goto label_186e7c;
        case 0x186e80u: goto label_186e80;
        case 0x186e84u: goto label_186e84;
        case 0x186e88u: goto label_186e88;
        case 0x186e8cu: goto label_186e8c;
        case 0x186e90u: goto label_186e90;
        case 0x186e94u: goto label_186e94;
        case 0x186e98u: goto label_186e98;
        case 0x186e9cu: goto label_186e9c;
        case 0x186ea0u: goto label_186ea0;
        case 0x186ea4u: goto label_186ea4;
        case 0x186ea8u: goto label_186ea8;
        case 0x186eacu: goto label_186eac;
        case 0x186eb0u: goto label_186eb0;
        case 0x186eb4u: goto label_186eb4;
        case 0x186eb8u: goto label_186eb8;
        case 0x186ebcu: goto label_186ebc;
        case 0x186ec0u: goto label_186ec0;
        case 0x186ec4u: goto label_186ec4;
        case 0x186ec8u: goto label_186ec8;
        case 0x186eccu: goto label_186ecc;
        case 0x186ed0u: goto label_186ed0;
        case 0x186ed4u: goto label_186ed4;
        case 0x186ed8u: goto label_186ed8;
        case 0x186edcu: goto label_186edc;
        case 0x186ee0u: goto label_186ee0;
        case 0x186ee4u: goto label_186ee4;
        case 0x186ee8u: goto label_186ee8;
        case 0x186eecu: goto label_186eec;
        case 0x186ef0u: goto label_186ef0;
        case 0x186ef4u: goto label_186ef4;
        case 0x186ef8u: goto label_186ef8;
        case 0x186efcu: goto label_186efc;
        case 0x186f00u: goto label_186f00;
        case 0x186f04u: goto label_186f04;
        case 0x186f08u: goto label_186f08;
        case 0x186f0cu: goto label_186f0c;
        case 0x186f10u: goto label_186f10;
        case 0x186f14u: goto label_186f14;
        case 0x186f18u: goto label_186f18;
        case 0x186f1cu: goto label_186f1c;
        case 0x186f20u: goto label_186f20;
        case 0x186f24u: goto label_186f24;
        case 0x186f28u: goto label_186f28;
        case 0x186f2cu: goto label_186f2c;
        case 0x186f30u: goto label_186f30;
        case 0x186f34u: goto label_186f34;
        case 0x186f38u: goto label_186f38;
        case 0x186f3cu: goto label_186f3c;
        case 0x186f40u: goto label_186f40;
        case 0x186f44u: goto label_186f44;
        case 0x186f48u: goto label_186f48;
        case 0x186f4cu: goto label_186f4c;
        case 0x186f50u: goto label_186f50;
        case 0x186f54u: goto label_186f54;
        case 0x186f58u: goto label_186f58;
        case 0x186f5cu: goto label_186f5c;
        case 0x186f60u: goto label_186f60;
        case 0x186f64u: goto label_186f64;
        case 0x186f68u: goto label_186f68;
        case 0x186f6cu: goto label_186f6c;
        case 0x186f70u: goto label_186f70;
        case 0x186f74u: goto label_186f74;
        case 0x186f78u: goto label_186f78;
        case 0x186f7cu: goto label_186f7c;
        case 0x186f80u: goto label_186f80;
        case 0x186f84u: goto label_186f84;
        case 0x186f88u: goto label_186f88;
        case 0x186f8cu: goto label_186f8c;
        case 0x186f90u: goto label_186f90;
        case 0x186f94u: goto label_186f94;
        case 0x186f98u: goto label_186f98;
        case 0x186f9cu: goto label_186f9c;
        case 0x186fa0u: goto label_186fa0;
        case 0x186fa4u: goto label_186fa4;
        case 0x186fa8u: goto label_186fa8;
        case 0x186facu: goto label_186fac;
        case 0x186fb0u: goto label_186fb0;
        case 0x186fb4u: goto label_186fb4;
        case 0x186fb8u: goto label_186fb8;
        case 0x186fbcu: goto label_186fbc;
        case 0x186fc0u: goto label_186fc0;
        case 0x186fc4u: goto label_186fc4;
        case 0x186fc8u: goto label_186fc8;
        case 0x186fccu: goto label_186fcc;
        case 0x186fd0u: goto label_186fd0;
        case 0x186fd4u: goto label_186fd4;
        case 0x186fd8u: goto label_186fd8;
        case 0x186fdcu: goto label_186fdc;
        case 0x186fe0u: goto label_186fe0;
        case 0x186fe4u: goto label_186fe4;
        case 0x186fe8u: goto label_186fe8;
        case 0x186fecu: goto label_186fec;
        case 0x186ff0u: goto label_186ff0;
        case 0x186ff4u: goto label_186ff4;
        case 0x186ff8u: goto label_186ff8;
        case 0x186ffcu: goto label_186ffc;
        case 0x187000u: goto label_187000;
        case 0x187004u: goto label_187004;
        case 0x187008u: goto label_187008;
        case 0x18700cu: goto label_18700c;
        case 0x187010u: goto label_187010;
        case 0x187014u: goto label_187014;
        case 0x187018u: goto label_187018;
        case 0x18701cu: goto label_18701c;
        case 0x187020u: goto label_187020;
        case 0x187024u: goto label_187024;
        case 0x187028u: goto label_187028;
        case 0x18702cu: goto label_18702c;
        case 0x187030u: goto label_187030;
        case 0x187034u: goto label_187034;
        case 0x187038u: goto label_187038;
        case 0x18703cu: goto label_18703c;
        case 0x187040u: goto label_187040;
        case 0x187044u: goto label_187044;
        case 0x187048u: goto label_187048;
        case 0x18704cu: goto label_18704c;
        case 0x187050u: goto label_187050;
        case 0x187054u: goto label_187054;
        case 0x187058u: goto label_187058;
        case 0x18705cu: goto label_18705c;
        case 0x187060u: goto label_187060;
        case 0x187064u: goto label_187064;
        case 0x187068u: goto label_187068;
        case 0x18706cu: goto label_18706c;
        case 0x187070u: goto label_187070;
        case 0x187074u: goto label_187074;
        case 0x187078u: goto label_187078;
        case 0x18707cu: goto label_18707c;
        case 0x187080u: goto label_187080;
        case 0x187084u: goto label_187084;
        case 0x187088u: goto label_187088;
        case 0x18708cu: goto label_18708c;
        case 0x187090u: goto label_187090;
        case 0x187094u: goto label_187094;
        case 0x187098u: goto label_187098;
        case 0x18709cu: goto label_18709c;
        case 0x1870a0u: goto label_1870a0;
        case 0x1870a4u: goto label_1870a4;
        case 0x1870a8u: goto label_1870a8;
        case 0x1870acu: goto label_1870ac;
        case 0x1870b0u: goto label_1870b0;
        case 0x1870b4u: goto label_1870b4;
        case 0x1870b8u: goto label_1870b8;
        case 0x1870bcu: goto label_1870bc;
        case 0x1870c0u: goto label_1870c0;
        case 0x1870c4u: goto label_1870c4;
        case 0x1870c8u: goto label_1870c8;
        case 0x1870ccu: goto label_1870cc;
        case 0x1870d0u: goto label_1870d0;
        case 0x1870d4u: goto label_1870d4;
        case 0x1870d8u: goto label_1870d8;
        case 0x1870dcu: goto label_1870dc;
        case 0x1870e0u: goto label_1870e0;
        case 0x1870e4u: goto label_1870e4;
        case 0x1870e8u: goto label_1870e8;
        case 0x1870ecu: goto label_1870ec;
        case 0x1870f0u: goto label_1870f0;
        case 0x1870f4u: goto label_1870f4;
        case 0x1870f8u: goto label_1870f8;
        case 0x1870fcu: goto label_1870fc;
        case 0x187100u: goto label_187100;
        case 0x187104u: goto label_187104;
        case 0x187108u: goto label_187108;
        case 0x18710cu: goto label_18710c;
        case 0x187110u: goto label_187110;
        case 0x187114u: goto label_187114;
        case 0x187118u: goto label_187118;
        case 0x18711cu: goto label_18711c;
        case 0x187120u: goto label_187120;
        case 0x187124u: goto label_187124;
        case 0x187128u: goto label_187128;
        case 0x18712cu: goto label_18712c;
        case 0x187130u: goto label_187130;
        case 0x187134u: goto label_187134;
        case 0x187138u: goto label_187138;
        case 0x18713cu: goto label_18713c;
        case 0x187140u: goto label_187140;
        case 0x187144u: goto label_187144;
        case 0x187148u: goto label_187148;
        case 0x18714cu: goto label_18714c;
        case 0x187150u: goto label_187150;
        case 0x187154u: goto label_187154;
        case 0x187158u: goto label_187158;
        case 0x18715cu: goto label_18715c;
        case 0x187160u: goto label_187160;
        case 0x187164u: goto label_187164;
        case 0x187168u: goto label_187168;
        case 0x18716cu: goto label_18716c;
        case 0x187170u: goto label_187170;
        case 0x187174u: goto label_187174;
        case 0x187178u: goto label_187178;
        case 0x18717cu: goto label_18717c;
        case 0x187180u: goto label_187180;
        case 0x187184u: goto label_187184;
        case 0x187188u: goto label_187188;
        case 0x18718cu: goto label_18718c;
        default: break;
    }

    ctx->pc = 0x186e68u;

label_186e68:
    // 0x186e68: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x186e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_186e6c:
    // 0x186e6c: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x186e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_186e70:
    // 0x186e70: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x186e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_186e74:
    // 0x186e74: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x186e74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_186e78:
    // 0x186e78: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x186e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_186e7c:
    // 0x186e7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x186e7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_186e80:
    // 0x186e80: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x186e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_186e84:
    // 0x186e84: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x186e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_186e88:
    // 0x186e88: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x186e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_186e8c:
    // 0x186e8c: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x186e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_186e90:
    // 0x186e90: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x186e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_186e94:
    // 0x186e94: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x186e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_186e98:
    // 0x186e98: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x186e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_186e9c:
    // 0x186e9c: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x186e9cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_186ea0:
    // 0x186ea0: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x186ea0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_186ea4:
    // 0x186ea4: 0x922302f5  lbu         $v1, 0x2F5($s1)
    ctx->pc = 0x186ea4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
label_186ea8:
    // 0x186ea8: 0x10700036  beq         $v1, $s0, . + 4 + (0x36 << 2)
label_186eac:
    if (ctx->pc == 0x186EACu) {
        ctx->pc = 0x186EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186EA8u;
        // 0x186eac: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x186EB0u;
        goto label_186eb0;
    }
    ctx->pc = 0x186EA8u;
    {
        const bool branch_taken_0x186ea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x186EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186EA8u;
        // 0x186eac: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x186ea8) {
            ctx->pc = 0x186F84u;
            goto label_186f84;
        }
    }
    ctx->pc = 0x186EB0u;
label_186eb0:
    // 0x186eb0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_186eb4:
    if (ctx->pc == 0x186EB4u) {
        ctx->pc = 0x186EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186EB0u;
        // 0x186eb4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186EB8u;
        goto label_186eb8;
    }
    ctx->pc = 0x186EB0u;
    {
        const bool branch_taken_0x186eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186EB0u;
        // 0x186eb4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186eb0) {
            ctx->pc = 0x186EC8u;
            goto label_186ec8;
        }
    }
    ctx->pc = 0x186EB8u;
label_186eb8:
    // 0x186eb8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_186ebc:
    if (ctx->pc == 0x186EBCu) {
        ctx->pc = 0x186EC0u;
        goto label_186ec0;
    }
    ctx->pc = 0x186EB8u;
    {
        const bool branch_taken_0x186eb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x186eb8) {
            ctx->pc = 0x186EE0u;
            goto label_186ee0;
        }
    }
    ctx->pc = 0x186EC0u;
label_186ec0:
    // 0x186ec0: 0x1000004f  b           . + 4 + (0x4F << 2)
label_186ec4:
    if (ctx->pc == 0x186EC4u) {
        ctx->pc = 0x186EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186EC0u;
        // 0x186ec4: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186EC8u;
        goto label_186ec8;
    }
    ctx->pc = 0x186EC0u;
    {
        const bool branch_taken_0x186ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186EC0u;
        // 0x186ec4: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186ec0) {
            ctx->pc = 0x187000u;
            goto label_187000;
        }
    }
    ctx->pc = 0x186EC8u;
label_186ec8:
    // 0x186ec8: 0x10620038  beq         $v1, $v0, . + 4 + (0x38 << 2)
label_186ecc:
    if (ctx->pc == 0x186ECCu) {
        ctx->pc = 0x186ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186EC8u;
        // 0x186ecc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186ED0u;
        goto label_186ed0;
    }
    ctx->pc = 0x186EC8u;
    {
        const bool branch_taken_0x186ec8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x186ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186EC8u;
        // 0x186ecc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186ec8) {
            ctx->pc = 0x186FACu;
            goto label_186fac;
        }
    }
    ctx->pc = 0x186ED0u;
label_186ed0:
    // 0x186ed0: 0x50620047  beql        $v1, $v0, . + 4 + (0x47 << 2)
label_186ed4:
    if (ctx->pc == 0x186ED4u) {
        ctx->pc = 0x186ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186ED0u;
        // 0x186ed4: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186ED8u;
        goto label_186ed8;
    }
    ctx->pc = 0x186ED0u;
    {
        const bool branch_taken_0x186ed0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x186ed0) {
            ctx->pc = 0x186ED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186ED0u;
            // 0x186ed4: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186FF0u;
            goto label_186ff0;
        }
    }
    ctx->pc = 0x186ED8u;
label_186ed8:
    // 0x186ed8: 0x10000049  b           . + 4 + (0x49 << 2)
label_186edc:
    if (ctx->pc == 0x186EDCu) {
        ctx->pc = 0x186EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186ED8u;
        // 0x186edc: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186EE0u;
        goto label_186ee0;
    }
    ctx->pc = 0x186ED8u;
    {
        const bool branch_taken_0x186ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186ED8u;
        // 0x186edc: 0x922202b4  lbu         $v0, 0x2B4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186ed8) {
            ctx->pc = 0x187000u;
            goto label_187000;
        }
    }
    ctx->pc = 0x186EE0u;
label_186ee0:
    // 0x186ee0: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x186ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_186ee4:
    // 0x186ee4: 0x8e230214  lw          $v1, 0x214($s1)
    ctx->pc = 0x186ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
label_186ee8:
    // 0x186ee8: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x186ee8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_186eec:
    // 0x186eec: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x186eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_186ef0:
    // 0x186ef0: 0x40f809  jalr        $v0
label_186ef4:
    if (ctx->pc == 0x186EF4u) {
        ctx->pc = 0x186EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186EF0u;
        // 0x186ef4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186EF8u;
        goto label_186ef8;
    }
    ctx->pc = 0x186EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x186EF8u);
        ctx->pc = 0x186EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186EF0u;
        // 0x186ef4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186EF0u, 0x186EF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x186EF8u;
label_186ef8:
    // 0x186ef8: 0x13a20007  beq         $sp, $v0, . + 4 + (0x7 << 2)
label_186efc:
    if (ctx->pc == 0x186EFCu) {
        ctx->pc = 0x186F00u;
        goto label_186f00;
    }
    ctx->pc = 0x186EF8u;
    {
        const bool branch_taken_0x186ef8 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x186ef8) {
            ctx->pc = 0x186F18u;
            goto label_186f18;
        }
    }
    ctx->pc = 0x186F00u;
label_186f00:
    // 0x186f00: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x186f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_186f04:
    // 0x186f04: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x186f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_186f08:
    // 0x186f08: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x186f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_186f0c:
    // 0x186f0c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x186f0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_186f10:
    // 0x186f10: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x186f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_186f14:
    // 0x186f14: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x186f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_186f18:
    // 0x186f18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x186f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_186f1c:
    // 0x186f1c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x186f1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_186f20:
    // 0x186f20: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x186f20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_186f24:
    // 0x186f24: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x186f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_186f28:
    // 0x186f28: 0x240500cc  addiu       $a1, $zero, 0xCC
    ctx->pc = 0x186f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
label_186f2c:
    // 0x186f2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x186f2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_186f30:
    // 0x186f30: 0xc0c1a0e  jal         func_306838
label_186f34:
    if (ctx->pc == 0x186F34u) {
        ctx->pc = 0x186F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186F30u;
        // 0x186f34: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186F38u;
        goto label_186f38;
    }
    ctx->pc = 0x186F30u;
    SET_GPR_U32(ctx, 31, 0x186F38u);
    ctx->pc = 0x186F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186F30u;
    // 0x186f34: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x186F30u, 0x186F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186F38u;
label_186f38:
    // 0x186f38: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x186f38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_186f3c:
    // 0x186f3c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x186f3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_186f40:
    // 0x186f40: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x186f40u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_186f44:
    // 0x186f44: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x186f44u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_186f48:
    // 0x186f48: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x186f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_186f4c:
    // 0x186f4c: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x186f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_186f50:
    // 0x186f50: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x186f50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_186f54:
    // 0x186f54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x186f54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_186f58:
    // 0x186f58: 0xc0b2e92  jal         func_2CBA48
label_186f5c:
    if (ctx->pc == 0x186F5Cu) {
        ctx->pc = 0x186F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186F58u;
        // 0x186f5c: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186F60u;
        goto label_186f60;
    }
    ctx->pc = 0x186F58u;
    SET_GPR_U32(ctx, 31, 0x186F60u);
    ctx->pc = 0x186F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186F58u;
    // 0x186f5c: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x186F58u, 0x186F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186F60u;
label_186f60:
    // 0x186f60: 0xc061cfc  jal         func_1873F0
label_186f64:
    if (ctx->pc == 0x186F64u) {
        ctx->pc = 0x186F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186F60u;
        // 0x186f64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186F68u;
        goto label_186f68;
    }
    ctx->pc = 0x186F60u;
    SET_GPR_U32(ctx, 31, 0x186F68u);
    ctx->pc = 0x186F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186F60u;
    // 0x186f64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1873F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1873F0u, 0x186F60u, 0x186F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186F68u;
label_186f68:
    // 0x186f68: 0xc06de42  jal         func_1B7908
label_186f6c:
    if (ctx->pc == 0x186F6Cu) {
        ctx->pc = 0x186F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186F68u;
        // 0x186f6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186F70u;
        goto label_186f70;
    }
    ctx->pc = 0x186F68u;
    SET_GPR_U32(ctx, 31, 0x186F70u);
    ctx->pc = 0x186F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186F68u;
    // 0x186f6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7908u, 0x186F68u, 0x186F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186F70u;
label_186f70:
    // 0x186f70: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x186f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_186f74:
    // 0x186f74: 0xa23002f5  sb          $s0, 0x2F5($s1)
    ctx->pc = 0x186f74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 16));
label_186f78:
    // 0x186f78: 0xa6220654  sh          $v0, 0x654($s1)
    ctx->pc = 0x186f78u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
label_186f7c:
    // 0x186f7c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x186f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_186f80:
    // 0x186f80: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x186f80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_186f84:
    // 0x186f84: 0x96220654  lhu         $v0, 0x654($s1)
    ctx->pc = 0x186f84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1620)));
label_186f88:
    // 0x186f88: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x186f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_186f8c:
    // 0x186f8c: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x186f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_186f90:
    // 0x186f90: 0x1c60001a  bgtz        $v1, . + 4 + (0x1A << 2)
label_186f94:
    if (ctx->pc == 0x186F94u) {
        ctx->pc = 0x186F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186F90u;
        // 0x186f94: 0xa6220654  sh          $v0, 0x654($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186F98u;
        goto label_186f98;
    }
    ctx->pc = 0x186F90u;
    {
        const bool branch_taken_0x186f90 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x186F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186F90u;
        // 0x186f94: 0xa6220654  sh          $v0, 0x654($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186f90) {
            ctx->pc = 0x186FFCu;
            goto label_186ffc;
        }
    }
    ctx->pc = 0x186F98u;
label_186f98:
    // 0x186f98: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x186f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_186f9c:
    // 0x186f9c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x186f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_186fa0:
    // 0x186fa0: 0xa6220654  sh          $v0, 0x654($s1)
    ctx->pc = 0x186fa0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
label_186fa4:
    // 0x186fa4: 0x10000013  b           . + 4 + (0x13 << 2)
label_186fa8:
    if (ctx->pc == 0x186FA8u) {
        ctx->pc = 0x186FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186FA4u;
        // 0x186fa8: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186FACu;
        goto label_186fac;
    }
    ctx->pc = 0x186FA4u;
    {
        const bool branch_taken_0x186fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186FA4u;
        // 0x186fa8: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186fa4) {
            ctx->pc = 0x186FF4u;
            goto label_186ff4;
        }
    }
    ctx->pc = 0x186FACu;
label_186fac:
    // 0x186fac: 0x96220654  lhu         $v0, 0x654($s1)
    ctx->pc = 0x186facu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1620)));
label_186fb0:
    // 0x186fb0: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x186fb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_186fb4:
    // 0x186fb4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x186fb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_186fb8:
    // 0x186fb8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x186fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_186fbc:
    // 0x186fbc: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x186fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_186fc0:
    // 0x186fc0: 0xa6220654  sh          $v0, 0x654($s1)
    ctx->pc = 0x186fc0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1620), (uint16_t)GPR_U32(ctx, 2));
label_186fc4:
    // 0x186fc4: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x186fc4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_186fc8:
    // 0x186fc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x186fc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_186fcc:
    // 0x186fcc: 0x0  nop
    ctx->pc = 0x186fccu;
    // NOP
label_186fd0:
    // 0x186fd0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x186fd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_186fd4:
    // 0x186fd4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x186fd4u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
label_186fd8:
    // 0x186fd8: 0x1c600008  bgtz        $v1, . + 4 + (0x8 << 2)
label_186fdc:
    if (ctx->pc == 0x186FDCu) {
        ctx->pc = 0x186FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186FD8u;
        // 0x186fdc: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x186FE0u;
        goto label_186fe0;
    }
    ctx->pc = 0x186FD8u;
    {
        const bool branch_taken_0x186fd8 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x186FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186FD8u;
        // 0x186fdc: 0xe620024c  swc1        $f0, 0x24C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x186fd8) {
            ctx->pc = 0x186FFCu;
            goto label_186ffc;
        }
    }
    ctx->pc = 0x186FE0u;
label_186fe0:
    // 0x186fe0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x186fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_186fe4:
    // 0x186fe4: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x186fe4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_186fe8:
    // 0x186fe8: 0x10000003  b           . + 4 + (0x3 << 2)
label_186fec:
    if (ctx->pc == 0x186FECu) {
        ctx->pc = 0x186FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186FE8u;
        // 0x186fec: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186FF0u;
        goto label_186ff0;
    }
    ctx->pc = 0x186FE8u;
    {
        const bool branch_taken_0x186fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186FE8u;
        // 0x186fec: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186fe8) {
            ctx->pc = 0x186FF8u;
            goto label_186ff8;
        }
    }
    ctx->pc = 0x186FF0u;
label_186ff0:
    // 0x186ff0: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x186ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
label_186ff4:
    // 0x186ff4: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x186ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_186ff8:
    // 0x186ff8: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x186ff8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_186ffc:
    // 0x186ffc: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x186ffcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_187000:
    // 0x187000: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x187000u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_187004:
    // 0x187004: 0x10560053  beq         $v0, $s6, . + 4 + (0x53 << 2)
label_187008:
    if (ctx->pc == 0x187008u) {
        ctx->pc = 0x187008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187004u;
        // 0x187008: 0x27be0020  addiu       $fp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18700Cu;
        goto label_18700c;
    }
    ctx->pc = 0x187004u;
    {
        const bool branch_taken_0x187004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x187008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187004u;
        // 0x187008: 0x27be0020  addiu       $fp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187004) {
            ctx->pc = 0x187154u;
            goto label_187154;
        }
    }
    ctx->pc = 0x18700Cu;
label_18700c:
    // 0x18700c: 0x3c01c47a  lui         $at, 0xC47A
    ctx->pc = 0x18700cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50298 << 16));
label_187010:
    // 0x187010: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x187010u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_187014:
    // 0x187014: 0x27b70010  addiu       $s7, $sp, 0x10
    ctx->pc = 0x187014u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_187018:
    // 0x187018: 0x26350700  addiu       $s5, $s1, 0x700
    ctx->pc = 0x187018u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 1792));
label_18701c:
    // 0x18701c: 0x263006d0  addiu       $s0, $s1, 0x6D0
    ctx->pc = 0x18701cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1744));
label_187020:
    // 0x187020: 0x263406f0  addiu       $s4, $s1, 0x6F0
    ctx->pc = 0x187020u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 1776));
label_187024:
    // 0x187024: 0x263306e0  addiu       $s3, $s1, 0x6E0
    ctx->pc = 0x187024u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1760));
label_187028:
    // 0x187028: 0x263206c0  addiu       $s2, $s1, 0x6C0
    ctx->pc = 0x187028u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1728));
label_18702c:
    // 0x18702c: 0x0  nop
    ctx->pc = 0x18702cu;
    // NOP
label_187030:
    // 0x187030: 0xc05ce40  jal         func_173900
label_187034:
    if (ctx->pc == 0x187034u) {
        ctx->pc = 0x187034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187030u;
        // 0x187034: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187038u;
        goto label_187038;
    }
    ctx->pc = 0x187030u;
    SET_GPR_U32(ctx, 31, 0x187038u);
    ctx->pc = 0x187034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187030u;
    // 0x187034: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173900u, 0x187030u, 0x187038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187038u;
label_187038:
    // 0x187038: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x187038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18703c:
    // 0x18703c: 0x5443003b  bnel        $v0, $v1, . + 4 + (0x3B << 2)
label_187040:
    if (ctx->pc == 0x187040u) {
        ctx->pc = 0x187040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18703Cu;
        // 0x187040: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187044u;
        goto label_187044;
    }
    ctx->pc = 0x18703Cu;
    {
        const bool branch_taken_0x18703c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x18703c) {
            ctx->pc = 0x187040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18703Cu;
            // 0x187040: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18712Cu;
            goto label_18712c;
        }
    }
    ctx->pc = 0x187044u;
label_187044:
    // 0x187044: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x187044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_187048:
    // 0x187048: 0xc0a4bd4  jal         func_292F50
label_18704c:
    if (ctx->pc == 0x18704Cu) {
        ctx->pc = 0x18704Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187048u;
        // 0x18704c: 0x244464f0  addiu       $a0, $v0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187050u;
        goto label_187050;
    }
    ctx->pc = 0x187048u;
    SET_GPR_U32(ctx, 31, 0x187050u);
    ctx->pc = 0x18704Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187048u;
    // 0x18704c: 0x244464f0  addiu       $a0, $v0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x187048u, 0x187050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187050u;
label_187050:
    // 0x187050: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x187050u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_187054:
    // 0x187054: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x187054u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_187058:
    // 0x187058: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x187058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_18705c:
    // 0x18705c: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x18705cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_187060:
    // 0x187060: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x187060u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_187064:
    // 0x187064: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x187064u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_187068:
    // 0x187068: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x187068u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_18706c:
    // 0x18706c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x18706cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_187070:
    // 0x187070: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x187070u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_187074:
    // 0x187074: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x187074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_187078:
    // 0x187078: 0xda04fff0  lqc2        $vf4, -0x10($s0)
    ctx->pc = 0x187078u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 4294967280)));
label_18707c:
    // 0x18707c: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x18707cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_187080:
    // 0x187080: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x187080u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_187084:
    // 0x187084: 0xfa04fff0  sqc2        $vf4, -0x10($s0)
    ctx->pc = 0x187084u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4294967280), _mm_castps_si128(ctx->vu0_vf[4]));
label_187088:
    // 0x187088: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x187088u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_18708c:
    // 0x18708c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x18708cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_187090:
    // 0x187090: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x187090u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_187094:
    // 0x187094: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x187094u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_187098:
    // 0x187098: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x187098u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_18709c:
    // 0x18709c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x18709cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1870a0:
    // 0x1870a0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1870a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1870a4:
    // 0x1870a4: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x1870a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_1870a8:
    // 0x1870a8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1870a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1870ac:
    // 0x1870ac: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1870acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1870b0:
    // 0x1870b0: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x1870b0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_1870b4:
    // 0x1870b4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1870b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1870b8:
    // 0x1870b8: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1870b8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_1870bc:
    // 0x1870bc: 0xc07df68  jal         func_1F7DA0
label_1870c0:
    if (ctx->pc == 0x1870C0u) {
        ctx->pc = 0x1870C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1870BCu;
        // 0x1870c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1870C4u;
        goto label_1870c4;
    }
    ctx->pc = 0x1870BCu;
    SET_GPR_U32(ctx, 31, 0x1870C4u);
    ctx->pc = 0x1870C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1870BCu;
    // 0x1870c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x1870BCu, 0x1870C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1870C4u;
label_1870c4:
    // 0x1870c4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1870c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1870c8:
    // 0x1870c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1870c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1870cc:
    // 0x1870cc: 0xc051dca  jal         func_147728
label_1870d0:
    if (ctx->pc == 0x1870D0u) {
        ctx->pc = 0x1870D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1870CCu;
        // 0x1870d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1870D4u;
        goto label_1870d4;
    }
    ctx->pc = 0x1870CCu;
    SET_GPR_U32(ctx, 31, 0x1870D4u);
    ctx->pc = 0x1870D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1870CCu;
    // 0x1870d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x1870CCu, 0x1870D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1870D4u;
label_1870d4:
    // 0x1870d4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1870d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1870d8:
    // 0x1870d8: 0xc051f10  jal         func_147C40
label_1870dc:
    if (ctx->pc == 0x1870DCu) {
        ctx->pc = 0x1870DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1870D8u;
        // 0x1870dc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1870E0u;
        goto label_1870e0;
    }
    ctx->pc = 0x1870D8u;
    SET_GPR_U32(ctx, 31, 0x1870E0u);
    ctx->pc = 0x1870DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1870D8u;
    // 0x1870dc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x1870D8u, 0x1870E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1870E0u;
label_1870e0:
    // 0x1870e0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1870e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1870e4:
    // 0x1870e4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1870e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1870e8:
    // 0x1870e8: 0xc051efe  jal         func_147BF8
label_1870ec:
    if (ctx->pc == 0x1870ECu) {
        ctx->pc = 0x1870ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1870E8u;
        // 0x1870ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1870F0u;
        goto label_1870f0;
    }
    ctx->pc = 0x1870E8u;
    SET_GPR_U32(ctx, 31, 0x1870F0u);
    ctx->pc = 0x1870ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1870E8u;
    // 0x1870ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147BF8u, 0x1870E8u, 0x1870F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1870F0u;
label_1870f0:
    // 0x1870f0: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x1870f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1870f4:
    // 0x1870f4: 0xc051d4a  jal         func_147528
label_1870f8:
    if (ctx->pc == 0x1870F8u) {
        ctx->pc = 0x1870F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1870F4u;
        // 0x1870f8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1870FCu;
        goto label_1870fc;
    }
    ctx->pc = 0x1870F4u;
    SET_GPR_U32(ctx, 31, 0x1870FCu);
    ctx->pc = 0x1870F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1870F4u;
    // 0x1870f8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x1870F4u, 0x1870FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1870FCu;
label_1870fc:
    // 0x1870fc: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x1870fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_187100:
    // 0x187100: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x187100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_187104:
    // 0x187104: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x187104u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_187108:
    // 0x187108: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x187108u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18710c:
    // 0x18710c: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x18710cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_187110:
    // 0x187110: 0x0  nop
    ctx->pc = 0x187110u;
    // NOP
label_187114:
    // 0x187114: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_187118:
    if (ctx->pc == 0x187118u) {
        ctx->pc = 0x187118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187114u;
        // 0x187118: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18711Cu;
        goto label_18711c;
    }
    ctx->pc = 0x187114u;
    {
        const bool branch_taken_0x187114 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x187118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187114u;
        // 0x187118: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x187114) {
            ctx->pc = 0x187128u;
            goto label_187128;
        }
    }
    ctx->pc = 0x18711Cu;
label_18711c:
    // 0x18711c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18711cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_187120:
    // 0x187120: 0xc05bd90  jal         func_16F640
label_187124:
    if (ctx->pc == 0x187124u) {
        ctx->pc = 0x187124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187120u;
        // 0x187124: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187128u;
        goto label_187128;
    }
    ctx->pc = 0x187120u;
    SET_GPR_U32(ctx, 31, 0x187128u);
    ctx->pc = 0x187124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187120u;
    // 0x187124: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x187120u, 0x187128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187128u;
label_187128:
    // 0x187128: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x187128u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_18712c:
    // 0x18712c: 0x26b50060  addiu       $s5, $s5, 0x60
    ctx->pc = 0x18712cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_187130:
    // 0x187130: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x187130u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_187134:
    // 0x187134: 0x26940060  addiu       $s4, $s4, 0x60
    ctx->pc = 0x187134u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
label_187138:
    // 0x187138: 0x26730060  addiu       $s3, $s3, 0x60
    ctx->pc = 0x187138u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_18713c:
    // 0x18713c: 0x2ac20006  slti        $v0, $s6, 0x6
    ctx->pc = 0x18713cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)6) ? 1 : 0);
label_187140:
    // 0x187140: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_187144:
    if (ctx->pc == 0x187144u) {
        ctx->pc = 0x187144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187140u;
        // 0x187144: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187148u;
        goto label_187148;
    }
    ctx->pc = 0x187140u;
    {
        const bool branch_taken_0x187140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x187144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187140u;
        // 0x187144: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187140) {
            ctx->pc = 0x187154u;
            goto label_187154;
        }
    }
    ctx->pc = 0x187148u;
label_187148:
    // 0x187148: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x187148u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_18714c:
    // 0x18714c: 0x1456ffb8  bne         $v0, $s6, . + 4 + (-0x48 << 2)
label_187150:
    if (ctx->pc == 0x187150u) {
        ctx->pc = 0x187154u;
        goto label_187154;
    }
    ctx->pc = 0x18714Cu;
    {
        const bool branch_taken_0x18714c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x18714c) {
            ctx->pc = 0x187030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_187030;
        }
    }
    ctx->pc = 0x187154u;
label_187154:
    // 0x187154: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x187154u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_187158:
    // 0x187158: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x187158u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_18715c:
    // 0x18715c: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x18715cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_187160:
    // 0x187160: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x187160u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_187164:
    // 0x187164: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x187164u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_187168:
    // 0x187168: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x187168u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_18716c:
    // 0x18716c: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x18716cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_187170:
    // 0x187170: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x187170u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_187174:
    // 0x187174: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x187174u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_187178:
    // 0x187178: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x187178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_18717c:
    // 0x18717c: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x18717cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_187180:
    // 0x187180: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x187180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_187184:
    // 0x187184: 0x3e00008  jr          $ra
label_187188:
    if (ctx->pc == 0x187188u) {
        ctx->pc = 0x187188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187184u;
        // 0x187188: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18718Cu;
        goto label_18718c;
    }
    ctx->pc = 0x187184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187184u;
        // 0x187188: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18718Cu;
label_18718c:
    // 0x18718c: 0x0  nop
    ctx->pc = 0x18718cu;
    // NOP
    ctx->pc = 0x187190u;
}
